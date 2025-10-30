#include <com/sun/tools/javac/comp/Attr.h>

#include <com/sun/source/tree/CaseTree$CaseKind.h>
#include <com/sun/source/tree/LambdaExpressionTree$BodyKind.h>
#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <com/sun/source/tree/ModifiersTree.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/source/util/SimpleTreeVisitor.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/DeferredLintHandler.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Preview.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol$BindingSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$RecordComponent.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$DelegatedType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$IntersectionClassType.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type$JCVoidType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type$UnionClassType.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotations.h>
#include <com/sun/tools/javac/code/TypeMetadata$Annotations.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$FunctionDescriptorLookupError.h>
#include <com/sun/tools/javac/code/Types$MapVisitor.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$LocalCacheContext.h>
#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <com/sun/tools/javac/comp/Attr$1.h>
#include <com/sun/tools/javac/comp/Attr$10.h>
#include <com/sun/tools/javac/comp/Attr$11.h>
#include <com/sun/tools/javac/comp/Attr$12.h>
#include <com/sun/tools/javac/comp/Attr$13.h>
#include <com/sun/tools/javac/comp/Attr$2.h>
#include <com/sun/tools/javac/comp/Attr$3.h>
#include <com/sun/tools/javac/comp/Attr$4.h>
#include <com/sun/tools/javac/comp/Attr$5.h>
#include <com/sun/tools/javac/comp/Attr$6.h>
#include <com/sun/tools/javac/comp/Attr$7.h>
#include <com/sun/tools/javac/comp/Attr$8.h>
#include <com/sun/tools/javac/comp/Attr$9.h>
#include <com/sun/tools/javac/comp/Attr$BreakAttr.h>
#include <com/sun/tools/javac/comp/Attr$CheckMode.h>
#include <com/sun/tools/javac/comp/Attr$ExpressionLambdaReturnContext.h>
#include <com/sun/tools/javac/comp/Attr$FunctionalReturnContext.h>
#include <com/sun/tools/javac/comp/Attr$IdentAttributer.h>
#include <com/sun/tools/javac/comp/Attr$LocalInitScanner.h>
#include <com/sun/tools/javac/comp/Attr$MethodAttrInfo.h>
#include <com/sun/tools/javac/comp/Attr$PostAttrAnalyzer.h>
#include <com/sun/tools/javac/comp/Attr$RecoveryInfo.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr$TargetInfo.h>
#include <com/sun/tools/javac/comp/Attr$TypeAnnotationsValidator.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/AttrRecover.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/ConstFold.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttributionMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredTypeMap.h>
#include <com/sun/tools/javac/comp/DeferredAttr$RecoveryDeferredTypeMap.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Flow.h>
#include <com/sun/tools/javac/comp/Infer$FreeTypeListener.h>
#include <com/sun/tools/javac/comp/Infer$InferenceException.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings.h>
#include <com/sun/tools/javac/comp/MatchBindingsComputer.h>
#include <com/sun/tools/javac/comp/MemberEnter.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <com/sun/tools/javac/comp/Resolve$AbstractMethodCheck.h>
#include <com/sun/tools/javac/comp/Resolve$AccessError.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableMethodException.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve$InvalidSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve$LogResolveHelper.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheck.h>
#include <com/sun/tools/javac/comp/Resolve$MethodReferenceCheck.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceChooser.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveDeferredRecoveryMap.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve$StaticError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/comp/TypeEnvs.h>
#include <com/sun/tools/javac/jvm/ByteCodes.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotatedType.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssert.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssignOp.h>
#include <com/sun/tools/javac/tree/JCTree$JCBinary.h>
#include <com/sun/tools/javac/tree/JCTree$JCBindingPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCBreak.h>
#include <com/sun/tools/javac/tree/JCTree$JCCase.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCCatch.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>
#include <com/sun/tools/javac/tree/JCTree$JCContinue.h>
#include <com/sun/tools/javac/tree/JCTree$JCDoWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCErroneous.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpressionStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCGuardPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCImport.h>
#include <com/sun/tools/javac/tree/JCTree$JCInstanceOf.h>
#include <com/sun/tools/javac/tree/JCTree$JCLabeledStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCParens.h>
#include <com/sun/tools/javac/tree/JCTree$JCParenthesizedPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/JCTree$JCSkip.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitch.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCSynchronized.h>
#include <com/sun/tools/javac/tree/JCTree$JCThrow.h>
#include <com/sun/tools/javac/tree/JCTree$JCTry.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeApply.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeIntersection.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeParameter.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeUnion.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCWildcard.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$TypeBoundKind.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo$PatternPrimaryType.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/tree/TreeTranslator.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Dependencies.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log$DiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log$DiscardDiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <com/sun/tools/javac/util/Position.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/EnumSet.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef ANNOTATED_TYPE
#undef APPLY
#undef ARRAY
#undef ASG
#undef ASSIGN
#undef ATTRIB_TO_TREE
#undef BINDINGPATTERN
#undef BOOLEAN
#undef BOT
#undef BREAK
#undef BYTE
#undef CASE_NULL
#undef CHAR
#undef CHECK
#undef CLASS
#undef CLASSDEF
#undef COMPOUND
#undef CONTINUE
#undef DEFAULTCASELABEL
#undef DEFAULT_METHODS
#undef DEFERRED
#undef DOLOOP
#undef DOUBLE
#undef EMPTY
#undef ENUM
#undef ERR
#undef ERROR
#undef EXCEPTION_PARAMETER
#undef EXEC
#undef EXPLICIT
#undef EXPRESSION
#undef EXTENDS
#undef FLOAT
#undef FORALL
#undef FOREACHLOOP
#undef FORLOOP
#undef FRAGMENT
#undef IDENT
#undef IMPLICIT
#undef INT
#undef INTERFACE
#undef INVOKE
#undef LABELLED
#undef LAMBDA
#undef LONG
#undef METHOD
#undef MTH
#undef NEW
#undef NEWCLASS
#undef NIL
#undef NONE
#undef NON_SEALED
#undef NOPOS
#undef NO_INFERENCE_HOOK
#undef NO_TREE_UPDATE
#undef NULLCHK
#undef PARENS
#undef PARENTHESIZEDPATTERN
#undef PATTERN_SWITCH
#undef PCK
#undef POLY
#undef PRIVATE
#undef RECORDS
#undef REFERENCE
#undef REIFIABLE_TYPES_INSTANCEOF
#undef RESOURCE_VARIABLE
#undef SELECT
#undef SERIAL
#undef SHORT
#undef SOURCE_LEVEL
#undef SPECULATIVE
#undef STANDALONE
#undef STATEMENT
#undef STATIC_INTERFACE_METHODS
#undef STATIC_INTERFACE_METHODS_INVOKE
#undef SUPER
#undef SUPER_OWNER_ATTRIBUTED
#undef SWITCH
#undef SWITCH_EXPRESSION
#undef SYNCHRONIZATION
#undef TO_BE_SET
#undef TRY
#undef TYP
#undef TYPEAPPLY
#undef TYPEVAR
#undef TYPE_ANNOTATIONS
#undef TYP_PCK
#undef UNBOUND
#undef UNCHECKED
#undef UNDETVAR
#undef VAL
#undef VAL_MTH
#undef VAL_TYP
#undef VAR
#undef VARDEF
#undef VOID
#undef WHILELOOP
#undef WILDCARD
#undef YIELD

using $Kinds$KindSelectorArray = $Array<::com::sun::tools::javac::code::Kinds$KindSelector>;
using $TypeArray = $Array<::com::sun::tools::javac::code::Type>;
using $TypeTagArray = $Array<::com::sun::tools::javac::code::TypeTag>;
using $CaseTree$CaseKind = ::com::sun::source::tree::CaseTree$CaseKind;
using $LambdaExpressionTree$BodyKind = ::com::sun::source::tree::LambdaExpressionTree$BodyKind;
using $MemberReferenceTree$ReferenceMode = ::com::sun::source::tree::MemberReferenceTree$ReferenceMode;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $SimpleTreeVisitor = ::com::sun::source::util::SimpleTreeVisitor;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $DeferredLintHandler = ::com::sun::tools::javac::code::DeferredLintHandler;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $Lint = ::com::sun::tools::javac::code::Lint;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Preview = ::com::sun::tools::javac::code::Preview;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$BindingSymbol = ::com::sun::tools::javac::code::Symbol$BindingSymbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$RecordComponent = ::com::sun::tools::javac::code::Symbol$RecordComponent;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$IntersectionClassType = ::com::sun::tools::javac::code::Type$IntersectionClassType;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $Type$JCVoidType = ::com::sun::tools::javac::code::Type$JCVoidType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UnionClassType = ::com::sun::tools::javac::code::Type$UnionClassType;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeAnnotations = ::com::sun::tools::javac::code::TypeAnnotations;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeMetadata$Annotations = ::com::sun::tools::javac::code::TypeMetadata$Annotations;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $Types$FunctionDescriptorLookupError = ::com::sun::tools::javac::code::Types$FunctionDescriptorLookupError;
using $Types$MapVisitor = ::com::sun::tools::javac::code::Types$MapVisitor;
using $Types$TypeMapping = ::com::sun::tools::javac::code::Types$TypeMapping;
using $Analyzer = ::com::sun::tools::javac::comp::Analyzer;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Annotate$AnnotationTypeMetadata = ::com::sun::tools::javac::comp::Annotate$AnnotationTypeMetadata;
using $ArgumentAttr = ::com::sun::tools::javac::comp::ArgumentAttr;
using $ArgumentAttr$LocalCacheContext = ::com::sun::tools::javac::comp::ArgumentAttr$LocalCacheContext;
using $Attr$1 = ::com::sun::tools::javac::comp::Attr$1;
using $Attr$10 = ::com::sun::tools::javac::comp::Attr$10;
using $Attr$11 = ::com::sun::tools::javac::comp::Attr$11;
using $Attr$12 = ::com::sun::tools::javac::comp::Attr$12;
using $Attr$13 = ::com::sun::tools::javac::comp::Attr$13;
using $Attr$2 = ::com::sun::tools::javac::comp::Attr$2;
using $Attr$3 = ::com::sun::tools::javac::comp::Attr$3;
using $Attr$4 = ::com::sun::tools::javac::comp::Attr$4;
using $Attr$5 = ::com::sun::tools::javac::comp::Attr$5;
using $Attr$6 = ::com::sun::tools::javac::comp::Attr$6;
using $Attr$7 = ::com::sun::tools::javac::comp::Attr$7;
using $Attr$8 = ::com::sun::tools::javac::comp::Attr$8;
using $Attr$9 = ::com::sun::tools::javac::comp::Attr$9;
using $Attr$BreakAttr = ::com::sun::tools::javac::comp::Attr$BreakAttr;
using $Attr$CheckMode = ::com::sun::tools::javac::comp::Attr$CheckMode;
using $Attr$ExpressionLambdaReturnContext = ::com::sun::tools::javac::comp::Attr$ExpressionLambdaReturnContext;
using $Attr$FunctionalReturnContext = ::com::sun::tools::javac::comp::Attr$FunctionalReturnContext;
using $Attr$IdentAttributer = ::com::sun::tools::javac::comp::Attr$IdentAttributer;
using $Attr$LocalInitScanner = ::com::sun::tools::javac::comp::Attr$LocalInitScanner;
using $Attr$MethodAttrInfo = ::com::sun::tools::javac::comp::Attr$MethodAttrInfo;
using $Attr$PostAttrAnalyzer = ::com::sun::tools::javac::comp::Attr$PostAttrAnalyzer;
using $Attr$RecoveryInfo = ::com::sun::tools::javac::comp::Attr$RecoveryInfo;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Attr$TargetInfo = ::com::sun::tools::javac::comp::Attr$TargetInfo;
using $Attr$TypeAnnotationsValidator = ::com::sun::tools::javac::comp::Attr$TypeAnnotationsValidator;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $AttrRecover = ::com::sun::tools::javac::comp::AttrRecover;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $Check$NestedCheckContext = ::com::sun::tools::javac::comp::Check$NestedCheckContext;
using $ConstFold = ::com::sun::tools::javac::comp::ConstFold;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$AttrMode = ::com::sun::tools::javac::comp::DeferredAttr$AttrMode;
using $DeferredAttr$AttributionMode = ::com::sun::tools::javac::comp::DeferredAttr$AttributionMode;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$DeferredTypeMap = ::com::sun::tools::javac::comp::DeferredAttr$DeferredTypeMap;
using $DeferredAttr$RecoveryDeferredTypeMap = ::com::sun::tools::javac::comp::DeferredAttr$RecoveryDeferredTypeMap;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Flow = ::com::sun::tools::javac::comp::Flow;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$FreeTypeListener = ::com::sun::tools::javac::comp::Infer$FreeTypeListener;
using $Infer$InferenceException = ::com::sun::tools::javac::comp::Infer$InferenceException;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $MatchBindingsComputer = ::com::sun::tools::javac::comp::MatchBindingsComputer;
using $MatchBindingsComputer$MatchBindings = ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings;
using $MemberEnter = ::com::sun::tools::javac::comp::MemberEnter;
using $Operators = ::com::sun::tools::javac::comp::Operators;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$AbstractMethodCheck = ::com::sun::tools::javac::comp::Resolve$AbstractMethodCheck;
using $Resolve$AccessError = ::com::sun::tools::javac::comp::Resolve$AccessError;
using $Resolve$InapplicableMethodException = ::com::sun::tools::javac::comp::Resolve$InapplicableMethodException;
using $Resolve$InapplicableSymbolError = ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError;
using $Resolve$InvalidSymbolError = ::com::sun::tools::javac::comp::Resolve$InvalidSymbolError;
using $Resolve$LogResolveHelper = ::com::sun::tools::javac::comp::Resolve$LogResolveHelper;
using $Resolve$LookupHelper = ::com::sun::tools::javac::comp::Resolve$LookupHelper;
using $Resolve$MethodCheck = ::com::sun::tools::javac::comp::Resolve$MethodCheck;
using $Resolve$MethodReferenceCheck = ::com::sun::tools::javac::comp::Resolve$MethodReferenceCheck;
using $Resolve$MethodResolutionContext = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $Resolve$ReferenceChooser = ::com::sun::tools::javac::comp::Resolve$ReferenceChooser;
using $Resolve$ReferenceLookupHelper = ::com::sun::tools::javac::comp::Resolve$ReferenceLookupHelper;
using $Resolve$ResolveDeferredRecoveryMap = ::com::sun::tools::javac::comp::Resolve$ResolveDeferredRecoveryMap;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $Resolve$StaticError = ::com::sun::tools::javac::comp::Resolve$StaticError;
using $TypeEnter = ::com::sun::tools::javac::comp::TypeEnter;
using $TypeEnvs = ::com::sun::tools::javac::comp::TypeEnvs;
using $ByteCodes = ::com::sun::tools::javac::jvm::ByteCodes;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotatedType = ::com::sun::tools::javac::tree::JCTree$JCAnnotatedType;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$JCArrayAccess = ::com::sun::tools::javac::tree::JCTree$JCArrayAccess;
using $JCTree$JCArrayTypeTree = ::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree;
using $JCTree$JCAssert = ::com::sun::tools::javac::tree::JCTree$JCAssert;
using $JCTree$JCAssign = ::com::sun::tools::javac::tree::JCTree$JCAssign;
using $JCTree$JCAssignOp = ::com::sun::tools::javac::tree::JCTree$JCAssignOp;
using $JCTree$JCBinary = ::com::sun::tools::javac::tree::JCTree$JCBinary;
using $JCTree$JCBindingPattern = ::com::sun::tools::javac::tree::JCTree$JCBindingPattern;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCBreak = ::com::sun::tools::javac::tree::JCTree$JCBreak;
using $JCTree$JCCase = ::com::sun::tools::javac::tree::JCTree$JCCase;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCCatch = ::com::sun::tools::javac::tree::JCTree$JCCatch;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCContinue = ::com::sun::tools::javac::tree::JCTree$JCContinue;
using $JCTree$JCDoWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop;
using $JCTree$JCEnhancedForLoop = ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop;
using $JCTree$JCErroneous = ::com::sun::tools::javac::tree::JCTree$JCErroneous;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCExpressionStatement = ::com::sun::tools::javac::tree::JCTree$JCExpressionStatement;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCForLoop = ::com::sun::tools::javac::tree::JCTree$JCForLoop;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
using $JCTree$JCGuardPattern = ::com::sun::tools::javac::tree::JCTree$JCGuardPattern;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCIf = ::com::sun::tools::javac::tree::JCTree$JCIf;
using $JCTree$JCImport = ::com::sun::tools::javac::tree::JCTree$JCImport;
using $JCTree$JCInstanceOf = ::com::sun::tools::javac::tree::JCTree$JCInstanceOf;
using $JCTree$JCLabeledStatement = ::com::sun::tools::javac::tree::JCTree$JCLabeledStatement;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCLambda$ParameterKind = ::com::sun::tools::javac::tree::JCTree$JCLambda$ParameterKind;
using $JCTree$JCLiteral = ::com::sun::tools::javac::tree::JCTree$JCLiteral;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMemberReference$ReferenceKind = ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
using $JCTree$JCParens = ::com::sun::tools::javac::tree::JCTree$JCParens;
using $JCTree$JCParenthesizedPattern = ::com::sun::tools::javac::tree::JCTree$JCParenthesizedPattern;
using $JCTree$JCPattern = ::com::sun::tools::javac::tree::JCTree$JCPattern;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCPolyExpression$PolyKind = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression$PolyKind;
using $JCTree$JCPrimitiveTypeTree = ::com::sun::tools::javac::tree::JCTree$JCPrimitiveTypeTree;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $JCTree$JCSkip = ::com::sun::tools::javac::tree::JCTree$JCSkip;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCSwitch = ::com::sun::tools::javac::tree::JCTree$JCSwitch;
using $JCTree$JCSwitchExpression = ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression;
using $JCTree$JCSynchronized = ::com::sun::tools::javac::tree::JCTree$JCSynchronized;
using $JCTree$JCThrow = ::com::sun::tools::javac::tree::JCTree$JCThrow;
using $JCTree$JCTry = ::com::sun::tools::javac::tree::JCTree$JCTry;
using $JCTree$JCTypeApply = ::com::sun::tools::javac::tree::JCTree$JCTypeApply;
using $JCTree$JCTypeCast = ::com::sun::tools::javac::tree::JCTree$JCTypeCast;
using $JCTree$JCTypeIntersection = ::com::sun::tools::javac::tree::JCTree$JCTypeIntersection;
using $JCTree$JCTypeParameter = ::com::sun::tools::javac::tree::JCTree$JCTypeParameter;
using $JCTree$JCTypeUnion = ::com::sun::tools::javac::tree::JCTree$JCTypeUnion;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$JCWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCWhileLoop;
using $JCTree$JCWildcard = ::com::sun::tools::javac::tree::JCTree$JCWildcard;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$TypeBoundKind = ::com::sun::tools::javac::tree::JCTree$TypeBoundKind;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeInfo$PatternPrimaryType = ::com::sun::tools::javac::tree::TreeInfo$PatternPrimaryType;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $TreeTranslator = ::com::sun::tools::javac::tree::TreeTranslator;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Dependencies = ::com::sun::tools::javac::util::Dependencies;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticInfo = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$DiagnosticHandler = ::com::sun::tools::javac::util::Log$DiagnosticHandler;
using $Log$DiscardDiagnosticHandler = ::com::sun::tools::javac::util::Log$DiscardDiagnosticHandler;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Options = ::com::sun::tools::javac::util::Options;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $Position = ::com::sun::tools::javac::util::Position;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $BiConsumer = ::java::util::function::BiConsumer;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Collector = ::java::util::stream::Collector;
using $Stream = ::java::util::stream::Stream;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Attr$$Lambda$lambda$check$0 : public $Infer$FreeTypeListener {
	$class(Attr$$Lambda$lambda$check$0, $NO_CLASS_INIT, $Infer$FreeTypeListener)
public:
	void init$(Attr* inst, $Attr$ResultInfo* resultInfo, $InferenceContext* inferenceContext, $JCTree* tree, $Type* found, $Kinds$KindSelector* ownkind) {
		$set(this, inst$, inst);
		$set(this, resultInfo, resultInfo);
		$set(this, inferenceContext, inferenceContext);
		$set(this, tree, tree);
		$set(this, found, found);
		$set(this, ownkind, ownkind);
	}
	virtual void typesInferred($InferenceContext* instantiatedContext) override {
		$nc(inst$)->lambda$check$0(resultInfo, inferenceContext, tree, found, ownkind, instantiatedContext);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$check$0>());
	}
	Attr* inst$ = nullptr;
	$Attr$ResultInfo* resultInfo = nullptr;
	$InferenceContext* inferenceContext = nullptr;
	$JCTree* tree = nullptr;
	$Type* found = nullptr;
	$Kinds$KindSelector* ownkind = nullptr;
	static $FieldInfo fieldInfos[7];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$check$0::fieldInfos[7] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$check$0, inst$)},
	{"resultInfo", "Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$check$0, resultInfo)},
	{"inferenceContext", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$check$0, inferenceContext)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$check$0, tree)},
	{"found", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$check$0, found)},
	{"ownkind", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$check$0, ownkind)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$check$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Kinds$KindSelector;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$check$0::*)(Attr*,$Attr$ResultInfo*,$InferenceContext*,$JCTree*,$Type*,$Kinds$KindSelector*)>(&Attr$$Lambda$lambda$check$0::init$))},
	{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$check$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$check$0",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Infer$FreeTypeListener",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$check$0::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$check$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$check$0::class$ = nullptr;

class Attr$$Lambda$leave$1 : public $Consumer {
	$class(Attr$$Lambda$leave$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$) override {
		$sure($ArgumentAttr$LocalCacheContext, inst$)->leave();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$leave$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Attr$$Lambda$leave$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$leave$1::*)()>(&Attr$$Lambda$leave$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$leave$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$leave$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* Attr$$Lambda$leave$1::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$leave$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$leave$1::class$ = nullptr;

class Attr$$Lambda$lambda$visitMethodDef$1$2 : public $Predicate {
	$class(Attr$$Lambda$lambda$visitMethodDef$1$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$($JCTree$JCMethodDecl* tree) {
		$set(this, tree, tree);
	}
	virtual bool test(Object$* rc) override {
		 return Attr::lambda$visitMethodDef$1(tree, $cast($Symbol$RecordComponent, rc));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$visitMethodDef$1$2>());
	}
	$JCTree$JCMethodDecl* tree = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$visitMethodDef$1$2::fieldInfos[2] = {
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$visitMethodDef$1$2, tree)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$visitMethodDef$1$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$visitMethodDef$1$2::*)($JCTree$JCMethodDecl*)>(&Attr$$Lambda$lambda$visitMethodDef$1$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$visitMethodDef$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$visitMethodDef$1$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$visitMethodDef$1$2::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$visitMethodDef$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$visitMethodDef$1$2::class$ = nullptr;

class Attr$$Lambda$lambda$visitMethodDef$2$3 : public $Function {
	$class(Attr$$Lambda$lambda$visitMethodDef$2$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* vd) override {
		 return $of(Attr::lambda$visitMethodDef$2($cast($JCTree$JCVariableDecl, vd)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$visitMethodDef$2$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Attr$$Lambda$lambda$visitMethodDef$2$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$visitMethodDef$2$3::*)()>(&Attr$$Lambda$lambda$visitMethodDef$2$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$visitMethodDef$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$visitMethodDef$2$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Attr$$Lambda$lambda$visitMethodDef$2$3::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$visitMethodDef$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$visitMethodDef$2$3::class$ = nullptr;

class Attr$$Lambda$lambda$visitMethodDef$3$4 : public $Function {
	$class(Attr$$Lambda$lambda$visitMethodDef$3$4, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* vd) override {
		 return $of(Attr::lambda$visitMethodDef$3($cast($JCTree$JCVariableDecl, vd)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$visitMethodDef$3$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Attr$$Lambda$lambda$visitMethodDef$3$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$visitMethodDef$3$4::*)()>(&Attr$$Lambda$lambda$visitMethodDef$3$4::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$visitMethodDef$3$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$visitMethodDef$3$4",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Attr$$Lambda$lambda$visitMethodDef$3$4::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$visitMethodDef$3$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$visitMethodDef$3$4::class$ = nullptr;

class Attr$$Lambda$lambda$visitMethodDef$4$5 : public $Function {
	$class(Attr$$Lambda$lambda$visitMethodDef$4$5, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* p) override {
		 return $of(Attr::lambda$visitMethodDef$4($cast($Symbol$VarSymbol, p)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$visitMethodDef$4$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Attr$$Lambda$lambda$visitMethodDef$4$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$visitMethodDef$4$5::*)()>(&Attr$$Lambda$lambda$visitMethodDef$4$5::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$visitMethodDef$4$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$visitMethodDef$4$5",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Attr$$Lambda$lambda$visitMethodDef$4$5::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$visitMethodDef$4$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$visitMethodDef$4$5::class$ = nullptr;

class Attr$$Lambda$lambda$isNonArgsMethodInObject$5$6 : public $Predicate {
	$class(Attr$$Lambda$lambda$isNonArgsMethodInObject$5$6, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* s) override {
		 return Attr::lambda$isNonArgsMethodInObject$5($cast($Symbol, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$isNonArgsMethodInObject$5$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Attr$$Lambda$lambda$isNonArgsMethodInObject$5$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$isNonArgsMethodInObject$5$6::*)()>(&Attr$$Lambda$lambda$isNonArgsMethodInObject$5$6::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$isNonArgsMethodInObject$5$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$isNonArgsMethodInObject$5$6",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Attr$$Lambda$lambda$isNonArgsMethodInObject$5$6::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$isNonArgsMethodInObject$5$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$isNonArgsMethodInObject$5$6::class$ = nullptr;

class Attr$$Lambda$enter$7 : public $Consumer {
	$class(Attr$$Lambda$enter$7, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Scope$WriteableScope* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* c) override {
		$nc(inst$)->enter($cast($Symbol, c));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$enter$7>());
	}
	$Scope$WriteableScope* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$enter$7::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Attr$$Lambda$enter$7, inst$)},
	{}
};
$MethodInfo Attr$$Lambda$enter$7::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Scope$WriteableScope;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$enter$7::*)($Scope$WriteableScope*)>(&Attr$$Lambda$enter$7::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$enter$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$enter$7",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$enter$7::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$enter$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$enter$7::class$ = nullptr;

class Attr$$Lambda$preserveBinding$8 : public $Consumer {
	$class(Attr$$Lambda$preserveBinding$8, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$) override {
		$sure($Symbol$BindingSymbol, inst$)->preserveBinding();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$preserveBinding$8>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Attr$$Lambda$preserveBinding$8::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$preserveBinding$8::*)()>(&Attr$$Lambda$preserveBinding$8::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$preserveBinding$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$preserveBinding$8",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* Attr$$Lambda$preserveBinding$8::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$preserveBinding$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$preserveBinding$8::class$ = nullptr;

class Attr$$Lambda$lambda$visitSwitch$6$9 : public $BiConsumer {
	$class(Attr$$Lambda$lambda$visitSwitch$6$9, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(Attr* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* c, Object$* caseEnv) override {
		$nc(inst$)->lambda$visitSwitch$6($cast($JCTree$JCCase, c), $cast($Env, caseEnv));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$visitSwitch$6$9>());
	}
	Attr* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$visitSwitch$6$9::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$visitSwitch$6$9, inst$)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$visitSwitch$6$9::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$visitSwitch$6$9::*)(Attr*)>(&Attr$$Lambda$lambda$visitSwitch$6$9::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$visitSwitch$6$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$visitSwitch$6$9",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$visitSwitch$6$9::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$visitSwitch$6$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$visitSwitch$6$9::class$ = nullptr;

class Attr$$Lambda$lambda$visitSwitchExpression$7$10 : public $BiConsumer {
	$class(Attr$$Lambda$lambda$visitSwitchExpression$7$10, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(Attr* inst, $Attr$ResultInfo* condInfo, $JCTree$JCSwitchExpression* tree, $ListBuffer* caseTypePositions, $ListBuffer* caseTypes) {
		$set(this, inst$, inst);
		$set(this, condInfo, condInfo);
		$set(this, tree, tree);
		$set(this, caseTypePositions, caseTypePositions);
		$set(this, caseTypes, caseTypes);
	}
	virtual void accept(Object$* c, Object$* caseEnv) override {
		$nc(inst$)->lambda$visitSwitchExpression$7(condInfo, tree, caseTypePositions, caseTypes, $cast($JCTree$JCCase, c), $cast($Env, caseEnv));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$visitSwitchExpression$7$10>());
	}
	Attr* inst$ = nullptr;
	$Attr$ResultInfo* condInfo = nullptr;
	$JCTree$JCSwitchExpression* tree = nullptr;
	$ListBuffer* caseTypePositions = nullptr;
	$ListBuffer* caseTypes = nullptr;
	static $FieldInfo fieldInfos[6];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$visitSwitchExpression$7$10::fieldInfos[6] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$visitSwitchExpression$7$10, inst$)},
	{"condInfo", "Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$visitSwitchExpression$7$10, condInfo)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$visitSwitchExpression$7$10, tree)},
	{"caseTypePositions", "Lcom/sun/tools/javac/util/ListBuffer;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$visitSwitchExpression$7$10, caseTypePositions)},
	{"caseTypes", "Lcom/sun/tools/javac/util/ListBuffer;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$visitSwitchExpression$7$10, caseTypes)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$visitSwitchExpression$7$10::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;Lcom/sun/tools/javac/util/ListBuffer;Lcom/sun/tools/javac/util/ListBuffer;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$visitSwitchExpression$7$10::*)(Attr*,$Attr$ResultInfo*,$JCTree$JCSwitchExpression*,$ListBuffer*,$ListBuffer*)>(&Attr$$Lambda$lambda$visitSwitchExpression$7$10::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$visitSwitchExpression$7$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$visitSwitchExpression$7$10",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$visitSwitchExpression$7$10::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$visitSwitchExpression$7$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$visitSwitchExpression$7$10::class$ = nullptr;

class Attr$$Lambda$lambda$handleSwitch$8$11 : public $Function {
	$class(Attr$$Lambda$lambda$handleSwitch$8$11, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* c) override {
		 return $of(Attr::lambda$handleSwitch$8($cast($JCTree$JCCase, c)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$handleSwitch$8$11>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Attr$$Lambda$lambda$handleSwitch$8$11::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$handleSwitch$8$11::*)()>(&Attr$$Lambda$lambda$handleSwitch$8$11::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$handleSwitch$8$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$handleSwitch$8$11",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Attr$$Lambda$lambda$handleSwitch$8$11::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$handleSwitch$8$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$handleSwitch$8$11::class$ = nullptr;

class Attr$$Lambda$lambda$handleSwitch$9$12 : public $Predicate {
	$class(Attr$$Lambda$lambda$handleSwitch$9$12, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* l) override {
		 return Attr::lambda$handleSwitch$9($cast($JCTree$JCCaseLabel, l));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$handleSwitch$9$12>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Attr$$Lambda$lambda$handleSwitch$9$12::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$handleSwitch$9$12::*)()>(&Attr$$Lambda$lambda$handleSwitch$9$12::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$handleSwitch$9$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$handleSwitch$9$12",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Attr$$Lambda$lambda$handleSwitch$9$12::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$handleSwitch$9$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$handleSwitch$9$12::class$ = nullptr;

class Attr$$Lambda$lambda$condType$10$13 : public $Predicate {
	$class(Attr$$Lambda$lambda$condType$10$13, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Attr* inst, $Type* first) {
		$set(this, inst$, inst);
		$set(this, first, first);
	}
	virtual bool test(Object$* t) override {
		 return $nc(inst$)->lambda$condType$10(first, $cast($Type, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$condType$10$13>());
	}
	Attr* inst$ = nullptr;
	$Type* first = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$condType$10$13::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$condType$10$13, inst$)},
	{"first", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$condType$10$13, first)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$condType$10$13::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$condType$10$13::*)(Attr*,$Type*)>(&Attr$$Lambda$lambda$condType$10$13::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$condType$10$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$condType$10$13",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$condType$10$13::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$condType$10$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$condType$10$13::class$ = nullptr;

class Attr$$Lambda$lambda$condType$11$14 : public $Function {
	$class(Attr$$Lambda$lambda$condType$11$14, $NO_CLASS_INIT, $Function)
public:
	void init$(Attr* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* t) override {
		 return $of($nc(inst$)->lambda$condType$11($cast($Type, t)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$condType$11$14>());
	}
	Attr* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$condType$11$14::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$condType$11$14, inst$)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$condType$11$14::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$condType$11$14::*)(Attr*)>(&Attr$$Lambda$lambda$condType$11$14::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$condType$11$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$condType$11$14",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$condType$11$14::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$condType$11$14, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$condType$11$14::class$ = nullptr;

class Attr$$Lambda$lambda$condType$12$15 : public $Predicate {
	$class(Attr$$Lambda$lambda$condType$12$15, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* t) override {
		 return Attr::lambda$condType$12($cast($Type, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$condType$12$15>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Attr$$Lambda$lambda$condType$12$15::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$condType$12$15::*)()>(&Attr$$Lambda$lambda$condType$12$15::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$condType$12$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$condType$12$15",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Attr$$Lambda$lambda$condType$12$15::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$condType$12$15, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$condType$12$15::class$ = nullptr;

class Attr$$Lambda$lambda$condType$13$16 : public $Predicate {
	$class(Attr$$Lambda$lambda$condType$13$16, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Type* type) {
		$set(this, type, type);
	}
	virtual bool test(Object$* t) override {
		 return Attr::lambda$condType$13(type, $cast($Type, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$condType$13$16>());
	}
	$Type* type = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$condType$13$16::fieldInfos[2] = {
	{"type", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$condType$13$16, type)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$condType$13$16::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$condType$13$16::*)($Type*)>(&Attr$$Lambda$lambda$condType$13$16::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$condType$13$16::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$condType$13$16",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$condType$13$16::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$condType$13$16, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$condType$13$16::class$ = nullptr;

class Attr$$Lambda$lambda$condType$14$17 : public $Predicate {
	$class(Attr$$Lambda$lambda$condType$14$17, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Attr* inst, $Type* type) {
		$set(this, inst$, inst);
		$set(this, type, type);
	}
	virtual bool test(Object$* t) override {
		 return $nc(inst$)->lambda$condType$14(type, $cast($Type, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$condType$14$17>());
	}
	Attr* inst$ = nullptr;
	$Type* type = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$condType$14$17::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$condType$14$17, inst$)},
	{"type", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$condType$14$17, type)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$condType$14$17::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$condType$14$17::*)(Attr*,$Type*)>(&Attr$$Lambda$lambda$condType$14$17::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$condType$14$17::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$condType$14$17",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$condType$14$17::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$condType$14$17, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$condType$14$17::class$ = nullptr;

class Attr$$Lambda$lambda$condType$15$18 : public $Predicate {
	$class(Attr$$Lambda$lambda$condType$15$18, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Attr* inst, $Type* candidate) {
		$set(this, inst$, inst);
		$set(this, candidate, candidate);
	}
	virtual bool test(Object$* t) override {
		 return $nc(inst$)->lambda$condType$15(candidate, $cast($Type, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$condType$15$18>());
	}
	Attr* inst$ = nullptr;
	$Type* candidate = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$condType$15$18::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$condType$15$18, inst$)},
	{"candidate", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$condType$15$18, candidate)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$condType$15$18::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$condType$15$18::*)(Attr*,$Type*)>(&Attr$$Lambda$lambda$condType$15$18::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$condType$15$18::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$condType$15$18",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$condType$15$18::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$condType$15$18, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$condType$15$18::class$ = nullptr;

class Attr$$Lambda$lambda$condType$16$19 : public $Function {
	$class(Attr$$Lambda$lambda$condType$16$19, $NO_CLASS_INIT, $Function)
public:
	void init$(Attr* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* t) override {
		 return $of($nc(inst$)->lambda$condType$16($cast($Type, t)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$condType$16$19>());
	}
	Attr* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$condType$16$19::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$condType$16$19, inst$)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$condType$16$19::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$condType$16$19::*)(Attr*)>(&Attr$$Lambda$lambda$condType$16$19::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$condType$16$19::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$condType$16$19",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$condType$16$19::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$condType$16$19, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$condType$16$19::class$ = nullptr;

class Attr$$Lambda$lambda$condType$18$20 : public $Predicate {
	$class(Attr$$Lambda$lambda$condType$18$20, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Attr* inst, $Type* type) {
		$set(this, inst$, inst);
		$set(this, type, type);
	}
	virtual bool test(Object$* t) override {
		 return $nc(inst$)->lambda$condType$18(type, $cast($Type, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$condType$18$20>());
	}
	Attr* inst$ = nullptr;
	$Type* type = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$condType$18$20::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$condType$18$20, inst$)},
	{"type", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$condType$18$20, type)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$condType$18$20::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$condType$18$20::*)(Attr*,$Type*)>(&Attr$$Lambda$lambda$condType$18$20::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$condType$18$20::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$condType$18$20",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$condType$18$20::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$condType$18$20, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$condType$18$20::class$ = nullptr;

class Attr$$Lambda$lambda$condType$19$21 : public $Function {
	$class(Attr$$Lambda$lambda$condType$19$21, $NO_CLASS_INIT, $Function)
public:
	void init$(Attr* inst, $Iterator* posIt) {
		$set(this, inst$, inst);
		$set(this, posIt, posIt);
	}
	virtual $Object* apply(Object$* t) override {
		 return $of($nc(inst$)->lambda$condType$19(posIt, $cast($Type, t)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$condType$19$21>());
	}
	Attr* inst$ = nullptr;
	$Iterator* posIt = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$condType$19$21::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$condType$19$21, inst$)},
	{"posIt", "Ljava/util/Iterator;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$condType$19$21, posIt)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$condType$19$21::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Ljava/util/Iterator;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$condType$19$21::*)(Attr*,$Iterator*)>(&Attr$$Lambda$lambda$condType$19$21::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$condType$19$21::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$condType$19$21",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$condType$19$21::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$condType$19$21, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$condType$19$21::class$ = nullptr;

class Attr$$Lambda$lambda$condType$20$22 : public $Function {
	$class(Attr$$Lambda$lambda$condType$20$22, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* t) override {
		 return $of(Attr::lambda$condType$20($cast($Type, t)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$condType$20$22>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Attr$$Lambda$lambda$condType$20$22::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$condType$20$22::*)()>(&Attr$$Lambda$lambda$condType$20$22::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$condType$20$22::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$condType$20$22",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Attr$$Lambda$lambda$condType$20$22::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$condType$20$22, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$condType$20$22::class$ = nullptr;

class Attr$$Lambda$lambda$condType$21$23 : public $Predicate {
	$class(Attr$$Lambda$lambda$condType$21$23, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* t) override {
		 return Attr::lambda$condType$21($cast($Type, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$condType$21$23>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Attr$$Lambda$lambda$condType$21$23::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$condType$21$23::*)()>(&Attr$$Lambda$lambda$condType$21$23::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$condType$21$23::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$condType$21$23",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Attr$$Lambda$lambda$condType$21$23::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$condType$21$23, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$condType$21$23::class$ = nullptr;

class Attr$$Lambda$lambda$visitNewClass$22$24 : public $Infer$FreeTypeListener {
	$class(Attr$$Lambda$lambda$visitNewClass$22$24, $NO_CLASS_INIT, $Infer$FreeTypeListener)
public:
	void init$($JCTree$JCNewClass* tree) {
		$set(this, tree, tree);
	}
	virtual void typesInferred($InferenceContext* instantiatedContext) override {
		Attr::lambda$visitNewClass$22(tree, instantiatedContext);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$visitNewClass$22$24>());
	}
	$JCTree$JCNewClass* tree = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$visitNewClass$22$24::fieldInfos[2] = {
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$visitNewClass$22$24, tree)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$visitNewClass$22$24::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$visitNewClass$22$24::*)($JCTree$JCNewClass*)>(&Attr$$Lambda$lambda$visitNewClass$22$24::init$))},
	{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$visitNewClass$22$24::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$visitNewClass$22$24",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Infer$FreeTypeListener",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$visitNewClass$22$24::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$visitNewClass$22$24, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$visitNewClass$22$24::class$ = nullptr;

class Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25 : public $Infer$FreeTypeListener {
	$class(Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25, $NO_CLASS_INIT, $Infer$FreeTypeListener)
public:
	void init$(Attr* inst, $JCTree$JCNewClass* tree, $JCTree$JCExpression* clazz, $Attr$ResultInfo* resultInfoForClassDefinition, $JCTree$JCClassDecl* cdef, $Env* localEnv, $List* argtypes, $List* typeargtypes, $Kinds$KindSelector* pkind) {
		$set(this, inst$, inst);
		$set(this, tree, tree);
		$set(this, clazz, clazz);
		$set(this, resultInfoForClassDefinition, resultInfoForClassDefinition);
		$set(this, cdef, cdef);
		$set(this, localEnv, localEnv);
		$set(this, argtypes, argtypes);
		$set(this, typeargtypes, typeargtypes);
		$set(this, pkind, pkind);
	}
	virtual void typesInferred($InferenceContext* instantiatedContext) override {
		$nc(inst$)->lambda$visitAnonymousClassDefinition$23(tree, clazz, resultInfoForClassDefinition, cdef, localEnv, argtypes, typeargtypes, pkind, instantiatedContext);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25>());
	}
	Attr* inst$ = nullptr;
	$JCTree$JCNewClass* tree = nullptr;
	$JCTree$JCExpression* clazz = nullptr;
	$Attr$ResultInfo* resultInfoForClassDefinition = nullptr;
	$JCTree$JCClassDecl* cdef = nullptr;
	$Env* localEnv = nullptr;
	$List* argtypes = nullptr;
	$List* typeargtypes = nullptr;
	$Kinds$KindSelector* pkind = nullptr;
	static $FieldInfo fieldInfos[10];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25::fieldInfos[10] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25, inst$)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25, tree)},
	{"clazz", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25, clazz)},
	{"resultInfoForClassDefinition", "Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25, resultInfoForClassDefinition)},
	{"cdef", "Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25, cdef)},
	{"localEnv", "Lcom/sun/tools/javac/comp/Env;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25, localEnv)},
	{"argtypes", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25, argtypes)},
	{"typeargtypes", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25, typeargtypes)},
	{"pkind", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25, pkind)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Kinds$KindSelector;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25::*)(Attr*,$JCTree$JCNewClass*,$JCTree$JCExpression*,$Attr$ResultInfo*,$JCTree$JCClassDecl*,$Env*,$List*,$List*,$Kinds$KindSelector*)>(&Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25::init$))},
	{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Infer$FreeTypeListener",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25::class$ = nullptr;

class Attr$$Lambda$lambda$checkAccessibleTypes$24$26 : public $Infer$FreeTypeListener {
	$class(Attr$$Lambda$lambda$checkAccessibleTypes$24$26, $NO_CLASS_INIT, $Infer$FreeTypeListener)
public:
	void init$(Attr* inst, $JCDiagnostic$DiagnosticPosition* pos, $Env* env, $List* ts) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, env, env);
		$set(this, ts, ts);
	}
	virtual void typesInferred($InferenceContext* solvedContext) override {
		$nc(inst$)->lambda$checkAccessibleTypes$24(pos, env, ts, solvedContext);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$checkAccessibleTypes$24$26>());
	}
	Attr* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	$Env* env = nullptr;
	$List* ts = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$checkAccessibleTypes$24$26::fieldInfos[5] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$checkAccessibleTypes$24$26, inst$)},
	{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$checkAccessibleTypes$24$26, pos)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$checkAccessibleTypes$24$26, env)},
	{"ts", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$checkAccessibleTypes$24$26, ts)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$checkAccessibleTypes$24$26::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$checkAccessibleTypes$24$26::*)(Attr*,$JCDiagnostic$DiagnosticPosition*,$Env*,$List*)>(&Attr$$Lambda$lambda$checkAccessibleTypes$24$26::init$))},
	{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$checkAccessibleTypes$24$26::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$checkAccessibleTypes$24$26",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Infer$FreeTypeListener",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$checkAccessibleTypes$24$26::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$checkAccessibleTypes$24$26, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$checkAccessibleTypes$24$26::class$ = nullptr;

class Attr$$Lambda$lambda$checkReferenceCompatible$25$27 : public $Infer$FreeTypeListener {
	$class(Attr$$Lambda$lambda$checkReferenceCompatible$25$27, $NO_CLASS_INIT, $Infer$FreeTypeListener)
public:
	void init$($JCTree$JCMemberReference* tree, $Type* refType) {
		$set(this, tree, tree);
		$set(this, refType, refType);
	}
	virtual void typesInferred($InferenceContext* instantiatedContext) override {
		Attr::lambda$checkReferenceCompatible$25(tree, refType, instantiatedContext);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$checkReferenceCompatible$25$27>());
	}
	$JCTree$JCMemberReference* tree = nullptr;
	$Type* refType = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$checkReferenceCompatible$25$27::fieldInfos[3] = {
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$checkReferenceCompatible$25$27, tree)},
	{"refType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$checkReferenceCompatible$25$27, refType)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$checkReferenceCompatible$25$27::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$checkReferenceCompatible$25$27::*)($JCTree$JCMemberReference*,$Type*)>(&Attr$$Lambda$lambda$checkReferenceCompatible$25$27::init$))},
	{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$checkReferenceCompatible$25$27::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$checkReferenceCompatible$25$27",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Infer$FreeTypeListener",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$checkReferenceCompatible$25$27::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$checkReferenceCompatible$25$27, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$checkReferenceCompatible$25$27::class$ = nullptr;

class Attr$$Lambda$lambda$checkExConstraints$26$28 : public $Predicate {
	$class(Attr$$Lambda$lambda$checkExConstraints$26$28, $NO_CLASS_INIT, $Predicate)
public:
	void init$($InferenceContext* inferenceContext) {
		$set(this, inferenceContext, inferenceContext);
	}
	virtual bool test(Object$* e) override {
		 return Attr::lambda$checkExConstraints$26(inferenceContext, $cast($Type, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$checkExConstraints$26$28>());
	}
	$InferenceContext* inferenceContext = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$checkExConstraints$26$28::fieldInfos[2] = {
	{"inferenceContext", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$checkExConstraints$26$28, inferenceContext)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$checkExConstraints$26$28::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$checkExConstraints$26$28::*)($InferenceContext*)>(&Attr$$Lambda$lambda$checkExConstraints$26$28::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$checkExConstraints$26$28::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$checkExConstraints$26$28",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$checkExConstraints$26$28::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$checkExConstraints$26$28, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$checkExConstraints$26$28::class$ = nullptr;

class Attr$$Lambda$lambda$checkExConstraints$27$29 : public $Predicate {
	$class(Attr$$Lambda$lambda$checkExConstraints$27$29, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Attr* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* e) override {
		 return $nc(inst$)->lambda$checkExConstraints$27($cast($Type, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$checkExConstraints$27$29>());
	}
	Attr* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$checkExConstraints$27$29::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$checkExConstraints$27$29, inst$)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$checkExConstraints$27$29::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$checkExConstraints$27$29::*)(Attr*)>(&Attr$$Lambda$lambda$checkExConstraints$27$29::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$checkExConstraints$27$29::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$checkExConstraints$27$29",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$checkExConstraints$27$29::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$checkExConstraints$27$29, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$checkExConstraints$27$29::class$ = nullptr;

class Attr$$Lambda$lambda$checkExConstraints$29$30 : public $Consumer {
	$class(Attr$$Lambda$lambda$checkExConstraints$29$30, $NO_CLASS_INIT, $Consumer)
public:
	void init$(Attr* inst, $List* nonProperAsUndet) {
		$set(this, inst$, inst);
		$set(this, nonProperAsUndet, nonProperAsUndet);
	}
	virtual void accept(Object$* checkedEx) override {
		$nc(inst$)->lambda$checkExConstraints$29(nonProperAsUndet, $cast($Type, checkedEx));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$checkExConstraints$29$30>());
	}
	Attr* inst$ = nullptr;
	$List* nonProperAsUndet = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$checkExConstraints$29$30::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$checkExConstraints$29$30, inst$)},
	{"nonProperAsUndet", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$checkExConstraints$29$30, nonProperAsUndet)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$checkExConstraints$29$30::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$checkExConstraints$29$30::*)(Attr*,$List*)>(&Attr$$Lambda$lambda$checkExConstraints$29$30::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$checkExConstraints$29$30::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$checkExConstraints$29$30",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$checkExConstraints$29$30::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$checkExConstraints$29$30, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$checkExConstraints$29$30::class$ = nullptr;

class Attr$$Lambda$lambda$checkExConstraints$30$31 : public $Predicate {
	$class(Attr$$Lambda$lambda$checkExConstraints$30$31, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* t) override {
		 return Attr::lambda$checkExConstraints$30($cast($Type, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$checkExConstraints$30$31>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Attr$$Lambda$lambda$checkExConstraints$30$31::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$checkExConstraints$30$31::*)()>(&Attr$$Lambda$lambda$checkExConstraints$30$31::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$checkExConstraints$30$31::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$checkExConstraints$30$31",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Attr$$Lambda$lambda$checkExConstraints$30$31::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$checkExConstraints$30$31, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$checkExConstraints$30$31::class$ = nullptr;

class Attr$$Lambda$lambda$checkExConstraints$31$32 : public $Consumer {
	$class(Attr$$Lambda$lambda$checkExConstraints$31$32, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* t) override {
		Attr::lambda$checkExConstraints$31($cast($Type, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$checkExConstraints$31$32>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Attr$$Lambda$lambda$checkExConstraints$31$32::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$checkExConstraints$31$32::*)()>(&Attr$$Lambda$lambda$checkExConstraints$31$32::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$checkExConstraints$31$32::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$checkExConstraints$31$32",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* Attr$$Lambda$lambda$checkExConstraints$31$32::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$checkExConstraints$31$32, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$checkExConstraints$31$32::class$ = nullptr;

class Attr$$Lambda$lambda$setFunctionalInfo$32$33 : public $Infer$FreeTypeListener {
	$class(Attr$$Lambda$lambda$setFunctionalInfo$32$33, $NO_CLASS_INIT, $Infer$FreeTypeListener)
public:
	void init$(Attr* inst, $Env* env, $JCTree$JCFunctionalExpression* fExpr, $Type* pt, $Type* descriptorType, $Type* primaryTarget, $Check$CheckContext* checkContext) {
		$set(this, inst$, inst);
		$set(this, env, env);
		$set(this, fExpr, fExpr);
		$set(this, pt, pt);
		$set(this, descriptorType, descriptorType);
		$set(this, primaryTarget, primaryTarget);
		$set(this, checkContext, checkContext);
	}
	virtual void typesInferred($InferenceContext* inferenceContext) override {
		$nc(inst$)->lambda$setFunctionalInfo$32(env, fExpr, pt, descriptorType, primaryTarget, checkContext, inferenceContext);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$setFunctionalInfo$32$33>());
	}
	Attr* inst$ = nullptr;
	$Env* env = nullptr;
	$JCTree$JCFunctionalExpression* fExpr = nullptr;
	$Type* pt = nullptr;
	$Type* descriptorType = nullptr;
	$Type* primaryTarget = nullptr;
	$Check$CheckContext* checkContext = nullptr;
	static $FieldInfo fieldInfos[8];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$setFunctionalInfo$32$33::fieldInfos[8] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$setFunctionalInfo$32$33, inst$)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$setFunctionalInfo$32$33, env)},
	{"fExpr", "Lcom/sun/tools/javac/tree/JCTree$JCFunctionalExpression;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$setFunctionalInfo$32$33, fExpr)},
	{"pt", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$setFunctionalInfo$32$33, pt)},
	{"descriptorType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$setFunctionalInfo$32$33, descriptorType)},
	{"primaryTarget", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$setFunctionalInfo$32$33, primaryTarget)},
	{"checkContext", "Lcom/sun/tools/javac/comp/Check$CheckContext;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$setFunctionalInfo$32$33, checkContext)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$setFunctionalInfo$32$33::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCFunctionalExpression;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$setFunctionalInfo$32$33::*)(Attr*,$Env*,$JCTree$JCFunctionalExpression*,$Type*,$Type*,$Type*,$Check$CheckContext*)>(&Attr$$Lambda$lambda$setFunctionalInfo$32$33::init$))},
	{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$setFunctionalInfo$32$33::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$setFunctionalInfo$32$33",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Infer$FreeTypeListener",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$setFunctionalInfo$32$33::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$setFunctionalInfo$32$33, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$setFunctionalInfo$32$33::class$ = nullptr;

class Attr$$Lambda$lambda$attribClass$33$34 : public $Predicate {
	$class(Attr$$Lambda$lambda$attribClass$33$34, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Symbol* subTypeSym) {
		$set(this, subTypeSym, subTypeSym);
	}
	virtual bool test(Object$* permittedExpr) override {
		 return Attr::lambda$attribClass$33(subTypeSym, $cast($JCTree$JCExpression, permittedExpr));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$attribClass$33$34>());
	}
	$Symbol* subTypeSym = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$attribClass$33$34::fieldInfos[2] = {
	{"subTypeSym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$attribClass$33$34, subTypeSym)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$attribClass$33$34::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$attribClass$33$34::*)($Symbol*)>(&Attr$$Lambda$lambda$attribClass$33$34::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$attribClass$33$34::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$attribClass$33$34",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$attribClass$33$34::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$attribClass$33$34, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$attribClass$33$34::class$ = nullptr;

class Attr$$Lambda$lambda$attribClass$34$35 : public $Predicate {
	$class(Attr$$Lambda$lambda$attribClass$34$35, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Symbol$ClassSymbol* c) {
		$set(this, c, c);
	}
	virtual bool test(Object$* d) override {
		 return Attr::lambda$attribClass$34(c, $cast($Type, d));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$attribClass$34$35>());
	}
	$Symbol$ClassSymbol* c = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$attribClass$34$35::fieldInfos[2] = {
	{"c", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$attribClass$34$35, c)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$attribClass$34$35::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$attribClass$34$35::*)($Symbol$ClassSymbol*)>(&Attr$$Lambda$lambda$attribClass$34$35::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$attribClass$34$35::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$attribClass$34$35",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$attribClass$34$35::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$attribClass$34$35, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$attribClass$34$35::class$ = nullptr;

class Attr$$Lambda$lambda$attribClass$35$36 : public $Predicate {
	$class(Attr$$Lambda$lambda$attribClass$35$36, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* s) override {
		 return Attr::lambda$attribClass$35($cast($Type, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$attribClass$35$36>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Attr$$Lambda$lambda$attribClass$35$36::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$attribClass$35$36::*)()>(&Attr$$Lambda$lambda$attribClass$35$36::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$attribClass$35$36::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$attribClass$35$36",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Attr$$Lambda$lambda$attribClass$35$36::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$attribClass$35$36, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$attribClass$35$36::class$ = nullptr;

class Attr$$Lambda$lambda$attribClass$36$37 : public $Function {
	$class(Attr$$Lambda$lambda$attribClass$36$37, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(Attr::lambda$attribClass$36($cast($Type, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$attribClass$36$37>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Attr$$Lambda$lambda$attribClass$36$37::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$attribClass$36$37::*)()>(&Attr$$Lambda$lambda$attribClass$36$37::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$attribClass$36$37::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$attribClass$36$37",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Attr$$Lambda$lambda$attribClass$36$37::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$attribClass$36$37, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$attribClass$36$37::class$ = nullptr;

class Attr$$Lambda$lambda$attribClass$37$38 : public $Predicate {
	$class(Attr$$Lambda$lambda$attribClass$37$38, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* s) override {
		 return Attr::lambda$attribClass$37($cast($Type, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$attribClass$37$38>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Attr$$Lambda$lambda$attribClass$37$38::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$attribClass$37$38::*)()>(&Attr$$Lambda$lambda$attribClass$37$38::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$attribClass$37$38::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$attribClass$37$38",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Attr$$Lambda$lambda$attribClass$37$38::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$attribClass$37$38, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$attribClass$37$38::class$ = nullptr;

class Attr$$Lambda$lambda$checkExConstraints$28$39 : public $Consumer {
	$class(Attr$$Lambda$lambda$checkExConstraints$28$39, $NO_CLASS_INIT, $Consumer)
public:
	void init$(Attr* inst, $Type* checkedEx) {
		$set(this, inst$, inst);
		$set(this, checkedEx, checkedEx);
	}
	virtual void accept(Object$* nonProper) override {
		$nc(inst$)->lambda$checkExConstraints$28(checkedEx, $cast($Type, nonProper));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Attr$$Lambda$lambda$checkExConstraints$28$39>());
	}
	Attr* inst$ = nullptr;
	$Type* checkedEx = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Attr$$Lambda$lambda$checkExConstraints$28$39::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$checkExConstraints$28$39, inst$)},
	{"checkedEx", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Attr$$Lambda$lambda$checkExConstraints$28$39, checkedEx)},
	{}
};
$MethodInfo Attr$$Lambda$lambda$checkExConstraints$28$39::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$$Lambda$lambda$checkExConstraints$28$39::*)(Attr*,$Type*)>(&Attr$$Lambda$lambda$checkExConstraints$28$39::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Attr$$Lambda$lambda$checkExConstraints$28$39::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Attr$$Lambda$lambda$checkExConstraints$28$39",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Attr$$Lambda$lambda$checkExConstraints$28$39::load$($String* name, bool initialize) {
	$loadClass(Attr$$Lambda$lambda$checkExConstraints$28$39, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Attr$$Lambda$lambda$checkExConstraints$28$39::class$ = nullptr;

$FieldInfo _Attr_FieldInfo_[] = {
	{"attrKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/Attr;>;", $PROTECTED | $STATIC | $FINAL, $staticField(Attr, attrKey)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $FINAL, $field(Attr, names)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $FINAL, $field(Attr, log)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $FINAL, $field(Attr, syms)},
	{"rs", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL, $field(Attr, rs)},
	{"operators", "Lcom/sun/tools/javac/comp/Operators;", nullptr, $FINAL, $field(Attr, operators)},
	{"infer", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL, $field(Attr, infer)},
	{"analyzer", "Lcom/sun/tools/javac/comp/Analyzer;", nullptr, $FINAL, $field(Attr, analyzer)},
	{"deferredAttr", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $FINAL, $field(Attr, deferredAttr)},
	{"chk", "Lcom/sun/tools/javac/comp/Check;", nullptr, $FINAL, $field(Attr, chk)},
	{"flow", "Lcom/sun/tools/javac/comp/Flow;", nullptr, $FINAL, $field(Attr, flow)},
	{"memberEnter", "Lcom/sun/tools/javac/comp/MemberEnter;", nullptr, $FINAL, $field(Attr, memberEnter)},
	{"typeEnter", "Lcom/sun/tools/javac/comp/TypeEnter;", nullptr, $FINAL, $field(Attr, typeEnter)},
	{"make", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $FINAL, $field(Attr, make)},
	{"cfolder", "Lcom/sun/tools/javac/comp/ConstFold;", nullptr, $FINAL, $field(Attr, cfolder)},
	{"enter", "Lcom/sun/tools/javac/comp/Enter;", nullptr, $FINAL, $field(Attr, enter)},
	{"target", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $FINAL, $field(Attr, target)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL, $field(Attr, types)},
	{"preview", "Lcom/sun/tools/javac/code/Preview;", nullptr, $FINAL, $field(Attr, preview)},
	{"diags", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, $FINAL, $field(Attr, diags)},
	{"typeAnnotations", "Lcom/sun/tools/javac/code/TypeAnnotations;", nullptr, $FINAL, $field(Attr, typeAnnotations)},
	{"deferredLintHandler", "Lcom/sun/tools/javac/code/DeferredLintHandler;", nullptr, $FINAL, $field(Attr, deferredLintHandler)},
	{"typeEnvs", "Lcom/sun/tools/javac/comp/TypeEnvs;", nullptr, $FINAL, $field(Attr, typeEnvs)},
	{"dependencies", "Lcom/sun/tools/javac/util/Dependencies;", nullptr, $FINAL, $field(Attr, dependencies)},
	{"annotate", "Lcom/sun/tools/javac/comp/Annotate;", nullptr, $FINAL, $field(Attr, annotate)},
	{"argumentAttr", "Lcom/sun/tools/javac/comp/ArgumentAttr;", nullptr, $FINAL, $field(Attr, argumentAttr)},
	{"matchBindingsComputer", "Lcom/sun/tools/javac/comp/MatchBindingsComputer;", nullptr, $FINAL, $field(Attr, matchBindingsComputer)},
	{"attrRecover", "Lcom/sun/tools/javac/comp/AttrRecover;", nullptr, $FINAL, $field(Attr, attrRecover)},
	{"allowPoly", "Z", nullptr, 0, $field(Attr, allowPoly)},
	{"allowTypeAnnos", "Z", nullptr, 0, $field(Attr, allowTypeAnnos)},
	{"allowLambda", "Z", nullptr, 0, $field(Attr, allowLambda)},
	{"allowDefaultMethods", "Z", nullptr, 0, $field(Attr, allowDefaultMethods)},
	{"allowStaticInterfaceMethods", "Z", nullptr, 0, $field(Attr, allowStaticInterfaceMethods)},
	{"allowReifiableTypesInInstanceof", "Z", nullptr, 0, $field(Attr, allowReifiableTypesInInstanceof)},
	{"allowRecords", "Z", nullptr, $PRIVATE | $FINAL, $field(Attr, allowRecords)},
	{"allowPatternSwitch", "Z", nullptr, $PRIVATE | $FINAL, $field(Attr, allowPatternSwitch)},
	{"useBeforeDeclarationWarning", "Z", nullptr, 0, $field(Attr, useBeforeDeclarationWarning)},
	{"sourceName", "Ljava/lang/String;", nullptr, 0, $field(Attr, sourceName)},
	{"identAttributer", "Lcom/sun/source/tree/TreeVisitor;", "Lcom/sun/source/tree/TreeVisitor<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", $PRIVATE, $field(Attr, identAttributer)},
	{"breakTree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PRIVATE, $field(Attr, breakTree)},
	{"statInfo", "Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $FINAL, $field(Attr, statInfo)},
	{"varAssignmentInfo", "Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $FINAL, $field(Attr, varAssignmentInfo)},
	{"methodAttrInfo", "Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $FINAL, $field(Attr, methodAttrInfo)},
	{"unknownExprInfo", "Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $FINAL, $field(Attr, unknownExprInfo)},
	{"unknownTypeInfo", "Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $FINAL, $field(Attr, unknownTypeInfo)},
	{"unknownTypeExprInfo", "Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $FINAL, $field(Attr, unknownTypeExprInfo)},
	{"recoveryInfo", "Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $FINAL, $field(Attr, recoveryInfo)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0, $field(Attr, env)},
	{"resultInfo", "Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, 0, $field(Attr, resultInfo)},
	{"result", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Attr, result)},
	{"matchBindings", "Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;", nullptr, 0, $field(Attr, matchBindings)},
	{"removeClassParams", "Lcom/sun/tools/javac/tree/TreeTranslator;", nullptr, 0, $field(Attr, removeClassParams)},
	{"primitiveTags", "[Lcom/sun/tools/javac/code/TypeTag;", nullptr, $STATIC | $FINAL, $staticField(Attr, primitiveTags)},
	{"targetChecker", "Lcom/sun/tools/javac/code/Types$MapVisitor;", "Lcom/sun/tools/javac/code/Types$MapVisitor<Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;>;", 0, $field(Attr, targetChecker)},
	{"clinits", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;>;", $PRIVATE, $field(Attr, clinits)},
	{}
};

$MethodInfo _Attr_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(Attr::*)($Context*)>(&Attr::init$))},
	{"addVars", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Scope$WriteableScope;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;Lcom/sun/tools/javac/code/Scope$WriteableScope;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($List*,$Scope$WriteableScope*)>(&Attr::addVars))},
	{"adjustMethodReturnType", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", 0},
	{"attrib", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PUBLIC},
	{"attribAnnotationTypes", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0},
	{"attribAnyTypes", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"attribArgs", "(Lcom/sun/tools/javac/code/Kinds$KindSelector;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/ListBuffer;)Lcom/sun/tools/javac/code/Kinds$KindSelector;", "(Lcom/sun/tools/javac/code/Kinds$KindSelector;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Kinds$KindSelector;", 0},
	{"attribBase", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;ZZZ)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;ZZZ)Lcom/sun/tools/javac/code/Type;", 0},
	{"attribClass", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC},
	{"attribClass", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, 0, nullptr, "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"attribClassBody", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", $PRIVATE, $method(static_cast<void(Attr::*)($Env*,$Symbol$ClassSymbol*)>(&Attr::attribClassBody))},
	{"attribExpr", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"attribExpr", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"attribExprToTree", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC},
	{"attribExprs", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"attribIdent", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"attribIdent", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/code/Symbol;", $PUBLIC},
	{"attribIdentAsEnumType", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCIdent;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCIdent;)Lcom/sun/tools/javac/code/Type;", 0},
	{"attribImportQualifier", "(Lcom/sun/tools/javac/tree/JCTree$JCImport;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/tree/JCTree$JCImport;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"attribLazyConstantValue", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Object;", $PUBLIC},
	{"attribModule", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PUBLIC},
	{"attribModule", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, 0},
	{"attribPackage", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)V", nullptr, $PUBLIC},
	{"attribPackage", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)V", nullptr, 0},
	{"attribStat", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"attribStatToTree", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC},
	{"attribStats", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;)V", "<T:Lcom/sun/tools/javac/tree/JCTree;>(Lcom/sun/tools/javac/util/List<TT;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0},
	{"attribToTree", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PRIVATE, $method(static_cast<$Env*(Attr::*)($JCTree*,$Env*,$JCTree*,$Attr$ResultInfo*)>(&Attr::attribToTree))},
	{"attribTopLevel", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PUBLIC},
	{"attribTree", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/code/Type;", 0},
	{"attribType", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"attribType", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"attribType", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", 0},
	{"attribTypeVariables", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;Z)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Z)V", 0},
	{"attribTypes", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"bindingEnv", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0},
	{"bindingEnv", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0},
	{"breakTreeFound", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PROTECTED},
	{"breaksOutOf", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Attr::*)($JCTree*,$JCTree*)>(&Attr::breaksOutOf))},
	{"canInferLocalVarType", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, 0},
	{"capture", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Attr::*)($Type*)>(&Attr::capture))},
	{"check", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Kinds$KindSelector;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"checkAccessibleTypes", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/InferenceContext;[Lcom/sun/tools/javac/code/Type;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/InferenceContext;[Lcom/sun/tools/javac/code/Type;)V", $PRIVATE | $TRANSIENT, $method(static_cast<void(Attr::*)($JCDiagnostic$DiagnosticPosition*,$Env*,$InferenceContext*,$TypeArray*)>(&Attr::checkAccessibleTypes))},
	{"checkAccessibleTypes", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PRIVATE, $method(static_cast<void(Attr::*)($JCDiagnostic$DiagnosticPosition*,$Env*,$InferenceContext*,$List*)>(&Attr::checkAccessibleTypes))},
	{"checkAssignable", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$VarSymbol;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$VarSymbol;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0},
	{"checkAutoCloseable", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;)V", 0},
	{"checkBase", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;ZZZ)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;ZZZ)Lcom/sun/tools/javac/code/Type;", 0},
	{"checkCaseLabelDominated", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Type;)V", $PRIVATE, $method(static_cast<void(Attr::*)($JCDiagnostic$DiagnosticPosition*,$List*,$Type*)>(&Attr::checkCaseLabelDominated))},
	{"checkCastablePattern", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Attr::*)($JCDiagnostic$DiagnosticPosition*,$Type*,$Type*)>(&Attr::checkCastablePattern))},
	{"checkEnumInitializer", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol$VarSymbol;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol$VarSymbol;)V", $PRIVATE, $method(static_cast<void(Attr::*)($JCTree*,$Env*,$Symbol$VarSymbol*)>(&Attr::checkEnumInitializer))},
	{"checkExConstraints", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/InferenceContext;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/comp/InferenceContext;)Z", 0},
	{"checkFirstConstructorStat", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Z)Z", nullptr, 0},
	{"checkId", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/code/Type;", 0},
	{"checkIdInternal", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/code/Type;", 0},
	{"checkInit", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol$VarSymbol;Z)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol$VarSymbol;Z)V", $PRIVATE, $method(static_cast<void(Attr::*)($JCTree*,$Env*,$Symbol$VarSymbol*,bool)>(&Attr::checkInit))},
	{"checkIntersection", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/code/Type;", 0},
	{"checkLambdaCompatible", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;)V", nullptr, 0},
	{"checkMethod", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"checkMethodIdInternal", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/code/Type;", 0},
	{"checkReferenceCompatible", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;Z)V", nullptr, 0},
	{"checkSerialVersionUID", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PRIVATE, $method(static_cast<void(Attr::*)($JCTree$JCClassDecl*,$Symbol$ClassSymbol*,$Env*)>(&Attr::checkSerialVersionUID))},
	{"coerce", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"condType", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type;", 0},
	{"conditionalContext", "(Lcom/sun/tools/javac/comp/Check$CheckContext;)Lcom/sun/tools/javac/comp/Check$CheckContext;", nullptr, 0},
	{"copyEnv", "(Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0},
	{"copyScope", "(Lcom/sun/tools/javac/code/Scope$WriteableScope;)Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, 0},
	{"diamondContext", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/comp/Check$CheckContext;)Lcom/sun/tools/javac/comp/Check$CheckContext;", nullptr, 0},
	{"enclosingInitEnv", "(Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0},
	{"enumConstant", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol*(Attr::*)($JCTree*,$Type*)>(&Attr::enumConstant))},
	{"fallbackDescriptorType", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Attr::*)($JCTree$JCExpression*)>(&Attr::fallbackDescriptorType))},
	{"findJumpTarget", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/tree/JCTree;", $PRIVATE, $method(static_cast<$JCTree*(Attr::*)($JCDiagnostic$DiagnosticPosition*,$JCTree$Tag*,$Name*,$Env*)>(&Attr::findJumpTarget))},
	{"findJumpTargetNoError", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/util/Pair;", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/JCDiagnostic$Error;>;", $PRIVATE, $method(static_cast<$Pair*(Attr::*)($JCTree$Tag*,$Name*,$Env*)>(&Attr::findJumpTargetNoError))},
	{"getDiagnosticPosition", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PRIVATE, $method(static_cast<$JCDiagnostic$DiagnosticPosition*(Attr::*)($JCTree$JCClassDecl*,$Type*)>(&Attr::getDiagnosticPosition))},
	{"getTargetInfo", "(Lcom/sun/tools/javac/tree/JCTree$JCPolyExpression;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/comp/Attr$TargetInfo;", "(Lcom/sun/tools/javac/tree/JCTree$JCPolyExpression;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/comp/Attr$TargetInfo;", 0},
	{"handleSwitch", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Ljava/util/function/BiConsumer;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;Ljava/util/function/BiConsumer<Lcom/sun/tools/javac/tree/JCTree$JCCase;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;)V", $PRIVATE, $method(static_cast<void(Attr::*)($JCTree*,$JCTree$JCExpression*,$List*,$BiConsumer*)>(&Attr::handleSwitch))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/Attr;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Attr*(*)($Context*)>(&Attr::instance))},
	{"isAssignableAsBlankFinal", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;Lcom/sun/tools/javac/comp/Env;)Z", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Z", 0},
	{"isBooleanOrNumeric", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Z", $PRIVATE, $method(static_cast<bool(Attr::*)($Env*,$JCTree$JCExpression*)>(&Attr::isBooleanOrNumeric))},
	{"isNonArgsMethodInObject", "(Lcom/sun/tools/javac/util/Name;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Attr::*)($Name*)>(&Attr::isNonArgsMethodInObject))},
	{"isSerializable", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, 0},
	{"isStaticEnumField", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Attr::*)($Symbol$VarSymbol*)>(&Attr::isStaticEnumField))},
	{"isStaticReference", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, 0},
	{"isType", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Symbol*)>(&Attr::isType))},
	{"isValueBased", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Attr::*)($Type*)>(&Attr::isValueBased))},
	{"lambda$attribClass$33", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol*,$JCTree$JCExpression*)>(&Attr::lambda$attribClass$33))},
	{"lambda$attribClass$34", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol$ClassSymbol*,$Type*)>(&Attr::lambda$attribClass$34))},
	{"lambda$attribClass$35", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Type*)>(&Attr::lambda$attribClass$35))},
	{"lambda$attribClass$36", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Symbol$ClassSymbol*(*)($Type*)>(&Attr::lambda$attribClass$36))},
	{"lambda$attribClass$37", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Type*)>(&Attr::lambda$attribClass$37))},
	{"lambda$check$0", "(Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Kinds$KindSelector;Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Attr::*)($Attr$ResultInfo*,$InferenceContext*,$JCTree*,$Type*,$Kinds$KindSelector*,$InferenceContext*)>(&Attr::lambda$check$0))},
	{"lambda$checkAccessibleTypes$24", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Attr::*)($JCDiagnostic$DiagnosticPosition*,$Env*,$List*,$InferenceContext*)>(&Attr::lambda$checkAccessibleTypes$24))},
	{"lambda$checkExConstraints$26", "(Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($InferenceContext*,$Type*)>(&Attr::lambda$checkExConstraints$26))},
	{"lambda$checkExConstraints$27", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Attr::*)($Type*)>(&Attr::lambda$checkExConstraints$27))},
	{"lambda$checkExConstraints$28", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Attr::*)($Type*,$Type*)>(&Attr::lambda$checkExConstraints$28))},
	{"lambda$checkExConstraints$29", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Attr::*)($List*,$Type*)>(&Attr::lambda$checkExConstraints$29))},
	{"lambda$checkExConstraints$30", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Type*)>(&Attr::lambda$checkExConstraints$30))},
	{"lambda$checkExConstraints$31", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Type*)>(&Attr::lambda$checkExConstraints$31))},
	{"lambda$checkReferenceCompatible$25", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JCTree$JCMemberReference*,$Type*,$InferenceContext*)>(&Attr::lambda$checkReferenceCompatible$25))},
	{"lambda$condType$10", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Attr::*)($Type*,$Type*)>(&Attr::lambda$condType$10))},
	{"lambda$condType$11", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Type*(Attr::*)($Type*)>(&Attr::lambda$condType$11))},
	{"lambda$condType$12", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Type*)>(&Attr::lambda$condType$12))},
	{"lambda$condType$13", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Type*,$Type*)>(&Attr::lambda$condType$13))},
	{"lambda$condType$14", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Attr::*)($Type*,$Type*)>(&Attr::lambda$condType$14))},
	{"lambda$condType$15", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Attr::*)($Type*,$Type*)>(&Attr::lambda$condType$15))},
	{"lambda$condType$16", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Type*(Attr::*)($Type*)>(&Attr::lambda$condType$16))},
	{"lambda$condType$18", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Attr::*)($Type*,$Type*)>(&Attr::lambda$condType$18))},
	{"lambda$condType$19", "(Ljava/util/Iterator;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Type*(Attr::*)($Iterator*,$Type*)>(&Attr::lambda$condType$19))},
	{"lambda$condType$20", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Type*(*)($Type*)>(&Attr::lambda$condType$20))},
	{"lambda$condType$21", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Type*)>(&Attr::lambda$condType$21))},
	{"lambda$handleSwitch$8", "(Lcom/sun/tools/javac/tree/JCTree$JCCase;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Stream*(*)($JCTree$JCCase*)>(&Attr::lambda$handleSwitch$8))},
	{"lambda$handleSwitch$9", "(Lcom/sun/tools/javac/tree/JCTree$JCCaseLabel;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCTree$JCCaseLabel*)>(&Attr::lambda$handleSwitch$9))},
	{"lambda$isNonArgsMethodInObject$5", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol*)>(&Attr::lambda$isNonArgsMethodInObject$5))},
	{"lambda$setFunctionalInfo$32", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCFunctionalExpression;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Attr::*)($Env*,$JCTree$JCFunctionalExpression*,$Type*,$Type*,$Type*,$Check$CheckContext*,$InferenceContext*)>(&Attr::lambda$setFunctionalInfo$32))},
	{"lambda$visitAnonymousClassDefinition$23", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Kinds$KindSelector;Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Attr::*)($JCTree$JCNewClass*,$JCTree$JCExpression*,$Attr$ResultInfo*,$JCTree$JCClassDecl*,$Env*,$List*,$List*,$Kinds$KindSelector*,$InferenceContext*)>(&Attr::lambda$visitAnonymousClassDefinition$23))},
	{"lambda$visitMethodDef$1", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Lcom/sun/tools/javac/code/Symbol$RecordComponent;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCTree$JCMethodDecl*,$Symbol$RecordComponent*)>(&Attr::lambda$visitMethodDef$1))},
	{"lambda$visitMethodDef$2", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Type*(*)($JCTree$JCVariableDecl*)>(&Attr::lambda$visitMethodDef$2))},
	{"lambda$visitMethodDef$3", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Name*(*)($JCTree$JCVariableDecl*)>(&Attr::lambda$visitMethodDef$3))},
	{"lambda$visitMethodDef$4", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Name*(*)($Symbol$VarSymbol*)>(&Attr::lambda$visitMethodDef$4))},
	{"lambda$visitNewClass$22", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JCTree$JCNewClass*,$InferenceContext*)>(&Attr::lambda$visitNewClass$22))},
	{"lambda$visitSwitch$6", "(Lcom/sun/tools/javac/tree/JCTree$JCCase;Lcom/sun/tools/javac/comp/Env;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Attr::*)($JCTree$JCCase*,$Env*)>(&Attr::lambda$visitSwitch$6))},
	{"lambda$visitSwitchExpression$7", "(Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;Lcom/sun/tools/javac/util/ListBuffer;Lcom/sun/tools/javac/util/ListBuffer;Lcom/sun/tools/javac/tree/JCTree$JCCase;Lcom/sun/tools/javac/comp/Env;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Attr::*)($Attr$ResultInfo*,$JCTree$JCSwitchExpression*,$ListBuffer*,$ListBuffer*,$JCTree$JCCase*,$Env*)>(&Attr::lambda$visitSwitchExpression$7))},
	{"lambdaBodyResult", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, 0},
	{"lambdaEnv", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC},
	{"litType", "(Lcom/sun/tools/javac/code/TypeTag;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"makeNullCheck", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"memberReferenceQualifierResult", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, 0},
	{"newMethodTemplate", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type;", 0},
	{"pkind", "()Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, 0},
	{"postAttr", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"preFlow", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0},
	{"preFlow", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, 0},
	{"primitiveOrBoxed", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, 0},
	{"pt", "()Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"removeClinit", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PUBLIC},
	{"selectSym", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/code/Symbol;", $PRIVATE, $method(static_cast<$Symbol*(Attr::*)($JCTree$JCFieldAccess*,$Symbol*,$Type*,$Env*,$Attr$ResultInfo*)>(&Attr::selectSym))},
	{"setFunctionalInfo", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCFunctionalExpression;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCFunctionalExpression;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;)V", $PRIVATE, $method(static_cast<void(Attr::*)($Env*,$JCTree$JCFunctionalExpression*,$Type*,$Type*,$Type*,$Check$CheckContext*)>(&Attr::setFunctionalInfo))},
	{"setPackageSymbols", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC},
	{"setSyntheticVariableType", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PRIVATE, $method(static_cast<void(Attr::*)($JCTree$JCVariableDecl*,$Type*)>(&Attr::setSyntheticVariableType))},
	{"switchExpressionContext", "(Lcom/sun/tools/javac/comp/Check$CheckContext;)Lcom/sun/tools/javac/comp/Check$CheckContext;", nullptr, 0},
	{"thisSym", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/code/Symbol;", 0},
	{"validateTypeAnnotations", "(Lcom/sun/tools/javac/tree/JCTree;Z)V", nullptr, $PUBLIC},
	{"visitAnnotatedType", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotatedType;)V", nullptr, $PUBLIC},
	{"visitAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)V", nullptr, $PUBLIC},
	{"visitAnonymousClassDefinition", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Kinds$KindSelector;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Kinds$KindSelector;)V", $PRIVATE, $method(static_cast<void(Attr::*)($JCTree$JCNewClass*,$JCTree$JCExpression*,$Type*,$JCTree$JCClassDecl*,$Env*,$List*,$List*,$Kinds$KindSelector*)>(&Attr::visitAnonymousClassDefinition))},
	{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC},
	{"visitAssert", "(Lcom/sun/tools/javac/tree/JCTree$JCAssert;)V", nullptr, $PUBLIC},
	{"visitAssign", "(Lcom/sun/tools/javac/tree/JCTree$JCAssign;)V", nullptr, $PUBLIC},
	{"visitAssignop", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)V", nullptr, $PUBLIC},
	{"visitBinary", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)V", nullptr, $PUBLIC},
	{"visitBindingPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCBindingPattern;)V", nullptr, $PUBLIC},
	{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC},
	{"visitBreak", "(Lcom/sun/tools/javac/tree/JCTree$JCBreak;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitConditional", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", nullptr, $PUBLIC},
	{"visitContinue", "(Lcom/sun/tools/javac/tree/JCTree$JCContinue;)V", nullptr, $PUBLIC},
	{"visitDoLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCDoWhileLoop;)V", nullptr, $PUBLIC},
	{"visitErroneous", "(Lcom/sun/tools/javac/tree/JCTree$JCErroneous;)V", nullptr, $PUBLIC},
	{"visitExec", "(Lcom/sun/tools/javac/tree/JCTree$JCExpressionStatement;)V", nullptr, $PUBLIC},
	{"visitForLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCForLoop;)V", nullptr, $PUBLIC},
	{"visitForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)V", nullptr, $PUBLIC},
	{"visitGuardPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCGuardPattern;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitIf", "(Lcom/sun/tools/javac/tree/JCTree$JCIf;)V", nullptr, $PUBLIC},
	{"visitImport", "(Lcom/sun/tools/javac/tree/JCTree$JCImport;)V", nullptr, $PUBLIC},
	{"visitIndexed", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayAccess;)V", nullptr, $PUBLIC},
	{"visitLabelled", "(Lcom/sun/tools/javac/tree/JCTree$JCLabeledStatement;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitLiteral", "(Lcom/sun/tools/javac/tree/JCTree$JCLiteral;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitModuleDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;)V", nullptr, $PUBLIC},
	{"visitNewArray", "(Lcom/sun/tools/javac/tree/JCTree$JCNewArray;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitParens", "(Lcom/sun/tools/javac/tree/JCTree$JCParens;)V", nullptr, $PUBLIC},
	{"visitParenthesizedPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCParenthesizedPattern;)V", nullptr, $PUBLIC},
	{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC},
	{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitSkip", "(Lcom/sun/tools/javac/tree/JCTree$JCSkip;)V", nullptr, $PUBLIC},
	{"visitSwitch", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitch;)V", nullptr, $PUBLIC},
	{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC},
	{"visitSynchronized", "(Lcom/sun/tools/javac/tree/JCTree$JCSynchronized;)V", nullptr, $PUBLIC},
	{"visitThrow", "(Lcom/sun/tools/javac/tree/JCTree$JCThrow;)V", nullptr, $PUBLIC},
	{"visitTree", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitTry", "(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V", nullptr, $PUBLIC},
	{"visitTypeApply", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeApply;)V", nullptr, $PUBLIC},
	{"visitTypeArray", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayTypeTree;)V", nullptr, $PUBLIC},
	{"visitTypeCast", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PUBLIC},
	{"visitTypeIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree;)V", nullptr, $PUBLIC},
	{"visitTypeIntersection", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeIntersection;)V", nullptr, $PUBLIC},
	{"visitTypeParameter", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;)V", nullptr, $PUBLIC},
	{"visitTypeTest", "(Lcom/sun/tools/javac/tree/JCTree$JCInstanceOf;)V", nullptr, $PUBLIC},
	{"visitTypeUnion", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeUnion;)V", nullptr, $PUBLIC},
	{"visitUnary", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{"visitWhileLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCWhileLoop;)V", nullptr, $PUBLIC},
	{"visitWildcard", "(Lcom/sun/tools/javac/tree/JCTree$JCWildcard;)V", nullptr, $PUBLIC},
	{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Attr_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.comp.Attr$13", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.comp.Attr$PostAttrAnalyzer", "com.sun.tools.javac.comp.Attr", "PostAttrAnalyzer", 0},
	{"com.sun.tools.javac.comp.Attr$TypeAnnotationsValidator", "com.sun.tools.javac.comp.Attr", "TypeAnnotationsValidator", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.comp.Attr$ExpressionLambdaReturnContext", "com.sun.tools.javac.comp.Attr", "ExpressionLambdaReturnContext", 0},
	{"com.sun.tools.javac.comp.Attr$FunctionalReturnContext", "com.sun.tools.javac.comp.Attr", "FunctionalReturnContext", 0},
	{"com.sun.tools.javac.comp.Attr$TargetInfo", "com.sun.tools.javac.comp.Attr", "TargetInfo", 0},
	{"com.sun.tools.javac.comp.Attr$LocalInitScanner", "com.sun.tools.javac.comp.Attr", "LocalInitScanner", $STATIC},
	{"com.sun.tools.javac.comp.Attr$RecoveryInfo", "com.sun.tools.javac.comp.Attr", "RecoveryInfo", 0},
	{"com.sun.tools.javac.comp.Attr$MethodAttrInfo", "com.sun.tools.javac.comp.Attr", "MethodAttrInfo", 0},
	{"com.sun.tools.javac.comp.Attr$ResultInfo", "com.sun.tools.javac.comp.Attr", "ResultInfo", 0},
	{"com.sun.tools.javac.comp.Attr$CheckMode", "com.sun.tools.javac.comp.Attr", "CheckMode", $STATIC | $ENUM},
	{"com.sun.tools.javac.comp.Attr$BreakAttr", "com.sun.tools.javac.comp.Attr", "BreakAttr", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.comp.Attr$IdentAttributer", "com.sun.tools.javac.comp.Attr", "IdentAttributer", $PRIVATE},
	{"com.sun.tools.javac.comp.Attr$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Attr$12", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Attr$11", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Attr$10", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Attr$9", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Attr$8", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Attr$7", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Attr$6", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Attr$5", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Attr$4", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Attr$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Attr$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Attr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Attr",
	"com.sun.tools.javac.tree.JCTree$Visitor",
	nullptr,
	_Attr_FieldInfo_,
	_Attr_MethodInfo_,
	nullptr,
	nullptr,
	_Attr_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr$13,com.sun.tools.javac.comp.Attr$PostAttrAnalyzer,com.sun.tools.javac.comp.Attr$TypeAnnotationsValidator,com.sun.tools.javac.comp.Attr$ExpressionLambdaReturnContext,com.sun.tools.javac.comp.Attr$FunctionalReturnContext,com.sun.tools.javac.comp.Attr$TargetInfo,com.sun.tools.javac.comp.Attr$LocalInitScanner,com.sun.tools.javac.comp.Attr$RecoveryInfo,com.sun.tools.javac.comp.Attr$RecoveryInfo$1,com.sun.tools.javac.comp.Attr$MethodAttrInfo,com.sun.tools.javac.comp.Attr$ResultInfo,com.sun.tools.javac.comp.Attr$CheckMode,com.sun.tools.javac.comp.Attr$CheckMode$2,com.sun.tools.javac.comp.Attr$CheckMode$1,com.sun.tools.javac.comp.Attr$BreakAttr,com.sun.tools.javac.comp.Attr$IdentAttributer,com.sun.tools.javac.comp.Attr$1,com.sun.tools.javac.comp.Attr$12,com.sun.tools.javac.comp.Attr$11,com.sun.tools.javac.comp.Attr$10,com.sun.tools.javac.comp.Attr$9,com.sun.tools.javac.comp.Attr$8,com.sun.tools.javac.comp.Attr$7,com.sun.tools.javac.comp.Attr$6,com.sun.tools.javac.comp.Attr$5,com.sun.tools.javac.comp.Attr$4,com.sun.tools.javac.comp.Attr$3,com.sun.tools.javac.comp.Attr$2"
};

$Object* allocate$Attr($Class* clazz) {
	return $of($alloc(Attr));
}

$Context$Key* Attr::attrKey = nullptr;
$TypeTagArray* Attr::primitiveTags = nullptr;

Attr* Attr::instance($Context* context) {
	$init(Attr);
	$var(Attr, instance, $cast(Attr, $nc(context)->get(Attr::attrKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Attr, context));
	}
	return instance;
}

void Attr::init$($Context* context) {
	$JCTree$Visitor::init$();
	$set(this, identAttributer, $new($Attr$IdentAttributer, this));
	$set(this, breakTree, nullptr);
	$init($MatchBindingsComputer);
	$set(this, matchBindings, $MatchBindingsComputer::EMPTY);
	$set(this, removeClassParams, $new($Attr$4, this));
	$set(this, targetChecker, $new($Attr$9, this));
	$set(this, clinits, $new($HashMap));
	$nc(context)->put(Attr::attrKey, $of(this));
	$set(this, names, $Names::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, rs, $Resolve::instance(context));
	$set(this, operators, $Operators::instance(context));
	$set(this, chk, $Check::instance(context));
	$set(this, flow, $Flow::instance(context));
	$set(this, memberEnter, $MemberEnter::instance(context));
	$set(this, typeEnter, $TypeEnter::instance(context));
	$set(this, make, $TreeMaker::instance(context));
	$set(this, enter, $Enter::instance(context));
	$set(this, infer, $Infer::instance(context));
	$set(this, analyzer, $Analyzer::instance(context));
	$set(this, deferredAttr, $DeferredAttr::instance(context));
	$set(this, cfolder, $ConstFold::instance(context));
	$set(this, target, $Target::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, preview, $Preview::instance(context));
	$set(this, diags, $JCDiagnostic$Factory::instance(context));
	$set(this, annotate, $Annotate::instance(context));
	$set(this, typeAnnotations, $TypeAnnotations::instance(context));
	$set(this, deferredLintHandler, $DeferredLintHandler::instance(context));
	$set(this, typeEnvs, $TypeEnvs::instance(context));
	$set(this, dependencies, $Dependencies::instance(context));
	$set(this, argumentAttr, $ArgumentAttr::instance(context));
	$set(this, matchBindingsComputer, $MatchBindingsComputer::instance(context));
	$set(this, attrRecover, $AttrRecover::instance(context));
	$var($Options, options, $Options::instance(context));
	$Source* source = $Source::instance(context);
	$init($Source$Feature);
	this->allowPoly = $Source$Feature::POLY->allowedInSource(source);
	this->allowTypeAnnos = $Source$Feature::TYPE_ANNOTATIONS->allowedInSource(source);
	this->allowLambda = $Source$Feature::LAMBDA->allowedInSource(source);
	this->allowDefaultMethods = $Source$Feature::DEFAULT_METHODS->allowedInSource(source);
	this->allowStaticInterfaceMethods = $Source$Feature::STATIC_INTERFACE_METHODS->allowedInSource(source);
	this->allowReifiableTypesInInstanceof = $Source$Feature::REIFIABLE_TYPES_INSTANCEOF->allowedInSource(source);
	this->allowRecords = $Source$Feature::RECORDS->allowedInSource(source);
	bool var$1 = $nc(this->preview)->isEnabled();
	bool var$0 = (var$1 || !$nc(this->preview)->isPreview($Source$Feature::PATTERN_SWITCH));
	this->allowPatternSwitch = var$0 && $Source$Feature::PATTERN_SWITCH->allowedInSource(source);
	$set(this, sourceName, $nc(source)->name$);
	this->useBeforeDeclarationWarning = $nc(options)->isSet("useBeforeDeclarationWarning"_s);
	$init($Kinds$KindSelector);
	$init($Type);
	$set(this, statInfo, $new($Attr$ResultInfo, this, $Kinds$KindSelector::NIL, $Type::noType));
	$set(this, varAssignmentInfo, $new($Attr$ResultInfo, this, $Kinds$KindSelector::ASG, $Type::noType));
	$set(this, unknownExprInfo, $new($Attr$ResultInfo, this, $Kinds$KindSelector::VAL, $Type::noType));
	$set(this, methodAttrInfo, $new($Attr$MethodAttrInfo, this));
	$set(this, unknownTypeInfo, $new($Attr$ResultInfo, this, $Kinds$KindSelector::TYP, $Type::noType));
	$set(this, unknownTypeExprInfo, $new($Attr$ResultInfo, this, $Kinds$KindSelector::VAL_TYP, $Type::noType));
	$set(this, recoveryInfo, $new($Attr$RecoveryInfo, this, $nc(this->deferredAttr)->emptyDeferredAttrContext));
}

$Type* Attr::check($JCTree* tree, $Type* found, $Kinds$KindSelector* ownkind, $Attr$ResultInfo* resultInfo) {
	$useLocalCurrentObjectStackCache();
	$var($InferenceContext, inferenceContext, $nc($nc(resultInfo)->checkContext)->inferenceContext());
	$var($Type, owntype, nullptr);
	$init($TypeTag);
	bool var$1 = !$nc(found)->hasTag($TypeTag::ERROR);
	bool var$0 = var$1 && !$nc(resultInfo->pt)->hasTag($TypeTag::METHOD);
	bool shouldCheck = var$0 && !$nc(resultInfo->pt)->hasTag($TypeTag::FORALL);
	if (shouldCheck && !$nc(ownkind)->subset(resultInfo->pkind)) {
		$var($JCDiagnostic$DiagnosticPosition, var$2, $nc(tree)->pos());
		$var($Set, var$3, $nc(resultInfo->pkind)->kindNames());
		$nc(this->log)->error(var$2, $($CompilerProperties$Errors::UnexpectedType(var$3, $(ownkind->kindNames()))));
		$assign(owntype, $nc(this->types)->createErrorType(found));
	} else if (this->allowPoly && $nc(inferenceContext)->free(found)) {
		$assign(owntype, shouldCheck ? resultInfo->pt : found);
		if (resultInfo->checkMode->installPostInferenceHook()) {
			$var($List, var$4, $List::of(found));
			inferenceContext->addFreeTypeListener(var$4, static_cast<$Infer$FreeTypeListener*>($$new(Attr$$Lambda$lambda$check$0, this, resultInfo, inferenceContext, tree, found, ownkind)));
		}
	} else {
		$assign(owntype, shouldCheck ? resultInfo->check(tree, found) : found);
	}
	if (resultInfo->checkMode->updateTreeType()) {
		$set($nc(tree), type, owntype);
	}
	return owntype;
}

bool Attr::isAssignableAsBlankFinal($Symbol$VarSymbol* v, $Env* env) {
	$var($Symbol, owner, $nc($nc(($cast($AttrContext, $nc(env)->info)))->scope)->owner);
	bool var$0 = $nc(v)->owner == owner;
	if (!var$0) {
		$init($Kinds$Kind);
		bool var$1 = ($nc(owner)->name == $nc(this->names)->init || $nc(owner)->kind == $Kinds$Kind::VAR || ((int64_t)($nc(owner)->flags() & (uint64_t)(int64_t)0x00100000)) != 0) && $nc(v)->owner == owner->owner;
		if (var$1) {
			bool var$2 = (((int64_t)(v->flags() & (uint64_t)(int64_t)8)) != 0);
			var$1 = var$2 == $Resolve::isStatic(env);
		}
		var$0 = (var$1);
	}
	bool isAssignable = var$0;
	bool insideCompactConstructor = env->enclMethod != nullptr && $TreeInfo::isCompactConstructor(env->enclMethod);
	return isAssignable & !insideCompactConstructor;
}

void Attr::checkAssignable($JCDiagnostic$DiagnosticPosition* pos, $Symbol$VarSymbol* v, $JCTree* base, $Env* env) {
	$useLocalCurrentObjectStackCache();
	if ($nc(v)->name == $nc(this->names)->_this) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error(pos, $CompilerProperties$Errors::CantAssignValToThis);
	} else {
		bool var$3 = ((int64_t)(v->flags() & (uint64_t)(int64_t)16)) != 0;
		if (var$3) {
			bool var$4 = ((int64_t)(v->flags() & (uint64_t)(int64_t)0x00040000)) != 0;
			if (!var$4) {
				bool var$5 = (base == nullptr || $TreeInfo::isThisQualifier(base));
				var$4 = !(var$5 && isAssignableAsBlankFinal(v, env));
			}
			var$3 = (var$4);
		}
		if (var$3) {
			if (v->isResourceVariable()) {
				$nc(this->log)->error(pos, $($CompilerProperties$Errors::TryResourceMayNotBeAssigned(v)));
			} else {
				$nc(this->log)->error(pos, $($CompilerProperties$Errors::CantAssignValToFinalVar(v)));
			}
		}
	}
}

bool Attr::isStaticReference($JCTree* tree) {
	$init($JCTree$Tag);
	if ($nc(tree)->hasTag($JCTree$Tag::SELECT)) {
		$var($Symbol, lsym, $TreeInfo::symbol($nc(($cast($JCTree$JCFieldAccess, tree)))->selected));
		$init($Kinds$Kind);
		if (lsym == nullptr || $nc(lsym)->kind != $Kinds$Kind::TYP) {
			return false;
		}
	}
	return true;
}

bool Attr::isType($Symbol* sym) {
	$init(Attr);
	$init($Kinds$Kind);
	return sym != nullptr && sym->kind == $Kinds$Kind::TYP;
}

$Symbol* Attr::thisSym($JCDiagnostic$DiagnosticPosition* pos, $Env* env) {
	return $nc(this->rs)->resolveSelf(pos, env, $nc($nc(env)->enclClass)->sym, $nc(this->names)->_this);
}

$Symbol* Attr::attribIdent($JCTree* tree, $JCTree$JCCompilationUnit* topLevel) {
	$useLocalCurrentObjectStackCache();
	$var($Env, localEnv, $nc(this->enter)->topLevelEnv(topLevel));
	$set($nc(localEnv), enclClass, $nc(this->make)->ClassDef($($nc(this->make)->Modifiers(0)), $nc($nc(this->syms)->errSymbol)->name, nullptr, nullptr, nullptr, nullptr));
	$set($nc(localEnv->enclClass), sym, $nc(this->syms)->errSymbol);
	return attribIdent(tree, localEnv);
}

$Symbol* Attr::attribIdent($JCTree* tree, $Env* env) {
	return $cast($Symbol, $nc(tree)->accept(this->identAttributer, env));
}

$Type* Attr::coerce($Type* etype, $Type* ttype) {
	return $nc(this->cfolder)->coerce(etype, ttype);
}

$Type* Attr::attribType($JCTree* node, $Symbol$TypeSymbol* sym) {
	$useLocalCurrentObjectStackCache();
	$var($Env, env, $nc(this->typeEnvs)->get(sym));
	$var($Env, localEnv, $nc(env)->dup(node, $($nc(($cast($AttrContext, env->info)))->dup())));
	return attribTree(node, localEnv, this->unknownTypeInfo);
}

$Type* Attr::attribImportQualifier($JCTree$JCImport* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCFieldAccess, s, $cast($JCTree$JCFieldAccess, $nc(tree)->qualid));
	$init($Kinds$KindSelector);
	$init($Type);
	return attribTree($nc(s)->selected, env, $$new($Attr$ResultInfo, this, tree->staticImport ? $Kinds$KindSelector::TYP : $Kinds$KindSelector::TYP_PCK, $Type::noType));
}

$Env* Attr::attribExprToTree($JCTree* expr, $Env* env, $JCTree* tree) {
	return attribToTree(expr, env, tree, this->unknownExprInfo);
}

$Env* Attr::attribStatToTree($JCTree* stmt, $Env* env, $JCTree* tree) {
	return attribToTree(stmt, env, tree, this->statInfo);
}

$Env* Attr::attribToTree($JCTree* root, $Env* env, $JCTree* tree, $Attr$ResultInfo* resultInfo) {
	$useLocalCurrentObjectStackCache();
	$set(this, breakTree, tree);
	$var($JavaFileObject, prev, $nc(this->log)->useSource($nc($nc(env)->toplevel)->sourcefile));
	{
		$var($Throwable, var$0, nullptr);
		$var($Env, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$init($DeferredAttr$AttributionMode);
				$nc(this->deferredAttr)->attribSpeculative(root, env, resultInfo, nullptr, $DeferredAttr$AttributionMode::ATTRIB_TO_TREE, $($nc(this->argumentAttr)->withLocalCacheContext()));
				$nc(this->attrRecover)->doRecovery();
			} catch ($Attr$BreakAttr& b) {
				$assign(var$2, b->env);
				return$1 = true;
				goto $finally;
			} catch ($AssertionError& ae) {
				{
					$var($Attr$BreakAttr, breakAttr, nullptr);
					$var($Throwable, patt18270$temp, ae->getCause());
					bool var$3 = $instanceOf($Attr$BreakAttr, patt18270$temp);
					if (var$3) {
						$assign(breakAttr, $cast($Attr$BreakAttr, patt18270$temp));
						var$3 = true;
					}
					if (var$3) {
						$assign(var$2, $nc(breakAttr)->env);
						return$1 = true;
						goto $finally;
					} else {
						$throw(ae);
					}
				}
			}
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			$set(this, breakTree, nullptr);
			$nc(this->log)->useSource(prev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return env;
}

$Type* Attr::pt() {
	return $nc(this->resultInfo)->pt;
}

$Kinds$KindSelector* Attr::pkind() {
	return $nc(this->resultInfo)->pkind;
}

$Type* Attr::attribTree($JCTree* tree, $Env* env, $Attr$ResultInfo* resultInfo) {
	$useLocalCurrentObjectStackCache();
	$var($Env, prevEnv, this->env);
	$var($Attr$ResultInfo, prevResult, this->resultInfo);
	{
		$var($Throwable, var$0, nullptr);
		$var($Type, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$set(this, env, env);
				$set(this, resultInfo, resultInfo);
				if ($nc(resultInfo)->needsArgumentAttr(tree)) {
					$set(this, result, $nc(this->argumentAttr)->attribArg(tree, env));
				} else {
					$nc(tree)->accept(this);
				}
				$set(this, matchBindings, $nc(this->matchBindingsComputer)->finishBindings(tree, this->matchBindings));
				$init($DeferredAttr$AttrMode);
				if (tree == this->breakTree && $nc($($nc($nc(resultInfo)->checkContext)->deferredAttrContext()))->mode == $DeferredAttr$AttrMode::CHECK) {
					breakTreeFound($(copyEnv(env)));
				}
				$assign(var$2, this->result);
				return$1 = true;
				goto $finally;
			} catch ($Symbol$CompletionFailure& ex) {
				$set($nc(tree), type, $nc(this->syms)->errType);
				$assign(var$2, $nc(this->chk)->completionError($(tree->pos()), ex));
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set(this, env, prevEnv);
			$set(this, resultInfo, prevResult);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void Attr::breakTreeFound($Env* env) {
	$throwNew($Attr$BreakAttr, env);
}

$Env* Attr::copyEnv($Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Env, newEnv, $nc(env)->dup(env->tree, $($nc(($cast($AttrContext, env->info)))->dup($(copyScope($nc(($cast($AttrContext, env->info)))->scope))))));
	if ($nc(newEnv)->outer != nullptr) {
		$set(newEnv, outer, copyEnv(newEnv->outer));
	}
	return newEnv;
}

$Scope$WriteableScope* Attr::copyScope($Scope$WriteableScope* sc) {
	$useLocalCurrentObjectStackCache();
	$var($Scope$WriteableScope, newScope, $Scope$WriteableScope::create($nc(sc)->owner));
	$var($List, elemsList, $List::nil());
	{
		$var($Iterator, i$, $nc($($nc(sc)->getSymbols()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				$assign(elemsList, $nc(elemsList)->prepend(sym));
			}
		}
	}
	{
		$var($Iterator, i$, $nc(elemsList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, s, $cast($Symbol, i$->next()));
			{
				$nc(newScope)->enter(s);
			}
		}
	}
	return newScope;
}

$Type* Attr::attribExpr($JCTree* tree, $Env* env, $Type* pt) {
	$init($Kinds$KindSelector);
	$init($TypeTag);
	$init($Type);
	return attribTree(tree, env, $$new($Attr$ResultInfo, this, $Kinds$KindSelector::VAL, !$nc(pt)->hasTag($TypeTag::ERROR) ? pt : static_cast<$Type*>($Type::noType)));
}

$Type* Attr::attribExpr($JCTree* tree, $Env* env) {
	return attribTree(tree, env, this->unknownExprInfo);
}

$Type* Attr::attribType($JCTree* tree, $Env* env) {
	$init($Type);
	$var($Type, result, attribType(tree, env, $Type::noType));
	return result;
}

$Type* Attr::attribType($JCTree* tree, $Env* env, $Type* pt) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$KindSelector);
	$var($Type, result, attribTree(tree, env, $$new($Attr$ResultInfo, this, $Kinds$KindSelector::TYP, pt)));
	return result;
}

$Type* Attr::attribStat($JCTree* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Env, analyzeEnv, $nc(this->analyzer)->copyEnvIfNeeded(tree, env));
	$var($Type, result, attribTree(tree, env, this->statInfo));
	$nc(this->analyzer)->analyzeIfNeeded(tree, analyzeEnv);
	$nc(this->attrRecover)->doRecovery();
	return result;
}

$List* Attr::attribExprs($List* trees, $Env* env, $Type* pt) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, ts, $new($ListBuffer));
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			ts->append($(attribExpr($cast($JCTree, l->head), env, pt)));
		}
	}
	return ts->toList();
}

void Attr::attribStats($List* trees, $Env* env) {
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			attribStat($cast($JCTree, l->head), env);
		}
	}
}

$Kinds$KindSelector* Attr::attribArgs($Kinds$KindSelector* initialKind, $List* trees, $Env* env, $ListBuffer* argtypes) {
	$useLocalCurrentObjectStackCache();
	$var($Kinds$KindSelector, kind, initialKind);
	{
		$var($Iterator, i$, $nc(trees)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCExpression, arg, $cast($JCTree$JCExpression, i$->next()));
			{
				$var($Type, argtype, $nc(this->chk)->checkNonVoid(arg, $(attribTree(arg, env, this->allowPoly ? this->methodAttrInfo : this->unknownExprInfo))));
				$init($TypeTag);
				if ($nc(argtype)->hasTag($TypeTag::DEFERRED)) {
					$init($Kinds$KindSelector);
					$assign(kind, $Kinds$KindSelector::of($$new($Kinds$KindSelectorArray, {
						$Kinds$KindSelector::POLY,
						kind
					})));
				}
				$nc(argtypes)->append(argtype);
			}
		}
	}
	return kind;
}

$List* Attr::attribAnyTypes($List* trees, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, argtypes, $new($ListBuffer));
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			argtypes->append($(attribType($cast($JCTree, l->head), env)));
		}
	}
	return argtypes->toList();
}

$List* Attr::attribTypes($List* trees, $Env* env) {
	$var($List, types, attribAnyTypes(trees, env));
	return $nc(this->chk)->checkRefTypes(trees, types);
}

void Attr::attribTypeVariables($List* typarams, $Env* env, bool checkCyclic) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(typarams)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCTypeParameter, tvar, $cast($JCTree$JCTypeParameter, i$->next()));
			{
				$var($Type$TypeVar, a, $cast($Type$TypeVar, $nc(tvar)->type));
				$nc($nc(a)->tsym)->flags_field |= 0x10000000;
				$init($Type);
				a->setUpperBound($Type::noType);
				if (!$nc(tvar->bounds)->isEmpty()) {
					$var($List, bounds, $List::of($(attribType($cast($JCTree, $nc(tvar->bounds)->head), env))));
					{
						$var($Iterator, i$, $nc($nc(tvar->bounds)->tail)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($JCTree$JCExpression, bound, $cast($JCTree$JCExpression, i$->next()));
							$assign(bounds, $nc(bounds)->prepend($(attribType(static_cast<$JCTree*>(bound), env))));
						}
					}
					$nc(this->types)->setBounds(a, $($nc(bounds)->reverse()));
				} else {
					$nc(this->types)->setBounds(a, $($List::of($nc(this->syms)->objectType)));
				}
				$nc(a->tsym)->flags_field &= (uint64_t)~0x10000000;
			}
		}
	}
	if (checkCyclic) {
		{
			$var($Iterator, i$, typarams->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCTypeParameter, tvar, $cast($JCTree$JCTypeParameter, i$->next()));
				{
					$nc(this->chk)->checkNonCyclic($($nc(tvar)->pos()), $cast($Type$TypeVar, tvar->type));
				}
			}
		}
	}
}

void Attr::attribAnnotationTypes($List* annotations, $Env* env) {
	$useLocalCurrentObjectStackCache();
	{
		$var($List, al, annotations);
		for (; $nc(al)->nonEmpty(); $assign(al, $nc(al)->tail)) {
			$var($JCTree$JCAnnotation, a, $cast($JCTree$JCAnnotation, al->head));
			attribType($nc(a)->annotationType, env);
		}
	}
}

$Object* Attr::attribLazyConstantValue($Env* env, $JCTree$JCVariableDecl* variable, $Type* type$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Type, type, type$renamed);
	$var($JCDiagnostic$DiagnosticPosition, prevLintPos, $nc(this->deferredLintHandler)->setPos($($nc(variable)->pos())));
	$var($JavaFileObject, prevSource, $nc(this->log)->useSource($nc($nc(env)->toplevel)->sourcefile));
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($Type, itype, attribExpr($nc(variable)->init, env, type));
			if ($nc(variable)->isImplicitlyTyped()) {
				$assign(type, ($set(variable, type, ($set($nc(variable->sym), type, $nc(this->chk)->checkLocalVarType(variable, $($nc(itype)->baseType()), variable->name))))));
			}
			if ($nc(itype)->constValue() != nullptr) {
				$assign(var$2, $nc($(coerce(itype, type)))->constValue());
				return$1 = true;
				goto $finally;
			} else {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->log)->useSource(prevSource);
			$nc(this->deferredLintHandler)->setPos(prevLintPos);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Type* Attr::attribBase($JCTree* tree, $Env* env, bool classExpected, bool interfaceExpected, bool checkExtensible) {
	$var($Type, t, $nc(tree)->type != nullptr ? $nc(tree)->type : attribType(tree, env));
	return checkBase(t, tree, env, classExpected, interfaceExpected, checkExtensible);
}

$Type* Attr::checkBase($Type* t$renamed, $JCTree* tree, $Env* env, bool classExpected, bool interfaceExpected, bool checkExtensible) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, t$renamed);
	$init($JCTree$Tag);
	$var($JCDiagnostic$DiagnosticPosition, pos, $nc(tree)->hasTag($JCTree$Tag::TYPEAPPLY) ? $nc(($nc(($cast($JCTree$JCTypeApply, tree)))->clazz))->pos() : $nc(tree)->pos());
	if ($nc($nc(t)->tsym)->isAnonymous()) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error(pos, $CompilerProperties$Errors::CantInheritFromAnon);
		return $nc(this->types)->createErrorType(t);
	}
	if ($nc(t)->isErroneous()) {
		return t;
	}
	$init($TypeTag);
	if ($nc(t)->hasTag($TypeTag::TYPEVAR) && !classExpected && !interfaceExpected) {
		if (t->getUpperBound() == nullptr) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error(pos, $CompilerProperties$Errors::IllegalForwardRef);
			return $nc(this->types)->createErrorType(t);
		}
	} else {
		$assign(t, $nc(this->chk)->checkClassType(pos, t, checkExtensible));
	}
	if (interfaceExpected && ((int64_t)($nc($nc(t)->tsym)->flags() & (uint64_t)(int64_t)512)) == 0) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error(pos, $CompilerProperties$Errors::IntfExpectedHere);
		return $nc(this->types)->createErrorType(t);
	} else if (checkExtensible && classExpected && ((int64_t)($nc(t->tsym)->flags() & (uint64_t)(int64_t)512)) != 0) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error(pos, $CompilerProperties$Errors::NoIntfExpectedHere);
		return $nc(this->types)->createErrorType(t);
	}
	if (checkExtensible && (((int64_t)($nc($nc(t)->tsym)->flags() & (uint64_t)(int64_t)16)) != 0)) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::CantInheritFromFinal(t->tsym)));
	}
	$nc(this->chk)->checkNonCyclic(pos, t);
	return t;
}

$Type* Attr::attribIdentAsEnumType($Env* env, $JCTree$JCIdent* id) {
	$Assert::check(((int64_t)($nc($nc($nc(env)->enclClass)->sym)->flags() & (uint64_t)(int64_t)16384)) != 0);
	$set($nc(id), type, $nc($($nc($nc($nc(($cast($AttrContext, $nc(env)->info)))->scope)->owner)->enclClass()))->type);
	$set(id, sym, $nc($nc($nc(($cast($AttrContext, env->info)))->scope)->owner)->enclClass());
	return id->type;
}

void Attr::visitClassDef($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Optional, localCacheContext, $Optional::ofNullable($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->attributionMode)->isSpeculative$ ? $($nc(this->argumentAttr)->withLocalCacheContext()) : ($ArgumentAttr$LocalCacheContext*)nullptr));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Kinds$KindSelector);
			if ($nc($nc($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->owner)->kind)->matches($Kinds$KindSelector::VAL_MTH)) {
				$nc(this->enter)->classEnter(static_cast<$JCTree*>(tree), this->env);
			} else {
				$init($JCTree$Tag);
				bool var$2 = $nc($nc(this->env)->tree)->hasTag($JCTree$Tag::NEWCLASS);
				if (var$2 && $TreeInfo::isInAnnotation(this->env, tree)) {
					$nc(this->enter)->classEnter(static_cast<$JCTree*>(tree), this->env);
				}
			}
			$var($Symbol$ClassSymbol, c, $nc(tree)->sym);
			if (c == nullptr) {
				$set(this, result, nullptr);
			} else {
				$nc(c)->complete();
				$init($JCTree$Tag);
				if ($nc(($cast($AttrContext, $nc(this->env)->info)))->isSelfCall && $nc($nc(this->env)->tree)->hasTag($JCTree$Tag::NEWCLASS)) {
					c->flags_field |= 0x00400000;
				}
				attribClass($(tree->pos()), c);
				$set(this, result, ($set(tree, type, c->type)));
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$nc(localCacheContext)->ifPresent(static_cast<$Consumer*>($$new(Attr$$Lambda$leave$1)));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Attr::visitMethodDef($JCTree$JCMethodDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$MethodSymbol, m, $nc(tree)->sym);
	bool isDefaultMethod = ((int64_t)($nc(m)->flags() & (uint64_t)(int64_t)0x0000080000000000)) != 0;
	$var($Lint, lint, $nc($nc(($cast($AttrContext, $nc(this->env)->info)))->lint)->augment(static_cast<$Symbol*>(m)));
	$var($Lint, prevLint, $nc(this->chk)->setLint(lint));
	$var($Symbol$MethodSymbol, prevMethod, $nc(this->chk)->setMethod(m));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->deferredLintHandler)->flush($(tree->pos()));
			$nc(this->chk)->checkDeprecatedAnnotation($(tree->pos()), m);
			$var($Env, localEnv, $nc(this->memberEnter)->methodEnv(tree, this->env));
			$set($nc($cast($AttrContext, $nc(localEnv)->info)), lint, lint);
			attribStats(tree->typarams, localEnv);
			if (m->isStatic()) {
				$nc(this->chk)->checkHideClashes($(tree->pos()), $nc($nc(this->env)->enclClass)->type, m);
			} else {
				$nc(this->chk)->checkOverrideClashes($(tree->pos()), $nc($nc(this->env)->enclClass)->type, m);
			}
			$nc(this->chk)->checkOverride(this->env, tree, m);
			if (isDefaultMethod && $nc(this->types)->overridesObjectMethod($(m->enclClass()), m)) {
				$var($Name, var$1, m->name);
				$var($Kinds$KindName, var$2, $Kinds::kindName($(m->location())));
				$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($CompilerProperties$Errors::DefaultOverridesObjectMember(var$1, var$2, $(m->location()))));
			}
			{
				$var($List, l, tree->typarams);
				for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
					$nc($nc(($cast($AttrContext, localEnv->info)))->scope)->enterIfAbsent($nc($nc(($cast($JCTree$JCTypeParameter, l->head)))->type)->tsym);
				}
			}
			$var($Symbol$ClassSymbol, owner, $nc($nc(this->env)->enclClass)->sym);
			bool var$3 = ((int64_t)($nc(owner)->flags() & (uint64_t)(int64_t)8192)) != 0;
			if (var$3 && ($nc(tree->params)->nonEmpty() || tree->recvparam != nullptr)) {
				$init($CompilerProperties$Errors);
				$nc(this->log)->error($nc(tree->params)->nonEmpty() ? $($nc(($cast($JCTree$JCVariableDecl, $nc(tree->params)->head)))->pos()) : $($nc(tree->recvparam)->pos()), $CompilerProperties$Errors::IntfAnnotationMembersCantHaveParams);
			}
			{
				$var($List, l, tree->params);
				for (; l->nonEmpty(); $assign(l, l->tail)) {
					attribStat($cast($JCTree, $nc(l)->head), localEnv);
				}
			}
			$nc(this->chk)->checkVarargsMethodDecl(localEnv, tree);
			$nc(this->chk)->validate(tree->typarams, localEnv);
			$init($TypeTag);
			if (tree->restype != nullptr && !$nc($nc(tree->restype)->type)->hasTag($TypeTag::VOID)) {
				$nc(this->chk)->validate(static_cast<$JCTree*>(tree->restype), localEnv);
			}
			if (tree->recvparam != nullptr) {
				$var($Env, newEnv, $nc(this->memberEnter)->methodEnv(tree, this->env));
				attribType(static_cast<$JCTree*>(tree->recvparam), newEnv);
				$nc(this->chk)->validate(static_cast<$JCTree*>(tree->recvparam), newEnv);
			}
			$init($Kinds$Kind);
			if ($nc($nc($nc(this->env)->enclClass)->sym)->isRecord() && $nc($nc(tree->sym)->owner)->kind == $Kinds$Kind::TYP) {
				$var($Optional, recordComponent, $nc($($nc($($nc($($nc($nc($nc(this->env)->enclClass)->sym)->getRecordComponents()))->stream()))->filter(static_cast<$Predicate*>($$new(Attr$$Lambda$lambda$visitMethodDef$1$2, tree)))))->findFirst());
				if ($nc(recordComponent)->isPresent()) {
					if (!$nc(tree->sym)->isPublic()) {
						$init($CompilerProperties$Fragments);
						$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($CompilerProperties$Errors::InvalidAccessorMethodInRecord($nc($nc(this->env)->enclClass)->sym, $CompilerProperties$Fragments::MethodMustBePublic)));
					}
					$var($Type, var$4, $nc($nc(tree->sym)->type)->getReturnType());
					if (!$nc(this->types)->isSameType(var$4, $nc(($cast($Symbol$RecordComponent, $(recordComponent->get()))))->type)) {
						$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($CompilerProperties$Errors::InvalidAccessorMethodInRecord($nc($nc(this->env)->enclClass)->sym, $($CompilerProperties$Fragments::AccessorReturnTypeDoesntMatch(tree->sym, $cast($Symbol, $(recordComponent->get())))))));
					}
					bool var$5 = $nc($($nc($nc(tree->sym)->type)->asMethodType()))->thrown != nullptr;
					if (var$5 && !$nc($nc($($nc($nc(tree->sym)->type)->asMethodType()))->thrown)->isEmpty()) {
						$init($CompilerProperties$Fragments);
						$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($CompilerProperties$Errors::InvalidAccessorMethodInRecord($nc($nc(this->env)->enclClass)->sym, $CompilerProperties$Fragments::AccessorMethodCantThrowException)));
					}
					if (!$nc(tree->typarams)->isEmpty()) {
						$init($CompilerProperties$Fragments);
						$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($CompilerProperties$Errors::InvalidAccessorMethodInRecord($nc($nc(this->env)->enclClass)->sym, $CompilerProperties$Fragments::AccessorMethodMustNotBeGeneric)));
					}
					if ($nc(tree->sym)->isStatic()) {
						$init($CompilerProperties$Fragments);
						$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($CompilerProperties$Errors::InvalidAccessorMethodInRecord($nc($nc(this->env)->enclClass)->sym, $CompilerProperties$Fragments::AccessorMethodMustNotBeStatic)));
					}
				}
				if (tree->name == $nc(this->names)->init) {
					if (((int64_t)($nc(tree->sym)->flags_field & (uint64_t)(int64_t)0x2000000000000000)) == 0) {
						$var($JCTree$JCMethodInvocation, app, $TreeInfo::firstConstructorCall(tree));
						bool var$6 = app == nullptr || $TreeInfo::name($nc(app)->meth) != $nc(this->names)->_this;
						if (var$6 || !checkFirstConstructorStat(app, tree, false)) {
							$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($CompilerProperties$Errors::FirstStatementMustBeCallToAnotherConstructor($nc($nc(this->env)->enclClass)->sym)));
						}
					} else {
						if (((int64_t)($nc(tree->sym)->flags_field & (uint64_t)(int64_t)0x0000001000000000)) == 0) {
							int32_t var$7 = $Check::protection(m->flags());
							if (var$7 > $Check::protection($nc($nc($nc(this->env)->enclClass)->sym)->flags())) {
								$init($CompilerProperties$Fragments);
								$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), ((int64_t)($nc($nc($nc(this->env)->enclClass)->sym)->flags() & (uint64_t)(int64_t)7)) == 0 ? $($CompilerProperties$Errors::InvalidCanonicalConstructorInRecord($CompilerProperties$Fragments::Canonical, $nc($nc($nc(this->env)->enclClass)->sym)->name, $($CompilerProperties$Fragments::CanonicalMustNotHaveStrongerAccess("package"_s)))) : $($CompilerProperties$Errors::InvalidCanonicalConstructorInRecord($CompilerProperties$Fragments::Canonical, $nc($nc($nc(this->env)->enclClass)->sym)->name, $($CompilerProperties$Fragments::CanonicalMustNotHaveStrongerAccess($(static_cast<$Set*>($Flags::asFlagSet((int64_t)($nc($nc($nc(this->env)->enclClass)->sym)->flags() & (uint64_t)(int64_t)7)))))))));
							}
							$var($JCTree$JCMethodInvocation, app, $TreeInfo::firstConstructorCall(tree));
							bool var$9 = app != nullptr;
							if (var$9) {
								bool var$10 = $TreeInfo::name(app->meth) == $nc(this->names)->_this;
								var$9 = (var$10 || $TreeInfo::name(app->meth) == $nc(this->names)->_super);
							}
							bool var$8 = var$9;
							if (var$8 && checkFirstConstructorStat(app, tree, false)) {
								$init($CompilerProperties$Fragments);
								$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($CompilerProperties$Errors::InvalidCanonicalConstructorInRecord($CompilerProperties$Fragments::Canonical, $nc($nc($nc(this->env)->enclClass)->sym)->name, $CompilerProperties$Fragments::CanonicalMustNotContainExplicitConstructorInvocation)));
							}
						}
						if (!$nc(tree->typarams)->isEmpty()) {
							$init($CompilerProperties$Fragments);
							$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($CompilerProperties$Errors::InvalidCanonicalConstructorInRecord($CompilerProperties$Fragments::Canonical, $nc($nc($nc(this->env)->enclClass)->sym)->name, $CompilerProperties$Fragments::CanonicalMustNotDeclareTypeVariables)));
						}
						$var($List, recordComponents, $nc($nc($nc(this->env)->enclClass)->sym)->getRecordComponents());
						$var($List, recordFieldTypes, $nc($($TreeInfo::recordFields($nc(this->env)->enclClass)))->map(static_cast<$Function*>($$new(Attr$$Lambda$lambda$visitMethodDef$2$3))));
						{
							$var($Iterator, i$, $nc(tree->params)->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($JCTree$JCVariableDecl, param, $cast($JCTree$JCVariableDecl, i$->next()));
								{
									bool paramIsVarArgs = ((int64_t)($nc($nc(param)->sym)->flags_field & (uint64_t)(int64_t)0x0000000400000000)) != 0;
									bool var$11 = !$nc(this->types)->isSameType(param->type, $cast($Type, $nc(recordFieldTypes)->head));
									if (var$11 || ($nc(($cast($Symbol$RecordComponent, $nc(recordComponents)->head)))->isVarargs() != paramIsVarArgs)) {
										$init($CompilerProperties$Fragments);
										$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(param), $($CompilerProperties$Errors::InvalidCanonicalConstructorInRecord($CompilerProperties$Fragments::Canonical, $nc($nc($nc(this->env)->enclClass)->sym)->name, $CompilerProperties$Fragments::TypeMustBeIdenticalToCorrespondingRecordComponentType)));
									}
									$assign(recordComponents, $nc(recordComponents)->tail);
									$assign(recordFieldTypes, $nc(recordFieldTypes)->tail);
								}
							}
						}
					}
				}
			}
			if (((int64_t)($nc(owner)->flags() & (uint64_t)(int64_t)8192)) != 0) {
				if ($nc(tree->thrown)->nonEmpty()) {
					$init($CompilerProperties$Errors);
					$nc(this->log)->error($($nc(($cast($JCTree$JCExpression, $nc(tree->thrown)->head)))->pos()), $CompilerProperties$Errors::ThrowsNotAllowedInIntfAnnotation);
				}
				if ($nc(tree->typarams)->nonEmpty()) {
					$init($CompilerProperties$Errors);
					$nc(this->log)->error($($nc(($cast($JCTree$JCTypeParameter, $nc(tree->typarams)->head)))->pos()), $CompilerProperties$Errors::IntfAnnotationMembersCantHaveTypeParams);
				}
				$nc(this->chk)->validateAnnotationType(tree->restype);
				$nc(this->chk)->validateAnnotationMethod($(tree->pos()), m);
			}
			{
				$var($List, l, tree->thrown);
				for (; l->nonEmpty(); $assign(l, l->tail)) {
					$nc(this->chk)->checkType($($nc(($cast($JCTree$JCExpression, l->head)))->pos()), $nc(($cast($JCTree$JCExpression, l->head)))->type, $nc(this->syms)->throwableType);
				}
			}
			if (tree->body == nullptr) {
				if (tree->defaultValue != nullptr) {
					if (((int64_t)($nc(owner)->flags() & (uint64_t)(int64_t)8192)) == 0) {
						$init($CompilerProperties$Errors);
						$nc(this->log)->error($(tree->pos()), $CompilerProperties$Errors::DefaultAllowedInIntfAnnotationMember);
					}
				}
				if (isDefaultMethod || ((int64_t)($nc(tree->sym)->flags() & (uint64_t)(int64_t)(1024 | 256))) == 0) {
					$init($CompilerProperties$Errors);
					$nc(this->log)->error($(tree->pos()), $CompilerProperties$Errors::MissingMethBodyOrDeclAbstract);
				}
			} else if (((int64_t)($nc(tree->sym)->flags() & (uint64_t)((1024 | (int64_t)0x0000080000000000) | 2))) == 1024) {
				if (((int64_t)($nc(owner)->flags() & (uint64_t)(int64_t)512)) != 0) {
					$init($CompilerProperties$Errors);
					$nc(this->log)->error($($nc(tree->body)->pos()), $CompilerProperties$Errors::IntfMethCantHaveBody);
				} else {
					$init($CompilerProperties$Errors);
					$nc(this->log)->error($(tree->pos()), $CompilerProperties$Errors::AbstractMethCantHaveBody);
				}
			} else if (((int64_t)($nc(tree->mods)->flags & (uint64_t)(int64_t)256)) != 0) {
				$init($CompilerProperties$Errors);
				$nc(this->log)->error($(tree->pos()), $CompilerProperties$Errors::NativeMethCantHaveBody);
			} else {
				if (tree->name == $nc(this->names)->init && $nc(owner)->type != $nc(this->syms)->objectType) {
					$var($JCTree$JCBlock, body, tree->body);
					bool var$12 = $nc($nc(body)->stats)->isEmpty();
					if (var$12 || $TreeInfo::getConstructorInvocationName($nc(body)->stats, this->names) == $nc(this->names)->empty) {
						$var($List, var$13, $List::nil());
						$var($JCTree$JCExpression, var$14, static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident($nc(this->names)->_super)));
						$var($JCTree$JCStatement, supCall, $nc($($nc(this->make)->at($nc(body)->pos$)))->Exec($($nc(this->make)->Apply(var$13, var$14, $($nc(this->make)->Idents($($List::nil())))))));
						$set($nc(body), stats, $nc(body->stats)->prepend(supCall));
					} else {
						bool var$16 = ((int64_t)($nc($nc($nc(this->env)->enclClass)->sym)->flags() & (uint64_t)(int64_t)16384)) != 0 && ((int64_t)($nc(tree->mods)->flags & (uint64_t)(int64_t)0x0000001000000000)) == 0;
						if (var$16 && $TreeInfo::isSuperCall($cast($JCTree, $nc($nc(body)->stats)->head))) {
							$var($JCDiagnostic$DiagnosticPosition, var$17, $nc(($cast($JCTree$JCStatement, $nc($nc(tree->body)->stats)->head)))->pos());
							$nc(this->log)->error(var$17, $($CompilerProperties$Errors::CallToSuperNotAllowedInEnumCtor($nc($nc(this->env)->enclClass)->sym)));
						}
					}
					if ($nc($nc($nc(this->env)->enclClass)->sym)->isRecord() && ((int64_t)($nc(tree->sym)->flags_field & (uint64_t)(int64_t)0x2000000000000000)) != 0) {
						$var($List, recordComponentNames, $nc($($TreeInfo::recordFields($nc(this->env)->enclClass)))->map(static_cast<$Function*>($$new(Attr$$Lambda$lambda$visitMethodDef$3$4))));
						$var($List, initParamNames, $nc($nc(tree->sym)->params$)->map(static_cast<$Function*>($$new(Attr$$Lambda$lambda$visitMethodDef$4$5))));
						if (!$nc(initParamNames)->equals(recordComponentNames)) {
							$init($CompilerProperties$Fragments);
							$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($CompilerProperties$Errors::InvalidCanonicalConstructorInRecord($CompilerProperties$Fragments::Canonical, $nc($nc($nc(this->env)->enclClass)->sym)->name, $CompilerProperties$Fragments::CanonicalWithNameMismatch)));
						}
						bool var$18 = $nc($($nc($nc(tree->sym)->type)->asMethodType()))->thrown != nullptr;
						if (var$18 && !$nc($nc($($nc($nc(tree->sym)->type)->asMethodType()))->thrown)->isEmpty()) {
							$init($CompilerProperties$Fragments);
							$var($JCDiagnostic$Fragment, var$19, $TreeInfo::isCompactConstructor(tree) ? $CompilerProperties$Fragments::Compact : $CompilerProperties$Fragments::Canonical);
							$var($Name, var$20, $nc($nc($nc(this->env)->enclClass)->sym)->name);
							$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($CompilerProperties$Errors::InvalidCanonicalConstructorInRecord(var$19, var$20, $($CompilerProperties$Fragments::ThrowsClauseNotAllowedForCanonicalConstructor($TreeInfo::isCompactConstructor(tree) ? $CompilerProperties$Fragments::Compact : $CompilerProperties$Fragments::Canonical)))));
						}
					}
				}
				$nc(this->annotate)->queueScanTreeAndTypeAnnotate(tree->body, localEnv, m, nullptr);
				$nc(this->annotate)->flush();
				attribStat(tree->body, localEnv);
			}
			$nc($nc(($cast($AttrContext, localEnv->info)))->scope)->leave();
			$set(this, result, ($set(tree, type, m->type)));
		} catch ($Throwable& var$21) {
			$assign(var$0, var$21);
		} /*finally*/ {
			$nc(this->chk)->setLint(prevLint);
			$nc(this->chk)->setMethod(prevMethod);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Attr::visitVarDef($JCTree$JCVariableDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if ($nc($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->owner)->kind == $Kinds$Kind::MTH || $nc($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->owner)->kind == $Kinds$Kind::VAR) {
		if ($nc(tree)->sym != nullptr) {
			$nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->enter(tree->sym);
		} else {
			bool var$0 = tree->isImplicitlyTyped();
			if (var$0 && ((int64_t)($nc($($cast($JCTree$JCModifiers, tree->getModifiers())))->flags & (uint64_t)(int64_t)0x0000000200000000)) == 0) {
				if (tree->init == nullptr) {
					$init($CompilerProperties$Fragments);
					$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($CompilerProperties$Errors::CantInferLocalVarType(tree->name, $CompilerProperties$Fragments::LocalMissingInit)));
					$set(tree, vartype, $nc(this->make)->Erroneous());
				} else {
					$var($JCDiagnostic$Fragment, msg, canInferLocalVarType(tree));
					if (msg != nullptr) {
						$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($CompilerProperties$Errors::CantInferLocalVarType(tree->name, msg)));
						$set(tree, vartype, $nc(this->make)->Erroneous());
					}
				}
			}
			{
				$var($Throwable, var$1, nullptr);
				try {
					$nc(this->annotate)->blockAnnotations();
					$nc(this->memberEnter)->memberEnter(static_cast<$JCTree*>(tree), this->env);
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					$nc(this->annotate)->unblockAnnotations();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		}
	} else if ($nc(tree)->init != nullptr) {
		$nc(this->annotate)->queueScanTreeAndTypeAnnotate(tree->init, this->env, tree->sym, $(tree->pos()));
		$nc(this->annotate)->flush();
	}
	$var($Symbol$VarSymbol, v, $nc(tree)->sym);
	$var($Lint, lint, $nc($nc(($cast($AttrContext, $nc(this->env)->info)))->lint)->augment(static_cast<$Symbol*>(v)));
	$var($Lint, prevLint, $nc(this->chk)->setLint(lint));
	$init($JCTree$Tag);
	$init($JCTree$JCLambda$ParameterKind);
	bool var$3 = $nc($nc(this->env)->tree)->hasTag($JCTree$Tag::LAMBDA) && $nc(($cast($JCTree$JCLambda, $nc(this->env)->tree)))->paramKind == $JCTree$JCLambda$ParameterKind::IMPLICIT;
	bool isImplicitLambdaParameter = var$3 && ((int64_t)($nc(tree->sym)->flags() & (uint64_t)(int64_t)0x0000000200000000)) != 0;
	$nc(this->chk)->validate(tree->vartype, this->env, !isImplicitLambdaParameter && !tree->isImplicitlyTyped());
	{
		$var($Throwable, var$4, nullptr);
		try {
			$nc(v)->getConstValue();
			$nc(this->deferredLintHandler)->flush($(tree->pos()));
			$nc(this->chk)->checkDeprecatedAnnotation($(tree->pos()), v);
			if (tree->init != nullptr) {
				if (((int64_t)(v->flags_field & (uint64_t)(int64_t)16)) == 0 || !$nc(this->memberEnter)->needsLazyConstValue(tree->init)) {
					$var($Env, initEnv, $nc(this->memberEnter)->initEnv(tree, this->env));
					$set($nc($cast($AttrContext, $nc(initEnv)->info)), lint, lint);
					$set($nc($cast($AttrContext, initEnv->info)), enclVar, v);
					attribExpr(tree->init, initEnv, v->type);
					if (tree->isImplicitlyTyped()) {
						$set(v, type, $nc(this->chk)->checkLocalVarType(tree, $($nc($nc(tree->init)->type)->baseType()), tree->name));
					}
				}
				if (tree->isImplicitlyTyped()) {
					setSyntheticVariableType(tree, v->type);
				}
			}
			$set(this, result, ($set(tree, type, v->type)));
			bool var$5 = $nc($nc($nc(this->env)->enclClass)->sym)->isRecord() && $nc($nc(tree->sym)->owner)->kind == $Kinds$Kind::TYP;
			if (var$5 && !v->isStatic()) {
				if (isNonArgsMethodInObject(v->name)) {
					$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($CompilerProperties$Errors::IllegalRecordComponentName(v)));
				}
			}
		} catch ($Throwable& var$6) {
			$assign(var$4, var$6);
		} /*finally*/ {
			$nc(this->chk)->setLint(prevLint);
		}
		if (var$4 != nullptr) {
			$throw(var$4);
		}
	}
}

bool Attr::isNonArgsMethodInObject($Name* name) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc($($nc($nc($nc(this->syms)->objectType)->tsym)->members()))->getSymbolsByName(name, static_cast<$Predicate*>($$new(Attr$$Lambda$lambda$isNonArgsMethodInObject$5$6)))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, s, $cast($Symbol, i$->next()));
			{
				if ($nc($($nc($nc(s)->type)->getParameterTypes()))->isEmpty()) {
					return true;
				}
			}
		}
	}
	return false;
}

$JCDiagnostic$Fragment* Attr::canInferLocalVarType($JCTree$JCVariableDecl* tree) {
	$var($Attr$LocalInitScanner, lis, $new($Attr$LocalInitScanner));
	lis->scan(static_cast<$JCTree*>($nc(tree)->init));
	return lis->badInferenceMsg;
}

void Attr::visitSkip($JCTree$JCSkip* tree) {
	$set(this, result, nullptr);
}

void Attr::visitBlock($JCTree$JCBlock* tree) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if ($nc($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->owner)->kind == $Kinds$Kind::TYP || $nc($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->owner)->kind == $Kinds$Kind::ERR) {
		$var($Symbol, fakeOwner, $new($Symbol$MethodSymbol, ($nc(tree)->flags | 0x00100000) | ((int64_t)($nc($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->owner)->flags() & (uint64_t)(int64_t)2048)), $nc(this->names)->empty, nullptr, $nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->owner));
		$var($Env, localEnv, $nc(this->env)->dup(tree, $($nc(($cast($AttrContext, $nc(this->env)->info)))->dup($($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->dupUnshared(fakeOwner))))));
		if (((int64_t)($nc(tree)->flags & (uint64_t)(int64_t)8)) != 0) {
			++$nc(($cast($AttrContext, $nc(localEnv)->info)))->staticLevel;
		}
		$nc(this->annotate)->queueScanTreeAndTypeAnnotate(tree, localEnv, $nc($nc(($cast($AttrContext, $nc(localEnv)->info)))->scope)->owner, nullptr);
		$nc(this->annotate)->flush();
		attribStats($nc(tree)->stats, localEnv);
		{
			$var($Symbol$ClassSymbol, cs, $cast($Symbol$ClassSymbol, $nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->owner));
			$var($List, tas, $nc($nc($nc(($cast($AttrContext, $nc(localEnv)->info)))->scope)->owner)->getRawTypeAttributes());
			if (((int64_t)($nc(tree)->flags & (uint64_t)(int64_t)8)) != 0) {
				$nc(cs)->appendClassInitTypeAttributes(tas);
			} else {
				$nc(cs)->appendInitTypeAttributes(tas);
			}
		}
	} else {
		$var($Env, localEnv, $nc(this->env)->dup(tree, $($nc(($cast($AttrContext, $nc(this->env)->info)))->dup($($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->dup())))));
		{
			$var($Throwable, var$0, nullptr);
			try {
				attribStats($nc(tree)->stats, localEnv);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc($nc(($cast($AttrContext, $nc(localEnv)->info)))->scope)->leave();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$set(this, result, nullptr);
}

void Attr::visitDoLoop($JCTree$JCDoWhileLoop* tree) {
	$useLocalCurrentObjectStackCache();
	attribStat($nc(tree)->body, $($nc(this->env)->dup(tree)));
	attribExpr($nc(tree)->cond, this->env, $nc(this->syms)->booleanType);
	if (!breaksOutOf(tree, $nc(tree)->body)) {
		$var($MatchBindingsComputer$MatchBindings, condBindings, this->matchBindings);
		$nc($nc(condBindings)->bindingsWhenFalse)->forEach(static_cast<$Consumer*>($$new(Attr$$Lambda$enter$7, static_cast<$Scope$WriteableScope*>($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)))));
		$nc(condBindings->bindingsWhenFalse)->forEach(static_cast<$Consumer*>($$new(Attr$$Lambda$preserveBinding$8)));
	}
	$set(this, result, nullptr);
}

void Attr::visitWhileLoop($JCTree$JCWhileLoop* tree) {
	$useLocalCurrentObjectStackCache();
	attribExpr($nc(tree)->cond, this->env, $nc(this->syms)->booleanType);
	$var($MatchBindingsComputer$MatchBindings, condBindings, this->matchBindings);
	$var($Env, whileEnv, bindingEnv(this->env, $nc(condBindings)->bindingsWhenTrue));
	{
		$var($Throwable, var$0, nullptr);
		try {
			attribStat($nc(tree)->body, $($nc(whileEnv)->dup(tree)));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($nc(($cast($AttrContext, $nc(whileEnv)->info)))->scope)->leave();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (!breaksOutOf(tree, $nc(tree)->body)) {
		$nc($nc(condBindings)->bindingsWhenFalse)->forEach(static_cast<$Consumer*>($$new(Attr$$Lambda$enter$7, static_cast<$Scope$WriteableScope*>($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)))));
		$nc(condBindings->bindingsWhenFalse)->forEach(static_cast<$Consumer*>($$new(Attr$$Lambda$preserveBinding$8)));
	}
	$set(this, result, nullptr);
}

bool Attr::breaksOutOf($JCTree* loop, $JCTree* body) {
	preFlow(body);
	return $nc(this->flow)->breaksOutOf(this->env, loop, body, this->make);
}

void Attr::visitForLoop($JCTree$JCForLoop* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Env, loopEnv, $nc(this->env)->dup($nc(this->env)->tree, $($nc(($cast($AttrContext, $nc(this->env)->info)))->dup($($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->dup())))));
	$init($MatchBindingsComputer);
	$var($MatchBindingsComputer$MatchBindings, condBindings, $MatchBindingsComputer::EMPTY);
	{
		$var($Throwable, var$0, nullptr);
		try {
			attribStats($nc(tree)->init, loopEnv);
			if ($nc(tree)->cond != nullptr) {
				attribExpr(tree->cond, loopEnv, $nc(this->syms)->booleanType);
				$assign(condBindings, this->matchBindings);
			}
			$var($Env, bodyEnv, bindingEnv(loopEnv, $nc(condBindings)->bindingsWhenTrue));
			{
				$var($Throwable, var$1, nullptr);
				try {
					$set($nc(bodyEnv), tree, tree);
					attribStats($nc(tree)->step, bodyEnv);
					attribStat($nc(tree)->body, bodyEnv);
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					$nc($nc(($cast($AttrContext, $nc(bodyEnv)->info)))->scope)->leave();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
			$set(this, result, nullptr);
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$nc($nc(($cast($AttrContext, $nc(loopEnv)->info)))->scope)->leave();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (!breaksOutOf(tree, $nc(tree)->body)) {
		$nc($nc(condBindings)->bindingsWhenFalse)->forEach(static_cast<$Consumer*>($$new(Attr$$Lambda$enter$7, static_cast<$Scope$WriteableScope*>($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)))));
		$nc(condBindings->bindingsWhenFalse)->forEach(static_cast<$Consumer*>($$new(Attr$$Lambda$preserveBinding$8)));
	}
}

void Attr::visitForeachLoop($JCTree$JCEnhancedForLoop* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Env, loopEnv, $nc(this->env)->dup($nc(this->env)->tree, $($nc(($cast($AttrContext, $nc(this->env)->info)))->dup($($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->dup())))));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Type, exprType, $nc(this->types)->cvarUpperBound($(attribExpr($nc(tree)->expr, loopEnv))));
			$nc(this->chk)->checkNonVoid($($nc(tree)->pos()), exprType);
			$var($Type, elemtype, $nc(this->types)->elemtype(exprType));
			if (elemtype == nullptr) {
				$var($Type, base, $nc(this->types)->asSuper(exprType, $nc($nc(this->syms)->iterableType)->tsym));
				if (base == nullptr) {
					$var($JCDiagnostic$DiagnosticPosition, var$1, $nc($nc(tree)->expr)->pos());
					$init($CompilerProperties$Fragments);
					$nc(this->log)->error(var$1, $($CompilerProperties$Errors::ForeachNotApplicableToType(exprType, $CompilerProperties$Fragments::TypeReqArrayOrIterable)));
					$assign(elemtype, $nc(this->types)->createErrorType(exprType));
				} else {
					$var($List, iterableParams, $nc(base)->allparams());
					$assign(elemtype, $nc(iterableParams)->isEmpty() ? $nc(this->syms)->objectType : $nc(this->types)->wildUpperBound($cast($Type, $nc(iterableParams)->head)));
					$var($JCDiagnostic$DiagnosticPosition, var$2, $nc(tree)->pos());
					$var($Env, var$3, loopEnv);
					$var($Type, var$4, exprType);
					$var($Name, var$5, $nc(this->names)->iterator);
					$var($List, var$6, $List::nil());
					$var($Symbol, iterSymbol, $nc(this->rs)->resolveInternalMethod(var$2, var$3, var$4, var$5, var$6, $($List::nil())));
					if ($nc(this->types)->asSuper($($nc($nc(iterSymbol)->type)->getReturnType()), $nc($nc(this->syms)->iteratorType)->tsym) == nullptr) {
						$var($JCDiagnostic$DiagnosticPosition, var$7, $nc(tree)->pos());
						$init($CompilerProperties$Fragments);
						$nc(this->log)->error(var$7, $($CompilerProperties$Errors::ForeachNotApplicableToType(exprType, $CompilerProperties$Fragments::TypeReqArrayOrIterable)));
					}
				}
			}
			if ($nc($nc(tree)->var)->isImplicitlyTyped()) {
				$var($Type, inferredType, $nc(this->chk)->checkLocalVarType(tree->var, elemtype, $nc(tree->var)->name));
				setSyntheticVariableType(tree->var, inferredType);
			}
			attribStat($nc(tree)->var, loopEnv);
			$nc(this->chk)->checkType($($nc($nc(tree)->expr)->pos()), elemtype, $nc($nc(tree->var)->sym)->type);
			$set($nc(loopEnv), tree, tree);
			attribStat($nc(tree)->body, loopEnv);
			$set(this, result, nullptr);
		} catch ($Throwable& var$8) {
			$assign(var$0, var$8);
		} /*finally*/ {
			$nc($nc(($cast($AttrContext, $nc(loopEnv)->info)))->scope)->leave();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Attr::visitLabelled($JCTree$JCLabeledStatement* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Env, env1, this->env);
	$init($JCTree$Tag);
	while (env1 != nullptr && !$nc(env1->tree)->hasTag($JCTree$Tag::CLASSDEF)) {
		if ($nc(env1->tree)->hasTag($JCTree$Tag::LABELLED) && $nc(($cast($JCTree$JCLabeledStatement, env1->tree)))->label == $nc(tree)->label) {
			$var($JCDiagnostic$DiagnosticPosition, var$0, tree->pos());
			$nc(this->log)->error(var$0, $($CompilerProperties$Errors::LabelAlreadyInUse(tree->label)));
			break;
		}
		$assign(env1, env1->next);
	}
	attribStat($nc(tree)->body, $($nc(this->env)->dup(tree)));
	$set(this, result, nullptr);
}

void Attr::visitSwitch($JCTree$JCSwitch* tree) {
	handleSwitch(tree, $nc(tree)->selector, tree->cases, static_cast<$BiConsumer*>($$new(Attr$$Lambda$lambda$visitSwitch$6$9, this)));
	$set(this, result, nullptr);
}

void Attr::visitSwitchExpression($JCTree$JCSwitchExpression* tree) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	bool var$1 = $nc($(pt()))->hasTag($TypeTag::NONE);
	bool var$0 = var$1 && !$equals(pt(), $Type::recoveryType);
	$init($Infer);
	$init($JCTree$JCPolyExpression$PolyKind);
	$set($nc(tree), polyKind, (var$0 && pt() != $Infer::anyPoly) ? $JCTree$JCPolyExpression$PolyKind::STANDALONE : $JCTree$JCPolyExpression$PolyKind::POLY);
	if (tree->polyKind == $JCTree$JCPolyExpression$PolyKind::POLY && $nc($nc(this->resultInfo)->pt)->hasTag($TypeTag::VOID)) {
		$init($CompilerProperties$Fragments);
		$nc($nc(this->resultInfo)->checkContext)->report(tree, $($nc(this->diags)->fragment($CompilerProperties$Fragments::SwitchExpressionTargetCantBeVoid)));
		$set(this, result, ($set(tree, type, $nc(this->types)->createErrorType($nc(this->resultInfo)->pt))));
		return;
	}
	$var($Attr$ResultInfo, condInfo, tree->polyKind == $JCTree$JCPolyExpression$PolyKind::STANDALONE ? this->unknownExprInfo : $nc(this->resultInfo)->dup($(switchExpressionContext($nc(this->resultInfo)->checkContext))));
	$var($ListBuffer, caseTypePositions, $new($ListBuffer));
	$var($ListBuffer, caseTypes, $new($ListBuffer));
	handleSwitch(tree, tree->selector, tree->cases, static_cast<$BiConsumer*>($$new(Attr$$Lambda$lambda$visitSwitchExpression$7$10, this, condInfo, tree, caseTypePositions, caseTypes)));
	if ($nc(tree->cases)->isEmpty()) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($(tree->pos()), $CompilerProperties$Errors::SwitchExpressionEmpty);
	} else if (caseTypes->isEmpty()) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($(tree->pos()), $CompilerProperties$Errors::SwitchExpressionNoResultExpressions);
	}
	$var($Type, var$2, nullptr);
	if (tree->polyKind == $JCTree$JCPolyExpression$PolyKind::STANDALONE) {
		$var($List, var$3, caseTypePositions->toList());
		$assign(var$2, condType(var$3, $(caseTypes->toList())));
	} else {
		$assign(var$2, pt());
	}
	$var($Type, owntype, var$2);
	$init($Kinds$KindSelector);
	$set(this, result, ($set(tree, type, check(tree, owntype, $Kinds$KindSelector::VAL, this->resultInfo))));
}

$Check$CheckContext* Attr::switchExpressionContext($Check$CheckContext* checkContext) {
	return $new($Attr$2, this, checkContext);
}

void Attr::handleSwitch($JCTree* switchTree, $JCTree$JCExpression* selector, $List* cases, $BiConsumer* attribCase) {
	$useLocalCurrentObjectStackCache();
	$var($Type, seltype, attribExpr(selector, this->env));
	$var($Env, switchEnv, $nc(this->env)->dup(switchTree, $($nc(($cast($AttrContext, $nc(this->env)->info)))->dup($($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->dup())))));
	{
		$var($Throwable, var$0, nullptr);
		try {
			bool enumSwitch = ((int64_t)($nc($nc(seltype)->tsym)->flags() & (uint64_t)(int64_t)$Flags::ENUM)) != 0;
			bool stringSwitch = $nc(this->types)->isSameType(seltype, $nc(this->syms)->stringType);
			bool errorEnumSwitch = $TreeInfo::isErrorEnumSwitch(selector, cases);
			bool patternSwitch = false;
			if (!enumSwitch && !stringSwitch && !errorEnumSwitch && !$nc(this->types)->isAssignable(seltype, $nc(this->syms)->intType)) {
				$init($Source$Feature);
				$nc(this->preview)->checkSourceLevel($($nc(selector)->pos()), $Source$Feature::PATTERN_SWITCH);
				patternSwitch = true;
			} else {
				patternSwitch = $nc($($nc($($nc(cases)->stream()))->flatMap(static_cast<$Function*>($$new(Attr$$Lambda$lambda$handleSwitch$8$11)))))->anyMatch(static_cast<$Predicate*>($$new(Attr$$Lambda$lambda$handleSwitch$9$12)));
			}
			$var($Set, labels, $new($HashSet));
			$var($List, coveredTypes, $List::nil());
			bool hasDefault = false;
			bool hasTotalPattern = false;
			bool hasNullPattern = false;
			$CaseTree$CaseKind* caseKind = nullptr;
			bool wasError = false;
			$var($MatchBindingsComputer$MatchBindings, prevBindings, nullptr);
			{
				$var($List, l, cases);
				for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
					$var($JCTree$JCCase, c, $cast($JCTree$JCCase, l->head));
					if (caseKind == nullptr) {
						caseKind = $nc(c)->caseKind;
					} else if (caseKind != $nc(c)->caseKind && !wasError) {
						$init($CompilerProperties$Errors);
						$nc(this->log)->error($(c->pos()), $CompilerProperties$Errors::SwitchMixingCaseTypes);
						wasError = true;
					}
					$var($MatchBindingsComputer$MatchBindings, currentBindings, prevBindings);
					bool wasTotalPattern = hasTotalPattern;
					{
						$var($Iterator, i$, $nc($nc(c)->labels)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($JCTree$JCCaseLabel, pat, $cast($JCTree$JCCaseLabel, i$->next()));
							{
								if ($nc(pat)->isExpression()) {
									$var($JCTree$JCExpression, expr, $cast($JCTree$JCExpression, pat));
									if ($TreeInfo::isNull(expr)) {
										$init($Source$Feature);
										$nc(this->preview)->checkSourceLevel($(expr->pos()), $Source$Feature::CASE_NULL);
										if (hasNullPattern) {
											$init($CompilerProperties$Errors);
											$nc(this->log)->error($(pat->pos()), $CompilerProperties$Errors::DuplicateCaseLabel);
										} else if (wasTotalPattern) {
											$init($CompilerProperties$Errors);
											$nc(this->log)->error($(pat->pos()), $CompilerProperties$Errors::PatternDominated);
										}
										hasNullPattern = true;
										attribExpr(expr, switchEnv, seltype);
										$set(this, matchBindings, $new($MatchBindingsComputer$MatchBindings, $nc(this->matchBindings)->bindingsWhenTrue, $nc(this->matchBindings)->bindingsWhenFalse, true));
									} else if (enumSwitch) {
										$var($Symbol, sym, enumConstant(expr, seltype));
										if (sym == nullptr) {
											$init($CompilerProperties$Errors);
											$nc(this->log)->error($(expr->pos()), $CompilerProperties$Errors::EnumLabelMustBeUnqualifiedEnum);
										} else if (!labels->add(sym)) {
											$init($CompilerProperties$Errors);
											$nc(this->log)->error($(pat->pos()), $CompilerProperties$Errors::DuplicateCaseLabel);
										} else {
											checkCaseLabelDominated($(pat->pos()), coveredTypes, $nc(sym)->type);
										}
									} else if (errorEnumSwitch) {
										$var($Resolve$LogResolveHelper, prevResolveHelper, $nc(this->rs)->basicLogResolveHelper);
										{
											$var($Throwable, var$1, nullptr);
											try {
												$set($nc(this->rs), basicLogResolveHelper, $nc(this->rs)->silentLogResolveHelper);
												attribExpr(pat, switchEnv, seltype);
											} catch ($Throwable& var$2) {
												$assign(var$1, var$2);
											} /*finally*/ {
												$set($nc(this->rs), basicLogResolveHelper, prevResolveHelper);
											}
											if (var$1 != nullptr) {
												$throw(var$1);
											}
										}
									} else {
										$init($Kinds$KindSelector);
										$init($TypeTag);
										$init($Type);
										$var($Attr$ResultInfo, valTypInfo, $new($Attr$ResultInfo, this, $Kinds$KindSelector::VAL_TYP, !seltype->hasTag($TypeTag::ERROR) ? seltype : static_cast<$Type*>($Type::noType)));
										$var($Type, pattype, attribTree(expr, switchEnv, valTypInfo));
										if (!$nc(pattype)->hasTag($TypeTag::ERROR)) {
											if (pattype->constValue() == nullptr) {
												$var($Symbol, s, $TreeInfo::symbol(expr));
												$init($Kinds$Kind);
												if (s != nullptr && s->kind == $Kinds$Kind::TYP && this->allowPatternSwitch) {
													$init($CompilerProperties$Errors);
													$nc(this->log)->error($(expr->pos()), $CompilerProperties$Errors::PatternExpected);
												} else {
													$init($CompilerProperties$Errors);
													$nc(this->log)->error($(expr->pos()), (stringSwitch ? $CompilerProperties$Errors::StringConstReq : $CompilerProperties$Errors::ConstExprReq));
												}
											} else if (!stringSwitch && !$nc(this->types)->isAssignable(seltype, $nc(this->syms)->intType)) {
												$var($JCDiagnostic$DiagnosticPosition, var$3, pat->pos());
												$nc(this->log)->error(var$3, $($CompilerProperties$Errors::ConstantLabelNotCompatible(pattype, seltype)));
											} else if (!labels->add($(pattype->constValue()))) {
												$init($CompilerProperties$Errors);
												$nc(this->log)->error($(c->pos()), $CompilerProperties$Errors::DuplicateCaseLabel);
											} else {
												$var($JCDiagnostic$DiagnosticPosition, var$4, pat->pos());
												$var($List, var$5, coveredTypes);
												checkCaseLabelDominated(var$4, var$5, $($nc(this->types)->boxedTypeOrType(pattype)));
											}
										}
									}
								} else {
									$init($JCTree$Tag);
									if (pat->hasTag($JCTree$Tag::DEFAULTCASELABEL)) {
										if (hasDefault) {
											$init($CompilerProperties$Errors);
											$nc(this->log)->error($(pat->pos()), $CompilerProperties$Errors::DuplicateDefaultLabel);
										} else if (hasTotalPattern) {
											$init($CompilerProperties$Errors);
											$nc(this->log)->error($(pat->pos()), $CompilerProperties$Errors::TotalPatternAndDefault);
										}
										hasDefault = true;
										$init($MatchBindingsComputer);
										$set(this, matchBindings, $MatchBindingsComputer::EMPTY);
									} else {
										attribExpr(pat, switchEnv);
										$var($TreeInfo$PatternPrimaryType, primary, $TreeInfo::primaryPatternType($cast($JCTree$JCPattern, pat)));
										$var($Type, primaryType, $nc(primary)->type());
										$init($TypeTag);
										if (!$nc(primaryType)->hasTag($TypeTag::TYPEVAR)) {
											$assign(primaryType, $nc(this->chk)->checkClassOrArrayType($(pat->pos()), primaryType));
										}
										checkCastablePattern($(pat->pos()), seltype, primaryType);
										$var($Type, patternType, $nc(this->types)->erasure(primaryType));
										bool var$7 = primary->unconditional();
										bool var$6 = var$7 && !$nc(patternType)->isErroneous();
										bool isTotal = var$6 && $nc(this->types)->isSubtype($($nc(this->types)->erasure(seltype)), patternType);
										if (isTotal) {
											if (hasTotalPattern) {
												$init($CompilerProperties$Errors);
												$nc(this->log)->error($(pat->pos()), $CompilerProperties$Errors::DuplicateTotalPattern);
											} else if (hasDefault) {
												$init($CompilerProperties$Errors);
												$nc(this->log)->error($(pat->pos()), $CompilerProperties$Errors::TotalPatternAndDefault);
											}
											hasTotalPattern = true;
										}
										checkCaseLabelDominated($(pat->pos()), coveredTypes, patternType);
										bool var$8 = primary->unconditional();
										if (var$8 && !patternType->isErroneous()) {
											$assign(coveredTypes, $nc(coveredTypes)->prepend(patternType));
										}
									}
								}
								$assign(currentBindings, $nc(this->matchBindingsComputer)->switchCase(pat, currentBindings, this->matchBindings));
							}
						}
					}
					$var($Env, caseEnv, bindingEnv(switchEnv, c, $nc(currentBindings)->bindingsWhenTrue));
					{
						$var($Throwable, var$9, nullptr);
						try {
							$nc(attribCase)->accept(c, caseEnv);
						} catch ($Throwable& var$10) {
							$assign(var$9, var$10);
						} /*finally*/ {
							$nc($nc(($cast($AttrContext, $nc(caseEnv)->info)))->scope)->leave();
						}
						if (var$9 != nullptr) {
							$throw(var$9);
						}
					}
					addVars(c->stats, $nc(($cast($AttrContext, $nc(switchEnv)->info)))->scope);
					c->completesNormally = $nc(this->flow)->aliveAfter(caseEnv, c, this->make);
					$init($CaseTree$CaseKind);
					$assign(prevBindings, c->caseKind == $CaseTree$CaseKind::STATEMENT && c->completesNormally ? currentBindings : ($MatchBindingsComputer$MatchBindings*)nullptr);
				}
			}
			if (patternSwitch) {
				$nc(this->chk)->checkSwitchCaseStructure(cases);
			}
			$init($JCTree$Tag);
			if ($nc(switchTree)->hasTag($JCTree$Tag::SWITCH)) {
				$nc(($cast($JCTree$JCSwitch, switchTree)))->hasTotalPattern = hasDefault || hasTotalPattern;
				$nc(($cast($JCTree$JCSwitch, switchTree)))->patternSwitch = patternSwitch;
			} else {
				if (switchTree->hasTag($JCTree$Tag::SWITCH_EXPRESSION)) {
					$nc(($cast($JCTree$JCSwitchExpression, switchTree)))->hasTotalPattern = hasDefault || hasTotalPattern;
					$nc(($cast($JCTree$JCSwitchExpression, switchTree)))->patternSwitch = patternSwitch;
				} else {
					$Assert::error($($nc($(switchTree->getTag()))->name()));
				}
			}
		} catch ($Throwable& var$11) {
			$assign(var$0, var$11);
		} /*finally*/ {
			$nc($nc(($cast($AttrContext, $nc(switchEnv)->info)))->scope)->leave();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Attr::addVars($List* stats$renamed, $Scope$WriteableScope* switchScope) {
	$init(Attr);
	$useLocalCurrentObjectStackCache();
	$var($List, stats, stats$renamed);
	for (; $nc(stats)->nonEmpty(); $assign(stats, $nc(stats)->tail)) {
		$var($JCTree, stat, $cast($JCTree, stats->head));
		$init($JCTree$Tag);
		if ($nc(stat)->hasTag($JCTree$Tag::VARDEF)) {
			$nc(switchScope)->enter($nc(($cast($JCTree$JCVariableDecl, stat)))->sym);
		}
	}
}

void Attr::checkCaseLabelDominated($JCDiagnostic$DiagnosticPosition* pos, $List* coveredTypes, $Type* patternType) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(coveredTypes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, existing, $cast($Type, i$->next()));
			{
				if ($nc(this->types)->isSubtype(patternType, existing)) {
					$init($CompilerProperties$Errors);
					$nc(this->log)->error(pos, $CompilerProperties$Errors::PatternDominated);
				}
			}
		}
	}
}

$Symbol* Attr::enumConstant($JCTree* tree, $Type* enumType) {
	$useLocalCurrentObjectStackCache();
	$init($JCTree$Tag);
	if ($nc(tree)->hasTag($JCTree$Tag::IDENT)) {
		$var($JCTree$JCIdent, ident, $cast($JCTree$JCIdent, tree));
		$var($Name, name, ident->name);
		{
			$var($Iterator, i$, $nc($($nc($($nc($nc(enumType)->tsym)->members()))->getSymbolsByName(name)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol, sym, $cast($Symbol, i$->next()));
				{
					$init($Kinds$Kind);
					if ($nc(sym)->kind == $Kinds$Kind::VAR) {
						$var($Symbol, s, $set(ident, sym, sym));
						$nc(($cast($Symbol$VarSymbol, s)))->getConstValue();
						$set(ident, type, $nc(s)->type);
						return (((int64_t)(s->flags_field & (uint64_t)(int64_t)$Flags::ENUM)) == 0) ? ($Symbol*)nullptr : s;
					}
				}
			}
		}
	}
	return nullptr;
}

void Attr::visitSynchronized($JCTree$JCSynchronized* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree)->pos());
	$nc(this->chk)->checkRefType(var$0, $(attribExpr(tree->lock, this->env)));
	$init($Lint$LintCategory);
	bool var$1 = $nc($nc(($cast($AttrContext, $nc(this->env)->info)))->lint)->isEnabled($Lint$LintCategory::SYNCHRONIZATION);
	if (var$1 && isValueBased($nc($nc(tree)->lock)->type)) {
		$init($CompilerProperties$Warnings);
		$nc(this->log)->warning($Lint$LintCategory::SYNCHRONIZATION, $($nc(tree)->pos()), $CompilerProperties$Warnings::AttemptToSynchronizeOnInstanceOfValueBasedClass);
	}
	attribStat($nc(tree)->body, this->env);
	$set(this, result, nullptr);
}

bool Attr::isValueBased($Type* t) {
	return t != nullptr && t->tsym != nullptr && ((int64_t)($nc(t->tsym)->flags() & (uint64_t)(int64_t)0x0020000000000000)) != 0;
}

void Attr::visitTry($JCTree$JCTry* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Env, localEnv, $nc(this->env)->dup(tree, $($nc(($cast($AttrContext, $nc(this->env)->info)))->dup($($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->dup())))));
	{
		$var($Throwable, var$0, nullptr);
		try {
			bool isTryWithResource = $nc($nc(tree)->resources)->nonEmpty();
			$var($Env, tryEnv, isTryWithResource ? $nc(this->env)->dup(tree, $($nc(($cast($AttrContext, $nc(localEnv)->info)))->dup($($nc($nc(($cast($AttrContext, localEnv->info)))->scope)->dup())))) : localEnv);
			{
				$var($Throwable, var$1, nullptr);
				try {
					{
						$var($Iterator, i$, $nc(tree->resources)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($JCTree, resource, $cast($JCTree, i$->next()));
							{
								$var($Check$CheckContext, twrContext, $new($Attr$3, this, $nc(this->resultInfo)->checkContext));
								$init($Kinds$KindSelector);
								$var($Attr$ResultInfo, twrResult, $new($Attr$ResultInfo, this, $Kinds$KindSelector::VAR, $nc(this->syms)->autoCloseableType, twrContext));
								$init($JCTree$Tag);
								if ($nc(resource)->hasTag($JCTree$Tag::VARDEF)) {
									attribStat(resource, tryEnv);
									twrResult->check(resource, resource->type);
									checkAutoCloseable($(resource->pos()), localEnv, resource->type);
									$var($Symbol$VarSymbol, var, $nc(($cast($JCTree$JCVariableDecl, resource)))->sym);
									$init($ElementKind);
									$nc(var)->setData($ElementKind::RESOURCE_VARIABLE);
								} else {
									attribTree(resource, tryEnv, twrResult);
								}
							}
						}
					}
					attribStat(tree->body, tryEnv);
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					if (isTryWithResource) {
						$nc($nc(($cast($AttrContext, $nc(tryEnv)->info)))->scope)->leave();
					}
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
			{
				$var($List, l, tree->catchers);
				for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
					$var($JCTree$JCCatch, c, $cast($JCTree$JCCatch, l->head));
					$var($Env, catchEnv, $nc(localEnv)->dup(c, $($nc(($cast($AttrContext, localEnv->info)))->dup($($nc($nc(($cast($AttrContext, localEnv->info)))->scope)->dup())))));
					{
						$var($Throwable, var$3, nullptr);
						try {
							$var($Type, ctype, attribStat($nc(c)->param, catchEnv));
							if ($TreeInfo::isMultiCatch(c)) {
								$nc($nc($nc(c)->param)->sym)->flags_field |= 16 | (int64_t)0x0000008000000000;
							}
							$init($Kinds$Kind);
							if ($nc($nc($nc(c)->param)->sym)->kind == $Kinds$Kind::VAR) {
								$init($ElementKind);
								$nc($nc(c->param)->sym)->setData($ElementKind::EXCEPTION_PARAMETER);
							}
							$var($JCDiagnostic$DiagnosticPosition, var$4, $nc($nc($nc(c)->param)->vartype)->pos());
							$nc(this->chk)->checkType(var$4, $($nc(this->chk)->checkClassType($($nc($nc(c->param)->vartype)->pos()), ctype)), $nc(this->syms)->throwableType);
							attribStat($nc(c)->body, catchEnv);
						} catch ($Throwable& var$5) {
							$assign(var$3, var$5);
						} /*finally*/ {
							$nc($nc(($cast($AttrContext, $nc(catchEnv)->info)))->scope)->leave();
						}
						if (var$3 != nullptr) {
							$throw(var$3);
						}
					}
				}
			}
			if (tree->finalizer != nullptr) {
				attribStat(tree->finalizer, localEnv);
			}
			$set(this, result, nullptr);
		} catch ($Throwable& var$6) {
			$assign(var$0, var$6);
		} /*finally*/ {
			$nc($nc(($cast($AttrContext, $nc(localEnv)->info)))->scope)->leave();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Attr::checkAutoCloseable($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Type* resource) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = !$nc(resource)->isErroneous();
	bool var$0 = var$1 && $nc(this->types)->asSuper(resource, $nc($nc(this->syms)->autoCloseableType)->tsym) != nullptr;
	if (var$0 && !$nc(this->types)->isSameType(resource, $nc(this->syms)->autoCloseableType)) {
		$var($Symbol, close, $nc(this->syms)->noSymbol);
		$var($Log$DiagnosticHandler, discardHandler, $new($Log$DiscardDiagnosticHandler, this->log));
		{
			$var($Throwable, var$2, nullptr);
			try {
				$var($JCDiagnostic$DiagnosticPosition, var$3, pos);
				$var($Env, var$4, env);
				$var($Type, var$5, $nc(this->types)->skipTypeVars(resource, false));
				$var($Name, var$6, $nc(this->names)->close);
				$var($List, var$7, $List::nil());
				$assign(close, $nc(this->rs)->resolveQualifiedMethod(var$3, var$4, var$5, var$6, var$7, $($List::nil())));
			} catch ($Throwable& var$8) {
				$assign(var$2, var$8);
			} /*finally*/ {
				$nc(this->log)->popDiagnosticHandler(discardHandler);
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
		$init($Kinds$Kind);
		bool var$10 = $nc(close)->kind == $Kinds$Kind::MTH && close->overrides($nc(this->syms)->autoCloseableClose, resource->tsym, this->types, true);
		bool var$9 = var$10 && $nc(this->chk)->isHandled($nc(this->syms)->interruptedExceptionType, $($nc($($nc(this->types)->memberType(resource, close)))->getThrownTypes()));
		$init($Lint$LintCategory);
		if (var$9 && $nc($nc(($cast($AttrContext, $nc(env)->info)))->lint)->isEnabled($Lint$LintCategory::TRY)) {
			$nc(this->log)->warning($Lint$LintCategory::TRY, pos, $($CompilerProperties$Warnings::TryResourceThrowsInterruptedExc(resource)));
		}
	}
}

void Attr::visitConditional($JCTree$JCConditional* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, condtype, attribExpr($nc(tree)->cond, this->env, $nc(this->syms)->booleanType));
	$var($MatchBindingsComputer$MatchBindings, condBindings, this->matchBindings);
	bool var$1 = !this->allowPoly;
	if (!var$1) {
		$init($TypeTag);
		bool var$3 = $nc($(pt()))->hasTag($TypeTag::NONE);
		bool var$2 = var$3 && !$equals(pt(), $Type::recoveryType);
		$init($Infer);
		var$1 = var$2 && pt() != $Infer::anyPoly;
	}
	bool var$0 = var$1;
	$init($JCTree$JCPolyExpression$PolyKind);
	$set($nc(tree), polyKind, (var$0 || isBooleanOrNumeric(this->env, tree)) ? $JCTree$JCPolyExpression$PolyKind::STANDALONE : $JCTree$JCPolyExpression$PolyKind::POLY);
	$init($TypeTag);
	if (tree->polyKind == $JCTree$JCPolyExpression$PolyKind::POLY && $nc($nc(this->resultInfo)->pt)->hasTag($TypeTag::VOID)) {
		$init($CompilerProperties$Fragments);
		$nc($nc(this->resultInfo)->checkContext)->report(tree, $($nc(this->diags)->fragment($CompilerProperties$Fragments::ConditionalTargetCantBeVoid)));
		$set(this, result, ($set(tree, type, $nc(this->types)->createErrorType($nc(this->resultInfo)->pt))));
		return;
	}
	$var($Attr$ResultInfo, condInfo, tree->polyKind == $JCTree$JCPolyExpression$PolyKind::STANDALONE ? this->unknownExprInfo : $nc(this->resultInfo)->dup($(conditionalContext($nc(this->resultInfo)->checkContext))));
	$var($Type, truetype, nullptr);
	$var($Env, trueEnv, bindingEnv(this->env, $nc(condBindings)->bindingsWhenTrue));
	{
		$var($Throwable, var$4, nullptr);
		try {
			$assign(truetype, attribTree(tree->truepart, trueEnv, condInfo));
		} catch ($Throwable& var$5) {
			$assign(var$4, var$5);
		} /*finally*/ {
			$nc($nc(($cast($AttrContext, $nc(trueEnv)->info)))->scope)->leave();
		}
		if (var$4 != nullptr) {
			$throw(var$4);
		}
	}
	$var($MatchBindingsComputer$MatchBindings, trueBindings, this->matchBindings);
	$var($Type, falsetype, nullptr);
	$var($Env, falseEnv, bindingEnv(this->env, $nc(condBindings)->bindingsWhenFalse));
	{
		$var($Throwable, var$6, nullptr);
		try {
			$assign(falsetype, attribTree(tree->falsepart, falseEnv, condInfo));
		} catch ($Throwable& var$7) {
			$assign(var$6, var$7);
		} /*finally*/ {
			$nc($nc(($cast($AttrContext, $nc(falseEnv)->info)))->scope)->leave();
		}
		if (var$6 != nullptr) {
			$throw(var$6);
		}
	}
	$var($MatchBindingsComputer$MatchBindings, falseBindings, this->matchBindings);
	$var($Type, var$8, nullptr);
	if (tree->polyKind == $JCTree$JCPolyExpression$PolyKind::STANDALONE) {
		$var($Object, var$10, $of($nc(tree->truepart)->pos()));
		$var($List, var$9, $List::of(var$10, $($nc(tree->falsepart)->pos())));
		$assign(var$8, condType(var$9, $($List::of(truetype, falsetype))));
	} else {
		$assign(var$8, pt());
	}
	$var($Type, owntype, var$8);
	bool var$13 = $nc(condtype)->constValue() != nullptr;
	bool var$12 = var$13 && $nc(truetype)->constValue() != nullptr;
	bool var$11 = var$12 && $nc(falsetype)->constValue() != nullptr;
	if (var$11 && !$nc(owntype)->hasTag($TypeTag::NONE)) {
		$assign(owntype, $nc(this->cfolder)->coerce(condtype->isTrue() ? truetype : falsetype, owntype));
	}
	$init($Kinds$KindSelector);
	$set(this, result, check(tree, owntype, $Kinds$KindSelector::VAL, this->resultInfo));
	$set(this, matchBindings, $nc(this->matchBindingsComputer)->conditional(tree, condBindings, trueBindings, falseBindings));
}

bool Attr::isBooleanOrNumeric($Env* env, $JCTree$JCExpression* tree) {
	$useLocalCurrentObjectStackCache();
	$init($Attr$13);
	{
		$var($JCTree$JCConditional, condTree, nullptr)
		$var($JCTree$JCMethodInvocation, speculativeMethodTree, nullptr)
		$var($Symbol, msym, nullptr)
		$var($Type, receiverType, nullptr)
		$var($Type, owntype, nullptr)
		$var($JCTree$JCExpression, className, nullptr)
		$var($JCTree$JCExpression, speculativeNewClassTree, nullptr)
		$var($Type, speculativeType, nullptr)
		switch ($nc($Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
		case 1:
			{
				$init($TypeTag);
				return $nc($nc(($cast($JCTree$JCLiteral, tree)))->typetag)->isSubRangeOf($TypeTag::DOUBLE) || $nc(($cast($JCTree$JCLiteral, tree)))->typetag == $TypeTag::BOOLEAN || $nc(($cast($JCTree$JCLiteral, tree)))->typetag == $TypeTag::BOT;
			}
		case 2:
			{}
		case 3:
			{
				return false;
			}
		case 4:
			{
				return isBooleanOrNumeric(env, $nc(($cast($JCTree$JCParens, tree)))->expr);
			}
		case 5:
			{
				$assign(condTree, $cast($JCTree$JCConditional, tree));
				bool var$0 = isBooleanOrNumeric(env, $nc(condTree)->truepart);
				return var$0 && isBooleanOrNumeric(env, $nc(condTree)->falsepart);
			}
		case 6:
			{
				$assign(speculativeMethodTree, $cast($JCTree$JCMethodInvocation, $nc(this->deferredAttr)->attribSpeculative(tree, env, this->unknownExprInfo, $($nc(this->argumentAttr)->withLocalCacheContext()))));
				$assign(msym, $TreeInfo::symbol($nc(speculativeMethodTree)->meth));
				$init($JCTree$Tag);
				$assign(receiverType, $nc($nc(speculativeMethodTree)->meth)->hasTag($JCTree$Tag::IDENT) ? $nc($nc(env)->enclClass)->type : $nc($nc(($cast($JCTree$JCFieldAccess, $nc(speculativeMethodTree)->meth)))->selected)->type);
				$assign(owntype, $nc($($nc(this->types)->memberType(receiverType, msym)))->getReturnType());
				return primitiveOrBoxed(owntype);
			}
		case 7:
			{
				$assign(className, $cast($JCTree$JCExpression, $nc(this->removeClassParams)->translate(static_cast<$JCTree*>($nc(($cast($JCTree$JCNewClass, tree)))->clazz))));
				$assign(speculativeNewClassTree, $cast($JCTree$JCExpression, $nc(this->deferredAttr)->attribSpeculative(className, env, this->unknownTypeInfo, $($nc(this->argumentAttr)->withLocalCacheContext()))));
				return primitiveOrBoxed($nc(speculativeNewClassTree)->type);
			}
		default:
			{
				$assign(speculativeType, $nc($($nc(this->deferredAttr)->attribSpeculative(tree, env, this->unknownExprInfo, $($nc(this->argumentAttr)->withLocalCacheContext()))))->type);
				return primitiveOrBoxed(speculativeType);
			}
		}
	}
}

bool Attr::primitiveOrBoxed($Type* t) {
	$init($TypeTag);
	bool var$1 = !$nc(t)->hasTag($TypeTag::TYPEVAR);
	bool var$0 = var$1 && !t->isErroneous();
	return (var$0 && $nc($($nc(this->types)->unboxedTypeOrType(t)))->isPrimitive());
}

$Check$CheckContext* Attr::conditionalContext($Check$CheckContext* checkContext) {
	return $new($Attr$5, this, checkContext);
}

$Type* Attr::condType($List* positions, $List* condTypes$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, condTypes, condTypes$renamed);
	if ($nc(condTypes)->isEmpty()) {
		return $nc(this->syms)->objectType;
	}
	$var($Type, first, $cast($Type, $nc(condTypes)->head));
	if ($nc($($nc(condTypes->tail)->stream()))->allMatch(static_cast<$Predicate*>($$new(Attr$$Lambda$lambda$condType$10$13, this, first)))) {
		return $nc(first)->baseType();
	}
	$var($List, unboxedTypes, $cast($List, $nc($($nc($(condTypes->stream()))->map(static_cast<$Function*>($$new(Attr$$Lambda$lambda$condType$11$14, this)))))->collect($($List::collector()))));
	if ($nc($($nc(unboxedTypes)->stream()))->allMatch(static_cast<$Predicate*>($$new(Attr$$Lambda$lambda$condType$12$15)))) {
		{
			$var($Iterator, i$, unboxedTypes->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, type, $cast($Type, i$->next()));
				{
					$init($TypeTag);
					if (!$nc($($nc(type)->getTag()))->isStrictSubRangeOf($TypeTag::INT)) {
						continue;
					}
					if ($nc($($nc($(unboxedTypes->stream()))->filter(static_cast<$Predicate*>($$new(Attr$$Lambda$lambda$condType$13$16, type)))))->allMatch(static_cast<$Predicate*>($$new(Attr$$Lambda$lambda$condType$14$17, this, type)))) {
						return $nc(type)->baseType();
					}
				}
			}
		}
		{
			$var($TypeTagArray, arr$, Attr::primitiveTags);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$TypeTag* tag = arr$->get(i$);
				{
					$var($Type, candidate, $nc($nc(this->syms)->typeOfTag)->get($nc(tag)->ordinal()));
					if ($nc($(unboxedTypes->stream()))->allMatch(static_cast<$Predicate*>($$new(Attr$$Lambda$lambda$condType$15$18, this, candidate)))) {
						return candidate;
					}
				}
			}
		}
	}
	$assign(condTypes, $cast($List, $nc($($nc($(condTypes->stream()))->map(static_cast<$Function*>($$new(Attr$$Lambda$lambda$condType$16$19, this)))))->collect($($List::collector()))));
	{
		$var($Iterator, i$, condTypes->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, type, $cast($Type, i$->next()));
			{
				if ($nc($($nc($(condTypes->stream()))->filter(static_cast<$Predicate*>($$new(Attr$$Lambda$lambda$condType$13$16, type)))))->allMatch(static_cast<$Predicate*>($$new(Attr$$Lambda$lambda$condType$18$20, this, type)))) {
					return $nc(type)->baseType();
				}
			}
		}
	}
	$var($Iterator, posIt, $nc(positions)->iterator());
	$assign(condTypes, $cast($List, $nc($($nc($(condTypes->stream()))->map(static_cast<$Function*>($$new(Attr$$Lambda$lambda$condType$19$21, this, posIt)))))->collect($($List::collector()))));
	return $nc(this->types)->lub($cast($List, $($nc($($nc($($nc($(condTypes->stream()))->map(static_cast<$Function*>($$new(Attr$$Lambda$lambda$condType$20$22)))))->filter(static_cast<$Predicate*>($$new(Attr$$Lambda$lambda$condType$21$23)))))->collect($($List::collector())))));
}

$Env* Attr::bindingEnv($Env* env, $List* bindings) {
	return bindingEnv(env, $nc(env)->tree, bindings);
}

$Env* Attr::bindingEnv($Env* env, $JCTree* newTree, $List* bindings) {
	$useLocalCurrentObjectStackCache();
	$var($Env, env1, $nc(env)->dup(newTree, $($nc(($cast($AttrContext, env->info)))->dup($($nc($nc(($cast($AttrContext, env->info)))->scope)->dup())))));
	$nc(bindings)->forEach(static_cast<$Consumer*>($$new(Attr$$Lambda$enter$7, static_cast<$Scope$WriteableScope*>($nc($nc(($cast($AttrContext, $nc(env1)->info)))->scope)))));
	return env1;
}

void Attr::visitIf($JCTree$JCIf* tree) {
	$useLocalCurrentObjectStackCache();
	attribExpr($nc(tree)->cond, this->env, $nc(this->syms)->booleanType);
	$var($MatchBindingsComputer$MatchBindings, condBindings, this->matchBindings);
	$var($Env, thenEnv, bindingEnv(this->env, $nc(condBindings)->bindingsWhenTrue));
	{
		$var($Throwable, var$0, nullptr);
		try {
			attribStat($nc(tree)->thenpart, thenEnv);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($nc(($cast($AttrContext, $nc(thenEnv)->info)))->scope)->leave();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	preFlow(static_cast<$JCTree*>($nc(tree)->thenpart));
	bool aliveAfterThen = $nc(this->flow)->aliveAfter(this->env, $nc(tree)->thenpart, this->make);
	bool aliveAfterElse = false;
	if ($nc(tree)->elsepart != nullptr) {
		$var($Env, elseEnv, bindingEnv(this->env, $nc(condBindings)->bindingsWhenFalse));
		{
			$var($Throwable, var$2, nullptr);
			try {
				attribStat(tree->elsepart, elseEnv);
			} catch ($Throwable& var$3) {
				$assign(var$2, var$3);
			} /*finally*/ {
				$nc($nc(($cast($AttrContext, $nc(elseEnv)->info)))->scope)->leave();
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
		preFlow(static_cast<$JCTree*>(tree->elsepart));
		aliveAfterElse = $nc(this->flow)->aliveAfter(this->env, tree->elsepart, this->make);
	} else {
		aliveAfterElse = true;
	}
	$nc(this->chk)->checkEmptyIf(tree);
	$var($List, afterIfBindings, $List::nil());
	if (aliveAfterThen && !aliveAfterElse) {
		$assign(afterIfBindings, $nc(condBindings)->bindingsWhenTrue);
	} else if (aliveAfterElse && !aliveAfterThen) {
		$assign(afterIfBindings, $nc(condBindings)->bindingsWhenFalse);
	}
	$nc(afterIfBindings)->forEach(static_cast<$Consumer*>($$new(Attr$$Lambda$enter$7, static_cast<$Scope$WriteableScope*>($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)))));
	afterIfBindings->forEach(static_cast<$Consumer*>($$new(Attr$$Lambda$preserveBinding$8)));
	$set(this, result, nullptr);
}

void Attr::preFlow($JCTree* tree) {
	$nc(this->attrRecover)->doRecovery();
	$$new($Attr$6, this)->scan(tree);
}

void Attr::visitExec($JCTree$JCExpressionStatement* tree) {
	$var($Env, localEnv, $nc(this->env)->dup(tree));
	attribExpr($nc(tree)->expr, localEnv);
	$set(this, result, nullptr);
}

void Attr::visitBreak($JCTree$JCBreak* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic$DiagnosticPosition, var$0, tree->pos());
	$set($nc(tree), target, findJumpTarget(var$0, $(tree->getTag()), tree->label, this->env));
	$set(this, result, nullptr);
}

void Attr::visitYield($JCTree$JCYield* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc(($cast($AttrContext, $nc(this->env)->info)))->yieldResult != nullptr) {
		attribTree($nc(tree)->value, this->env, $nc(($cast($AttrContext, $nc(this->env)->info)))->yieldResult);
		$var($JCDiagnostic$DiagnosticPosition, var$0, tree->pos());
		$set($nc(tree), target, findJumpTarget(var$0, $(tree->getTag()), $nc(this->names)->empty, this->env));
	} else {
		$var($JCDiagnostic$DiagnosticPosition, var$1, $nc(tree)->pos());
		$init($JCTree$Tag);
		$init($CompilerProperties$Errors);
		$nc(this->log)->error(var$1, $nc(tree->value)->hasTag($JCTree$Tag::PARENS) ? $CompilerProperties$Errors::NoSwitchExpressionQualify : $CompilerProperties$Errors::NoSwitchExpression);
		attribTree($nc(tree)->value, this->env, this->unknownExprInfo);
	}
	$set(this, result, nullptr);
}

void Attr::visitContinue($JCTree$JCContinue* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic$DiagnosticPosition, var$0, tree->pos());
	$set($nc(tree), target, findJumpTarget(var$0, $(tree->getTag()), tree->label, this->env));
	$set(this, result, nullptr);
}

$JCTree* Attr::findJumpTarget($JCDiagnostic$DiagnosticPosition* pos, $JCTree$Tag* tag, $Name* label, $Env* env) {
	$var($Pair, jumpTarget, findJumpTargetNoError(tag, label, env));
	if ($nc(jumpTarget)->snd != nullptr) {
		$nc(this->log)->error(pos, $cast($JCDiagnostic$Error, jumpTarget->snd));
	}
	return $cast($JCTree, $nc(jumpTarget)->fst);
}

$Pair* Attr::findJumpTargetNoError($JCTree$Tag* tag, $Name* label, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Env, env1, env);
	$var($JCDiagnostic$Error, pendingError, nullptr);
	bool LOOP$break = false;
	while (env1 != nullptr) {
		$init($Attr$13);
		{
			$var($JCTree$JCLabeledStatement, labelled, nullptr)
			switch ($nc($Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(env1->tree)->getTag())))->ordinal())) {
			case 8:
				{
					$assign(labelled, $cast($JCTree$JCLabeledStatement, env1->tree));
					if (label == $nc(labelled)->label) {
						$init($JCTree$Tag);
						if (tag == $JCTree$Tag::CONTINUE) {
							bool var$2 = !$nc(labelled->body)->hasTag($JCTree$Tag::DOLOOP);
							bool var$1 = var$2 && !$nc(labelled->body)->hasTag($JCTree$Tag::WHILELOOP);
							bool var$0 = var$1 && !$nc(labelled->body)->hasTag($JCTree$Tag::FORLOOP);
							if (var$0 && !$nc(labelled->body)->hasTag($JCTree$Tag::FOREACHLOOP)) {
								$assign(pendingError, $CompilerProperties$Errors::NotLoopLabel(label));
							}
							return $Pair::of($($TreeInfo::referencedStatement(labelled)), pendingError);
						} else {
							return $Pair::of(labelled, pendingError);
						}
					}
					break;
				}
			case 9:
				{}
			case 10:
				{}
			case 11:
				{}
			case 12:
				{
					if (label == nullptr) {
						return $Pair::of(env1->tree, pendingError);
					}
					break;
				}
			case 13:
				{
					$init($JCTree$Tag);
					if (label == nullptr && tag == $JCTree$Tag::BREAK) {
						return $Pair::of(env1->tree, nullptr);
					}
					break;
				}
			case 14:
				{
					$init($JCTree$Tag);
					if (tag == $JCTree$Tag::YIELD) {
						return $Pair::of(env1->tree, nullptr);
					} else {
						if (tag == $JCTree$Tag::BREAK) {
							$init($CompilerProperties$Errors);
							$assign(pendingError, $CompilerProperties$Errors::BreakOutsideSwitchExpression);
						} else {
							$init($CompilerProperties$Errors);
							$assign(pendingError, $CompilerProperties$Errors::ContinueOutsideSwitchExpression);
						}
					}
					break;
				}
			case 2:
				{}
			case 15:
				{}
			case 16:
				{
					LOOP$break = true;
					break;
				}
			default:
				{}
			}

			if (LOOP$break) {
				break;
			}
		}
		$assign(env1, env1->next);
	}
	if (label != nullptr) {
		return $Pair::of(nullptr, $($CompilerProperties$Errors::UndefLabel(label)));
	} else if (pendingError != nullptr) {
		return $Pair::of(nullptr, pendingError);
	} else {
		$init($JCTree$Tag);
		if (tag == $JCTree$Tag::CONTINUE) {
			$init($CompilerProperties$Errors);
			return $Pair::of(nullptr, $CompilerProperties$Errors::ContOutsideLoop);
		} else {
			$init($CompilerProperties$Errors);
			return $Pair::of(nullptr, $CompilerProperties$Errors::BreakOutsideSwitchLoop);
		}
	}
}

void Attr::visitReturn($JCTree$JCReturn* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc(($cast($AttrContext, $nc(this->env)->info)))->returnResult == nullptr) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($($nc(tree)->pos()), $CompilerProperties$Errors::RetOutsideMeth);
	} else if ($nc(($cast($AttrContext, $nc(this->env)->info)))->yieldResult != nullptr) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($($nc(tree)->pos()), $CompilerProperties$Errors::ReturnOutsideSwitchExpression);
	} else if (!$nc(($cast($AttrContext, $nc(this->env)->info)))->isLambda && !$nc(($cast($AttrContext, $nc(this->env)->info)))->isNewClass && $nc(this->env)->enclMethod != nullptr && $TreeInfo::isCompactConstructor($nc(this->env)->enclMethod)) {
		$init($CompilerProperties$Fragments);
		$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>($nc(this->env)->enclMethod), $($CompilerProperties$Errors::InvalidCanonicalConstructorInRecord($CompilerProperties$Fragments::Compact, $nc($nc($nc(this->env)->enclMethod)->sym)->name, $CompilerProperties$Fragments::CanonicalCantHaveReturnStatement)));
	} else if ($nc(tree)->expr != nullptr) {
		$init($TypeTag);
		if ($nc($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->returnResult)->pt)->hasTag($TypeTag::VOID)) {
			$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree->expr)->pos());
			$init($CompilerProperties$Fragments);
			$nc($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->returnResult)->checkContext)->report(var$0, $($nc(this->diags)->fragment($CompilerProperties$Fragments::UnexpectedRetVal)));
		}
		attribTree(tree->expr, this->env, $nc(($cast($AttrContext, $nc(this->env)->info)))->returnResult);
	} else {
		$init($TypeTag);
		bool var$2 = !$nc($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->returnResult)->pt)->hasTag($TypeTag::VOID);
		if (var$2 && !$nc($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->returnResult)->pt)->hasTag($TypeTag::NONE)) {
			$var($JCDiagnostic$DiagnosticPosition, var$3, tree->pos());
			$nc($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->returnResult)->checkContext)->report(var$3, $($nc(this->diags)->fragment($($CompilerProperties$Fragments::MissingRetVal($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->returnResult)->pt)))));
		}
	}
	$set(this, result, nullptr);
}

void Attr::visitThrow($JCTree$JCThrow* tree) {
	$init($Type);
	$var($Type, owntype, attribExpr($nc(tree)->expr, this->env, this->allowPoly ? static_cast<$Type*>($Type::noType) : $nc(this->syms)->throwableType));
	if (this->allowPoly) {
		$nc(this->chk)->checkType(tree, owntype, $nc(this->syms)->throwableType);
	}
	$set(this, result, nullptr);
}

void Attr::visitAssert($JCTree$JCAssert* tree) {
	$useLocalCurrentObjectStackCache();
	attribExpr($nc(tree)->cond, this->env, $nc(this->syms)->booleanType);
	if ($nc(tree)->detail != nullptr) {
		$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree->detail)->pos());
		$nc(this->chk)->checkNonVoid(var$0, $(attribExpr(tree->detail, this->env)));
	}
	$set(this, result, nullptr);
}

void Attr::visitApply($JCTree$JCMethodInvocation* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Env, localEnv, $nc(this->env)->dup(tree, $($nc(($cast($AttrContext, $nc(this->env)->info)))->dup())));
	$var($List, argtypes, nullptr);
	$var($List, typeargtypes, nullptr);
	$var($Name, methName, $TreeInfo::name($nc(tree)->meth));
	bool isConstructorCall = methName == $nc(this->names)->_this || methName == $nc(this->names)->_super;
	$var($ListBuffer, argtypesBuf, $new($ListBuffer));
	if (isConstructorCall) {
		checkFirstConstructorStat(tree, $nc(this->env)->enclMethod, true);
		$nc(($cast($AttrContext, $nc(localEnv)->info)))->isSelfCall = true;
		$init($Kinds$KindSelector);
		$var($Kinds$KindSelector, kind, attribArgs($Kinds$KindSelector::MTH, $nc(tree)->args, localEnv, argtypesBuf));
		$assign(argtypes, argtypesBuf->toList());
		$assign(typeargtypes, attribTypes($nc(tree)->typeargs, localEnv));
		$var($Type, site, $nc($nc($nc(this->env)->enclClass)->sym)->type);
		if (methName == $nc(this->names)->_super) {
			if (site == $nc(this->syms)->objectType) {
				$var($JCDiagnostic$DiagnosticPosition, var$0, $nc($nc(tree)->meth)->pos());
				$nc(this->log)->error(var$0, $($CompilerProperties$Errors::NoSuperclass(site)));
				$assign(site, $nc(this->types)->createErrorType($nc(this->syms)->objectType));
			} else {
				$assign(site, $nc(this->types)->supertype(site));
			}
		}
		$init($TypeTag);
		if ($nc(site)->hasTag($TypeTag::CLASS)) {
			$var($Type, encl, site->getEnclosingType());
			while (encl != nullptr && encl->hasTag($TypeTag::TYPEVAR)) {
				$assign(encl, encl->getUpperBound());
			}
			if ($nc(encl)->hasTag($TypeTag::CLASS)) {
				$init($JCTree$Tag);
				if ($nc($nc(tree)->meth)->hasTag($JCTree$Tag::SELECT)) {
					$var($JCTree, qualifier, $nc(($cast($JCTree$JCFieldAccess, tree->meth)))->selected);
					$var($JCDiagnostic$DiagnosticPosition, var$1, $nc(qualifier)->pos());
					$nc(this->chk)->checkRefType(var$1, $(attribExpr(qualifier, localEnv, encl)));
				} else if (methName == $nc(this->names)->_super) {
					$nc(this->rs)->resolveImplicitThis($($nc(tree->meth)->pos()), localEnv, site, true);
				}
			} else {
				$init($JCTree$Tag);
				if ($nc($nc(tree)->meth)->hasTag($JCTree$Tag::SELECT)) {
					$var($JCDiagnostic$DiagnosticPosition, var$2, $nc(tree->meth)->pos());
					$nc(this->log)->error(var$2, $($CompilerProperties$Errors::IllegalQualNotIcls(site->tsym)));
					attribExpr($nc(($cast($JCTree$JCFieldAccess, tree->meth)))->selected, localEnv, site);
				}
			}
			if (site->tsym == $nc(this->syms)->enumSym) {
				$assign(argtypes, $nc($($nc(argtypes)->prepend($nc(this->syms)->intType)))->prepend($nc(this->syms)->stringType));
			}
			bool selectSuperPrev = $nc(($cast($AttrContext, localEnv->info)))->selectSuper;
			$nc(($cast($AttrContext, localEnv->info)))->selectSuper = true;
			$set($nc($cast($AttrContext, localEnv->info)), pendingResolutionPhase, nullptr);
			$var($Symbol, sym, $nc(this->rs)->resolveConstructor($($nc($nc(tree)->meth)->pos()), localEnv, site, argtypes, typeargtypes));
			$nc(($cast($AttrContext, localEnv->info)))->selectSuper = selectSuperPrev;
			$TreeInfo::setSymbol($nc(tree)->meth, sym);
			$var($Type, mpt, newMethodTemplate($nc(this->resultInfo)->pt, argtypes, typeargtypes));
			checkId($nc(tree)->meth, site, sym, localEnv, $$new($Attr$ResultInfo, this, kind, mpt));
		} else {
			bool var$4 = site->hasTag($TypeTag::ERROR);
			$init($JCTree$Tag);
			if (var$4 && $nc($nc(tree)->meth)->hasTag($JCTree$Tag::SELECT)) {
				attribExpr($nc(($cast($JCTree$JCFieldAccess, tree->meth)))->selected, localEnv, site);
			}
		}
		$set(this, result, ($set($nc(tree), type, $nc(this->syms)->voidType)));
	} else {
		$init($Kinds$KindSelector);
		$var($Kinds$KindSelector, kind, attribArgs($Kinds$KindSelector::VAL, $nc(tree)->args, localEnv, argtypesBuf));
		$assign(argtypes, argtypesBuf->toList());
		$assign(typeargtypes, attribAnyTypes($nc(tree)->typeargs, localEnv));
		$var($Type, mpt, newMethodTemplate($nc(this->resultInfo)->pt, argtypes, typeargtypes));
		$set($nc($cast($AttrContext, $nc(localEnv)->info)), pendingResolutionPhase, nullptr);
		$var($Type, mtype, attribTree($nc(tree)->meth, localEnv, $$new($Attr$ResultInfo, this, kind, mpt, $nc(this->resultInfo)->checkContext)));
		$var($Type, restype, $nc(mtype)->getReturnType());
		$init($TypeTag);
		if ($nc(restype)->hasTag($TypeTag::WILDCARD)) {
			$throwNew($AssertionError, $of(mtype));
		}
		$init($JCTree$Tag);
		$var($Type, qualifier, ($nc($nc(tree)->meth)->hasTag($JCTree$Tag::SELECT)) ? $nc($nc(($cast($JCTree$JCFieldAccess, $nc(tree)->meth)))->selected)->type : $nc($nc($nc(this->env)->enclClass)->sym)->type);
		$var($Symbol, msym, $TreeInfo::symbol(tree->meth));
		$assign(restype, adjustMethodReturnType(msym, qualifier, methName, argtypes, restype));
		$nc(this->chk)->checkRefTypes(tree->typeargs, typeargtypes);
		$var($Type, capturedRes, $nc($($nc($nc(this->resultInfo)->checkContext)->inferenceContext()))->cachedCapture(tree, restype, true));
		$set(this, result, check(tree, capturedRes, $Kinds$KindSelector::VAL, this->resultInfo));
	}
	$nc(this->chk)->validate($nc(tree)->typeargs, localEnv);
}

$Type* Attr::adjustMethodReturnType($Symbol* msym, $Type* qualifierType, $Name* methodName, $List* argtypes, $Type* restype) {
	$useLocalCurrentObjectStackCache();
	if (msym != nullptr && $equals(msym->owner, $nc($nc(this->syms)->objectType)->tsym) && methodName == $nc(this->names)->getClass$ && $nc(argtypes)->isEmpty()) {
		$var($Type, var$0, $nc(restype)->getEnclosingType());
		$init($BoundKind);
		$var($List, var$1, $List::of($$new($Type$WildcardType, $($nc(this->types)->erasure(qualifierType)), $BoundKind::EXTENDS, $nc(this->syms)->boundClass)));
		$var($Symbol$TypeSymbol, var$2, restype->tsym);
		return $new($Type$ClassType, var$0, var$1, var$2, $(restype->getMetadata()));
	} else if (msym != nullptr && $equals(msym->owner, $nc(this->syms)->arrayClass) && methodName == $nc(this->names)->clone$ && $nc(this->types)->isArray(qualifierType)) {
		return qualifierType;
	} else {
		return restype;
	}
}

bool Attr::checkFirstConstructorStat($JCTree$JCMethodInvocation* tree, $JCTree$JCMethodDecl* enclMethod, bool error) {
	$useLocalCurrentObjectStackCache();
	if (enclMethod != nullptr && enclMethod->name == $nc(this->names)->init) {
		$var($JCTree$JCBlock, body, enclMethod->body);
		$init($JCTree$Tag);
		if ($nc(($cast($JCTree$JCStatement, $nc($nc(body)->stats)->head)))->hasTag($JCTree$Tag::EXEC) && $equals($nc(($cast($JCTree$JCExpressionStatement, $nc(body->stats)->head)))->expr, tree)) {
			return true;
		}
	}
	if (error) {
		$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree)->pos());
		$nc(this->log)->error(var$0, $($CompilerProperties$Errors::CallMustBeFirstStmtInCtor($($TreeInfo::name(tree->meth)))));
	}
	return false;
}

$Type* Attr::newMethodTemplate($Type* restype, $List* argtypes, $List* typeargtypes) {
	$useLocalCurrentObjectStackCache();
	$var($Type$MethodType, mt, $new($Type$MethodType, argtypes, restype, $($List::nil()), $nc(this->syms)->methodClass));
	return (typeargtypes == nullptr) ? static_cast<$Type*>(mt) : static_cast<$Type*>($new($Type$ForAll, typeargtypes, mt));
}

void Attr::visitNewClass($JCTree$JCNewClass* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, owntype, $nc(this->types)->createErrorType($nc(tree)->type));
	$var($Env, localEnv, $nc(this->env)->dup(tree, $($nc(($cast($AttrContext, $nc(this->env)->info)))->dup())));
	$var($JCTree$JCClassDecl, cdef, $nc(tree)->def);
	$var($JCTree$JCExpression, clazz, tree->clazz);
	$var($JCTree$JCExpression, clazzid, nullptr);
	$var($JCTree$JCAnnotatedType, annoclazzid, nullptr);
	$assign(annoclazzid, nullptr);
	$init($JCTree$Tag);
	if ($nc(clazz)->hasTag($JCTree$Tag::TYPEAPPLY)) {
		$assign(clazzid, $nc(($cast($JCTree$JCTypeApply, clazz)))->clazz);
		if ($nc(clazzid)->hasTag($JCTree$Tag::ANNOTATED_TYPE)) {
			$assign(annoclazzid, $cast($JCTree$JCAnnotatedType, clazzid));
			$assign(clazzid, annoclazzid->underlyingType);
		}
	} else {
		if (clazz->hasTag($JCTree$Tag::ANNOTATED_TYPE)) {
			$assign(annoclazzid, $cast($JCTree$JCAnnotatedType, clazz));
			$assign(clazzid, annoclazzid->underlyingType);
		} else {
			$assign(clazzid, clazz);
		}
	}
	$var($JCTree$JCExpression, clazzid1, clazzid);
	if (tree->encl != nullptr) {
		$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree->encl)->pos());
		$var($Type, encltype, $nc(this->chk)->checkRefType(var$0, $(attribExpr(tree->encl, this->env))));
		$assign(clazzid1, $nc($($nc(this->make)->at($nc(clazz)->pos$)))->Select($($nc(this->make)->Type(encltype)), $nc(($cast($JCTree$JCIdent, clazzid)))->name));
		$var($EndPosTable, endPosTable, $nc($nc(this->env)->toplevel)->endPositions);
		$nc(endPosTable)->storeEnd(clazzid1, $nc(clazzid)->getEndPosition(endPosTable));
		if ($nc(clazz)->hasTag($JCTree$Tag::ANNOTATED_TYPE)) {
			$var($JCTree$JCAnnotatedType, annoType, $cast($JCTree$JCAnnotatedType, clazz));
			$var($List, annos, annoType->annotations);
			if ($nc(annoType->underlyingType)->hasTag($JCTree$Tag::TYPEAPPLY)) {
				$assign(clazzid1, $nc($($nc(this->make)->at(tree->pos$)))->TypeApply(clazzid1, $nc(($cast($JCTree$JCTypeApply, clazz)))->arguments));
			}
			$assign(clazzid1, $nc($($nc(this->make)->at(tree->pos$)))->AnnotatedType(annos, clazzid1));
		} else {
			if (clazz->hasTag($JCTree$Tag::TYPEAPPLY)) {
				$assign(clazzid1, $nc($($nc(this->make)->at(tree->pos$)))->TypeApply(clazzid1, $nc(($cast($JCTree$JCTypeApply, clazz)))->arguments));
			}
		}
		$assign(clazz, clazzid1);
	}
	$var($Type, clazztype, nullptr);
	{
		$var($Throwable, var$1, nullptr);
		try {
			$nc(($cast($AttrContext, $nc(this->env)->info)))->isNewClass = true;
			$assign(clazztype, $TreeInfo::isEnumInit($nc(this->env)->tree) ? attribIdentAsEnumType(this->env, $cast($JCTree$JCIdent, clazz)) : attribType(static_cast<$JCTree*>(clazz), this->env));
		} catch ($Throwable& var$2) {
			$assign(var$1, var$2);
		} /*finally*/ {
			$nc(($cast($AttrContext, $nc(this->env)->info)))->isNewClass = false;
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
	$assign(clazztype, $nc(this->chk)->checkDiamond(tree, clazztype));
	$nc(this->chk)->validate(static_cast<$JCTree*>(clazz), localEnv);
	if (tree->encl != nullptr) {
		$set($nc(tree->clazz), type, clazztype);
		$TreeInfo::setSymbol(clazzid, $($TreeInfo::symbol(clazzid1)));
		$set($nc(clazzid), type, $nc($nc(($cast($JCTree$JCIdent, clazzid)))->sym)->type);
		if (annoclazzid != nullptr) {
			$set(annoclazzid, type, clazzid->type);
		}
		if (!$nc(clazztype)->isErroneous()) {
			if (cdef != nullptr && $nc(clazztype->tsym)->isInterface()) {
				$init($CompilerProperties$Errors);
				$nc(this->log)->error($($nc(tree->encl)->pos()), $CompilerProperties$Errors::AnonClassImplIntfNoQualForNew);
			} else if ($nc(clazztype->tsym)->isStatic()) {
				$var($JCDiagnostic$DiagnosticPosition, var$3, $nc(tree->encl)->pos());
				$nc(this->log)->error(var$3, $($CompilerProperties$Errors::QualifiedNewOfStaticClass(clazztype->tsym)));
			}
		}
	} else {
		bool var$5 = !$nc($nc(clazztype)->tsym)->isInterface();
		$init($TypeTag);
		if (var$5 && $nc($(clazztype->getEnclosingType()))->hasTag($TypeTag::CLASS)) {
			$nc(this->rs)->resolveImplicitThis($(tree->pos()), this->env, clazztype);
		}
	}
	$var($ListBuffer, argtypesBuf, $new($ListBuffer));
	$init($Kinds$KindSelector);
	$var($Kinds$KindSelector, pkind, attribArgs($Kinds$KindSelector::VAL, tree->args, localEnv, argtypesBuf));
	$var($List, argtypes, argtypesBuf->toList());
	$var($List, typeargtypes, attribTypes(tree->typeargs, localEnv));
	$init($TypeTag);
	bool var$6 = $nc(clazztype)->hasTag($TypeTag::CLASS);
	if (var$6 || $nc(clazztype)->hasTag($TypeTag::ERROR)) {
		if (((int64_t)($nc(clazztype->tsym)->flags_field & (uint64_t)(int64_t)$Flags::ENUM)) != 0 && (!$nc($nc(this->env)->tree)->hasTag($JCTree$Tag::VARDEF) || ((int64_t)($nc($nc(($cast($JCTree$JCVariableDecl, $nc(this->env)->tree)))->mods)->flags & (uint64_t)(int64_t)$Flags::ENUM)) == 0 || !$equals($nc(($cast($JCTree$JCVariableDecl, $nc(this->env)->tree)))->init, tree))) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($(tree->pos()), $CompilerProperties$Errors::EnumCantBeInstantiated);
		}
		bool var$7 = $TreeInfo::isDiamond(tree);
		$init($DeferredAttr$AttrMode);
		bool isSpeculativeDiamondInferenceRound = var$7 && $nc($($nc($nc(this->resultInfo)->checkContext)->deferredAttrContext()))->mode == $DeferredAttr$AttrMode::SPECULATIVE;
		bool skipNonDiamondPath = false;
		if (cdef == nullptr && !isSpeculativeDiamondInferenceRound && ((int64_t)($nc(clazztype->tsym)->flags() & (uint64_t)(int64_t)(1024 | 512))) != 0) {
			$var($JCDiagnostic$DiagnosticPosition, var$8, tree->pos());
			$nc(this->log)->error(var$8, $($CompilerProperties$Errors::AbstractCantBeInstantiated(clazztype->tsym)));
			skipNonDiamondPath = true;
		} else if (cdef != nullptr && $nc(clazztype->tsym)->isInterface()) {
			if (!$nc(argtypes)->isEmpty()) {
				$init($CompilerProperties$Errors);
				$nc(this->log)->error($($nc(($cast($JCTree$JCExpression, $nc(tree->args)->head)))->pos()), $CompilerProperties$Errors::AnonClassImplIntfNoArgs);
			}
			if (!$nc(typeargtypes)->isEmpty()) {
				$init($CompilerProperties$Errors);
				$nc(this->log)->error($($nc(($cast($JCTree$JCExpression, $nc(tree->typeargs)->head)))->pos()), $CompilerProperties$Errors::AnonClassImplIntfNoTypeargs);
			}
			$assign(argtypes, $List::nil());
			$assign(typeargtypes, $List::nil());
			skipNonDiamondPath = true;
		}
		if ($TreeInfo::isDiamond(tree)) {
			$var($Type, var$9, clazztype->getEnclosingType());
			$var($List, var$10, $nc($nc(clazztype->tsym)->type)->getTypeArguments());
			$var($Symbol$TypeSymbol, var$11, clazztype->tsym);
			$var($Type$ClassType, site, $new($Type$ClassType, var$9, var$10, var$11, $(clazztype->getMetadata())));
			$var($Env, diamondEnv, $nc(localEnv)->dup(tree));
			$nc(($cast($AttrContext, $nc(diamondEnv)->info)))->selectSuper = cdef != nullptr || tree->classDeclRemoved();
			$set($nc($cast($AttrContext, $nc(diamondEnv)->info)), pendingResolutionPhase, nullptr);
			$var($Symbol, constructor, $nc(this->rs)->resolveDiamond($(tree->pos()), diamondEnv, site, argtypes, typeargtypes));
			$set(tree, constructor, $nc(constructor)->baseSymbol());
			$var($Symbol$TypeSymbol, csym, clazztype->tsym);
			$var($Kinds$KindSelector, var$12, pkind);
			$var($Type, var$13, newMethodTemplate($nc(this->resultInfo)->pt, argtypes, typeargtypes));
			$init($Attr$CheckMode);
			$var($Attr$ResultInfo, diamondResult, $new($Attr$ResultInfo, this, var$12, var$13, $(diamondContext(tree, csym, $nc(this->resultInfo)->checkContext)), $Attr$CheckMode::NO_TREE_UPDATE));
			$var($Type, constructorType, $set(tree, constructorType, $nc(this->types)->createErrorType(clazztype)));
			$assign(constructorType, checkId(tree, site, constructor, diamondEnv, diamondResult));
			$set($nc(tree->clazz), type, $nc(this->types)->createErrorType(clazztype));
			if (!$nc(constructorType)->isErroneous()) {
				$set($nc(tree->clazz), type, ($set($nc(clazz), type, constructorType->getReturnType())));
				$set(tree, constructorType, $nc(this->types)->createMethodTypeWithReturn(constructorType, $nc(this->syms)->voidType));
			}
			$assign(clazztype, $nc(this->chk)->checkClassType(tree->clazz, $nc(tree->clazz)->type, true));
		} else if (!skipNonDiamondPath) {
			$var($Env, rsEnv, $nc(localEnv)->dup(tree));
			$nc(($cast($AttrContext, $nc(rsEnv)->info)))->selectSuper = cdef != nullptr;
			$set($nc($cast($AttrContext, rsEnv->info)), pendingResolutionPhase, nullptr);
			$set(tree, constructor, $nc(this->rs)->resolveConstructor($(tree->pos()), rsEnv, clazztype, argtypes, typeargtypes));
			if (cdef == nullptr) {
				$init($Attr$CheckMode);
				$set(tree, constructorType, checkId(tree, clazztype, tree->constructor, rsEnv, $$new($Attr$ResultInfo, this, pkind, $(newMethodTemplate($nc(this->syms)->voidType, argtypes, typeargtypes)), $Attr$CheckMode::NO_TREE_UPDATE)));
				if ($nc(($cast($AttrContext, rsEnv->info)))->lastResolveVarargs()) {
					$Assert::check($nc(tree->constructorType)->isErroneous() || tree->varargsElement != nullptr);
				}
			}
		}
		if (cdef != nullptr) {
			visitAnonymousClassDefinition(tree, clazz, clazztype, cdef, localEnv, argtypes, typeargtypes, pkind);
			return;
		}
		$init($Kinds$Kind);
		if (tree->constructor != nullptr && $nc(tree->constructor)->kind == $Kinds$Kind::MTH) {
			$assign(owntype, clazztype);
		}
	}
	$set(this, result, check(tree, owntype, $Kinds$KindSelector::VAL, this->resultInfo));
	$var($InferenceContext, inferenceContext, $nc($nc(this->resultInfo)->checkContext)->inferenceContext());
	if (tree->constructorType != nullptr && $nc(inferenceContext)->free(tree->constructorType)) {
		$var($List, var$14, $List::of(tree->constructorType));
		inferenceContext->addFreeTypeListener(var$14, static_cast<$Infer$FreeTypeListener*>($$new(Attr$$Lambda$lambda$visitNewClass$22$24, tree)));
	}
	$nc(this->chk)->validate(tree->typeargs, localEnv);
}

void Attr::visitAnonymousClassDefinition($JCTree$JCNewClass* tree, $JCTree$JCExpression* clazz, $Type* clazztype$renamed, $JCTree$JCClassDecl* cdef, $Env* localEnv, $List* argtypes, $List* typeargtypes, $Kinds$KindSelector* pkind) {
	$useLocalCurrentObjectStackCache();
	$var($Type, clazztype, clazztype$renamed);
	$var($InferenceContext, inferenceContext, $nc($nc(this->resultInfo)->checkContext)->inferenceContext());
	bool isDiamond = $TreeInfo::isDiamond(tree);
	bool var$0 = isDiamond;
	if (var$0) {
		bool var$1 = ($nc(tree)->constructorType != nullptr && $nc(inferenceContext)->free(tree->constructorType));
		var$0 = (var$1 || ($nc($nc(tree)->clazz)->type != nullptr && $nc(inferenceContext)->free($nc(tree->clazz)->type)));
	}
	if (var$0) {
		$var($Attr$ResultInfo, resultInfoForClassDefinition, this->resultInfo);
		$var($List, var$2, $List::of(tree->constructorType, $nc(tree->clazz)->type));
		inferenceContext->addFreeTypeListener(var$2, static_cast<$Infer$FreeTypeListener*>($$new(Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25, this, tree, clazz, resultInfoForClassDefinition, cdef, localEnv, argtypes, typeargtypes, pkind)));
	} else {
		$init($TypeTag);
		if (isDiamond && $nc(clazztype)->hasTag($TypeTag::CLASS)) {
			$var($List, invalidDiamondArgs, $nc(this->chk)->checkDiamondDenotable($cast($Type$ClassType, clazztype)));
			bool var$3 = !clazztype->isErroneous();
			if (var$3 && $nc(invalidDiamondArgs)->nonEmpty()) {
				$var($JCDiagnostic$Fragment, fragment, $CompilerProperties$Fragments::Diamond(clazztype->tsym));
				$var($JCDiagnostic$DiagnosticPosition, var$4, $nc(tree->clazz)->pos());
				$nc(this->log)->error(var$4, $($CompilerProperties$Errors::CantApplyDiamond1(fragment, invalidDiamondArgs->size() > 1 ? $($CompilerProperties$Fragments::DiamondInvalidArgs(static_cast<$1List*>(invalidDiamondArgs), fragment)) : $($CompilerProperties$Fragments::DiamondInvalidArg(static_cast<$1List*>(invalidDiamondArgs), fragment)))));
			}
			{
				$var($Iterator, i$, $nc($(clazztype->getTypeArguments()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Type, t, $cast($Type, i$->next()));
					{
						$nc(this->rs)->checkAccessibleType(this->env, t);
					}
				}
			}
		}
		bool var$5 = $nc($nc(clazztype)->tsym)->isInterface();
		if (!var$5) {
			bool var$7 = $nc(clazztype)->isErroneous();
			bool var$6 = var$7 && !$nc($(clazztype->getOriginalType()))->hasTag($TypeTag::NONE);
			var$5 = var$6 && $nc($nc($(clazztype->getOriginalType()))->tsym)->isInterface();
		}
		bool implementing = var$5;
		if (implementing) {
			$set($nc(cdef), implementing, $List::of(clazz));
		} else {
			$set($nc(cdef), extending, clazz);
		}
		$init($DeferredAttr$AttrMode);
		bool var$8 = $nc($($nc($nc(this->resultInfo)->checkContext)->deferredAttrContext()))->mode == $DeferredAttr$AttrMode::CHECK;
		if (var$8 && isSerializable(clazztype)) {
			$nc(($cast($AttrContext, $nc(localEnv)->info)))->isSerializable = true;
		}
		attribStat(cdef, localEnv);
		$var($List, finalargtypes, nullptr);
		if (tree->encl != nullptr && !$nc(clazztype->tsym)->isInterface()) {
			$assign(finalargtypes, $nc(argtypes)->prepend($nc(tree->encl)->type));
		} else {
			$assign(finalargtypes, argtypes);
		}
		$init($Kinds$KindSelector);
		if (isDiamond && $nc(pkind)->contains($Kinds$KindSelector::POLY)) {
			$assign(finalargtypes, $nc(finalargtypes)->map($nc(this->deferredAttr)->deferredCopier));
		}
		$assign(clazztype, clazztype->hasTag($TypeTag::ERROR) ? $nc(this->types)->createErrorType($nc($nc(cdef)->sym)->type) : $nc($nc(cdef)->sym)->type);
		$var($Symbol, sym, $set(tree, constructor, $nc(this->rs)->resolveConstructor($(tree->pos()), localEnv, clazztype, finalargtypes, typeargtypes)));
		$Assert::check(!$nc($nc(sym)->kind)->isResolutionError());
		$set(tree, constructor, sym);
		$init($Attr$CheckMode);
		$set(tree, constructorType, checkId(tree, clazztype, tree->constructor, localEnv, $$new($Attr$ResultInfo, this, pkind, $(newMethodTemplate($nc(this->syms)->voidType, finalargtypes, typeargtypes)), $Attr$CheckMode::NO_TREE_UPDATE)));
	}
	$init($Kinds$Kind);
	$var($Type, owntype, ($nc(tree)->constructor != nullptr && $nc(tree->constructor)->kind == $Kinds$Kind::MTH) ? clazztype : $nc(this->types)->createErrorType($nc(tree)->type));
	$init($Kinds$KindSelector);
	$init($Attr$CheckMode);
	$set(this, result, check(tree, owntype, $Kinds$KindSelector::VAL, $($nc(this->resultInfo)->dup($Attr$CheckMode::NO_INFERENCE_HOOK))));
	$nc(this->chk)->validate($nc(tree)->typeargs, localEnv);
}

$Check$CheckContext* Attr::diamondContext($JCTree$JCNewClass* clazz, $Symbol$TypeSymbol* tsym, $Check$CheckContext* checkContext) {
	return $new($Attr$7, this, checkContext, clazz, tsym);
}

$JCTree$JCExpression* Attr::makeNullCheck($JCTree$JCExpression* arg) {
	$useLocalCurrentObjectStackCache();
	$init($JCTree$Tag);
	if ($nc(arg)->getTag() == $JCTree$Tag::NEWCLASS) {
		return arg;
	}
	$var($Name, name, $TreeInfo::name(arg));
	if (name == $nc(this->names)->_this || name == $nc(this->names)->_super) {
		return arg;
	}
	$JCTree$Tag* optag = $JCTree$Tag::NULLCHK;
	$var($JCTree$JCUnary, tree, $nc($($nc(this->make)->at($nc(arg)->pos$)))->Unary(optag, arg));
	$set($nc(tree), operator$, $nc(this->operators)->resolveUnary(arg, optag, $nc(arg)->type));
	$set(tree, type, $nc(arg)->type);
	return tree;
}

void Attr::visitNewArray($JCTree$JCNewArray* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, owntype, $nc(this->types)->createErrorType($nc(tree)->type));
	$var($Env, localEnv, $nc(this->env)->dup(tree));
	$var($Type, elemtype, nullptr);
	if ($nc(tree)->elemtype != nullptr) {
		$assign(elemtype, attribType(static_cast<$JCTree*>(tree->elemtype), localEnv));
		$nc(this->chk)->validate(static_cast<$JCTree*>(tree->elemtype), localEnv);
		$assign(owntype, elemtype);
		{
			$var($List, l, tree->dims);
			for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
				attribExpr($cast($JCTree, l->head), localEnv, $nc(this->syms)->intType);
				$assign(owntype, $new($Type$ArrayType, owntype, $nc(this->syms)->arrayClass));
			}
		}
	} else {
		$init($TypeTag);
		if ($nc($(pt()))->hasTag($TypeTag::ARRAY)) {
			$assign(elemtype, $nc(this->types)->elemtype($(pt())));
		} else {
			bool var$0 = !$nc($(pt()))->hasTag($TypeTag::ERROR);
			if (var$0 && ($nc(($cast($AttrContext, $nc(this->env)->info)))->enclVar == nullptr || !$nc($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->enclVar)->type)->isErroneous())) {
				$var($JCDiagnostic$DiagnosticPosition, var$1, tree->pos());
				$nc(this->log)->error(var$1, $($CompilerProperties$Errors::IllegalInitializerForType($(pt()))));
			}
			$assign(elemtype, $nc(this->types)->createErrorType($(pt())));
		}
	}
	if ($nc(tree)->elems != nullptr) {
		attribExprs(tree->elems, localEnv, elemtype);
		$assign(owntype, $new($Type$ArrayType, elemtype, $nc(this->syms)->arrayClass));
	}
	if (!$nc(this->types)->isReifiable(elemtype)) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($($nc(tree)->pos()), $CompilerProperties$Errors::GenericArrayCreation);
	}
	$init($Kinds$KindSelector);
	$set(this, result, check(tree, owntype, $Kinds$KindSelector::VAL, this->resultInfo));
}

void Attr::visitLambda($JCTree$JCLambda* that) {
	$useLocalCurrentObjectStackCache();
	bool wrongContext = false;
	bool var$0 = $nc($(pt()))->isErroneous();
	if (!var$0) {
		$init($TypeTag);
		bool var$1 = $nc($(pt()))->hasTag($TypeTag::NONE);
		var$0 = (var$1 && !$equals(pt(), $Type::recoveryType));
	}
	if (var$0) {
		$init($TypeTag);
		bool var$2 = $nc($(pt()))->hasTag($TypeTag::NONE);
		if (var$2 && ($nc(($cast($AttrContext, $nc(this->env)->info)))->enclVar == nullptr || !$nc($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->enclVar)->type)->isErroneous())) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($($nc(that)->pos()), $CompilerProperties$Errors::UnexpectedLambda);
		}
		$set(this, resultInfo, this->recoveryInfo);
		wrongContext = true;
	}
	$var($Env, localEnv, lambdaEnv(that, this->env));
	$init($DeferredAttr$AttrMode);
	bool needsRecovery = $nc($($nc($nc(this->resultInfo)->checkContext)->deferredAttrContext()))->mode == $DeferredAttr$AttrMode::CHECK;
	{
		$var($Throwable, var$3, nullptr);
		bool return$4 = false;
		try {
			try {
				if (needsRecovery && isSerializable($(pt()))) {
					$nc(($cast($AttrContext, $nc(localEnv)->info)))->isSerializable = true;
					$nc(($cast($AttrContext, localEnv->info)))->isSerializableLambda = true;
				}
				$var($List, explicitParamTypes, nullptr);
				$init($JCTree$JCLambda$ParameterKind);
				if ($nc(that)->paramKind == $JCTree$JCLambda$ParameterKind::EXPLICIT) {
					attribStats(that->params, localEnv);
					$assign(explicitParamTypes, $TreeInfo::types(that->params));
				}
				$var($Attr$TargetInfo, targetInfo, getTargetInfo(that, this->resultInfo, explicitParamTypes));
				$var($Type, currentTarget, $nc(targetInfo)->target);
				$var($Type, lambdaType, targetInfo->descriptor);
				if ($nc(currentTarget)->isErroneous()) {
					$set(this, result, ($set($nc(that), type, currentTarget)));
					return$4 = true;
					goto $finally;
				}
				setFunctionalInfo(localEnv, that, $(pt()), lambdaType, currentTarget, $nc(this->resultInfo)->checkContext);
				$init($TypeTag);
				if ($nc(lambdaType)->hasTag($TypeTag::FORALL)) {
					$var($JCDiagnostic$Fragment, msg, $CompilerProperties$Fragments::InvalidGenericLambdaTarget(lambdaType, $($Kinds::kindName(static_cast<$Symbol*>($nc(currentTarget)->tsym))), $nc(currentTarget)->tsym));
					$nc($nc(this->resultInfo)->checkContext)->report(that, $($nc(this->diags)->fragment(msg)));
					$set(this, result, ($set($nc(that), type, $nc(this->types)->createErrorType($(pt())))));
					return$4 = true;
					goto $finally;
				}
				if ($nc(that)->paramKind == $JCTree$JCLambda$ParameterKind::IMPLICIT) {
					$var($List, actuals, $nc(lambdaType)->getParameterTypes());
					$var($List, params, that->params);
					bool arityMismatch = false;
					while ($nc(params)->nonEmpty()) {
						if ($nc(actuals)->isEmpty()) {
							arityMismatch = true;
						}
						$var($Type, argType, arityMismatch ? $nc(this->syms)->errType : $cast($Type, $nc(actuals)->head));
						if ($nc(($cast($JCTree$JCVariableDecl, params->head)))->isImplicitlyTyped()) {
							setSyntheticVariableType($cast($JCTree$JCVariableDecl, params->head), argType);
						}
						$set($nc($cast($JCTree$JCVariableDecl, params->head)), sym, nullptr);
						$assign(actuals, actuals->isEmpty() ? actuals : actuals->tail);
						$assign(params, params->tail);
					}
					attribStats(that->params, localEnv);
					if (arityMismatch) {
						$init($CompilerProperties$Fragments);
						$nc($nc(this->resultInfo)->checkContext)->report(that, $($nc(this->diags)->fragment($CompilerProperties$Fragments::IncompatibleArgTypesInLambda)));
						$set(this, result, ($set(that, type, $nc(this->types)->createErrorType(currentTarget))));
						return$4 = true;
						goto $finally;
					}
				}
				needsRecovery = false;
				$var($Attr$ResultInfo, bodyResultInfo, $set($nc($cast($AttrContext, $nc(localEnv)->info)), returnResult, lambdaBodyResult(that, lambdaType, this->resultInfo)));
				$init($LambdaExpressionTree$BodyKind);
				if ($nc(that)->getBodyKind() == $LambdaExpressionTree$BodyKind::EXPRESSION) {
					attribTree($(that->getBody()), localEnv, bodyResultInfo);
				} else {
					$var($JCTree$JCBlock, body, $cast($JCTree$JCBlock, that->body));
					if ($equals(body, this->breakTree) && $nc($($nc($nc(this->resultInfo)->checkContext)->deferredAttrContext()))->mode == $DeferredAttr$AttrMode::CHECK) {
						breakTreeFound($(copyEnv(localEnv)));
					}
					attribStats($nc(body)->stats, localEnv);
				}
				$init($Kinds$KindSelector);
				$set(this, result, check(that, currentTarget, $Kinds$KindSelector::VAL, this->resultInfo));
				bool isSpeculativeRound = $nc($($nc($nc(this->resultInfo)->checkContext)->deferredAttrContext()))->mode == $DeferredAttr$AttrMode::SPECULATIVE;
				preFlow(that);
				$nc(this->flow)->analyzeLambda(this->env, that, this->make, isSpeculativeRound);
				$set($nc(that), type, currentTarget);
				checkLambdaCompatible(that, lambdaType, $nc(this->resultInfo)->checkContext);
				if (!isSpeculativeRound) {
					if ($nc($($nc($nc(this->resultInfo)->checkContext)->inferenceContext()))->free($($nc(lambdaType)->getThrownTypes()))) {
						$var($List, inferredThrownTypes, $nc(this->flow)->analyzeLambdaThrownTypes(this->env, that, this->make));
						$var($List, var$5, inferredThrownTypes);
						$var($List, var$6, $nc(lambdaType)->getThrownTypes());
						if (!checkExConstraints(var$5, var$6, $($nc($nc(this->resultInfo)->checkContext)->inferenceContext()))) {
							$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(that), $($CompilerProperties$Errors::IncompatibleThrownTypesInMref($($nc(lambdaType)->getThrownTypes()))));
						}
					}
					checkAccessibleTypes(static_cast<$JCDiagnostic$DiagnosticPosition*>(that), localEnv, $($nc($nc(this->resultInfo)->checkContext)->inferenceContext()), $$new($TypeArray, {
						lambdaType,
						currentTarget
					}));
				}
				$set(this, result, wrongContext ? $set(that, type, $nc(this->types)->createErrorType($(pt()))) : check(that, currentTarget, $Kinds$KindSelector::VAL, this->resultInfo));
			} catch ($Types$FunctionDescriptorLookupError& ex) {
				$var($JCDiagnostic, cause, ex->getDiagnostic());
				$nc($nc(this->resultInfo)->checkContext)->report(that, cause);
				$set(this, result, ($set($nc(that), type, $nc(this->types)->createErrorType($(pt())))));
				return$4 = true;
				goto $finally;
			} catch ($Symbol$CompletionFailure& cf) {
				$nc(this->chk)->completionError($($nc(that)->pos()), cf);
			} catch ($Throwable& t) {
				needsRecovery = false;
				$throw(t);
			}
		} catch ($Throwable& var$7) {
			$assign(var$3, var$7);
		} $finally: {
			$nc($nc(($cast($AttrContext, $nc(localEnv)->info)))->scope)->leave();
			if (needsRecovery) {
				$var($Type, prevResult, this->result);
				{
					$var($Throwable, var$8, nullptr);
					try {
						attribTree(that, this->env, this->recoveryInfo);
					} catch ($Throwable& var$9) {
						$assign(var$8, var$9);
					} /*finally*/ {
						if ($equals(this->result, $Type::recoveryType)) {
							$set(this, result, prevResult);
						}
					}
					if (var$8 != nullptr) {
						$throw(var$8);
					}
				}
			}
		}
		if (var$3 != nullptr) {
			$throw(var$3);
		}
		if (return$4) {
			return;
		}
	}
}

$Attr$TargetInfo* Attr::getTargetInfo($JCTree$JCPolyExpression* that, $Attr$ResultInfo* resultInfo, $List* explicitParamTypes) {
	$useLocalCurrentObjectStackCache();
	$var($Type, lambdaType, nullptr);
	$var($Type, currentTarget, $nc(resultInfo)->pt);
	$init($Type);
	if (!$equals(resultInfo->pt, $Type::recoveryType)) {
		$assign(currentTarget, $cast($Type, $nc(this->targetChecker)->visit(currentTarget, that)));
		if (!$nc(currentTarget)->isIntersection()) {
			if (explicitParamTypes != nullptr) {
				$assign(currentTarget, $nc(this->infer)->instantiateFunctionalInterface(that, currentTarget, explicitParamTypes, resultInfo->checkContext));
			}
			$assign(currentTarget, $nc(this->types)->removeWildcards(currentTarget));
			$assign(lambdaType, $nc(this->types)->findDescriptorType(currentTarget));
		} else {
			$var($Type$IntersectionClassType, ict, $cast($Type$IntersectionClassType, currentTarget));
			$var($ListBuffer, components, $new($ListBuffer));
			{
				$var($Iterator, i$, $nc($(ict->getExplicitComponents()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Type, bound, $cast($Type, i$->next()));
					{
						if (explicitParamTypes != nullptr) {
							try {
								$assign(bound, $nc(this->infer)->instantiateFunctionalInterface(that, bound, explicitParamTypes, resultInfo->checkContext));
							} catch ($Types$FunctionDescriptorLookupError& t) {
							}
						}
						$assign(bound, $nc(this->types)->removeWildcards(bound));
						components->add(bound);
					}
				}
			}
			$assign(currentTarget, $nc(this->types)->makeIntersectionType($(components->toList())));
			$nc($nc(currentTarget)->tsym)->flags_field |= 512;
			$assign(lambdaType, $nc(this->types)->findDescriptorType(currentTarget));
		}
	} else {
		$assign(currentTarget, $Type::recoveryType);
		$assign(lambdaType, fallbackDescriptorType(that));
	}
	$init($JCTree$Tag);
	bool var$0 = $nc(that)->hasTag($JCTree$Tag::LAMBDA);
	$init($TypeTag);
	if (var$0 && $nc(lambdaType)->hasTag($TypeTag::FORALL)) {
		$var($JCDiagnostic$Fragment, msg, $CompilerProperties$Fragments::InvalidGenericLambdaTarget(lambdaType, $($Kinds::kindName(static_cast<$Symbol*>($nc(currentTarget)->tsym))), $nc(currentTarget)->tsym));
		$nc(resultInfo->checkContext)->report(that, $($nc(this->diags)->fragment(msg)));
		$assign(currentTarget, $nc(this->types)->createErrorType($(pt())));
	}
	return $new($Attr$TargetInfo, this, currentTarget, lambdaType);
}

void Attr::preFlow($JCTree$JCLambda* tree) {
	$nc(this->attrRecover)->doRecovery();
	$$new($Attr$8, this)->scan($nc(tree)->body);
}

$Type* Attr::fallbackDescriptorType($JCTree$JCExpression* tree) {
	$useLocalCurrentObjectStackCache();
	$init($Attr$13);
	{
		$var($JCTree$JCLambda, lambda, nullptr)
		$var($List, argtypes, nullptr)
		switch ($nc($Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
		case 2:
			{
				$assign(lambda, $cast($JCTree$JCLambda, tree));
				$assign(argtypes, $List::nil());
				{
					$var($Iterator, i$, $nc($nc(lambda)->params)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($JCTree$JCVariableDecl, param, $cast($JCTree$JCVariableDecl, i$->next()));
						{
							$assign(argtypes, $nc(param)->vartype != nullptr && $nc(param->vartype)->type != nullptr ? $nc(argtypes)->append($nc($nc(param)->vartype)->type) : argtypes->append($nc(this->syms)->errType));
						}
					}
				}
				$init($Type);
				return $new($Type$MethodType, argtypes, $Type::recoveryType, $($List::of($nc(this->syms)->throwableType)), $nc(this->syms)->methodClass);
			}
		case 3:
			{
				$var($List, var$0, $List::nil());
				$init($Type);
				$var($Type, var$1, static_cast<$Type*>($Type::recoveryType));
				return $new($Type$MethodType, var$0, var$1, $($List::of($nc(this->syms)->throwableType)), $nc(this->syms)->methodClass);
			}
		default:
			{
				$Assert::error("Cannot get here!"_s);
			}
		}
	}
	return nullptr;
}

void Attr::checkAccessibleTypes($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $InferenceContext* inferenceContext, $TypeArray* ts) {
	checkAccessibleTypes(pos, env, inferenceContext, $($List::from(ts)));
}

void Attr::checkAccessibleTypes($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $InferenceContext* inferenceContext, $List* ts) {
	$useLocalCurrentObjectStackCache();
	if ($nc(inferenceContext)->free(ts)) {
		inferenceContext->addFreeTypeListener(ts, static_cast<$Infer$FreeTypeListener*>($$new(Attr$$Lambda$lambda$checkAccessibleTypes$24$26, this, pos, env, ts)));
	} else {
		{
			$var($Iterator, i$, $nc(ts)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, t, $cast($Type, i$->next()));
				{
					$nc(this->rs)->checkAccessibleType(env, t);
				}
			}
		}
	}
}

$Attr$ResultInfo* Attr::lambdaBodyResult($JCTree$JCLambda* that, $Type* descriptor, $Attr$ResultInfo* resultInfo) {
	$useLocalCurrentObjectStackCache();
	$init($LambdaExpressionTree$BodyKind);
	$var($Attr$FunctionalReturnContext, funcContext, $nc(that)->getBodyKind() == $LambdaExpressionTree$BodyKind::EXPRESSION ? static_cast<$Attr$FunctionalReturnContext*>($new($Attr$ExpressionLambdaReturnContext, this, $cast($JCTree$JCExpression, $($nc(that)->getBody())), $nc(resultInfo)->checkContext)) : $new($Attr$FunctionalReturnContext, this, $nc(resultInfo)->checkContext));
	$init($Type);
	$init($Kinds$KindSelector);
	return $equals($nc(descriptor)->getReturnType(), $Type::recoveryType) ? this->recoveryInfo : $new($Attr$ResultInfo, this, $Kinds$KindSelector::VAL, $($nc(descriptor)->getReturnType()), static_cast<$Check$CheckContext*>(funcContext));
}

void Attr::checkLambdaCompatible($JCTree$JCLambda* tree, $Type* descriptor, $Check$CheckContext* checkContext) {
	$useLocalCurrentObjectStackCache();
	$var($Type, returnType, $nc($($nc(checkContext)->inferenceContext()))->asUndetVar($($nc(descriptor)->getReturnType())));
	$init($LambdaExpressionTree$BodyKind);
	bool var$0 = $nc(tree)->getBodyKind() == $LambdaExpressionTree$BodyKind::STATEMENT && tree->canCompleteNormally;
	$init($TypeTag);
	if (var$0 && !$nc(returnType)->hasTag($TypeTag::VOID) && !$equals(returnType, $Type::recoveryType)) {
		$var($JCDiagnostic$Fragment, msg, $CompilerProperties$Fragments::IncompatibleRetTypeInLambda($($CompilerProperties$Fragments::MissingRetVal(returnType))));
		checkContext->report(tree, $($nc(this->diags)->fragment(msg)));
	}
	$var($List, argTypes, $nc($(checkContext->inferenceContext()))->asUndetVars($($nc(descriptor)->getParameterTypes())));
	if (!$nc(this->types)->isSameTypes(argTypes, $($TreeInfo::types($nc(tree)->params)))) {
		$init($CompilerProperties$Fragments);
		checkContext->report(tree, $($nc(this->diags)->fragment($CompilerProperties$Fragments::IncompatibleArgTypesInLambda)));
	}
}

$Symbol$MethodSymbol* Attr::removeClinit($Symbol$ClassSymbol* sym) {
	return $cast($Symbol$MethodSymbol, $nc(this->clinits)->remove(sym));
}

$Env* Attr::lambdaEnv($JCTree$JCLambda* that, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Env, lambdaEnv, nullptr);
	$var($Symbol, owner, $nc($nc(($cast($AttrContext, $nc(env)->info)))->scope)->owner);
	$init($Kinds$Kind);
	if ($nc(owner)->kind == $Kinds$Kind::VAR && $nc(owner->owner)->kind == $Kinds$Kind::TYP) {
		$var($Symbol$ClassSymbol, enclClass, owner->enclClass());
		$var($Symbol, newScopeOwner, $nc($nc(($cast($AttrContext, env->info)))->scope)->owner);
		if (((int64_t)(owner->flags() & (uint64_t)(int64_t)8)) == 0) {
			{
				$var($Iterator, i$, $nc($($nc($nc(enclClass)->members_field)->getSymbolsByName($nc(this->names)->init)))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Symbol, s, $cast($Symbol, i$->next()));
					{
						$assign(newScopeOwner, s);
						break;
					}
				}
			}
		} else {
			$var($Symbol$MethodSymbol, clinit, $cast($Symbol$MethodSymbol, $nc(this->clinits)->get(enclClass)));
			if (clinit == nullptr) {
				$var($List, var$0, $List::nil());
				$var($Type, var$1, static_cast<$Type*>($nc(this->syms)->voidType));
				$var($Type, clinitType, $new($Type$MethodType, var$0, var$1, $($List::nil()), $nc(this->syms)->methodClass));
				$assign(clinit, $new($Symbol$MethodSymbol, (8 | 4096) | 2, $nc(this->names)->clinit, clinitType, enclClass));
				$set(clinit, params$, $List::nil());
				$nc(this->clinits)->put(enclClass, clinit);
			}
			$assign(newScopeOwner, clinit);
		}
		$assign(lambdaEnv, env->dup(that, $($nc(($cast($AttrContext, env->info)))->dup($($nc($nc(($cast($AttrContext, env->info)))->scope)->dupUnshared(newScopeOwner))))));
	} else {
		$assign(lambdaEnv, env->dup(that, $($nc(($cast($AttrContext, env->info)))->dup($($nc($nc(($cast($AttrContext, env->info)))->scope)->dup())))));
	}
	$set($nc($cast($AttrContext, $nc(lambdaEnv)->info)), yieldResult, nullptr);
	$nc(($cast($AttrContext, lambdaEnv->info)))->isLambda = true;
	return lambdaEnv;
}

void Attr::visitReference($JCTree$JCMemberReference* that) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc($(pt()))->isErroneous();
	if (!var$0) {
		$init($TypeTag);
		bool var$1 = $nc($(pt()))->hasTag($TypeTag::NONE);
		var$0 = (var$1 && !$equals(pt(), $Type::recoveryType));
	}
	if (var$0) {
		$init($TypeTag);
		bool var$2 = $nc($(pt()))->hasTag($TypeTag::NONE);
		if (var$2 && ($nc(($cast($AttrContext, $nc(this->env)->info)))->enclVar == nullptr || !$nc($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->enclVar)->type)->isErroneous())) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($($nc(that)->pos()), $CompilerProperties$Errors::UnexpectedMref);
		}
		$set(this, result, ($set($nc(that), type, $nc(this->types)->createErrorType($(pt())))));
		return;
	}
	$var($Env, localEnv, $nc(this->env)->dup(that));
	try {
		$var($Type, exprType, attribTree($nc(that)->expr, this->env, $(memberReferenceQualifierResult(that))));
		$init($MemberReferenceTree$ReferenceMode);
		if ($nc(that)->getMode() == $MemberReferenceTree$ReferenceMode::NEW) {
			$assign(exprType, $nc(this->chk)->checkConstructorRefType(that->expr, exprType));
			bool var$3 = !$nc(exprType)->isErroneous();
			if (var$3 && exprType->isRaw() && that->typeargs != nullptr) {
				$var($JCDiagnostic$DiagnosticPosition, var$4, $nc(that->expr)->pos());
				$init($CompilerProperties$Fragments);
				$nc(this->log)->error(var$4, $($CompilerProperties$Errors::InvalidMref($($Kinds::kindName($(that->getMode()))), $CompilerProperties$Fragments::MrefInferAndExplicitParams)));
				$assign(exprType, $nc(this->types)->createErrorType(exprType));
			}
		}
		if ($nc(exprType)->isErroneous()) {
			$set(this, result, ($set($nc(that), type, exprType)));
			return;
		}
		if ($TreeInfo::isStaticSelector($nc(that)->expr, this->names)) {
			$nc(this->chk)->validate($nc(that)->expr, this->env, false);
		} else {
			$var($Symbol, lhsSym, $TreeInfo::symbol($nc(that)->expr));
			$nc(($cast($AttrContext, $nc(localEnv)->info)))->selectSuper = lhsSym != nullptr && lhsSym->name == $nc(this->names)->_super;
		}
		$var($List, typeargtypes, $List::nil());
		if ($nc(that)->typeargs != nullptr) {
			$assign(typeargtypes, attribTypes(that->typeargs, localEnv));
		}
		$init($DeferredAttr$AttrMode);
		bool var$5 = $nc($($nc($nc(this->resultInfo)->checkContext)->deferredAttrContext()))->mode == $DeferredAttr$AttrMode::CHECK;
		bool isTargetSerializable = var$5 && isSerializable($(pt()));
		$var($Attr$TargetInfo, targetInfo, getTargetInfo(that, this->resultInfo, nullptr));
		$var($Type, currentTarget, $nc(targetInfo)->target);
		$var($Type, desc, targetInfo->descriptor);
		setFunctionalInfo(localEnv, that, $(pt()), desc, currentTarget, $nc(this->resultInfo)->checkContext);
		$var($List, argtypes, $nc(desc)->getParameterTypes());
		$var($Resolve$MethodCheck, referenceCheck, $nc(this->rs)->resolveMethodCheck);
		if ($nc($($nc($nc(this->resultInfo)->checkContext)->inferenceContext()))->free(argtypes)) {
			$assign(referenceCheck, $new($Resolve$MethodReferenceCheck, static_cast<$Resolve*>($nc(this->rs)), $($nc($nc(this->resultInfo)->checkContext)->inferenceContext())));
		}
		$var($Pair, refResult, nullptr);
		$var($List, saved_undet, $nc($($nc($nc(this->resultInfo)->checkContext)->inferenceContext()))->save());
		{
			$var($Throwable, var$6, nullptr);
			try {
				$assign(refResult, $nc(this->rs)->resolveMemberReference(localEnv, that, $nc($nc(that)->expr)->type, that->name, argtypes, typeargtypes, targetInfo->descriptor, referenceCheck, $($nc($nc(this->resultInfo)->checkContext)->inferenceContext()), $nc(this->rs)->basicReferenceChooser));
			} catch ($Throwable& var$7) {
				$assign(var$6, var$7);
			} /*finally*/ {
				$nc($($nc($nc(this->resultInfo)->checkContext)->inferenceContext()))->rollback(saved_undet);
			}
			if (var$6 != nullptr) {
				$throw(var$6);
			}
		}
		$var($Symbol, refSym, $cast($Symbol, $nc(refResult)->fst));
		$var($Resolve$ReferenceLookupHelper, lookupHelper, $cast($Resolve$ReferenceLookupHelper, refResult->snd));
		$init($Kinds$Kind);
		if ($nc(refSym)->kind != $Kinds$Kind::MTH) {
			bool targetError = false;
			$init($Attr$13);
			switch ($nc($Attr$13::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->get($nc((refSym->kind))->ordinal())) {
			case 1:
				{}
			case 2:
				{
					targetError = false;
					break;
				}
			case 3:
				{}
			case 4:
				{}
			case 5:
				{}
			case 6:
				{}
			case 7:
				{
					targetError = true;
					break;
				}
			default:
				{
					$Assert::error($$str({"unexpected result kind "_s, refSym->kind}));
					targetError = false;
				}
			}
			$init($JCDiagnostic$DiagnosticType);
			$var($JCDiagnostic, detailsDiag, $nc(($cast($Resolve$ResolveError, $(refSym->baseSymbol()))))->getDiagnostic($JCDiagnostic$DiagnosticType::FRAGMENT, that, $nc(exprType)->tsym, exprType, $nc(that)->name, argtypes, typeargtypes));
			$var($DiagnosticSource, var$8, $nc(this->log)->currentSource());
			$var($JCDiagnostic$DiagnosticPosition, var$9, static_cast<$JCDiagnostic$DiagnosticPosition*>(that));
			$var($JCDiagnostic, diag, $nc(this->diags)->create(var$8, var$9, targetError ? $(static_cast<$JCDiagnostic$DiagnosticInfo*>($CompilerProperties$Fragments::InvalidMref($($Kinds::kindName($($nc(that)->getMode()))), detailsDiag))) : $(static_cast<$JCDiagnostic$DiagnosticInfo*>($CompilerProperties$Errors::InvalidMref($($Kinds::kindName($($nc(that)->getMode()))), detailsDiag)))));
			if (targetError && $equals(currentTarget, $Type::recoveryType)) {
				$set(this, result, ($set($nc(that), type, currentTarget)));
				return;
			} else {
				if (targetError) {
					$nc($nc(this->resultInfo)->checkContext)->report(that, diag);
				} else {
					$nc(this->log)->report(diag);
				}
				$set(this, result, ($set($nc(that), type, $nc(this->types)->createErrorType(currentTarget))));
				return;
			}
		}
		$set($nc(that), sym, $nc(refSym)->isConstructor() ? $nc(refSym)->baseSymbol() : refSym);
		$set(that, kind, $nc(lookupHelper)->referenceKind(that->sym));
		that->ownerAccessible = $nc(this->rs)->isAccessible(localEnv, $(static_cast<$Symbol$TypeSymbol*>($nc(that->sym)->enclClass())));
		if ($equals(desc->getReturnType(), $Type::recoveryType)) {
			$set(this, result, ($set(that, type, currentTarget)));
			return;
		}
		if (!$nc($nc(($cast($AttrContext, $nc(this->env)->info)))->attributionMode)->isSpeculative$ && that->getMode() == $MemberReferenceTree$ReferenceMode::NEW) {
			$var($Type, enclosingType, $nc(exprType)->getEnclosingType());
			$init($TypeTag);
			if (enclosingType != nullptr && enclosingType->hasTag($TypeTag::CLASS)) {
				$nc(this->rs)->resolveImplicitThis($(that->pos()), this->env, exprType);
			}
		}
		if ($nc($($nc($nc(this->resultInfo)->checkContext)->deferredAttrContext()))->mode == $DeferredAttr$AttrMode::CHECK) {
			bool var$12 = that->getMode() == $MemberReferenceTree$ReferenceMode::INVOKE;
			bool var$11 = var$12 && $TreeInfo::isStaticSelector(that->expr, this->names);
			bool var$10 = var$11 && $nc(that->kind)->isUnbound();
			if (var$10 && $nc(lookupHelper->site)->isRaw()) {
				$nc(this->chk)->checkRaw(that->expr, localEnv);
			}
			bool var$14 = $nc(that->sym)->isStatic();
			bool var$13 = var$14 && $TreeInfo::isStaticSelector(that->expr, this->names);
			if (var$13 && $nc($($nc(exprType)->getTypeArguments()))->nonEmpty()) {
				$var($JCDiagnostic$DiagnosticPosition, var$15, $nc(that->expr)->pos());
				$init($CompilerProperties$Fragments);
				$nc(this->log)->error(var$15, $($CompilerProperties$Errors::InvalidMref($($Kinds::kindName($(that->getMode()))), $CompilerProperties$Fragments::StaticMrefWithTargs)));
				$set(this, result, ($set(that, type, $nc(this->types)->createErrorType(currentTarget))));
				return;
			}
			if (!refSym->isStatic() && that->kind == $JCTree$JCMemberReference$ReferenceKind::SUPER) {
				$nc(this->rs)->checkNonAbstract($(that->pos()), that->sym);
			}
			if (isTargetSerializable) {
				$nc(this->chk)->checkAccessFromSerializableElement(that, true);
			}
		}
		$init($TypeTag);
		$var($Type, var$17, $nc($(desc->getReturnType()))->hasTag($TypeTag::VOID) ? static_cast<$Type*>($Type::noType) : desc->getReturnType());
		$var($Type, var$16, newMethodTemplate(var$17, $nc(that->kind)->isUnbound() ? $nc(argtypes)->tail : argtypes, typeargtypes));
		$init($Attr$CheckMode);
		$var($Attr$ResultInfo, checkInfo, $nc(this->resultInfo)->dup(var$16, $$new($Attr$FunctionalReturnContext, this, $nc(this->resultInfo)->checkContext), $Attr$CheckMode::NO_TREE_UPDATE));
		$var($Type, refType, checkId(that, lookupHelper->site, refSym, localEnv, checkInfo));
		bool var$18 = $nc(that->kind)->isUnbound();
		if (var$18 && $nc($($nc($nc(this->resultInfo)->checkContext)->inferenceContext()))->free($cast($Type, $nc(argtypes)->head))) {
			if (!$nc(this->types)->isSubtype($($nc($($nc($nc(this->resultInfo)->checkContext)->inferenceContext()))->asUndetVar($cast($Type, $nc(argtypes)->head))), exprType)) {
				$Assert::error("Can\'t get here"_s);
			}
		}
		if (!$nc(refType)->isErroneous()) {
			$var($Symbol, var$19, refSym);
			$var($Type, var$20, lookupHelper->site);
			$var($Name, var$21, that->name);
			$var($List, var$22, $nc($nc(checkInfo)->pt)->getParameterTypes());
			$assign(refType, $nc(this->types)->createMethodTypeWithReturn(refType, $(adjustMethodReturnType(var$19, var$20, var$21, var$22, $(refType->getReturnType())))));
		}
		bool isSpeculativeRound = $nc($($nc($nc(this->resultInfo)->checkContext)->deferredAttrContext()))->mode == $DeferredAttr$AttrMode::SPECULATIVE;
		$set(that, type, currentTarget);
		checkReferenceCompatible(that, desc, refType, $nc(this->resultInfo)->checkContext, isSpeculativeRound);
		if (!isSpeculativeRound) {
			checkAccessibleTypes(static_cast<$JCDiagnostic$DiagnosticPosition*>(that), localEnv, $($nc($nc(this->resultInfo)->checkContext)->inferenceContext()), $$new($TypeArray, {
				desc,
				currentTarget
			}));
		}
		$init($Kinds$KindSelector);
		$set(this, result, check(that, currentTarget, $Kinds$KindSelector::VAL, this->resultInfo));
	} catch ($Types$FunctionDescriptorLookupError& ex) {
		$var($JCDiagnostic, cause, ex->getDiagnostic());
		$nc($nc(this->resultInfo)->checkContext)->report(that, cause);
		$set(this, result, ($set($nc(that), type, $nc(this->types)->createErrorType($(pt())))));
		return;
	}
}

$Attr$ResultInfo* Attr::memberReferenceQualifierResult($JCTree$JCMemberReference* tree) {
	$init($MemberReferenceTree$ReferenceMode);
	$init($Kinds$KindSelector);
	$init($Type);
	return $new($Attr$ResultInfo, this, $nc(tree)->getMode() == $MemberReferenceTree$ReferenceMode::INVOKE ? $Kinds$KindSelector::VAL_TYP : $Kinds$KindSelector::TYP, $Type::noType);
}

void Attr::checkReferenceCompatible($JCTree$JCMemberReference* tree, $Type* descriptor, $Type* refType, $Check$CheckContext* checkContext, bool speculativeAttr) {
	$useLocalCurrentObjectStackCache();
	$var($InferenceContext, inferenceContext, $nc(checkContext)->inferenceContext());
	$var($Type, returnType, $nc(inferenceContext)->asUndetVar($($nc(descriptor)->getReturnType())));
	$var($Type, resType, nullptr);
	$init($Attr$13);
	switch ($nc($Attr$13::$SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode)->get($nc(($($nc(tree)->getMode())))->ordinal())) {
	case 1:
		{
			if (!$nc($nc(tree->expr)->type)->isRaw()) {
				$assign(resType, $nc(tree->expr)->type);
				break;
			}
		}
	default:
		{
			$assign(resType, $nc(refType)->getReturnType());
		}
	}
	$var($Type, incompatibleReturnType, resType);
	$init($TypeTag);
	if ($nc(returnType)->hasTag($TypeTag::VOID)) {
		$assign(incompatibleReturnType, nullptr);
	}
	bool var$0 = !$nc(returnType)->hasTag($TypeTag::VOID);
	if (var$0 && !$nc(resType)->hasTag($TypeTag::VOID)) {
		bool var$1 = resType->isErroneous();
		if (var$1 || $$new($Attr$FunctionalReturnContext, this, checkContext)->compatible(resType, returnType, $(checkContext->checkWarner(tree, resType, returnType)))) {
			$assign(incompatibleReturnType, nullptr);
		}
	}
	if (incompatibleReturnType != nullptr) {
		$var($JCDiagnostic$Fragment, msg, $CompilerProperties$Fragments::IncompatibleRetTypeInMref($($CompilerProperties$Fragments::InconvertibleTypes(resType, $($nc(descriptor)->getReturnType())))));
		checkContext->report(tree, $($nc(this->diags)->fragment(msg)));
	} else if (inferenceContext->free(refType)) {
		$var($List, var$2, $List::of(refType));
		inferenceContext->addFreeTypeListener(var$2, static_cast<$Infer$FreeTypeListener*>($$new(Attr$$Lambda$lambda$checkReferenceCompatible$25$27, tree, refType)));
	} else {
		$set(tree, referentType, refType);
	}
	if (!speculativeAttr) {
		$var($List, var$3, $nc(refType)->getThrownTypes());
		if (!checkExConstraints(var$3, $($nc(descriptor)->getThrownTypes()), inferenceContext)) {
			$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($CompilerProperties$Errors::IncompatibleThrownTypesInMref($($nc(refType)->getThrownTypes()))));
		}
	}
}

bool Attr::checkExConstraints($List* thrownByFuncExpr, $List* thrownAtFuncType, $InferenceContext* inferenceContext) {
	$useLocalCurrentObjectStackCache();
	$var($List, nonProperList, $cast($List, $nc($($nc($($nc(thrownAtFuncType)->stream()))->filter(static_cast<$Predicate*>($$new(Attr$$Lambda$lambda$checkExConstraints$26$28, inferenceContext)))))->collect($($List::collector()))));
	$var($List, properList, thrownAtFuncType->diff(nonProperList));
	$var($List, checkedList, $cast($List, $nc($($nc($($nc(thrownByFuncExpr)->stream()))->filter(static_cast<$Predicate*>($$new(Attr$$Lambda$lambda$checkExConstraints$27$29, this)))))->collect($($List::collector()))));
	$var($ListBuffer, uncaughtByProperTypes, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(checkedList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, checked, $cast($Type, i$->next()));
			{
				bool isSubtype = false;
				{
					$var($Iterator, i$, $nc(properList)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Type, proper, $cast($Type, i$->next()));
						{
							if ($nc(this->types)->isSubtype(checked, proper)) {
								isSubtype = true;
								break;
							}
						}
					}
				}
				if (!isSubtype) {
					uncaughtByProperTypes->add(checked);
				}
			}
		}
	}
	bool var$0 = $nc(nonProperList)->isEmpty();
	if (var$0 && !uncaughtByProperTypes->isEmpty()) {
		return false;
	}
	$var($List, nonProperAsUndet, $nc(inferenceContext)->asUndetVars(nonProperList));
	uncaughtByProperTypes->forEach(static_cast<$Consumer*>($$new(Attr$$Lambda$lambda$checkExConstraints$29$30, this, nonProperAsUndet)));
	$nc($($nc($($nc(nonProperAsUndet)->stream()))->filter(static_cast<$Predicate*>($$new(Attr$$Lambda$lambda$checkExConstraints$30$31)))))->forEach(static_cast<$Consumer*>($$new(Attr$$Lambda$lambda$checkExConstraints$31$32)));
	return true;
}

void Attr::setFunctionalInfo($Env* env, $JCTree$JCFunctionalExpression* fExpr, $Type* pt, $Type* descriptorType, $Type* primaryTarget, $Check$CheckContext* checkContext) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc(checkContext)->inferenceContext()))->free(descriptorType)) {
		$var($List, var$0, $List::of(pt, descriptorType));
		$nc($(checkContext->inferenceContext()))->addFreeTypeListener(var$0, static_cast<$Infer$FreeTypeListener*>($$new(Attr$$Lambda$lambda$setFunctionalInfo$32$33, this, env, fExpr, pt, descriptorType, primaryTarget, checkContext)));
	} else {
		$init($TypeTag);
		if ($nc(pt)->hasTag($TypeTag::CLASS)) {
			$set($nc(fExpr), target, primaryTarget);
		}
		$init($DeferredAttr$AttrMode);
		if ($nc($(checkContext->deferredAttrContext()))->mode == $DeferredAttr$AttrMode::CHECK && !$equals(pt, $Type::recoveryType)) {
			try {
				$var($Symbol$ClassSymbol, csym, $nc(this->types)->makeFunctionalInterfaceClass(env, $nc(this->names)->empty, $nc(fExpr)->target, 1024));
				if (csym != nullptr) {
					$nc(this->chk)->checkImplementations($nc(env)->tree, csym, csym);
					try {
						csym->flags_field |= 512;
						$nc(this->types)->findDescriptorType(csym->type);
					} catch ($Types$FunctionDescriptorLookupError& err) {
						$nc($nc(this->resultInfo)->checkContext)->report(fExpr, $($nc(this->diags)->fragment($($CompilerProperties$Fragments::NoSuitableFunctionalIntfInst($nc(fExpr)->target)))));
					}
				}
			} catch ($Types$FunctionDescriptorLookupError& ex) {
				$var($JCDiagnostic, cause, ex->getDiagnostic());
				$nc($nc(this->resultInfo)->checkContext)->report($nc(env)->tree, cause);
			}
		}
	}
}

void Attr::visitParens($JCTree$JCParens* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, owntype, attribTree($nc(tree)->expr, this->env, this->resultInfo));
	$set(this, result, check(tree, owntype, $(pkind()), this->resultInfo));
	$var($Symbol, sym, $TreeInfo::symbol(tree));
	$init($Kinds$KindSelector);
	$init($Kinds$Kind);
	if (sym != nullptr && $nc(sym->kind)->matches($Kinds$KindSelector::TYP_PCK) && sym->kind != $Kinds$Kind::ERR) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($($nc(tree)->pos()), $CompilerProperties$Errors::IllegalParenthesizedExpression);
	}
}

void Attr::visitAssign($JCTree$JCAssign* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, owntype, attribTree($nc(tree)->lhs, $($nc(this->env)->dup(tree)), this->varAssignmentInfo));
	$var($Type, capturedType, capture(owntype));
	attribExpr($nc(tree)->rhs, this->env, owntype);
	$init($Kinds$KindSelector);
	$set(this, result, check(tree, capturedType, $Kinds$KindSelector::VAL, this->resultInfo));
}

void Attr::visitAssignop($JCTree$JCAssignOp* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, owntype, attribTree($nc(tree)->lhs, this->env, this->varAssignmentInfo));
	$var($Type, operand, attribExpr($nc(tree)->rhs, this->env));
	$var($Symbol, operator$, ($set($nc(tree), operator$, $nc(this->operators)->resolveBinary(tree, $($nc($(tree->getTag()))->noAssignOp()), owntype, operand))));
	bool var$0 = !$equals(operator$, $nc(this->operators)->noOpSymbol) && !$nc(owntype)->isErroneous();
	if (var$0 && !$nc(operand)->isErroneous()) {
		$nc(this->chk)->checkDivZero($($nc(tree->rhs)->pos()), operator$, operand);
		$var($JCDiagnostic$DiagnosticPosition, var$1, $nc(tree->rhs)->pos());
		$nc(this->chk)->checkCastable(var$1, $($nc($nc(operator$)->type)->getReturnType()), owntype);
	}
	$init($Kinds$KindSelector);
	$set(this, result, check(tree, owntype, $Kinds$KindSelector::VAL, this->resultInfo));
}

void Attr::visitUnary($JCTree$JCUnary* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, var$0, nullptr);
	if ($nc($($nc(tree)->getTag()))->isIncOrDecUnaryOp()) {
		$assign(var$0, attribTree(tree->arg, this->env, this->varAssignmentInfo));
	} else {
		$var($JCDiagnostic$DiagnosticPosition, var$1, $nc($nc(tree)->arg)->pos());
		$assign(var$0, $nc(this->chk)->checkNonVoid(var$1, $(attribExpr(tree->arg, this->env))));
	}
	$var($Type, argtype, var$0);
	$var($Symbol, operator$, ($set($nc(tree), operator$, $nc(this->operators)->resolveUnary(tree, $(tree->getTag()), argtype))));
	$var($Type, owntype, $nc(this->types)->createErrorType(tree->type));
	if (!$equals(operator$, $nc(this->operators)->noOpSymbol) && !$nc(argtype)->isErroneous()) {
		$assign(owntype, ($nc($(tree->getTag()))->isIncOrDecUnaryOp()) ? $nc(tree->arg)->type : $nc($nc(operator$)->type)->getReturnType());
		int32_t opc = $nc(($cast($Symbol$OperatorSymbol, operator$)))->opcode;
		if (argtype->constValue() != nullptr) {
			$var($Type, ctype, $nc(this->cfolder)->fold1(opc, argtype));
			if (ctype != nullptr) {
				$assign(owntype, $nc(this->cfolder)->coerce(ctype, owntype));
			}
		}
	}
	$init($Kinds$KindSelector);
	$set(this, result, check(tree, owntype, $Kinds$KindSelector::VAL, this->resultInfo));
	$set(this, matchBindings, $nc(this->matchBindingsComputer)->unary(tree, this->matchBindings));
}

void Attr::visitBinary($JCTree$JCBinary* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic$DiagnosticPosition, var$0, $nc($nc(tree)->lhs)->pos());
	$var($Type, left, $nc(this->chk)->checkNonVoid(var$0, $(attribExpr(tree->lhs, this->env))));
	$var($MatchBindingsComputer$MatchBindings, lhsBindings, this->matchBindings);
	$var($List, propagatedBindings, nullptr);
	$init($Attr$13);
	switch ($nc($Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
	case 17:
		{
			$assign(propagatedBindings, $nc(lhsBindings)->bindingsWhenTrue);
			break;
		}
	case 18:
		{
			$assign(propagatedBindings, $nc(lhsBindings)->bindingsWhenFalse);
			break;
		}
	default:
		{
			$assign(propagatedBindings, $List::nil());
			break;
		}
	}
	$var($Env, rhsEnv, bindingEnv(this->env, propagatedBindings));
	$var($Type, right, nullptr);
	{
		$var($Throwable, var$1, nullptr);
		try {
			$var($JCDiagnostic$DiagnosticPosition, var$2, $nc(tree->rhs)->pos());
			$assign(right, $nc(this->chk)->checkNonVoid(var$2, $(attribExpr(tree->rhs, rhsEnv))));
		} catch ($Throwable& var$3) {
			$assign(var$1, var$3);
		} /*finally*/ {
			$nc($nc(($cast($AttrContext, $nc(rhsEnv)->info)))->scope)->leave();
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
	$set(this, matchBindings, $nc(this->matchBindingsComputer)->binary(tree, lhsBindings, this->matchBindings));
	$var($Symbol, operator$, ($set(tree, operator$, $nc(this->operators)->resolveBinary(tree, $(tree->getTag()), left, right))));
	$var($Type, owntype, $nc(this->types)->createErrorType(tree->type));
	bool var$4 = !$equals(operator$, $nc(this->operators)->noOpSymbol) && !$nc(left)->isErroneous();
	if (var$4 && !$nc(right)->isErroneous()) {
		$assign(owntype, $nc($nc(operator$)->type)->getReturnType());
		int32_t opc = $nc(($cast($Symbol$OperatorSymbol, operator$)))->opcode;
		bool var$5 = left->constValue() != nullptr;
		if (var$5 && right->constValue() != nullptr) {
			$var($Type, ctype, $nc(this->cfolder)->fold2(opc, left, right));
			if (ctype != nullptr) {
				$assign(owntype, $nc(this->cfolder)->coerce(ctype, owntype));
			}
		}
		if (opc == $ByteCodes::if_acmpeq || opc == $ByteCodes::if_acmpne) {
			if (!$nc(this->types)->isCastable(left, right, $$new($Warner, $(tree->pos())))) {
				$var($JCDiagnostic$DiagnosticPosition, var$6, tree->pos());
				$nc(this->log)->error(var$6, $($CompilerProperties$Errors::IncomparableTypes(left, right)));
			}
		}
		$nc(this->chk)->checkDivZero($($nc(tree->rhs)->pos()), operator$, right);
	}
	$init($Kinds$KindSelector);
	$set(this, result, check(tree, owntype, $Kinds$KindSelector::VAL, this->resultInfo));
}

void Attr::visitTypeCast($JCTree$JCTypeCast* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, clazztype, attribType($nc(tree)->clazz, this->env));
	$nc(this->chk)->validate($nc(tree)->clazz, this->env, false);
	$var($Env, localEnv, $nc(this->env)->dup(tree));
	$var($Attr$ResultInfo, castInfo, nullptr);
	$var($JCTree$JCExpression, expr, $TreeInfo::skipParens($nc(tree)->expr));
	bool var$0 = this->allowPoly;
	if (var$0) {
		$init($JCTree$Tag);
		bool var$1 = $nc(expr)->hasTag($JCTree$Tag::LAMBDA);
		var$0 = (var$1 || $nc(expr)->hasTag($JCTree$Tag::REFERENCE));
	}
	bool isPoly = var$0;
	if (isPoly) {
		$init($Kinds$KindSelector);
		$assign(castInfo, $new($Attr$ResultInfo, this, $Kinds$KindSelector::VAL, clazztype, static_cast<$Check$CheckContext*>($$new($Attr$10, this, $nc(this->resultInfo)->checkContext))));
	} else {
		$assign(castInfo, this->unknownExprInfo);
	}
	$var($Type, exprtype, attribTree($nc(tree)->expr, localEnv, castInfo));
	$var($Type, owntype, isPoly ? clazztype : $nc(this->chk)->checkCastable($($nc($nc(tree)->expr)->pos()), exprtype, clazztype));
	if ($nc(exprtype)->constValue() != nullptr) {
		$assign(owntype, $nc(this->cfolder)->coerce(exprtype, owntype));
	}
	$init($Kinds$KindSelector);
	$set(this, result, check(tree, $(capture(owntype)), $Kinds$KindSelector::VAL, this->resultInfo));
	if (!isPoly) {
		$nc(this->chk)->checkRedundantCast(localEnv, tree);
	}
}

void Attr::visitTypeTest($JCTree$JCInstanceOf* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic$DiagnosticPosition, var$0, $nc($nc(tree)->expr)->pos());
	$var($Type, exprtype, $nc(this->chk)->checkNullOrRefType(var$0, $(attribExpr(tree->expr, this->env))));
	$var($Type, clazztype, nullptr);
	$var($JCTree, typeTree, nullptr);
	$init($JCTree$Tag);
	bool var$1 = $nc($nc(tree)->pattern)->getTag() == $JCTree$Tag::BINDINGPATTERN;
	if (var$1 || $nc($nc(tree)->pattern)->getTag() == $JCTree$Tag::PARENTHESIZEDPATTERN) {
		attribTree(tree->pattern, this->env, this->unknownExprInfo);
		$assign(clazztype, $nc(tree->pattern)->type);
		bool var$3 = $nc(this->types)->isSubtype(exprtype, clazztype);
		bool var$2 = var$3 && !$nc(exprtype)->isErroneous();
		if (var$2 && !$nc(clazztype)->isErroneous()) {
			$var($JCDiagnostic$DiagnosticPosition, var$4, tree->pos());
			$nc(this->log)->error(var$4, $($CompilerProperties$Errors::InstanceofPatternNoSubtype(exprtype, clazztype)));
		}
		$assign(typeTree, $nc($nc($($TreeInfo::primaryPatternTree($cast($JCTree$JCPattern, tree->pattern))))->var)->vartype);
	} else {
		$assign(clazztype, attribType(tree->pattern, this->env));
		$assign(typeTree, tree->pattern);
		$nc(this->chk)->validate(typeTree, this->env, false);
	}
	$init($TypeTag);
	if (!$nc(clazztype)->hasTag($TypeTag::TYPEVAR)) {
		$assign(clazztype, $nc(this->chk)->checkClassOrArrayType($($nc(typeTree)->pos()), clazztype));
	}
	bool var$5 = !$nc(clazztype)->isErroneous();
	if (var$5 && !$nc(this->types)->isReifiable(clazztype)) {
		bool valid = false;
		if (this->allowReifiableTypesInInstanceof) {
			valid = checkCastablePattern($($nc($nc(tree)->expr)->pos()), exprtype, clazztype);
		} else {
			$init($JCDiagnostic$DiagnosticFlag);
			$var($JCDiagnostic$DiagnosticFlag, var$6, $JCDiagnostic$DiagnosticFlag::SOURCE_LEVEL);
			$var($JCDiagnostic$DiagnosticPosition, var$7, $nc(tree)->pos());
			$init($Source$Feature);
			$nc(this->log)->error(var$6, var$7, $($Source$Feature::REIFIABLE_TYPES_INSTANCEOF->error(this->sourceName)));
			this->allowReifiableTypesInInstanceof = true;
		}
		if (!valid) {
			$assign(clazztype, $nc(this->types)->createErrorType(clazztype));
		}
	}
	$nc(this->chk)->checkCastable($($nc($nc(tree)->expr)->pos()), exprtype, clazztype);
	$init($Kinds$KindSelector);
	$set(this, result, check(tree, $nc(this->syms)->booleanType, $Kinds$KindSelector::VAL, this->resultInfo));
}

bool Attr::checkCastablePattern($JCDiagnostic$DiagnosticPosition* pos, $Type* exprType, $Type* pattType) {
	$useLocalCurrentObjectStackCache();
	$var($Warner, warner, $new($Warner));
	if (!$nc(this->types)->isCastable(exprType, pattType, warner)) {
		$nc($nc(this->chk)->basicHandler)->report(pos, $($nc(this->diags)->fragment($($CompilerProperties$Fragments::InconvertibleTypes(exprType, pattType)))));
		return false;
	} else {
		$init($Lint$LintCategory);
		if (warner->hasLint($Lint$LintCategory::UNCHECKED)) {
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::InstanceofReifiableNotSafe(exprType, pattType)));
			return false;
		} else {
			return true;
		}
	}
}

void Attr::visitBindingPattern($JCTree$JCBindingPattern* tree) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$KindSelector);
	$var($Attr$ResultInfo, varInfo, $new($Attr$ResultInfo, this, $Kinds$KindSelector::TYP, $nc(this->resultInfo)->pt, $nc(this->resultInfo)->checkContext));
	$set($nc(tree), type, ($set($nc(tree->var), type, attribTree($nc(tree->var)->vartype, this->env, varInfo))));
	$var($Symbol$BindingSymbol, v, $new($Symbol$BindingSymbol, $nc($nc(tree->var)->mods)->flags, $nc(tree->var)->name, $nc($nc(tree->var)->vartype)->type, $nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->owner));
	v->pos = tree->pos$;
	$set($nc(tree->var), sym, v);
	if ($nc(this->chk)->checkUnique($($nc(tree->var)->pos()), v, $nc(($cast($AttrContext, $nc(this->env)->info)))->scope)) {
		$nc(this->chk)->checkTransparentVar($($nc(tree->var)->pos()), v, $nc(($cast($AttrContext, $nc(this->env)->info)))->scope);
	}
	$nc(this->annotate)->annotateLater($nc($nc(tree->var)->mods)->annotations, this->env, v, $(tree->pos()));
	$nc(this->annotate)->queueScanTreeAndTypeAnnotate($nc(tree->var)->vartype, this->env, v, $($nc(tree->var)->pos()));
	$nc(this->annotate)->flush();
	$nc(this->chk)->validate($nc(tree->var)->vartype, this->env, true);
	$set(this, result, tree->type);
	$var($List, var$0, $List::of(v));
	$set(this, matchBindings, $new($MatchBindingsComputer$MatchBindings, var$0, $($List::nil())));
}

void Attr::visitParenthesizedPattern($JCTree$JCParenthesizedPattern* tree) {
	attribExpr($nc(tree)->pattern, this->env);
	$set(this, result, ($set($nc(tree), type, $nc(tree->pattern)->type)));
}

void Attr::visitGuardPattern($JCTree$JCGuardPattern* tree) {
	$useLocalCurrentObjectStackCache();
	attribExpr($nc(tree)->patt, this->env);
	$var($MatchBindingsComputer$MatchBindings, afterPattern, this->matchBindings);
	$var($Env, bodyEnv, bindingEnv(this->env, $nc(this->matchBindings)->bindingsWhenTrue));
	{
		$var($Throwable, var$0, nullptr);
		try {
			attribExpr($nc(tree)->expr, bodyEnv, $nc(this->syms)->booleanType);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($nc(($cast($AttrContext, $nc(bodyEnv)->info)))->scope)->leave();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$set(this, result, ($set($nc(tree), type, $nc(tree->patt)->type)));
	$set(this, matchBindings, $nc(this->matchBindingsComputer)->guardedPattern(tree, afterPattern, this->matchBindings));
}

void Attr::visitIndexed($JCTree$JCArrayAccess* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, owntype, $nc(this->types)->createErrorType($nc(tree)->type));
	$var($Type, atype, attribExpr($nc(tree)->indexed, this->env));
	attribExpr($nc(tree)->index, this->env, $nc(this->syms)->intType);
	if ($nc(this->types)->isArray(atype)) {
		$assign(owntype, $nc(this->types)->elemtype(atype));
	} else {
		$init($TypeTag);
		if (!$nc(atype)->hasTag($TypeTag::ERROR)) {
			$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree)->pos());
			$nc(this->log)->error(var$0, $($CompilerProperties$Errors::ArrayReqButFound(atype)));
		}
	}
	$init($Kinds$KindSelector);
	if (!$nc($(pkind()))->contains($Kinds$KindSelector::VAL)) {
		$assign(owntype, capture(owntype));
	}
	$set(this, result, check(tree, owntype, $Kinds$KindSelector::VAR, this->resultInfo));
}

void Attr::visitIdent($JCTree$JCIdent* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, sym, nullptr);
	$init($TypeTag);
	bool var$0 = $nc($(pt()))->hasTag($TypeTag::METHOD);
	if (var$0 || $nc($(pt()))->hasTag($TypeTag::FORALL)) {
		$set($nc($cast($AttrContext, $nc(this->env)->info)), pendingResolutionPhase, nullptr);
		$var($JCDiagnostic$DiagnosticPosition, var$1, $nc(tree)->pos());
		$var($Env, var$2, this->env);
		$var($Name, var$3, tree->name);
		$var($List, var$4, $nc($(pt()))->getParameterTypes());
		$assign(sym, $nc(this->rs)->resolveMethod(var$1, var$2, var$3, var$4, $($nc($(pt()))->getTypeArguments())));
	} else {
		$init($Kinds$Kind);
		if ($nc(tree)->sym != nullptr && $nc(tree->sym)->kind != $Kinds$Kind::VAR) {
			$assign(sym, tree->sym);
		} else {
			$var($JCDiagnostic$DiagnosticPosition, var$5, tree->pos());
			$var($Env, var$6, this->env);
			$var($Name, var$7, tree->name);
			$assign(sym, $nc(this->rs)->resolveIdent(var$5, var$6, var$7, $(pkind())));
		}
	}
	$set($nc(tree), sym, sym);
	$var($Env, symEnv, this->env);
	bool noOuterThisPath = false;
	$init($Kinds$Kind);
	$init($Kinds$KindSelector);
	if ($nc($nc($nc($nc(this->env)->enclClass)->sym)->owner)->kind != $Kinds$Kind::PCK && $nc($nc(sym)->kind)->matches($Kinds$KindSelector::VAL_MTH) && $nc(sym->owner)->kind == $Kinds$Kind::TYP && tree->name != $nc(this->names)->_this && tree->name != $nc(this->names)->_super) {
		while ($nc(symEnv)->outer != nullptr && !sym->isMemberOf($nc(symEnv->enclClass)->sym, this->types)) {
			if (((int64_t)($nc($nc(symEnv->enclClass)->sym)->flags() & (uint64_t)(int64_t)0x00400000)) != 0) {
				noOuterThisPath = false;
			}
			$assign(symEnv, symEnv->outer);
		}
	}
	if ($nc(sym)->kind == $Kinds$Kind::VAR) {
		$var($Symbol$VarSymbol, v, $cast($Symbol$VarSymbol, sym));
		checkInit(tree, this->env, v, false);
		if ($nc($Kinds$KindSelector::ASG)->subset($(pkind()))) {
			checkAssignable($(tree->pos()), v, nullptr, this->env);
		}
	}
	bool var$8 = ($nc(($cast($AttrContext, $nc(symEnv)->info)))->isSelfCall || noOuterThisPath) && $nc($nc(sym)->kind)->matches($Kinds$KindSelector::VAL_MTH) && $nc(sym->owner)->kind == $Kinds$Kind::TYP;
	if (var$8 && ((int64_t)(sym->flags() & (uint64_t)(int64_t)8)) == 0) {
		$var($JCDiagnostic$DiagnosticPosition, var$9, tree->pos());
		$nc(this->chk)->earlyRefError(var$9, sym->kind == $Kinds$Kind::VAR ? sym : $(thisSym($(tree->pos()), this->env)));
	}
	$var($Env, env1, this->env);
	if ($nc(sym)->kind != $Kinds$Kind::ERR && sym->kind != $Kinds$Kind::TYP && sym->owner != nullptr && !$equals(sym->owner, $nc($nc(env1)->enclClass)->sym)) {
		while ($nc(env1)->outer != nullptr && !$nc(this->rs)->isAccessible(this->env, $nc($nc(env1->enclClass)->sym)->type, sym)) {
			$assign(env1, env1->outer);
		}
	}
	if ($nc(($cast($AttrContext, $nc(this->env)->info)))->isSerializable) {
		$nc(this->chk)->checkAccessFromSerializableElement(tree, $nc(($cast($AttrContext, $nc(this->env)->info)))->isSerializableLambda);
	}
	$set(this, result, checkId(tree, $nc($nc($nc(env1)->enclClass)->sym)->type, sym, this->env, this->resultInfo));
}

void Attr::visitSelect($JCTree$JCFieldAccess* tree) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$KindSelector);
	$var($Kinds$KindSelector, skind, $Kinds$KindSelector::NIL);
	if ($nc(tree)->name == $nc(this->names)->_this || $nc(tree)->name == $nc(this->names)->_super || $nc(tree)->name == $nc(this->names)->_class) {
		$assign(skind, $Kinds$KindSelector::TYP);
	} else {
		if ($nc($(pkind()))->contains($Kinds$KindSelector::PCK)) {
			$assign(skind, $Kinds$KindSelector::of($$new($Kinds$KindSelectorArray, {
				skind,
				$Kinds$KindSelector::PCK
			})));
		}
		if ($nc($(pkind()))->contains($Kinds$KindSelector::TYP)) {
			$assign(skind, $Kinds$KindSelector::of($$new($Kinds$KindSelectorArray, {
				skind,
				$Kinds$KindSelector::TYP,
				$Kinds$KindSelector::PCK
			})));
		}
		if ($nc($(pkind()))->contains($Kinds$KindSelector::VAL_MTH)) {
			$assign(skind, $Kinds$KindSelector::of($$new($Kinds$KindSelectorArray, {
				skind,
				$Kinds$KindSelector::VAL,
				$Kinds$KindSelector::TYP
			})));
		}
	}
	$init($Type);
	$var($Type, site, attribTree($nc(tree)->selected, this->env, $$new($Attr$ResultInfo, this, skind, $Type::noType)));
	if (!$nc($(pkind()))->contains($Kinds$KindSelector::TYP_PCK)) {
		$assign(site, capture(site));
	}
	if (skind == $Kinds$KindSelector::TYP) {
		$var($Type, elt, site);
		$init($TypeTag);
		while ($nc(elt)->hasTag($TypeTag::ARRAY)) {
			$assign(elt, $nc(($cast($Type$ArrayType, elt)))->elemtype);
		}
		if ($nc(elt)->hasTag($TypeTag::TYPEVAR)) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($($nc(tree)->pos()), $CompilerProperties$Errors::TypeVarCantBeDeref);
			$set(this, result, ($set($nc(tree), type, $nc(this->types)->createErrorType(tree->name, $nc(site)->tsym, site))));
			$set(tree, sym, $nc(tree->type)->tsym);
			return;
		}
	}
	$var($Symbol, sitesym, $TreeInfo::symbol($nc(tree)->selected));
	bool selectSuperPrev = $nc(($cast($AttrContext, $nc(this->env)->info)))->selectSuper;
	$nc(($cast($AttrContext, $nc(this->env)->info)))->selectSuper = sitesym != nullptr && sitesym->name == $nc(this->names)->_super;
	$set($nc($cast($AttrContext, $nc(this->env)->info)), pendingResolutionPhase, nullptr);
	$var($Symbol, sym, selectSym(tree, sitesym, site, this->env, this->resultInfo));
	$init($Kinds$Kind);
	if ($nc(sym)->kind == $Kinds$Kind::VAR && sym->name != $nc(this->names)->_super && $nc(($cast($AttrContext, $nc(this->env)->info)))->defaultSuperCallSite != nullptr) {
		$var($JCDiagnostic$DiagnosticPosition, var$0, $nc($nc(tree)->selected)->pos());
		$nc(this->log)->error(var$0, $($CompilerProperties$Errors::NotEnclClass($nc(site)->tsym)));
		$assign(sym, $nc(this->syms)->errSymbol);
	}
	bool var$2 = $nc(sym)->exists();
	bool var$1 = var$2 && !isType(sym);
	if (var$1 && $nc($(pkind()))->contains($Kinds$KindSelector::TYP_PCK)) {
		$assign(site, capture(site));
		$assign(sym, selectSym(tree, sitesym, site, this->env, this->resultInfo));
	}
	bool varArgs = $nc(($cast($AttrContext, $nc(this->env)->info)))->lastResolveVarargs();
	$set($nc(tree), sym, sym);
	$init($TypeTag);
	bool var$3 = $nc(site)->hasTag($TypeTag::TYPEVAR);
	if (var$3 && !isType(sym) && $nc(sym)->kind != $Kinds$Kind::ERR) {
		$assign(site, $nc(this->types)->skipTypeVars(site, true));
	}
	if ($nc(sym)->kind == $Kinds$Kind::VAR) {
		$var($Symbol$VarSymbol, v, $cast($Symbol$VarSymbol, sym));
		checkInit(tree, this->env, v, true);
		if ($nc($Kinds$KindSelector::ASG)->subset($(pkind()))) {
			checkAssignable($(tree->pos()), v, tree->selected, this->env);
		}
	}
	bool var$6 = sitesym != nullptr && sitesym->kind == $Kinds$Kind::VAR && $nc(($cast($Symbol$VarSymbol, sitesym)))->isResourceVariable() && $nc(sym)->kind == $Kinds$Kind::MTH;
	bool var$5 = var$6 && $nc($of(sym->name))->equals($nc(this->names)->close);
	bool var$4 = var$5 && sym->overrides($nc(this->syms)->autoCloseableClose, $nc(sitesym->type)->tsym, this->types, true);
	$init($Lint$LintCategory);
	if (var$4 && $nc($nc(($cast($AttrContext, $nc(this->env)->info)))->lint)->isEnabled($Lint$LintCategory::TRY)) {
		$init($CompilerProperties$Warnings);
		$nc(this->log)->warning($Lint$LintCategory::TRY, tree, $CompilerProperties$Warnings::TryExplicitCloseCall);
	}
	bool var$7 = isType(sym);
	if (var$7 && (sitesym == nullptr || !$nc(sitesym->kind)->matches($Kinds$KindSelector::TYP_PCK))) {
		$var($JCTree, var$8, static_cast<$JCTree*>(tree->selected));
		$var($Type, var$9, pt());
		$var($Kinds$KindSelector, var$10, sitesym == nullptr ? $Kinds$KindSelector::VAL : $nc(sitesym->kind)->toSelector());
		$set(tree, type, check(var$8, var$9, var$10, $$new($Attr$ResultInfo, this, $Kinds$KindSelector::TYP_PCK, $(pt()))));
	}
	if (isType(sitesym)) {
		if ($nc(sym)->name == $nc(this->names)->_this) {
			if ($nc(($cast($AttrContext, $nc(this->env)->info)))->isSelfCall && $equals($nc(site)->tsym, $nc($nc(this->env)->enclClass)->sym)) {
				$nc(this->chk)->earlyRefError($(tree->pos()), sym);
			}
		} else {
			if (((int64_t)(sym->flags() & (uint64_t)(int64_t)8)) == 0 && sym->name != $nc(this->names)->_super && (sym->kind == $Kinds$Kind::VAR || sym->kind == $Kinds$Kind::MTH)) {
				$var($Symbol, var$11, static_cast<$Symbol*>($new($Resolve$StaticError, static_cast<$Resolve*>($nc(this->rs)), sym)));
				$nc(this->rs)->accessBase(var$11, $(tree->pos()), site, sym->name, true);
			}
		}
		bool var$12 = !this->allowStaticInterfaceMethods && sitesym->isInterface();
		if (var$12 && $nc(sym)->isStatic() && sym->kind == $Kinds$Kind::MTH) {
			$init($JCDiagnostic$DiagnosticFlag);
			$var($JCDiagnostic$DiagnosticFlag, var$13, $JCDiagnostic$DiagnosticFlag::SOURCE_LEVEL);
			$var($JCDiagnostic$DiagnosticPosition, var$14, tree->pos());
			$init($Source$Feature);
			$nc(this->log)->error(var$13, var$14, $($Source$Feature::STATIC_INTERFACE_METHODS_INVOKE->error(this->sourceName)));
		}
	} else {
		if ($nc(sym)->kind != $Kinds$Kind::ERR && ((int64_t)(sym->flags() & (uint64_t)(int64_t)8)) != 0 && sym->name != $nc(this->names)->_class) {
			$nc(this->chk)->warnStatic(tree, $($CompilerProperties$Warnings::StaticNotQualifiedByType($($nc(sym->kind)->kindName()), sym->owner)));
		}
	}
	if ($nc(($cast($AttrContext, $nc(this->env)->info)))->selectSuper && ((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)8)) == 0) {
		$nc(this->rs)->checkNonAbstract($(tree->pos()), sym);
		if ($nc(site)->isRaw()) {
			$var($Type, site1, $nc(this->types)->asSuper($nc($nc($nc(this->env)->enclClass)->sym)->type, site->tsym));
			if (site1 != nullptr) {
				$assign(site, site1);
			}
		}
	}
	if ($nc(($cast($AttrContext, $nc(this->env)->info)))->isSerializable) {
		$nc(this->chk)->checkAccessFromSerializableElement(tree, $nc(($cast($AttrContext, $nc(this->env)->info)))->isSerializableLambda);
	}
	$nc(($cast($AttrContext, $nc(this->env)->info)))->selectSuper = selectSuperPrev;
	$set(this, result, checkId(tree, site, sym, this->env, this->resultInfo));
}

$Symbol* Attr::selectSym($JCTree$JCFieldAccess* tree, $Symbol* location, $Type* site, $Env* env, $Attr$ResultInfo* resultInfo) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic$DiagnosticPosition, pos, $nc(tree)->pos());
	$var($Name, name, tree->name);
	$init($Attr$13);
	{
		$var($Symbol, sym, nullptr)
		switch ($nc($Attr$13::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(site)->getTag())))->ordinal())) {
		case 1:
			{
				return $nc(this->rs)->accessBase($($nc(this->rs)->findIdentInPackage(pos, env, site->tsym, name, $nc(resultInfo)->pkind)), pos, location, site, name, true);
			}
		case 2:
			{}
		case 3:
			{
				$init($TypeTag);
				bool var$0 = $nc($nc(resultInfo)->pt)->hasTag($TypeTag::METHOD);
				if (var$0 || $nc($nc(resultInfo)->pt)->hasTag($TypeTag::FORALL)) {
					$var($JCDiagnostic$DiagnosticPosition, var$1, pos);
					$var($Env, var$2, env);
					$var($Symbol, var$3, location);
					$var($Type, var$4, site);
					$var($Name, var$5, name);
					$var($List, var$6, $nc(resultInfo->pt)->getParameterTypes());
					return $nc(this->rs)->resolveQualifiedMethod(var$1, var$2, var$3, var$4, var$5, var$6, $($nc(resultInfo->pt)->getTypeArguments()));
				} else if (name == $nc(this->names)->_this || name == $nc(this->names)->_super) {
					return $nc(this->rs)->resolveSelf(pos, env, site->tsym, name);
				} else if (name == $nc(this->names)->_class) {
					return $nc(this->syms)->getClassField(site, this->types);
				} else {
					$var($Symbol, sym, $nc(this->rs)->findIdentInType(pos, env, site, name, resultInfo->pkind));
					$assign(sym, $nc(this->rs)->accessBase(sym, pos, location, site, name, true));
					return sym;
				}
			}
		case 4:
			{
				$throwNew($AssertionError, $of(tree));
			}
		case 5:
			{
				$assign(sym, (site->getUpperBound() != nullptr) ? selectSym(tree, location, $(capture($(site->getUpperBound()))), env, resultInfo) : ($Symbol*)nullptr);
				if (sym == nullptr) {
					$init($CompilerProperties$Errors);
					$nc(this->log)->error(pos, $CompilerProperties$Errors::TypeVarCantBeDeref);
					return $nc(this->syms)->errSymbol;
				} else {
					$var($Symbol, sym2, ((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)$Flags::PRIVATE)) != 0 ? static_cast<$Symbol*>($new($Resolve$AccessError, static_cast<$Resolve*>($nc(this->rs)), env, site, sym)) : sym);
					$nc(this->rs)->accessBase(sym2, pos, location, site, name, true);
					return sym;
				}
			}
		case 6:
			{
				return $nc($($nc(this->types)->createErrorType(name, site->tsym, site)))->tsym;
			}
		default:
			{
				if (name == $nc(this->names)->_class) {
					return $nc(this->syms)->getClassField(site, this->types);
				} else {
					$nc(this->log)->error(pos, $($CompilerProperties$Errors::CantDeref(site)));
					return $nc(this->syms)->errSymbol;
				}
			}
		}
	}
}

$Type* Attr::checkId($JCTree* tree, $Type* site, $Symbol* sym, $Env* env, $Attr$ResultInfo* resultInfo) {
	$init($TypeTag);
	bool var$0 = $nc($nc(resultInfo)->pt)->hasTag($TypeTag::FORALL);
	return (var$0 || $nc($nc(resultInfo)->pt)->hasTag($TypeTag::METHOD)) ? checkMethodIdInternal(tree, site, sym, env, resultInfo) : checkIdInternal(tree, site, sym, $nc(resultInfo)->pt, env, resultInfo);
}

$Type* Attr::checkMethodIdInternal($JCTree* tree, $Type* site, $Symbol* sym, $Env* env, $Attr$ResultInfo* resultInfo) {
	$init($Kinds$KindSelector);
	if ($nc($nc(resultInfo)->pkind)->contains($Kinds$KindSelector::POLY)) {
		return $nc(this->attrRecover)->recoverMethodInvocation(tree, site, sym, env, resultInfo);
	} else {
		return checkIdInternal(tree, site, sym, resultInfo->pt, env, resultInfo);
	}
}

$Type* Attr::checkIdInternal($JCTree* tree, $Type* site, $Symbol* sym, $Type* pt, $Env* env, $Attr$ResultInfo* resultInfo) {
	$useLocalCurrentObjectStackCache();
	if ($nc(pt)->isErroneous()) {
		return $nc(this->types)->createErrorType(site);
	}
	$var($Type, owntype, nullptr);
	$init($Attr$13);
	{
		$var($Symbol$VarSymbol, v, nullptr)
		switch ($nc($Attr$13::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->get($nc(($nc(sym)->kind))->ordinal())) {
		case 8:
			{
				$assign(owntype, sym->type);
				$init($TypeTag);
				if ($nc(owntype)->hasTag($TypeTag::CLASS)) {
					$nc(this->chk)->checkForBadAuxiliaryClassAccess($($nc(tree)->pos()), env, $cast($Symbol$ClassSymbol, sym));
					$var($Type, ownOuter, owntype->getEnclosingType());
					if ($nc($($nc($nc(owntype->tsym)->type)->getTypeArguments()))->nonEmpty()) {
						$assign(owntype, $nc(this->types)->erasure(owntype));
					} else {
						if ($nc(ownOuter)->hasTag($TypeTag::CLASS) && site != ownOuter) {
							$var($Type, normOuter, site);
							if ($nc(normOuter)->hasTag($TypeTag::CLASS)) {
								$assign(normOuter, $nc(this->types)->asEnclosingSuper(site, ownOuter->tsym));
							}
							if (normOuter == nullptr) {
								$assign(normOuter, $nc(this->types)->erasure(ownOuter));
							}
							if (normOuter != ownOuter) {
								$var($Type, var$0, normOuter);
								$var($List, var$1, $List::nil());
								$var($Symbol$TypeSymbol, var$2, owntype->tsym);
								$assign(owntype, $new($Type$ClassType, var$0, var$1, var$2, $(owntype->getMetadata())));
							}
						}
					}
				}
				break;
			}
		case 9:
			{
				$assign(v, $cast($Symbol$VarSymbol, sym));
				$init($TypeTag);
				if ($nc(($cast($AttrContext, $nc(env)->info)))->enclVar != nullptr && $nc($nc(v)->type)->hasTag($TypeTag::NONE)) {
					int32_t var$3 = $TreeInfo::positionFor(v, env->enclClass);
					$init($CompilerProperties$Fragments);
					$nc(this->log)->error(var$3, $($CompilerProperties$Errors::CantInferLocalVarType(v->name, $CompilerProperties$Fragments::LocalSelfRef)));
					return $set(v, type, $nc(this->types)->createErrorType(v->type));
				}
				$init($Kinds$KindSelector);
				$init($Kinds$Kind);
				bool var$5 = $nc($Kinds$KindSelector::ASG)->subset($(pkind())) && $nc($nc(v)->owner)->kind == $Kinds$Kind::TYP;
				bool var$4 = var$5 && ((int64_t)(v->flags() & (uint64_t)(int64_t)8)) == 0;
				if (var$4) {
					$init($TypeTag);
					bool var$6 = $nc(site)->hasTag($TypeTag::CLASS);
					var$4 = (var$6 || $nc(site)->hasTag($TypeTag::TYPEVAR));
				}
				if (var$4) {
					$var($Type, s, $nc(this->types)->asOuterSuper(site, $nc(v)->owner));
					bool var$7 = s != nullptr && s->isRaw();
					if (var$7 && !$nc(this->types)->isSameType($nc(v)->type, $(v->erasure(this->types)))) {
						$var($JCDiagnostic$DiagnosticPosition, var$8, $nc(tree)->pos());
						$nc(this->chk)->warnUnchecked(var$8, $($CompilerProperties$Warnings::UncheckedAssignToVar(v, s)));
					}
				}
				$init($Kinds$Kind);
				$assign(owntype, ($nc(sym->owner)->kind == $Kinds$Kind::TYP && sym->name != $nc(this->names)->_this && sym->name != $nc(this->names)->_super) ? $nc(this->types)->memberType(site, sym) : sym->type);
				bool var$9 = $nc(v)->getConstValue() != nullptr;
				if (var$9 && isStaticReference(tree)) {
					$assign(owntype, $nc(owntype)->constType($(v->getConstValue())));
				}
				$init($Kinds$KindSelector);
				if ($nc(resultInfo)->pkind == $Kinds$KindSelector::VAL) {
					$assign(owntype, capture(owntype));
				}
				break;
			}
		case 10:
			{
				{
					$var($Type, var$10, site);
					$var($Symbol, var$11, sym);
					$var($Attr$ResultInfo, var$12, $new($Attr$ResultInfo, this, $nc(resultInfo)->pkind, $($nc(resultInfo->pt)->getReturnType()), resultInfo->checkContext, resultInfo->checkMode));
					$var($Env, var$13, env);
					$var($List, var$14, $TreeInfo::args($nc(env)->tree));
					$var($List, var$15, $nc($nc(resultInfo)->pt)->getParameterTypes());
					$assign(owntype, checkMethod(var$10, var$11, var$12, var$13, var$14, var$15, $($nc(resultInfo->pt)->getTypeArguments())));
					break;
				}
			}
		case 11:
			{}
		case 12:
			{
				$assign(owntype, sym->type);
				break;
			}
		default:
			{
				$throwNew($AssertionError, $of($$str({"unexpected kind: "_s, sym->kind, " in tree "_s, tree})));
			}
		}
	}
	$init($JCTree$Tag);
	if (sym->name != $nc(this->names)->init || $nc(tree)->hasTag($JCTree$Tag::REFERENCE)) {
		$nc(this->chk)->checkDeprecated($(tree->pos()), $nc($nc(($cast($AttrContext, $nc(env)->info)))->scope)->owner, sym);
		$nc(this->chk)->checkSunAPI($(tree->pos()), sym);
		$nc(this->chk)->checkProfile($(tree->pos()), sym);
		$nc(this->chk)->checkPreview($(tree->pos()), $nc($nc(($cast($AttrContext, $nc(env)->info)))->scope)->owner, sym);
	}
	return check(tree, owntype, $($nc(sym->kind)->toSelector()), resultInfo);
}

void Attr::checkInit($JCTree* tree, $Env* env, $Symbol$VarSymbol* v, bool onlyWarning) {
	$useLocalCurrentObjectStackCache();
	$var($Env, initEnv, enclosingInitEnv(env));
	$init($Kinds$Kind);
	bool var$1 = initEnv != nullptr && ($equals($nc(($cast($AttrContext, initEnv->info)))->enclVar, v) || $nc(v)->pos > $nc(tree)->pos$) && $nc(v->owner)->kind == $Kinds$Kind::TYP && $equals(v->owner, $nc($nc($nc(($cast($AttrContext, $nc(env)->info)))->scope)->owner)->enclClass());
	if (var$1) {
		bool var$2 = (((int64_t)(v->flags() & (uint64_t)(int64_t)8)) != 0);
		var$1 = var$2 == $Resolve::isStatic(env);
	}
	bool var$0 = var$1;
	if (var$0) {
		$init($JCTree$Tag);
		bool var$3 = !$nc(env->tree)->hasTag($JCTree$Tag::ASSIGN);
		var$0 = (var$3 || !$equals($TreeInfo::skipParens($nc(($cast($JCTree$JCAssign, env->tree)))->lhs), tree));
	}
	if (var$0) {
		if (!onlyWarning || isStaticEnumField(v)) {
			$init($CompilerProperties$Errors);
			$var($JCDiagnostic$Error, errkey, ($equals($nc(($cast($AttrContext, $nc(initEnv)->info)))->enclVar, v)) ? $CompilerProperties$Errors::IllegalSelfRef : $CompilerProperties$Errors::IllegalForwardRef);
			$nc(this->log)->error($($nc(tree)->pos()), errkey);
		} else if (this->useBeforeDeclarationWarning) {
			$var($JCDiagnostic$Warning, warnkey, ($equals($nc(($cast($AttrContext, $nc(initEnv)->info)))->enclVar, v)) ? $CompilerProperties$Warnings::SelfRef(v) : $CompilerProperties$Warnings::ForwardRef(v));
			$nc(this->log)->warning($($nc(tree)->pos()), warnkey);
		}
	}
	$nc(v)->getConstValue();
	checkEnumInitializer(tree, env, v);
}

$Env* Attr::enclosingInitEnv($Env* env$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Env, env, env$renamed);
	while (true) {
		$init($Attr$13);
		{
			$var($JCTree$JCVariableDecl, vdecl, nullptr)
			switch ($nc($Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc($nc(env)->tree)->getTag())))->ordinal())) {
			case 19:
				{
					$assign(vdecl, $cast($JCTree$JCVariableDecl, env->tree));
					$init($Kinds$Kind);
					if ($nc($nc($nc(vdecl)->sym)->owner)->kind == $Kinds$Kind::TYP) {
						return env;
					}
					break;
				}
			case 20:
				{
					$init($JCTree$Tag);
					if ($nc($nc(env->next)->tree)->hasTag($JCTree$Tag::CLASSDEF)) {
						return env;
					}
					break;
				}
			case 15:
				{}
			case 16:
				{}
			case 21:
				{
					return nullptr;
				}
			}
		}
		$Assert::checkNonNull(env->next);
		$assign(env, env->next);
	}
}

void Attr::checkEnumInitializer($JCTree* tree, $Env* env, $Symbol$VarSymbol* v) {
	$useLocalCurrentObjectStackCache();
	if (isStaticEnumField(v)) {
		$var($Symbol$ClassSymbol, enclClass, $nc($nc($nc(($cast($AttrContext, $nc(env)->info)))->scope)->owner)->enclClass());
		if (enclClass == nullptr || $nc(enclClass)->owner == nullptr) {
			return;
		}
		if (!$equals($nc(v)->owner, enclClass) && !$nc(this->types)->isSubtype($nc(enclClass)->type, $nc(v->owner)->type)) {
			return;
		}
		if (!$Resolve::isInitializer(env)) {
			return;
		}
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($($nc(tree)->pos()), $CompilerProperties$Errors::IllegalEnumStaticRef);
	}
}

bool Attr::isStaticEnumField($Symbol$VarSymbol* v) {
	bool var$1 = $Flags::isEnum($nc(v)->owner);
	bool var$0 = var$1 && $Flags::isStatic(v);
	return var$0 && !$Flags::isConstant(v) && $nc(v)->name != $nc(this->names)->_class;
}

$Type* Attr::checkMethod($Type* site, $Symbol* sym, $Attr$ResultInfo* resultInfo, $Env* env, $List* argtrees, $List* argtypes$renamed, $List* typeargtypes) {
	$useLocalCurrentObjectStackCache();
	$var($List, argtypes, argtypes$renamed);
	bool var$0 = ((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)8)) == 0;
	if (var$0) {
		$init($TypeTag);
		bool var$1 = $nc(site)->hasTag($TypeTag::CLASS);
		var$0 = (var$1 || $nc(site)->hasTag($TypeTag::TYPEVAR));
	}
	if (var$0) {
		$var($Type, s, $nc(this->types)->asOuterSuper(site, $nc(sym)->owner));
		bool var$2 = s != nullptr && s->isRaw();
		if (var$2) {
			$var($List, var$3, $nc($nc(sym)->type)->getParameterTypes());
			var$2 = !$nc(this->types)->isSameTypes(var$3, $($nc($(sym->erasure(this->types)))->getParameterTypes()));
		}
		if (var$2) {
			$var($JCDiagnostic$DiagnosticPosition, var$4, $nc($nc(env)->tree)->pos());
			$nc(this->chk)->warnUnchecked(var$4, $($CompilerProperties$Warnings::UncheckedCallMbrOfRawType(sym, s)));
		}
	}
	if ($nc(($cast($AttrContext, $nc(env)->info)))->defaultSuperCallSite != nullptr) {
		{
			$var($Iterator, i$, $nc($($nc($($nc(this->types)->interfaces($nc(env->enclClass)->type)))->prepend($($nc(this->types)->supertype(($nc(env->enclClass)->type))))))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, sup, $cast($Type, i$->next()));
				{
					bool var$5 = !$nc($nc(sup)->tsym)->isSubClass($($nc(sym)->enclClass()), this->types);
					if (var$5 || $nc(this->types)->isSameType(sup, $nc(($cast($AttrContext, env->info)))->defaultSuperCallSite)) {
						continue;
					}
					$var($List, icand_sup, $nc(this->types)->interfaceCandidates(sup, $cast($Symbol$MethodSymbol, sym)));
					bool var$6 = $nc(icand_sup)->nonEmpty() && !$equals(icand_sup->head, sym);
					if (var$6 && $nc(($cast($Symbol$MethodSymbol, icand_sup->head)))->overrides(sym, $($nc(($cast($Symbol$MethodSymbol, icand_sup->head)))->enclClass()), this->types, true)) {
						$var($JCDiagnostic$DiagnosticPosition, var$7, $nc(env->tree)->pos());
						$nc(this->log)->error(var$7, $($CompilerProperties$Errors::IllegalDefaultSuperCall($nc(($cast($AttrContext, env->info)))->defaultSuperCallSite, $($CompilerProperties$Fragments::OverriddenDefault(sym, sup)))));
						break;
					}
				}
			}
		}
		$set($nc($cast($AttrContext, env->info)), defaultSuperCallSite, nullptr);
	}
	bool var$9 = $nc(sym)->isStatic();
	bool var$8 = var$9 && $nc(site)->isInterface();
	$init($JCTree$Tag);
	if (var$8 && $nc($nc(env)->tree)->hasTag($JCTree$Tag::APPLY)) {
		$var($JCTree$JCMethodInvocation, app, $cast($JCTree$JCMethodInvocation, env->tree));
		bool var$10 = $nc($nc(app)->meth)->hasTag($JCTree$Tag::SELECT);
		if (var$10 && !$TreeInfo::isStaticSelector($nc(($cast($JCTree$JCFieldAccess, app->meth)))->selected, this->names)) {
			$var($JCDiagnostic$DiagnosticPosition, var$11, $nc(env->tree)->pos());
			$nc(this->log)->error(var$11, $($CompilerProperties$Errors::IllegalStaticIntfMethCall(site)));
		}
	}
	$var($Warner, noteWarner, $new($Warner));
	try {
		$var($Type, owntype, $nc(this->rs)->checkMethod(env, site, sym, resultInfo, argtypes, typeargtypes, noteWarner));
		$init($DeferredAttr$AttrMode);
		$var($DeferredAttr$DeferredTypeMap, checkDeferredMap, $new($DeferredAttr$DeferredTypeMap, static_cast<$DeferredAttr*>($nc(this->deferredAttr)), $DeferredAttr$AttrMode::CHECK, sym, $nc(($cast($AttrContext, $nc(env)->info)))->pendingResolutionPhase));
		$assign(argtypes, $nc(argtypes)->map(checkDeferredMap));
		$init($Lint$LintCategory);
		if (noteWarner->hasNonSilentLint($Lint$LintCategory::UNCHECKED)) {
			$var($JCDiagnostic$DiagnosticPosition, var$12, $nc($nc(env)->tree)->pos());
			$var($Kinds$KindName, var$13, $Kinds::kindName(sym));
			$var($Name, var$14, $nc(sym)->name);
			$var($Object, var$15, $nc(this->rs)->methodArguments($($nc(sym->type)->getParameterTypes())));
			$var($Object, var$16, $nc(this->rs)->methodArguments($(argtypes->map(checkDeferredMap))));
			$var($Kinds$KindName, var$17, $Kinds::kindName($(sym->location())));
			$nc(this->chk)->warnUnchecked(var$12, $($CompilerProperties$Warnings::UncheckedMethInvocationApplied(var$13, var$14, var$15, var$16, var$17, $(sym->location()))));
			$init($Infer);
			$init($TypeTag);
			bool var$18 = $nc(resultInfo)->pt != $Infer::anyPoly || !$nc(owntype)->hasTag($TypeTag::METHOD);
			if (var$18 || !$nc(owntype)->isPartial()) {
				$var($List, var$19, owntype->getParameterTypes());
				$var($Type, var$20, $nc(this->types)->erasure($(owntype->getReturnType())));
				$assign(owntype, $new($Type$MethodType, var$19, var$20, $($nc(this->types)->erasure($(owntype->getThrownTypes()))), $nc(this->syms)->methodClass));
			}
		}
		$init($TypeTag);
		bool var$21 = $nc($nc(sym)->type)->hasTag($TypeTag::FORALL);
		$init($JCTree$JCPolyExpression$PolyKind);
		$JCTree$JCPolyExpression$PolyKind* pkind = (var$21 && $nc($($nc(sym->type)->getReturnType()))->containsAny($nc(($cast($Type$ForAll, sym->type)))->tvars)) ? $JCTree$JCPolyExpression$PolyKind::POLY : $JCTree$JCPolyExpression$PolyKind::STANDALONE;
		$TreeInfo::setPolyKind($nc(env)->tree, pkind);
		$var($Type, var$22, nullptr);
		$init($Infer);
		if ($nc(resultInfo)->pt == $Infer::anyPoly) {
			$assign(var$22, owntype);
		} else {
			$var($Type, var$23, owntype);
			$var($Symbol, var$24, sym);
			$var($Env, var$25, env);
			$var($List, var$26, argtrees);
			$var($List, var$27, argtypes);
			bool var$28 = $nc(($cast($AttrContext, $nc(env)->info)))->lastResolveVarargs();
			$assign(var$22, $nc(this->chk)->checkMethod(var$23, var$24, var$25, var$26, var$27, var$28, $($nc(resultInfo->checkContext)->inferenceContext())));
		}
		return var$22;
	} catch ($Infer$InferenceException& ex) {
		$var($JCDiagnostic$DiagnosticPosition, var$29, $nc($nc(env)->tree)->pos());
		$nc($nc(resultInfo)->checkContext)->report(var$29, $(ex->getDiagnostic()));
		return $nc(this->types)->createErrorType(site);
	} catch ($Resolve$InapplicableMethodException& ex) {
		$var($JCDiagnostic, diag, ex->getDiagnostic());
		$var($Resolve$InapplicableSymbolError, errSym, $new($Attr$11, this, static_cast<$Resolve*>($nc(this->rs)), nullptr, sym, diag));
		$init($DeferredAttr$AttrMode);
		$var($List, argtypes2, $nc(argtypes)->map($$new($Resolve$ResolveDeferredRecoveryMap, static_cast<$Resolve*>($nc(this->rs)), $DeferredAttr$AttrMode::CHECK, sym, $nc(($cast($AttrContext, $nc(env)->info)))->pendingResolutionPhase)));
		$init($JCDiagnostic$DiagnosticType);
		$var($JCDiagnostic, errDiag, errSym->getDiagnostic($JCDiagnostic$DiagnosticType::ERROR, $nc(env)->tree, sym, site, $nc(sym)->name, argtypes2, typeargtypes));
		$nc(this->log)->report(errDiag);
		return $nc(this->types)->createErrorType(site);
	}
	$shouldNotReachHere();
}

void Attr::visitLiteral($JCTree$JCLiteral* tree) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$KindSelector);
	$set(this, result, check(tree, $($nc($(litType($nc(tree)->typetag)))->constType($nc(tree)->value)), $Kinds$KindSelector::VAL, this->resultInfo));
}

$Type* Attr::litType($TypeTag* tag) {
	$init($TypeTag);
	return (tag == $TypeTag::CLASS) ? $nc(this->syms)->stringType : $nc($nc(this->syms)->typeOfTag)->get($nc(tag)->ordinal());
}

void Attr::visitTypeIdent($JCTree$JCPrimitiveTypeTree* tree) {
	$init($Kinds$KindSelector);
	$set(this, result, check(tree, $nc($nc(this->syms)->typeOfTag)->get($nc($nc(tree)->typetag)->ordinal()), $Kinds$KindSelector::TYP, this->resultInfo));
}

void Attr::visitTypeArray($JCTree$JCArrayTypeTree* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, etype, attribType(static_cast<$JCTree*>($nc(tree)->elemtype), this->env));
	$var($Type, type, $new($Type$ArrayType, etype, $nc(this->syms)->arrayClass));
	$init($Kinds$KindSelector);
	$set(this, result, check(tree, type, $Kinds$KindSelector::TYP, this->resultInfo));
}

void Attr::visitTypeApply($JCTree$JCTypeApply* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, owntype, $nc(this->types)->createErrorType($nc(tree)->type));
	$var($JCDiagnostic$DiagnosticPosition, var$0, $nc($nc(tree)->clazz)->pos());
	$var($Type, clazztype, $nc(this->chk)->checkClassType(var$0, $(attribType(static_cast<$JCTree*>(tree->clazz), this->env))));
	$var($List, actuals, attribTypes($nc(tree)->arguments, this->env));
	$init($TypeTag);
	if ($nc(clazztype)->hasTag($TypeTag::CLASS)) {
		$var($List, formals, $nc($nc(clazztype->tsym)->type)->getTypeArguments());
		if ($nc(actuals)->isEmpty()) {
			$assign(actuals, formals);
		}
		int32_t var$1 = $nc(actuals)->length();
		if (var$1 == $nc(formals)->length()) {
			$var($List, a, actuals);
			$var($List, f, formals);
			while ($nc(a)->nonEmpty()) {
				$set(a, head, $nc(($cast($Type, a->head)))->withTypeVar($cast($Type, $nc(f)->head)));
				$assign(a, a->tail);
				$assign(f, $nc(f)->tail);
			}
			$var($Type, clazzOuter, clazztype->getEnclosingType());
			if ($nc(clazzOuter)->hasTag($TypeTag::CLASS)) {
				$var($Type, site, nullptr);
				$var($JCTree$JCExpression, clazz, $TreeInfo::typeIn($nc(tree)->clazz));
				$init($JCTree$Tag);
				if ($nc(clazz)->hasTag($JCTree$Tag::IDENT)) {
					$assign(site, $nc($nc($nc(this->env)->enclClass)->sym)->type);
				} else {
					if (clazz->hasTag($JCTree$Tag::SELECT)) {
						$assign(site, $nc($nc(($cast($JCTree$JCFieldAccess, clazz)))->selected)->type);
					} else {
						$throwNew($AssertionError, $of($$str({""_s, tree})));
					}
				}
				if (clazzOuter->hasTag($TypeTag::CLASS) && site != clazzOuter) {
					if ($nc(site)->hasTag($TypeTag::CLASS)) {
						$assign(site, $nc(this->types)->asOuterSuper(site, clazzOuter->tsym));
					}
					if (site == nullptr) {
						$assign(site, $nc(this->types)->erasure(clazzOuter));
					}
					$assign(clazzOuter, site);
				}
			}
			$assign(owntype, $new($Type$ClassType, clazzOuter, actuals, clazztype->tsym, $(clazztype->getMetadata())));
		} else {
			if (formals->length() != 0) {
				$var($JCDiagnostic$DiagnosticPosition, var$2, $nc(tree)->pos());
				$nc(this->log)->error(var$2, $($CompilerProperties$Errors::WrongNumberTypeArgs($($Integer::toString(formals->length())))));
			} else {
				$var($JCDiagnostic$DiagnosticPosition, var$3, $nc(tree)->pos());
				$nc(this->log)->error(var$3, $($CompilerProperties$Errors::TypeDoesntTakeParams(clazztype->tsym)));
			}
			$assign(owntype, $nc(this->types)->createErrorType($nc(tree)->type));
		}
	}
	$init($Kinds$KindSelector);
	$set(this, result, check(tree, owntype, $Kinds$KindSelector::TYP, this->resultInfo));
}

void Attr::visitTypeUnion($JCTree$JCTypeUnion* tree) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, multicatchTypes, $new($ListBuffer));
	$var($ListBuffer, all_multicatchTypes, nullptr);
	{
		$var($Iterator, i$, $nc($nc(tree)->alternatives)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCExpression, typeTree, $cast($JCTree$JCExpression, i$->next()));
			{
				$var($Type, ctype, attribType(static_cast<$JCTree*>(typeTree), this->env));
				$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(typeTree)->pos());
				$assign(ctype, $nc(this->chk)->checkType(var$0, $($nc(this->chk)->checkClassType($(typeTree->pos()), ctype)), $nc(this->syms)->throwableType));
				if (!$nc(ctype)->isErroneous()) {
					if ($nc(this->chk)->intersects(ctype, $(multicatchTypes->toList()))) {
						{
							$var($Iterator, i$, multicatchTypes->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($Type, t, $cast($Type, i$->next()));
								{
									bool sub = $nc(this->types)->isSubtype(ctype, t);
									bool sup = $nc(this->types)->isSubtype(t, ctype);
									if (sub || sup) {
										$var($Type, a, sub ? ctype : t);
										$var($Type, b, sub ? t : ctype);
										$var($JCDiagnostic$DiagnosticPosition, var$1, $nc(typeTree)->pos());
										$nc(this->log)->error(var$1, $($CompilerProperties$Errors::MulticatchTypesMustBeDisjoint(a, b)));
									}
								}
							}
						}
					}
					multicatchTypes->append(ctype);
					if (all_multicatchTypes != nullptr) {
						all_multicatchTypes->append(ctype);
					}
				} else {
					if (all_multicatchTypes == nullptr) {
						$assign(all_multicatchTypes, $new($ListBuffer));
						all_multicatchTypes->appendList(multicatchTypes);
					}
					$nc(all_multicatchTypes)->append(ctype);
				}
			}
		}
	}
	$var($JCTree, var$2, static_cast<$JCTree*>(tree));
	$var($Type, var$3, $nc(this->types)->lub($(multicatchTypes->toList())));
	$init($Kinds$KindSelector);
	$var($Kinds$KindSelector, var$4, $Kinds$KindSelector::TYP);
	$init($Attr$CheckMode);
	$var($Type, t, check(var$2, var$3, var$4, $($nc(this->resultInfo)->dup($Attr$CheckMode::NO_TREE_UPDATE))));
	$init($TypeTag);
	if ($nc(t)->hasTag($TypeTag::CLASS)) {
		$var($List, alternatives, $nc(((all_multicatchTypes == nullptr) ? multicatchTypes : all_multicatchTypes))->toList());
		$assign(t, $new($Type$UnionClassType, $cast($Type$ClassType, t), alternatives));
	}
	$set(tree, type, ($set(this, result, t)));
}

void Attr::visitTypeIntersection($JCTree$JCTypeIntersection* tree) {
	attribTypes($nc(tree)->bounds, this->env);
	$set($nc(tree), type, ($set(this, result, checkIntersection(tree, tree->bounds))));
}

void Attr::visitTypeParameter($JCTree$JCTypeParameter* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type$TypeVar, typeVar, $cast($Type$TypeVar, $nc(tree)->type));
	if (tree->annotations != nullptr && $nc(tree->annotations)->nonEmpty()) {
		$nc(this->annotate)->annotateTypeParameterSecondStage(tree, tree->annotations);
	}
	if (!$nc($($nc(typeVar)->getUpperBound()))->isErroneous()) {
		typeVar->setUpperBound($(checkIntersection(tree, tree->bounds)));
	}
}

$Type* Attr::checkIntersection($JCTree* tree, $List* bounds$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, bounds, bounds$renamed);
	$var($Set, boundSet, $new($HashSet));
	if ($nc(bounds)->nonEmpty()) {
		$set($nc($cast($JCTree$JCExpression, bounds->head)), type, checkBase($nc(($cast($JCTree$JCExpression, bounds->head)))->type, $cast($JCTree, bounds->head), this->env, false, false, false));
		boundSet->add($($nc(this->types)->erasure($nc(($cast($JCTree$JCExpression, bounds->head)))->type)));
		if ($nc($nc(($cast($JCTree$JCExpression, bounds->head)))->type)->isErroneous()) {
			return $nc(($cast($JCTree$JCExpression, bounds->head)))->type;
		} else {
			$init($TypeTag);
			if ($nc($nc(($cast($JCTree$JCExpression, bounds->head)))->type)->hasTag($TypeTag::TYPEVAR)) {
				if ($nc(bounds->tail)->nonEmpty()) {
					$init($CompilerProperties$Errors);
					$nc(this->log)->error($($nc(($cast($JCTree$JCExpression, $nc(bounds->tail)->head)))->pos()), $CompilerProperties$Errors::TypeVarMayNotBeFollowedByOtherBounds);
					return $nc(($cast($JCTree$JCExpression, bounds->head)))->type;
				}
			} else {
				{
					$var($Iterator, i$, $nc(bounds->tail)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($JCTree$JCExpression, bound, $cast($JCTree$JCExpression, i$->next()));
						{
							$set($nc(bound), type, checkBase(bound->type, bound, this->env, false, true, false));
							if ($nc(bound->type)->isErroneous()) {
								$assign(bounds, $List::of(bound));
							} else {
								if ($nc(bound->type)->hasTag($TypeTag::CLASS)) {
									$var($JCDiagnostic$DiagnosticPosition, var$0, bound->pos());
									$nc(this->chk)->checkNotRepeated(var$0, $($nc(this->types)->erasure(bound->type)), boundSet);
								}
							}
						}
					}
				}
			}
		}
	}
	if ($nc(bounds)->length() == 0) {
		return $nc(this->syms)->objectType;
	} else if (bounds->length() == 1) {
		return $nc(($cast($JCTree$JCExpression, bounds->head)))->type;
	} else {
		$var($Type, owntype, $nc(this->types)->makeIntersectionType($($TreeInfo::types(bounds))));
		$var($JCTree$JCExpression, extending, nullptr);
		$var($List, implementing, nullptr);
		if (!$nc($nc(($cast($JCTree$JCExpression, bounds->head)))->type)->isInterface()) {
			$assign(extending, $cast($JCTree$JCExpression, bounds->head));
			$assign(implementing, bounds->tail);
		} else {
			$assign(extending, nullptr);
			$assign(implementing, bounds);
		}
		$var($JCTree$JCModifiers, var$1, $nc(this->make)->Modifiers(1 | 1024));
		$var($Name, var$2, $nc(this->names)->empty);
		$var($List, var$3, $List::nil());
		$var($JCTree$JCExpression, var$4, extending);
		$var($List, var$5, implementing);
		$var($JCTree$JCClassDecl, cd, $nc($($nc(this->make)->at(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree))))->ClassDef(var$1, var$2, var$3, var$4, var$5, $($List::nil())));
		$var($Symbol$ClassSymbol, c, $cast($Symbol$ClassSymbol, $nc(owntype)->tsym));
		$Assert::check(((int64_t)($nc(c)->flags() & (uint64_t)(int64_t)0x01000000)) != 0);
		$set($nc(cd), sym, c);
		$set($nc(c), sourcefile, $nc($nc(this->env)->toplevel)->sourcefile);
		c->flags_field |= 0x10000000;
		$var($Env, cenv, $nc(this->enter)->classEnv(cd, this->env));
		$nc(this->typeEnvs)->put(c, cenv);
		attribClass(c);
		return owntype;
	}
}

void Attr::visitWildcard($JCTree$JCWildcard* tree) {
	$useLocalCurrentObjectStackCache();
	$init($BoundKind);
	$var($Type, type, ($nc($nc(tree)->kind)->kind == $BoundKind::UNBOUND) ? $nc(this->syms)->objectType : attribType($nc(tree)->inner, this->env));
	$init($Kinds$KindSelector);
	$set(this, result, check(tree, $$new($Type$WildcardType, $($nc(this->chk)->checkRefType($($nc(tree)->pos()), type)), $nc($nc(tree)->kind)->kind, $nc(this->syms)->boundClass), $Kinds$KindSelector::TYP, this->resultInfo));
}

void Attr::visitAnnotation($JCTree$JCAnnotation* tree) {
	$Assert::error("should be handled in annotate"_s);
}

void Attr::visitAnnotatedType($JCTree$JCAnnotatedType* tree) {
	$useLocalCurrentObjectStackCache();
	attribAnnotationTypes($nc(tree)->annotations, this->env);
	$var($Type, underlyingType, attribType(static_cast<$JCTree*>($nc(tree)->underlyingType), this->env));
	$init($TypeMetadata$Annotations);
	$var($Type, annotatedType, $nc(underlyingType)->annotatedType($TypeMetadata$Annotations::TO_BE_SET));
	if (!$nc(($cast($AttrContext, $nc(this->env)->info)))->isNewClass) {
		$nc(this->annotate)->annotateTypeSecondStage(tree, $nc(tree)->annotations, annotatedType);
	}
	$set(this, result, ($set($nc(tree), type, annotatedType)));
}

void Attr::visitErroneous($JCTree$JCErroneous* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tree)->errs != nullptr) {
		$var($Env, errEnv, $nc(this->env)->dup($nc(this->env)->tree));
		$set($nc($cast($AttrContext, $nc(errEnv)->info)), returnResult, this->unknownExprInfo);
		{
			$var($Iterator, i$, $nc(tree->errs)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree, err, $cast($JCTree, i$->next()));
				$init($Kinds$KindSelector);
				attribTree(err, errEnv, $$new($Attr$ResultInfo, this, $Kinds$KindSelector::ERR, $(pt())));
			}
		}
	}
	$set(this, result, ($set($nc(tree), type, $nc(this->syms)->errType)));
}

void Attr::visitTree($JCTree* tree) {
	$throwNew($AssertionError);
}

void Attr::attrib($Env* env) {
	$useLocalCurrentObjectStackCache();
	$init($Attr$13);
	switch ($nc($Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc($nc(env)->tree)->getTag())))->ordinal())) {
	case 22:
		{
			attribModule($($nc(env->tree)->pos()), $nc(($cast($JCTree$JCModuleDecl, env->tree)))->sym);
			break;
		}
	case 21:
		{
			attribTopLevel(env);
			break;
		}
	case 23:
		{
			attribPackage($($nc(env->tree)->pos()), $nc(($cast($JCTree$JCPackageDecl, env->tree)))->packge);
			break;
		}
	default:
		{
			attribClass($($nc(env->tree)->pos()), $nc(env->enclClass)->sym);
		}
	}
}

void Attr::attribTopLevel($Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCCompilationUnit, toplevel, $nc(env)->toplevel);
	try {
		$nc(this->annotate)->flush();
	} catch ($Symbol$CompletionFailure& ex) {
		$nc(this->chk)->completionError($($nc(toplevel)->pos()), ex);
	}
}

void Attr::attribPackage($JCDiagnostic$DiagnosticPosition* pos, $Symbol$PackageSymbol* p) {
	try {
		$nc(this->annotate)->flush();
		attribPackage(p);
	} catch ($Symbol$CompletionFailure& ex) {
		$nc(this->chk)->completionError(pos, ex);
	}
}

void Attr::attribPackage($Symbol$PackageSymbol* p) {
	$useLocalCurrentObjectStackCache();
	$var($Env, env, $nc(this->typeEnvs)->get(p));
	$nc(this->chk)->checkDeprecatedAnnotation($($nc($nc(($cast($JCTree$JCPackageDecl, $nc(env)->tree)))->pid)->pos()), p);
}

void Attr::attribModule($JCDiagnostic$DiagnosticPosition* pos, $Symbol$ModuleSymbol* m) {
	try {
		$nc(this->annotate)->flush();
		attribModule(m);
	} catch ($Symbol$CompletionFailure& ex) {
		$nc(this->chk)->completionError(pos, ex);
	}
}

void Attr::attribModule($Symbol$ModuleSymbol* m) {
	$var($Env, env, $nc($nc(this->enter)->typeEnvs)->get(m));
	attribStat($nc(env)->tree, env);
}

void Attr::attribClass($JCDiagnostic$DiagnosticPosition* pos, $Symbol$ClassSymbol* c) {
	try {
		$nc(this->annotate)->flush();
		attribClass(c);
	} catch ($Symbol$CompletionFailure& ex) {
		$nc(this->chk)->completionError(pos, ex);
	}
}

void Attr::attribClass($Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if ($nc($nc(c)->type)->hasTag($TypeTag::ERROR)) {
		return;
	}
	$nc(this->chk)->checkNonCyclic(($JCDiagnostic$DiagnosticPosition*)nullptr, $nc(c)->type);
	$var($Type, st, $nc(this->types)->supertype($nc(c)->type));
	if (((int64_t)($nc(c)->flags_field & (uint64_t)(int64_t)$Flags::COMPOUND)) == 0 && ((int64_t)(c->flags_field & (uint64_t)(int64_t)$Flags::SUPER_OWNER_ATTRIBUTED)) == 0) {
		if ($nc(st)->hasTag($TypeTag::CLASS)) {
			attribClass($cast($Symbol$ClassSymbol, st->tsym));
		}
		$init($Kinds$Kind);
		if ($nc(c->owner)->kind == $Kinds$Kind::TYP && $nc($nc(c->owner)->type)->hasTag($TypeTag::CLASS)) {
			attribClass($cast($Symbol$ClassSymbol, c->owner));
		}
		c->flags_field |= $Flags::SUPER_OWNER_ATTRIBUTED;
	}
	if (((int64_t)($nc(c)->flags_field & (uint64_t)(int64_t)0x10000000)) != 0) {
		c->flags_field &= (uint64_t)~0x10000000;
		$var($Env, env, $nc(this->typeEnvs)->get(c));
		bool var$1 = c->isSealed();
		bool var$0 = var$1 && !c->isEnum() && !c->isPermittedExplicit;
		if (var$0 && $nc(c->permitted)->isEmpty()) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($($TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>(c), $nc(env)->tree)), $CompilerProperties$Errors::SealedClassMustHaveSubclasses);
		}
		if (c->isSealed()) {
			$var($Set, permittedTypes, $new($HashSet));
			bool var$2 = $nc($(c->packge()))->modle == $nc(this->syms)->unnamedModule;
			bool sealedInUnnamed = var$2 || $nc($(c->packge()))->modle == $nc(this->syms)->noModule;
			{
				$var($Iterator, i$, $nc(c->permitted)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Symbol, subTypeSym, $cast($Symbol, i$->next()));
					{
						bool isTypeVar = false;
						if ($nc($nc(subTypeSym)->type)->getTag() == $TypeTag::TYPEVAR) {
							isTypeVar = true;
							$var($JCDiagnostic$DiagnosticPosition, var$3, $TreeInfo::diagnosticPositionFor(subTypeSym, $nc(env)->tree));
							$nc(this->log)->error(var$3, $($CompilerProperties$Errors::InvalidPermitsClause($($CompilerProperties$Fragments::IsATypeVariable(subTypeSym->type)))));
						}
						bool var$4 = $nc(subTypeSym)->isAnonymous();
						if (var$4 && !c->isEnum()) {
							$var($JCDiagnostic$DiagnosticPosition, var$5, $TreeInfo::diagnosticPositionFor(subTypeSym, $nc(env)->tree));
							$init($CompilerProperties$Fragments);
							$nc(this->log)->error(var$5, $($CompilerProperties$Errors::LocalClassesCantExtendSealed($CompilerProperties$Fragments::Anonymous)));
						}
						if (permittedTypes->contains(subTypeSym)) {
							$var($JCDiagnostic$DiagnosticPosition, pos, $cast($JCDiagnostic$DiagnosticPosition, $nc(($cast($List, $($nc($($nc($($nc($($nc($nc($nc(env)->enclClass)->permitting)->stream()))->filter(static_cast<$Predicate*>($$new(Attr$$Lambda$lambda$attribClass$33$34, subTypeSym)))))->limit(2)))->collect($($List::collector()))))))->get(1)));
							$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidPermitsClause($($CompilerProperties$Fragments::IsDuplicated($nc(subTypeSym)->type)))));
						} else {
							permittedTypes->add(subTypeSym);
						}
						if (sealedInUnnamed) {
							if ($nc(subTypeSym)->packge() != c->packge()) {
								$var($JCDiagnostic$DiagnosticPosition, var$6, $TreeInfo::diagnosticPositionFor(subTypeSym, $nc(env)->tree));
								$nc(this->log)->error(var$6, $($CompilerProperties$Errors::ClassInUnnamedModuleCantExtendSealedInDiffPackage(c)));
							}
						} else if ($nc($($nc(subTypeSym)->packge()))->modle != $nc($(c->packge()))->modle) {
							$var($JCDiagnostic$DiagnosticPosition, var$7, $TreeInfo::diagnosticPositionFor(subTypeSym, $nc(env)->tree));
							$nc(this->log)->error(var$7, $($CompilerProperties$Errors::ClassInModuleCantExtendSealedInDiffModule(c, $nc($(c->packge()))->modle)));
						}
						if ($equals(subTypeSym, $nc(c->type)->tsym) || $nc(this->types)->isSuperType($nc(subTypeSym)->type, c->type)) {
							$var($JCDiagnostic$DiagnosticPosition, var$8, $TreeInfo::diagnosticPositionFor(subTypeSym, $nc(($cast($JCTree$JCClassDecl, $nc(env)->tree)))->permitting));
							$init($CompilerProperties$Fragments);
							$nc(this->log)->error(var$8, $($CompilerProperties$Errors::InvalidPermitsClause($equals(subTypeSym, $nc(c->type)->tsym) ? $CompilerProperties$Fragments::MustNotBeSameClass : $($CompilerProperties$Fragments::MustNotBeSupertype($nc(subTypeSym)->type)))));
						} else if (!isTypeVar) {
							bool thisIsASuper = $nc($($nc($($nc(this->types)->directSupertypes($nc(subTypeSym)->type)))->stream()))->anyMatch(static_cast<$Predicate*>($$new(Attr$$Lambda$lambda$attribClass$34$35, c)));
							if (!thisIsASuper) {
								$var($JCDiagnostic$DiagnosticPosition, var$9, $TreeInfo::diagnosticPositionFor(subTypeSym, $nc(env)->tree));
								$nc(this->log)->error(var$9, $($CompilerProperties$Errors::InvalidPermitsClause($($CompilerProperties$Fragments::DoesntExtendSealed($nc(subTypeSym)->type)))));
							}
						}
					}
				}
			}
		}
		$var($List, sealedSupers, $cast($List, $nc($($nc($($nc($($nc($($nc(this->types)->directSupertypes(c->type)))->stream()))->filter(static_cast<$Predicate*>($$new(Attr$$Lambda$lambda$attribClass$35$36)))))->map(static_cast<$Function*>($$new(Attr$$Lambda$lambda$attribClass$36$37)))))->collect($($List::collector()))));
		if ($nc(sealedSupers)->isEmpty()) {
			if (((int64_t)(c->flags_field & (uint64_t)$Flags::NON_SEALED)) != 0) {
				bool hasErrorSuper = $nc($($nc($($nc(this->types)->directSupertypes(c->type)))->stream()))->anyMatch(static_cast<$Predicate*>($$new(Attr$$Lambda$lambda$attribClass$37$38)));
				if (!hasErrorSuper) {
					$var($JCDiagnostic$DiagnosticPosition, var$10, $TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>(c), $nc(env)->tree));
					$nc(this->log)->error(var$10, $($CompilerProperties$Errors::NonSealedWithNoSealedSupertype(c)));
				}
			}
		} else {
			bool var$11 = c->isDirectlyOrIndirectlyLocal();
			if (var$11 && !c->isEnum()) {
				$var($JCDiagnostic$DiagnosticPosition, var$12, $TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>(c), $nc(env)->tree));
				$init($CompilerProperties$Fragments);
				$nc(this->log)->error(var$12, $($CompilerProperties$Errors::LocalClassesCantExtendSealed(c->isAnonymous() ? $CompilerProperties$Fragments::Anonymous : $CompilerProperties$Fragments::Local)));
			}
			if (!$nc(c->type)->isCompound()) {
				{
					$var($Iterator, i$, sealedSupers->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol$ClassSymbol, supertypeSym, $cast($Symbol$ClassSymbol, i$->next()));
						{
							if (!$nc($nc(supertypeSym)->permitted)->contains($nc(c->type)->tsym)) {
								$var($JCDiagnostic$DiagnosticPosition, var$13, $TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>($nc(c->type)->tsym), $nc(env)->tree));
								$nc(this->log)->error(var$13, $($CompilerProperties$Errors::CantInheritFromSealed(supertypeSym)));
							}
						}
					}
				}
				bool var$15 = !c->isNonSealed();
				bool var$14 = var$15 && !c->isFinal();
				if (var$14 && !c->isSealed()) {
					$var($JCDiagnostic$DiagnosticPosition, var$16, $TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>(c), $nc(env)->tree));
					$init($CompilerProperties$Errors);
					$nc(this->log)->error(var$16, c->isInterface() ? $CompilerProperties$Errors::NonSealedOrSealedExpected : $CompilerProperties$Errors::NonSealedSealedOrFinalExpected);
				}
			}
		}
		$var($Env, lintEnv, env);
		while ($nc(($cast($AttrContext, $nc(lintEnv)->info)))->lint == nullptr) {
			$assign(lintEnv, lintEnv->next);
		}
		$set($nc($cast($AttrContext, $nc(env)->info)), lint, $nc($nc(($cast($AttrContext, $nc(lintEnv)->info)))->lint)->augment(static_cast<$Symbol*>(c)));
		$var($Lint, prevLint, $nc(this->chk)->setLint($nc(($cast($AttrContext, env->info)))->lint));
		$var($JavaFileObject, prev, $nc(this->log)->useSource(c->sourcefile));
		$var($Attr$ResultInfo, prevReturnRes, $nc(($cast($AttrContext, env->info)))->returnResult);
		{
			$var($Throwable, var$17, nullptr);
			try {
				$nc(this->deferredLintHandler)->flush(env->tree);
				$set($nc($cast($AttrContext, env->info)), returnResult, nullptr);
				if ($nc(st)->tsym == $nc(this->syms)->enumSym && (((int64_t)(c->flags_field & (uint64_t)(int64_t)($Flags::ENUM | $Flags::COMPOUND))) == 0)) {
					$init($CompilerProperties$Errors);
					$nc(this->log)->error($($nc(env->tree)->pos()), $CompilerProperties$Errors::EnumNoSubclassing);
				}
				if ($nc(st)->tsym != nullptr && (((int64_t)($nc(st->tsym)->flags_field & (uint64_t)(int64_t)$Flags::ENUM)) != 0) && (((int64_t)(c->flags_field & (uint64_t)(int64_t)($Flags::ENUM | $Flags::COMPOUND))) == 0)) {
					$init($CompilerProperties$Errors);
					$nc(this->log)->error($($nc(env->tree)->pos()), $CompilerProperties$Errors::EnumTypesNotExtensible);
				}
				if (isSerializable(c->type)) {
					$nc(($cast($AttrContext, env->info)))->isSerializable = true;
				}
				attribClassBody(env, c);
				$nc(this->chk)->checkDeprecatedAnnotation($($nc(env->tree)->pos()), c);
				$nc(this->chk)->checkClassOverrideEqualsAndHashIfNeeded($($nc(env->tree)->pos()), c);
				$nc(this->chk)->checkFunctionalInterface($cast($JCTree$JCClassDecl, env->tree), c);
				$nc(this->chk)->checkLeaksNotAccessible(env, $cast($JCTree$JCClassDecl, env->tree));
			} catch ($Throwable& var$18) {
				$assign(var$17, var$18);
			} /*finally*/ {
				$set($nc($cast($AttrContext, env->info)), returnResult, prevReturnRes);
				$nc(this->log)->useSource(prev);
				$nc(this->chk)->setLint(prevLint);
			}
			if (var$17 != nullptr) {
				$throw(var$17);
			}
		}
	}
}

void Attr::visitImport($JCTree$JCImport* tree) {
}

void Attr::visitModuleDef($JCTree$JCModuleDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$nc($nc(tree)->sym)->completeUsesProvides();
	$var($Symbol$ModuleSymbol, msym, tree->sym);
	$var($Lint, lint, $set($nc($cast($AttrContext, $nc($nc(this->env)->outer)->info)), lint, $nc($nc(($cast($AttrContext, $nc($nc(this->env)->outer)->info)))->lint)->augment(static_cast<$Symbol*>(msym))));
	$var($Lint, prevLint, $nc(this->chk)->setLint(lint));
	$nc(this->chk)->checkModuleName(tree);
	$nc(this->chk)->checkDeprecatedAnnotation(tree, msym);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->deferredLintHandler)->flush($(tree->pos()));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->chk)->setLint(prevLint);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Attr::attribClassBody($Env* env, $Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCClassDecl, tree, $cast($JCTree$JCClassDecl, $nc(env)->tree));
	$Assert::check(c == $nc(tree)->sym);
	attribStats($nc(tree)->typarams, env);
	if (!$nc(c)->isAnonymous()) {
		$nc(this->chk)->validate($nc(tree)->typarams, env);
		$nc(this->chk)->validate(static_cast<$JCTree*>($nc(tree)->extending), env);
		$nc(this->chk)->validate($nc(tree)->implementing, env);
	}
	$nc(c)->markAbstractIfNeeded(this->types);
	if (((int64_t)(c->flags() & (uint64_t)(int64_t)(1024 | 512))) == 0) {
		$nc(this->chk)->checkAllDefined($($nc(tree)->pos()), c);
	}
	if (((int64_t)(c->flags() & (uint64_t)(int64_t)8192)) != 0) {
		if ($nc($nc(tree)->implementing)->nonEmpty()) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($($nc(($cast($JCTree$JCExpression, $nc(tree->implementing)->head)))->pos()), $CompilerProperties$Errors::CantExtendIntfAnnotation);
		}
		if ($nc($nc(tree)->typarams)->nonEmpty()) {
			$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(($cast($JCTree$JCTypeParameter, $nc(tree->typarams)->head)))->pos());
			$nc(this->log)->error(var$0, $($CompilerProperties$Errors::IntfAnnotationCantHaveTypeParams(c)));
		}
		$var($Attribute$Compound, repeatable, $nc($(c->getAnnotationTypeMetadata()))->getRepeatable());
		if (repeatable != nullptr) {
			$var($JCDiagnostic$DiagnosticPosition, cbPos, getDiagnosticPosition(tree, repeatable->type));
			$Assert::checkNonNull(cbPos);
			$nc(this->chk)->validateRepeatable(c, repeatable, cbPos);
		}
	} else {
		$nc(this->chk)->checkCompatibleSupertypes($($nc(tree)->pos()), c->type);
		if (this->allowDefaultMethods) {
			$nc(this->chk)->checkDefaultMethodClashes($($nc(tree)->pos()), c->type);
		}
	}
	$nc(this->chk)->checkClassBounds($($nc(tree)->pos()), c->type);
	$set($nc(tree), type, c->type);
	{
		$var($List, l, tree->typarams);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$Assert::checkNonNull($($nc($nc(($cast($AttrContext, env->info)))->scope)->findFirst($nc(($cast($JCTree$JCTypeParameter, l->head)))->name)));
		}
	}
	bool var$1 = !$nc($($nc(c->type)->allparams()))->isEmpty();
	if (var$1 && $nc(this->types)->isSubtype(c->type, $nc(this->syms)->throwableType)) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($($nc(tree->extending)->pos()), $CompilerProperties$Errors::GenericThrowable);
	}
	$nc(this->chk)->checkImplementations(tree);
	checkAutoCloseable($(tree->pos()), env, c->type);
	{
		$var($List, l, tree->defs);
		for (; l->nonEmpty(); $assign(l, l->tail)) {
			attribStat($cast($JCTree, $nc(l)->head), env);
			$init($Kinds$Kind);
			bool var$2 = !this->allowRecords && $nc(c->owner)->kind != $Kinds$Kind::PCK && (((int64_t)(c->flags() & (uint64_t)(int64_t)8)) == 0 || c->name == $nc(this->names)->empty);
			if (var$2 && ((int64_t)($TreeInfo::flags($cast($JCTree, $nc(l)->head)) & (uint64_t)(int64_t)(8 | 512))) != 0) {
				$var($Symbol, sym, nullptr);
				$init($JCTree$Tag);
				if ($nc(($cast($JCTree, $nc(l)->head)))->hasTag($JCTree$Tag::VARDEF)) {
					$assign(sym, $nc(($cast($JCTree$JCVariableDecl, l->head)))->sym);
				}
				if (sym == nullptr || $nc(sym)->kind != $Kinds$Kind::VAR || $nc(($cast($Symbol$VarSymbol, sym)))->getConstValue() == nullptr) {
					$var($JCDiagnostic$DiagnosticPosition, var$3, $nc(($cast($JCTree, $nc(l)->head)))->pos());
					$nc(this->log)->error(var$3, $($CompilerProperties$Errors::IclsCantHaveStaticDecl(c)));
				}
			}
		}
	}
	$nc(this->chk)->checkCyclicConstructors(tree);
	$nc(this->chk)->checkNonCyclicElements(tree);
	$init($Lint$LintCategory);
	bool var$6 = $nc($nc(($cast($AttrContext, env->info)))->lint)->isEnabled($Lint$LintCategory::SERIAL);
	bool var$5 = var$6 && isSerializable(c->type);
	bool var$4 = var$5 && ((int64_t)(c->flags() & (uint64_t)(int64_t)($Flags::ENUM | $Flags::INTERFACE))) == 0;
	if (var$4 && !c->isAnonymous()) {
		checkSerialVersionUID(tree, c, env);
	}
	if (this->allowTypeAnnos) {
		$nc(this->typeAnnotations)->organizeTypeAnnotationsBodies(tree);
		validateTypeAnnotations(tree, false);
	}
}

$JCDiagnostic$DiagnosticPosition* Attr::getDiagnosticPosition($JCTree$JCClassDecl* tree, $Type* t) {
	{
		$var($List, al, $nc($nc(tree)->mods)->annotations);
		for (; !$nc(al)->isEmpty(); $assign(al, $nc(al)->tail)) {
			if ($nc(this->types)->isSameType($nc($nc(($cast($JCTree$JCAnnotation, al->head)))->annotationType)->type, t)) {
				return $nc(($cast($JCTree$JCAnnotation, al->head)))->pos();
			}
		}
	}
	return nullptr;
}

bool Attr::isSerializable($Type* t) {
	try {
		$nc($nc(this->syms)->serializableType)->complete();
	} catch ($Symbol$CompletionFailure& e) {
		return false;
	}
	return $nc(this->types)->isSubtype(t, $nc(this->syms)->serializableType);
}

void Attr::checkSerialVersionUID($JCTree$JCClassDecl* tree, $Symbol$ClassSymbol* c, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$VarSymbol, svuid, nullptr);
	{
		$var($Iterator, i$, $nc($($nc($($nc(c)->members()))->getSymbolsByName($nc(this->names)->serialVersionUID)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				$init($Kinds$Kind);
				if ($nc(sym)->kind == $Kinds$Kind::VAR) {
					$assign(svuid, $cast($Symbol$VarSymbol, sym));
					break;
				}
			}
		}
	}
	if (svuid == nullptr) {
		if (!c->isRecord()) {
			$init($Lint$LintCategory);
			$var($Lint$LintCategory, var$0, $Lint$LintCategory::SERIAL);
			$var($JCDiagnostic$DiagnosticPosition, var$1, $nc(tree)->pos());
			$nc(this->log)->warning(var$0, var$1, $($CompilerProperties$Warnings::MissingSVUID(c)));
		}
		return;
	}
	$var($Lint, lint, $nc($nc(($cast($AttrContext, $nc(env)->info)))->lint)->augment(static_cast<$Symbol*>(svuid)));
	$init($Lint$LintCategory);
	if ($nc(lint)->isSuppressed($Lint$LintCategory::SERIAL)) {
		return;
	}
	if (((int64_t)($nc(svuid)->flags() & (uint64_t)(int64_t)(8 | 16))) != (8 | 16)) {
		$var($Lint$LintCategory, var$2, $Lint$LintCategory::SERIAL);
		$var($JCDiagnostic$DiagnosticPosition, var$3, $TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>(svuid), static_cast<$JCTree*>(tree)));
		$nc(this->log)->warning(var$2, var$3, $($CompilerProperties$Warnings::ImproperSVUID(c)));
	} else {
		$init($TypeTag);
		if (!$nc(svuid->type)->hasTag($TypeTag::LONG)) {
			$var($Lint$LintCategory, var$4, $Lint$LintCategory::SERIAL);
			$var($JCDiagnostic$DiagnosticPosition, var$5, $TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>(svuid), static_cast<$JCTree*>(tree)));
			$nc(this->log)->warning(var$4, var$5, $($CompilerProperties$Warnings::LongSVUID(c)));
		} else if (svuid->getConstValue() == nullptr) {
			$var($Lint$LintCategory, var$6, $Lint$LintCategory::SERIAL);
			$var($JCDiagnostic$DiagnosticPosition, var$7, $TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>(svuid), static_cast<$JCTree*>(tree)));
			$nc(this->log)->warning(var$6, var$7, $($CompilerProperties$Warnings::ConstantSVUID(c)));
		}
	}
}

$Type* Attr::capture($Type* type) {
	return $nc(this->types)->capture(type);
}

void Attr::setSyntheticVariableType($JCTree$JCVariableDecl* tree, $Type* type) {
	$useLocalCurrentObjectStackCache();
	if ($nc(type)->isErroneous()) {
		$set($nc(tree), vartype, $nc($($nc(this->make)->at($Position::NOPOS)))->Erroneous());
	} else {
		$set($nc(tree), vartype, $nc($($nc(this->make)->at($Position::NOPOS)))->Type(type));
	}
}

void Attr::validateTypeAnnotations($JCTree* tree, bool sigOnly) {
	$nc(tree)->accept($$new($Attr$TypeAnnotationsValidator, this, sigOnly));
}

void Attr::postAttr($JCTree* tree) {
	$$new($Attr$PostAttrAnalyzer, this)->scan(tree);
}

void Attr::setPackageSymbols($JCTree$JCExpression* pid, $Symbol* pkg) {
	$$new($Attr$12, this, pkg)->scan(static_cast<$JCTree*>(pid));
}

bool Attr::lambda$attribClass$37($Type* s) {
	$init(Attr);
	$init($Kinds$Kind);
	return $nc($nc(s)->tsym)->kind == $Kinds$Kind::ERR;
}

$Symbol$ClassSymbol* Attr::lambda$attribClass$36($Type* s) {
	$init(Attr);
	return $cast($Symbol$ClassSymbol, $nc(s)->tsym);
}

bool Attr::lambda$attribClass$35($Type* s) {
	$init(Attr);
	return $nc($nc(s)->tsym)->isSealed();
}

bool Attr::lambda$attribClass$34($Symbol$ClassSymbol* c, $Type* d) {
	$init(Attr);
	return $equals($nc(d)->tsym, c);
}

bool Attr::lambda$attribClass$33($Symbol* subTypeSym, $JCTree$JCExpression* permittedExpr) {
	$init(Attr);
	return $TreeInfo::diagnosticPositionFor(subTypeSym, permittedExpr, true) != nullptr;
}

void Attr::lambda$setFunctionalInfo$32($Env* env, $JCTree$JCFunctionalExpression* fExpr, $Type* pt, $Type* descriptorType, $Type* primaryTarget, $Check$CheckContext* checkContext, $InferenceContext* inferenceContext) {
	$useLocalCurrentObjectStackCache();
	$var($Env, var$0, env);
	$var($JCTree$JCFunctionalExpression, var$1, fExpr);
	$var($Type, var$2, pt);
	$var($Type, var$3, $nc(inferenceContext)->asInstType(descriptorType));
	setFunctionalInfo(var$0, var$1, var$2, var$3, $(inferenceContext->asInstType(primaryTarget)), checkContext);
}

void Attr::lambda$checkExConstraints$31($Type* t) {
	$init(Attr);
	$nc(($cast($Type$UndetVar, t)))->setThrow();
}

bool Attr::lambda$checkExConstraints$30($Type* t) {
	$init(Attr);
	$init($TypeTag);
	return $nc(t)->hasTag($TypeTag::UNDETVAR);
}

void Attr::lambda$checkExConstraints$29($List* nonProperAsUndet, $Type* checkedEx) {
	$nc(nonProperAsUndet)->forEach(static_cast<$Consumer*>($$new(Attr$$Lambda$lambda$checkExConstraints$28$39, this, checkedEx)));
}

void Attr::lambda$checkExConstraints$28($Type* checkedEx, $Type* nonProper) {
	$nc(this->types)->isSubtype(checkedEx, nonProper);
}

bool Attr::lambda$checkExConstraints$27($Type* e) {
	return $nc(this->chk)->isChecked(e);
}

bool Attr::lambda$checkExConstraints$26($InferenceContext* inferenceContext, $Type* e) {
	$init(Attr);
	return $nc(inferenceContext)->free(e);
}

void Attr::lambda$checkReferenceCompatible$25($JCTree$JCMemberReference* tree, $Type* refType, $InferenceContext* instantiatedContext) {
	$init(Attr);
	$set($nc(tree), referentType, $nc(instantiatedContext)->asInstType(refType));
}

void Attr::lambda$checkAccessibleTypes$24($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $List* ts, $InferenceContext* solvedContext) {
	checkAccessibleTypes(pos, env, solvedContext, $($nc(solvedContext)->asInstTypes(ts)));
}

void Attr::lambda$visitAnonymousClassDefinition$23($JCTree$JCNewClass* tree, $JCTree$JCExpression* clazz, $Attr$ResultInfo* resultInfoForClassDefinition, $JCTree$JCClassDecl* cdef, $Env* localEnv, $List* argtypes, $List* typeargtypes, $Kinds$KindSelector* pkind, $InferenceContext* instantiatedContext) {
	$useLocalCurrentObjectStackCache();
	$set($nc(tree), constructorType, $nc(instantiatedContext)->asInstType(tree->constructorType));
	$set($nc(tree->clazz), type, ($set($nc(clazz), type, instantiatedContext->asInstType(clazz->type))));
	$var($Attr$ResultInfo, prevResult, this->resultInfo);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, resultInfo, resultInfoForClassDefinition);
			visitAnonymousClassDefinition(tree, clazz, clazz->type, cdef, localEnv, argtypes, typeargtypes, pkind);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, resultInfo, prevResult);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Attr::lambda$visitNewClass$22($JCTree$JCNewClass* tree, $InferenceContext* instantiatedContext) {
	$init(Attr);
	$set($nc(tree), constructorType, $nc(instantiatedContext)->asInstType(tree->constructorType));
}

bool Attr::lambda$condType$21($Type* t) {
	$init(Attr);
	$init($TypeTag);
	return !$nc(t)->hasTag($TypeTag::BOT);
}

$Type* Attr::lambda$condType$20($Type* t) {
	$init(Attr);
	return $nc(t)->baseType();
}

$Type* Attr::lambda$condType$19($Iterator* posIt, $Type* t) {
	return $nc(this->chk)->checkNonVoid($cast($JCDiagnostic$DiagnosticPosition, $($nc(posIt)->next())), t);
}

bool Attr::lambda$condType$18($Type* type, $Type* t) {
	return $nc(this->types)->isAssignable(t, type);
}

$Type* Attr::lambda$condType$16($Type* t) {
	return $nc(t)->isPrimitive() ? $nc($($nc(this->types)->boxedClass(t)))->type : t;
}

bool Attr::lambda$condType$15($Type* candidate, $Type* t) {
	return $nc(this->types)->isSubtype(t, candidate);
}

bool Attr::lambda$condType$14($Type* type, $Type* t) {
	$init($TypeTag);
	bool var$0 = $nc(t)->hasTag($TypeTag::INT);
	return var$0 && $nc(this->types)->isAssignable(t, type);
}

bool Attr::lambda$condType$13($Type* type, $Type* t) {
	$init(Attr);
	return t != type;
}

bool Attr::lambda$condType$12($Type* t) {
	$init(Attr);
	return $nc(t)->isPrimitive();
}

$Type* Attr::lambda$condType$11($Type* t) {
	return $nc(t)->isPrimitive() ? t : $nc(this->types)->unboxedType(t);
}

bool Attr::lambda$condType$10($Type* first, $Type* t) {
	return $nc(this->types)->isSameType(first, t);
}

bool Attr::lambda$handleSwitch$9($JCTree$JCCaseLabel* l) {
	$init(Attr);
	return $nc(l)->isPattern();
}

$Stream* Attr::lambda$handleSwitch$8($JCTree$JCCase* c) {
	$init(Attr);
	return $nc($nc(c)->labels)->stream();
}

void Attr::lambda$visitSwitchExpression$7($Attr$ResultInfo* condInfo, $JCTree$JCSwitchExpression* tree, $ListBuffer* caseTypePositions, $ListBuffer* caseTypes, $JCTree$JCCase* c, $Env* caseEnv) {
	$set($nc($cast($AttrContext, $nc(caseEnv)->info)), yieldResult, condInfo);
	attribStats($nc(c)->stats, caseEnv);
	$$new($Attr$1, this, tree, caseTypePositions, caseTypes)->scan($nc(c)->stats);
}

void Attr::lambda$visitSwitch$6($JCTree$JCCase* c, $Env* caseEnv) {
	attribStats($nc(c)->stats, caseEnv);
}

bool Attr::lambda$isNonArgsMethodInObject$5($Symbol* s) {
	$init(Attr);
	$init($Kinds$Kind);
	return $nc(s)->kind == $Kinds$Kind::MTH;
}

$Name* Attr::lambda$visitMethodDef$4($Symbol$VarSymbol* p) {
	$init(Attr);
	return $nc(p)->name;
}

$Name* Attr::lambda$visitMethodDef$3($JCTree$JCVariableDecl* vd) {
	$init(Attr);
	return $nc($nc(vd)->sym)->name;
}

$Type* Attr::lambda$visitMethodDef$2($JCTree$JCVariableDecl* vd) {
	$init(Attr);
	return $nc($nc(vd)->sym)->type;
}

bool Attr::lambda$visitMethodDef$1($JCTree$JCMethodDecl* tree, $Symbol$RecordComponent* rc) {
	$init(Attr);
	return $nc(rc)->accessor == $nc(tree)->sym && ((int64_t)($nc(rc->accessor)->flags_field & (uint64_t)(int64_t)0x01000000)) == 0;
}

void Attr::lambda$check$0($Attr$ResultInfo* resultInfo, $InferenceContext* inferenceContext, $JCTree* tree, $Type* found, $Kinds$KindSelector* ownkind, $InferenceContext* instantiatedContext) {
	$useLocalCurrentObjectStackCache();
	$var($Attr$ResultInfo, pendingResult, $nc(resultInfo)->dup($($nc(inferenceContext)->asInstType(resultInfo->pt))));
	check(tree, $($nc(inferenceContext)->asInstType(found)), ownkind, pendingResult);
}

void clinit$Attr($Class* class$) {
	$assignStatic(Attr::attrKey, $new($Context$Key));
	$init($TypeTag);
	$assignStatic(Attr::primitiveTags, $new($TypeTagArray, {
		$TypeTag::BYTE,
		$TypeTag::CHAR,
		$TypeTag::SHORT,
		$TypeTag::INT,
		$TypeTag::LONG,
		$TypeTag::FLOAT,
		$TypeTag::DOUBLE,
		$TypeTag::BOOLEAN
	}));
}

Attr::Attr() {
}

$Class* Attr::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Attr$$Lambda$lambda$check$0::classInfo$.name)) {
			return Attr$$Lambda$lambda$check$0::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$leave$1::classInfo$.name)) {
			return Attr$$Lambda$leave$1::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$visitMethodDef$1$2::classInfo$.name)) {
			return Attr$$Lambda$lambda$visitMethodDef$1$2::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$visitMethodDef$2$3::classInfo$.name)) {
			return Attr$$Lambda$lambda$visitMethodDef$2$3::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$visitMethodDef$3$4::classInfo$.name)) {
			return Attr$$Lambda$lambda$visitMethodDef$3$4::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$visitMethodDef$4$5::classInfo$.name)) {
			return Attr$$Lambda$lambda$visitMethodDef$4$5::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$isNonArgsMethodInObject$5$6::classInfo$.name)) {
			return Attr$$Lambda$lambda$isNonArgsMethodInObject$5$6::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$enter$7::classInfo$.name)) {
			return Attr$$Lambda$enter$7::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$preserveBinding$8::classInfo$.name)) {
			return Attr$$Lambda$preserveBinding$8::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$visitSwitch$6$9::classInfo$.name)) {
			return Attr$$Lambda$lambda$visitSwitch$6$9::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$visitSwitchExpression$7$10::classInfo$.name)) {
			return Attr$$Lambda$lambda$visitSwitchExpression$7$10::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$handleSwitch$8$11::classInfo$.name)) {
			return Attr$$Lambda$lambda$handleSwitch$8$11::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$handleSwitch$9$12::classInfo$.name)) {
			return Attr$$Lambda$lambda$handleSwitch$9$12::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$condType$10$13::classInfo$.name)) {
			return Attr$$Lambda$lambda$condType$10$13::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$condType$11$14::classInfo$.name)) {
			return Attr$$Lambda$lambda$condType$11$14::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$condType$12$15::classInfo$.name)) {
			return Attr$$Lambda$lambda$condType$12$15::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$condType$13$16::classInfo$.name)) {
			return Attr$$Lambda$lambda$condType$13$16::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$condType$14$17::classInfo$.name)) {
			return Attr$$Lambda$lambda$condType$14$17::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$condType$15$18::classInfo$.name)) {
			return Attr$$Lambda$lambda$condType$15$18::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$condType$16$19::classInfo$.name)) {
			return Attr$$Lambda$lambda$condType$16$19::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$condType$18$20::classInfo$.name)) {
			return Attr$$Lambda$lambda$condType$18$20::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$condType$19$21::classInfo$.name)) {
			return Attr$$Lambda$lambda$condType$19$21::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$condType$20$22::classInfo$.name)) {
			return Attr$$Lambda$lambda$condType$20$22::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$condType$21$23::classInfo$.name)) {
			return Attr$$Lambda$lambda$condType$21$23::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$visitNewClass$22$24::classInfo$.name)) {
			return Attr$$Lambda$lambda$visitNewClass$22$24::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25::classInfo$.name)) {
			return Attr$$Lambda$lambda$visitAnonymousClassDefinition$23$25::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$checkAccessibleTypes$24$26::classInfo$.name)) {
			return Attr$$Lambda$lambda$checkAccessibleTypes$24$26::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$checkReferenceCompatible$25$27::classInfo$.name)) {
			return Attr$$Lambda$lambda$checkReferenceCompatible$25$27::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$checkExConstraints$26$28::classInfo$.name)) {
			return Attr$$Lambda$lambda$checkExConstraints$26$28::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$checkExConstraints$27$29::classInfo$.name)) {
			return Attr$$Lambda$lambda$checkExConstraints$27$29::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$checkExConstraints$29$30::classInfo$.name)) {
			return Attr$$Lambda$lambda$checkExConstraints$29$30::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$checkExConstraints$30$31::classInfo$.name)) {
			return Attr$$Lambda$lambda$checkExConstraints$30$31::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$checkExConstraints$31$32::classInfo$.name)) {
			return Attr$$Lambda$lambda$checkExConstraints$31$32::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$setFunctionalInfo$32$33::classInfo$.name)) {
			return Attr$$Lambda$lambda$setFunctionalInfo$32$33::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$attribClass$33$34::classInfo$.name)) {
			return Attr$$Lambda$lambda$attribClass$33$34::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$attribClass$34$35::classInfo$.name)) {
			return Attr$$Lambda$lambda$attribClass$34$35::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$attribClass$35$36::classInfo$.name)) {
			return Attr$$Lambda$lambda$attribClass$35$36::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$attribClass$36$37::classInfo$.name)) {
			return Attr$$Lambda$lambda$attribClass$36$37::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$attribClass$37$38::classInfo$.name)) {
			return Attr$$Lambda$lambda$attribClass$37$38::load$(name, initialize);
		}
		if (name->equals(Attr$$Lambda$lambda$checkExConstraints$28$39::classInfo$.name)) {
			return Attr$$Lambda$lambda$checkExConstraints$28$39::load$(name, initialize);
		}
	}
	$loadClass(Attr, name, initialize, &_Attr_ClassInfo_, clinit$Attr, allocate$Attr);
	return class$;
}

$Class* Attr::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com