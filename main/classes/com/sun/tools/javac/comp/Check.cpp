#include <com/sun/tools/javac/comp/Check.h>

#include <com/sun/source/tree/CaseTree$CaseKind.h>
#include <com/sun/source/tree/ModifiersTree.h>
#include <com/sun/tools/javac/code/Attribute$Array.h>
#include <com/sun/tools/javac/code/Attribute$Class.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$Enum.h>
#include <com/sun/tools/javac/code/Attribute$RetentionPolicy.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/ClassFinder$BadClassFile.h>
#include <com/sun/tools/javac/code/DeferredLintHandler$LintLogger.h>
#include <com/sun/tools/javac/code/DeferredLintHandler.h>
#include <com/sun/tools/javac/code/Directive$ExportsDirective.h>
#include <com/sun/tools/javac/code/Directive$RequiresDirective.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Preview.h>
#include <com/sun/tools/javac/code/Scope$CompoundScope.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
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
#include <com/sun/tools/javac/code/SymbolMetadata.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotations.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$FunctionDescriptorLookupError.h>
#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/Check$1.h>
#include <com/sun/tools/javac/comp/Check$1AnnotationValidator.h>
#include <com/sun/tools/javac/comp/Check$1SpecialTreeVisitor.h>
#include <com/sun/tools/javac/comp/Check$2.h>
#include <com/sun/tools/javac/comp/Check$3.h>
#include <com/sun/tools/javac/comp/Check$4.h>
#include <com/sun/tools/javac/comp/Check$5.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check$ClashFilter.h>
#include <com/sun/tools/javac/comp/Check$ConversionWarner.h>
#include <com/sun/tools/javac/comp/Check$CycleChecker.h>
#include <com/sun/tools/javac/comp/Check$DefaultMethodClashFilter.h>
#include <com/sun/tools/javac/comp/Check$Validator.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Infer$FreeTypeListener.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/jvm/ByteCodes.h>
#include <com/sun/tools/javac/jvm/Profile.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>
#include <com/sun/tools/javac/tree/JCTree$JCCase.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCImport.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
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
#include <com/sun/tools/javac/util/MandatoryWarningHandler.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Iterable.h>
#include <java/lang/Math.h>
#include <java/lang/Number.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/EnumSet.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/NestingKind.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef ABSTRACT
#undef ANNOTATION
#undef ANNOTATION_TYPE
#undef APPLY
#undef ARRAY
#undef ASSIGN
#undef AUTOMATIC_MODULE
#undef AUXILIARYCLASS
#undef BINDINGPATTERN
#undef BOT
#undef CAST
#undef CLASS
#undef CLASSDEF
#undef CONSTRUCTOR
#undef DEFAULT
#undef DEFAULTCASELABEL
#undef DEFAULT_METHODS
#undef DEPRECATION
#undef DEP_ANN
#undef DIAMOND_WITH_ANONYMOUS_CLASS_CREATION
#undef DIVZERO
#undef EMPTY
#undef ENUM
#undef ERR
#undef ERROR
#undef EXPORTS
#undef FIELD
#undef FORALL
#undef GENERATED_MEMBER
#undef HAS_RESOURCE
#undef IMPORT
#undef IMPORT_ON_DEMAND_OBSERVABLE_PACKAGES
#undef LOCAL_VARIABLE
#undef LONG
#undef MDL
#undef METHOD
#undef METHODDEF
#undef MISSING_EXPLICIT_CTOR
#undef MODULE
#undef MODULES
#undef MTH
#undef NEWARRAY
#undef NIL
#undef NONE
#undef NON_DEFERRABLE
#undef NON_RECURSIVE
#undef OPENS
#undef OVERLOADS
#undef OVERRIDES
#undef PACKAGE
#undef PARAMETER
#undef PCK
#undef PREVIEW
#undef PRIVATE_SAFE_VARARGS
#undef PROTECTED
#undef PUBLIC
#undef RAW
#undef RECORDS
#undef RECORD_COMPONENT
#undef REMOVAL
#undef REQUIRES_AUTOMATIC
#undef REQUIRES_TRANSITIVE_AUTOMATIC
#undef RESOLVE_ERROR
#undef RUNTIME
#undef SEALED_CLASSES
#undef SELECT
#undef SERIAL
#undef SKIP
#undef SOURCE
#undef SOURCE_LEVEL
#undef STATEMENT
#undef STATIC
#undef STRICTFP
#undef STRICT_METHOD_CLASH_CHECK
#undef TYP
#undef TYPE
#undef TYPEVAR
#undef TYPE_ANNOTATION
#undef TYPE_PARAMETER
#undef TYPE_USE
#undef UNCHECKED
#undef VAL_MTH
#undef VAR
#undef VARARGS
#undef VARDEF
#undef VOID
#undef WILDCARD

using $AttributeArray = $Array<::com::sun::tools::javac::code::Attribute>;
using $SymbolArray = $Array<::com::sun::tools::javac::code::Symbol>;
using $NameArray = $Array<::com::sun::tools::javac::util::Name>;
using $CaseTree$CaseKind = ::com::sun::source::tree::CaseTree$CaseKind;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Array = ::com::sun::tools::javac::code::Attribute$Array;
using $Attribute$Class = ::com::sun::tools::javac::code::Attribute$Class;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$Enum = ::com::sun::tools::javac::code::Attribute$Enum;
using $Attribute$RetentionPolicy = ::com::sun::tools::javac::code::Attribute$RetentionPolicy;
using $ClassFinder$BadClassFile = ::com::sun::tools::javac::code::ClassFinder$BadClassFile;
using $DeferredLintHandler = ::com::sun::tools::javac::code::DeferredLintHandler;
using $DeferredLintHandler$LintLogger = ::com::sun::tools::javac::code::DeferredLintHandler$LintLogger;
using $Directive$ExportsDirective = ::com::sun::tools::javac::code::Directive$ExportsDirective;
using $Directive$RequiresDirective = ::com::sun::tools::javac::code::Directive$RequiresDirective;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $Lint = ::com::sun::tools::javac::code::Lint;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Preview = ::com::sun::tools::javac::code::Preview;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$CompoundScope = ::com::sun::tools::javac::code::Scope$CompoundScope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$RecordComponent = ::com::sun::tools::javac::code::Symbol$RecordComponent;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $SymbolMetadata = ::com::sun::tools::javac::code::SymbolMetadata;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $TypeAnnotations = ::com::sun::tools::javac::code::TypeAnnotations;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $Types$FunctionDescriptorLookupError = ::com::sun::tools::javac::code::Types$FunctionDescriptorLookupError;
using $Types$SimpleVisitor = ::com::sun::tools::javac::code::Types$SimpleVisitor;
using $Types$UnaryVisitor = ::com::sun::tools::javac::code::Types$UnaryVisitor;
using $Annotate$AnnotationTypeMetadata = ::com::sun::tools::javac::comp::Annotate$AnnotationTypeMetadata;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $Check$1 = ::com::sun::tools::javac::comp::Check$1;
using $Check$1AnnotationValidator = ::com::sun::tools::javac::comp::Check$1AnnotationValidator;
using $Check$1SpecialTreeVisitor = ::com::sun::tools::javac::comp::Check$1SpecialTreeVisitor;
using $Check$2 = ::com::sun::tools::javac::comp::Check$2;
using $Check$3 = ::com::sun::tools::javac::comp::Check$3;
using $Check$4 = ::com::sun::tools::javac::comp::Check$4;
using $Check$5 = ::com::sun::tools::javac::comp::Check$5;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $Check$ClashFilter = ::com::sun::tools::javac::comp::Check$ClashFilter;
using $Check$ConversionWarner = ::com::sun::tools::javac::comp::Check$ConversionWarner;
using $Check$CycleChecker = ::com::sun::tools::javac::comp::Check$CycleChecker;
using $Check$DefaultMethodClashFilter = ::com::sun::tools::javac::comp::Check$DefaultMethodClashFilter;
using $Check$Validator = ::com::sun::tools::javac::comp::Check$Validator;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$FreeTypeListener = ::com::sun::tools::javac::comp::Infer$FreeTypeListener;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $ByteCodes = ::com::sun::tools::javac::jvm::ByteCodes;
using $Profile = ::com::sun::tools::javac::jvm::Profile;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$JCAssign = ::com::sun::tools::javac::tree::JCTree$JCAssign;
using $JCTree$JCCase = ::com::sun::tools::javac::tree::JCTree$JCCase;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCIf = ::com::sun::tools::javac::tree::JCTree$JCIf;
using $JCTree$JCImport = ::com::sun::tools::javac::tree::JCTree$JCImport;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCTypeCast = ::com::sun::tools::javac::tree::JCTree$JCTypeCast;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$DiagnosticHandler = ::com::sun::tools::javac::util::Log$DiagnosticHandler;
using $Log$DiscardDiagnosticHandler = ::com::sun::tools::javac::util::Log$DiscardDiagnosticHandler;
using $MandatoryWarningHandler = ::com::sun::tools::javac::util::MandatoryWarningHandler;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Options = ::com::sun::tools::javac::util::Options;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Number = ::java::lang::Number;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $EnumSet = ::java::util::EnumSet;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Collector = ::java::util::stream::Collector;
using $Stream = ::java::util::stream::Stream;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $NestingKind = ::javax::lang::model::element::NestingKind;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Check$$Lambda$lambda$new$6 : public $Predicate {
	$class(Check$$Lambda$lambda$new$6, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* s) override {
		 return Check::lambda$new$6($cast($Symbol, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$new$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Check$$Lambda$lambda$new$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$new$6::*)()>(&Check$$Lambda$lambda$new$6::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$new$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$new$6",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Check$$Lambda$lambda$new$6::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$new$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$new$6::class$ = nullptr;

class Check$$Lambda$lambda$checkType$0$1 : public $Infer$FreeTypeListener {
	$class(Check$$Lambda$lambda$checkType$0$1, $NO_CLASS_INIT, $Infer$FreeTypeListener)
public:
	void init$(Check* inst, $JCDiagnostic$DiagnosticPosition* pos, $Type* found, $Type* req, $Check$CheckContext* checkContext) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, found, found);
		$set(this, req, req);
		$set(this, checkContext, checkContext);
	}
	virtual void typesInferred($InferenceContext* solvedContext) override {
		$nc(inst$)->lambda$checkType$0(pos, found, req, checkContext, solvedContext);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$checkType$0$1>());
	}
	Check* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	$Type* found = nullptr;
	$Type* req = nullptr;
	$Check$CheckContext* checkContext = nullptr;
	static $FieldInfo fieldInfos[6];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$checkType$0$1::fieldInfos[6] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkType$0$1, inst$)},
	{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkType$0$1, pos)},
	{"found", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkType$0$1, found)},
	{"req", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkType$0$1, req)},
	{"checkContext", "Lcom/sun/tools/javac/comp/Check$CheckContext;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkType$0$1, checkContext)},
	{}
};
$MethodInfo Check$$Lambda$lambda$checkType$0$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$checkType$0$1::*)(Check*,$JCDiagnostic$DiagnosticPosition*,$Type*,$Type*,$Check$CheckContext*)>(&Check$$Lambda$lambda$checkType$0$1::init$))},
	{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$checkType$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkType$0$1",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Infer$FreeTypeListener",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$checkType$0$1::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$checkType$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$checkType$0$1::class$ = nullptr;

class Check$$Lambda$lambda$checkRedundantCast$1$2 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkRedundantCast$1$2, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $JCTree$JCTypeCast* tree) {
		$set(this, inst$, inst);
		$set(this, tree, tree);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkRedundantCast$1(tree);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$checkRedundantCast$1$2>());
	}
	Check* inst$ = nullptr;
	$JCTree$JCTypeCast* tree = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$checkRedundantCast$1$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkRedundantCast$1$2, inst$)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkRedundantCast$1$2, tree)},
	{}
};
$MethodInfo Check$$Lambda$lambda$checkRedundantCast$1$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$checkRedundantCast$1$2::*)(Check*,$JCTree$JCTypeCast*)>(&Check$$Lambda$lambda$checkRedundantCast$1$2::init$))},
	{"report", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$checkRedundantCast$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkRedundantCast$1$2",
	"java.lang.Object",
	"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$checkRedundantCast$1$2::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$checkRedundantCast$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$checkRedundantCast$1$2::class$ = nullptr;

class Check$$Lambda$lambda$checkMethod$2$3 : public $Infer$FreeTypeListener {
	$class(Check$$Lambda$lambda$checkMethod$2$3, $NO_CLASS_INIT, $Infer$FreeTypeListener)
public:
	void init$(Check* inst, $Type* mtype, $Symbol* sym, $Env* env, $List* argtrees, $List* argtypes, bool useVarargs) {
		$set(this, inst$, inst);
		$set(this, mtype, mtype);
		$set(this, sym, sym);
		$set(this, env, env);
		$set(this, argtrees, argtrees);
		$set(this, argtypes, argtypes);
		this->useVarargs = useVarargs;
	}
	virtual void typesInferred($InferenceContext* solvedContext) override {
		$nc(inst$)->lambda$checkMethod$2(mtype, sym, env, argtrees, argtypes, useVarargs, solvedContext);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$checkMethod$2$3>());
	}
	Check* inst$ = nullptr;
	$Type* mtype = nullptr;
	$Symbol* sym = nullptr;
	$Env* env = nullptr;
	$List* argtrees = nullptr;
	$List* argtypes = nullptr;
	bool useVarargs = false;
	static $FieldInfo fieldInfos[8];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$checkMethod$2$3::fieldInfos[8] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkMethod$2$3, inst$)},
	{"mtype", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkMethod$2$3, mtype)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkMethod$2$3, sym)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkMethod$2$3, env)},
	{"argtrees", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkMethod$2$3, argtrees)},
	{"argtypes", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkMethod$2$3, argtypes)},
	{"useVarargs", "Z", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkMethod$2$3, useVarargs)},
	{}
};
$MethodInfo Check$$Lambda$lambda$checkMethod$2$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$checkMethod$2$3::*)(Check*,$Type*,$Symbol*,$Env*,$List*,$List*,bool)>(&Check$$Lambda$lambda$checkMethod$2$3::init$))},
	{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$checkMethod$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkMethod$2$3",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Infer$FreeTypeListener",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$checkMethod$2$3::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$checkMethod$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$checkMethod$2$3::class$ = nullptr;

class Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $JCDiagnostic$DiagnosticPosition* pos) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
	}
	virtual void report() override {
		$nc(inst$)->lambda$warnOnExplicitStrictfp$3(pos);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4>());
	}
	Check* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4, inst$)},
	{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4, pos)},
	{}
};
$MethodInfo Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4::*)(Check*,$JCDiagnostic$DiagnosticPosition*)>(&Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4::init$))},
	{"report", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4",
	"java.lang.Object",
	"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4::class$ = nullptr;

class Check$$Lambda$lambda$checkOverride$4$5 : public $Supplier {
	$class(Check$$Lambda$lambda$checkOverride$4$5, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Symbol$MethodSymbol* m, $JCTree* tree) {
		$set(this, m, m);
		$set(this, tree, tree);
	}
	virtual $Object* get() override {
		 return $of(Check::lambda$checkOverride$4(m, tree));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$checkOverride$4$5>());
	}
	$Symbol$MethodSymbol* m = nullptr;
	$JCTree* tree = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$checkOverride$4$5::fieldInfos[3] = {
	{"m", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkOverride$4$5, m)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkOverride$4$5, tree)},
	{}
};
$MethodInfo Check$$Lambda$lambda$checkOverride$4$5::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$checkOverride$4$5::*)($Symbol$MethodSymbol*,$JCTree*)>(&Check$$Lambda$lambda$checkOverride$4$5::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$checkOverride$4$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkOverride$4$5",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$checkOverride$4$5::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$checkOverride$4$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$checkOverride$4$5::class$ = nullptr;

class Check$$Lambda$lambda$checkOverride$5$6 : public $Predicate {
	$class(Check$$Lambda$lambda$checkOverride$5$6, $NO_CLASS_INIT, $Predicate)
public:
	void init$($JCTree$JCMethodDecl* tree) {
		$set(this, tree, tree);
	}
	virtual bool test(Object$* rc) override {
		 return Check::lambda$checkOverride$5(tree, $cast($Symbol$RecordComponent, rc));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$checkOverride$5$6>());
	}
	$JCTree$JCMethodDecl* tree = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$checkOverride$5$6::fieldInfos[2] = {
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkOverride$5$6, tree)},
	{}
};
$MethodInfo Check$$Lambda$lambda$checkOverride$5$6::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$checkOverride$5$6::*)($JCTree$JCMethodDecl*)>(&Check$$Lambda$lambda$checkOverride$5$6::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$checkOverride$5$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkOverride$5$6",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$checkOverride$5$6::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$checkOverride$5$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$checkOverride$5$6::class$ = nullptr;

class Check$$Lambda$add$7 : public $Consumer {
	$class(Check$$Lambda$add$7, $NO_CLASS_INIT, $Consumer)
public:
	void init$($ArrayList* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* arg0) override {
		$nc(inst$)->add(arg0);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$add$7>());
	}
	$ArrayList* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$add$7::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$add$7, inst$)},
	{}
};
$MethodInfo Check$$Lambda$add$7::methodInfos[3] = {
	{"<init>", "(Ljava/util/ArrayList;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$add$7::*)($ArrayList*)>(&Check$$Lambda$add$7::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$add$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$add$7",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$add$7::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$add$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$add$7::class$ = nullptr;

class Check$$Lambda$lambda$validateAnnotation$8$8 : public $Predicate {
	$class(Check$$Lambda$lambda$validateAnnotation$8$8, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Check* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* anno) override {
		 return $nc(inst$)->lambda$validateAnnotation$8($cast($Attribute$Compound, anno));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$validateAnnotation$8$8>());
	}
	Check* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$validateAnnotation$8$8::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$validateAnnotation$8$8, inst$)},
	{}
};
$MethodInfo Check$$Lambda$lambda$validateAnnotation$8$8::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$validateAnnotation$8$8::*)(Check*)>(&Check$$Lambda$lambda$validateAnnotation$8$8::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$validateAnnotation$8$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$validateAnnotation$8$8",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$validateAnnotation$8$8::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$validateAnnotation$8$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$validateAnnotation$8$8::class$ = nullptr;

class Check$$Lambda$lambda$isTypeAnnotation$9$9 : public $Predicate {
	$class(Check$$Lambda$lambda$isTypeAnnotation$9$9, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Check* inst, bool isTypeParameter) {
		$set(this, inst$, inst);
		this->isTypeParameter = isTypeParameter;
	}
	virtual bool test(Object$* attr) override {
		 return $nc(inst$)->lambda$isTypeAnnotation$9(isTypeParameter, $cast($Attribute, attr));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$isTypeAnnotation$9$9>());
	}
	Check* inst$ = nullptr;
	bool isTypeParameter = false;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$isTypeAnnotation$9$9::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$isTypeAnnotation$9$9, inst$)},
	{"isTypeParameter", "Z", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$isTypeAnnotation$9$9, isTypeParameter)},
	{}
};
$MethodInfo Check$$Lambda$lambda$isTypeAnnotation$9$9::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$isTypeAnnotation$9$9::*)(Check*,bool)>(&Check$$Lambda$lambda$isTypeAnnotation$9$9::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$isTypeAnnotation$9$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$isTypeAnnotation$9$9",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$isTypeAnnotation$9$9::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$isTypeAnnotation$9$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$isTypeAnnotation$9$9::class$ = nullptr;

class Check$$Lambda$lambda$checkDeprecated$10$10 : public $Supplier {
	$class(Check$$Lambda$lambda$checkDeprecated$10$10, $NO_CLASS_INIT, $Supplier)
public:
	void init$($JCDiagnostic$DiagnosticPosition* pos) {
		$set(this, pos, pos);
	}
	virtual $Object* get() override {
		 return $of(Check::lambda$checkDeprecated$10(pos));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$checkDeprecated$10$10>());
	}
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$checkDeprecated$10$10::fieldInfos[2] = {
	{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDeprecated$10$10, pos)},
	{}
};
$MethodInfo Check$$Lambda$lambda$checkDeprecated$10$10::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$checkDeprecated$10$10::*)($JCDiagnostic$DiagnosticPosition*)>(&Check$$Lambda$lambda$checkDeprecated$10$10::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$checkDeprecated$10$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkDeprecated$10$10",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$checkDeprecated$10$10::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$checkDeprecated$10$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$checkDeprecated$10$10::class$ = nullptr;

class Check$$Lambda$lambda$checkDeprecated$11$11 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkDeprecated$11$11, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $Supplier* pos, $Symbol* s) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, s, s);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkDeprecated$11(pos, s);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$checkDeprecated$11$11>());
	}
	Check* inst$ = nullptr;
	$Supplier* pos = nullptr;
	$Symbol* s = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$checkDeprecated$11$11::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDeprecated$11$11, inst$)},
	{"pos", "Ljava/util/function/Supplier;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDeprecated$11$11, pos)},
	{"s", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDeprecated$11$11, s)},
	{}
};
$MethodInfo Check$$Lambda$lambda$checkDeprecated$11$11::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;Ljava/util/function/Supplier;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$checkDeprecated$11$11::*)(Check*,$Supplier*,$Symbol*)>(&Check$$Lambda$lambda$checkDeprecated$11$11::init$))},
	{"report", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$checkDeprecated$11$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkDeprecated$11$11",
	"java.lang.Object",
	"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$checkDeprecated$11$11::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$checkDeprecated$11$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$checkDeprecated$11$11::class$ = nullptr;

class Check$$Lambda$lambda$checkSunAPI$12$12 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkSunAPI$12$12, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, s, s);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkSunAPI$12(pos, s);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$checkSunAPI$12$12>());
	}
	Check* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	$Symbol* s = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$checkSunAPI$12$12::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkSunAPI$12$12, inst$)},
	{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkSunAPI$12$12, pos)},
	{"s", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkSunAPI$12$12, s)},
	{}
};
$MethodInfo Check$$Lambda$lambda$checkSunAPI$12$12::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$checkSunAPI$12$12::*)(Check*,$JCDiagnostic$DiagnosticPosition*,$Symbol*)>(&Check$$Lambda$lambda$checkSunAPI$12$12::init$))},
	{"report", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$checkSunAPI$12$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkSunAPI$12$12",
	"java.lang.Object",
	"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$checkSunAPI$12$12::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$checkSunAPI$12$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$checkSunAPI$12$12::class$ = nullptr;

class Check$$Lambda$lambda$checkPreview$13$13 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkPreview$13$13, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, s, s);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkPreview$13(pos, s);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$checkPreview$13$13>());
	}
	Check* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	$Symbol* s = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$checkPreview$13$13::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPreview$13$13, inst$)},
	{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPreview$13$13, pos)},
	{"s", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPreview$13$13, s)},
	{}
};
$MethodInfo Check$$Lambda$lambda$checkPreview$13$13::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$checkPreview$13$13::*)(Check*,$JCDiagnostic$DiagnosticPosition*,$Symbol*)>(&Check$$Lambda$lambda$checkPreview$13$13::init$))},
	{"report", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$checkPreview$13$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkPreview$13$13",
	"java.lang.Object",
	"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$checkPreview$13$13::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$checkPreview$13$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$checkPreview$13$13::class$ = nullptr;

class Check$$Lambda$lambda$checkPreview$14$14 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkPreview$14$14, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, s, s);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkPreview$14(pos, s);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$checkPreview$14$14>());
	}
	Check* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	$Symbol* s = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$checkPreview$14$14::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPreview$14$14, inst$)},
	{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPreview$14$14, pos)},
	{"s", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPreview$14$14, s)},
	{}
};
$MethodInfo Check$$Lambda$lambda$checkPreview$14$14::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$checkPreview$14$14::*)(Check*,$JCDiagnostic$DiagnosticPosition*,$Symbol*)>(&Check$$Lambda$lambda$checkPreview$14$14::init$))},
	{"report", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$checkPreview$14$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkPreview$14$14",
	"java.lang.Object",
	"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$checkPreview$14$14::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$checkPreview$14$14, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$checkPreview$14$14::class$ = nullptr;

class Check$$Lambda$lambda$checkPreview$15$15 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkPreview$15$15, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, s, s);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkPreview$15(pos, s);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$checkPreview$15$15>());
	}
	Check* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	$Symbol* s = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$checkPreview$15$15::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPreview$15$15, inst$)},
	{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPreview$15$15, pos)},
	{"s", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPreview$15$15, s)},
	{}
};
$MethodInfo Check$$Lambda$lambda$checkPreview$15$15::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$checkPreview$15$15::*)(Check*,$JCDiagnostic$DiagnosticPosition*,$Symbol*)>(&Check$$Lambda$lambda$checkPreview$15$15::init$))},
	{"report", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$checkPreview$15$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkPreview$15$15",
	"java.lang.Object",
	"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$checkPreview$15$15::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$checkPreview$15$15, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$checkPreview$15$15::class$ = nullptr;

class Check$$Lambda$lambda$checkDivZero$16$16 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkDivZero$16$16, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $JCDiagnostic$DiagnosticPosition* pos) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkDivZero$16(pos);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$checkDivZero$16$16>());
	}
	Check* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$checkDivZero$16$16::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDivZero$16$16, inst$)},
	{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDivZero$16$16, pos)},
	{}
};
$MethodInfo Check$$Lambda$lambda$checkDivZero$16$16::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$checkDivZero$16$16::*)(Check*,$JCDiagnostic$DiagnosticPosition*)>(&Check$$Lambda$lambda$checkDivZero$16$16::init$))},
	{"report", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$checkDivZero$16$16::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkDivZero$16$16",
	"java.lang.Object",
	"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$checkDivZero$16$16::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$checkDivZero$16$16, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$checkDivZero$16$16::class$ = nullptr;

class Check$$Lambda$lambda$checkImportsUnique$17$17 : public $Predicate {
	$class(Check$$Lambda$lambda$checkImportsUnique$17$17, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* sym) override {
		 return Check::lambda$checkImportsUnique$17($cast($Symbol, sym));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$checkImportsUnique$17$17>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Check$$Lambda$lambda$checkImportsUnique$17$17::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$checkImportsUnique$17$17::*)()>(&Check$$Lambda$lambda$checkImportsUnique$17$17::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$checkImportsUnique$17$17::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkImportsUnique$17$17",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Check$$Lambda$lambda$checkImportsUnique$17$17::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$checkImportsUnique$17$17, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$checkImportsUnique$17$17::class$ = nullptr;

class Check$$Lambda$lambda$checkUniqueImport$18$18 : public $Predicate {
	$class(Check$$Lambda$lambda$checkUniqueImport$18$18, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Symbol* sym) {
		$set(this, sym, sym);
	}
	virtual bool test(Object$* candidate) override {
		 return Check::lambda$checkUniqueImport$18(sym, $cast($Symbol, candidate));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$checkUniqueImport$18$18>());
	}
	$Symbol* sym = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$checkUniqueImport$18$18::fieldInfos[2] = {
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkUniqueImport$18$18, sym)},
	{}
};
$MethodInfo Check$$Lambda$lambda$checkUniqueImport$18$18::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$checkUniqueImport$18$18::*)($Symbol*)>(&Check$$Lambda$lambda$checkUniqueImport$18$18::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$checkUniqueImport$18$18::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkUniqueImport$18$18",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$checkUniqueImport$18$18::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$checkUniqueImport$18$18, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$checkUniqueImport$18$18::class$ = nullptr;

class Check$$Lambda$lambda$checkDefaultConstructor$19$19 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkDefaultConstructor$19$19, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $JCDiagnostic$DiagnosticPosition* pos, $Symbol$ClassSymbol* c, $Symbol$PackageSymbol* pkg, $Symbol$ModuleSymbol* modle) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, c, c);
		$set(this, pkg, pkg);
		$set(this, modle, modle);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkDefaultConstructor$19(pos, c, pkg, modle);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$checkDefaultConstructor$19$19>());
	}
	Check* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	$Symbol$ClassSymbol* c = nullptr;
	$Symbol$PackageSymbol* pkg = nullptr;
	$Symbol$ModuleSymbol* modle = nullptr;
	static $FieldInfo fieldInfos[6];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$checkDefaultConstructor$19$19::fieldInfos[6] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDefaultConstructor$19$19, inst$)},
	{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDefaultConstructor$19$19, pos)},
	{"c", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDefaultConstructor$19$19, c)},
	{"pkg", "Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDefaultConstructor$19$19, pkg)},
	{"modle", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDefaultConstructor$19$19, modle)},
	{}
};
$MethodInfo Check$$Lambda$lambda$checkDefaultConstructor$19$19::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$checkDefaultConstructor$19$19::*)(Check*,$JCDiagnostic$DiagnosticPosition*,$Symbol$ClassSymbol*,$Symbol$PackageSymbol*,$Symbol$ModuleSymbol*)>(&Check$$Lambda$lambda$checkDefaultConstructor$19$19::init$))},
	{"report", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$checkDefaultConstructor$19$19::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkDefaultConstructor$19$19",
	"java.lang.Object",
	"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$checkDefaultConstructor$19$19::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$checkDefaultConstructor$19$19, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$checkDefaultConstructor$19$19::class$ = nullptr;

class Check$$Lambda$lambda$checkModuleExists$20$20 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkModuleExists$20$20, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $JCDiagnostic$DiagnosticPosition* pos, $Symbol$ModuleSymbol* msym) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, msym, msym);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkModuleExists$20(pos, msym);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$checkModuleExists$20$20>());
	}
	Check* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	$Symbol$ModuleSymbol* msym = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$checkModuleExists$20$20::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkModuleExists$20$20, inst$)},
	{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkModuleExists$20$20, pos)},
	{"msym", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkModuleExists$20$20, msym)},
	{}
};
$MethodInfo Check$$Lambda$lambda$checkModuleExists$20$20::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$checkModuleExists$20$20::*)(Check*,$JCDiagnostic$DiagnosticPosition*,$Symbol$ModuleSymbol*)>(&Check$$Lambda$lambda$checkModuleExists$20$20::init$))},
	{"report", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$checkModuleExists$20$20::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkModuleExists$20$20",
	"java.lang.Object",
	"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$checkModuleExists$20$20::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$checkModuleExists$20$20, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$checkModuleExists$20$20::class$ = nullptr;

class Check$$Lambda$lambda$checkPackageExistsForOpens$21$21 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkPackageExistsForOpens$21$21, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $JCDiagnostic$DiagnosticPosition* pos, $Symbol$PackageSymbol* packge) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, packge, packge);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkPackageExistsForOpens$21(pos, packge);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$checkPackageExistsForOpens$21$21>());
	}
	Check* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	$Symbol$PackageSymbol* packge = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$checkPackageExistsForOpens$21$21::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPackageExistsForOpens$21$21, inst$)},
	{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPackageExistsForOpens$21$21, pos)},
	{"packge", "Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPackageExistsForOpens$21$21, packge)},
	{}
};
$MethodInfo Check$$Lambda$lambda$checkPackageExistsForOpens$21$21::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$checkPackageExistsForOpens$21$21::*)(Check*,$JCDiagnostic$DiagnosticPosition*,$Symbol$PackageSymbol*)>(&Check$$Lambda$lambda$checkPackageExistsForOpens$21$21::init$))},
	{"report", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$checkPackageExistsForOpens$21$21::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkPackageExistsForOpens$21$21",
	"java.lang.Object",
	"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$checkPackageExistsForOpens$21$21::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$checkPackageExistsForOpens$21$21, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$checkPackageExistsForOpens$21$21::class$ = nullptr;

class Check$$Lambda$lambda$checkModuleRequires$22$22 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkModuleRequires$22$22, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $Directive$RequiresDirective* rd, $JCDiagnostic$DiagnosticPosition* pos) {
		$set(this, inst$, inst);
		$set(this, rd, rd);
		$set(this, pos, pos);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkModuleRequires$22(rd, pos);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$checkModuleRequires$22$22>());
	}
	Check* inst$ = nullptr;
	$Directive$RequiresDirective* rd = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$checkModuleRequires$22$22::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkModuleRequires$22$22, inst$)},
	{"rd", "Lcom/sun/tools/javac/code/Directive$RequiresDirective;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkModuleRequires$22$22, rd)},
	{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkModuleRequires$22$22, pos)},
	{}
};
$MethodInfo Check$$Lambda$lambda$checkModuleRequires$22$22::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/code/Directive$RequiresDirective;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$checkModuleRequires$22$22::*)(Check*,$Directive$RequiresDirective*,$JCDiagnostic$DiagnosticPosition*)>(&Check$$Lambda$lambda$checkModuleRequires$22$22::init$))},
	{"report", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$checkModuleRequires$22$22::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkModuleRequires$22$22",
	"java.lang.Object",
	"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$checkModuleRequires$22$22::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$checkModuleRequires$22$22, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$checkModuleRequires$22$22::class$ = nullptr;

class Check$$Lambda$lambda$validateAnnotation$7$23 : public $Predicate {
	$class(Check$$Lambda$lambda$validateAnnotation$7$23, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Check* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* name) override {
		 return $nc(inst$)->lambda$validateAnnotation$7($cast($Name, name));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Check$$Lambda$lambda$validateAnnotation$7$23>());
	}
	Check* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Check$$Lambda$lambda$validateAnnotation$7$23::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$validateAnnotation$7$23, inst$)},
	{}
};
$MethodInfo Check$$Lambda$lambda$validateAnnotation$7$23::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$$Lambda$lambda$validateAnnotation$7$23::*)(Check*)>(&Check$$Lambda$lambda$validateAnnotation$7$23::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Check$$Lambda$lambda$validateAnnotation$7$23::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Check$$Lambda$lambda$validateAnnotation$7$23",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Check$$Lambda$lambda$validateAnnotation$7$23::load$($String* name, bool initialize) {
	$loadClass(Check$$Lambda$lambda$validateAnnotation$7$23, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Check$$Lambda$lambda$validateAnnotation$7$23::class$ = nullptr;

$FieldInfo _Check_FieldInfo_[] = {
	{"checkKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/Check;>;", $PROTECTED | $STATIC | $FINAL, $staticField(Check, checkKey)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(Check, names)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(Check, log)},
	{"rs", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $PRIVATE | $FINAL, $field(Check, rs)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE | $FINAL, $field(Check, syms)},
	{"enter", "Lcom/sun/tools/javac/comp/Enter;", nullptr, $PRIVATE | $FINAL, $field(Check, enter)},
	{"deferredAttr", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $PRIVATE | $FINAL, $field(Check, deferredAttr)},
	{"infer", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $PRIVATE | $FINAL, $field(Check, infer)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE | $FINAL, $field(Check, types)},
	{"typeAnnotations", "Lcom/sun/tools/javac/code/TypeAnnotations;", nullptr, $PRIVATE | $FINAL, $field(Check, typeAnnotations)},
	{"diags", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, $PRIVATE | $FINAL, $field(Check, diags)},
	{"fileManager", "Ljavax/tools/JavaFileManager;", nullptr, $PRIVATE | $FINAL, $field(Check, fileManager)},
	{"source", "Lcom/sun/tools/javac/code/Source;", nullptr, $PRIVATE | $FINAL, $field(Check, source)},
	{"target", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PRIVATE | $FINAL, $field(Check, target)},
	{"profile", "Lcom/sun/tools/javac/jvm/Profile;", nullptr, $PRIVATE | $FINAL, $field(Check, profile)},
	{"preview", "Lcom/sun/tools/javac/code/Preview;", nullptr, $PRIVATE | $FINAL, $field(Check, preview)},
	{"warnOnAnyAccessToMembers", "Z", nullptr, $PRIVATE | $FINAL, $field(Check, warnOnAnyAccessToMembers)},
	{"lint", "Lcom/sun/tools/javac/code/Lint;", nullptr, $PRIVATE, $field(Check, lint)},
	{"method", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PRIVATE, $field(Check, method)},
	{"syntheticNameChar", "C", nullptr, 0, $field(Check, syntheticNameChar)},
	{"compiled", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/util/Name;>;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;", $PRIVATE, $field(Check, compiled)},
	{"deprecationHandler", "Lcom/sun/tools/javac/util/MandatoryWarningHandler;", nullptr, $PRIVATE, $field(Check, deprecationHandler)},
	{"removalHandler", "Lcom/sun/tools/javac/util/MandatoryWarningHandler;", nullptr, $PRIVATE, $field(Check, removalHandler)},
	{"uncheckedHandler", "Lcom/sun/tools/javac/util/MandatoryWarningHandler;", nullptr, $PRIVATE, $field(Check, uncheckedHandler)},
	{"sunApiHandler", "Lcom/sun/tools/javac/util/MandatoryWarningHandler;", nullptr, $PRIVATE, $field(Check, sunApiHandler)},
	{"deferredLintHandler", "Lcom/sun/tools/javac/code/DeferredLintHandler;", nullptr, $PRIVATE, $field(Check, deferredLintHandler)},
	{"allowRecords", "Z", nullptr, $PRIVATE | $FINAL, $field(Check, allowRecords)},
	{"allowSealed", "Z", nullptr, $PRIVATE | $FINAL, $field(Check, allowSealed)},
	{"localClassNameIndexes", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/Name;>;Ljava/lang/Integer;>;", $PRIVATE, $field(Check, localClassNameIndexes)},
	{"basicHandler", "Lcom/sun/tools/javac/comp/Check$CheckContext;", nullptr, 0, $field(Check, basicHandler)},
	{"ignoreAnnotatedCasts", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Check, ignoreAnnotatedCasts)},
	{"denotableChecker", "Lcom/sun/tools/javac/code/Types$SimpleVisitor;", "Lcom/sun/tools/javac/code/Types$SimpleVisitor<Ljava/lang/Boolean;Ljava/lang/Void;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Check, denotableChecker)},
	{"isTypeArgErroneous", "Lcom/sun/tools/javac/code/Types$UnaryVisitor;", "Lcom/sun/tools/javac/code/Types$UnaryVisitor<Ljava/lang/Boolean;>;", 0, $field(Check, isTypeArgErroneous$)},
	{"overrideWarner", "Lcom/sun/tools/javac/util/Warner;", nullptr, 0, $field(Check, overrideWarner)},
	{"equalsHasCodeFilter", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE, $field(Check, equalsHasCodeFilter)},
	{"defaultTargets", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/util/Name;>;", $PRIVATE, $field(Check, defaultTargets)},
	{"dfltTargetMeta", "[Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Check, dfltTargetMeta)},
	{}
};

$MethodInfo _Check_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(Check::*)($Context*)>(&Check::init$))},
	{"annotationApplicable", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, 0},
	{"asTypeParam", "(Lcom/sun/tools/javac/code/Type;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(Check::*)($Type*)>(&Check::asTypeParam))},
	{"assertConvertible", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)V", nullptr, $PRIVATE, $method(static_cast<void(Check::*)($JCTree*,$Type*,$Type*,$Warner*)>(&Check::assertConvertible))},
	{"belongsToRestrictedPackage", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Check::*)($Symbol*)>(&Check::belongsToRestrictedPackage))},
	{"cannotOverride", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, 0},
	{"castWarner", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/Warner;", nullptr, $PUBLIC},
	{"checkAccessFromSerializableElement", "(Lcom/sun/tools/javac/tree/JCTree;Z)V", nullptr, 0},
	{"checkAllDefined", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, 0},
	{"checkAnnotationResType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0},
	{"checkCanonical", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"checkCastable", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"checkCastable", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"checkClassBounds", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0},
	{"checkClassBounds", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Ljava/util/Map;Lcom/sun/tools/javac/code/Type;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Type;)V", 0},
	{"checkClassOrArrayType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"checkClassOverrideEqualsAndHash", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(Check::*)($JCDiagnostic$DiagnosticPosition*,$Symbol$ClassSymbol*)>(&Check::checkClassOverrideEqualsAndHash))},
	{"checkClassOverrideEqualsAndHashIfNeeded", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC},
	{"checkClassType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"checkClassType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Z)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"checkCommonOverriderIn", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)Z", nullptr, 0},
	{"checkCompatibleAbstracts", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC},
	{"checkCompatibleConcretes", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC},
	{"checkCompatibleSupertypes", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0},
	{"checkConstructorRefType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"checkCyclicConstructor", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/code/Symbol;Ljava/util/Map;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/code/Symbol;Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;>;)V", $PRIVATE, $method(static_cast<void(Check::*)($JCTree$JCClassDecl*,$Symbol*,$Map*)>(&Check::checkCyclicConstructor))},
	{"checkCyclicConstructors", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, 0},
	{"checkDefaultConstructor", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, 0},
	{"checkDefaultMethodClashes", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0},
	{"checkDenotable", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC},
	{"checkDeprecated", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"checkDeprecated", "(Ljava/util/function/Supplier;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", "(Ljava/util/function/Supplier<Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;>;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", 0},
	{"checkDeprecatedAnnotation", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"checkDiamond", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"checkDiamondDenotable", "(Lcom/sun/tools/javac/code/Type$ClassType;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type$ClassType;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"checkDisjoint", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;JJJ)Z", nullptr, 0},
	{"checkDivZero", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0},
	{"checkEmptyIf", "(Lcom/sun/tools/javac/tree/JCTree$JCIf;)V", nullptr, 0},
	{"checkExtends", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Check::*)($Type*,$Type*)>(&Check::checkExtends))},
	{"checkFlags", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;JLcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/tree/JCTree;)J", nullptr, 0},
	{"checkForBadAuxiliaryClassAccess", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", 0},
	{"checkFunctionalInterface", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC},
	{"checkHideClashes", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", nullptr, 0},
	{"checkImplementations", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, 0},
	{"checkImplementations", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, 0},
	{"checkImportedPackagesObservable", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, $PUBLIC},
	{"checkImportsResolvable", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, $PUBLIC},
	{"checkImportsUnique", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, 0},
	{"checkLeaksNotAccessible", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", $PUBLIC},
	{"checkLocalVarType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"checkMethod", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;ZLcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;ZLcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/code/Type;", 0},
	{"checkModuleExists", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, 0},
	{"checkModuleName", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;)V", nullptr, $PUBLIC},
	{"checkModuleRequires", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Directive$RequiresDirective;)V", nullptr, 0},
	{"checkNameClash", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Check::*)($Symbol$ClassSymbol*,$Symbol*,$Symbol*)>(&Check::checkNameClash))},
	{"checkNonCyclic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0},
	{"checkNonCyclic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type$TypeVar;)V", nullptr, 0},
	{"checkNonCyclic1", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type$TypeVar;>;)V", $PRIVATE, $method(static_cast<void(Check::*)($JCDiagnostic$DiagnosticPosition*,$Type*,$List*)>(&Check::checkNonCyclic1))},
	{"checkNonCyclicDecl", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, 0},
	{"checkNonCyclicElements", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, 0},
	{"checkNonCyclicElementsInternal", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, 0},
	{"checkNonCyclicInternal", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Check::*)($JCDiagnostic$DiagnosticPosition*,$Type*)>(&Check::checkNonCyclicInternal))},
	{"checkNonVoid", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"checkNotRepeated", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Ljava/util/Set;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;)V", 0},
	{"checkNullOrRefType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"checkOverride", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, 0},
	{"checkOverride", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", 0},
	{"checkOverride", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", nullptr, 0},
	{"checkOverrideClashes", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", nullptr, 0},
	{"checkPackageExistsForOpens", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)V", nullptr, 0},
	{"checkPotentiallyAmbiguousOverloads", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", nullptr, 0},
	{"checkPreview", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"checkProfile", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"checkRaw", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0},
	{"checkRedundantCast", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", $PUBLIC},
	{"checkRefType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"checkRefTypes", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"checkSunAPI", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"checkSwitchCaseStructure", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;)V", 0},
	{"checkTransparentClass", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Scope;)V", nullptr, 0},
	{"checkTransparentVar", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$VarSymbol;Lcom/sun/tools/javac/code/Scope;)V", nullptr, 0},
	{"checkType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"checkType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"checkTypeContainsImportableElement", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/util/Name;Ljava/util/Set;)Z", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/util/Name;Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol;>;)Z", $PRIVATE, $method(static_cast<bool(Check::*)($Symbol$TypeSymbol*,$Symbol$TypeSymbol*,$Symbol$PackageSymbol*,$Name*,$Set*)>(&Check::checkTypeContainsImportableElement))},
	{"checkUnique", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope;)Z", nullptr, 0},
	{"checkUniqueClassName", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Scope;)Z", nullptr, 0},
	{"checkUniqueImport", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/code/Symbol;Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(Check::*)($JCDiagnostic$DiagnosticPosition*,$Scope*,$Scope*,$Scope*,$Symbol*,bool)>(&Check::checkUniqueImport))},
	{"checkValidGenericType", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC},
	{"checkVarargsMethodDecl", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", 0},
	{"checkVisible", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Z)V", nullptr, $PRIVATE, $method(static_cast<void(Check::*)($JCDiagnostic$DiagnosticPosition*,$Symbol*,$Symbol$PackageSymbol*,bool)>(&Check::checkVisible))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"clearLocalClassNameIndexes", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC},
	{"closure", "(Lcom/sun/tools/javac/code/Type;Ljava/util/Map;)V", "(Lcom/sun/tools/javac/code/Type;Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type;>;)V", $PRIVATE, $method(static_cast<void(Check::*)($Type*,$Map*)>(&Check::closure))},
	{"closure", "(Lcom/sun/tools/javac/code/Type;Ljava/util/Map;Ljava/util/Map;)V", "(Lcom/sun/tools/javac/code/Type;Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type;>;Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type;>;)V", $PRIVATE, $method(static_cast<void(Check::*)($Type*,$Map*,$Map*)>(&Check::closure))},
	{"completionError", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$CompletionFailure;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"convertWarner", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/Warner;", nullptr, $PUBLIC},
	{"defaultTargetMetaInfo", "()[Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE, $method(static_cast<$NameArray*(Check::*)()>(&Check::defaultTargetMetaInfo))},
	{"diff", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"duplicateErasureError", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"duplicateError", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"earlyRefError", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"excl", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"findExport", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)Lcom/sun/tools/javac/code/Directive$ExportsDirective;", nullptr, $PRIVATE, $method(static_cast<$Directive$ExportsDirective*(Check::*)($Symbol$PackageSymbol*)>(&Check::findExport))},
	{"firstDirectIncompatibility", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol*(Check::*)($JCDiagnostic$DiagnosticPosition*,$Type*,$Type*,$Type*)>(&Check::firstDirectIncompatibility))},
	{"firstIncompatibility", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol*(Check::*)($JCDiagnostic$DiagnosticPosition*,$Type*,$Type*,$Type*)>(&Check::firstIncompatibility))},
	{"firstIncompatibleTypeArg", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Check::*)($Type*)>(&Check::firstIncompatibleTypeArg))},
	{"getApplicableTargets", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;Lcom/sun/tools/javac/code/Symbol;)Ljava/util/Optional;", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;Lcom/sun/tools/javac/code/Symbol;)Ljava/util/Optional<Ljava/util/Set<Lcom/sun/tools/javac/util/Name;>;>;", 0},
	{"getAttributeTargetAttribute", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Attribute$Array;", nullptr, 0},
	{"getCompiled", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC},
	{"getCompiled", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC},
	{"getDefaultTargetSet", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/util/Name;>;", $PRIVATE, $method(static_cast<$Set*(Check::*)()>(&Check::getDefaultTargetSet))},
	{"getTargetNames", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)[Lcom/sun/tools/javac/util/Name;", nullptr, 0},
	{"getTargetNames", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)[Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"implicitEnumFinalFlag", "(Lcom/sun/tools/javac/tree/JCTree;)J", nullptr, $PRIVATE, $method(static_cast<int64_t(Check::*)($JCTree*)>(&Check::implicitEnumFinalFlag))},
	{"importAccessible", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)Z", nullptr, $PUBLIC},
	{"incl", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/Check;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Check*(*)($Context*)>(&Check::instance))},
	{"intersect", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"intersects", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", 0},
	{"is292targetTypeCast", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Check::*)($JCTree$JCTypeCast*)>(&Check::is292targetTypeCast))},
	{"isAPISymbol", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Check::*)($Symbol*)>(&Check::isAPISymbol))},
	{"isCanonical", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Check::*)($JCTree*)>(&Check::isCanonical))},
	{"isChecked", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, 0},
	{"isDeprecatedOverrideIgnorable", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Check::*)($Symbol$MethodSymbol*,$Symbol$ClassSymbol*)>(&Check::isDeprecatedOverrideIgnorable))},
	{"isEffectivelyNonPublic", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Check::*)($Symbol*)>(&Check::isEffectivelyNonPublic))},
	{"isHandled", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", 0},
	{"isOverrider", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, 0},
	{"isTargetSubsetOf", "(Ljava/util/Set;Ljava/util/Set;)Z", "(Ljava/util/Set<Lcom/sun/tools/javac/util/Name;>;Ljava/util/Set<Lcom/sun/tools/javac/util/Name;>;)Z", $PRIVATE, $method(static_cast<bool(Check::*)($Set*,$Set*)>(&Check::isTargetSubsetOf))},
	{"isTrustMeAllowedOnMethod", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Check::*)($Symbol*)>(&Check::isTrustMeAllowedOnMethod))},
	{"isTypeAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;Z)Z", nullptr, $PROTECTED},
	{"isTypeAnnotation", "(Lcom/sun/tools/javac/code/Attribute;Z)Z", nullptr, 0},
	{"isTypeArgErroneous", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, 0},
	{"isUnchecked", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Z", nullptr, 0},
	{"isUnchecked", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, 0},
	{"isUnchecked", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Z", nullptr, 0},
	{"lambda$checkDefaultConstructor$19", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Check::*)($JCDiagnostic$DiagnosticPosition*,$Symbol$ClassSymbol*,$Symbol$PackageSymbol*,$Symbol$ModuleSymbol*)>(&Check::lambda$checkDefaultConstructor$19))},
	{"lambda$checkDeprecated$10", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JCDiagnostic$DiagnosticPosition*(*)($JCDiagnostic$DiagnosticPosition*)>(&Check::lambda$checkDeprecated$10))},
	{"lambda$checkDeprecated$11", "(Ljava/util/function/Supplier;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Check::*)($Supplier*,$Symbol*)>(&Check::lambda$checkDeprecated$11))},
	{"lambda$checkDivZero$16", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Check::*)($JCDiagnostic$DiagnosticPosition*)>(&Check::lambda$checkDivZero$16))},
	{"lambda$checkImportsUnique$17", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol*)>(&Check::lambda$checkImportsUnique$17))},
	{"lambda$checkMethod$2", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;ZLcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Check::*)($Type*,$Symbol*,$Env*,$List*,$List*,bool,$InferenceContext*)>(&Check::lambda$checkMethod$2))},
	{"lambda$checkModuleExists$20", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Check::*)($JCDiagnostic$DiagnosticPosition*,$Symbol$ModuleSymbol*)>(&Check::lambda$checkModuleExists$20))},
	{"lambda$checkModuleRequires$22", "(Lcom/sun/tools/javac/code/Directive$RequiresDirective;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Check::*)($Directive$RequiresDirective*,$JCDiagnostic$DiagnosticPosition*)>(&Check::lambda$checkModuleRequires$22))},
	{"lambda$checkOverride$4", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JCDiagnostic$DiagnosticPosition*(*)($Symbol$MethodSymbol*,$JCTree*)>(&Check::lambda$checkOverride$4))},
	{"lambda$checkOverride$5", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Lcom/sun/tools/javac/code/Symbol$RecordComponent;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCTree$JCMethodDecl*,$Symbol$RecordComponent*)>(&Check::lambda$checkOverride$5))},
	{"lambda$checkPackageExistsForOpens$21", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Check::*)($JCDiagnostic$DiagnosticPosition*,$Symbol$PackageSymbol*)>(&Check::lambda$checkPackageExistsForOpens$21))},
	{"lambda$checkPreview$13", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Check::*)($JCDiagnostic$DiagnosticPosition*,$Symbol*)>(&Check::lambda$checkPreview$13))},
	{"lambda$checkPreview$14", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Check::*)($JCDiagnostic$DiagnosticPosition*,$Symbol*)>(&Check::lambda$checkPreview$14))},
	{"lambda$checkPreview$15", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Check::*)($JCDiagnostic$DiagnosticPosition*,$Symbol*)>(&Check::lambda$checkPreview$15))},
	{"lambda$checkRedundantCast$1", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Check::*)($JCTree$JCTypeCast*)>(&Check::lambda$checkRedundantCast$1))},
	{"lambda$checkSunAPI$12", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Check::*)($JCDiagnostic$DiagnosticPosition*,$Symbol*)>(&Check::lambda$checkSunAPI$12))},
	{"lambda$checkType$0", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Check::*)($JCDiagnostic$DiagnosticPosition*,$Type*,$Type*,$Check$CheckContext*,$InferenceContext*)>(&Check::lambda$checkType$0))},
	{"lambda$checkUniqueImport$18", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol*,$Symbol*)>(&Check::lambda$checkUniqueImport$18))},
	{"lambda$isTypeAnnotation$9", "(ZLcom/sun/tools/javac/code/Attribute;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Check::*)(bool,$Attribute*)>(&Check::lambda$isTypeAnnotation$9))},
	{"lambda$new$6", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol*)>(&Check::lambda$new$6))},
	{"lambda$validateAnnotation$7", "(Lcom/sun/tools/javac/util/Name;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Check::*)($Name*)>(&Check::lambda$validateAnnotation$7))},
	{"lambda$validateAnnotation$8", "(Lcom/sun/tools/javac/code/Attribute$Compound;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Check::*)($Attribute$Compound*)>(&Check::lambda$validateAnnotation$8))},
	{"lambda$warnOnExplicitStrictfp$3", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Check::*)($JCDiagnostic$DiagnosticPosition*)>(&Check::lambda$warnOnExplicitStrictfp$3))},
	{"localClassName", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"newRound", "()V", nullptr, $PUBLIC},
	{"noteCyclic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(Check::*)($JCDiagnostic$DiagnosticPosition*,$Symbol$ClassSymbol*)>(&Check::noteCyclic))},
	{"protection", "(J)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int64_t)>(&Check::protection))},
	{"putCompiled", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC},
	{"removeCompiled", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC},
	{"reportDeferredDiagnostics", "()V", nullptr, $PUBLIC},
	{"setLint", "(Lcom/sun/tools/javac/code/Lint;)Lcom/sun/tools/javac/code/Lint;", nullptr, 0},
	{"setMethod", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, 0},
	{"subset", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", 0},
	{"typeTagError", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"uncheckedOverrides", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, 0},
	{"unhandled", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"union", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"validate", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0},
	{"validate", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;Z)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Z)V", 0},
	{"validate", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0},
	{"validateAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE, $method(static_cast<void(Check::*)($JCTree$JCAnnotation*,$JCTree*,$Symbol*)>(&Check::validateAnnotation))},
	{"validateAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Check::*)($JCTree$JCAnnotation*)>(&Check::validateAnnotation))},
	{"validateAnnotationDeferErrors", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)Z", nullptr, $PUBLIC},
	{"validateAnnotationMethod", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", nullptr, 0},
	{"validateAnnotationTree", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0},
	{"validateAnnotationType", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0},
	{"validateAnnotationType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0},
	{"validateAnnotations", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Symbol;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Symbol;)V", $PUBLIC},
	{"validateDefault", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE, $method(static_cast<void(Check::*)($Symbol*,$JCDiagnostic$DiagnosticPosition*)>(&Check::validateDefault))},
	{"validateDocumented", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE, $method(static_cast<void(Check::*)($Symbol*,$Symbol*,$JCDiagnostic$DiagnosticPosition*)>(&Check::validateDocumented))},
	{"validateInherited", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE, $method(static_cast<void(Check::*)($Symbol*,$Symbol*,$JCDiagnostic$DiagnosticPosition*)>(&Check::validateInherited))},
	{"validateRepeatable", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Attribute$Compound;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PUBLIC},
	{"validateRetention", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE, $method(static_cast<void(Check::*)($Symbol$TypeSymbol*,$Symbol$TypeSymbol*,$JCDiagnostic$DiagnosticPosition*)>(&Check::validateRetention))},
	{"validateTarget", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE, $method(static_cast<void(Check::*)($Symbol$TypeSymbol*,$Symbol$TypeSymbol*,$JCDiagnostic$DiagnosticPosition*)>(&Check::validateTarget))},
	{"validateTargetAnnotationValue", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)Z", nullptr, 0},
	{"validateTypeAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;Z)V", nullptr, $PUBLIC},
	{"validateTypeAnnotations", "(Lcom/sun/tools/javac/util/List;Z)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Z)V", $PUBLIC},
	{"validateValue", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE, $method(static_cast<void(Check::*)($Symbol$TypeSymbol*,$Symbol$TypeSymbol*,$JCDiagnostic$DiagnosticPosition*)>(&Check::validateValue))},
	{"varargsDuplicateError", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"varargsOverrides", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, 0},
	{"warnDeclaredUsingPreview", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC},
	{"warnDeprecated", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"warnDivZero", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, 0},
	{"warnOnExplicitStrictfp", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE, $method(static_cast<void(Check::*)($JCDiagnostic$DiagnosticPosition*)>(&Check::warnOnExplicitStrictfp))},
	{"warnPreviewAPI", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Warning;)V", nullptr, $PUBLIC},
	{"warnStatic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Warning;)V", nullptr, $PUBLIC},
	{"warnUnchecked", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Warning;)V", nullptr, $PUBLIC},
	{"warnUnsafeVararg", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Warning;)V", nullptr, 0},
	{"withinAnonConstr", "(Lcom/sun/tools/javac/comp/Env;)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Z", $PRIVATE, $method(static_cast<bool(Check::*)($Env*)>(&Check::withinAnonConstr))},
	{}
};

$InnerClassInfo _Check_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Check$5", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.comp.Check$ConversionWarner", "com.sun.tools.javac.comp.Check", "ConversionWarner", $PRIVATE},
	{"com.sun.tools.javac.comp.Check$DefaultMethodClashFilter", "com.sun.tools.javac.comp.Check", "DefaultMethodClashFilter", $PRIVATE},
	{"com.sun.tools.javac.comp.Check$ClashFilter", "com.sun.tools.javac.comp.Check", "ClashFilter", $PRIVATE},
	{"com.sun.tools.javac.comp.Check$CycleChecker", "com.sun.tools.javac.comp.Check", "CycleChecker", 0},
	{"com.sun.tools.javac.comp.Check$Validator", "com.sun.tools.javac.comp.Check", "Validator", 0},
	{"com.sun.tools.javac.comp.Check$NestedCheckContext", "com.sun.tools.javac.comp.Check", "NestedCheckContext", $STATIC},
	{"com.sun.tools.javac.comp.Check$CheckContext", "com.sun.tools.javac.comp.Check", "CheckContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.comp.Check$4", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Check$1AnnotationValidator", nullptr, "AnnotationValidator", 0},
	{"com.sun.tools.javac.comp.Check$1SpecialTreeVisitor", nullptr, "SpecialTreeVisitor", 0},
	{"com.sun.tools.javac.comp.Check$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Check$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Check$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Check_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Check",
	"java.lang.Object",
	nullptr,
	_Check_FieldInfo_,
	_Check_MethodInfo_,
	nullptr,
	nullptr,
	_Check_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Check$5,com.sun.tools.javac.comp.Check$ConversionWarner,com.sun.tools.javac.comp.Check$DefaultMethodClashFilter,com.sun.tools.javac.comp.Check$ClashFilter,com.sun.tools.javac.comp.Check$CycleChecker,com.sun.tools.javac.comp.Check$Validator,com.sun.tools.javac.comp.Check$NestedCheckContext,com.sun.tools.javac.comp.Check$CheckContext,com.sun.tools.javac.comp.Check$4,com.sun.tools.javac.comp.Check$1AnnotationValidator,com.sun.tools.javac.comp.Check$1SpecialTreeVisitor,com.sun.tools.javac.comp.Check$3,com.sun.tools.javac.comp.Check$2,com.sun.tools.javac.comp.Check$1"
};

$Object* allocate$Check($Class* clazz) {
	return $of($alloc(Check));
}

$Context$Key* Check::checkKey = nullptr;
$Types$SimpleVisitor* Check::denotableChecker = nullptr;

Check* Check::instance($Context* context) {
	$init(Check);
	$var(Check, instance, $cast(Check, $nc(context)->get(Check::checkKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Check, context));
	}
	return instance;
}

void Check::init$($Context* context) {
	$set(this, compiled, $new($HashMap));
	$set(this, localClassNameIndexes, $new($HashMap));
	$set(this, basicHandler, $new($Check$1, this));
	$set(this, isTypeArgErroneous$, $new($Check$3, this));
	$set(this, overrideWarner, $new($Warner));
	$set(this, equalsHasCodeFilter, static_cast<$Predicate*>($new(Check$$Lambda$lambda$new$6)));
	$nc(context)->put(Check::checkKey, $of(this));
	$set(this, names, $Names::instance(context));
	$set(this, dfltTargetMeta, $new($NameArray, {
		$nc(this->names)->PACKAGE,
		$nc(this->names)->TYPE,
		$nc(this->names)->FIELD,
		$nc(this->names)->RECORD_COMPONENT,
		$nc(this->names)->METHOD,
		$nc(this->names)->CONSTRUCTOR,
		$nc(this->names)->ANNOTATION_TYPE,
		$nc(this->names)->LOCAL_VARIABLE,
		$nc(this->names)->PARAMETER,
		$nc(this->names)->MODULE
	}));
	$set(this, log, $Log::instance(context));
	$set(this, rs, $Resolve::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, enter, $Enter::instance(context));
	$set(this, deferredAttr, $DeferredAttr::instance(context));
	$set(this, infer, $Infer::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, typeAnnotations, $TypeAnnotations::instance(context));
	$set(this, diags, $JCDiagnostic$Factory::instance(context));
	$var($Options, options, $Options::instance(context));
	$set(this, lint, $Lint::instance(context));
	$load($JavaFileManager);
	$set(this, fileManager, $cast($JavaFileManager, context->get($JavaFileManager::class$)));
	$set(this, source, $Source::instance(context));
	$set(this, target, $Target::instance(context));
	this->warnOnAnyAccessToMembers = $nc(options)->isSet("warnOnAccessToMembers"_s);
	$Target* target = $Target::instance(context);
	this->syntheticNameChar = $nc(target)->syntheticNameChar();
	$set(this, profile, $Profile::instance(context));
	$set(this, preview, $Preview::instance(context));
	$init($Lint$LintCategory);
	bool verboseDeprecated = $nc(this->lint)->isEnabled($Lint$LintCategory::DEPRECATION);
	bool verboseRemoval = $nc(this->lint)->isEnabled($Lint$LintCategory::REMOVAL);
	bool verboseUnchecked = $nc(this->lint)->isEnabled($Lint$LintCategory::UNCHECKED);
	bool enforceMandatoryWarnings = true;
	$set(this, deprecationHandler, $new($MandatoryWarningHandler, this->log, nullptr, verboseDeprecated, enforceMandatoryWarnings, "deprecated"_s, $Lint$LintCategory::DEPRECATION));
	$set(this, removalHandler, $new($MandatoryWarningHandler, this->log, nullptr, verboseRemoval, enforceMandatoryWarnings, "removal"_s, $Lint$LintCategory::REMOVAL));
	$set(this, uncheckedHandler, $new($MandatoryWarningHandler, this->log, nullptr, verboseUnchecked, enforceMandatoryWarnings, "unchecked"_s, $Lint$LintCategory::UNCHECKED));
	$set(this, sunApiHandler, $new($MandatoryWarningHandler, this->log, nullptr, false, enforceMandatoryWarnings, "sunapi"_s, nullptr));
	$set(this, deferredLintHandler, $DeferredLintHandler::instance(context));
	$init($Source$Feature);
	this->allowRecords = $Source$Feature::RECORDS->allowedInSource(this->source);
	this->allowSealed = $Source$Feature::SEALED_CLASSES->allowedInSource(this->source);
}

$Lint* Check::setLint($Lint* newLint) {
	$var($Lint, prev, this->lint);
	$set(this, lint, newLint);
	return prev;
}

$Symbol$MethodSymbol* Check::setMethod($Symbol$MethodSymbol* newMethod) {
	$var($Symbol$MethodSymbol, prev, this->method);
	$set(this, method, newMethod);
	return prev;
}

void Check::warnDeprecated($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	if ($nc(sym)->isDeprecatedForRemoval()) {
		$init($Lint$LintCategory);
		if (!$nc(this->lint)->isSuppressed($Lint$LintCategory::REMOVAL)) {
			$init($Kinds$Kind);
			if (sym->kind == $Kinds$Kind::MDL) {
				$nc(this->removalHandler)->report(pos, $($CompilerProperties$Warnings::HasBeenDeprecatedForRemovalModule(sym)));
			} else {
				$nc(this->removalHandler)->report(pos, $($CompilerProperties$Warnings::HasBeenDeprecatedForRemoval(sym, $(sym->location()))));
			}
		}
	} else {
		$init($Lint$LintCategory);
		if (!$nc(this->lint)->isSuppressed($Lint$LintCategory::DEPRECATION)) {
			$init($Kinds$Kind);
			if (sym->kind == $Kinds$Kind::MDL) {
				$nc(this->deprecationHandler)->report(pos, $($CompilerProperties$Warnings::HasBeenDeprecatedModule(sym)));
			} else {
				$nc(this->deprecationHandler)->report(pos, $($CompilerProperties$Warnings::HasBeenDeprecated(sym, $(sym->location()))));
			}
		}
	}
}

void Check::warnPreviewAPI($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Warning* warnKey) {
	$init($Lint$LintCategory);
	if (!$nc(this->lint)->isSuppressed($Lint$LintCategory::PREVIEW)) {
		$nc(this->preview)->reportPreviewWarning(pos, warnKey);
	}
}

void Check::warnDeclaredUsingPreview($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$init($Lint$LintCategory);
	if (!$nc(this->lint)->isSuppressed($Lint$LintCategory::PREVIEW)) {
		$nc(this->preview)->reportPreviewWarning(pos, $($CompilerProperties$Warnings::DeclaredUsingPreview($($Kinds::kindName(sym)), sym)));
	}
}

void Check::warnUnchecked($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Warning* warnKey) {
	$init($Lint$LintCategory);
	if (!$nc(this->lint)->isSuppressed($Lint$LintCategory::UNCHECKED)) {
		$nc(this->uncheckedHandler)->report(pos, warnKey);
	}
}

void Check::warnUnsafeVararg($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Warning* warnKey) {
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::VARARGS)) {
		$nc(this->log)->warning($Lint$LintCategory::VARARGS, pos, warnKey);
	}
}

void Check::warnStatic($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Warning* warnKey) {
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::STATIC)) {
		$nc(this->log)->warning($Lint$LintCategory::STATIC, pos, warnKey);
	}
}

void Check::warnDivZero($JCDiagnostic$DiagnosticPosition* pos) {
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::DIVZERO)) {
		$init($CompilerProperties$Warnings);
		$nc(this->log)->warning($Lint$LintCategory::DIVZERO, pos, $CompilerProperties$Warnings::DivZero);
	}
}

void Check::reportDeferredDiagnostics() {
	$nc(this->deprecationHandler)->reportDeferredDiagnostic();
	$nc(this->removalHandler)->reportDeferredDiagnostic();
	$nc(this->uncheckedHandler)->reportDeferredDiagnostic();
	$nc(this->sunApiHandler)->reportDeferredDiagnostic();
}

$Type* Check::completionError($JCDiagnostic$DiagnosticPosition* pos, $Symbol$CompletionFailure* ex) {
	$useLocalCurrentObjectStackCache();
	$init($JCDiagnostic$DiagnosticFlag);
	$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::NON_DEFERRABLE, pos, $($CompilerProperties$Errors::CantAccess($nc(ex)->sym, $(ex->getDetailValue()))));
	return $nc(this->syms)->errType;
}

$Type* Check::typeTagError($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic* required, Object$* found) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Type, type, nullptr);
		bool var$1 = $instanceOf($Type, found);
		if (var$1) {
			$assign(type, $cast($Type, found));
			var$1 = true;
		}
		bool var$0 = var$1;
		$init($TypeTag);
		if (var$0 && $nc(type)->hasTag($TypeTag::VOID)) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error(pos, $CompilerProperties$Errors::IllegalStartOfType);
			return $nc(this->syms)->errType;
		}
	}
	$nc(this->log)->error(pos, $($CompilerProperties$Errors::TypeFoundReq(found, required)));
	$var($Type, type, nullptr);
	bool var$2 = $instanceOf($Type, found);
	if (var$2) {
		$assign(type, $cast($Type, found));
		var$2 = true;
	}
	return $nc(this->types)->createErrorType(var$2 ? type : $nc(this->syms)->errType);
}

void Check::earlyRefError($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym) {
	$nc(this->log)->error(pos, $($CompilerProperties$Errors::CantRefBeforeCtorCalled(sym)));
}

void Check::duplicateError($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($nc(sym)->type)->isErroneous()) {
		$var($Symbol, location, sym->location());
		$init($Kinds$Kind);
		if ($nc(location)->kind == $Kinds$Kind::MTH && $nc(($cast($Symbol$MethodSymbol, location)))->isStaticOrInstanceInit()) {
			$var($Kinds$KindName, var$0, $Kinds::kindName(sym));
			$var($Symbol, var$1, sym);
			$var($Kinds$KindName, var$2, $Kinds::kindName($(sym->location())));
			$var($Kinds$KindName, var$3, $Kinds::kindName($(static_cast<$Symbol*>($nc($(sym->location()))->enclClass()))));
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::AlreadyDefinedInClinit(var$0, var$1, var$2, var$3, $($nc($(sym->location()))->enclClass()))));
		} else {
			if (location->kind != $Kinds$Kind::MTH || (((int64_t)($nc(sym->owner)->flags_field & (uint64_t)(int64_t)0x0000001000000000)) == 0) || (((int64_t)($nc(sym->owner)->flags_field & (uint64_t)(int64_t)0x2000000000000000)) == 0)) {
				$var($Kinds$KindName, var$4, $Kinds::kindName(sym));
				$var($Symbol, var$5, sym);
				$var($Kinds$KindName, var$6, $Kinds::kindName($(sym->location())));
				$nc(this->log)->error(pos, $($CompilerProperties$Errors::AlreadyDefined(var$4, var$5, var$6, $(sym->location()))));
			}
		}
	}
}

void Check::varargsDuplicateError($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym1, $Symbol* sym2) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !$nc($nc(sym1)->type)->isErroneous();
	if (var$0 && !$nc($nc(sym2)->type)->isErroneous()) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::ArrayAndVarargs(sym1, sym2, $(sym2->location()))));
	}
}

void Check::checkTransparentVar($JCDiagnostic$DiagnosticPosition* pos, $Symbol$VarSymbol* v, $Scope* s) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(s)->getSymbolsByName($nc(v)->name)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				if ($nc(sym)->owner != $nc(v)->owner) {
					break;
				}
				$init($Kinds$Kind);
				$init($Kinds$KindSelector);
				if ($nc(sym)->kind == $Kinds$Kind::VAR && $nc($nc(sym->owner)->kind)->matches($Kinds$KindSelector::VAL_MTH) && $nc(v)->name != $nc(this->names)->error) {
					duplicateError(pos, sym);
					return;
				}
			}
		}
	}
}

void Check::checkTransparentClass($JCDiagnostic$DiagnosticPosition* pos, $Symbol$ClassSymbol* c, $Scope* s) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(s)->getSymbolsByName($nc(c)->name)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				if ($nc(sym)->owner != $nc(c)->owner) {
					break;
				}
				$init($Kinds$Kind);
				$init($TypeTag);
				bool var$0 = $nc(sym)->kind == $Kinds$Kind::TYP && !$nc(sym->type)->hasTag($TypeTag::TYPEVAR);
				$init($Kinds$KindSelector);
				if (var$0 && $nc($nc(sym->owner)->kind)->matches($Kinds$KindSelector::VAL_MTH) && $nc(c)->name != $nc(this->names)->error) {
					duplicateError(pos, sym);
					return;
				}
			}
		}
	}
}

bool Check::checkUniqueClassName($JCDiagnostic$DiagnosticPosition* pos, $Name* name, $Scope* s) {
	$useLocalCurrentObjectStackCache();
	{
		$init($Scope$LookupKind);
		$var($Iterator, i$, $nc($($nc(s)->getSymbolsByName(name, $Scope$LookupKind::NON_RECURSIVE)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				$init($Kinds$Kind);
				if ($nc(sym)->kind == $Kinds$Kind::TYP && sym->name != $nc(this->names)->error) {
					duplicateError(pos, sym);
					return false;
				}
			}
		}
	}
	{
		$var($Symbol, sym, s->owner);
		for (; sym != nullptr; $assign(sym, $nc(sym)->owner)) {
			$init($Kinds$Kind);
			if (sym->kind == $Kinds$Kind::TYP && sym->name == name && sym->name != $nc(this->names)->error) {
				duplicateError(pos, sym);
				return true;
			}
		}
	}
	return true;
}

$Name* Check::localClassName($Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$var($Name, enclFlatname, $nc($($nc($nc(c)->owner)->enclClass()))->flatname);
	$var($String, enclFlatnameStr, $nc(enclFlatname)->toString());
	$var($Pair, key, $new($Pair, enclFlatname, c->name));
	$var($Integer, index, $cast($Integer, $nc(this->localClassNameIndexes)->get(key)));
	for (int32_t i = (index == nullptr) ? 1 : $nc(index)->intValue();; ++i) {
		$var($Name, flatname, $nc(this->names)->fromString($$str({enclFlatnameStr, $$str(this->syntheticNameChar), $$str(i), c->name})));
		if (getCompiled($nc($(c->packge()))->modle, flatname) == nullptr) {
			$nc(this->localClassNameIndexes)->put(key, $($Integer::valueOf(i + 1)));
			return flatname;
		}
	}
}

void Check::clearLocalClassNameIndexes($Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if ($nc(c)->owner != nullptr && $nc(c->owner)->kind != $Kinds$Kind::NIL) {
		$nc(this->localClassNameIndexes)->remove($$new($Pair, $nc($($nc(c->owner)->enclClass()))->flatname, c->name));
	}
}

void Check::newRound() {
	$nc(this->compiled)->clear();
	$nc(this->localClassNameIndexes)->clear();
}

void Check::clear() {
	$nc(this->deprecationHandler)->clear();
	$nc(this->removalHandler)->clear();
	$nc(this->uncheckedHandler)->clear();
	$nc(this->sunApiHandler)->clear();
}

void Check::putCompiled($Symbol$ClassSymbol* csym) {
	$useLocalCurrentObjectStackCache();
	$nc(this->compiled)->put($($Pair::of($nc($($nc(csym)->packge()))->modle, csym->flatname)), csym);
}

$Symbol$ClassSymbol* Check::getCompiled($Symbol$ClassSymbol* csym) {
	$useLocalCurrentObjectStackCache();
	return $cast($Symbol$ClassSymbol, $nc(this->compiled)->get($($Pair::of($nc($($nc(csym)->packge()))->modle, csym->flatname))));
}

$Symbol$ClassSymbol* Check::getCompiled($Symbol$ModuleSymbol* msym, $Name* flatname) {
	return $cast($Symbol$ClassSymbol, $nc(this->compiled)->get($($Pair::of(msym, flatname))));
}

void Check::removeCompiled($Symbol$ClassSymbol* csym) {
	$useLocalCurrentObjectStackCache();
	$nc(this->compiled)->remove($($Pair::of($nc($($nc(csym)->packge()))->modle, csym->flatname)));
}

$Type* Check::checkType($JCDiagnostic$DiagnosticPosition* pos, $Type* found, $Type* req) {
	return checkType(pos, found, req, this->basicHandler);
}

$Type* Check::checkType($JCDiagnostic$DiagnosticPosition* pos, $Type* found, $Type* req, $Check$CheckContext* checkContext) {
	$useLocalCurrentObjectStackCache();
	$var($InferenceContext, inferenceContext, $nc(checkContext)->inferenceContext());
	bool var$0 = $nc(inferenceContext)->free(req);
	if (var$0 || $nc(inferenceContext)->free(found)) {
		$var($List, var$1, $List::of(req, found));
		inferenceContext->addFreeTypeListener(var$1, static_cast<$Infer$FreeTypeListener*>($$new(Check$$Lambda$lambda$checkType$0$1, this, pos, found, req, checkContext)));
	}
	$init($TypeTag);
	if ($nc(req)->hasTag($TypeTag::ERROR)) {
		return req;
	}
	if ($nc(req)->hasTag($TypeTag::NONE)) {
		return found;
	}
	if (checkContext->compatible(found, req, $(checkContext->checkWarner(pos, found, req)))) {
		return found;
	} else {
		bool var$2 = $nc(found)->isNumeric();
		if (var$2 && $nc(req)->isNumeric()) {
			checkContext->report(pos, $($nc(this->diags)->fragment($($CompilerProperties$Fragments::PossibleLossOfPrecision(found, req)))));
			return $nc(this->types)->createErrorType(found);
		}
		checkContext->report(pos, $($nc(this->diags)->fragment($($CompilerProperties$Fragments::InconvertibleTypes(found, req)))));
		return $nc(this->types)->createErrorType(found);
	}
}

$Type* Check::checkCastable($JCDiagnostic$DiagnosticPosition* pos, $Type* found, $Type* req) {
	return checkCastable(pos, found, req, this->basicHandler);
}

$Type* Check::checkCastable($JCDiagnostic$DiagnosticPosition* pos, $Type* found, $Type* req, $Check$CheckContext* checkContext) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->types)->isCastable(found, req, $(castWarner(pos, found, req)))) {
		return req;
	} else {
		$nc(checkContext)->report(pos, $($nc(this->diags)->fragment($($CompilerProperties$Fragments::InconvertibleTypes(found, req)))));
		return $nc(this->types)->createErrorType(found);
	}
}

void Check::checkRedundantCast($Env* env, $JCTree$JCTypeCast* tree) {
	bool var$2 = !$nc($nc(tree)->type)->isErroneous();
	bool var$1 = var$2 && $nc(this->types)->isSameType($nc(tree->expr)->type, $nc(tree->clazz)->type);
	bool var$0 = var$1 && !$TreeInfo::containsTypeAnnotation(tree->clazz);
	if (var$0 && !is292targetTypeCast(tree)) {
		$nc(this->deferredLintHandler)->report(static_cast<$DeferredLintHandler$LintLogger*>($$new(Check$$Lambda$lambda$checkRedundantCast$1$2, this, tree)));
	}
}

bool Check::is292targetTypeCast($JCTree$JCTypeCast* tree) {
	$useLocalCurrentObjectStackCache();
	bool is292targetTypeCast = false;
	$var($JCTree$JCExpression, expr, $TreeInfo::skipParens($nc(tree)->expr));
	$init($JCTree$Tag);
	if ($nc(expr)->hasTag($JCTree$Tag::APPLY)) {
		$var($JCTree$JCMethodInvocation, apply, $cast($JCTree$JCMethodInvocation, expr));
		$var($Symbol, sym, $TreeInfo::symbol(apply->meth));
		$init($Kinds$Kind);
		is292targetTypeCast = sym != nullptr && sym->kind == $Kinds$Kind::MTH && ((int64_t)(sym->flags() & (uint64_t)(int64_t)0x0000002000000000)) != 0;
	}
	return is292targetTypeCast;
}

bool Check::checkExtends($Type* a$renamed, $Type* bound) {
	$useLocalCurrentObjectStackCache();
	$var($Type, a, a$renamed);
	if ($nc(a)->isUnbound()) {
		return true;
	} else {
		$init($TypeTag);
		if (!a->hasTag($TypeTag::WILDCARD)) {
			$assign(a, $nc(this->types)->cvarUpperBound(a));
			return $nc(this->types)->isSubtype(a, bound);
		} else if (a->isExtendsBound()) {
			return $nc(this->types)->isCastable(bound, $($nc(this->types)->wildUpperBound(a)), $nc(this->types)->noWarnings);
		} else if (a->isSuperBound()) {
			return !$nc(this->types)->notSoftSubtype($($nc(this->types)->wildLowerBound(a)), bound);
		}
	}
	return true;
}

$Type* Check::checkNonVoid($JCDiagnostic$DiagnosticPosition* pos, $Type* t) {
	$init($TypeTag);
	if ($nc(t)->hasTag($TypeTag::VOID)) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error(pos, $CompilerProperties$Errors::VoidNotAllowedHere);
		return $nc(this->types)->createErrorType(t);
	} else {
		return t;
	}
}

$Type* Check::checkClassOrArrayType($JCDiagnostic$DiagnosticPosition* pos, $Type* t) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	bool var$1 = !$nc(t)->hasTag($TypeTag::CLASS);
	bool var$0 = var$1 && !t->hasTag($TypeTag::ARRAY);
	if (var$0 && !t->hasTag($TypeTag::ERROR)) {
		$var($JCDiagnostic$DiagnosticPosition, var$2, pos);
		$init($CompilerProperties$Fragments);
		$var($JCDiagnostic, var$3, $nc(this->diags)->fragment($CompilerProperties$Fragments::TypeReqClassArray));
		return typeTagError(var$2, var$3, $(asTypeParam(t)));
	} else {
		return t;
	}
}

$Type* Check::checkClassType($JCDiagnostic$DiagnosticPosition* pos, $Type* t) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	bool var$0 = !$nc(t)->hasTag($TypeTag::CLASS);
	if (var$0 && !t->hasTag($TypeTag::ERROR)) {
		$var($JCDiagnostic$DiagnosticPosition, var$1, pos);
		$init($CompilerProperties$Fragments);
		$var($JCDiagnostic, var$2, $nc(this->diags)->fragment($CompilerProperties$Fragments::TypeReqClass));
		return typeTagError(var$1, var$2, $(asTypeParam(t)));
	} else {
		return t;
	}
}

$Object* Check::asTypeParam($Type* t) {
	$init($TypeTag);
	return $of(($nc(t)->hasTag($TypeTag::TYPEVAR)) ? $of($nc(this->diags)->fragment($($CompilerProperties$Fragments::TypeParameter(t)))) : $of(t));
}

$Type* Check::checkConstructorRefType($JCDiagnostic$DiagnosticPosition* pos, $Type* t$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, t$renamed);
	$assign(t, checkClassOrArrayType(pos, t));
	$init($TypeTag);
	if ($nc(t)->hasTag($TypeTag::CLASS)) {
		if (((int64_t)($nc(t->tsym)->flags() & (uint64_t)(int64_t)(1024 | 512))) != 0) {
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::AbstractCantBeInstantiated(t->tsym)));
			$assign(t, $nc(this->types)->createErrorType(t));
		} else if (((int64_t)($nc(t->tsym)->flags() & (uint64_t)(int64_t)16384)) != 0) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error(pos, $CompilerProperties$Errors::EnumCantBeInstantiated);
			$assign(t, $nc(this->types)->createErrorType(t));
		} else {
			$assign(t, checkClassType(pos, t, true));
		}
	} else {
		if (t->hasTag($TypeTag::ARRAY)) {
			if (!$nc(this->types)->isReifiable($nc(($cast($Type$ArrayType, t)))->elemtype)) {
				$init($CompilerProperties$Errors);
				$nc(this->log)->error(pos, $CompilerProperties$Errors::GenericArrayCreation);
				$assign(t, $nc(this->types)->createErrorType(t));
			}
		}
	}
	return t;
}

$Type* Check::checkClassType($JCDiagnostic$DiagnosticPosition* pos, $Type* t$renamed, bool noBounds) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, t$renamed);
	$assign(t, checkClassType(pos, t));
	if (noBounds && $nc(t)->isParameterized()) {
		$var($List, args, t->getTypeArguments());
		while ($nc(args)->nonEmpty()) {
			$init($TypeTag);
			if ($nc(($cast($Type, args->head)))->hasTag($TypeTag::WILDCARD)) {
				$init($CompilerProperties$Fragments);
				return typeTagError(pos, $($nc(this->diags)->fragment($CompilerProperties$Fragments::TypeReqExact)), args->head);
			}
			$assign(args, args->tail);
		}
	}
	return t;
}

$Type* Check::checkRefType($JCDiagnostic$DiagnosticPosition* pos, $Type* t) {
	if ($nc(t)->isReference()) {
		return t;
	} else {
		$init($CompilerProperties$Fragments);
		return typeTagError(pos, $($nc(this->diags)->fragment($CompilerProperties$Fragments::TypeReqRef)), t);
	}
}

$List* Check::checkRefTypes($List* trees, $List* types) {
	$useLocalCurrentObjectStackCache();
	$var($List, tl, trees);
	{
		$var($List, l, types);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$set(l, head, checkRefType($($nc(($cast($JCTree$JCExpression, $nc(tl)->head)))->pos()), $cast($Type, l->head)));
			$assign(tl, $nc(tl)->tail);
		}
	}
	return types;
}

$Type* Check::checkNullOrRefType($JCDiagnostic$DiagnosticPosition* pos, $Type* t) {
	bool var$0 = $nc(t)->isReference();
	$init($TypeTag);
	if (var$0 || $nc(t)->hasTag($TypeTag::BOT)) {
		return t;
	} else {
		$init($CompilerProperties$Fragments);
		return typeTagError(pos, $($nc(this->diags)->fragment($CompilerProperties$Fragments::TypeReqRef)), t);
	}
}

bool Check::checkDisjoint($JCDiagnostic$DiagnosticPosition* pos, int64_t flags, int64_t set1, int64_t set2) {
	$useLocalCurrentObjectStackCache();
	if (((int64_t)(flags & (uint64_t)set1)) != 0 && ((int64_t)(flags & (uint64_t)set2)) != 0) {
		$var($Set, var$0, static_cast<$Set*>($Flags::asFlagSet($TreeInfo::firstFlag((int64_t)(flags & (uint64_t)set1)))));
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::IllegalCombinationOfModifiers(var$0, $($Flags::asFlagSet($TreeInfo::firstFlag((int64_t)(flags & (uint64_t)set2)))))));
		return false;
	} else {
		return true;
	}
}

$Type* Check::checkDiamond($JCTree$JCNewClass* tree, $Type* t) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !$TreeInfo::isDiamond(tree);
	if (var$0 || $nc(t)->isErroneous()) {
		return checkClassType($($nc($nc(tree)->clazz)->pos()), t, true);
	} else {
		$init($Source$Feature);
		if ($nc(tree)->def != nullptr && !$Source$Feature::DIAMOND_WITH_ANONYMOUS_CLASS_CREATION->allowedInSource(this->source)) {
			$init($JCDiagnostic$DiagnosticFlag);
			$var($JCDiagnostic$DiagnosticFlag, var$1, $JCDiagnostic$DiagnosticFlag::SOURCE_LEVEL);
			$var($JCDiagnostic$DiagnosticPosition, var$2, $nc(tree->clazz)->pos());
			$nc(this->log)->error(var$1, var$2, $($CompilerProperties$Errors::CantApplyDiamond1(t, $($Source$Feature::DIAMOND_WITH_ANONYMOUS_CLASS_CREATION->fragment(this->source->name$)))));
		}
		if ($nc($($nc($nc(t->tsym)->type)->getTypeArguments()))->isEmpty()) {
			$var($JCDiagnostic$DiagnosticPosition, var$3, $nc($nc(tree)->clazz)->pos());
			$nc(this->log)->error(var$3, $($CompilerProperties$Errors::CantApplyDiamond1(t, $($CompilerProperties$Fragments::DiamondNonGeneric(t)))));
			return $nc(this->types)->createErrorType(t);
		} else if ($nc(tree)->typeargs != nullptr && $nc(tree->typeargs)->nonEmpty()) {
			$var($JCDiagnostic$DiagnosticPosition, var$4, $nc(tree->clazz)->pos());
			$nc(this->log)->error(var$4, $($CompilerProperties$Errors::CantApplyDiamond1(t, $($CompilerProperties$Fragments::DiamondAndExplicitParams(t)))));
			return $nc(this->types)->createErrorType(t);
		} else {
			return t;
		}
	}
}

$List* Check::checkDiamondDenotable($Type$ClassType* t) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc($($nc(t)->allparams()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, arg, $cast($Type, i$->next()));
			{
				if (!checkDenotable(arg)) {
					buf->append(arg);
				}
			}
		}
	}
	return buf->toList();
}

bool Check::checkDenotable($Type* t) {
	return $nc(($cast($Boolean, $($nc(Check::denotableChecker)->visit(t, nullptr)))))->booleanValue();
}

void Check::checkVarargsMethodDecl($Env* env, $JCTree$JCMethodDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$MethodSymbol, m, $nc(tree)->sym);
	bool hasTrustMeAnno = $nc(m)->attribute($nc($nc(this->syms)->trustMeType)->tsym) != nullptr;
	$var($Type, varargElemType, nullptr);
	if (m->isVarArgs()) {
		$assign(varargElemType, $nc(this->types)->elemtype($nc(($cast($JCTree$JCVariableDecl, $($nc(tree->params)->last()))))->type));
	}
	if (hasTrustMeAnno && !isTrustMeAllowedOnMethod(m)) {
		if (varargElemType != nullptr) {
			$init($Source$Feature);
			$var($JCDiagnostic, msg, $Source$Feature::PRIVATE_SAFE_VARARGS->allowedInSource(this->source) ? $nc(this->diags)->fragment($($CompilerProperties$Fragments::VarargsTrustmeOnVirtualVarargs(m))) : $nc(this->diags)->fragment($($CompilerProperties$Fragments::VarargsTrustmeOnVirtualVarargsFinalOnly(m))));
			$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($CompilerProperties$Errors::VarargsInvalidTrustmeAnno(static_cast<$Symbol*>($nc($nc(this->syms)->trustMeType)->tsym), msg)));
		} else {
			$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($CompilerProperties$Errors::VarargsInvalidTrustmeAnno(static_cast<$Symbol*>($nc($nc(this->syms)->trustMeType)->tsym), $($CompilerProperties$Fragments::VarargsTrustmeOnNonVarargsMeth(m)))));
		}
	} else if (hasTrustMeAnno && varargElemType != nullptr && $nc(this->types)->isReifiable(varargElemType)) {
		warnUnsafeVararg(tree, $($CompilerProperties$Warnings::VarargsRedundantTrustmeAnno(static_cast<$Symbol*>($nc($nc(this->syms)->trustMeType)->tsym), $($nc(this->diags)->fragment($($CompilerProperties$Fragments::VarargsTrustmeOnReifiableVarargs(varargElemType)))))));
	} else if (!hasTrustMeAnno && varargElemType != nullptr && !$nc(this->types)->isReifiable(varargElemType)) {
		$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(($cast($JCTree$JCVariableDecl, $nc(tree->params)->head)))->pos());
		warnUnchecked(var$0, $($CompilerProperties$Warnings::UncheckedVarargsNonReifiableType(varargElemType)));
	}
}

bool Check::isTrustMeAllowedOnMethod($Symbol* s) {
	bool var$0 = ((int64_t)($nc(s)->flags() & (uint64_t)(int64_t)0x0000000400000000)) != 0;
	if (var$0) {
		bool var$1 = s->isConstructor();
		if (!var$1) {
			int64_t var$2 = $nc(s)->flags();
			$init($Source$Feature);
			var$1 = ((int64_t)(var$2 & (uint64_t)(int64_t)((8 | 16) | ($Source$Feature::PRIVATE_SAFE_VARARGS->allowedInSource(this->source) ? 2 : 0)))) != 0;
		}
		var$0 = (var$1);
	}
	return var$0;
}

$Type* Check::checkLocalVarType($JCDiagnostic$DiagnosticPosition* pos, $Type* t, $Name* name) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if ($nc(t)->hasTag($TypeTag::BOT)) {
		$init($CompilerProperties$Fragments);
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::CantInferLocalVarType(name, $CompilerProperties$Fragments::LocalCantInferNull)));
		return $nc(this->types)->createErrorType(t);
	} else {
		if (t->hasTag($TypeTag::VOID)) {
			$init($CompilerProperties$Fragments);
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::CantInferLocalVarType(name, $CompilerProperties$Fragments::LocalCantInferVoid)));
			return $nc(this->types)->createErrorType(t);
		}
	}
	return $nc(this->types)->upward(t, $($nc(this->types)->captures(t)));
}

$Type* Check::checkMethod($Type* mtype, $Symbol* sym, $Env* env, $List* argtrees, $List* argtypes, bool useVarargs, $InferenceContext* inferenceContext) {
	$useLocalCurrentObjectStackCache();
	if ($nc(inferenceContext)->free(mtype)) {
		$var($List, var$0, $List::of(mtype));
		inferenceContext->addFreeTypeListener(var$0, static_cast<$Infer$FreeTypeListener*>($$new(Check$$Lambda$lambda$checkMethod$2$3, this, mtype, sym, env, argtrees, argtypes, useVarargs)));
		return mtype;
	}
	$var($Type, owntype, mtype);
	$var($List, formals, $nc(owntype)->getParameterTypes());
	$var($List, nonInferred, $nc($nc(sym)->type)->getParameterTypes());
	int32_t var$1 = $nc(nonInferred)->length();
	if (var$1 != $nc(formals)->length()) {
		$assign(nonInferred, formals);
	}
	$var($Type, last, useVarargs ? $cast($Type, $nc(formals)->last()) : ($Type*)nullptr);
	if (sym->name == $nc(this->names)->init && $equals(sym->owner, $nc(this->syms)->enumSym)) {
		$assign(formals, $nc(formals->tail)->tail);
		$assign(nonInferred, $nc($nc(nonInferred)->tail)->tail);
	}
	if (((int64_t)(sym->flags() & (uint64_t)(int64_t)0x0200000000000000)) != 0) {
		$assign(formals, formals->tail);
		$assign(nonInferred, $nc(nonInferred)->tail);
	}
	$var($List, args, argtrees);
	if (args != nullptr) {
		while (!$equals($nc(formals)->head, last)) {
			$var($JCTree, arg, $cast($JCTree, $nc(args)->head));
			$var($Warner, warn, convertWarner($($nc(arg)->pos()), arg->type, $cast($Type, $nc(nonInferred)->head)));
			assertConvertible(arg, $nc(arg)->type, $cast($Type, formals->head), warn);
			$assign(args, args->tail);
			$assign(formals, formals->tail);
			$assign(nonInferred, $nc(nonInferred)->tail);
		}
		if (useVarargs) {
			$var($Type, varArg, $nc(this->types)->elemtype(last));
			while ($nc(args)->tail != nullptr) {
				$var($JCTree, arg, $cast($JCTree, args->head));
				$var($Warner, warn, convertWarner($($nc(arg)->pos()), arg->type, varArg));
				assertConvertible(arg, $nc(arg)->type, varArg, warn);
				$assign(args, args->tail);
			}
		} else if (((int64_t)(sym->flags() & (uint64_t)((int64_t)0x0000000400000000 | (int64_t)0x0000400000000000))) == (int64_t)0x0000000400000000) {
			$var($Type, varParam, $cast($Type, $nc($(owntype->getParameterTypes()))->last()));
			$var($Type, lastArg, $cast($Type, $nc(argtypes)->last()));
			bool var$2 = $nc(this->types)->isSubtypeUnchecked(lastArg, $($nc(this->types)->elemtype(varParam)));
			if (var$2) {
				$var($Type, var$3, $nc(this->types)->erasure(varParam));
				var$2 = !$nc(this->types)->isSameType(var$3, $($nc(this->types)->erasure(lastArg)));
			}
			if (var$2) {
				$var($JCDiagnostic$DiagnosticPosition, var$4, $nc(($cast($JCTree$JCExpression, $($nc(argtrees)->last()))))->pos());
				$nc(this->log)->warning(var$4, $($CompilerProperties$Warnings::InexactNonVarargsCall($($nc(this->types)->elemtype(varParam)), varParam)));
			}
		}
	}
	if (useVarargs) {
		$var($Type, argtype, $cast($Type, $nc($(owntype->getParameterTypes()))->last()));
		bool var$5 = !$nc(this->types)->isReifiable(argtype);
		if (var$5) {
			bool var$6 = $nc($(sym->baseSymbol()))->attribute($nc($nc(this->syms)->trustMeType)->tsym) == nullptr;
			var$5 = (var$6 || !isTrustMeAllowedOnMethod(sym));
		}
		if (var$5) {
			$var($JCDiagnostic$DiagnosticPosition, var$7, $nc($nc(env)->tree)->pos());
			warnUnchecked(var$7, $($CompilerProperties$Warnings::UncheckedGenericArrayCreation(argtype)));
		}
		$TreeInfo::setVarargsElement($nc(env)->tree, $($nc(this->types)->elemtype(argtype)));
	}
	return owntype;
}

void Check::assertConvertible($JCTree* tree, $Type* actual, $Type* formal, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->types)->isConvertible(actual, formal, warn)) {
		return;
	}
	bool var$1 = $nc(formal)->isCompound();
	bool var$0 = var$1 && $nc(this->types)->isSubtype(actual, $($nc(this->types)->supertype(formal)));
	if (var$0 && $nc(this->types)->isSubtypeUnchecked(actual, $($nc(this->types)->interfaces(formal)), warn)) {
		return;
	}
}

bool Check::checkValidGenericType($Type* t) {
	return firstIncompatibleTypeArg(t) == nullptr;
}

$Type* Check::firstIncompatibleTypeArg($Type* type) {
	$useLocalCurrentObjectStackCache();
	$var($List, formals, $nc($nc($nc(type)->tsym)->type)->allparams());
	$var($List, actuals, type->allparams());
	$var($List, args, type->getTypeArguments());
	$var($List, forms, $nc($nc(type->tsym)->type)->getTypeArguments());
	$var($ListBuffer, bounds_buf, $new($ListBuffer));
	while (true) {
		bool var$0 = $nc(args)->nonEmpty();
		if (!(var$0 && $nc(forms)->nonEmpty())) {
			break;
		}
		{
			bounds_buf->append($($nc(this->types)->subst($($nc(($cast($Type, forms->head)))->getUpperBound()), formals, actuals)));
			$assign(args, args->tail);
			$assign(forms, forms->tail);
		}
	}
	$assign(args, type->getTypeArguments());
	$var($List, tvars_cap, $nc(this->types)->substBounds(formals, formals, $($nc($($nc(this->types)->capture(type)))->allparams())));
	while (true) {
		bool var$1 = $nc(args)->nonEmpty();
		if (!(var$1 && $nc(tvars_cap)->nonEmpty())) {
			break;
		}
		{
			$nc(($cast($Type, args->head)))->withTypeVar($cast($Type$TypeVar, tvars_cap->head));
			$assign(args, args->tail);
			$assign(tvars_cap, tvars_cap->tail);
		}
	}
	$assign(args, type->getTypeArguments());
	$var($List, bounds, bounds_buf->toList());
	while (true) {
		bool var$2 = $nc(args)->nonEmpty();
		if (!(var$2 && $nc(bounds)->nonEmpty())) {
			break;
		}
		{
			$var($Type, actual, $cast($Type, args->head));
			bool var$4 = !isTypeArgErroneous(actual);
			bool var$3 = var$4 && !$nc(($cast($Type, bounds->head)))->isErroneous();
			if (var$3 && !checkExtends(actual, $cast($Type, bounds->head))) {
				return $cast($Type, args->head);
			}
			$assign(args, args->tail);
			$assign(bounds, bounds->tail);
		}
	}
	$assign(args, type->getTypeArguments());
	$assign(bounds, bounds_buf->toList());
	{
		$var($Iterator, i$, $nc($($nc($($nc(this->types)->capture(type)))->getTypeArguments()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, arg, $cast($Type, i$->next()));
			{
				$init($TypeTag);
				bool var$7 = $nc(arg)->hasTag($TypeTag::TYPEVAR);
				bool var$6 = var$7 && $nc($(arg->getUpperBound()))->isErroneous();
				bool var$5 = var$6 && !$nc(($cast($Type, $nc(bounds)->head)))->isErroneous();
				if (var$5 && !isTypeArgErroneous($cast($Type, $nc(args)->head))) {
					return $cast($Type, $nc(args)->head);
				}
				$assign(bounds, $nc(bounds)->tail);
				$assign(args, $nc(args)->tail);
			}
		}
	}
	return nullptr;
}

bool Check::isTypeArgErroneous($Type* t) {
	return $nc(($cast($Boolean, $($nc(this->isTypeArgErroneous$)->visit(t)))))->booleanValue();
}

int64_t Check::checkFlags($JCDiagnostic$DiagnosticPosition* pos, int64_t flags, $Symbol* sym, $JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	int64_t mask = 0;
	int64_t implicit = 0;
	$init($Check$5);
	switch ($nc($Check$5::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->get($nc(($nc(sym)->kind))->ordinal())) {
	case 1:
		{
			if ($TreeInfo::isReceiverParam(tree)) {
				mask = 0x0000000200000000;
			} else {
				$init($Kinds$Kind);
				if ($nc(sym->owner)->kind != $Kinds$Kind::TYP) {
					mask = 0x0000000200000010;
				} else if (((int64_t)($nc(sym->owner)->flags_field & (uint64_t)(int64_t)512)) != 0) {
					mask = (implicit = 25);
				} else {
					mask = 16607;
				}
			}
			break;
		}
	case 2:
		{
			if (sym->name == $nc(this->names)->init) {
				if (((int64_t)($nc(sym->owner)->flags_field & (uint64_t)(int64_t)16384)) != 0) {
					implicit = 2;
					mask = 2;
				} else {
					mask = 7;
				}
			} else if (((int64_t)($nc(sym->owner)->flags_field & (uint64_t)(int64_t)512)) != 0) {
				if (((int64_t)($nc(sym->owner)->flags_field & (uint64_t)(int64_t)8192)) != 0) {
					mask = 1025;
					implicit = 1 | 1024;
				} else if (((int64_t)(flags & (uint64_t)(((int64_t)0x0000080000000000 | 8) | 2))) != 0) {
					mask = 0x0000080000000C0B;
					implicit = ((int64_t)(flags & (uint64_t)(int64_t)2)) != 0 ? 0 : 1;
					if (((int64_t)(flags & (uint64_t)(int64_t)0x0000080000000000)) != 0) {
						implicit |= 1024;
					}
				} else {
					mask = (implicit = 1025);
				}
			} else if (((int64_t)($nc(sym->owner)->flags_field & (uint64_t)(int64_t)0x2000000000000000)) != 0) {
				mask = 3135;
			} else {
				mask = 3391;
			}
			if (((int64_t)(flags & (uint64_t)(int64_t)2048)) != 0) {
				warnOnExplicitStrictfp(pos);
			}
			if (((int64_t)((flags | implicit) & (uint64_t)(int64_t)$Flags::ABSTRACT)) == 0 || ((int64_t)((flags) & (uint64_t)$Flags::DEFAULT)) != 0) {
				implicit |= (int64_t)($nc(sym->owner)->flags_field & (uint64_t)(int64_t)2048);
			}
			break;
		}
	case 3:
		{
			$init($Kinds$KindSelector);
			bool var$0 = $nc($nc(sym->owner)->kind)->matches($Kinds$KindSelector::VAL_MTH);
			if (var$0 || (sym->isDirectlyOrIndirectlyLocal() && ((int64_t)(flags & (uint64_t)(int64_t)8192)) != 0)) {
				bool implicitlyStatic = !sym->isAnonymous() && (((int64_t)(flags & (uint64_t)(int64_t)0x2000000000000000)) != 0 || ((int64_t)(flags & (uint64_t)(int64_t)16384)) != 0 || ((int64_t)(flags & (uint64_t)(int64_t)512)) != 0);
				bool staticOrImplicitlyStatic = ((int64_t)(flags & (uint64_t)(int64_t)8)) != 0 || implicitlyStatic;
				mask = staticOrImplicitlyStatic && this->allowRecords && ((int64_t)(flags & (uint64_t)(int64_t)8192)) == 0 ? 24088 : 23568;
				implicit = implicitlyStatic ? (int64_t)8 : implicit;
			} else {
				if ($nc(sym->owner)->kind == $Kinds$Kind::TYP) {
					mask = (((int64_t)(flags & (uint64_t)(int64_t)8)) != 0) && this->allowRecords && ((int64_t)(flags & (uint64_t)(int64_t)8192)) == 0 ? (int64_t)0xC000000000005E1F : (int64_t)0xC000000000005E17;
					if ($nc($nc(sym->owner)->owner)->kind == $Kinds$Kind::PCK || ((int64_t)($nc(sym->owner)->flags_field & (uint64_t)(int64_t)8)) != 0) {
						mask |= 8;
					} else if (!this->allowRecords && (((int64_t)(flags & (uint64_t)(int64_t)16384)) != 0 || ((int64_t)(flags & (uint64_t)(int64_t)0x2000000000000000)) != 0)) {
						$init($CompilerProperties$Errors);
						$nc(this->log)->error(pos, $CompilerProperties$Errors::StaticDeclarationNotAllowedInInnerClasses);
					}
					if (((int64_t)(flags & (uint64_t)((512 | 16384) | (int64_t)0x2000000000000000))) != 0) {
						implicit = 8;
					}
				} else {
					mask = 0xC000000000007E11;
				}
			}
			if (((int64_t)(flags & (uint64_t)(int64_t)512)) != 0) {
				implicit |= 1024;
			}
			if (((int64_t)(flags & (uint64_t)(int64_t)16384)) != 0) {
				mask &= (uint64_t)~(((1024 | 16) | (int64_t)0x4000000000000000) | (int64_t)0x8000000000000000);
				implicit |= implicitEnumFinalFlag(tree);
			}
			if (((int64_t)(flags & (uint64_t)(int64_t)0x2000000000000000)) != 0) {
				mask &= (uint64_t)~1024;
				implicit |= 16;
			}
			if (((int64_t)(flags & (uint64_t)(int64_t)2048)) != 0) {
				warnOnExplicitStrictfp(pos);
			}
			implicit |= (int64_t)($nc(sym->owner)->flags_field & (uint64_t)(int64_t)2048);
			break;
		}
	default:
		{
			$throwNew($AssertionError);
		}
	}
	int64_t illegal = (int64_t)(((int64_t)(flags & (uint64_t)(int64_t)0xC000080000000FFF)) & (uint64_t)~mask);
	if (illegal != 0) {
		if (((int64_t)(illegal & (uint64_t)(int64_t)512)) != 0) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error(pos, (((int64_t)(flags & (uint64_t)(int64_t)8192)) != 0) ? $CompilerProperties$Errors::AnnotationDeclNotAllowedHere : $CompilerProperties$Errors::IntfNotAllowedHere);
			mask |= 512;
		} else {
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::ModNotAllowedHere($($Flags::asFlagSet(illegal)))));
		}
	} else {
		bool var$18 = (sym->kind == $Kinds$Kind::TYP || checkDisjoint(pos, flags, 1024, (2 | 8) | (int64_t)0x0000080000000000));
		bool var$17 = var$18 && checkDisjoint(pos, flags, 8 | 2, 0x0000080000000000);
		bool var$16 = var$17 && checkDisjoint(pos, flags, 1024 | 512, (16 | 256) | 32);
		bool var$15 = var$16 && checkDisjoint(pos, flags, 1, 2 | 4);
		bool var$14 = var$15 && checkDisjoint(pos, flags, 2, 1 | 4);
		bool var$13 = var$14 && checkDisjoint(pos, flags, 16, 64);
		bool var$12 = var$13 && (sym->kind == $Kinds$Kind::TYP || checkDisjoint(pos, flags, 1024 | 256, 2048));
		bool var$11 = var$12 && checkDisjoint(pos, flags, 16, (int64_t)0x4000000000000000 | (int64_t)0x8000000000000000);
		bool var$10 = var$11 && checkDisjoint(pos, flags, 0x4000000000000000, 16 | (int64_t)0x8000000000000000);
		if (var$10 && checkDisjoint(pos, flags, 0x4000000000000000, 8192)) {
		}
	}
	return ((int64_t)(flags & (uint64_t)(mask | ~(int64_t)0xC000080000000FFF))) | implicit;
}

void Check::warnOnExplicitStrictfp($JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic$DiagnosticPosition, prevLintPos, $nc(this->deferredLintHandler)->setPos(pos));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->deferredLintHandler)->report(static_cast<$DeferredLintHandler$LintLogger*>($$new(Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4, this, pos)));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->deferredLintHandler)->setPos(prevLintPos);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int64_t Check::implicitEnumFinalFlag($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	$init($JCTree$Tag);
	if (!$nc(tree)->hasTag($JCTree$Tag::CLASSDEF)) {
		return 0;
	}
	{
	}
	$var($Check$1SpecialTreeVisitor, sts, $new($Check$1SpecialTreeVisitor, this));
	$var($JCTree$JCClassDecl, cdef, $cast($JCTree$JCClassDecl, tree));
	{
		$var($Iterator, i$, $nc($nc(cdef)->defs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, defs, $cast($JCTree, i$->next()));
			{
				$nc(defs)->accept(sts);
				if (sts->specialized) {
					return this->allowSealed ? (int64_t)0x4000000000000000 : (int64_t)0;
				}
			}
		}
	}
	return 16;
}

void Check::validate($JCTree* tree, $Env* env) {
	validate(tree, env, true);
}

void Check::validate($JCTree* tree, $Env* env, bool checkRaw) {
	$$new($Check$Validator, this, env)->validateTree(tree, checkRaw, true);
}

void Check::validate($List* trees, $Env* env) {
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			validate($cast($JCTree, l->head), env);
		}
	}
}

void Check::checkRaw($JCTree* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$init($Lint$LintCategory);
	bool var$3 = $nc(this->lint)->isEnabled($Lint$LintCategory::RAW);
	$init($TypeTag);
	bool var$2 = var$3 && $nc($nc(tree)->type)->hasTag($TypeTag::CLASS);
	bool var$1 = var$2 && !$TreeInfo::isDiamond(tree);
	bool var$0 = var$1 && !withinAnonConstr(env);
	if (var$0 && $nc(tree->type)->isRaw()) {
		$var($Lint$LintCategory, var$4, $Lint$LintCategory::RAW);
		$var($JCDiagnostic$DiagnosticPosition, var$5, tree->pos());
		$nc(this->log)->warning(var$4, var$5, $($CompilerProperties$Warnings::RawClassUse(tree->type, $nc($nc(tree->type)->tsym)->type)));
	}
}

bool Check::withinAnonConstr($Env* env) {
	return $nc($nc($nc(env)->enclClass)->name)->isEmpty() && env->enclMethod != nullptr && $nc(env->enclMethod)->name == $nc(this->names)->init;
}

bool Check::subset($Type* t, $List* ts) {
	{
		$var($List, l, ts);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			if ($nc(this->types)->isSubtype(t, $cast($Type, l->head))) {
				return true;
			}
		}
	}
	return false;
}

bool Check::intersects($Type* t, $List* ts) {
	{
		$var($List, l, ts);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			bool var$0 = $nc(this->types)->isSubtype(t, $cast($Type, l->head));
			if (var$0 || $nc(this->types)->isSubtype($cast($Type, l->head), t)) {
				return true;
			}
		}
	}
	return false;
}

$List* Check::incl($Type* t, $List* ts) {
	return subset(t, ts) ? ts : $nc($(excl(t, ts)))->prepend(t);
}

$List* Check::excl($Type* t, $List* ts) {
	if ($nc(ts)->isEmpty()) {
		return ts;
	} else {
		$var($List, ts1, excl(t, ts->tail));
		if ($nc(this->types)->isSubtype($cast($Type, ts->head), t)) {
			return ts1;
		} else if (ts1 == ts->tail) {
			return ts;
		} else {
			return $nc(ts1)->prepend($cast($Type, ts->head));
		}
	}
}

$List* Check::union$($List* ts1, $List* ts2) {
	$useLocalCurrentObjectStackCache();
	$var($List, ts, ts1);
	{
		$var($List, l, ts2);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$assign(ts, incl($cast($Type, l->head), ts));
		}
	}
	return ts;
}

$List* Check::diff($List* ts1, $List* ts2) {
	$useLocalCurrentObjectStackCache();
	$var($List, ts, ts1);
	{
		$var($List, l, ts2);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$assign(ts, excl($cast($Type, l->head), ts));
		}
	}
	return ts;
}

$List* Check::intersect($List* ts1, $List* ts2) {
	$useLocalCurrentObjectStackCache();
	$var($List, ts, $List::nil());
	{
		$var($List, l, ts1);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			if (subset($cast($Type, l->head), ts2)) {
				$assign(ts, incl($cast($Type, l->head), ts));
			}
		}
	}
	{
		$var($List, l, ts2);
		for (; l->nonEmpty(); $assign(l, l->tail)) {
			if (subset($cast($Type, l->head), ts1)) {
				$assign(ts, incl($cast($Type, l->head), ts));
			}
		}
	}
	return ts;
}

bool Check::isUnchecked($Symbol$ClassSymbol* exc) {
	$init($Kinds$Kind);
	bool var$0 = $nc(exc)->kind == $Kinds$Kind::ERR || $nc(exc)->isSubClass($nc($nc(this->syms)->errorType)->tsym, this->types);
	return var$0 || $nc(exc)->isSubClass($nc($nc(this->syms)->runtimeExceptionType)->tsym, this->types);
}

bool Check::isUnchecked($Type* exc) {
	$init($TypeTag);
	return ($nc(exc)->hasTag($TypeTag::TYPEVAR)) ? isUnchecked($($nc(this->types)->supertype(exc))) : ($nc(exc)->hasTag($TypeTag::CLASS)) ? isUnchecked($cast($Symbol$ClassSymbol, $nc(exc)->tsym)) : $nc(exc)->hasTag($TypeTag::BOT);
}

bool Check::isChecked($Type* exc) {
	return !isUnchecked(exc);
}

bool Check::isUnchecked($JCDiagnostic$DiagnosticPosition* pos, $Type* exc) {
	try {
		return isUnchecked(exc);
	} catch ($Symbol$CompletionFailure& ex) {
		completionError(pos, ex);
		return true;
	}
	$shouldNotReachHere();
}

bool Check::isHandled($Type* exc, $List* handled) {
	bool var$0 = isUnchecked(exc);
	return var$0 || subset(exc, handled);
}

$List* Check::unhandled($List* thrown, $List* handled) {
	$useLocalCurrentObjectStackCache();
	$var($List, unhandled, $List::nil());
	{
		$var($List, l, thrown);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			if (!isHandled($cast($Type, l->head), handled)) {
				$assign(unhandled, $nc(unhandled)->prepend($cast($Type, l->head)));
			}
		}
	}
	return unhandled;
}

int32_t Check::protection(int64_t flags) {
	$init(Check);
	switch ((int16_t)((int64_t)(flags & (uint64_t)(int64_t)7))) {
	case 2:
		{
			return 3;
		}
	case 4:
		{
			return 1;
		}
	default:
		{}
	case 1:
		{
			return 0;
		}
	case 0:
		{
			return 2;
		}
	}
}

$JCDiagnostic$Fragment* Check::cannotOverride($Symbol$MethodSymbol* m, $Symbol$MethodSymbol* other) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, mloc, $nc(m)->location());
	$var($Symbol, oloc, $nc(other)->location());
	if (((int64_t)($nc(other->owner)->flags() & (uint64_t)(int64_t)512)) == 0) {
		return $CompilerProperties$Fragments::CantOverride(m, mloc, other, oloc);
	} else if (((int64_t)($nc(m->owner)->flags() & (uint64_t)(int64_t)512)) == 0) {
		return $CompilerProperties$Fragments::CantImplement(m, mloc, other, oloc);
	} else {
		return $CompilerProperties$Fragments::ClashesWith(m, mloc, other, oloc);
	}
}

$JCDiagnostic$Fragment* Check::uncheckedOverrides($Symbol$MethodSymbol* m, $Symbol$MethodSymbol* other) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, mloc, $nc(m)->location());
	$var($Symbol, oloc, $nc(other)->location());
	if (((int64_t)($nc(other->owner)->flags() & (uint64_t)(int64_t)512)) == 0) {
		return $CompilerProperties$Fragments::UncheckedOverride(m, mloc, other, oloc);
	} else if (((int64_t)($nc(m->owner)->flags() & (uint64_t)(int64_t)512)) == 0) {
		return $CompilerProperties$Fragments::UncheckedImplement(m, mloc, other, oloc);
	} else {
		return $CompilerProperties$Fragments::UncheckedClashWith(m, mloc, other, oloc);
	}
}

$JCDiagnostic$Fragment* Check::varargsOverrides($Symbol$MethodSymbol* m, $Symbol$MethodSymbol* other) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, mloc, $nc(m)->location());
	$var($Symbol, oloc, $nc(other)->location());
	if (((int64_t)($nc(other->owner)->flags() & (uint64_t)(int64_t)512)) == 0) {
		return $CompilerProperties$Fragments::VarargsOverride(m, mloc, other, oloc);
	} else if (((int64_t)($nc(m->owner)->flags() & (uint64_t)(int64_t)512)) == 0) {
		return $CompilerProperties$Fragments::VarargsImplement(m, mloc, other, oloc);
	} else {
		return $CompilerProperties$Fragments::VarargsClashWith(m, mloc, other, oloc);
	}
}

void Check::checkOverride($JCTree* tree, $Symbol$MethodSymbol* m, $Symbol$MethodSymbol* other, $Symbol$ClassSymbol* origin) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = ((int64_t)($nc(m)->flags() & (uint64_t)(4096 | (int64_t)0x0000000080000000))) != 0;
	if (var$0 || ((int64_t)($nc(other)->flags() & (uint64_t)(int64_t)4096)) != 0) {
		return;
	}
	bool var$1 = ((int64_t)($nc(m)->flags() & (uint64_t)(int64_t)8)) != 0;
	if (var$1 && ((int64_t)($nc(other)->flags() & (uint64_t)(int64_t)8)) == 0) {
		$var($JCDiagnostic$DiagnosticPosition, var$2, $TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>(m), tree));
		$nc(this->log)->error(var$2, $($CompilerProperties$Errors::OverrideStatic($(cannotOverride(m, other)))));
		m->flags_field |= 0x0000200000000000;
		return;
	}
	bool var$3 = ((int64_t)($nc(other)->flags() & (uint64_t)(int64_t)16)) != 0;
	if (!var$3) {
		bool var$4 = ((int64_t)($nc(m)->flags() & (uint64_t)(int64_t)8)) == 0;
		var$3 = var$4 && ((int64_t)($nc(other)->flags() & (uint64_t)(int64_t)8)) != 0;
	}
	if (var$3) {
		$var($JCDiagnostic$DiagnosticPosition, var$5, $TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>(m), tree));
		$var($JCDiagnostic$Fragment, var$6, cannotOverride(m, other));
		$nc(this->log)->error(var$5, $($CompilerProperties$Errors::OverrideMeth(var$6, $(static_cast<$Set*>($Flags::asFlagSet((int64_t)(other->flags() & (uint64_t)(int64_t)(16 | 8))))))));
		m->flags_field |= 0x0000200000000000;
		return;
	}
	if (((int64_t)($nc($nc(m)->owner)->flags() & (uint64_t)(int64_t)8192)) != 0) {
		return;
	}
	int32_t var$7 = protection($nc(m)->flags());
	if (var$7 > protection($nc(other)->flags())) {
		$var($JCDiagnostic$DiagnosticPosition, var$8, $TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>(m), tree));
		$var($JCDiagnostic$Error, var$9, nullptr);
		if (((int64_t)($nc(other)->flags() & (uint64_t)(int64_t)7)) == 0) {
			$assign(var$9, $CompilerProperties$Errors::OverrideWeakerAccess($(cannotOverride(m, other)), "package"_s));
		} else {
			$var($JCDiagnostic$Fragment, var$10, cannotOverride(m, other));
			$assign(var$9, $CompilerProperties$Errors::OverrideWeakerAccess(var$10, $(static_cast<$Set*>($Flags::asFlagSet((int64_t)(other->flags() & (uint64_t)(int64_t)7))))));
		}
		$nc(this->log)->error(var$8, var$9);
		$nc(m)->flags_field |= 0x0000200000000000;
		return;
	}
	$var($Type, mt, $nc(this->types)->memberType($nc(origin)->type, m));
	$var($Type, ot, $nc(this->types)->memberType($nc(origin)->type, other));
	$var($List, mtvars, $nc(mt)->getTypeArguments());
	$var($List, otvars, $nc(ot)->getTypeArguments());
	$var($Type, mtres, mt->getReturnType());
	$var($Type, otres, $nc(this->types)->subst($(ot->getReturnType()), otvars, mtvars));
	$nc(this->overrideWarner)->clear();
	bool resultTypesOK = $nc(this->types)->returnTypeSubstitutable(mt, ot, otres, this->overrideWarner);
	if (!resultTypesOK) {
		bool var$11 = ((int64_t)($nc(m)->flags() & (uint64_t)(int64_t)8)) != 0;
		if (var$11 && ((int64_t)($nc(other)->flags() & (uint64_t)(int64_t)8)) != 0) {
			$var($JCDiagnostic$DiagnosticPosition, var$12, $TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>(m), tree));
			$var($Symbol, var$13, static_cast<$Symbol*>(m));
			$var($Symbol, var$14, m->location());
			$var($Symbol, var$15, static_cast<$Symbol*>(other));
			$nc(this->log)->error(var$12, $($CompilerProperties$Errors::OverrideIncompatibleRet($($CompilerProperties$Fragments::CantHide(var$13, var$14, var$15, $(other->location()))), mtres, otres)));
			m->flags_field |= 0x0000200000000000;
		} else {
			$var($JCDiagnostic$DiagnosticPosition, var$16, $TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>(m), tree));
			$nc(this->log)->error(var$16, $($CompilerProperties$Errors::OverrideIncompatibleRet($(cannotOverride(m, other)), mtres, otres)));
			m->flags_field |= 0x0000200000000000;
		}
		return;
	} else {
		$init($Lint$LintCategory);
		if ($nc(this->overrideWarner)->hasNonSilentLint($Lint$LintCategory::UNCHECKED)) {
			$var($JCDiagnostic$DiagnosticPosition, var$17, $TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>(m), tree));
			warnUnchecked(var$17, $($CompilerProperties$Warnings::OverrideUncheckedRet($(uncheckedOverrides(m, other)), mtres, otres)));
		}
	}
	$var($List, otthrown, $nc(this->types)->subst($(ot->getThrownTypes()), otvars, mtvars));
	$var($List, var$18, mt->getThrownTypes());
	$var($List, unhandledErased, unhandled(var$18, $($nc(this->types)->erasure(otthrown))));
	$var($List, unhandledUnerased, unhandled($(mt->getThrownTypes()), otthrown));
	if ($nc(unhandledErased)->nonEmpty()) {
		$var($JCDiagnostic$DiagnosticPosition, var$19, $TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>(m), tree));
		$nc(this->log)->error(var$19, $($CompilerProperties$Errors::OverrideMethDoesntThrow($(cannotOverride(m, other)), $cast($Type, $nc(unhandledUnerased)->head))));
		$nc(m)->flags_field |= 0x0000200000000000;
		return;
	} else if ($nc(unhandledUnerased)->nonEmpty()) {
		$var($JCDiagnostic$DiagnosticPosition, var$20, $TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>(m), tree));
		warnUnchecked(var$20, $($CompilerProperties$Warnings::OverrideUncheckedThrown($(cannotOverride(m, other)), $cast($Type, unhandledUnerased->head))));
		return;
	}
	int64_t var$22 = $nc(m)->flags();
	bool var$21 = (((int64_t)((var$22 ^ $nc(other)->flags()) & (uint64_t)$Flags::VARARGS)) != 0);
	$init($Lint$LintCategory);
	if (var$21 && $nc(this->lint)->isEnabled($Lint$LintCategory::OVERRIDES)) {
		$var($JCDiagnostic$DiagnosticPosition, var$23, $TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>(m), tree));
		$nc(this->log)->warning(var$23, (((int64_t)(m->flags() & (uint64_t)$Flags::VARARGS)) != 0) ? $($CompilerProperties$Warnings::OverrideVarargsMissing($(varargsOverrides(m, other)))) : $($CompilerProperties$Warnings::OverrideVarargsExtra($(varargsOverrides(m, other)))));
	}
	if (((int64_t)($nc(other)->flags() & (uint64_t)(int64_t)0x0000000080000000)) != 0) {
		$var($JCDiagnostic$DiagnosticPosition, var$24, $TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>(m), tree));
		$nc(this->log)->warning(var$24, $($CompilerProperties$Warnings::OverrideBridge($(uncheckedOverrides(m, other)))));
	}
	if (!isDeprecatedOverrideIgnorable(other, origin)) {
		$var($Lint, prevLint, setLint($($nc(this->lint)->augment(static_cast<$Symbol*>(m)))));
		{
			$var($Throwable, var$25, nullptr);
			try {
				checkDeprecated(static_cast<$Supplier*>($$new(Check$$Lambda$lambda$checkOverride$4$5, m, tree)), static_cast<$Symbol*>(m), static_cast<$Symbol*>(other));
			} catch ($Throwable& var$26) {
				$assign(var$25, var$26);
			} /*finally*/ {
				setLint(prevLint);
			}
			if (var$25 != nullptr) {
				$throw(var$25);
			}
		}
	}
}

bool Check::isDeprecatedOverrideIgnorable($Symbol$MethodSymbol* m, $Symbol$ClassSymbol* origin) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ClassSymbol, mc, $nc(m)->enclClass());
	$var($Type, st, $nc(this->types)->supertype($nc(origin)->type));
	$init($TypeTag);
	if (!$nc(st)->hasTag($TypeTag::CLASS)) {
		return true;
	}
	$var($Symbol$MethodSymbol, stimpl, m->implementation($cast($Symbol$ClassSymbol, $nc(st)->tsym), this->types, false));
	if (mc != nullptr && (((int64_t)(mc->flags() & (uint64_t)(int64_t)512)) != 0)) {
		$var($List, intfs, $nc(this->types)->interfaces($nc(origin)->type));
		return ($nc(intfs)->contains(mc->type) ? false : (stimpl != nullptr));
	} else {
		return (stimpl != m);
	}
}

void Check::checkCompatibleConcretes($JCDiagnostic$DiagnosticPosition* pos, $Type* site) {
	$useLocalCurrentObjectStackCache();
	$var($Type, sup, $nc(this->types)->supertype(site));
	$init($TypeTag);
	if (!$nc(sup)->hasTag($TypeTag::CLASS)) {
		return;
	}
	{
		$var($Type, t1, sup);
		for (;; $assign(t1, $nc(this->types)->supertype(t1))) {
			bool var$0 = $nc(t1)->hasTag($TypeTag::CLASS);
			if (!(var$0 && $nc($nc(t1->tsym)->type)->isParameterized())) {
				break;
			}
			{
				{
					$init($Scope$LookupKind);
					$var($Iterator, i$, $nc($($nc($($nc($nc(t1)->tsym)->members()))->getSymbols($Scope$LookupKind::NON_RECURSIVE)))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol, s1, $cast($Symbol, i$->next()));
						{
							$init($Kinds$Kind);
							bool var$2 = $nc(s1)->kind != $Kinds$Kind::MTH || ((int64_t)($nc(s1)->flags() & (uint64_t)((8 | 4096) | (int64_t)0x0000000080000000))) != 0;
							bool var$1 = var$2 || !$nc(s1)->isInheritedIn($nc(site)->tsym, this->types);
							if (var$1 || !$equals($nc(($cast($Symbol$MethodSymbol, s1)))->implementation($nc(site)->tsym, this->types, true), s1)) {
								continue;
							}
							$var($Type, st1, $nc(this->types)->memberType(t1, s1));
							int32_t s1ArgsLength = $nc($($nc(st1)->getParameterTypes()))->length();
							if (st1 == $nc(s1)->type) {
								continue;
							}
							{
								$var($Type, t2, sup);
								for (; $nc(t2)->hasTag($TypeTag::CLASS); $assign(t2, $nc(this->types)->supertype(t2))) {
									{
										$var($Iterator, i$, $nc($($nc($($nc($nc(t2)->tsym)->members()))->getSymbolsByName($nc(s1)->name)))->iterator());
										for (; $nc(i$)->hasNext();) {
											$var($Symbol, s2, $cast($Symbol, i$->next()));
											{
												bool var$5 = s2 == s1 || $nc(s2)->kind != $Kinds$Kind::MTH || ((int64_t)($nc(s2)->flags() & (uint64_t)((8 | 4096) | (int64_t)0x0000000080000000))) != 0;
												bool var$4 = var$5 || $nc($($nc($nc(s2)->type)->getParameterTypes()))->length() != s1ArgsLength;
												bool var$3 = var$4 || !$nc(s2)->isInheritedIn($nc(site)->tsym, this->types);
												if (var$3 || !$equals($nc(($cast($Symbol$MethodSymbol, s2)))->implementation($nc(site)->tsym, this->types, true), s2)) {
													continue;
												}
												$var($Type, st2, $nc(this->types)->memberType(t2, s2));
												if ($nc(this->types)->overrideEquivalent(st1, st2)) {
													$nc(this->log)->error(pos, $($CompilerProperties$Errors::ConcreteInheritanceConflict(s1, t1, s2, t2, sup)));
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

bool Check::checkCompatibleAbstracts($JCDiagnostic$DiagnosticPosition* pos, $Type* t1$renamed, $Type* t2$renamed, $Type* site) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t1, t1$renamed);
	$var($Type, t2, t2$renamed);
	if (((int64_t)($nc($nc(site)->tsym)->flags() & (uint64_t)(int64_t)0x01000000)) != 0) {
		$assign(t1, $nc(this->types)->capture(t1));
		$assign(t2, $nc(this->types)->capture(t2));
	}
	return firstIncompatibility(pos, t1, t2, site) == nullptr;
}

$Symbol* Check::firstIncompatibility($JCDiagnostic$DiagnosticPosition* pos, $Type* t1, $Type* t2, $Type* site) {
	$useLocalCurrentObjectStackCache();
	$var($Map, interfaces1, $new($HashMap));
	closure(t1, interfaces1);
	$var($Map, interfaces2, nullptr);
	if (t1 == t2) {
		$assign(interfaces2, interfaces1);
	} else {
		closure(t2, interfaces1, $assign(interfaces2, $new($HashMap)));
	}
	{
		$var($Iterator, i$, $nc($(interfaces1->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t3, $cast($Type, i$->next()));
			{
				{
					$var($Iterator, i$, $nc($($nc(interfaces2)->values()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Type, t4, $cast($Type, i$->next()));
						{
							$var($Symbol, s, firstDirectIncompatibility(pos, t3, t4, site));
							if (s != nullptr) {
								return s;
							}
						}
					}
				}
			}
		}
	}
	return nullptr;
}

void Check::closure($Type* t, $Map* typeMap) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if (!$nc(t)->hasTag($TypeTag::CLASS)) {
		return;
	}
	if ($nc(typeMap)->put($nc(t)->tsym, t) == nullptr) {
		closure($($nc(this->types)->supertype(t)), typeMap);
		{
			$var($Iterator, i$, $nc($($nc(this->types)->interfaces(t)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, i, $cast($Type, i$->next()));
				closure(i, typeMap);
			}
		}
	}
}

void Check::closure($Type* t, $Map* typesSkip, $Map* typeMap) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if (!$nc(t)->hasTag($TypeTag::CLASS)) {
		return;
	}
	if ($nc(typesSkip)->get($nc(t)->tsym) != nullptr) {
		return;
	}
	if ($nc(typeMap)->put($nc(t)->tsym, t) == nullptr) {
		closure($($nc(this->types)->supertype(t)), typesSkip, typeMap);
		{
			$var($Iterator, i$, $nc($($nc(this->types)->interfaces(t)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, i, $cast($Type, i$->next()));
				closure(i, typesSkip, typeMap);
			}
		}
	}
}

$Symbol* Check::firstDirectIncompatibility($JCDiagnostic$DiagnosticPosition* pos, $Type* t1, $Type* t2, $Type* site) {
	$useLocalCurrentObjectStackCache();
	{
		$init($Scope$LookupKind);
		$var($Iterator, i$, $nc($($nc($($nc($nc(t1)->tsym)->members()))->getSymbols($Scope$LookupKind::NON_RECURSIVE)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, s1, $cast($Symbol, i$->next()));
			{
				$var($Type, st1, nullptr);
				$init($Kinds$Kind);
				bool var$0 = $nc(s1)->kind != $Kinds$Kind::MTH || !$nc(s1)->isInheritedIn($nc(site)->tsym, this->types);
				if (var$0 || ((int64_t)($nc(s1)->flags() & (uint64_t)(int64_t)4096)) != 0) {
					continue;
				}
				$var($Symbol, impl, $nc(($cast($Symbol$MethodSymbol, s1)))->implementation($nc(site)->tsym, this->types, false));
				if (impl != nullptr && ((int64_t)(impl->flags() & (uint64_t)(int64_t)1024)) == 0) {
					continue;
				}
				{
					$var($Iterator, i$, $nc($($nc($($nc($nc(t2)->tsym)->members()))->getSymbolsByName($nc(s1)->name)))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol, s2, $cast($Symbol, i$->next()));
						{
							if (s1 == s2) {
								continue;
							}
							bool var$1 = $nc(s2)->kind != $Kinds$Kind::MTH || !$nc(s2)->isInheritedIn($nc(site)->tsym, this->types);
							if (var$1 || ((int64_t)($nc(s2)->flags() & (uint64_t)(int64_t)4096)) != 0) {
								continue;
							}
							if (st1 == nullptr) {
								$assign(st1, $nc(this->types)->memberType(t1, s1));
							}
							$var($Type, st2, $nc(this->types)->memberType(t2, s2));
							if ($nc(this->types)->overrideEquivalent(st1, st2)) {
								$var($List, tvars1, $nc(st1)->getTypeArguments());
								$var($List, tvars2, $nc(st2)->getTypeArguments());
								$var($Type, rt1, st1->getReturnType());
								$var($Type, rt2, $nc(this->types)->subst($(st2->getReturnType()), tvars2, tvars1));
								bool var$3 = $nc(this->types)->isSameType(rt1, rt2);
								if (!var$3) {
									bool var$5 = !$nc(rt1)->isPrimitiveOrVoid();
									bool var$4 = var$5 && !$nc(rt2)->isPrimitiveOrVoid();
									if (var$4) {
										bool var$6 = $nc(this->types)->covariantReturnType(rt1, rt2, $nc(this->types)->noWarnings);
										var$4 = (var$6 || $nc(this->types)->covariantReturnType(rt2, rt1, $nc(this->types)->noWarnings));
									}
									var$3 = var$4;
								}
								bool var$2 = var$3;
								bool compat = var$2 || checkCommonOverriderIn(s1, s2, site);
								if (!compat) {
									$nc(this->log)->error(pos, $($CompilerProperties$Errors::TypesIncompatible(t1, t2, $($CompilerProperties$Fragments::IncompatibleDiffRet($nc(s2)->name, $($nc($($nc(this->types)->memberType(t2, s2)))->getParameterTypes()))))));
									return s2;
								}
							} else {
								bool var$8 = checkNameClash($cast($Symbol$ClassSymbol, $nc(site)->tsym), s1, s2);
								if (var$8 && !checkCommonOverriderIn(s1, s2, site)) {
									$var($Name, var$9, $nc(s1)->name);
									$var($1List, var$10, static_cast<$1List*>($nc($($nc($($nc(this->types)->memberType(site, s1)))->asMethodType()))->getParameterTypes()));
									$var($Symbol, var$11, s1->location());
									$var($Name, var$12, $nc(s2)->name);
									$var($1List, var$13, static_cast<$1List*>($nc($($nc($($nc(this->types)->memberType(site, s2)))->asMethodType()))->getParameterTypes()));
									$nc(this->log)->error(pos, $($CompilerProperties$Errors::NameClashSameErasureNoOverride(var$9, var$10, var$11, var$12, var$13, $(s2->location()))));
									return s2;
								}
							}
						}
					}
				}
			}
		}
	}
	return nullptr;
}

bool Check::checkCommonOverriderIn($Symbol* s1, $Symbol* s2, $Type* site) {
	$useLocalCurrentObjectStackCache();
	$var($Map, supertypes, $new($HashMap));
	$var($Type, st1, $nc(this->types)->memberType(site, s1));
	$var($Type, st2, $nc(this->types)->memberType(site, s2));
	closure(site, supertypes);
	{
		$var($Iterator, i$, $nc($(supertypes->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				{
					$var($Iterator, i$, $nc($($nc($($nc($nc(t)->tsym)->members()))->getSymbolsByName($nc(s1)->name)))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol, s3, $cast($Symbol, i$->next()));
						{
							$init($Kinds$Kind);
							if (s3 == s1 || s3 == s2 || $nc(s3)->kind != $Kinds$Kind::MTH || ((int64_t)($nc(s3)->flags() & (uint64_t)((int64_t)0x0000000080000000 | 4096))) != 0) {
								continue;
							}
							$var($Type, st3, $nc(this->types)->memberType(site, s3));
							bool var$2 = $nc(this->types)->overrideEquivalent(st3, st1);
							bool var$1 = var$2 && $nc(this->types)->overrideEquivalent(st3, st2);
							bool var$0 = var$1 && $nc(this->types)->returnTypeSubstitutable(st3, st1);
							if (var$0 && $nc(this->types)->returnTypeSubstitutable(st3, st2)) {
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

void Check::checkOverride($Env* env, $JCTree$JCMethodDecl* tree, $Symbol$MethodSymbol* m) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ClassSymbol, origin, $cast($Symbol$ClassSymbol, $nc(m)->owner));
	bool var$0 = ((int64_t)($nc(origin)->flags() & (uint64_t)(int64_t)16384)) != 0;
	if (var$0 && $nc($of($nc(this->names)->finalize$))->equals(m->name)) {
		if (m->overrides($nc(this->syms)->enumFinalFinalize, origin, this->types, false)) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($($nc(tree)->pos()), $CompilerProperties$Errors::EnumNoFinalize);
			return;
		}
	}
	if (this->allowRecords && $nc(origin)->isRecord()) {
		$var($Optional, recordComponent, $nc($($nc($($nc($(origin->getRecordComponents()))->stream()))->filter(static_cast<$Predicate*>($$new(Check$$Lambda$lambda$checkOverride$5$6, tree)))))->findFirst());
		if ($nc(recordComponent)->isPresent()) {
			return;
		}
	}
	$init($TypeTag);
	{
		$var($Type, t, $nc(origin)->type);
		for (; $nc(t)->hasTag($TypeTag::CLASS); $assign(t, $nc(this->types)->supertype(t))) {
			if (t != origin->type) {
				checkOverride(static_cast<$JCTree*>(tree), t, origin, m);
			}
			{
				$var($Iterator, i$, $nc($($nc(this->types)->interfaces(t)))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Type, t2, $cast($Type, i$->next()));
					{
						checkOverride(static_cast<$JCTree*>(tree), t2, origin, m);
					}
				}
			}
		}
	}
	bool explicitOverride = m->attribute($nc($nc(this->syms)->overrideType)->tsym) != nullptr;
	bool var$1 = explicitOverride;
	if (!var$1) {
		bool var$2 = $nc(($cast($AttrContext, $nc(env)->info)))->isAnonymousDiamond && !m->isConstructor();
		var$1 = (var$2 && !m->isPrivate());
	}
	bool mustOverride = var$1;
	if (mustOverride && !isOverrider(m)) {
		$var($JCDiagnostic$DiagnosticPosition, pos, $nc(tree)->pos());
		{
			$var($Iterator, i$, $nc($nc($($cast($JCTree$JCModifiers, tree->getModifiers())))->annotations)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCAnnotation, a, $cast($JCTree$JCAnnotation, i$->next()));
				{
					if ($nc($nc($nc(a)->annotationType)->type)->tsym == $nc($nc(this->syms)->overrideType)->tsym) {
						$assign(pos, a->pos());
						break;
					}
				}
			}
		}
		$init($CompilerProperties$Errors);
		$init($CompilerProperties$Fragments);
		$nc(this->log)->error(pos, explicitOverride ? (m->isStatic() ? $CompilerProperties$Errors::StaticMethodsCannotBeAnnotatedWithOverride : $CompilerProperties$Errors::MethodDoesNotOverrideSuperclass) : $($CompilerProperties$Errors::AnonymousDiamondMethodDoesNotOverrideSuperclass($CompilerProperties$Fragments::DiamondAnonymousMethodsImplicitlyOverride)));
	}
}

void Check::checkOverride($JCTree* tree, $Type* site, $Symbol$ClassSymbol* origin, $Symbol$MethodSymbol* m) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$TypeSymbol, c, $nc(site)->tsym);
	{
		$var($Iterator, i$, $nc($($nc($($nc(c)->members()))->getSymbolsByName($nc(m)->name)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				if ($nc(m)->overrides(sym, origin, this->types, false)) {
					if (((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)1024)) == 0) {
						checkOverride(tree, m, $cast($Symbol$MethodSymbol, sym), origin);
					}
				}
			}
		}
	}
}

void Check::checkClassOverrideEqualsAndHashIfNeeded($JCDiagnostic$DiagnosticPosition* pos, $Symbol$ClassSymbol* someClass) {
	bool var$2 = someClass == $cast($Symbol$ClassSymbol, $nc($nc(this->syms)->objectType)->tsym) || $nc(someClass)->isInterface();
	bool var$1 = var$2 || $nc(someClass)->isEnum();
	bool var$0 = var$1 || ((int64_t)($nc(someClass)->flags() & (uint64_t)(int64_t)8192)) != 0;
	if (var$0 || ((int64_t)($nc(someClass)->flags() & (uint64_t)(int64_t)1024)) != 0) {
		return;
	}
	if ($nc(someClass)->isAnonymous()) {
		$var($List, interfaces, $nc(this->types)->interfaces(someClass->type));
		if (interfaces != nullptr && !interfaces->isEmpty() && $nc(($cast($Type, interfaces->head)))->tsym == $nc($nc(this->syms)->comparatorType)->tsym) {
			return;
		}
	}
	checkClassOverrideEqualsAndHash(pos, someClass);
}

void Check::checkClassOverrideEqualsAndHash($JCDiagnostic$DiagnosticPosition* pos, $Symbol$ClassSymbol* someClass) {
	$useLocalCurrentObjectStackCache();
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::OVERRIDES)) {
		$var($Symbol$MethodSymbol, equalsAtObject, $cast($Symbol$MethodSymbol, $nc($($nc($nc($nc(this->syms)->objectType)->tsym)->members()))->findFirst($nc(this->names)->equals$)));
		$var($Symbol$MethodSymbol, hashCodeAtObject, $cast($Symbol$MethodSymbol, $nc($($nc($nc($nc(this->syms)->objectType)->tsym)->members()))->findFirst($nc(this->names)->hashCode$)));
		$var($Symbol$MethodSymbol, equalsImpl, $nc(this->types)->implementation(equalsAtObject, someClass, false, this->equalsHasCodeFilter));
		bool overridesEquals = equalsImpl != nullptr && $equals(equalsImpl->owner, someClass);
		bool overridesHashCode = $nc(this->types)->implementation(hashCodeAtObject, someClass, false, this->equalsHasCodeFilter) != hashCodeAtObject;
		if (overridesEquals && !overridesHashCode) {
			$nc(this->log)->warning($Lint$LintCategory::OVERRIDES, pos, $($CompilerProperties$Warnings::OverrideEqualsButNotHashcode(someClass)));
		}
	}
}

void Check::checkModuleName($JCTree$JCModuleDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Name, moduleName, $nc($nc(tree)->sym)->name);
	$Assert::checkNonNull(moduleName);
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::MODULE)) {
		$var($JCTree$JCExpression, qualId, tree->qualId);
		while (qualId != nullptr) {
			$var($Name, componentName, nullptr);
			$var($JCDiagnostic$DiagnosticPosition, pos, nullptr);
			$init($Check$5);
			{
				$var($JCTree$JCFieldAccess, selectNode, nullptr)
				switch ($nc($Check$5::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($(qualId->getTag())))->ordinal())) {
				case 1:
					{
						$assign(selectNode, $cast($JCTree$JCFieldAccess, qualId));
						$assign(componentName, $nc(selectNode)->name);
						$assign(pos, $nc(selectNode)->pos());
						$assign(qualId, $nc(selectNode)->selected);
						break;
					}
				case 2:
					{
						$assign(componentName, $nc(($cast($JCTree$JCIdent, qualId)))->name);
						$assign(pos, qualId->pos());
						$assign(qualId, nullptr);
						break;
					}
				default:
					{
						$throwNew($AssertionError, $of($$str({"Unexpected qualified identifier: "_s, $(qualId->toString())})));
					}
				}
			}
			if (componentName != nullptr) {
				$var($String, moduleNameComponentString, componentName->toString());
				int32_t nameLength = $nc(moduleNameComponentString)->length();
				if (nameLength > 0 && $Character::isDigit(moduleNameComponentString->charAt(nameLength - 1))) {
					$nc(this->log)->warning($Lint$LintCategory::MODULE, pos, $($CompilerProperties$Warnings::PoorChoiceForModuleName(componentName)));
				}
			}
		}
	}
}

bool Check::checkNameClash($Symbol$ClassSymbol* origin, $Symbol* s1, $Symbol* s2) {
	$useLocalCurrentObjectStackCache();
	$var($Check$ClashFilter, cf, $new($Check$ClashFilter, this, $nc(origin)->type));
	bool var$1 = cf->test(s1);
	bool var$0 = var$1 && cf->test(s2);
	if (var$0) {
		$var($Type, var$2, $nc(s1)->erasure(this->types));
		var$0 = $nc(this->types)->hasSameArgs(var$2, $($nc(s2)->erasure(this->types)));
	}
	return (var$0);
}

void Check::checkAllDefined($JCDiagnostic$DiagnosticPosition* pos, $Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$MethodSymbol, undef, $nc(this->types)->firstUnimplementedAbstract(c));
	if (undef != nullptr) {
		int64_t var$0 = undef->flags();
		$var($Name, var$1, undef->name);
		$var($Symbol$MethodSymbol, undef1, $new($Symbol$MethodSymbol, var$0, var$1, $($nc(this->types)->memberType($nc(c)->type, undef)), undef->owner));
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::DoesNotOverrideAbstract(c, undef1, $(undef1->location()))));
	}
}

void Check::checkNonCyclicDecl($JCTree$JCClassDecl* tree) {
	$var($Check$CycleChecker, cc, $new($Check$CycleChecker, this));
	cc->scan(static_cast<$JCTree*>(tree));
	if (!cc->errorFound && !cc->partialCheck) {
		$nc($nc(tree)->sym)->flags_field |= 0x40000000;
	}
}

void Check::checkNonCyclic($JCDiagnostic$DiagnosticPosition* pos, $Type* t) {
	checkNonCyclicInternal(pos, t);
}

void Check::checkNonCyclic($JCDiagnostic$DiagnosticPosition* pos, $Type$TypeVar* t) {
	checkNonCyclic1(pos, t, $($List::nil()));
}

void Check::checkNonCyclic1($JCDiagnostic$DiagnosticPosition* pos, $Type* t, $List* seen$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, seen, seen$renamed);
	$var($Type$TypeVar, tv, nullptr);
	$init($TypeTag);
	bool var$0 = $nc(t)->hasTag($TypeTag::TYPEVAR);
	if (var$0 && ((int64_t)($nc(t->tsym)->flags() & (uint64_t)(int64_t)0x10000000)) != 0) {
		return;
	}
	if ($nc(seen)->contains(t)) {
		$assign(tv, $cast($Type$TypeVar, t));
		$nc(tv)->setUpperBound($($nc(this->types)->createErrorType(t)));
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::CyclicInheritance(t)));
	} else {
		if ($nc(t)->hasTag($TypeTag::TYPEVAR)) {
			$assign(tv, $cast($Type$TypeVar, t));
			$assign(seen, seen->prepend(tv));
			{
				$var($Iterator, i$, $nc($($nc(this->types)->getBounds(tv)))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Type, b, $cast($Type, i$->next()));
					checkNonCyclic1(pos, b, seen);
				}
			}
		}
	}
}

bool Check::checkNonCyclicInternal($JCDiagnostic$DiagnosticPosition* pos, $Type* t) {
	$useLocalCurrentObjectStackCache();
	bool complete = true;
	$var($Symbol, c, $nc(t)->tsym);
	if (((int64_t)($nc(c)->flags_field & (uint64_t)(int64_t)0x40000000)) != 0) {
		return true;
	}
	if (((int64_t)($nc(c)->flags_field & (uint64_t)(int64_t)0x08000000)) != 0) {
		noteCyclic(pos, $cast($Symbol$ClassSymbol, c));
	} else if (!$nc(c->type)->isErroneous()) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				c->flags_field |= 0x08000000;
				$init($TypeTag);
				if ($nc(c->type)->hasTag($TypeTag::CLASS)) {
					$var($Type$ClassType, clazz, $cast($Type$ClassType, c->type));
					if ($nc(clazz)->interfaces_field != nullptr) {
						{
							$var($List, l, clazz->interfaces_field);
							for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
								complete &= checkNonCyclicInternal(pos, $cast($Type, l->head));
							}
						}
					}
					if ($nc(clazz)->supertype_field != nullptr) {
						$var($Type, st, clazz->supertype_field);
						if (st != nullptr && st->hasTag($TypeTag::CLASS)) {
							complete &= checkNonCyclicInternal(pos, st);
						}
					}
					$init($Kinds$Kind);
					if ($nc(c->owner)->kind == $Kinds$Kind::TYP) {
						complete &= checkNonCyclicInternal(pos, $nc(c->owner)->type);
					}
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				c->flags_field &= (uint64_t)~0x08000000;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	if (complete) {
		complete = (((int64_t)($nc(c)->flags_field & (uint64_t)(int64_t)0x10000000)) == 0) && c->isCompleted();
	}
	if (complete) {
		$nc(c)->flags_field |= 0x40000000;
	}
	return complete;
}

void Check::noteCyclic($JCDiagnostic$DiagnosticPosition* pos, $Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$nc(this->log)->error(pos, $($CompilerProperties$Errors::CyclicInheritance(static_cast<$Symbol*>(c))));
	{
		$var($List, l, $nc(this->types)->interfaces($nc(c)->type));
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$init($Type);
			$set(l, head, $nc(this->types)->createErrorType($cast($Symbol$ClassSymbol, $nc(($cast($Type, l->head)))->tsym), $Type::noType));
		}
	}
	$var($Type, st, $nc(this->types)->supertype($nc(c)->type));
	$init($TypeTag);
	if ($nc(st)->hasTag($TypeTag::CLASS)) {
		$init($Type);
		$set($nc($cast($Type$ClassType, $nc(c)->type)), supertype_field, $nc(this->types)->createErrorType($cast($Symbol$ClassSymbol, st->tsym), $Type::noType));
	}
	$set($nc(c), type, $nc(this->types)->createErrorType(c, c->type));
	c->flags_field |= 0x40000000;
}

void Check::checkImplementations($JCTree$JCClassDecl* tree) {
	checkImplementations(tree, $nc(tree)->sym, tree->sym);
}

void Check::checkImplementations($JCTree* tree, $Symbol$ClassSymbol* origin, $Symbol$ClassSymbol* ic) {
	$useLocalCurrentObjectStackCache();
	{
		$var($List, l, $nc(this->types)->closure($nc(ic)->type));
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$var($Symbol$ClassSymbol, lc, $cast($Symbol$ClassSymbol, $nc(($cast($Type, l->head)))->tsym));
			if (((int64_t)($nc(lc)->flags() & (uint64_t)(int64_t)1024)) != 0) {
				{
					$init($Scope$LookupKind);
					$var($Iterator, i$, $nc($($nc($(lc->members()))->getSymbols($Scope$LookupKind::NON_RECURSIVE)))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol, sym, $cast($Symbol, i$->next()));
						{
							$init($Kinds$Kind);
							if ($nc(sym)->kind == $Kinds$Kind::MTH && ((int64_t)(sym->flags() & (uint64_t)(int64_t)(8 | 1024))) == 1024) {
								$var($Symbol$MethodSymbol, absmeth, $cast($Symbol$MethodSymbol, sym));
								$var($Symbol$MethodSymbol, implmeth, absmeth->implementation(origin, this->types, false));
								bool var$0 = implmeth != nullptr && implmeth != absmeth;
								if (var$0) {
									int64_t var$1 = ((int64_t)($nc(implmeth->owner)->flags() & (uint64_t)(int64_t)512));
									var$0 = var$1 == ((int64_t)($nc(origin)->flags() & (uint64_t)(int64_t)512));
								}
								if (var$0) {
									checkOverride(tree, implmeth, absmeth, origin);
								}
							}
						}
					}
				}
			}
		}
	}
}

void Check::checkCompatibleSupertypes($JCDiagnostic$DiagnosticPosition* pos, $Type* c) {
	$useLocalCurrentObjectStackCache();
	$var($List, supertypes, $nc(this->types)->interfaces(c));
	$var($Type, supertype, $nc(this->types)->supertype(c));
	$init($TypeTag);
	bool var$0 = $nc(supertype)->hasTag($TypeTag::CLASS);
	if (var$0 && ((int64_t)($nc(supertype->tsym)->flags() & (uint64_t)(int64_t)1024)) != 0) {
		$assign(supertypes, $nc(supertypes)->prepend(supertype));
	}
	{
		$var($List, l, supertypes);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			bool var$1 = !$nc($($nc(($cast($Type, l->head)))->getTypeArguments()))->isEmpty();
			if (var$1 && !checkCompatibleAbstracts(pos, $cast($Type, l->head), $cast($Type, l->head), c)) {
				return;
			}
			{
				$var($List, m, supertypes);
				for (; m != l; $assign(m, $nc(m)->tail)) {
					if (!checkCompatibleAbstracts(pos, $cast($Type, l->head), $cast($Type, m->head), c)) {
						return;
					}
				}
			}
		}
	}
	checkCompatibleConcretes(pos, c);
}

void Check::checkOverrideClashes($JCDiagnostic$DiagnosticPosition* pos, $Type* site, $Symbol$MethodSymbol* sym) {
	$useLocalCurrentObjectStackCache();
	$var($Check$ClashFilter, cf, $new($Check$ClashFilter, this, site));
	$var($List, potentiallyAmbiguousList, $List::nil());
	bool overridesAny = false;
	$var($ArrayList, symbolsByName, $new($ArrayList));
	$nc($($nc($($nc(this->types)->membersClosure(site, false)))->getSymbolsByName($nc(sym)->name, static_cast<$Predicate*>(cf))))->forEach(static_cast<$Consumer*>($$new(Check$$Lambda$add$7, static_cast<$ArrayList*>(symbolsByName))));
	{
		$var($Iterator, i$, symbolsByName->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, m1, $cast($Symbol, i$->next()));
			{
				if (!$nc(sym)->overrides(m1, $nc(site)->tsym, this->types, false)) {
					if ($equals(m1, sym)) {
						continue;
					}
					if (!overridesAny) {
						$assign(potentiallyAmbiguousList, $nc(potentiallyAmbiguousList)->prepend($cast($Symbol$MethodSymbol, m1)));
					}
					continue;
				}
				if (!$equals(m1, sym)) {
					overridesAny = true;
					$assign(potentiallyAmbiguousList, $List::nil());
				}
				{
					$var($Iterator, i$, symbolsByName->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol, m2, $cast($Symbol, i$->next()));
						{
							if (m2 == m1) {
								continue;
							}
							$var($Type, var$1, $nc(sym)->type);
							$var($Type, var$2, $nc(this->types)->memberType(site, m2));
							$init($Source$Feature);
							bool var$0 = !$nc(this->types)->isSubSignature(var$1, var$2, $Source$Feature::STRICT_METHOD_CLASH_CHECK->allowedInSource(this->source));
							if (var$0) {
								$var($Type, var$3, $nc(m2)->erasure(this->types));
								var$0 = $nc(this->types)->hasSameArgs(var$3, $($nc(m1)->erasure(this->types)));
							}
							if (var$0) {
								$nc(sym)->flags_field |= 0x0000040000000000;
								if ($equals(m1, sym)) {
									$var($Name, var$4, $nc(m1)->name);
									$var($1List, var$5, static_cast<$1List*>($nc($($nc($($nc(this->types)->memberType(site, m1)))->asMethodType()))->getParameterTypes()));
									$var($Symbol, var$6, m1->location());
									$var($Name, var$7, $nc(m2)->name);
									$var($1List, var$8, static_cast<$1List*>($nc($($nc($($nc(this->types)->memberType(site, m2)))->asMethodType()))->getParameterTypes()));
									$nc(this->log)->error(pos, $($CompilerProperties$Errors::NameClashSameErasureNoOverride(var$4, var$5, var$6, var$7, var$8, $(m2->location()))));
								} else {
									$var($Type$ClassType, ct, $cast($Type$ClassType, site));
									$var($String, kind, $nc(ct)->isInterface() ? "interface"_s : "class"_s);
									$var($String, var$9, kind);
									$var($Name, var$10, $nc($nc(ct)->tsym)->name);
									$var($Name, var$11, $nc(m1)->name);
									$var($1List, var$12, static_cast<$1List*>($nc($($nc($($nc(this->types)->memberType(site, m1)))->asMethodType()))->getParameterTypes()));
									$var($Symbol, var$13, m1->location());
									$var($Name, var$14, $nc(m2)->name);
									$var($1List, var$15, static_cast<$1List*>($nc($($nc($($nc(this->types)->memberType(site, m2)))->asMethodType()))->getParameterTypes()));
									$nc(this->log)->error(pos, $($CompilerProperties$Errors::NameClashSameErasureNoOverride1(var$9, var$10, var$11, var$12, var$13, var$14, var$15, $(m2->location()))));
								}
								return;
							}
						}
					}
				}
			}
		}
	}
	if (!overridesAny) {
		{
			$var($Iterator, i$, $nc(potentiallyAmbiguousList)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol$MethodSymbol, m, $cast($Symbol$MethodSymbol, i$->next()));
				{
					checkPotentiallyAmbiguousOverloads(pos, site, sym, m);
				}
			}
		}
	}
}

void Check::checkHideClashes($JCDiagnostic$DiagnosticPosition* pos, $Type* site, $Symbol$MethodSymbol* sym) {
	$useLocalCurrentObjectStackCache();
	$var($Check$ClashFilter, cf, $new($Check$ClashFilter, this, site));
	{
		$var($Iterator, i$, $nc($($nc($($nc(this->types)->membersClosure(site, true)))->getSymbolsByName($nc(sym)->name, static_cast<$Predicate*>(cf))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, s, $cast($Symbol, i$->next()));
			{
				$var($Type, var$0, $nc(sym)->type);
				$var($Type, var$1, $nc(this->types)->memberType(site, s));
				$init($Source$Feature);
				if (!$nc(this->types)->isSubSignature(var$0, var$1, $Source$Feature::STRICT_METHOD_CLASH_CHECK->allowedInSource(this->source))) {
					$var($Type, var$2, $nc(s)->erasure(this->types));
					if ($nc(this->types)->hasSameArgs(var$2, $($nc(sym)->erasure(this->types)))) {
						$var($Symbol, var$3, static_cast<$Symbol*>(sym));
						$var($Symbol, var$4, $nc(sym)->location());
						$var($Symbol, var$5, s);
						$nc(this->log)->error(pos, $($CompilerProperties$Errors::NameClashSameErasureNoHide(var$3, var$4, var$5, $($nc(s)->location()))));
						return;
					} else {
						checkPotentiallyAmbiguousOverloads(pos, site, sym, $cast($Symbol$MethodSymbol, s));
					}
				}
			}
		}
	}
}

void Check::checkDefaultMethodClashes($JCDiagnostic$DiagnosticPosition* pos, $Type* site) {
	$useLocalCurrentObjectStackCache();
	$var($Check$DefaultMethodClashFilter, dcf, $new($Check$DefaultMethodClashFilter, this, site));
	{
		$var($Iterator, i$, $nc($($nc($($nc(this->types)->membersClosure(site, false)))->getSymbols(static_cast<$Predicate*>(dcf))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, m, $cast($Symbol, i$->next()));
			{
				$init($Kinds$Kind);
				$Assert::check($nc(m)->kind == $Kinds$Kind::MTH);
				$var($List, prov, $nc(this->types)->interfaceCandidates(site, $cast($Symbol$MethodSymbol, m)));
				if ($nc(prov)->size() > 1) {
					$var($ListBuffer, abstracts, $new($ListBuffer));
					$var($ListBuffer, defaults, $new($ListBuffer));
					{
						$var($Iterator, i$, prov->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Symbol$MethodSymbol, provSym, $cast($Symbol$MethodSymbol, i$->next()));
							{
								if (((int64_t)($nc(provSym)->flags() & (uint64_t)(int64_t)0x0000080000000000)) != 0) {
									$assign(defaults, $nc(defaults)->append(provSym));
								} else if (((int64_t)(provSym->flags() & (uint64_t)(int64_t)1024)) != 0) {
									$assign(abstracts, $nc(abstracts)->append(provSym));
								}
								bool var$0 = $nc(defaults)->nonEmpty();
								if (var$0) {
									int32_t var$1 = defaults->size();
									var$0 = var$1 + $nc(abstracts)->size() >= 2;
								}
								if (var$0) {
									$var($JCDiagnostic$Fragment, diagKey, nullptr);
									$var($Symbol, s1, $cast($Symbol, defaults->first()));
									$var($Symbol, s2, nullptr);
									if (defaults->size() > 1) {
										$assign(s2, $cast($Symbol, $nc($nc($(defaults->toList()))->tail)->head));
										$var($Kinds$KindName, var$2, $Kinds::kindName(static_cast<$Symbol*>($nc(site)->tsym)));
										$var($Type, var$3, site);
										$var($Name, var$4, $nc(m)->name);
										$var($1List, var$5, static_cast<$1List*>($nc($($nc(this->types)->memberType(site, m)))->getParameterTypes()));
										$var($Symbol, var$6, $nc(s1)->location());
										$assign(diagKey, $CompilerProperties$Fragments::IncompatibleUnrelatedDefaults(var$2, var$3, var$4, var$5, var$6, $($nc(s2)->location())));
									} else {
										$assign(s2, $cast($Symbol, abstracts->first()));
										$var($Kinds$KindName, var$7, $Kinds::kindName(static_cast<$Symbol*>($nc(site)->tsym)));
										$var($Type, var$8, site);
										$var($Name, var$9, $nc(m)->name);
										$var($1List, var$10, static_cast<$1List*>($nc($($nc(this->types)->memberType(site, m)))->getParameterTypes()));
										$var($Symbol, var$11, $nc(s1)->location());
										$assign(diagKey, $CompilerProperties$Fragments::IncompatibleAbstractDefault(var$7, var$8, var$9, var$10, var$11, $($nc(s2)->location())));
									}
									$var($Type, var$12, $nc($($nc(s1)->location()))->type);
									$nc(this->log)->error(pos, $($CompilerProperties$Errors::TypesIncompatible(var$12, $nc($($nc(s2)->location()))->type, diagKey)));
									break;
								}
							}
						}
					}
				}
			}
		}
	}
}

void Check::checkPotentiallyAmbiguousOverloads($JCDiagnostic$DiagnosticPosition* pos, $Type* site, $Symbol$MethodSymbol* msym1, $Symbol$MethodSymbol* msym2) {
	$useLocalCurrentObjectStackCache();
	$init($Source$Feature);
	bool var$2 = msym1 != msym2 && $Source$Feature::DEFAULT_METHODS->allowedInSource(this->source);
	$init($Lint$LintCategory);
	bool var$1 = var$2 && $nc(this->lint)->isEnabled($Lint$LintCategory::OVERLOADS);
	bool var$0 = var$1 && ((int64_t)($nc(msym1)->flags() & (uint64_t)(int64_t)0x0001000000000000)) == 0;
	if (var$0 && ((int64_t)($nc(msym2)->flags() & (uint64_t)(int64_t)0x0001000000000000)) == 0) {
		$var($Type, mt1, $nc(this->types)->memberType(site, msym1));
		$var($Type, mt2, $nc(this->types)->memberType(site, msym2));
		$init($TypeTag);
		bool var$4 = $nc(mt1)->hasTag($TypeTag::FORALL);
		bool var$3 = var$4 && $nc(mt2)->hasTag($TypeTag::FORALL);
		if (var$3 && $nc(this->types)->hasSameBounds($cast($Type$ForAll, mt1), $cast($Type$ForAll, mt2))) {
			$assign(mt2, $nc(this->types)->subst(mt2, $nc(($cast($Type$ForAll, mt2)))->tvars, $nc(($cast($Type$ForAll, mt1)))->tvars));
		}
		int32_t var$5 = $nc($($nc(mt1)->getParameterTypes()))->length();
		int32_t maxLength = $Math::max(var$5, $nc($($nc(mt2)->getParameterTypes()))->length());
		$var($List, args1, $nc(this->rs)->adjustArgs($($nc(mt1)->getParameterTypes()), msym1, maxLength, true));
		$var($List, args2, $nc(this->rs)->adjustArgs($($nc(mt2)->getParameterTypes()), msym2, maxLength, true));
		int32_t var$6 = $nc(args1)->length();
		if (var$6 != $nc(args2)->length()) {
			return;
		}
		bool potentiallyAmbiguous = false;
		while (true) {
			bool var$7 = $nc(args1)->nonEmpty();
			if (!(var$7 && $nc(args2)->nonEmpty())) {
				break;
			}
			{
				$var($Type, s, $cast($Type, args1->head));
				$var($Type, t, $cast($Type, args2->head));
				bool var$8 = !$nc(this->types)->isSubtype(t, s);
				if (var$8 && !$nc(this->types)->isSubtype(s, t)) {
					bool var$11 = $nc(this->types)->isFunctionalInterface(s);
					bool var$10 = var$11 && $nc(this->types)->isFunctionalInterface(t);
					bool var$9 = var$10 && $nc($($nc($($nc(this->types)->findDescriptorType(s)))->getParameterTypes()))->length() > 0;
					if (var$9) {
						int32_t var$12 = $nc($($nc($($nc(this->types)->findDescriptorType(s)))->getParameterTypes()))->length();
						var$9 = var$12 == $nc($($nc($($nc(this->types)->findDescriptorType(t)))->getParameterTypes()))->length();
					}
					if (var$9) {
						potentiallyAmbiguous = true;
					} else {
						return;
					}
				}
				$assign(args1, args1->tail);
				$assign(args2, args2->tail);
			}
		}
		if (potentiallyAmbiguous) {
			msym1->flags_field |= 0x0001000000000000;
			msym2->flags_field |= 0x0001000000000000;
			$var($Symbol, var$13, static_cast<$Symbol*>(msym1));
			$var($Symbol, var$14, msym1->location());
			$var($Symbol, var$15, static_cast<$Symbol*>(msym2));
			$nc(this->log)->warning($Lint$LintCategory::OVERLOADS, pos, $($CompilerProperties$Warnings::PotentiallyAmbiguousOverload(var$13, var$14, var$15, $(msym2->location()))));
			return;
		}
	}
}

void Check::checkAccessFromSerializableElement($JCTree* tree, bool isLambda) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = this->warnOnAnyAccessToMembers;
	if (!var$0) {
		$init($Lint$LintCategory);
		bool var$1 = $nc(this->lint)->isEnabled($Lint$LintCategory::SERIAL);
		var$0 = (var$1 && !$nc(this->lint)->isSuppressed($Lint$LintCategory::SERIAL) && isLambda);
	}
	if (var$0) {
		$var($Symbol, sym, $TreeInfo::symbol(tree));
		$init($Kinds$KindSelector);
		if (!$nc($nc(sym)->kind)->matches($Kinds$KindSelector::VAL_MTH)) {
			return;
		}
		if ($nc(sym)->kind == $Kinds$Kind::VAR) {
			bool var$2 = ((int64_t)(sym->flags() & (uint64_t)(int64_t)0x0000000200000000)) != 0;
			if (var$2 || sym->isDirectlyOrIndirectlyLocal() || sym->name == $nc(this->names)->_this || sym->name == $nc(this->names)->_super) {
				return;
			}
		}
		bool var$3 = !$nc(this->types)->isSubtype($nc($nc(sym)->owner)->type, $nc(this->syms)->serializableType);
		if (var$3 && isEffectivelyNonPublic(sym)) {
			if (isLambda) {
				if (belongsToRestrictedPackage(sym)) {
					$init($Lint$LintCategory);
					$var($Lint$LintCategory, var$4, $Lint$LintCategory::SERIAL);
					$var($JCDiagnostic$DiagnosticPosition, var$5, $nc(tree)->pos());
					$nc(this->log)->warning(var$4, var$5, $($CompilerProperties$Warnings::AccessToMemberFromSerializableLambda(sym)));
				}
			} else {
				$var($JCDiagnostic$DiagnosticPosition, var$6, $nc(tree)->pos());
				$nc(this->log)->warning(var$6, $($CompilerProperties$Warnings::AccessToMemberFromSerializableElement(sym)));
			}
		}
	}
}

bool Check::isEffectivelyNonPublic($Symbol* sym$renamed) {
	$var($Symbol, sym, sym$renamed);
	if ($nc(sym)->packge() == $nc(this->syms)->rootPackage) {
		return false;
	}
	$init($Kinds$Kind);
	while ($nc(sym)->kind != $Kinds$Kind::PCK) {
		if (((int64_t)(sym->flags() & (uint64_t)(int64_t)1)) == 0) {
			return true;
		}
		$assign(sym, sym->owner);
	}
	return false;
}

bool Check::belongsToRestrictedPackage($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$var($String, fullName, $nc($nc($($nc(sym)->packge()))->fullname)->toString());
	bool var$2 = $nc(fullName)->startsWith("java."_s);
	bool var$1 = var$2 || $nc(fullName)->startsWith("javax."_s);
	bool var$0 = var$1 || $nc(fullName)->startsWith("sun."_s);
	return var$0 || $nc(fullName)->contains(".internal."_s);
}

void Check::checkClassBounds($JCDiagnostic$DiagnosticPosition* pos, $Type* type) {
	checkClassBounds(pos, $$new($HashMap), type);
}

void Check::checkClassBounds($JCDiagnostic$DiagnosticPosition* pos, $Map* seensofar, $Type* type) {
	$useLocalCurrentObjectStackCache();
	if ($nc(type)->isErroneous()) {
		return;
	}
	{
		$var($List, l, $nc(this->types)->interfaces(type));
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$var($Type, it, $cast($Type, l->head));
			$init($TypeTag);
			bool var$0 = $nc(type)->hasTag($TypeTag::CLASS);
			if (var$0 && !$nc(it)->hasTag($TypeTag::CLASS)) {
				continue;
			}
			$var($Type, oldit, $cast($Type, $nc(seensofar)->put($nc(it)->tsym, it)));
			if (oldit != nullptr) {
				$var($List, oldparams, oldit->allparams());
				$var($List, newparams, $nc(it)->allparams());
				if (!$nc(this->types)->containsTypeEquivalent(oldparams, newparams)) {
					$var($Symbol, var$1, static_cast<$Symbol*>(it->tsym));
					$var($String, var$2, $Type::toString(oldparams));
					$nc(this->log)->error(pos, $($CompilerProperties$Errors::CantInheritDiffArg(var$1, var$2, $($Type::toString(newparams)))));
				}
			}
			checkClassBounds(pos, seensofar, it);
		}
	}
	$var($Type, st, $nc(this->types)->supertype(type));
	$init($TypeTag);
	bool var$3 = $nc(type)->hasTag($TypeTag::CLASS);
	if (var$3 && !$nc(st)->hasTag($TypeTag::CLASS)) {
		return;
	}
	if (!$equals(st, $Type::noType)) {
		checkClassBounds(pos, seensofar, st);
	}
}

void Check::checkNotRepeated($JCDiagnostic$DiagnosticPosition* pos, $Type* it, $Set* its) {
	if ($nc(its)->contains(it)) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error(pos, $CompilerProperties$Errors::RepeatedInterface);
	} else {
		its->add(it);
	}
}

void Check::validateAnnotationTree($JCTree* tree) {
	{
	}
	$nc(tree)->accept($$new($Check$1AnnotationValidator, this));
}

void Check::validateAnnotationType($JCTree* restype) {
	if (restype != nullptr) {
		validateAnnotationType($(restype->pos()), restype->type);
	}
}

void Check::validateAnnotationType($JCDiagnostic$DiagnosticPosition* pos, $Type* type) {
	$useLocalCurrentObjectStackCache();
	if ($nc(type)->isPrimitive()) {
		return;
	}
	if ($nc(this->types)->isSameType(type, $nc(this->syms)->stringType)) {
		return;
	}
	if (((int64_t)($nc($nc(type)->tsym)->flags() & (uint64_t)(int64_t)$Flags::ENUM)) != 0) {
		return;
	}
	if (((int64_t)($nc($nc(type)->tsym)->flags() & (uint64_t)(int64_t)$Flags::ANNOTATION)) != 0) {
		return;
	}
	if ($nc($($nc(this->types)->cvarLowerBound(type)))->tsym == $nc($nc(this->syms)->classType)->tsym) {
		return;
	}
	bool var$0 = $nc(this->types)->isArray(type);
	if (var$0 && !$nc(this->types)->isArray($($nc(this->types)->elemtype(type)))) {
		validateAnnotationType(pos, $($nc(this->types)->elemtype(type)));
		return;
	}
	$init($CompilerProperties$Errors);
	$nc(this->log)->error(pos, $CompilerProperties$Errors::InvalidAnnotationMemberType);
}

void Check::validateAnnotationMethod($JCDiagnostic$DiagnosticPosition* pos, $Symbol$MethodSymbol* m) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	{
		$var($Type, sup, $nc(this->syms)->annotationType);
		for (; $nc(sup)->hasTag($TypeTag::CLASS); $assign(sup, $nc(this->types)->supertype(sup))) {
			$var($Scope, s, $nc($nc(sup)->tsym)->members());
			{
				$var($Iterator, i$, $nc($($nc(s)->getSymbolsByName($nc(m)->name)))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Symbol, sym, $cast($Symbol, i$->next()));
					{
						$init($Kinds$Kind);
						bool var$0 = $nc(sym)->kind == $Kinds$Kind::MTH && ((int64_t)(sym->flags() & (uint64_t)(int64_t)(1 | 4))) != 0;
						if (var$0 && $nc(this->types)->overrideEquivalent($nc(m)->type, sym->type)) {
							$nc(this->log)->error(pos, $($CompilerProperties$Errors::IntfAnnotationMemberClash(sym, sup)));
						}
					}
				}
			}
		}
	}
}

void Check::validateAnnotations($List* annotations, $JCTree* declarationTree, $Symbol* s) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(annotations)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCAnnotation, a, $cast($JCTree$JCAnnotation, i$->next()));
			validateAnnotation(a, declarationTree, s);
		}
	}
}

void Check::validateTypeAnnotations($List* annotations, bool isTypeParameter) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(annotations)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCAnnotation, a, $cast($JCTree$JCAnnotation, i$->next()));
			validateTypeAnnotation(a, isTypeParameter);
		}
	}
}

void Check::validateAnnotation($JCTree$JCAnnotation* a, $JCTree* declarationTree, $Symbol* s) {
	$useLocalCurrentObjectStackCache();
	validateAnnotationTree(a);
	bool var$0 = ((int64_t)($nc(s)->flags_field & (uint64_t)(int64_t)0x2000000000000000)) != 0;
	if (!var$0) {
		bool var$1 = $nc(s)->enclClass() != nullptr;
		var$0 = var$1 && $nc($(s->enclClass()))->isRecord();
	}
	bool isRecordMember = (var$0);
	$init($JCTree$Tag);
	$init($Kinds$Kind);
	bool isRecordField = ((int64_t)(s->flags_field & (uint64_t)(int64_t)0x2000000000000000)) != 0 && $nc(declarationTree)->hasTag($JCTree$Tag::VARDEF) && $nc(s->owner)->kind == $Kinds$Kind::TYP;
	if (isRecordField) {
		$var($NameArray, targets, getTargetNames(a));
		bool appliesToRecords = false;
		{
			$var($NameArray, arr$, targets);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Name, target, arr$->get(i$));
				{
					appliesToRecords = target == $nc(this->names)->FIELD || target == $nc(this->names)->PARAMETER || target == $nc(this->names)->METHOD || target == $nc(this->names)->TYPE_USE || target == $nc(this->names)->RECORD_COMPONENT;
					if (appliesToRecords) {
						break;
					}
				}
			}
		}
		if (!appliesToRecords) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($($nc(a)->pos()), $CompilerProperties$Errors::AnnotationTypeNotApplicable);
		} else {
			$var($Symbol$ClassSymbol, recordClass, $cast($Symbol$ClassSymbol, s->owner));
			$var($Symbol$RecordComponent, rc, $nc(recordClass)->getRecordComponent($cast($Symbol$VarSymbol, s)));
			$var($SymbolMetadata, metadata, $nc(rc)->getMetadata());
			if (metadata == nullptr || $nc(metadata)->isEmpty()) {
				rc->appendAttributes($cast($List, $($nc($($nc($($nc($(s->getRawAttributes()))->stream()))->filter(static_cast<$Predicate*>($$new(Check$$Lambda$lambda$validateAnnotation$8$8, this)))))->collect($($List::collector())))));
				rc->setTypeAttributes($(s->getRawTypeAttributes()));
				$set(rc, type, s->type);
			}
		}
	}
	if ($nc($nc($nc(a)->type)->tsym)->isAnnotationType()) {
		$var($Optional, applicableTargetsOp, getApplicableTargets(a, s));
		if (!$nc(applicableTargetsOp)->isEmpty()) {
			$var($Set, applicableTargets, $cast($Set, applicableTargetsOp->get()));
			bool var$2 = $nc(applicableTargets)->isEmpty();
			if (!var$2) {
				bool var$3 = $nc(applicableTargets)->size() == 1;
				var$2 = var$3 && applicableTargets->contains($nc(this->names)->TYPE_USE);
			}
			bool notApplicableOrIsTypeUseOnly = var$2;
			bool isCompGeneratedRecordElement = isRecordMember && ((int64_t)(s->flags_field & (uint64_t)(int64_t)$Flags::GENERATED_MEMBER)) != 0;
			bool isCompRecordElementWithNonApplicableDeclAnno = isCompGeneratedRecordElement && notApplicableOrIsTypeUseOnly;
			if (applicableTargets->isEmpty() || isCompRecordElementWithNonApplicableDeclAnno) {
				if (isCompRecordElementWithNonApplicableDeclAnno) {
					$var($JCTree$JCModifiers, modifiers, $TreeInfo::getModifiers(declarationTree));
					if (modifiers != nullptr && applicableTargets->isEmpty()) {
						$var($ListBuffer, newAnnotations, $new($ListBuffer));
						{
							$var($Iterator, i$, $nc(modifiers->annotations)->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($JCTree$JCAnnotation, anno, $cast($JCTree$JCAnnotation, i$->next()));
								{
									if (anno != a) {
										newAnnotations->add(anno);
									}
								}
							}
						}
						$set(modifiers, annotations, newAnnotations->toList());
					}
					$nc($(s->getMetadata()))->removeDeclarationMetadata(a->attribute);
				} else {
					$init($CompilerProperties$Errors);
					$nc(this->log)->error($(a->pos()), $CompilerProperties$Errors::AnnotationTypeNotApplicable);
				}
			}
			if (isCompGeneratedRecordElement && !isRecordField && $nc(a->type)->tsym == $nc($nc(this->syms)->trustMeType)->tsym && declarationTree->hasTag($JCTree$Tag::METHODDEF)) {
				$var($JCDiagnostic$DiagnosticPosition, var$4, a->pos());
				$nc(this->log)->error(var$4, $($CompilerProperties$Errors::VarargsInvalidTrustmeAnno(static_cast<$Symbol*>($nc($nc(this->syms)->trustMeType)->tsym), $($CompilerProperties$Fragments::VarargsTrustmeOnNonVarargsAccessor(s)))));
			}
		}
	}
	if ($nc($nc($nc(a)->annotationType)->type)->tsym == $nc($nc(this->syms)->functionalInterfaceType)->tsym) {
		if (s->kind != $Kinds$Kind::TYP) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($(a->pos()), $CompilerProperties$Errors::BadFunctionalIntfAnno);
		} else {
			bool var$6 = !s->isInterface();
			if (var$6 || ((int64_t)(s->flags() & (uint64_t)(int64_t)8192)) != 0) {
				$var($JCDiagnostic$DiagnosticPosition, var$7, a->pos());
				$nc(this->log)->error(var$7, $($CompilerProperties$Errors::BadFunctionalIntfAnno1($($CompilerProperties$Fragments::NotAFunctionalIntf(s)))));
			}
		}
	}
}

void Check::validateTypeAnnotation($JCTree$JCAnnotation* a, bool isTypeParameter) {
	$useLocalCurrentObjectStackCache();
	$Assert::checkNonNull($nc(a)->type);
	validateAnnotationTree(a);
	$init($JCTree$Tag);
	bool var$1 = $nc(a)->hasTag($JCTree$Tag::TYPE_ANNOTATION);
	bool var$0 = var$1 && !$nc($nc(a->annotationType)->type)->isErroneous();
	if (var$0 && !isTypeAnnotation(a, isTypeParameter)) {
		$var($JCDiagnostic$DiagnosticPosition, var$2, a->pos());
		$nc(this->log)->error(var$2, $($CompilerProperties$Errors::AnnotationTypeNotApplicableToType(a->type)));
	}
}

void Check::validateRepeatable($Symbol$TypeSymbol* s, $Attribute$Compound* repeatable, $JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalCurrentObjectStackCache();
	$Assert::check($nc(this->types)->isSameType($nc(repeatable)->type, $nc(this->syms)->repeatableType));
	$var($Type, t, nullptr);
	$var($List, l, $nc(repeatable)->values);
	if (!$nc(l)->isEmpty()) {
		$Assert::check($nc(($cast($Symbol$MethodSymbol, $nc(($cast($Pair, l->head)))->fst)))->name == $nc(this->names)->value);
		$assign(t, $cast($Type, $nc(($cast($Attribute$Class, $nc(($cast($Pair, l->head)))->snd)))->getValue()));
	}
	if (t == nullptr) {
		return;
	}
	validateValue($nc(t)->tsym, s, pos);
	validateRetention($nc(t)->tsym, s, pos);
	validateDocumented($nc(t)->tsym, s, pos);
	validateInherited($nc(t)->tsym, s, pos);
	validateTarget($nc(t)->tsym, s, pos);
	validateDefault($nc(t)->tsym, pos);
}

void Check::validateValue($Symbol$TypeSymbol* container, $Symbol$TypeSymbol* contained, $JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, sym, $nc($($nc(container)->members()))->findFirst($nc(this->names)->value));
	$init($Kinds$Kind);
	if (sym != nullptr && sym->kind == $Kinds$Kind::MTH) {
		$var($Symbol$MethodSymbol, m, $cast($Symbol$MethodSymbol, sym));
		$var($Type, ret, m->getReturnType());
		$init($TypeTag);
		bool var$0 = $nc(ret)->hasTag($TypeTag::ARRAY);
		if (!(var$0 && $nc(this->types)->isSameType($nc(($cast($Type$ArrayType, ret)))->elemtype, $nc(contained)->type))) {
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotationValueReturn(static_cast<$Symbol*>(container), ret, $(static_cast<$Type*>($nc(this->types)->makeArrayType($nc(contained)->type))))));
		}
	} else {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotationNoValue(static_cast<$Symbol*>(container))));
	}
}

void Check::validateRetention($Symbol$TypeSymbol* container, $Symbol$TypeSymbol* contained, $JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalCurrentObjectStackCache();
	$Attribute$RetentionPolicy* containerRetention = $nc(this->types)->getRetention(container);
	$Attribute$RetentionPolicy* containedRetention = $nc(this->types)->getRetention(contained);
	bool error = false;
	$init($Check$5);
	switch ($nc($Check$5::$SwitchMap$com$sun$tools$javac$code$Attribute$RetentionPolicy)->get($nc((containedRetention))->ordinal())) {
	case 1:
		{
			$init($Attribute$RetentionPolicy);
			if (containerRetention != $Attribute$RetentionPolicy::RUNTIME) {
				error = true;
			}
			break;
		}
	case 2:
		{
			$init($Attribute$RetentionPolicy);
			if (containerRetention == $Attribute$RetentionPolicy::SOURCE) {
				error = true;
			}
		}
	}
	if (error) {
		$var($Symbol, var$0, static_cast<$Symbol*>(container));
		$var($String, var$1, $nc(containerRetention)->name());
		$var($Symbol, var$2, static_cast<$Symbol*>(contained));
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotationRetention(var$0, var$1, var$2, $(containedRetention->name()))));
	}
}

void Check::validateDocumented($Symbol* container, $Symbol* contained, $JCDiagnostic$DiagnosticPosition* pos) {
	if ($nc(contained)->attribute($nc($nc(this->syms)->documentedType)->tsym) != nullptr) {
		if ($nc(container)->attribute($nc($nc(this->syms)->documentedType)->tsym) == nullptr) {
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotationNotDocumented(container, contained)));
		}
	}
}

void Check::validateInherited($Symbol* container, $Symbol* contained, $JCDiagnostic$DiagnosticPosition* pos) {
	if ($nc(contained)->attribute($nc($nc(this->syms)->inheritedType)->tsym) != nullptr) {
		if ($nc(container)->attribute($nc($nc(this->syms)->inheritedType)->tsym) == nullptr) {
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotationNotInherited(container, contained)));
		}
	}
}

void Check::validateTarget($Symbol$TypeSymbol* container, $Symbol$TypeSymbol* contained, $JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalCurrentObjectStackCache();
	$var($Set, containerTargets, nullptr);
	$var($Attribute$Array, containerTarget, getAttributeTargetAttribute(container));
	if (containerTarget == nullptr) {
		$assign(containerTargets, getDefaultTargetSet());
	} else {
		$assign(containerTargets, $new($HashSet));
		{
			$var($AttributeArray, arr$, $nc(containerTarget)->values);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Attribute, app, arr$->get(i$));
				{
					$var($Attribute$Enum, attributeEnum, nullptr);
					bool var$0 = $instanceOf($Attribute$Enum, app);
					if (var$0) {
						$assign(attributeEnum, $cast($Attribute$Enum, app));
						var$0 = true;
					}
					if (!(var$0)) {
						continue;
					}
					containerTargets->add($nc($nc(attributeEnum)->value)->name);
				}
			}
		}
	}
	$var($Set, containedTargets, nullptr);
	$var($Attribute$Array, containedTarget, getAttributeTargetAttribute(contained));
	if (containedTarget == nullptr) {
		$assign(containedTargets, getDefaultTargetSet());
	} else {
		$assign(containedTargets, $new($HashSet));
		{
			$var($AttributeArray, arr$, $nc(containedTarget)->values);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Attribute, app, arr$->get(i$));
				{
					$var($Attribute$Enum, attributeEnum, nullptr);
					bool var$1 = $instanceOf($Attribute$Enum, app);
					if (var$1) {
						$assign(attributeEnum, $cast($Attribute$Enum, app));
						var$1 = true;
					}
					if (!(var$1)) {
						continue;
					}
					containedTargets->add($nc($nc(attributeEnum)->value)->name);
				}
			}
		}
	}
	if (!isTargetSubsetOf(containerTargets, containedTargets)) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotationIncompatibleTarget(container, contained)));
	}
}

$Set* Check::getDefaultTargetSet() {
	if (this->defaultTargets == nullptr) {
		$var($Set, targets, $new($HashSet));
		targets->add($nc(this->names)->ANNOTATION_TYPE);
		targets->add($nc(this->names)->CONSTRUCTOR);
		targets->add($nc(this->names)->FIELD);
		if (this->allowRecords) {
			targets->add($nc(this->names)->RECORD_COMPONENT);
		}
		targets->add($nc(this->names)->LOCAL_VARIABLE);
		targets->add($nc(this->names)->METHOD);
		targets->add($nc(this->names)->PACKAGE);
		targets->add($nc(this->names)->PARAMETER);
		targets->add($nc(this->names)->TYPE);
		$set(this, defaultTargets, $Collections::unmodifiableSet(targets));
	}
	return this->defaultTargets;
}

bool Check::isTargetSubsetOf($Set* s, $Set* t) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(s)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Name, n2, $cast($Name, i$->next()));
			{
				bool currentElementOk = false;
				{
					$var($Iterator, i$, $nc(t)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Name, n1, $cast($Name, i$->next()));
						{
							if (n1 == n2) {
								currentElementOk = true;
								break;
							} else if (n1 == $nc(this->names)->TYPE && n2 == $nc(this->names)->ANNOTATION_TYPE) {
								currentElementOk = true;
								break;
							} else if (n1 == $nc(this->names)->TYPE_USE && (n2 == $nc(this->names)->TYPE || n2 == $nc(this->names)->ANNOTATION_TYPE || n2 == $nc(this->names)->TYPE_PARAMETER)) {
								currentElementOk = true;
								break;
							}
						}
					}
				}
				if (!currentElementOk) {
					return false;
				}
			}
		}
	}
	return true;
}

void Check::validateDefault($Symbol* container, $JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalCurrentObjectStackCache();
	$var($Scope, scope, $nc(container)->members());
	{
		$var($Iterator, i$, $nc($($nc(scope)->getSymbols()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, elm, $cast($Symbol, i$->next()));
			{
				$init($Kinds$Kind);
				if ($nc(elm)->name != $nc(this->names)->value && elm->kind == $Kinds$Kind::MTH && $nc(($cast($Symbol$MethodSymbol, elm)))->defaultValue == nullptr) {
					$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotationElemNondefault(container, elm)));
				}
			}
		}
	}
}

bool Check::isOverrider($Symbol* s) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if ($nc(s)->kind != $Kinds$Kind::MTH || $nc(s)->isStatic()) {
		return false;
	}
	$var($Symbol$MethodSymbol, m, $cast($Symbol$MethodSymbol, s));
	$var($Symbol$TypeSymbol, owner, $cast($Symbol$TypeSymbol, $nc(m)->owner));
	{
		$var($Iterator, i$, $nc($($nc(this->types)->closure($nc(owner)->type)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, sup, $cast($Type, i$->next()));
			{
				if (sup == $nc(owner)->type) {
					continue;
				}
				$var($Scope, scope, $nc($nc(sup)->tsym)->members());
				{
					$var($Iterator, i$, $nc($($nc(scope)->getSymbolsByName(m->name)))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol, sym, $cast($Symbol, i$->next()));
						{
							bool var$0 = !$nc(sym)->isStatic();
							if (var$0 && m->overrides(sym, owner, this->types, true)) {
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool Check::isTypeAnnotation($JCTree$JCAnnotation* a, bool isTypeParameter) {
	$useLocalCurrentObjectStackCache();
	$var($List, targets, $nc(this->typeAnnotations)->annotationTargets($nc($nc($nc(a)->annotationType)->type)->tsym));
	return (targets == nullptr) ? false : $nc($($nc(targets)->stream()))->anyMatch(static_cast<$Predicate*>($$new(Check$$Lambda$lambda$isTypeAnnotation$9$9, this, isTypeParameter)));
}

bool Check::isTypeAnnotation($Attribute* a, bool isTypeParameter) {
	$var($Attribute$Enum, e, $cast($Attribute$Enum, a));
	return ($nc($nc(e)->value)->name == $nc(this->names)->TYPE_USE || (isTypeParameter && $nc($nc(e)->value)->name == $nc(this->names)->TYPE_PARAMETER));
}

$NameArray* Check::getTargetNames($JCTree$JCAnnotation* a) {
	return getTargetNames($nc($nc($nc(a)->annotationType)->type)->tsym);
}

$NameArray* Check::getTargetNames($Symbol$TypeSymbol* annoSym) {
	$useLocalCurrentObjectStackCache();
	$var($Attribute$Array, arr, getAttributeTargetAttribute(annoSym));
	$var($NameArray, targets, nullptr);
	if (arr == nullptr) {
		$assign(targets, defaultTargetMetaInfo());
	} else {
		$assign(targets, $new($NameArray, $nc($nc(arr)->values)->length));
		for (int32_t i = 0; i < $nc(arr->values)->length; ++i) {
			$var($Attribute, app, $nc(arr->values)->get(i));
			$var($Attribute$Enum, attributeEnum, nullptr);
			bool var$0 = $instanceOf($Attribute$Enum, app);
			if (var$0) {
				$assign(attributeEnum, $cast($Attribute$Enum, app));
				var$0 = true;
			}
			if (!(var$0)) {
				return $new($NameArray, 0);
			}
			targets->set(i, $nc($nc(attributeEnum)->value)->name);
		}
	}
	return targets;
}

bool Check::annotationApplicable($JCTree$JCAnnotation* a, $Symbol* s) {
	$useLocalCurrentObjectStackCache();
	$var($Optional, targets, getApplicableTargets(a, s));
	bool var$0 = $nc(targets)->isEmpty();
	if (!var$0) {
		bool var$1 = $nc(targets)->isPresent();
		var$0 = var$1 && !$nc(($cast($Set, $(targets->get()))))->isEmpty();
	}
	return var$0;
}

$Optional* Check::getApplicableTargets($JCTree$JCAnnotation* a, $Symbol* s) {
	$useLocalCurrentObjectStackCache();
	$var($Attribute$Array, arr, getAttributeTargetAttribute($nc($nc($nc(a)->annotationType)->type)->tsym));
	$var($NameArray, targets, nullptr);
	$var($Set, applicableTargets, $new($HashSet));
	if (arr == nullptr) {
		$assign(targets, defaultTargetMetaInfo());
	} else {
		$assign(targets, $new($NameArray, $nc($nc(arr)->values)->length));
		for (int32_t i = 0; i < $nc(arr->values)->length; ++i) {
			$var($Attribute, app, $nc(arr->values)->get(i));
			$var($Attribute$Enum, attributeEnum, nullptr);
			bool var$0 = $instanceOf($Attribute$Enum, app);
			if (var$0) {
				$assign(attributeEnum, $cast($Attribute$Enum, app));
				var$0 = true;
			}
			if (!(var$0)) {
				return $Optional::empty();
			}
			targets->set(i, $nc($nc(attributeEnum)->value)->name);
		}
	}
	{
		$var($NameArray, arr$, targets);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Name, target, arr$->get(i$));
			{
				if (target == $nc(this->names)->TYPE) {
					$init($Kinds$Kind);
					if ($nc(s)->kind == $Kinds$Kind::TYP) {
						applicableTargets->add($nc(this->names)->TYPE);
					}
				} else if (target == $nc(this->names)->FIELD) {
					$init($Kinds$Kind);
					if ($nc(s)->kind == $Kinds$Kind::VAR && $nc(s->owner)->kind != $Kinds$Kind::MTH) {
						applicableTargets->add($nc(this->names)->FIELD);
					}
				} else if (target == $nc(this->names)->RECORD_COMPONENT) {
					$init($ElementKind);
					if ($nc(s)->getKind() == $ElementKind::RECORD_COMPONENT) {
						applicableTargets->add($nc(this->names)->RECORD_COMPONENT);
					}
				} else if (target == $nc(this->names)->METHOD) {
					$init($Kinds$Kind);
					if ($nc(s)->kind == $Kinds$Kind::MTH && !s->isConstructor()) {
						applicableTargets->add($nc(this->names)->METHOD);
					}
				} else if (target == $nc(this->names)->PARAMETER) {
					$init($Kinds$Kind);
					if ($nc(s)->kind == $Kinds$Kind::VAR && ($nc(s->owner)->kind == $Kinds$Kind::MTH && ((int64_t)(s->flags() & (uint64_t)(int64_t)0x0000000200000000)) != 0)) {
						applicableTargets->add($nc(this->names)->PARAMETER);
					}
				} else if (target == $nc(this->names)->CONSTRUCTOR) {
					$init($Kinds$Kind);
					if ($nc(s)->kind == $Kinds$Kind::MTH && s->isConstructor()) {
						applicableTargets->add($nc(this->names)->CONSTRUCTOR);
					}
				} else if (target == $nc(this->names)->LOCAL_VARIABLE) {
					$init($Kinds$Kind);
					if ($nc(s)->kind == $Kinds$Kind::VAR && $nc(s->owner)->kind == $Kinds$Kind::MTH && ((int64_t)(s->flags() & (uint64_t)(int64_t)0x0000000200000000)) == 0) {
						applicableTargets->add($nc(this->names)->LOCAL_VARIABLE);
					}
				} else if (target == $nc(this->names)->ANNOTATION_TYPE) {
					$init($Kinds$Kind);
					if ($nc(s)->kind == $Kinds$Kind::TYP && ((int64_t)(s->flags() & (uint64_t)(int64_t)8192)) != 0) {
						applicableTargets->add($nc(this->names)->ANNOTATION_TYPE);
					}
				} else if (target == $nc(this->names)->PACKAGE) {
					$init($Kinds$Kind);
					if ($nc(s)->kind == $Kinds$Kind::PCK) {
						applicableTargets->add($nc(this->names)->PACKAGE);
					}
				} else if (target == $nc(this->names)->TYPE_USE) {
					$init($Kinds$Kind);
					$init($TypeTag);
					if ($nc(s)->kind == $Kinds$Kind::VAR && $nc(s->owner)->kind == $Kinds$Kind::MTH && $nc(s->type)->hasTag($TypeTag::NONE)) {
						continue;
					} else {
						bool var$5 = s->kind == $Kinds$Kind::TYP || s->kind == $Kinds$Kind::VAR;
						if (!var$5) {
							bool var$6 = s->kind == $Kinds$Kind::MTH && !s->isConstructor();
							var$5 = (var$6 && !$nc($($nc(s->type)->getReturnType()))->hasTag($TypeTag::VOID));
						}
						bool var$4 = var$5;
						if (var$4 || (s->kind == $Kinds$Kind::MTH && s->isConstructor())) {
							applicableTargets->add($nc(this->names)->TYPE_USE);
						}
					}
				} else if (target == $nc(this->names)->TYPE_PARAMETER) {
					$init($Kinds$Kind);
					$init($TypeTag);
					if ($nc(s)->kind == $Kinds$Kind::TYP && $nc(s->type)->hasTag($TypeTag::TYPEVAR)) {
						applicableTargets->add($nc(this->names)->TYPE_PARAMETER);
					}
				} else if (target == $nc(this->names)->MODULE) {
					$init($Kinds$Kind);
					if ($nc(s)->kind == $Kinds$Kind::MDL) {
						applicableTargets->add($nc(this->names)->MODULE);
					}
				} else {
					return $Optional::empty();
				}
			}
		}
	}
	return $Optional::of(applicableTargets);
}

$Attribute$Array* Check::getAttributeTargetAttribute($Symbol$TypeSymbol* s) {
	$useLocalCurrentObjectStackCache();
	$var($Attribute$Compound, atTarget, $nc($($nc(s)->getAnnotationTypeMetadata()))->getTarget());
	if (atTarget == nullptr) {
		return nullptr;
	}
	$var($Attribute, atValue, $nc(atTarget)->member($nc(this->names)->value));
	$var($Attribute$Array, attributeArray, nullptr);
	bool var$0 = $instanceOf($Attribute$Array, atValue);
	if (var$0) {
		$assign(attributeArray, $cast($Attribute$Array, atValue));
		var$0 = true;
	}
	return (var$0) ? attributeArray : ($Attribute$Array*)nullptr;
}

$NameArray* Check::defaultTargetMetaInfo() {
	return this->dfltTargetMeta;
}

bool Check::validateAnnotationDeferErrors($JCTree$JCAnnotation* a) {
	$useLocalCurrentObjectStackCache();
	bool res = false;
	$var($Log$DiagnosticHandler, diagHandler, $new($Log$DiscardDiagnosticHandler, this->log));
	{
		$var($Throwable, var$0, nullptr);
		try {
			res = validateAnnotation(a);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->log)->popDiagnosticHandler(diagHandler);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return res;
}

bool Check::validateAnnotation($JCTree$JCAnnotation* a) {
	$useLocalCurrentObjectStackCache();
	bool isValid = true;
	$var($Annotate$AnnotationTypeMetadata, metadata, $nc($nc($nc($nc(a)->annotationType)->type)->tsym)->getAnnotationTypeMetadata());
	$var($Set, elements, $nc(metadata)->getAnnotationElements());
	{
		$var($Iterator, i$, $nc(a->args)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, arg, $cast($JCTree, i$->next()));
			{
				$init($JCTree$Tag);
				if (!$nc(arg)->hasTag($JCTree$Tag::ASSIGN)) {
					continue;
				}
				$var($JCTree$JCAssign, assign, $cast($JCTree$JCAssign, arg));
				$var($Symbol, m, $TreeInfo::symbol($nc(assign)->lhs));
				if (m == nullptr || $nc($nc(m)->type)->isErroneous()) {
					continue;
				}
				if (!$nc(elements)->remove(m)) {
					isValid = false;
					$var($JCDiagnostic$DiagnosticPosition, var$0, $nc($nc(assign)->lhs)->pos());
					$nc(this->log)->error(var$0, $($CompilerProperties$Errors::DuplicateAnnotationMemberValue($nc(m)->name, a->type)));
				}
			}
		}
	}
	$var($List, missingDefaults, $List::nil());
	$var($Set, membersWithDefault, metadata->getAnnotationElementsWithDefault());
	{
		$var($Iterator, i$, $nc(elements)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$MethodSymbol, m, $cast($Symbol$MethodSymbol, i$->next()));
			{
				if ($nc($nc(m)->type)->isErroneous()) {
					continue;
				}
				if (!$nc(membersWithDefault)->contains(m)) {
					$assign(missingDefaults, $nc(missingDefaults)->append($nc(m)->name));
				}
			}
		}
	}
	$assign(missingDefaults, $nc(missingDefaults)->reverse());
	if (missingDefaults->nonEmpty()) {
		isValid = false;
		$var($JCDiagnostic$Error, errorKey, (missingDefaults->size() > 1) ? $CompilerProperties$Errors::AnnotationMissingDefaultValue1(a->type, missingDefaults) : $CompilerProperties$Errors::AnnotationMissingDefaultValue(a->type, missingDefaults));
		$nc(this->log)->error($(a->pos()), errorKey);
	}
	return isValid && validateTargetAnnotationValue(a);
}

bool Check::validateTargetAnnotationValue($JCTree$JCAnnotation* a) {
	$useLocalCurrentObjectStackCache();
	if ($nc($nc($nc(a)->annotationType)->type)->tsym != $nc($nc(this->syms)->annotationTargetType)->tsym || $nc($nc(a)->args)->tail == nullptr) {
		return true;
	}
	bool isValid = true;
	$init($JCTree$Tag);
	if (!$nc(($cast($JCTree$JCExpression, $nc($nc(a)->args)->head)))->hasTag($JCTree$Tag::ASSIGN)) {
		return false;
	}
	$var($JCTree$JCAssign, assign, $cast($JCTree$JCAssign, $nc($nc(a)->args)->head));
	$var($Symbol, m, $TreeInfo::symbol($nc(assign)->lhs));
	if ($nc(m)->name != $nc(this->names)->value) {
		return false;
	}
	$var($JCTree, rhs, $nc(assign)->rhs);
	if (!$nc(rhs)->hasTag($JCTree$Tag::NEWARRAY)) {
		return false;
	}
	$var($JCTree$JCNewArray, na, $cast($JCTree$JCNewArray, rhs));
	$var($Set, targets, $new($HashSet));
	{
		$var($Iterator, i$, $nc($nc(na)->elems)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, elem, $cast($JCTree, i$->next()));
			{
				if (!targets->add($($TreeInfo::symbol(elem)))) {
					isValid = false;
					$init($CompilerProperties$Errors);
					$nc(this->log)->error($($nc(elem)->pos()), $CompilerProperties$Errors::RepeatedAnnotationTarget);
				}
			}
		}
	}
	return isValid;
}

void Check::checkDeprecatedAnnotation($JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
	$useLocalCurrentObjectStackCache();
	$init($Lint$LintCategory);
	bool var$3 = $nc(this->lint)->isEnabled($Lint$LintCategory::DEP_ANN);
	bool var$2 = var$3 && $nc(s)->isDeprecatableViaAnnotation();
	bool var$1 = var$2 && ((int64_t)(s->flags() & (uint64_t)(int64_t)0x00020000)) != 0;
	bool var$0 = var$1 && !$nc($nc(this->syms)->deprecatedType)->isErroneous();
	if (var$0 && s->attribute($nc($nc(this->syms)->deprecatedType)->tsym) == nullptr) {
		$init($CompilerProperties$Warnings);
		$nc(this->log)->warning($Lint$LintCategory::DEP_ANN, pos, $CompilerProperties$Warnings::MissingDeprecatedAnnotation);
	}
	bool var$4 = $nc(this->lint)->isEnabled($Lint$LintCategory::DEPRECATION);
	if (var$4 && !$nc(s)->isDeprecatableViaAnnotation()) {
		bool var$5 = !$nc($nc(this->syms)->deprecatedType)->isErroneous();
		if (var$5 && s->attribute($nc($nc(this->syms)->deprecatedType)->tsym) != nullptr) {
			$nc(this->log)->warning($Lint$LintCategory::DEPRECATION, pos, $($CompilerProperties$Warnings::DeprecatedAnnotationHasNoEffect($($Kinds::kindName(s)))));
		}
	}
}

void Check::checkDeprecated($JCDiagnostic$DiagnosticPosition* pos, $Symbol* other, $Symbol* s) {
	checkDeprecated(static_cast<$Supplier*>($$new(Check$$Lambda$lambda$checkDeprecated$10$10, pos)), other, s);
}

void Check::checkDeprecated($Supplier* pos, $Symbol* other, $Symbol* s) {
	bool var$1 = $nc(s)->isDeprecatedForRemoval();
	if (!var$1) {
		bool var$2 = $nc(s)->isDeprecated();
		var$1 = var$2 && !$nc(other)->isDeprecated();
	}
	bool var$0 = (var$1);
	if (var$0) {
		bool var$3 = s->outermostClass() != other->outermostClass();
		var$0 = (var$3 || s->outermostClass() == nullptr);
	}
	$init($Kinds$Kind);
	if (var$0 && $nc(s)->kind != $Kinds$Kind::PCK) {
		$nc(this->deferredLintHandler)->report(static_cast<$DeferredLintHandler$LintLogger*>($$new(Check$$Lambda$lambda$checkDeprecated$11$11, this, pos, s)));
	}
}

void Check::checkSunAPI($JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
	if (((int64_t)($nc(s)->flags() & (uint64_t)(int64_t)0x0000004000000000)) != 0) {
		$nc(this->deferredLintHandler)->report(static_cast<$DeferredLintHandler$LintLogger*>($$new(Check$$Lambda$lambda$checkSunAPI$12$12, this, pos, s)));
	}
}

void Check::checkProfile($JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
	$init($Profile);
	if (this->profile != $Profile::DEFAULT && ((int64_t)($nc(s)->flags() & (uint64_t)(int64_t)0x0000200000000000)) != 0) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::NotInProfile(s, this->profile)));
	}
}

void Check::checkPreview($JCDiagnostic$DiagnosticPosition* pos, $Symbol* other, $Symbol* s) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = ((int64_t)($nc(s)->flags() & (uint64_t)(int64_t)0x0100000000000000)) != 0;
	if (var$0) {
		var$0 = $nc($(s->packge()))->modle != $nc($($nc(other)->packge()))->modle;
	}
	if (var$0) {
		if (((int64_t)(s->flags() & (uint64_t)(int64_t)0x0400000000000000)) == 0) {
			if (!$nc(this->preview)->isEnabled()) {
				$nc(this->log)->error(pos, $($CompilerProperties$Errors::IsPreview(s)));
			} else {
				$nc(this->preview)->markUsesPreview(pos);
				$nc(this->deferredLintHandler)->report(static_cast<$DeferredLintHandler$LintLogger*>($$new(Check$$Lambda$lambda$checkPreview$13$13, this, pos, s)));
			}
		} else {
			$nc(this->deferredLintHandler)->report(static_cast<$DeferredLintHandler$LintLogger*>($$new(Check$$Lambda$lambda$checkPreview$14$14, this, pos, s)));
		}
	}
	if ($nc(this->preview)->declaredUsingPreviewFeature(s)) {
		if ($nc(this->preview)->isEnabled()) {
			$nc(this->preview)->markUsesPreview(pos);
			$nc(this->deferredLintHandler)->report(static_cast<$DeferredLintHandler$LintLogger*>($$new(Check$$Lambda$lambda$checkPreview$15$15, this, pos, s)));
		}
	}
}

void Check::checkNonCyclicElements($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	if (((int64_t)($nc($nc(tree)->sym)->flags_field & (uint64_t)(int64_t)8192)) == 0) {
		return;
	}
	$Assert::check(((int64_t)($nc($nc(tree)->sym)->flags_field & (uint64_t)(int64_t)0x08000000)) == 0);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc($nc(tree)->sym)->flags_field |= 0x08000000;
			{
				$var($Iterator, i$, $nc(tree->defs)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree, def, $cast($JCTree, i$->next()));
					{
						$init($JCTree$Tag);
						if (!$nc(def)->hasTag($JCTree$Tag::METHODDEF)) {
							continue;
						}
						$var($JCTree$JCMethodDecl, meth, $cast($JCTree$JCMethodDecl, def));
						checkAnnotationResType($($nc(meth)->pos()), $nc(meth->restype)->type);
					}
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($nc(tree)->sym)->flags_field &= (uint64_t)~0x08000000;
			$nc(tree->sym)->flags_field |= 0x0000000800000000;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Check::checkNonCyclicElementsInternal($JCDiagnostic$DiagnosticPosition* pos, $Symbol$TypeSymbol* tsym) {
	$useLocalCurrentObjectStackCache();
	if (((int64_t)($nc(tsym)->flags_field & (uint64_t)(int64_t)0x0000000800000000)) != 0) {
		return;
	}
	if (((int64_t)($nc(tsym)->flags_field & (uint64_t)(int64_t)0x08000000)) != 0) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::CyclicAnnotationElement(tsym)));
		return;
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(tsym)->flags_field |= 0x08000000;
			{
				$init($Scope$LookupKind);
				$var($Iterator, i$, $nc($($nc($(tsym->members()))->getSymbols($Scope$LookupKind::NON_RECURSIVE)))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Symbol, s, $cast($Symbol, i$->next()));
					{
						$init($Kinds$Kind);
						if ($nc(s)->kind != $Kinds$Kind::MTH) {
							continue;
						}
						checkAnnotationResType(pos, $($nc($nc(($cast($Symbol$MethodSymbol, s)))->type)->getReturnType()));
					}
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(tsym)->flags_field &= (uint64_t)~0x08000000;
			tsym->flags_field |= 0x0000000800000000;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Check::checkAnnotationResType($JCDiagnostic$DiagnosticPosition* pos, $Type* type) {
	$useLocalCurrentObjectStackCache();
	$init($Check$5);
	switch ($nc($Check$5::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(type)->getTag())))->ordinal())) {
	case 1:
		{
			if (((int64_t)($nc(type->tsym)->flags() & (uint64_t)(int64_t)8192)) != 0) {
				checkNonCyclicElementsInternal(pos, type->tsym);
			}
			break;
		}
	case 2:
		{
			checkAnnotationResType(pos, $($nc(this->types)->elemtype(type)));
			break;
		}
	default:
		{
			break;
		}
	}
}

void Check::checkCyclicConstructors($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Map, callMap, $new($HashMap));
	{
		$var($List, l, $nc(tree)->defs);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$var($JCTree$JCMethodInvocation, app, $TreeInfo::firstConstructorCall($cast($JCTree, l->head)));
			if (app == nullptr) {
				continue;
			}
			$var($JCTree$JCMethodDecl, meth, $cast($JCTree$JCMethodDecl, l->head));
			if ($TreeInfo::name($nc(app)->meth) == $nc(this->names)->_this) {
				callMap->put($nc(meth)->sym, $($TreeInfo::symbol($nc(app)->meth)));
			} else {
				$nc($nc(meth)->sym)->flags_field |= 0x40000000;
			}
		}
	}
	$var($SymbolArray, ctors, $new($SymbolArray, 0));
	$assign(ctors, $fcast($SymbolArray, $nc($(callMap->keySet()))->toArray(ctors)));
	{
		$var($SymbolArray, arr$, ctors);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Symbol, caller, arr$->get(i$));
			{
				checkCyclicConstructor(tree, caller, callMap);
			}
		}
	}
}

void Check::checkCyclicConstructor($JCTree$JCClassDecl* tree, $Symbol* ctor, $Map* callMap) {
	$useLocalCurrentObjectStackCache();
	if (ctor != nullptr && ((int64_t)(ctor->flags_field & (uint64_t)(int64_t)0x40000000)) == 0) {
		if (((int64_t)(ctor->flags_field & (uint64_t)(int64_t)0x08000000)) != 0) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($($TreeInfo::diagnosticPositionFor(ctor, static_cast<$JCTree*>(tree))), $CompilerProperties$Errors::RecursiveCtorInvocation);
		} else {
			ctor->flags_field |= 0x08000000;
			checkCyclicConstructor(tree, $cast($Symbol, $($nc(callMap)->remove(ctor))), callMap);
			ctor->flags_field &= (uint64_t)~0x08000000;
		}
		ctor->flags_field |= 0x40000000;
	}
}

void Check::checkDivZero($JCDiagnostic$DiagnosticPosition* pos, $Symbol* operator$, $Type* operand) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = $nc(operand)->constValue() != nullptr;
	$init($TypeTag);
	bool var$0 = var$1 && $nc($(operand->getTag()))->isSubRangeOf($TypeTag::LONG);
	if (var$0 && $nc((($cast($Number, $(operand->constValue())))))->longValue() == 0) {
		int32_t opc = $nc(($cast($Symbol$OperatorSymbol, operator$)))->opcode;
		if (opc == $ByteCodes::idiv || opc == $ByteCodes::imod || opc == $ByteCodes::ldiv || opc == $ByteCodes::lmod) {
			$nc(this->deferredLintHandler)->report(static_cast<$DeferredLintHandler$LintLogger*>($$new(Check$$Lambda$lambda$checkDivZero$16$16, this, pos)));
		}
	}
}

void Check::checkEmptyIf($JCTree$JCIf* tree) {
	$init($JCTree$Tag);
	bool var$0 = $nc($nc(tree)->thenpart)->hasTag($JCTree$Tag::SKIP) && tree->elsepart == nullptr;
	$init($Lint$LintCategory);
	if (var$0 && $nc(this->lint)->isEnabled($Lint$LintCategory::EMPTY)) {
		$init($CompilerProperties$Warnings);
		$nc(this->log)->warning($Lint$LintCategory::EMPTY, $($nc(tree->thenpart)->pos()), $CompilerProperties$Warnings::EmptyIf);
	}
}

bool Check::checkUnique($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym, $Scope* s) {
	$useLocalCurrentObjectStackCache();
	if ($nc($nc(sym)->type)->isErroneous()) {
		return true;
	}
	if ($nc($nc(sym)->owner)->name == $nc(this->names)->any) {
		return false;
	}
	{
		$init($Scope$LookupKind);
		$var($Iterator, i$, $nc($($nc(s)->getSymbolsByName($nc(sym)->name, $Scope$LookupKind::NON_RECURSIVE)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, byName, $cast($Symbol, i$->next()));
			{
				bool var$0 = sym != byName && ((int64_t)($nc(byName)->flags() & (uint64_t)(int64_t)0x0000040000000000)) == 0 && $nc(sym)->kind == byName->kind && sym->name != $nc(this->names)->error;
				if (var$0) {
					$init($Kinds$Kind);
					bool var$1 = sym->kind != $Kinds$Kind::MTH || $nc(this->types)->hasSameArgs($nc(sym)->type, $nc(byName)->type);
					if (!var$1) {
						$var($Type, var$2, $nc(this->types)->erasure($nc(sym)->type));
						var$1 = $nc(this->types)->hasSameArgs(var$2, $($nc(this->types)->erasure($nc(byName)->type)));
					}
					var$0 = (var$1);
				}
				if (var$0) {
					int64_t var$3 = ((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)0x0000000400000000));
					if (var$3 != ((int64_t)($nc(byName)->flags() & (uint64_t)(int64_t)0x0000000400000000))) {
						sym->flags_field |= 0x0000040000000000;
						varargsDuplicateError(pos, sym, byName);
						return true;
					} else {
						$init($Kinds$Kind);
						if (sym->kind == $Kinds$Kind::MTH && !$nc(this->types)->hasSameArgs(sym->type, byName->type, false)) {
							duplicateErasureError(pos, sym, byName);
							sym->flags_field |= 0x0000040000000000;
							return true;
						} else {
							bool var$7 = ((int64_t)(sym->flags() & (uint64_t)(int64_t)0x0800000000000000)) != 0;
							bool var$6 = var$7 && ((int64_t)(byName->flags() & (uint64_t)(int64_t)0x0800000000000000)) != 0;
							if (var$6 && ((int64_t)(byName->flags() & (uint64_t)(int64_t)0x1000000000000000)) == 0) {
								if (!$nc(sym->type)->isErroneous()) {
									$init($CompilerProperties$Errors);
									$nc(this->log)->error(pos, $CompilerProperties$Errors::MatchBindingExists);
									sym->flags_field |= 0x0000040000000000;
								}
								return false;
							} else {
								duplicateError(pos, byName);
								return false;
							}
						}
					}
				}
			}
		}
	}
	return true;
}

void Check::duplicateErasureError($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym1, $Symbol* sym2) {
	bool var$0 = !$nc($nc(sym1)->type)->isErroneous();
	if (var$0 && !$nc($nc(sym2)->type)->isErroneous()) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::NameClashSameErasure(sym1, sym2)));
	}
}

void Check::checkImportsUnique($JCTree$JCCompilationUnit* toplevel) {
	$useLocalCurrentObjectStackCache();
	$var($Scope$WriteableScope, ordinallyImportedSoFar, $Scope$WriteableScope::create($nc(toplevel)->packge));
	$var($Scope$WriteableScope, staticallyImportedSoFar, $Scope$WriteableScope::create($nc(toplevel)->packge));
	$var($Scope$WriteableScope, topLevelScope, $nc(toplevel)->toplevelScope);
	{
		$var($Iterator, i$, $nc(toplevel->defs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, def, $cast($JCTree, i$->next()));
			{
				$init($JCTree$Tag);
				if (!$nc(def)->hasTag($JCTree$Tag::IMPORT)) {
					continue;
				}
				$var($JCTree$JCImport, imp, $cast($JCTree$JCImport, def));
				if ($nc(imp)->importScope == nullptr) {
					continue;
				}
				{
					$var($Iterator, i$, $nc($($nc($nc(imp)->importScope)->getSymbols(static_cast<$Predicate*>($$new(Check$$Lambda$lambda$checkImportsUnique$17$17)))))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol, sym, $cast($Symbol, i$->next()));
						{
							if (imp->isStatic()) {
								checkUniqueImport($(imp->pos()), ordinallyImportedSoFar, staticallyImportedSoFar, topLevelScope, sym, true);
								$nc(staticallyImportedSoFar)->enter(sym);
							} else {
								checkUniqueImport($(imp->pos()), ordinallyImportedSoFar, staticallyImportedSoFar, topLevelScope, sym, false);
								$nc(ordinallyImportedSoFar)->enter(sym);
							}
						}
					}
				}
				$set(imp, importScope, nullptr);
			}
		}
	}
}

bool Check::checkUniqueImport($JCDiagnostic$DiagnosticPosition* pos, $Scope* ordinallyImportedSoFar, $Scope* staticallyImportedSoFar, $Scope* topLevelScope, $Symbol* sym, bool staticImport) {
	$useLocalCurrentObjectStackCache();
	$var($Predicate, duplicates, static_cast<$Predicate*>($new(Check$$Lambda$lambda$checkUniqueImport$18$18, sym)));
	$var($Symbol, ordinaryClashing, $nc(ordinallyImportedSoFar)->findFirst($nc(sym)->name, duplicates));
	$var($Symbol, staticClashing, nullptr);
	if (ordinaryClashing == nullptr && !staticImport) {
		$assign(staticClashing, $nc(staticallyImportedSoFar)->findFirst($nc(sym)->name, duplicates));
	}
	if (ordinaryClashing != nullptr || staticClashing != nullptr) {
		if (ordinaryClashing != nullptr) {
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::AlreadyDefinedSingleImport(ordinaryClashing)));
		} else {
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::AlreadyDefinedStaticSingleImport(staticClashing)));
		}
		return false;
	}
	$var($Symbol, clashing, $nc(topLevelScope)->findFirst($nc(sym)->name, duplicates));
	if (clashing != nullptr) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::AlreadyDefinedThisUnit(clashing)));
		return false;
	}
	return true;
}

void Check::checkCanonical($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	if (!isCanonical(tree)) {
		$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree)->pos());
		$nc(this->log)->error(var$0, $($CompilerProperties$Errors::ImportRequiresCanonical($($TreeInfo::symbol(tree)))));
	}
}

bool Check::isCanonical($JCTree* tree$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, tree, tree$renamed);
	$init($JCTree$Tag);
	while ($nc(tree)->hasTag($JCTree$Tag::SELECT)) {
		$var($JCTree$JCFieldAccess, s, $cast($JCTree$JCFieldAccess, tree));
		if ($nc($nc(s->sym)->owner)->getQualifiedName() != $nc($($TreeInfo::symbol(s->selected)))->getQualifiedName()) {
			return false;
		}
		$assign(tree, s->selected);
	}
	return true;
}

void Check::checkForBadAuxiliaryClassAccess($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Symbol$ClassSymbol* c) {
	$init($Lint$LintCategory);
	bool var$2 = $nc(this->lint)->isEnabled($Lint$LintCategory::AUXILIARYCLASS);
	bool var$1 = var$2 && ((int64_t)($nc(c)->flags() & (uint64_t)(int64_t)0x0000100000000000)) != 0;
	bool var$0 = var$1 && $nc(this->rs)->isAccessible(env, static_cast<$Symbol$TypeSymbol*>(c));
	if (var$0 && !$nc(this->fileManager)->isSameFile(c->sourcefile, $nc($nc(env)->toplevel)->sourcefile)) {
		$nc(this->log)->warning(pos, $($CompilerProperties$Warnings::AuxiliaryClassAccessedFromOutsideOfItsSourceFile(static_cast<$Symbol*>(c), c->sourcefile)));
	}
}

void Check::checkDefaultConstructor($Symbol$ClassSymbol* c, $JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalCurrentObjectStackCache();
	$init($Lint$LintCategory);
	bool var$3 = $nc(this->lint)->isEnabled($Lint$LintCategory::MISSING_EXPLICIT_CTOR);
	bool var$2 = var$3 && (((int64_t)($nc(c)->flags() & (uint64_t)(16384 | (int64_t)0x2000000000000000))) == 0);
	bool var$1 = var$2 && !c->isAnonymous();
	bool var$0 = var$1 && (((int64_t)(c->flags() & (uint64_t)(int64_t)(1 | 4))) != 0);
	$init($Source$Feature);
	if (var$0 && $Source$Feature::MODULES->allowedInSource(this->source)) {
		$NestingKind* nestingKind = c->getNestingKind();
		$init($Check$5);
		switch ($nc($Check$5::$SwitchMap$javax$lang$model$element$NestingKind)->get($nc((nestingKind))->ordinal())) {
		case 1:
			{}
		case 2:
			{
				{
					return;
				}
			}
		case 3:
			{
				{
				}
				break;
			}
		case 4:
			{
				{
					$var($Symbol, owner, c->owner);
					$init($Kinds$Kind);
					while (owner != nullptr && owner->kind == $Kinds$Kind::TYP) {
						if (((int64_t)(owner->flags() & (uint64_t)(int64_t)(1 | 4))) == 0) {
							return;
						}
						$assign(owner, owner->owner);
					}
				}
				break;
			}
		}
		$var($Symbol$PackageSymbol, pkg, c->packge());
		if (!$nc(pkg)->isUnnamed()) {
			$var($Symbol$ModuleSymbol, modle, pkg->modle);
			{
				$var($Iterator, i$, $nc($nc(modle)->exports)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Directive$ExportsDirective, exportDir, $cast($Directive$ExportsDirective, i$->next()));
					{
						if ($nc($of($nc(exportDir)->packge))->equals(pkg)) {
							if (exportDir->modules == nullptr || $nc(exportDir->modules)->isEmpty()) {
								$nc(this->deferredLintHandler)->report(static_cast<$DeferredLintHandler$LintLogger*>($$new(Check$$Lambda$lambda$checkDefaultConstructor$19$19, this, pos, c, pkg, modle)));
							} else {
								return;
							}
						}
					}
				}
			}
		}
	}
	return;
}

$Warner* Check::castWarner($JCDiagnostic$DiagnosticPosition* pos, $Type* found, $Type* expected) {
	return $new($Check$ConversionWarner, this, pos, "unchecked.cast.to.type"_s, found, expected);
}

$Warner* Check::convertWarner($JCDiagnostic$DiagnosticPosition* pos, $Type* found, $Type* expected) {
	return $new($Check$ConversionWarner, this, pos, "unchecked.assign"_s, found, expected);
}

void Check::checkFunctionalInterface($JCTree$JCClassDecl* tree, $Symbol$ClassSymbol* cs) {
	$useLocalCurrentObjectStackCache();
	$var($Attribute$Compound, functionalType, $nc(cs)->attribute($nc($nc(this->syms)->functionalInterfaceType)->tsym));
	if (functionalType != nullptr) {
		try {
			$nc(this->types)->findDescriptorSymbol(static_cast<$Symbol$TypeSymbol*>(cs));
		} catch ($Types$FunctionDescriptorLookupError& ex) {
			$var($JCDiagnostic$DiagnosticPosition, pos, $nc(tree)->pos());
			{
				$var($Iterator, i$, $nc($nc($($cast($JCTree$JCModifiers, tree->getModifiers())))->annotations)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree$JCAnnotation, a, $cast($JCTree$JCAnnotation, i$->next()));
					{
						if ($nc($nc($nc(a)->annotationType)->type)->tsym == $nc($nc(this->syms)->functionalInterfaceType)->tsym) {
							$assign(pos, a->pos());
							break;
						}
					}
				}
			}
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::BadFunctionalIntfAnno1($(ex->getDiagnostic()))));
		}
	}
}

void Check::checkImportsResolvable($JCTree$JCCompilationUnit* toplevel) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($cast($List, $nc(toplevel)->getImports())))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCImport, imp, $cast($JCTree$JCImport, i$->next()));
			{
				$init($JCTree$Tag);
				if (!$nc(imp)->staticImport || !$nc($nc(imp)->qualid)->hasTag($JCTree$Tag::SELECT)) {
					continue;
				}
				$var($JCTree$JCFieldAccess, select, $cast($JCTree$JCFieldAccess, $nc(imp)->qualid));
				$var($Symbol, origin, nullptr);
				bool var$0 = $nc(select)->name == $nc(this->names)->asterisk || ($assign(origin, $TreeInfo::symbol($nc(select)->selected))) == nullptr;
				$init($Kinds$Kind);
				if (var$0 || $nc(origin)->kind != $Kinds$Kind::TYP) {
					continue;
				}
				$var($Symbol$TypeSymbol, site, $cast($Symbol$TypeSymbol, $TreeInfo::symbol($nc(select)->selected)));
				if (!checkTypeContainsImportableElement(site, site, toplevel->packge, $nc(select)->name, $$new($HashSet))) {
					$var($JCDiagnostic$DiagnosticPosition, var$1, imp->pos());
					$init($Kinds$KindName);
					$nc(this->log)->error(var$1, $($CompilerProperties$Errors::CantResolveLocation($Kinds$KindName::STATIC, $nc(select)->name, ($Void*)nullptr, ($Void*)nullptr, $($CompilerProperties$Fragments::Location($($Kinds::kindName(static_cast<$Symbol*>(site))), static_cast<$Symbol*>(site), ($Void*)nullptr)))));
				}
			}
		}
	}
}

void Check::checkImportedPackagesObservable($JCTree$JCCompilationUnit* toplevel) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($cast($List, $nc(toplevel)->getImports())))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCImport, imp, $cast($JCTree$JCImport, i$->next()));
			{
				if (!$nc(imp)->staticImport && $TreeInfo::name(imp->qualid) == $nc(this->names)->asterisk) {
					$var($Symbol$TypeSymbol, tsym, $nc($nc($nc(($cast($JCTree$JCFieldAccess, imp->qualid)))->selected)->type)->tsym);
					$init($Kinds$Kind);
					bool var$0 = $nc(tsym)->kind == $Kinds$Kind::PCK && $nc($(tsym->members()))->isEmpty();
					if (var$0) {
						$init($Source$Feature);
						bool var$1 = $Source$Feature::IMPORT_ON_DEMAND_OBSERVABLE_PACKAGES->allowedInSource(this->source);
						var$0 = !(var$1 && tsym->exists());
					}
					if (var$0) {
						$init($JCDiagnostic$DiagnosticFlag);
						$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::RESOLVE_ERROR, imp->pos$, $($CompilerProperties$Errors::DoesntExist(tsym)));
					}
				}
			}
		}
	}
}

bool Check::checkTypeContainsImportableElement($Symbol$TypeSymbol* tsym, $Symbol$TypeSymbol* origin, $Symbol$PackageSymbol* packge, $Name* name, $Set* processed) {
	$useLocalCurrentObjectStackCache();
	if (tsym == nullptr || !$nc(processed)->add(tsym)) {
		return false;
	}
	if (checkTypeContainsImportableElement($nc($($nc(this->types)->supertype($nc(tsym)->type)))->tsym, origin, packge, name, processed)) {
		return true;
	}
	{
		$var($Iterator, i$, $nc($($nc(this->types)->interfaces($nc(tsym)->type)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			if (checkTypeContainsImportableElement($nc(t)->tsym, origin, packge, name, processed)) {
				return true;
			}
		}
	}
	{
		$var($Iterator, i$, $nc($($nc($($nc(tsym)->members()))->getSymbolsByName(name)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				bool var$1 = $nc(sym)->isStatic();
				bool var$0 = var$1 && importAccessible(sym, packge);
				if (var$0 && sym->isMemberOf(origin, this->types)) {
					return true;
				}
			}
		}
	}
	return false;
}

bool Check::importAccessible($Symbol* sym, $Symbol$PackageSymbol* packge) {
	try {
		int32_t flags = (int32_t)((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)7));
		switch (flags) {
		default:
			{}
		case 1:
			{
				return true;
			}
		case 2:
			{
				return false;
			}
		case 0:
			{}
		case 4:
			{
				return sym->packge() == packge;
			}
		}
	} catch ($ClassFinder$BadClassFile& err) {
		$throw(err);
	} catch ($Symbol$CompletionFailure& ex) {
		return false;
	}
	$shouldNotReachHere();
}

void Check::checkLeaksNotAccessible($Env* env, $JCTree$JCClassDecl* check) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCCompilationUnit, toplevel, $nc(env)->toplevel);
	if ($nc(toplevel)->modle == $nc(this->syms)->unnamedModule || $nc(toplevel)->modle == $nc(this->syms)->noModule || ((int64_t)($nc($nc(check)->sym)->flags() & (uint64_t)(int64_t)0x01000000)) != 0) {
		return;
	}
	$var($Directive$ExportsDirective, currentExport, findExport($nc(toplevel)->packge));
	if (currentExport == nullptr || $nc(currentExport)->modules != nullptr) {
		return;
	}
	$$new($Check$4, this, env, check, toplevel)->scan(static_cast<$JCTree*>(check));
}

$Directive$ExportsDirective* Check::findExport($Symbol$PackageSymbol* pack) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($nc($nc(pack)->modle)->exports)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Directive$ExportsDirective, d, $cast($Directive$ExportsDirective, i$->next()));
			{
				if ($nc(d)->packge == pack) {
					return d;
				}
			}
		}
	}
	return nullptr;
}

bool Check::isAPISymbol($Symbol* sym$renamed) {
	$var($Symbol, sym, sym$renamed);
	$init($Kinds$Kind);
	while ($nc(sym)->kind != $Kinds$Kind::PCK) {
		bool var$0 = ((int64_t)(sym->flags() & (uint64_t)(int64_t)$Flags::PUBLIC)) == 0;
		if (var$0 && ((int64_t)(sym->flags() & (uint64_t)(int64_t)$Flags::PROTECTED)) == 0) {
			return false;
		}
		$assign(sym, sym->owner);
	}
	return true;
}

void Check::checkVisible($JCDiagnostic$DiagnosticPosition* pos, $Symbol* what, $Symbol$PackageSymbol* inPackage, bool inSuperType) {
	$useLocalCurrentObjectStackCache();
	if (!isAPISymbol(what) && !inSuperType) {
		$init($Lint$LintCategory);
		$var($Kinds$KindName, var$0, $Kinds::kindName(what));
		$var($Symbol, var$1, what);
		$nc(this->log)->warning($Lint$LintCategory::EXPORTS, pos, $($CompilerProperties$Warnings::LeaksNotAccessible(var$0, var$1, $nc($($nc(what)->packge()))->modle)));
		return;
	}
	$var($Symbol$PackageSymbol, whatPackage, $nc(what)->packge());
	$var($Directive$ExportsDirective, whatExport, findExport(whatPackage));
	$var($Directive$ExportsDirective, inExport, findExport(inPackage));
	if (whatExport == nullptr) {
		$init($Lint$LintCategory);
		$var($Kinds$KindName, var$2, $Kinds::kindName(what));
		$var($Symbol, var$3, what);
		$nc(this->log)->warning($Lint$LintCategory::EXPORTS, pos, $($CompilerProperties$Warnings::LeaksNotAccessibleUnexported(var$2, var$3, $nc($(what->packge()))->modle)));
		return;
	}
	if ($nc(whatExport)->modules != nullptr) {
		if ($nc(inExport)->modules == nullptr || !$nc(whatExport->modules)->containsAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(inExport)->modules)))) {
			$init($Lint$LintCategory);
			$var($Kinds$KindName, var$4, $Kinds::kindName(what));
			$var($Symbol, var$5, what);
			$nc(this->log)->warning($Lint$LintCategory::EXPORTS, pos, $($CompilerProperties$Warnings::LeaksNotAccessibleUnexportedQualified(var$4, var$5, $nc($(what->packge()))->modle)));
		}
	}
	if ($nc(whatPackage)->modle != $nc(inPackage)->modle && whatPackage->modle != $nc(this->syms)->java_base) {
		$var($List, todo, $List::of(inPackage->modle));
		while ($nc(todo)->nonEmpty()) {
			$var($Symbol$ModuleSymbol, current, $cast($Symbol$ModuleSymbol, todo->head));
			$assign(todo, todo->tail);
			if (current == whatPackage->modle) {
				return;
			}
			if (((int64_t)($nc(current)->flags() & (uint64_t)$Flags::AUTOMATIC_MODULE)) != 0) {
				continue;
			}
			{
				$var($Iterator, i$, $nc($nc(current)->requires)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Directive$RequiresDirective, req, $cast($Directive$RequiresDirective, i$->next()));
					{
						if ($nc(req)->isTransitive()) {
							$assign(todo, $nc(todo)->prepend(req->module));
						}
					}
				}
			}
		}
		$init($Lint$LintCategory);
		$var($Kinds$KindName, var$6, $Kinds::kindName(what));
		$var($Symbol, var$7, what);
		$nc(this->log)->warning($Lint$LintCategory::EXPORTS, pos, $($CompilerProperties$Warnings::LeaksNotAccessibleNotRequiredTransitive(var$6, var$7, $nc($(what->packge()))->modle)));
	}
}

void Check::checkModuleExists($JCDiagnostic$DiagnosticPosition* pos, $Symbol$ModuleSymbol* msym) {
	$init($Kinds$Kind);
	if ($nc(msym)->kind != $Kinds$Kind::MDL) {
		$nc(this->deferredLintHandler)->report(static_cast<$DeferredLintHandler$LintLogger*>($$new(Check$$Lambda$lambda$checkModuleExists$20$20, this, pos, msym)));
	}
}

void Check::checkPackageExistsForOpens($JCDiagnostic$DiagnosticPosition* pos, $Symbol$PackageSymbol* packge) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc($($nc(packge)->members()))->isEmpty();
	if (var$0 && (((int64_t)(packge->flags() & (uint64_t)$Flags::HAS_RESOURCE)) == 0)) {
		$nc(this->deferredLintHandler)->report(static_cast<$DeferredLintHandler$LintLogger*>($$new(Check$$Lambda$lambda$checkPackageExistsForOpens$21$21, this, pos, packge)));
	}
}

void Check::checkModuleRequires($JCDiagnostic$DiagnosticPosition* pos, $Directive$RequiresDirective* rd) {
	if (((int64_t)($nc($nc(rd)->module)->flags() & (uint64_t)$Flags::AUTOMATIC_MODULE)) != 0) {
		$nc(this->deferredLintHandler)->report(static_cast<$DeferredLintHandler$LintLogger*>($$new(Check$$Lambda$lambda$checkModuleRequires$22$22, this, rd, pos)));
	}
}

void Check::checkSwitchCaseStructure($List* cases) {
	$useLocalCurrentObjectStackCache();
	bool wasConstant = false;
	bool wasDefault = false;
	bool wasNullPattern = false;
	bool wasPattern = false;
	bool wasTypePattern = false;
	bool wasNonEmptyFallThrough = false;
	{
		$var($List, l, cases);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$var($JCTree$JCCase, c, $cast($JCTree$JCCase, l->head));
			{
				$var($Iterator, i$, $nc($nc(c)->labels)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree$JCCaseLabel, pat, $cast($JCTree$JCCaseLabel, i$->next()));
					{
						if ($nc(pat)->isExpression()) {
							$var($JCTree$JCExpression, expr, $cast($JCTree$JCExpression, pat));
							if ($TreeInfo::isNull(expr)) {
								if (wasPattern && !wasTypePattern && !wasNonEmptyFallThrough) {
									$init($CompilerProperties$Errors);
									$nc(this->log)->error($(pat->pos()), $CompilerProperties$Errors::FlowsThroughFromPattern);
								}
								wasNullPattern = true;
							} else {
								if (wasPattern && !wasNonEmptyFallThrough) {
									$init($CompilerProperties$Errors);
									$nc(this->log)->error($(pat->pos()), $CompilerProperties$Errors::FlowsThroughFromPattern);
								}
								wasConstant = true;
							}
						} else {
							$init($JCTree$Tag);
							if (pat->hasTag($JCTree$Tag::DEFAULTCASELABEL)) {
								if (wasPattern && !wasNonEmptyFallThrough) {
									$init($CompilerProperties$Errors);
									$nc(this->log)->error($(pat->pos()), $CompilerProperties$Errors::FlowsThroughFromPattern);
								}
								wasDefault = true;
							} else {
								bool isTypePattern = pat->hasTag($JCTree$Tag::BINDINGPATTERN);
								if (wasPattern || wasConstant || wasDefault || (wasNullPattern && (!isTypePattern || wasNonEmptyFallThrough))) {
									$init($CompilerProperties$Errors);
									$nc(this->log)->error($(pat->pos()), $CompilerProperties$Errors::FlowsThroughToPattern);
								}
								wasPattern = true;
								wasTypePattern = isTypePattern;
							}
						}
					}
				}
			}
			$init($CaseTree$CaseKind);
			bool completesNormally = c->caseKind == $CaseTree$CaseKind::STATEMENT ? c->completesNormally : false;
			if ($nc(c->stats)->nonEmpty()) {
				wasConstant = false;
				wasDefault = false;
				wasNullPattern &= completesNormally;
				wasPattern &= completesNormally;
				wasTypePattern &= completesNormally;
			}
			wasNonEmptyFallThrough = $nc(c->stats)->nonEmpty() && completesNormally;
		}
	}
}

void Check::lambda$checkModuleRequires$22($Directive$RequiresDirective* rd, $JCDiagnostic$DiagnosticPosition* pos) {
	bool var$0 = $nc(rd)->isTransitive();
	$init($Lint$LintCategory);
	if (var$0 && $nc(this->lint)->isEnabled($Lint$LintCategory::REQUIRES_TRANSITIVE_AUTOMATIC)) {
		$init($CompilerProperties$Warnings);
		$nc(this->log)->warning(pos, $CompilerProperties$Warnings::RequiresTransitiveAutomatic);
	} else {
		if ($nc(this->lint)->isEnabled($Lint$LintCategory::REQUIRES_AUTOMATIC)) {
			$init($CompilerProperties$Warnings);
			$nc(this->log)->warning(pos, $CompilerProperties$Warnings::RequiresAutomatic);
		}
	}
}

void Check::lambda$checkPackageExistsForOpens$21($JCDiagnostic$DiagnosticPosition* pos, $Symbol$PackageSymbol* packge) {
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::OPENS)) {
		$nc(this->log)->warning(pos, $($CompilerProperties$Warnings::PackageEmptyOrNotFound(packge)));
	}
}

void Check::lambda$checkModuleExists$20($JCDiagnostic$DiagnosticPosition* pos, $Symbol$ModuleSymbol* msym) {
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::MODULE)) {
		$nc(this->log)->warning($Lint$LintCategory::MODULE, pos, $($CompilerProperties$Warnings::ModuleNotFound(msym)));
	}
}

void Check::lambda$checkDefaultConstructor$19($JCDiagnostic$DiagnosticPosition* pos, $Symbol$ClassSymbol* c, $Symbol$PackageSymbol* pkg, $Symbol$ModuleSymbol* modle) {
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::MISSING_EXPLICIT_CTOR)) {
		$nc(this->log)->warning($Lint$LintCategory::MISSING_EXPLICIT_CTOR, pos, $($CompilerProperties$Warnings::MissingExplicitCtor(c, pkg, modle)));
	}
}

bool Check::lambda$checkUniqueImport$18($Symbol* sym, $Symbol* candidate) {
	$init(Check);
	return candidate != sym && !$nc($nc(candidate)->type)->isErroneous();
}

bool Check::lambda$checkImportsUnique$17($Symbol* sym) {
	$init(Check);
	$init($Kinds$Kind);
	return $nc(sym)->kind == $Kinds$Kind::TYP;
}

void Check::lambda$checkDivZero$16($JCDiagnostic$DiagnosticPosition* pos) {
	warnDivZero(pos);
}

void Check::lambda$checkPreview$15($JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
	warnDeclaredUsingPreview(pos, s);
}

void Check::lambda$checkPreview$14($JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
	warnPreviewAPI(pos, $($CompilerProperties$Warnings::IsPreviewReflective(s)));
}

void Check::lambda$checkPreview$13($JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
	warnPreviewAPI(pos, $($CompilerProperties$Warnings::IsPreview(s)));
}

void Check::lambda$checkSunAPI$12($JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
	$nc(this->log)->mandatoryWarning(pos, $($CompilerProperties$Warnings::SunProprietary(s)));
}

void Check::lambda$checkDeprecated$11($Supplier* pos, $Symbol* s) {
	warnDeprecated($cast($JCDiagnostic$DiagnosticPosition, $($nc(pos)->get())), s);
}

$JCDiagnostic$DiagnosticPosition* Check::lambda$checkDeprecated$10($JCDiagnostic$DiagnosticPosition* pos) {
	$init(Check);
	return pos;
}

bool Check::lambda$isTypeAnnotation$9(bool isTypeParameter, $Attribute* attr) {
	return isTypeAnnotation(attr, isTypeParameter);
}

bool Check::lambda$validateAnnotation$8($Attribute$Compound* anno) {
	$useLocalCurrentObjectStackCache();
	return $nc($($Arrays::stream($(getTargetNames($nc($nc(anno)->type)->tsym)))))->anyMatch(static_cast<$Predicate*>($$new(Check$$Lambda$lambda$validateAnnotation$7$23, this)));
}

bool Check::lambda$validateAnnotation$7($Name* name) {
	return name == $nc(this->names)->RECORD_COMPONENT;
}

bool Check::lambda$new$6($Symbol* s) {
	$init(Check);
	$init($Symbol$MethodSymbol);
	bool var$0 = $nc($Symbol$MethodSymbol::implementation_filter)->test(s);
	return var$0 && ((int64_t)($nc(s)->flags() & (uint64_t)(int64_t)0x0000200000000000)) == 0;
}

bool Check::lambda$checkOverride$5($JCTree$JCMethodDecl* tree, $Symbol$RecordComponent* rc) {
	$init(Check);
	return $nc(rc)->accessor == $nc(tree)->sym && ((int64_t)($nc(rc->accessor)->flags_field & (uint64_t)(int64_t)0x01000000)) == 0;
}

$JCDiagnostic$DiagnosticPosition* Check::lambda$checkOverride$4($Symbol$MethodSymbol* m, $JCTree* tree) {
	$init(Check);
	return $TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>(m), tree);
}

void Check::lambda$warnOnExplicitStrictfp$3($JCDiagnostic$DiagnosticPosition* pos) {
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::STRICTFP)) {
		$init($CompilerProperties$Warnings);
		$nc(this->log)->warning($Lint$LintCategory::STRICTFP, pos, $CompilerProperties$Warnings::Strictfp);
	}
}

void Check::lambda$checkMethod$2($Type* mtype, $Symbol* sym, $Env* env, $List* argtrees, $List* argtypes, bool useVarargs, $InferenceContext* solvedContext) {
	checkMethod($($nc(solvedContext)->asInstType(mtype)), sym, env, argtrees, argtypes, useVarargs, solvedContext);
}

void Check::lambda$checkRedundantCast$1($JCTree$JCTypeCast* tree) {
	$useLocalCurrentObjectStackCache();
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::CAST)) {
		$var($Lint$LintCategory, var$0, $Lint$LintCategory::CAST);
		$var($JCDiagnostic$DiagnosticPosition, var$1, $nc(tree)->pos());
		$nc(this->log)->warning(var$0, var$1, $($CompilerProperties$Warnings::RedundantCast($nc(tree->clazz)->type)));
	}
}

void Check::lambda$checkType$0($JCDiagnostic$DiagnosticPosition* pos, $Type* found, $Type* req, $Check$CheckContext* checkContext, $InferenceContext* solvedContext) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic$DiagnosticPosition, var$0, pos);
	$var($Type, var$1, $nc(solvedContext)->asInstType(found));
	checkType(var$0, var$1, $(solvedContext->asInstType(req)), checkContext);
}

void clinit$Check($Class* class$) {
	$assignStatic(Check::checkKey, $new($Context$Key));
	$assignStatic(Check::denotableChecker, $new($Check$2));
}

Check::Check() {
}

$Class* Check::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Check$$Lambda$lambda$new$6::classInfo$.name)) {
			return Check$$Lambda$lambda$new$6::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$checkType$0$1::classInfo$.name)) {
			return Check$$Lambda$lambda$checkType$0$1::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$checkRedundantCast$1$2::classInfo$.name)) {
			return Check$$Lambda$lambda$checkRedundantCast$1$2::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$checkMethod$2$3::classInfo$.name)) {
			return Check$$Lambda$lambda$checkMethod$2$3::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4::classInfo$.name)) {
			return Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$checkOverride$4$5::classInfo$.name)) {
			return Check$$Lambda$lambda$checkOverride$4$5::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$checkOverride$5$6::classInfo$.name)) {
			return Check$$Lambda$lambda$checkOverride$5$6::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$add$7::classInfo$.name)) {
			return Check$$Lambda$add$7::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$validateAnnotation$8$8::classInfo$.name)) {
			return Check$$Lambda$lambda$validateAnnotation$8$8::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$isTypeAnnotation$9$9::classInfo$.name)) {
			return Check$$Lambda$lambda$isTypeAnnotation$9$9::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$checkDeprecated$10$10::classInfo$.name)) {
			return Check$$Lambda$lambda$checkDeprecated$10$10::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$checkDeprecated$11$11::classInfo$.name)) {
			return Check$$Lambda$lambda$checkDeprecated$11$11::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$checkSunAPI$12$12::classInfo$.name)) {
			return Check$$Lambda$lambda$checkSunAPI$12$12::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$checkPreview$13$13::classInfo$.name)) {
			return Check$$Lambda$lambda$checkPreview$13$13::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$checkPreview$14$14::classInfo$.name)) {
			return Check$$Lambda$lambda$checkPreview$14$14::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$checkPreview$15$15::classInfo$.name)) {
			return Check$$Lambda$lambda$checkPreview$15$15::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$checkDivZero$16$16::classInfo$.name)) {
			return Check$$Lambda$lambda$checkDivZero$16$16::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$checkImportsUnique$17$17::classInfo$.name)) {
			return Check$$Lambda$lambda$checkImportsUnique$17$17::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$checkUniqueImport$18$18::classInfo$.name)) {
			return Check$$Lambda$lambda$checkUniqueImport$18$18::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$checkDefaultConstructor$19$19::classInfo$.name)) {
			return Check$$Lambda$lambda$checkDefaultConstructor$19$19::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$checkModuleExists$20$20::classInfo$.name)) {
			return Check$$Lambda$lambda$checkModuleExists$20$20::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$checkPackageExistsForOpens$21$21::classInfo$.name)) {
			return Check$$Lambda$lambda$checkPackageExistsForOpens$21$21::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$checkModuleRequires$22$22::classInfo$.name)) {
			return Check$$Lambda$lambda$checkModuleRequires$22$22::load$(name, initialize);
		}
		if (name->equals(Check$$Lambda$lambda$validateAnnotation$7$23::classInfo$.name)) {
			return Check$$Lambda$lambda$validateAnnotation$7$23::load$(name, initialize);
		}
	}
	$loadClass(Check, name, initialize, &_Check_ClassInfo_, clinit$Check, allocate$Check);
	return class$;
}

$Class* Check::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com