#include <com/sun/tools/javac/comp/Lower.h>

#include <com/sun/source/tree/CaseTree$CaseKind.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$RetentionPolicy.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$DynamicMethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodHandleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol$AccessCode.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$RecordComponent.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type$JCVoidType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/ConstFold.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Lower$1.h>
#include <com/sun/tools/javac/comp/Lower$1Patcher.h>
#include <com/sun/tools/javac/comp/Lower$2.h>
#include <com/sun/tools/javac/comp/Lower$AssignopDependencyScanner.h>
#include <com/sun/tools/javac/comp/Lower$ClassMap.h>
#include <com/sun/tools/javac/comp/Lower$EnumMapping.h>
#include <com/sun/tools/javac/comp/Lower$FreeVarCollector.h>
#include <com/sun/tools/javac/comp/Lower$LowerSignatureGenerator.h>
#include <com/sun/tools/javac/comp/Lower$TreeBuilder.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/comp/TypeEnvs.h>
#include <com/sun/tools/javac/jvm/ByteCodes.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/main/Option$PkgInfo.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssert.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssignOp.h>
#include <com/sun/tools/javac/tree/JCTree$JCBinary.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCBreak.h>
#include <com/sun/tools/javac/tree/JCTree$JCCase.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCCatch.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>
#include <com/sun/tools/javac/tree/JCTree$JCDefaultCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCDoWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpressionStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression$OperandPos.h>
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCParens.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/JCTree$JCSkip.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitch.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCThrow.h>
#include <com/sun/tools/javac/tree/JCTree$JCTry.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree$LetExpr.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/tree/TreeTranslator.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Convert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/WeakHashMap.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef ABSTRACT
#undef AND
#undef APPLY
#undef ASSIGN
#undef BITAND_ASG
#undef BITOR_ASG
#undef BITXOR_ASG
#undef BOT
#undef CLASS
#undef CLASSDEF
#undef COMPACT_RECORD_CONSTRUCTOR
#undef DEFAULTCASELABEL
#undef DEREF
#undef DIV_ASG
#undef FIRSTASGOP
#undef GENERATED_MEMBER
#undef IDENT
#undef INT
#undef INTERFACE
#undef LEFT
#undef LITERAL
#undef LT
#undef METHOD
#undef MINUS_ASG
#undef MODULE
#undef MOD_ASG
#undef MTH
#undef MUL_ASG
#undef NE
#undef NEWCLASS
#undef NONE
#undef NON_RECURSIVE
#undef NOT
#undef NO_TAG
#undef NULL_COMPLETER
#undef PARENS
#undef PCK
#undef PLUS_ASG
#undef POSTINC
#undef PREINC
#undef RULE
#undef SELECT
#undef SL_ASG
#undef SOURCE
#undef SR_ASG
#undef STATEMENT
#undef SWITCH
#undef SWITCH_EXPRESSION
#undef SYNTHETIC
#undef TYP
#undef TYPE
#undef TYPECAST
#undef UNINITIALIZED_FIELD
#undef USR_ASG
#undef VAL_MTH
#undef VAR
#undef VARDEF

using $Symbol$MethodHandleSymbolArray = $Array<::com::sun::tools::javac::code::Symbol$MethodHandleSymbol>;
using $Symbol$MethodSymbolArray = $Array<::com::sun::tools::javac::code::Symbol$MethodSymbol>;
using $TypeArray = $Array<::com::sun::tools::javac::code::Type>;
using $PoolConstant$LoadableConstantArray = $Array<::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant>;
using $JCTree$JCExpressionArray = $Array<::com::sun::tools::javac::tree::JCTree$JCExpression>;
using $CaseTree$CaseKind = ::com::sun::source::tree::CaseTree$CaseKind;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$RetentionPolicy = ::com::sun::tools::javac::code::Attribute$RetentionPolicy;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$DynamicMethodSymbol = ::com::sun::tools::javac::code::Symbol$DynamicMethodSymbol;
using $Symbol$MethodHandleSymbol = ::com::sun::tools::javac::code::Symbol$MethodHandleSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symbol$OperatorSymbol$AccessCode = ::com::sun::tools::javac::code::Symbol$OperatorSymbol$AccessCode;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$RecordComponent = ::com::sun::tools::javac::code::Symbol$RecordComponent;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $Type$JCVoidType = ::com::sun::tools::javac::code::Type$JCVoidType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$SignatureGenerator = ::com::sun::tools::javac::code::Types$SignatureGenerator;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Check = ::com::sun::tools::javac::comp::Check;
using $ConstFold = ::com::sun::tools::javac::comp::ConstFold;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Lower$1 = ::com::sun::tools::javac::comp::Lower$1;
using $Lower$1Patcher = ::com::sun::tools::javac::comp::Lower$1Patcher;
using $Lower$2 = ::com::sun::tools::javac::comp::Lower$2;
using $Lower$AssignopDependencyScanner = ::com::sun::tools::javac::comp::Lower$AssignopDependencyScanner;
using $Lower$ClassMap = ::com::sun::tools::javac::comp::Lower$ClassMap;
using $Lower$EnumMapping = ::com::sun::tools::javac::comp::Lower$EnumMapping;
using $Lower$FreeVarCollector = ::com::sun::tools::javac::comp::Lower$FreeVarCollector;
using $Lower$LowerSignatureGenerator = ::com::sun::tools::javac::comp::Lower$LowerSignatureGenerator;
using $Lower$TreeBuilder = ::com::sun::tools::javac::comp::Lower$TreeBuilder;
using $Operators = ::com::sun::tools::javac::comp::Operators;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $TypeEnvs = ::com::sun::tools::javac::comp::TypeEnvs;
using $ByteCodes = ::com::sun::tools::javac::jvm::ByteCodes;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $Option$PkgInfo = ::com::sun::tools::javac::main::Option$PkgInfo;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$JCArrayAccess = ::com::sun::tools::javac::tree::JCTree$JCArrayAccess;
using $JCTree$JCAssert = ::com::sun::tools::javac::tree::JCTree$JCAssert;
using $JCTree$JCAssign = ::com::sun::tools::javac::tree::JCTree$JCAssign;
using $JCTree$JCAssignOp = ::com::sun::tools::javac::tree::JCTree$JCAssignOp;
using $JCTree$JCBinary = ::com::sun::tools::javac::tree::JCTree$JCBinary;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCBreak = ::com::sun::tools::javac::tree::JCTree$JCBreak;
using $JCTree$JCCase = ::com::sun::tools::javac::tree::JCTree$JCCase;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCCatch = ::com::sun::tools::javac::tree::JCTree$JCCatch;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCDefaultCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCDefaultCaseLabel;
using $JCTree$JCDoWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop;
using $JCTree$JCEnhancedForLoop = ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCExpressionStatement = ::com::sun::tools::javac::tree::JCTree$JCExpressionStatement;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCForLoop = ::com::sun::tools::javac::tree::JCTree$JCForLoop;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCIf = ::com::sun::tools::javac::tree::JCTree$JCIf;
using $JCTree$JCLiteral = ::com::sun::tools::javac::tree::JCTree$JCLiteral;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $JCTree$JCOperatorExpression$OperandPos = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression$OperandPos;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
using $JCTree$JCParens = ::com::sun::tools::javac::tree::JCTree$JCParens;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $JCTree$JCSkip = ::com::sun::tools::javac::tree::JCTree$JCSkip;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCSwitch = ::com::sun::tools::javac::tree::JCTree$JCSwitch;
using $JCTree$JCSwitchExpression = ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression;
using $JCTree$JCThrow = ::com::sun::tools::javac::tree::JCTree$JCThrow;
using $JCTree$JCTry = ::com::sun::tools::javac::tree::JCTree$JCTry;
using $JCTree$JCTypeCast = ::com::sun::tools::javac::tree::JCTree$JCTypeCast;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$JCWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCWhileLoop;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $JCTree$LetExpr = ::com::sun::tools::javac::tree::JCTree$LetExpr;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $TreeTranslator = ::com::sun::tools::javac::tree::TreeTranslator;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Convert = ::com::sun::tools::javac::util::Convert;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Options = ::com::sun::tools::javac::util::Options;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $WeakHashMap = ::java::util::WeakHashMap;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Lower$$Lambda$lambda$binaryAccessOperator$0 : public $Predicate {
	$class(Lower$$Lambda$lambda$binaryAccessOperator$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($JCTree$Tag* tag, int32_t acode) {
		$set(this, tag, tag);
		this->acode = acode;
	}
	virtual bool test(Object$* op) override {
		 return Lower::lambda$binaryAccessOperator$0(tag, acode, $cast($Symbol$OperatorSymbol, op));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Lower$$Lambda$lambda$binaryAccessOperator$0>());
	}
	$JCTree$Tag* tag = nullptr;
	int32_t acode = 0;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Lower$$Lambda$lambda$binaryAccessOperator$0::fieldInfos[3] = {
	{"tag", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$binaryAccessOperator$0, tag)},
	{"acode", "I", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$binaryAccessOperator$0, acode)},
	{}
};
$MethodInfo Lower$$Lambda$lambda$binaryAccessOperator$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$Tag;I)V", nullptr, $PUBLIC, $method(static_cast<void(Lower$$Lambda$lambda$binaryAccessOperator$0::*)($JCTree$Tag*,int32_t)>(&Lower$$Lambda$lambda$binaryAccessOperator$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Lower$$Lambda$lambda$binaryAccessOperator$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Lower$$Lambda$lambda$binaryAccessOperator$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Lower$$Lambda$lambda$binaryAccessOperator$0::load$($String* name, bool initialize) {
	$loadClass(Lower$$Lambda$lambda$binaryAccessOperator$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Lower$$Lambda$lambda$binaryAccessOperator$0::class$ = nullptr;

class Lower$$Lambda$lambda$abstractLval$1$1 : public $Lower$TreeBuilder {
	$class(Lower$$Lambda$lambda$abstractLval$1$1, $NO_CLASS_INIT, $Lower$TreeBuilder)
public:
	void init$(Lower* inst, $Lower$TreeBuilder* builder, $JCTree$JCFieldAccess* s) {
		$set(this, inst$, inst);
		$set(this, builder, builder);
		$set(this, s, s);
	}
	virtual $JCTree$JCExpression* build($JCTree$JCExpression* selected) override {
		 return $nc(inst$)->lambda$abstractLval$1(builder, s, selected);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Lower$$Lambda$lambda$abstractLval$1$1>());
	}
	Lower* inst$ = nullptr;
	$Lower$TreeBuilder* builder = nullptr;
	$JCTree$JCFieldAccess* s = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Lower$$Lambda$lambda$abstractLval$1$1::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$abstractLval$1$1, inst$)},
	{"builder", "Lcom/sun/tools/javac/comp/Lower$TreeBuilder;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$abstractLval$1$1, builder)},
	{"s", "Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$abstractLval$1$1, s)},
	{}
};
$MethodInfo Lower$$Lambda$lambda$abstractLval$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Lower;Lcom/sun/tools/javac/comp/Lower$TreeBuilder;Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC, $method(static_cast<void(Lower$$Lambda$lambda$abstractLval$1$1::*)(Lower*,$Lower$TreeBuilder*,$JCTree$JCFieldAccess*)>(&Lower$$Lambda$lambda$abstractLval$1$1::init$))},
	{"build", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Lower$$Lambda$lambda$abstractLval$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Lower$$Lambda$lambda$abstractLval$1$1",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Lower$TreeBuilder",
	fieldInfos,
	methodInfos
};
$Class* Lower$$Lambda$lambda$abstractLval$1$1::load$($String* name, bool initialize) {
	$loadClass(Lower$$Lambda$lambda$abstractLval$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Lower$$Lambda$lambda$abstractLval$1$1::class$ = nullptr;

class Lower$$Lambda$lambda$abstractLval$3$2 : public $Lower$TreeBuilder {
	$class(Lower$$Lambda$lambda$abstractLval$3$2, $NO_CLASS_INIT, $Lower$TreeBuilder)
public:
	void init$(Lower* inst, $JCTree$JCArrayAccess* i, $Lower$TreeBuilder* builder) {
		$set(this, inst$, inst);
		$set(this, i, i);
		$set(this, builder, builder);
	}
	virtual $JCTree$JCExpression* build($JCTree$JCExpression* indexed) override {
		 return $nc(inst$)->lambda$abstractLval$3(i, builder, indexed);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Lower$$Lambda$lambda$abstractLval$3$2>());
	}
	Lower* inst$ = nullptr;
	$JCTree$JCArrayAccess* i = nullptr;
	$Lower$TreeBuilder* builder = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Lower$$Lambda$lambda$abstractLval$3$2::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$abstractLval$3$2, inst$)},
	{"i", "Lcom/sun/tools/javac/tree/JCTree$JCArrayAccess;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$abstractLval$3$2, i)},
	{"builder", "Lcom/sun/tools/javac/comp/Lower$TreeBuilder;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$abstractLval$3$2, builder)},
	{}
};
$MethodInfo Lower$$Lambda$lambda$abstractLval$3$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Lower;Lcom/sun/tools/javac/tree/JCTree$JCArrayAccess;Lcom/sun/tools/javac/comp/Lower$TreeBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(Lower$$Lambda$lambda$abstractLval$3$2::*)(Lower*,$JCTree$JCArrayAccess*,$Lower$TreeBuilder*)>(&Lower$$Lambda$lambda$abstractLval$3$2::init$))},
	{"build", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Lower$$Lambda$lambda$abstractLval$3$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Lower$$Lambda$lambda$abstractLval$3$2",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Lower$TreeBuilder",
	fieldInfos,
	methodInfos
};
$Class* Lower$$Lambda$lambda$abstractLval$3$2::load$($String* name, bool initialize) {
	$loadClass(Lower$$Lambda$lambda$abstractLval$3$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Lower$$Lambda$lambda$abstractLval$3$2::class$ = nullptr;

class Lower$$Lambda$lambda$generateMandatedAccessors$4$3 : public $Predicate {
	$class(Lower$$Lambda$lambda$generateMandatedAccessors$4$3, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* rc) override {
		 return Lower::lambda$generateMandatedAccessors$4($cast($Symbol$RecordComponent, rc));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Lower$$Lambda$lambda$generateMandatedAccessors$4$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Lower$$Lambda$lambda$generateMandatedAccessors$4$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Lower$$Lambda$lambda$generateMandatedAccessors$4$3::*)()>(&Lower$$Lambda$lambda$generateMandatedAccessors$4$3::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Lower$$Lambda$lambda$generateMandatedAccessors$4$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Lower$$Lambda$lambda$generateMandatedAccessors$4$3",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Lower$$Lambda$lambda$generateMandatedAccessors$4$3::load$($String* name, bool initialize) {
	$loadClass(Lower$$Lambda$lambda$generateMandatedAccessors$4$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Lower$$Lambda$lambda$generateMandatedAccessors$4$3::class$ = nullptr;

class Lower$$Lambda$lambda$generateMandatedAccessors$6$4 : public $Function {
	$class(Lower$$Lambda$lambda$generateMandatedAccessors$6$4, $NO_CLASS_INIT, $Function)
public:
	void init$(Lower* inst, $List* fields, $JCTree$JCClassDecl* tree) {
		$set(this, inst$, inst);
		$set(this, fields, fields);
		$set(this, tree, tree);
	}
	virtual $Object* apply(Object$* rc) override {
		 return $of($nc(inst$)->lambda$generateMandatedAccessors$6(fields, tree, $cast($Symbol$RecordComponent, rc)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Lower$$Lambda$lambda$generateMandatedAccessors$6$4>());
	}
	Lower* inst$ = nullptr;
	$List* fields = nullptr;
	$JCTree$JCClassDecl* tree = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Lower$$Lambda$lambda$generateMandatedAccessors$6$4::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$generateMandatedAccessors$6$4, inst$)},
	{"fields", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$generateMandatedAccessors$6$4, fields)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$generateMandatedAccessors$6$4, tree)},
	{}
};
$MethodInfo Lower$$Lambda$lambda$generateMandatedAccessors$6$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Lower;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC, $method(static_cast<void(Lower$$Lambda$lambda$generateMandatedAccessors$6$4::*)(Lower*,$List*,$JCTree$JCClassDecl*)>(&Lower$$Lambda$lambda$generateMandatedAccessors$6$4::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Lower$$Lambda$lambda$generateMandatedAccessors$6$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Lower$$Lambda$lambda$generateMandatedAccessors$6$4",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Lower$$Lambda$lambda$generateMandatedAccessors$6$4::load$($String* name, bool initialize) {
	$loadClass(Lower$$Lambda$lambda$generateMandatedAccessors$6$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Lower$$Lambda$lambda$generateMandatedAccessors$6$4::class$ = nullptr;

class Lower$$Lambda$lambda$recordVars$7$5 : public $Predicate {
	$class(Lower$$Lambda$lambda$recordVars$7$5, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* s) override {
		 return Lower::lambda$recordVars$7($cast($Symbol, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Lower$$Lambda$lambda$recordVars$7$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Lower$$Lambda$lambda$recordVars$7$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Lower$$Lambda$lambda$recordVars$7$5::*)()>(&Lower$$Lambda$lambda$recordVars$7$5::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Lower$$Lambda$lambda$recordVars$7$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Lower$$Lambda$lambda$recordVars$7$5",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Lower$$Lambda$lambda$recordVars$7$5::load$($String* name, bool initialize) {
	$loadClass(Lower$$Lambda$lambda$recordVars$7$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Lower$$Lambda$lambda$recordVars$7$5::class$ = nullptr;

class Lower$$Lambda$lambda$generateRecordMethod$8$6 : public $Function {
	$class(Lower$$Lambda$lambda$generateRecordMethod$8$6, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* v) override {
		 return $of(Lower::lambda$generateRecordMethod$8($cast($Symbol$VarSymbol, v)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Lower$$Lambda$lambda$generateRecordMethod$8$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Lower$$Lambda$lambda$generateRecordMethod$8$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Lower$$Lambda$lambda$generateRecordMethod$8$6::*)()>(&Lower$$Lambda$lambda$generateRecordMethod$8$6::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Lower$$Lambda$lambda$generateRecordMethod$8$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Lower$$Lambda$lambda$generateRecordMethod$8$6",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Lower$$Lambda$lambda$generateRecordMethod$8$6::load$($String* name, bool initialize) {
	$loadClass(Lower$$Lambda$lambda$generateRecordMethod$8$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Lower$$Lambda$lambda$generateRecordMethod$8$6::class$ = nullptr;

class Lower$$Lambda$lambda$visitMethodDefInternal$9$7 : public $Predicate {
	$class(Lower$$Lambda$lambda$visitMethodDefInternal$9$7, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Symbol$VarSymbol* field) {
		$set(this, field, field);
	}
	virtual bool test(Object$* p) override {
		 return Lower::lambda$visitMethodDefInternal$9(field, $cast($JCTree$JCVariableDecl, p));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Lower$$Lambda$lambda$visitMethodDefInternal$9$7>());
	}
	$Symbol$VarSymbol* field = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Lower$$Lambda$lambda$visitMethodDefInternal$9$7::fieldInfos[2] = {
	{"field", "Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$visitMethodDefInternal$9$7, field)},
	{}
};
$MethodInfo Lower$$Lambda$lambda$visitMethodDefInternal$9$7::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Lower$$Lambda$lambda$visitMethodDefInternal$9$7::*)($Symbol$VarSymbol*)>(&Lower$$Lambda$lambda$visitMethodDefInternal$9$7::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Lower$$Lambda$lambda$visitMethodDefInternal$9$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Lower$$Lambda$lambda$visitMethodDefInternal$9$7",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Lower$$Lambda$lambda$visitMethodDefInternal$9$7::load$($String* name, bool initialize) {
	$loadClass(Lower$$Lambda$lambda$visitMethodDefInternal$9$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Lower$$Lambda$lambda$visitMethodDefInternal$9$7::class$ = nullptr;

class Lower$$Lambda$lambda$visitAssignop$10$8 : public $Lower$TreeBuilder {
	$class(Lower$$Lambda$lambda$visitAssignop$10$8, $NO_CLASS_INIT, $Lower$TreeBuilder)
public:
	void init$(Lower* inst, $JCTree$JCAssignOp* tree, bool boxingReq) {
		$set(this, inst$, inst);
		$set(this, tree, tree);
		this->boxingReq = boxingReq;
	}
	virtual $JCTree$JCExpression* build($JCTree$JCExpression* lhs) override {
		 return $nc(inst$)->lambda$visitAssignop$10(tree, boxingReq, lhs);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Lower$$Lambda$lambda$visitAssignop$10$8>());
	}
	Lower* inst$ = nullptr;
	$JCTree$JCAssignOp* tree = nullptr;
	bool boxingReq = false;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Lower$$Lambda$lambda$visitAssignop$10$8::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$visitAssignop$10$8, inst$)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$visitAssignop$10$8, tree)},
	{"boxingReq", "Z", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$visitAssignop$10$8, boxingReq)},
	{}
};
$MethodInfo Lower$$Lambda$lambda$visitAssignop$10$8::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Lower;Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Lower$$Lambda$lambda$visitAssignop$10$8::*)(Lower*,$JCTree$JCAssignOp*,bool)>(&Lower$$Lambda$lambda$visitAssignop$10$8::init$))},
	{"build", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Lower$$Lambda$lambda$visitAssignop$10$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Lower$$Lambda$lambda$visitAssignop$10$8",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Lower$TreeBuilder",
	fieldInfos,
	methodInfos
};
$Class* Lower$$Lambda$lambda$visitAssignop$10$8::load$($String* name, bool initialize) {
	$loadClass(Lower$$Lambda$lambda$visitAssignop$10$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Lower$$Lambda$lambda$visitAssignop$10$8::class$ = nullptr;

class Lower$$Lambda$lambda$lowerBoxedPostop$12$9 : public $Lower$TreeBuilder {
	$class(Lower$$Lambda$lambda$lowerBoxedPostop$12$9, $NO_CLASS_INIT, $Lower$TreeBuilder)
public:
	void init$(Lower* inst, $JCTree$JCUnary* tree, bool cast) {
		$set(this, inst$, inst);
		$set(this, tree, tree);
		this->cast = cast;
	}
	virtual $JCTree$JCExpression* build($JCTree$JCExpression* tmp1) override {
		 return $nc(inst$)->lambda$lowerBoxedPostop$12(tree, cast, tmp1);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Lower$$Lambda$lambda$lowerBoxedPostop$12$9>());
	}
	Lower* inst$ = nullptr;
	$JCTree$JCUnary* tree = nullptr;
	bool cast = false;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Lower$$Lambda$lambda$lowerBoxedPostop$12$9::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$lowerBoxedPostop$12$9, inst$)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCUnary;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$lowerBoxedPostop$12$9, tree)},
	{"cast", "Z", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$lowerBoxedPostop$12$9, cast)},
	{}
};
$MethodInfo Lower$$Lambda$lambda$lowerBoxedPostop$12$9::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Lower;Lcom/sun/tools/javac/tree/JCTree$JCUnary;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Lower$$Lambda$lambda$lowerBoxedPostop$12$9::*)(Lower*,$JCTree$JCUnary*,bool)>(&Lower$$Lambda$lambda$lowerBoxedPostop$12$9::init$))},
	{"build", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Lower$$Lambda$lambda$lowerBoxedPostop$12$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Lower$$Lambda$lambda$lowerBoxedPostop$12$9",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Lower$TreeBuilder",
	fieldInfos,
	methodInfos
};
$Class* Lower$$Lambda$lambda$lowerBoxedPostop$12$9::load$($String* name, bool initialize) {
	$loadClass(Lower$$Lambda$lambda$lowerBoxedPostop$12$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Lower$$Lambda$lambda$lowerBoxedPostop$12$9::class$ = nullptr;

class Lower$$Lambda$lambda$addDefaultIfNeeded$13$10 : public $Function {
	$class(Lower$$Lambda$lambda$addDefaultIfNeeded$13$10, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* c) override {
		 return $of(Lower::lambda$addDefaultIfNeeded$13($cast($JCTree$JCCase, c)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Lower$$Lambda$lambda$addDefaultIfNeeded$13$10>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Lower$$Lambda$lambda$addDefaultIfNeeded$13$10::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Lower$$Lambda$lambda$addDefaultIfNeeded$13$10::*)()>(&Lower$$Lambda$lambda$addDefaultIfNeeded$13$10::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Lower$$Lambda$lambda$addDefaultIfNeeded$13$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Lower$$Lambda$lambda$addDefaultIfNeeded$13$10",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Lower$$Lambda$lambda$addDefaultIfNeeded$13$10::load$($String* name, bool initialize) {
	$loadClass(Lower$$Lambda$lambda$addDefaultIfNeeded$13$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Lower$$Lambda$lambda$addDefaultIfNeeded$13$10::class$ = nullptr;

class Lower$$Lambda$lambda$addDefaultIfNeeded$14$11 : public $Predicate {
	$class(Lower$$Lambda$lambda$addDefaultIfNeeded$14$11, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* p) override {
		 return Lower::lambda$addDefaultIfNeeded$14($cast($JCTree$JCCaseLabel, p));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Lower$$Lambda$lambda$addDefaultIfNeeded$14$11>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Lower$$Lambda$lambda$addDefaultIfNeeded$14$11::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Lower$$Lambda$lambda$addDefaultIfNeeded$14$11::*)()>(&Lower$$Lambda$lambda$addDefaultIfNeeded$14$11::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Lower$$Lambda$lambda$addDefaultIfNeeded$14$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Lower$$Lambda$lambda$addDefaultIfNeeded$14$11",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Lower$$Lambda$lambda$addDefaultIfNeeded$14$11::load$($String* name, bool initialize) {
	$loadClass(Lower$$Lambda$lambda$addDefaultIfNeeded$14$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Lower$$Lambda$lambda$addDefaultIfNeeded$14$11::class$ = nullptr;

class Lower$$Lambda$lambda$visitEnumSwitch$15$12 : public $Predicate {
	$class(Lower$$Lambda$lambda$visitEnumSwitch$15$12, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* c) override {
		 return Lower::lambda$visitEnumSwitch$15($cast($JCTree$JCCase, c));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Lower$$Lambda$lambda$visitEnumSwitch$15$12>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Lower$$Lambda$lambda$visitEnumSwitch$15$12::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Lower$$Lambda$lambda$visitEnumSwitch$15$12::*)()>(&Lower$$Lambda$lambda$visitEnumSwitch$15$12::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Lower$$Lambda$lambda$visitEnumSwitch$15$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Lower$$Lambda$lambda$visitEnumSwitch$15$12",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Lower$$Lambda$lambda$visitEnumSwitch$15$12::load$($String* name, bool initialize) {
	$loadClass(Lower$$Lambda$lambda$visitEnumSwitch$15$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Lower$$Lambda$lambda$visitEnumSwitch$15$12::class$ = nullptr;

class Lower$$Lambda$lambda$lowerBoxedPostop$11$13 : public $Lower$TreeBuilder {
	$class(Lower$$Lambda$lambda$lowerBoxedPostop$11$13, $NO_CLASS_INIT, $Lower$TreeBuilder)
public:
	void init$(Lower* inst, $JCTree$JCUnary* tree, $JCTree$JCExpression* tmp1, bool cast) {
		$set(this, inst$, inst);
		$set(this, tree, tree);
		$set(this, tmp1, tmp1);
		this->cast = cast;
	}
	virtual $JCTree$JCExpression* build($JCTree$JCExpression* tmp2) override {
		 return $nc(inst$)->lambda$lowerBoxedPostop$11(tree, tmp1, cast, tmp2);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Lower$$Lambda$lambda$lowerBoxedPostop$11$13>());
	}
	Lower* inst$ = nullptr;
	$JCTree$JCUnary* tree = nullptr;
	$JCTree$JCExpression* tmp1 = nullptr;
	bool cast = false;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Lower$$Lambda$lambda$lowerBoxedPostop$11$13::fieldInfos[5] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$lowerBoxedPostop$11$13, inst$)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCUnary;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$lowerBoxedPostop$11$13, tree)},
	{"tmp1", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$lowerBoxedPostop$11$13, tmp1)},
	{"cast", "Z", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$lowerBoxedPostop$11$13, cast)},
	{}
};
$MethodInfo Lower$$Lambda$lambda$lowerBoxedPostop$11$13::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Lower;Lcom/sun/tools/javac/tree/JCTree$JCUnary;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Lower$$Lambda$lambda$lowerBoxedPostop$11$13::*)(Lower*,$JCTree$JCUnary*,$JCTree$JCExpression*,bool)>(&Lower$$Lambda$lambda$lowerBoxedPostop$11$13::init$))},
	{"build", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Lower$$Lambda$lambda$lowerBoxedPostop$11$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Lower$$Lambda$lambda$lowerBoxedPostop$11$13",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Lower$TreeBuilder",
	fieldInfos,
	methodInfos
};
$Class* Lower$$Lambda$lambda$lowerBoxedPostop$11$13::load$($String* name, bool initialize) {
	$loadClass(Lower$$Lambda$lambda$lowerBoxedPostop$11$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Lower$$Lambda$lambda$lowerBoxedPostop$11$13::class$ = nullptr;

class Lower$$Lambda$lambda$generateMandatedAccessors$5$14 : public $Predicate {
	$class(Lower$$Lambda$lambda$generateMandatedAccessors$5$14, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Symbol$RecordComponent* rc) {
		$set(this, rc, rc);
	}
	virtual bool test(Object$* f) override {
		 return Lower::lambda$generateMandatedAccessors$5(rc, $cast($JCTree$JCVariableDecl, f));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Lower$$Lambda$lambda$generateMandatedAccessors$5$14>());
	}
	$Symbol$RecordComponent* rc = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Lower$$Lambda$lambda$generateMandatedAccessors$5$14::fieldInfos[2] = {
	{"rc", "Lcom/sun/tools/javac/code/Symbol$RecordComponent;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$generateMandatedAccessors$5$14, rc)},
	{}
};
$MethodInfo Lower$$Lambda$lambda$generateMandatedAccessors$5$14::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$RecordComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(Lower$$Lambda$lambda$generateMandatedAccessors$5$14::*)($Symbol$RecordComponent*)>(&Lower$$Lambda$lambda$generateMandatedAccessors$5$14::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Lower$$Lambda$lambda$generateMandatedAccessors$5$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Lower$$Lambda$lambda$generateMandatedAccessors$5$14",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Lower$$Lambda$lambda$generateMandatedAccessors$5$14::load$($String* name, bool initialize) {
	$loadClass(Lower$$Lambda$lambda$generateMandatedAccessors$5$14, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Lower$$Lambda$lambda$generateMandatedAccessors$5$14::class$ = nullptr;

class Lower$$Lambda$lambda$abstractLval$2$15 : public $Lower$TreeBuilder {
	$class(Lower$$Lambda$lambda$abstractLval$2$15, $NO_CLASS_INIT, $Lower$TreeBuilder)
public:
	void init$(Lower* inst, $JCTree$JCExpression* indexed, $JCTree$JCArrayAccess* i, $Lower$TreeBuilder* builder) {
		$set(this, inst$, inst);
		$set(this, indexed, indexed);
		$set(this, i, i);
		$set(this, builder, builder);
	}
	virtual $JCTree$JCExpression* build($JCTree$JCExpression* index) override {
		 return $nc(inst$)->lambda$abstractLval$2(indexed, i, builder, index);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Lower$$Lambda$lambda$abstractLval$2$15>());
	}
	Lower* inst$ = nullptr;
	$JCTree$JCExpression* indexed = nullptr;
	$JCTree$JCArrayAccess* i = nullptr;
	$Lower$TreeBuilder* builder = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Lower$$Lambda$lambda$abstractLval$2$15::fieldInfos[5] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$abstractLval$2$15, inst$)},
	{"indexed", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$abstractLval$2$15, indexed)},
	{"i", "Lcom/sun/tools/javac/tree/JCTree$JCArrayAccess;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$abstractLval$2$15, i)},
	{"builder", "Lcom/sun/tools/javac/comp/Lower$TreeBuilder;", nullptr, $PUBLIC, $field(Lower$$Lambda$lambda$abstractLval$2$15, builder)},
	{}
};
$MethodInfo Lower$$Lambda$lambda$abstractLval$2$15::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Lower;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCArrayAccess;Lcom/sun/tools/javac/comp/Lower$TreeBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(Lower$$Lambda$lambda$abstractLval$2$15::*)(Lower*,$JCTree$JCExpression*,$JCTree$JCArrayAccess*,$Lower$TreeBuilder*)>(&Lower$$Lambda$lambda$abstractLval$2$15::init$))},
	{"build", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Lower$$Lambda$lambda$abstractLval$2$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Lower$$Lambda$lambda$abstractLval$2$15",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Lower$TreeBuilder",
	fieldInfos,
	methodInfos
};
$Class* Lower$$Lambda$lambda$abstractLval$2$15::load$($String* name, bool initialize) {
	$loadClass(Lower$$Lambda$lambda$abstractLval$2$15, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Lower$$Lambda$lambda$abstractLval$2$15::class$ = nullptr;

$FieldInfo _Lower_FieldInfo_[] = {
	{"lowerKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/Lower;>;", $PROTECTED | $STATIC | $FINAL, $staticField(Lower, lowerKey)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(Lower, names)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(Lower, log)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE | $FINAL, $field(Lower, syms)},
	{"rs", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $PRIVATE | $FINAL, $field(Lower, rs)},
	{"operators", "Lcom/sun/tools/javac/comp/Operators;", nullptr, $PRIVATE | $FINAL, $field(Lower, operators)},
	{"chk", "Lcom/sun/tools/javac/comp/Check;", nullptr, $PRIVATE | $FINAL, $field(Lower, chk)},
	{"attr", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $PRIVATE | $FINAL, $field(Lower, attr)},
	{"make", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $PRIVATE, $field(Lower, make)},
	{"make_pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PRIVATE, $field(Lower, make_pos)},
	{"cfolder", "Lcom/sun/tools/javac/comp/ConstFold;", nullptr, $PRIVATE | $FINAL, $field(Lower, cfolder)},
	{"target", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PRIVATE | $FINAL, $field(Lower, target)},
	{"typeEnvs", "Lcom/sun/tools/javac/comp/TypeEnvs;", nullptr, $PRIVATE | $FINAL, $field(Lower, typeEnvs)},
	{"dollarAssertionsDisabled", "Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE | $FINAL, $field(Lower, dollarAssertionsDisabled)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE | $FINAL, $field(Lower, types)},
	{"debugLower", "Z", nullptr, $PRIVATE | $FINAL, $field(Lower, debugLower)},
	{"disableProtectedAccessors", "Z", nullptr, $PRIVATE | $FINAL, $field(Lower, disableProtectedAccessors)},
	{"pkginfoOpt", "Lcom/sun/tools/javac/main/Option$PkgInfo;", nullptr, $PRIVATE | $FINAL, $field(Lower, pkginfoOpt)},
	{"currentClass", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, 0, $field(Lower, currentClass)},
	{"translated", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/tree/JCTree;>;", 0, $field(Lower, translated)},
	{"attrEnv", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0, $field(Lower, attrEnv)},
	{"endPosTable", "Lcom/sun/tools/javac/tree/EndPosTable;", nullptr, 0, $field(Lower, endPosTable)},
	{"classdefs", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;>;", 0, $field(Lower, classdefs)},
	{"prunedTree", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;>;", $PUBLIC, $field(Lower, prunedTree)},
	{"actualSymbols", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;>;", 0, $field(Lower, actualSymbols)},
	{"currentMethodDef", "Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", nullptr, 0, $field(Lower, currentMethodDef)},
	{"currentMethodSym", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, 0, $field(Lower, currentMethodSym)},
	{"outermostClassDef", "Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, 0, $field(Lower, outermostClassDef)},
	{"outermostMemberDef", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0, $field(Lower, outermostMemberDef)},
	{"lambdaTranslationMap", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;>;", 0, $field(Lower, lambdaTranslationMap)},
	{"classMap", "Lcom/sun/tools/javac/comp/Lower$ClassMap;", nullptr, 0, $field(Lower, classMap)},
	{"freevarCache", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$VarSymbol;>;>;", 0, $field(Lower, freevarCache)},
	{"enumSwitchMap", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/comp/Lower$EnumMapping;>;", 0, $field(Lower, enumSwitchMap)},
	{"conflictsChecker", "Lcom/sun/tools/javac/tree/JCTree$Visitor;", nullptr, 0, $field(Lower, conflictsChecker)},
	{"accessNums", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Integer;>;", $PRIVATE, $field(Lower, accessNums)},
	{"accessSyms", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;[Lcom/sun/tools/javac/code/Symbol$MethodSymbol;>;", $PRIVATE, $field(Lower, accessSyms)},
	{"accessConstrs", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;>;", $PRIVATE, $field(Lower, accessConstrs)},
	{"accessConstrTags", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;", $PRIVATE, $field(Lower, accessConstrTags)},
	{"accessed", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE, $field(Lower, accessed)},
	{"proxies", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;>;", 0, $field(Lower, proxies)},
	{"twrVars", "Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, 0, $field(Lower, twrVars)},
	{"outerThisStack", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$VarSymbol;>;", 0, $field(Lower, outerThisStack)},
	{"assertionsDisabledClassCache", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PRIVATE, $field(Lower, assertionsDisabledClassCache)},
	{"enclOp", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE, $field(Lower, enclOp)},
	{"systemArraycopyMethod", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PRIVATE, $field(Lower, systemArraycopyMethod)},
	{}
};

$MethodInfo _Lower_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(Lower::*)($Context*)>(&Lower::init$))},
	{"abstractLval", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Lower$TreeBuilder;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"abstractRval", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Lower$TreeBuilder;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"abstractRval", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Lower$TreeBuilder;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"access", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Z)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"access", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"accessBase", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"accessClass", "(Lcom/sun/tools/javac/code/Symbol;ZLcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, 0},
	{"accessCode", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($JCTree*,$JCTree*)>(&Lower::accessCode))},
	{"accessConstructor", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", nullptr, 0},
	{"accessConstructorDef", "(ILcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0},
	{"accessConstructorTag", "()Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, 0},
	{"accessDef", "(ILcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;I)Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0},
	{"accessName", "(II)Lcom/sun/tools/javac/util/Name;", nullptr, 0},
	{"accessSymbol", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;ZZ)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, 0},
	{"addDefaultIfNeeded", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;", $PRIVATE, $method(static_cast<$List*(Lower::*)($List*)>(&Lower::addDefaultIfNeeded))},
	{"addPrunedInfo", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PRIVATE, $method(static_cast<void(Lower::*)($JCTree*)>(&Lower::addPrunedInfo))},
	{"argsTypeSig", "(Lcom/sun/tools/javac/util/List;)Ljava/lang/String;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Ljava/lang/String;", $PRIVATE, $method(static_cast<$String*(Lower::*)($List*)>(&Lower::argsTypeSig))},
	{"assertFlagTest", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCExpression*(Lower::*)($JCDiagnostic$DiagnosticPosition*)>(&Lower::assertFlagTest))},
	{"assertionsDisabledClass", "()Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol$ClassSymbol*(Lower::*)()>(&Lower::assertionsDisabledClass))},
	{"binaryAccessOperator", "(ILcom/sun/tools/javac/tree/JCTree$Tag;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol$OperatorSymbol*(Lower::*)(int32_t,$JCTree$Tag*)>(&Lower::binaryAccessOperator))},
	{"boxArgs", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", 0},
	{"boxIfNeeded", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "<T:Lcom/sun/tools/javac/tree/JCTree$JCExpression;>(TT;Lcom/sun/tools/javac/code/Type;)TT;", 0},
	{"boxPrimitive", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"boxPrimitive", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"checkAccessConstructorTags", "()V", nullptr, $PRIVATE, $method(static_cast<void(Lower::*)()>(&Lower::checkAccessConstructorTags))},
	{"checkConflicts", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;)V", 0},
	{"classDef", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, 0},
	{"classOf", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCExpression*(Lower::*)($JCTree*)>(&Lower::classOf))},
	{"classOfType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCExpression*(Lower::*)($Type*,$JCDiagnostic$DiagnosticPosition*)>(&Lower::classOfType))},
	{"convert", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCExpression*(Lower::*)($JCTree$JCExpression*,$Type*)>(&Lower::convert))},
	{"createInfoClass", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", $PRIVATE, $method(static_cast<void(Lower::*)($List*,$Symbol$ClassSymbol*)>(&Lower::createInfoClass))},
	{"enterSynthetic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope$WriteableScope;)V", nullptr, $PRIVATE, $method(static_cast<void(Lower::*)($JCDiagnostic$DiagnosticPosition*,$Symbol*,$Scope$WriteableScope*)>(&Lower::enterSynthetic))},
	{"expValue", "(Lcom/sun/tools/javac/tree/JCTree;)Ljava/lang/Boolean;", nullptr, $PRIVATE, $method(static_cast<$Boolean*(Lower::*)($JCTree*)>(&Lower::expValue))},
	{"expValueIsNull", "(ZLcom/sun/tools/javac/tree/JCTree;)Ljava/lang/Boolean;", nullptr, $PRIVATE, $method(static_cast<$Boolean*(Lower::*)(bool,$JCTree*)>(&Lower::expValueIsNull))},
	{"freevarDefs", "(ILcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/List;", "(ILcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$VarSymbol;>;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;", 0},
	{"freevarDefs", "(ILcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol;J)Lcom/sun/tools/javac/util/List;", "(ILcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$VarSymbol;>;Lcom/sun/tools/javac/code/Symbol;J)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;", 0},
	{"freevars", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$VarSymbol;>;", 0},
	{"generateMandatedAccessors", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", 0},
	{"generateRecordMethod", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;[Lcom/sun/tools/javac/code/Symbol$MethodHandleSymbol;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$VarSymbol;>;[Lcom/sun/tools/javac/code/Symbol$MethodHandleSymbol;)Lcom/sun/tools/javac/tree/JCTree;", 0},
	{"handleSwitch", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;)V", $PRIVATE, $method(static_cast<void(Lower::*)($JCTree*,$JCTree$JCExpression*,$List*)>(&Lower::handleSwitch))},
	{"initField", "(ILcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, 0},
	{"initOuterThis", "(I)Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, 0},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/Lower;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Lower*(*)($Context*)>(&Lower::instance))},
	{"isFalse", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Lower::*)($JCTree*)>(&Lower::isFalse))},
	{"isTranslatedClassAvailable", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Lower::*)($Symbol$ClassSymbol*)>(&Lower::isTranslatedClassAvailable))},
	{"isTrue", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Lower::*)($JCTree*)>(&Lower::isTrue))},
	{"lambda$abstractLval$1", "(Lcom/sun/tools/javac/comp/Lower$TreeBuilder;Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$JCTree$JCExpression*(Lower::*)($Lower$TreeBuilder*,$JCTree$JCFieldAccess*,$JCTree$JCExpression*)>(&Lower::lambda$abstractLval$1))},
	{"lambda$abstractLval$2", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCArrayAccess;Lcom/sun/tools/javac/comp/Lower$TreeBuilder;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$JCTree$JCExpression*(Lower::*)($JCTree$JCExpression*,$JCTree$JCArrayAccess*,$Lower$TreeBuilder*,$JCTree$JCExpression*)>(&Lower::lambda$abstractLval$2))},
	{"lambda$abstractLval$3", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayAccess;Lcom/sun/tools/javac/comp/Lower$TreeBuilder;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$JCTree$JCExpression*(Lower::*)($JCTree$JCArrayAccess*,$Lower$TreeBuilder*,$JCTree$JCExpression*)>(&Lower::lambda$abstractLval$3))},
	{"lambda$addDefaultIfNeeded$13", "(Lcom/sun/tools/javac/tree/JCTree$JCCase;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Stream*(*)($JCTree$JCCase*)>(&Lower::lambda$addDefaultIfNeeded$13))},
	{"lambda$addDefaultIfNeeded$14", "(Lcom/sun/tools/javac/tree/JCTree$JCCaseLabel;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCTree$JCCaseLabel*)>(&Lower::lambda$addDefaultIfNeeded$14))},
	{"lambda$binaryAccessOperator$0", "(Lcom/sun/tools/javac/tree/JCTree$Tag;ILcom/sun/tools/javac/code/Symbol$OperatorSymbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCTree$Tag*,int32_t,$Symbol$OperatorSymbol*)>(&Lower::lambda$binaryAccessOperator$0))},
	{"lambda$generateMandatedAccessors$4", "(Lcom/sun/tools/javac/code/Symbol$RecordComponent;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol$RecordComponent*)>(&Lower::lambda$generateMandatedAccessors$4))},
	{"lambda$generateMandatedAccessors$5", "(Lcom/sun/tools/javac/code/Symbol$RecordComponent;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol$RecordComponent*,$JCTree$JCVariableDecl*)>(&Lower::lambda$generateMandatedAccessors$5))},
	{"lambda$generateMandatedAccessors$6", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/code/Symbol$RecordComponent;)Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$JCTree$JCMethodDecl*(Lower::*)($List*,$JCTree$JCClassDecl*,$Symbol$RecordComponent*)>(&Lower::lambda$generateMandatedAccessors$6))},
	{"lambda$generateRecordMethod$8", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Name*(*)($Symbol$VarSymbol*)>(&Lower::lambda$generateRecordMethod$8))},
	{"lambda$lowerBoxedPostop$11", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;Lcom/sun/tools/javac/tree/JCTree$JCExpression;ZLcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$JCTree$JCExpression*(Lower::*)($JCTree$JCUnary*,$JCTree$JCExpression*,bool,$JCTree$JCExpression*)>(&Lower::lambda$lowerBoxedPostop$11))},
	{"lambda$lowerBoxedPostop$12", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;ZLcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$JCTree$JCExpression*(Lower::*)($JCTree$JCUnary*,bool,$JCTree$JCExpression*)>(&Lower::lambda$lowerBoxedPostop$12))},
	{"lambda$recordVars$7", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol*)>(&Lower::lambda$recordVars$7))},
	{"lambda$visitAssignop$10", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;ZLcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$JCTree$JCExpression*(Lower::*)($JCTree$JCAssignOp*,bool,$JCTree$JCExpression*)>(&Lower::lambda$visitAssignop$10))},
	{"lambda$visitEnumSwitch$15", "(Lcom/sun/tools/javac/tree/JCTree$JCCase;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCTree$JCCase*)>(&Lower::lambda$visitEnumSwitch$15))},
	{"lambda$visitMethodDefInternal$9", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol$VarSymbol*,$JCTree$JCVariableDecl*)>(&Lower::lambda$visitMethodDefInternal$9))},
	{"loadFreevar", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$VarSymbol;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"loadFreevars", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$VarSymbol;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", 0},
	{"lookupMethod", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", $PRIVATE, $method(static_cast<$Symbol$MethodSymbol*(Lower::*)($JCDiagnostic$DiagnosticPosition*,$Name*,$Type*,$List*)>(&Lower::lookupMethod))},
	{"lookupSynthetic", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Scope;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol*(Lower::*)($Name*,$Scope*)>(&Lower::lookupSynthetic))},
	{"lowerBoxedPostop", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"makeAccessible", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"makeAssignop", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;", nullptr, 0},
	{"makeBinary", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCBinary;", nullptr, 0},
	{"makeCall", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;", $PRIVATE, $method(static_cast<$JCTree$JCMethodInvocation*(Lower::*)($JCTree$JCExpression*,$Name*,$List*)>(&Lower::makeCall))},
	{"makeComma", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"makeEmptyClass", "(JLcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, 0},
	{"makeEmptyClass", "(JLcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/Name;Z)Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, 0},
	{"makeIndyQualifier", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/util/List;[Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/Name;Z)Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;[Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/Name;Z)Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;", 0},
	{"makeLit", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"makeNewClass", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", 0},
	{"makeNonNullCheck", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCExpression*(Lower::*)($JCTree$JCExpression*)>(&Lower::makeNonNullCheck))},
	{"makeNull", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"makeOuterThis", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"makeOuterThisVarDecl", "(ILcom/sun/tools/javac/code/Symbol$VarSymbol;)Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCVariableDecl*(Lower::*)(int32_t,$Symbol$VarSymbol*)>(&Lower::makeOuterThisVarDecl))},
	{"makeOuterThisVarSymbol", "(Lcom/sun/tools/javac/code/Symbol;J)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol$VarSymbol*(Lower::*)($Symbol*,int64_t)>(&Lower::makeOuterThisVarSymbol))},
	{"makeOwnerThis", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Z)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"makeOwnerThisN", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Z)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"makeResourceCloseInvocation", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCStatement*(Lower::*)($JCTree$JCExpression*)>(&Lower::makeResourceCloseInvocation))},
	{"makeString", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"makeSyntheticName", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Scope;)Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE, $method(static_cast<$Name*(Lower::*)($Name*,$Scope*)>(&Lower::makeSyntheticName))},
	{"makeThis", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"makeTranslationMap", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)Ljava/util/Map;", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE, $method(static_cast<$Map*(Lower::*)($JCTree$JCMethodDecl*)>(&Lower::makeTranslationMap))},
	{"makeTwrBlock", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCBlock;I)Lcom/sun/tools/javac/tree/JCTree$JCBlock;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;Lcom/sun/tools/javac/tree/JCTree$JCBlock;I)Lcom/sun/tools/javac/tree/JCTree$JCBlock;", $PRIVATE, $method(static_cast<$JCTree$JCBlock*(Lower::*)($List*,$JCTree$JCBlock*,int32_t)>(&Lower::makeTwrBlock))},
	{"makeTwrTry", "(Lcom/sun/tools/javac/tree/JCTree$JCTry;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0},
	{"makeUnary", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCUnary;", nullptr, 0},
	{"make_at", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, 0},
	{"mapForEnum", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/comp/Lower$EnumMapping;", nullptr, 0},
	{"needPackageInfoClass", "(Lcom/sun/tools/javac/tree/JCTree$JCPackageDecl;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Lower::*)($JCTree$JCPackageDecl*)>(&Lower::needPackageInfoClass))},
	{"needsPrivateAccess", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, 0},
	{"needsProtectedAccess", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, 0},
	{"outerCacheClass", "()Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol$ClassSymbol*(Lower::*)()>(&Lower::outerCacheClass))},
	{"outerThisDef", "(ILcom/sun/tools/javac/code/Symbol$MethodSymbol;)Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, 0},
	{"outerThisDef", "(ILcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, 0},
	{"outerThisName", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/Name;", nullptr, 0},
	{"ownerToCopyFreeVarsFrom", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, 0},
	{"patchTargets", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PRIVATE, $method(static_cast<void(Lower::*)($JCTree*,$JCTree*,$JCTree*)>(&Lower::patchTargets))},
	{"proxyName", "(Lcom/sun/tools/javac/util/Name;I)Lcom/sun/tools/javac/util/Name;", nullptr, 0},
	{"recordVars", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$VarSymbol;>;", $PRIVATE, $method(static_cast<$List*(Lower::*)($Type*)>(&Lower::recordVars))},
	{"swapAccessConstructorTag", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, 0},
	{"syntheticName", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Ljava/lang/String;)Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE, $method(static_cast<$Name*(Lower::*)($JCTree$JCClassDecl*,$String*)>(&Lower::syntheticName))},
	{"translate", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(TT;)TT;", $PUBLIC},
	{"translate", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "<T:Lcom/sun/tools/javac/tree/JCTree$JCExpression;>(TT;Lcom/sun/tools/javac/code/Type;)TT;", $PUBLIC},
	{"translate", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(TT;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)TT;", $PUBLIC},
	{"translate", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "<T:Lcom/sun/tools/javac/tree/JCTree$JCExpression;>(Lcom/sun/tools/javac/util/List<TT;>;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<TT;>;", $PUBLIC},
	{"translateTopLevelClass", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", $PUBLIC},
	{"treeTag", "(Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;)Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JCTree$Tag*(*)($Symbol$OperatorSymbol*)>(&Lower::treeTag))},
	{"unbox", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"useClone", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(Lower::*)()>(&Lower::useClone))},
	{"visitAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)V", nullptr, $PUBLIC},
	{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC},
	{"visitArrayForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)V", nullptr, $PRIVATE, $method(static_cast<void(Lower::*)($JCTree$JCEnhancedForLoop*)>(&Lower::visitArrayForeachLoop))},
	{"visitAssert", "(Lcom/sun/tools/javac/tree/JCTree$JCAssert;)V", nullptr, $PUBLIC},
	{"visitAssign", "(Lcom/sun/tools/javac/tree/JCTree$JCAssign;)V", nullptr, $PUBLIC},
	{"visitAssignop", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)V", nullptr, $PUBLIC},
	{"visitBinary", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)V", nullptr, $PUBLIC},
	{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC},
	{"visitBoxedPrimitiveSwitch", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;)Lcom/sun/tools/javac/tree/JCTree;", $PRIVATE, $method(static_cast<$JCTree*(Lower::*)($JCTree*,$JCTree$JCExpression*,$List*)>(&Lower::visitBoxedPrimitiveSwitch))},
	{"visitBreak", "(Lcom/sun/tools/javac/tree/JCTree$JCBreak;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitConditional", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", nullptr, $PUBLIC},
	{"visitDoLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCDoWhileLoop;)V", nullptr, $PUBLIC},
	{"visitEnumConstantDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;I)V", nullptr, $PRIVATE, $method(static_cast<void(Lower::*)($JCTree$JCVariableDecl*,int32_t)>(&Lower::visitEnumConstantDef))},
	{"visitEnumDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PRIVATE, $method(static_cast<void(Lower::*)($JCTree$JCClassDecl*)>(&Lower::visitEnumDef))},
	{"visitEnumSwitch", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitForLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCForLoop;)V", nullptr, $PUBLIC},
	{"visitForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitIf", "(Lcom/sun/tools/javac/tree/JCTree$JCIf;)V", nullptr, $PUBLIC},
	{"visitIndexed", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayAccess;)V", nullptr, $PUBLIC},
	{"visitIterableForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)V", nullptr, $PRIVATE, $method(static_cast<void(Lower::*)($JCTree$JCEnhancedForLoop*)>(&Lower::visitIterableForeachLoop))},
	{"visitLetExpr", "(Lcom/sun/tools/javac/tree/JCTree$LetExpr;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitMethodDefInternal", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PRIVATE, $method(static_cast<void(Lower::*)($JCTree$JCMethodDecl*)>(&Lower::visitMethodDefInternal))},
	{"visitModuleDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;)V", nullptr, $PUBLIC},
	{"visitNewArray", "(Lcom/sun/tools/javac/tree/JCTree$JCNewArray;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitPackageDef", "(Lcom/sun/tools/javac/tree/JCTree$JCPackageDecl;)V", nullptr, $PUBLIC},
	{"visitParens", "(Lcom/sun/tools/javac/tree/JCTree$JCParens;)V", nullptr, $PUBLIC},
	{"visitRecordDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PRIVATE, $method(static_cast<void(Lower::*)($JCTree$JCClassDecl*)>(&Lower::visitRecordDef))},
	{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitStringSwitch", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitSwitch", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitch;)V", nullptr, $PUBLIC},
	{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC},
	{"visitTry", "(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V", nullptr, $PUBLIC},
	{"visitTypeCast", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PUBLIC},
	{"visitUnary", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{"visitWhileLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCWhileLoop;)V", nullptr, $PUBLIC},
	{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Lower_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Lower$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.comp.Lower$AssignopDependencyScanner", "com.sun.tools.javac.comp.Lower", "AssignopDependencyScanner", 0},
	{"com.sun.tools.javac.comp.Lower$LowerSignatureGenerator", "com.sun.tools.javac.comp.Lower", "LowerSignatureGenerator", $PRIVATE},
	{"com.sun.tools.javac.comp.Lower$TreeBuilder", "com.sun.tools.javac.comp.Lower", "TreeBuilder", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.comp.Lower$EnumMapping", "com.sun.tools.javac.comp.Lower", "EnumMapping", 0},
	{"com.sun.tools.javac.comp.Lower$FreeVarCollector", "com.sun.tools.javac.comp.Lower", "FreeVarCollector", 0},
	{"com.sun.tools.javac.comp.Lower$BasicFreeVarCollector", "com.sun.tools.javac.comp.Lower", "BasicFreeVarCollector", $ABSTRACT},
	{"com.sun.tools.javac.comp.Lower$ClassMap", "com.sun.tools.javac.comp.Lower", "ClassMap", 0},
	{"com.sun.tools.javac.comp.Lower$1Patcher", nullptr, "Patcher", 0},
	{"com.sun.tools.javac.comp.Lower$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Lower_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Lower",
	"com.sun.tools.javac.tree.TreeTranslator",
	nullptr,
	_Lower_FieldInfo_,
	_Lower_MethodInfo_,
	nullptr,
	nullptr,
	_Lower_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Lower$2,com.sun.tools.javac.comp.Lower$AssignopDependencyScanner,com.sun.tools.javac.comp.Lower$LowerSignatureGenerator,com.sun.tools.javac.comp.Lower$TreeBuilder,com.sun.tools.javac.comp.Lower$EnumMapping,com.sun.tools.javac.comp.Lower$FreeVarCollector,com.sun.tools.javac.comp.Lower$BasicFreeVarCollector,com.sun.tools.javac.comp.Lower$ClassMap,com.sun.tools.javac.comp.Lower$1Patcher,com.sun.tools.javac.comp.Lower$1"
};

$Object* allocate$Lower($Class* clazz) {
	return $of($alloc(Lower));
}

$Context$Key* Lower::lowerKey = nullptr;

Lower* Lower::instance($Context* context) {
	$init(Lower);
	$var(Lower, instance, $cast(Lower, $nc(context)->get(Lower::lowerKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Lower, context));
	}
	return instance;
}

void Lower::init$($Context* context) {
	$useLocalCurrentObjectStackCache();
	$TreeTranslator::init$();
	$set(this, prunedTree, $new($WeakHashMap));
	$set(this, lambdaTranslationMap, nullptr);
	$set(this, classMap, $new($Lower$ClassMap, this));
	$set(this, enumSwitchMap, $new($LinkedHashMap));
	$set(this, conflictsChecker, $new($Lower$1, this));
	$nc(context)->put(Lower::lowerKey, $of(this));
	$set(this, names, $Names::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, rs, $Resolve::instance(context));
	$set(this, operators, $Operators::instance(context));
	$set(this, chk, $Check::instance(context));
	$set(this, attr, $Attr::instance(context));
	$set(this, make, $TreeMaker::instance(context));
	$set(this, cfolder, $ConstFold::instance(context));
	$set(this, target, $Target::instance(context));
	$set(this, typeEnvs, $TypeEnvs::instance(context));
	$set(this, dollarAssertionsDisabled, $nc(this->names)->fromString($$str({$$str(this->target->syntheticNameChar()), "assertionsDisabled"_s})));
	$set(this, types, $Types::instance(context));
	$var($Options, options, $Options::instance(context));
	this->debugLower = $nc(options)->isSet("debuglower"_s);
	$set(this, pkginfoOpt, $Option$PkgInfo::get(options));
	this->disableProtectedAccessors = options->isSet("disableProtectedAccessors"_s);
}

$JCTree$JCClassDecl* Lower::classDef($Symbol$ClassSymbol* c) {
	$var($JCTree$JCClassDecl, def, $cast($JCTree$JCClassDecl, $nc(this->classdefs)->get(c)));
	if (def == nullptr && this->outermostMemberDef != nullptr) {
		$nc(this->classMap)->scan(this->outermostMemberDef);
		$assign(def, $cast($JCTree$JCClassDecl, $nc(this->classdefs)->get(c)));
	}
	if (def == nullptr) {
		$nc(this->classMap)->scan(static_cast<$JCTree*>(this->outermostClassDef));
		$assign(def, $cast($JCTree$JCClassDecl, $nc(this->classdefs)->get(c)));
	}
	return def;
}

$Symbol$ClassSymbol* Lower::ownerToCopyFreeVarsFrom($Symbol$ClassSymbol* c) {
	if (!$nc(c)->isDirectlyOrIndirectlyLocal()) {
		return nullptr;
	}
	$var($Symbol, currentOwner, $nc(c)->owner);
	while (true) {
		$init($Kinds$KindSelector);
		bool var$0 = $nc($nc($nc(currentOwner)->owner)->kind)->matches($Kinds$KindSelector::TYP);
		if (!(var$0 && currentOwner->isDirectlyOrIndirectlyLocal())) {
			break;
		}
		{
			$assign(currentOwner, currentOwner->owner);
		}
	}
	$init($Kinds$KindSelector);
	bool var$1 = $nc($nc($nc(currentOwner)->owner)->kind)->matches($Kinds$KindSelector::VAL_MTH);
	if (var$1 && c->isSubClass(currentOwner, this->types)) {
		return $cast($Symbol$ClassSymbol, currentOwner);
	}
	return nullptr;
}

$List* Lower::freevars($Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$var($List, fvs, $cast($List, $nc(this->freevarCache)->get(c)));
	if (fvs != nullptr) {
		return fvs;
	}
	$init($Kinds$KindSelector);
	if ($nc($nc($nc(c)->owner)->kind)->matches($Kinds$KindSelector::VAL_MTH)) {
		$var($Lower$FreeVarCollector, collector, $new($Lower$FreeVarCollector, this, c));
		collector->scan($(static_cast<$JCTree*>(classDef(c))));
		$assign(fvs, collector->fvs);
		$nc(this->freevarCache)->put(c, fvs);
		return fvs;
	} else {
		$var($Symbol$ClassSymbol, owner, ownerToCopyFreeVarsFrom(c));
		if (owner != nullptr) {
			$assign(fvs, $cast($List, $nc(this->freevarCache)->get(owner)));
			$nc(this->freevarCache)->put(c, fvs);
			return fvs;
		} else {
			return $List::nil();
		}
	}
}

$Lower$EnumMapping* Lower::mapForEnum($JCDiagnostic$DiagnosticPosition* pos, $Symbol$TypeSymbol* enumClass) {
	$var($Lower$EnumMapping, map, $cast($Lower$EnumMapping, $nc(this->enumSwitchMap)->get(enumClass)));
	if (map == nullptr) {
		$nc(this->enumSwitchMap)->put(enumClass, $assign(map, $new($Lower$EnumMapping, this, pos, enumClass)));
	}
	return map;
}

$TreeMaker* Lower::make_at($JCDiagnostic$DiagnosticPosition* pos) {
	$set(this, make_pos, pos);
	return $nc(this->make)->at(pos);
}

$JCTree$JCExpression* Lower::makeLit($Type* type, Object$* value) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc(this->make)->Literal($($nc(type)->getTag()), value)))->setType($($nc(type)->constType(value)));
}

$JCTree$JCExpression* Lower::makeNull() {
	return makeLit($nc(this->syms)->botType, nullptr);
}

$JCTree$JCNewClass* Lower::makeNewClass($Type* ctype, $List* args) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCNewClass, tree, $nc(this->make)->NewClass(nullptr, nullptr, $($nc(this->make)->QualIdent($nc(ctype)->tsym)), args, nullptr));
	$var($JCDiagnostic$DiagnosticPosition, var$0, this->make_pos);
	$var($Env, var$1, this->attrEnv);
	$var($Type, var$2, ctype);
	$var($List, var$3, $TreeInfo::types(args));
	$set($nc(tree), constructor, $nc(this->rs)->resolveConstructor(var$0, var$1, var$2, var$3, $($List::nil())));
	$set(tree, type, ctype);
	return tree;
}

$JCTree$JCUnary* Lower::makeUnary($JCTree$Tag* optag, $JCTree$JCExpression* arg) {
	$var($JCTree$JCUnary, tree, $nc(this->make)->Unary(optag, arg));
	$set($nc(tree), operator$, $nc(this->operators)->resolveUnary(tree, optag, $nc(arg)->type));
	$set(tree, type, $nc($nc(tree->operator$)->type)->getReturnType());
	return tree;
}

$JCTree$JCBinary* Lower::makeBinary($JCTree$Tag* optag, $JCTree$JCExpression* lhs, $JCTree$JCExpression* rhs) {
	$var($JCTree$JCBinary, tree, $nc(this->make)->Binary(optag, lhs, rhs));
	$set($nc(tree), operator$, $nc(this->operators)->resolveBinary(tree, optag, $nc(lhs)->type, $nc(rhs)->type));
	$set(tree, type, $nc($nc(tree->operator$)->type)->getReturnType());
	return tree;
}

$JCTree$JCAssignOp* Lower::makeAssignop($JCTree$Tag* optag, $JCTree* lhs, $JCTree* rhs) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCAssignOp, tree, $nc(this->make)->Assignop(optag, lhs, rhs));
	$set($nc(tree), operator$, $nc(this->operators)->resolveBinary(tree, $($nc($(tree->getTag()))->noAssignOp()), $nc(lhs)->type, $nc(rhs)->type));
	$set(tree, type, $nc(lhs)->type);
	return tree;
}

$JCTree$JCExpression* Lower::makeString($JCTree$JCExpression* tree) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($nc(tree)->type)->isPrimitiveOrVoid()) {
		return tree;
	} else {
		$var($JCDiagnostic$DiagnosticPosition, var$0, tree->pos());
		$var($Name, var$1, $nc(this->names)->valueOf);
		$var($Type, var$2, $nc(this->syms)->stringType);
		$var($Symbol, valueOfSym, lookupMethod(var$0, var$1, var$2, $($List::of(tree->type))));
		$var($JCTree$JCExpression, var$3, $nc(this->make)->QualIdent(valueOfSym));
		return $nc(this->make)->App(var$3, $($List::of(tree)));
	}
}

$JCTree$JCClassDecl* Lower::makeEmptyClass(int64_t flags, $Symbol$ClassSymbol* owner) {
	return makeEmptyClass(flags, owner, nullptr, true);
}

$JCTree$JCClassDecl* Lower::makeEmptyClass(int64_t flags, $Symbol$ClassSymbol* owner, $Name* flatname, bool addToDefs) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ClassSymbol, c, $nc(this->syms)->defineClass($nc(this->names)->empty, owner));
	if (flatname != nullptr) {
		$set($nc(c), flatname, flatname);
	} else {
		$set($nc(c), flatname, $nc(this->chk)->localClassName(c));
	}
	$set($nc(c), sourcefile, $nc(owner)->sourcefile);
	$init($Symbol$Completer);
	$set(c, completer, $Symbol$Completer::NULL_COMPLETER);
	$set(c, members_field, $Scope$WriteableScope::create(c));
	c->flags_field = flags;
	$var($Type$ClassType, ctype, $cast($Type$ClassType, c->type));
	$set($nc(ctype), supertype_field, $nc(this->syms)->objectType);
	$set(ctype, interfaces_field, $List::nil());
	$var($JCTree$JCClassDecl, odef, classDef(owner));
	$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(odef)->pos());
	$var($Symbol, var$1, static_cast<$Symbol*>(c));
	enterSynthetic(var$0, var$1, $(owner->members()));
	$nc(this->chk)->putCompiled(c);
	$var($JCTree$JCModifiers, var$2, $nc(this->make)->Modifiers(flags));
	$var($Name, var$3, $nc(this->names)->empty);
	$var($List, var$4, $List::nil());
	$var($List, var$5, $List::nil());
	$var($JCTree$JCClassDecl, cdef, $nc(this->make)->ClassDef(var$2, var$3, var$4, nullptr, var$5, $($List::nil())));
	$set($nc(cdef), sym, c);
	$set(cdef, type, c->type);
	if (addToDefs) {
		$set($nc(odef), defs, $nc(odef->defs)->prepend(cdef));
	}
	return cdef;
}

void Lower::enterSynthetic($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym, $Scope$WriteableScope* s) {
	$nc(s)->enter(sym);
}

$Name* Lower::makeSyntheticName($Name* name$renamed, $Scope* s) {
	$var($Name, name, name$renamed);
	do {
		$assign(name, $nc(name)->append(this->target->syntheticNameChar(), $nc(this->names)->empty));
	} while (lookupSynthetic(name, s) != nullptr);
	return name;
}

void Lower::checkConflicts($List* translatedTrees) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(translatedTrees)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, t, $cast($JCTree, i$->next()));
			{
				$nc(t)->accept(this->conflictsChecker);
			}
		}
	}
}

$Symbol* Lower::lookupSynthetic($Name* name, $Scope* s) {
	$var($Symbol, sym, $nc(s)->findFirst(name));
	return (sym == nullptr || ((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)4096)) == 0) ? ($Symbol*)nullptr : sym;
}

$Symbol$MethodSymbol* Lower::lookupMethod($JCDiagnostic$DiagnosticPosition* pos, $Name* name, $Type* qual, $List* args) {
	return $nc(this->rs)->resolveInternalMethod(pos, this->attrEnv, qual, name, args, $($List::nil()));
}

void Lower::checkAccessConstructorTags() {
	$useLocalCurrentObjectStackCache();
	{
		$var($List, l, this->accessConstrTags);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$var($Symbol$ClassSymbol, c, $cast($Symbol$ClassSymbol, l->head));
			if (isTranslatedClassAvailable(c)) {
				continue;
			}
			$var($JCTree$JCClassDecl, cdec, makeEmptyClass(8 | 4096, $($nc(c)->outermostClass()), c->flatname, false));
			swapAccessConstructorTag(c, $nc(cdec)->sym);
			$nc(this->translated)->append(cdec);
		}
	}
}

bool Lower::isTranslatedClassAvailable($Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->translated)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, tree, $cast($JCTree, i$->next()));
			{
				$init($JCTree$Tag);
				if ($nc(tree)->hasTag($JCTree$Tag::CLASSDEF) && $nc(($cast($JCTree$JCClassDecl, tree)))->sym == c) {
					return true;
				}
			}
		}
	}
	return false;
}

void Lower::swapAccessConstructorTag($Symbol$ClassSymbol* oldCTag, $Symbol$ClassSymbol* newCTag) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(this->accessConstrs)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$MethodSymbol, methodSymbol, $cast($Symbol$MethodSymbol, i$->next()));
			{
				$init($TypeTag);
				$Assert::check($nc($nc(methodSymbol)->type)->hasTag($TypeTag::METHOD));
				$var($Type$MethodType, oldMethodType, $cast($Type$MethodType, $nc(methodSymbol)->type));
				if ($equals($nc(($cast($Type, $nc($nc(oldMethodType)->argtypes$)->head)))->tsym, oldCTag)) {
					$set(methodSymbol, type, $nc(this->types)->createMethodTypeWithParameters(oldMethodType, $($nc($nc($(oldMethodType->getParameterTypes()))->tail)->prepend($($nc(newCTag)->erasure(this->types))))));
				}
			}
		}
	}
}

int32_t Lower::accessCode($JCTree* tree, $JCTree* enclOp) {
	$init(Lower);
	$useLocalCurrentObjectStackCache();
	if (enclOp == nullptr) {
		$init($Symbol$OperatorSymbol$AccessCode);
		return $Symbol$OperatorSymbol$AccessCode::DEREF->code;
	} else {
		$init($JCTree$Tag);
		bool var$1 = $nc(enclOp)->hasTag($JCTree$Tag::ASSIGN);
		if (var$1 && $equals(tree, $TreeInfo::skipParens($nc(($cast($JCTree$JCAssign, enclOp)))->lhs))) {
			$init($Symbol$OperatorSymbol$AccessCode);
			return $Symbol$OperatorSymbol$AccessCode::ASSIGN->code;
		} else {
			bool var$5 = $nc($(enclOp->getTag()))->isIncOrDecUnaryOp();
			bool var$4 = (var$5 || $nc($(enclOp->getTag()))->isAssignop());
			$init($JCTree$JCOperatorExpression$OperandPos);
			if (var$4 && $equals(tree, $TreeInfo::skipParens($($nc(($cast($JCTree$JCOperatorExpression, enclOp)))->getOperand($JCTree$JCOperatorExpression$OperandPos::LEFT))))) {
				return $nc(($nc(($cast($JCTree$JCOperatorExpression, enclOp)))->operator$))->getAccessCode($(enclOp->getTag()));
			} else {
				$init($Symbol$OperatorSymbol$AccessCode);
				return $Symbol$OperatorSymbol$AccessCode::DEREF->code;
			}
		}
	}
}

$Symbol$OperatorSymbol* Lower::binaryAccessOperator(int32_t acode, $JCTree$Tag* tag) {
	return $nc(this->operators)->lookupBinaryOp(static_cast<$Predicate*>($$new(Lower$$Lambda$lambda$binaryAccessOperator$0, tag, acode)));
}

$JCTree$Tag* Lower::treeTag($Symbol$OperatorSymbol* operator$) {
	$init(Lower);
	switch ($nc(operator$)->opcode) {
	case $ByteCodes::ior:
		{}
	case $ByteCodes::lor:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::BITOR_ASG;
		}
	case $ByteCodes::ixor:
		{}
	case $ByteCodes::lxor:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::BITXOR_ASG;
		}
	case $ByteCodes::iand:
		{}
	case $ByteCodes::land:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::BITAND_ASG;
		}
	case $ByteCodes::ishl:
		{}
	case $ByteCodes::lshl:
		{}
	case $ByteCodes::ishll:
		{}
	case $ByteCodes::lshll:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::SL_ASG;
		}
	case $ByteCodes::ishr:
		{}
	case $ByteCodes::lshr:
		{}
	case $ByteCodes::ishrl:
		{}
	case $ByteCodes::lshrl:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::SR_ASG;
		}
	case $ByteCodes::iushr:
		{}
	case $ByteCodes::lushr:
		{}
	case $ByteCodes::iushrl:
		{}
	case $ByteCodes::lushrl:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::USR_ASG;
		}
	case $ByteCodes::iadd:
		{}
	case $ByteCodes::ladd:
		{}
	case $ByteCodes::fadd:
		{}
	case $ByteCodes::dadd:
		{}
	case $ByteCodes::string_add:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::PLUS_ASG;
		}
	case $ByteCodes::isub:
		{}
	case $ByteCodes::lsub:
		{}
	case $ByteCodes::fsub:
		{}
	case $ByteCodes::dsub:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::MINUS_ASG;
		}
	case $ByteCodes::imul:
		{}
	case $ByteCodes::lmul:
		{}
	case $ByteCodes::fmul:
		{}
	case $ByteCodes::dmul:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::MUL_ASG;
		}
	case $ByteCodes::idiv:
		{}
	case $ByteCodes::ldiv:
		{}
	case $ByteCodes::fdiv:
		{}
	case $ByteCodes::ddiv:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::DIV_ASG;
		}
	case $ByteCodes::imod:
		{}
	case $ByteCodes::lmod:
		{}
	case $ByteCodes::fmod:
		{}
	case $ByteCodes::dmod:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::MOD_ASG;
		}
	default:
		{
			$throwNew($AssertionError);
		}
	}
}

$Name* Lower::accessName(int32_t anum, int32_t acode) {
	$useLocalCurrentObjectStackCache();
	return $nc(this->names)->fromString($$str({"access"_s, $$str(this->target->syntheticNameChar()), $$str(anum), $$str(acode / 10), $$str(acode % 10)}));
}

$Symbol$MethodSymbol* Lower::accessSymbol($Symbol* sym, $JCTree* tree, $JCTree* enclOp, bool protAccess, bool refSuper) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ClassSymbol, accOwner, refSuper && protAccess ? $cast($Symbol$ClassSymbol, $nc($nc($nc(($cast($JCTree$JCFieldAccess, tree)))->selected)->type)->tsym) : accessClass(sym, protAccess, tree));
	$var($Symbol, vsym, sym);
	if (!$equals($nc(sym)->owner, accOwner)) {
		$assign(vsym, sym->clone(accOwner));
		$nc(this->actualSymbols)->put(vsym, sym);
	}
	$var($Integer, anum, $cast($Integer, $nc(this->accessNums)->get(vsym)));
	if (anum == nullptr) {
		$assign(anum, $Integer::valueOf($nc(this->accessed)->length()));
		$nc(this->accessNums)->put(vsym, anum);
		$init($Symbol$OperatorSymbol$AccessCode);
		$nc(this->accessSyms)->put(vsym, $$new($Symbol$MethodSymbolArray, $Symbol$OperatorSymbol$AccessCode::numberOfAccessCodes));
		$nc(this->accessed)->append(vsym);
	}
	int32_t acode = 0;
	$var($List, argtypes, nullptr);
	$var($Type, restype, nullptr);
	$var($List, thrown, nullptr);
	$init($Lower$2);
	switch ($nc($Lower$2::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->get($nc(($nc(vsym)->kind))->ordinal())) {
	case 1:
		{
			acode = accessCode(tree, enclOp);
			$init($Symbol$OperatorSymbol$AccessCode);
			if (acode >= $Symbol$OperatorSymbol$AccessCode::FIRSTASGOP->code) {
				$var($Symbol$OperatorSymbol, operator$, binaryAccessOperator(acode, $($nc(enclOp)->getTag())));
				if ($nc(operator$)->opcode == 256) {
					$assign(argtypes, $List::of($nc(this->syms)->objectType));
				} else {
					$assign(argtypes, $nc($($nc(operator$->type)->getParameterTypes()))->tail);
				}
			} else {
				if (acode == $Symbol$OperatorSymbol$AccessCode::ASSIGN->code) {
					$assign(argtypes, $List::of($(vsym->erasure(this->types))));
				} else {
					$assign(argtypes, $List::nil());
				}
			}
			$assign(restype, vsym->erasure(this->types));
			$assign(thrown, $List::nil());
			break;
		}
	case 2:
		{
			$init($Symbol$OperatorSymbol$AccessCode);
			acode = $Symbol$OperatorSymbol$AccessCode::DEREF->code;
			$assign(argtypes, $nc($(vsym->erasure(this->types)))->getParameterTypes());
			$assign(restype, $nc($(vsym->erasure(this->types)))->getReturnType());
			$assign(thrown, $nc(vsym->type)->getThrownTypes());
			break;
		}
	default:
		{
			$throwNew($AssertionError);
		}
	}
	if (protAccess && refSuper) {
		++acode;
	}
	if (((int64_t)(vsym->flags() & (uint64_t)(int64_t)8)) == 0) {
		$assign(argtypes, $nc(argtypes)->prepend($($nc(vsym->owner)->erasure(this->types))));
	}
	$var($Symbol$MethodSymbolArray, accessors, $cast($Symbol$MethodSymbolArray, $nc(this->accessSyms)->get(vsym)));
	$var($Symbol$MethodSymbol, accessor, $nc(accessors)->get(acode));
	if (accessor == nullptr) {
		int64_t var$0 = (int64_t)((8 | 4096) | ($nc(accOwner)->isInterface() ? 1 : 0));
		$var($Name, var$1, accessName($nc(anum)->intValue(), acode));
		$assign(accessor, $new($Symbol$MethodSymbol, var$0, var$1, $$new($Type$MethodType, argtypes, restype, thrown, $nc(this->syms)->methodClass), accOwner));
		$var($JCDiagnostic$DiagnosticPosition, var$2, $nc(tree)->pos());
		$var($Symbol, var$3, static_cast<$Symbol*>(accessor));
		enterSynthetic(var$2, var$3, $($nc(accOwner)->members()));
		accessors->set(acode, accessor);
	}
	return accessor;
}

$JCTree$JCExpression* Lower::accessBase($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	return ((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)8)) != 0 ? access($($nc($($nc(this->make)->at($nc(pos)->getStartPosition())))->QualIdent($nc(sym)->owner))) : makeOwnerThis(pos, sym, true);
}

bool Lower::needsPrivateAccess($Symbol* sym) {
	if (this->target->hasNestmateAccess()) {
		return false;
	}
	if (((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)2)) == 0 || $equals($nc(sym)->owner, this->currentClass)) {
		return false;
	} else if (sym->name == $nc(this->names)->init && $nc(sym->owner)->isDirectlyOrIndirectlyLocal()) {
		sym->flags_field &= (uint64_t)~2;
		return false;
	} else {
		return true;
	}
}

bool Lower::needsProtectedAccess($Symbol* sym, $JCTree* tree) {
	if (this->disableProtectedAccessors) {
		return false;
	}
	bool var$0 = ((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)4)) == 0 || $nc($nc(sym)->owner)->owner == $nc(this->currentClass)->owner;
	if (!var$0) {
		var$0 = $nc(sym)->packge() == $nc(this->currentClass)->packge();
	}
	if (var$0) {
		return false;
	}
	if (!$nc(this->currentClass)->isSubClass($nc(sym)->owner, this->types)) {
		return true;
	}
	bool var$2 = ((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)8)) != 0;
	$init($JCTree$Tag);
	bool var$1 = var$2 || !$nc(tree)->hasTag($JCTree$Tag::SELECT);
	if (var$1 || $TreeInfo::name($nc(($cast($JCTree$JCFieldAccess, tree)))->selected) == $nc(this->names)->_super) {
		return false;
	}
	return !$nc($nc($nc($nc(($cast($JCTree$JCFieldAccess, tree)))->selected)->type)->tsym)->isSubClass(this->currentClass, this->types);
}

$Symbol$ClassSymbol* Lower::accessClass($Symbol* sym, bool protAccess, $JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	if (protAccess) {
		$var($Symbol, qualifier, nullptr);
		$var($Symbol$ClassSymbol, c, this->currentClass);
		$init($JCTree$Tag);
		bool var$0 = $nc(tree)->hasTag($JCTree$Tag::SELECT);
		if (var$0 && ((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)8)) == 0) {
			$assign(qualifier, $nc($nc($nc(($cast($JCTree$JCFieldAccess, tree)))->selected)->type)->tsym);
			while (!$nc(qualifier)->isSubClass(c, this->types)) {
				$assign(c, $nc($nc(c)->owner)->enclClass());
			}
			return c;
		} else {
			while (!$nc(c)->isSubClass(sym->owner, this->types)) {
				$assign(c, $nc(c->owner)->enclClass());
			}
		}
		return c;
	} else {
		return $nc($nc(sym)->owner)->enclClass();
	}
}

void Lower::addPrunedInfo($JCTree* tree) {
	$var($List, infoList, $cast($List, $nc(this->prunedTree)->get(this->currentClass)));
	$assign(infoList, (infoList == nullptr) ? $List::of(tree) : $nc(infoList)->prepend(tree));
	$nc(this->prunedTree)->put(this->currentClass, infoList);
}

$JCTree$JCExpression* Lower::access($Symbol* sym$renamed, $JCTree$JCExpression* tree$renamed, $JCTree$JCExpression* enclOp, bool refSuper) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, sym, sym$renamed);
	$var($JCTree$JCExpression, tree, tree$renamed);
	$init($Kinds$Kind);
	while ($nc(sym)->kind == $Kinds$Kind::VAR && $nc(sym->owner)->kind == $Kinds$Kind::MTH && $nc(sym->owner)->enclClass() != this->currentClass) {
		$var($Object, cv, $nc(($cast($Symbol$VarSymbol, sym)))->getConstValue());
		if (cv != nullptr) {
			$nc(this->make)->at($nc(tree)->pos$);
			return makeLit(sym->type, cv);
		}
		if (this->lambdaTranslationMap != nullptr && $nc(this->lambdaTranslationMap)->get(sym) != nullptr) {
			return $nc($($nc(this->make)->at($nc(tree)->pos$)))->Ident($cast($Symbol, $($nc(this->lambdaTranslationMap)->get(sym))));
		} else {
			$assign(sym, $cast($Symbol, $nc(this->proxies)->get(sym)));
			$Assert::check(sym != nullptr && ((int64_t)(sym->flags_field & (uint64_t)(int64_t)16)) != 0);
			$assign(tree, $nc($($nc(this->make)->at($nc(tree)->pos$)))->Ident(sym));
		}
	}
	$init($JCTree$Tag);
	$var($JCTree$JCExpression, base, ($nc(tree)->hasTag($JCTree$Tag::SELECT)) ? $nc(($cast($JCTree$JCFieldAccess, tree)))->selected : ($JCTree$JCExpression*)nullptr);
	$init($Lower$2);
	switch ($nc($Lower$2::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->get($nc(($nc(sym)->kind))->ordinal())) {
	case 3:
		{
			if ($nc(sym->owner)->kind != $Kinds$Kind::PCK) {
				$var($Name, flatname, $Convert::shortName($(sym->flatName())));
				while (true) {
					bool var$0 = base != nullptr && $TreeInfo::symbol(base) != nullptr;
					if (!(var$0 && $nc($($TreeInfo::symbol(base)))->kind != $Kinds$Kind::PCK)) {
						break;
					}
					{
						$assign(base, (base->hasTag($JCTree$Tag::SELECT)) ? $nc(($cast($JCTree$JCFieldAccess, base)))->selected : ($JCTree$JCExpression*)nullptr);
					}
				}
				if ($nc(tree)->hasTag($JCTree$Tag::IDENT)) {
					$set($nc($cast($JCTree$JCIdent, tree)), name, flatname);
				} else if (base == nullptr) {
					$assign(tree, $nc($($nc(this->make)->at(tree->pos$)))->Ident(sym));
					$set($nc($cast($JCTree$JCIdent, tree)), name, flatname);
				} else {
					$set($cast($JCTree$JCFieldAccess, tree), selected, base);
					$set($cast($JCTree$JCFieldAccess, tree), name, flatname);
				}
			}
			break;
		}
	case 2:
		{}
	case 1:
		{
			if ($nc(sym->owner)->kind == $Kinds$Kind::TYP) {
				bool var$1 = refSuper && !needsPrivateAccess(sym);
				bool protAccess = var$1 || needsProtectedAccess(sym, tree);
				bool accReq = protAccess || needsPrivateAccess(sym);
				bool baseReq = base == nullptr && !$equals(sym->owner, $nc(this->syms)->predefClass) && !sym->isMemberOf(this->currentClass, this->types);
				if (accReq || baseReq) {
					$nc(this->make)->at($nc(tree)->pos$);
					if (sym->kind == $Kinds$Kind::VAR) {
						$var($Object, cv, $nc(($cast($Symbol$VarSymbol, sym)))->getConstValue());
						if (cv != nullptr) {
							addPrunedInfo(tree);
							return makeLit(sym->type, cv);
						}
					}
					if (accReq) {
						$var($List, args, $List::nil());
						if (((int64_t)(sym->flags() & (uint64_t)(int64_t)8)) == 0) {
							if (base == nullptr) {
								$assign(base, makeOwnerThis($($nc(tree)->pos()), sym, true));
							}
							$assign(args, $nc(args)->prepend(base));
							$assign(base, nullptr);
						}
						$var($Symbol, access, accessSymbol(sym, tree, enclOp, protAccess, refSuper));
						$var($JCTree$JCExpression, receiver, $nc(this->make)->Select(base != nullptr ? base : $($nc(this->make)->QualIdent($nc(access)->owner)), access));
						return $nc(this->make)->App(receiver, args);
					} else if (baseReq) {
						return $nc($($nc($($nc(this->make)->at($nc(tree)->pos$)))->Select($(accessBase($($nc(tree)->pos()), sym)), sym)))->setType($nc(tree)->type);
					}
				}
			} else {
				if ($nc(sym->owner)->kind == $Kinds$Kind::MTH && this->lambdaTranslationMap != nullptr) {
					$var($Symbol, translatedSym, $cast($Symbol, $nc(this->lambdaTranslationMap)->get($(sym->baseSymbol()))));
					if (translatedSym != nullptr) {
						$assign(tree, $nc($($nc(this->make)->at($nc(tree)->pos$)))->Ident(translatedSym));
					}
				}
			}
		}
	}
	return tree;
}

$JCTree$JCExpression* Lower::access($JCTree$JCExpression* tree) {
	$var($Symbol, sym, $TreeInfo::symbol(tree));
	return sym == nullptr ? tree : access(sym, tree, nullptr, false);
}

$Symbol* Lower::accessConstructor($JCDiagnostic$DiagnosticPosition* pos, $Symbol* constr) {
	$useLocalCurrentObjectStackCache();
	if (needsPrivateAccess(constr)) {
		$var($Symbol$ClassSymbol, accOwner, $nc($nc(constr)->owner)->enclClass());
		$var($Symbol$MethodSymbol, aconstr, $cast($Symbol$MethodSymbol, $nc(this->accessConstrs)->get(constr)));
		if (aconstr == nullptr) {
			$var($List, argtypes, $nc(constr->type)->getParameterTypes());
			if (((int64_t)($nc(accOwner)->flags_field & (uint64_t)(int64_t)16384)) != 0) {
				$assign(argtypes, $nc($($nc(argtypes)->prepend($nc(this->syms)->intType)))->prepend($nc(this->syms)->stringType));
			}
			$var($List, var$0, $nc(argtypes)->append($($nc($(accessConstructorTag()))->erasure(this->types))));
			$var($Type, var$1, $nc(constr->type)->getReturnType());
			$assign(aconstr, $new($Symbol$MethodSymbol, 4096, $nc(this->names)->init, $$new($Type$MethodType, var$0, var$1, $($nc(constr->type)->getThrownTypes()), $nc(this->syms)->methodClass), accOwner));
			enterSynthetic(pos, aconstr, $($nc(accOwner)->members()));
			$nc(this->accessConstrs)->put(constr, aconstr);
			$nc(this->accessed)->append(constr);
		}
		return aconstr;
	} else {
		return constr;
	}
}

$Symbol$ClassSymbol* Lower::accessConstructorTag() {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ClassSymbol, topClass, $nc(this->currentClass)->outermostClass());
	$var($Symbol$ModuleSymbol, topModle, $nc($($nc(topClass)->packge()))->modle);
	for (int32_t i = 1;; ++i) {
		$var($String, var$1, $$str({""_s, $(topClass->getQualifiedName())}));
		$var($String, var$0, $$concat(var$1, $$str(this->target->syntheticNameChar())));
		$var($Name, flatname, $nc(this->names)->fromString($$concat(var$0, $$str(i))));
		$var($Symbol$ClassSymbol, ctag, $nc(this->chk)->getCompiled(topModle, flatname));
		if (ctag == nullptr) {
			$assign(ctag, $nc($(makeEmptyClass(8 | 4096, topClass)))->sym);
		} else if (!$nc(ctag)->isAnonymous()) {
			continue;
		}
		$set(this, accessConstrTags, $nc(this->accessConstrTags)->prepend(ctag));
		return ctag;
	}
}

void Lower::makeAccessible($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCClassDecl, cdef, classDef($($nc($nc(sym)->owner)->enclClass())));
	if (cdef == nullptr) {
		$Assert::error($$str({"class def not found: "_s, sym, " in "_s, $nc(sym)->owner}));
	}
	if ($nc(sym)->name == $nc(this->names)->init) {
		$set($nc(cdef), defs, $nc(cdef->defs)->prepend($(accessConstructorDef(cdef->pos$, sym, $cast($Symbol$MethodSymbol, $($nc(this->accessConstrs)->get(sym)))))));
	} else {
		$var($Symbol$MethodSymbolArray, accessors, $cast($Symbol$MethodSymbolArray, $nc(this->accessSyms)->get(sym)));
		$init($Symbol$OperatorSymbol$AccessCode);
		for (int32_t i = 0; i < $Symbol$OperatorSymbol$AccessCode::numberOfAccessCodes; ++i) {
			if ($nc(accessors)->get(i) != nullptr) {
				$set($nc(cdef), defs, $nc(cdef->defs)->prepend($(accessDef(cdef->pos$, sym, accessors->get(i), i))));
			}
		}
	}
}

$JCTree* Lower::accessDef(int32_t pos, $Symbol* vsym, $Symbol$MethodSymbol* accessor, int32_t acode) {
	$useLocalCurrentObjectStackCache();
	$set(this, currentClass, $nc($nc(vsym)->owner)->enclClass());
	$nc(this->make)->at(pos);
	$var($JCTree$JCMethodDecl, md, $nc(this->make)->MethodDef(accessor, nullptr));
	$var($Symbol, sym, $cast($Symbol, $nc(this->actualSymbols)->get(vsym)));
	if (sym == nullptr) {
		$assign(sym, vsym);
	}
	$var($JCTree$JCExpression, ref, nullptr);
	$var($List, args, nullptr);
	if (((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)8)) != 0) {
		$assign(ref, $nc(this->make)->Ident(sym));
		$assign(args, $nc(this->make)->Idents($nc(md)->params));
	} else {
		$var($JCTree$JCExpression, site, $nc(this->make)->Ident($cast($JCTree$JCVariableDecl, $nc($nc(md)->params)->head)));
		if (acode % 2 != 0) {
			$nc(site)->setType($($nc(this->types)->erasure($($nc(this->types)->supertype($nc($($nc(vsym->owner)->enclClass()))->type)))));
		}
		$assign(ref, $nc(this->make)->Select(site, sym));
		$assign(args, $nc(this->make)->Idents($nc($nc(md)->params)->tail));
	}
	$var($JCTree$JCStatement, stat, nullptr);
	$init($Kinds$Kind);
	if ($nc(sym)->kind == $Kinds$Kind::VAR) {
		int32_t acode1 = acode - ((int32_t)(acode & (uint32_t)1));
		$var($JCTree$JCExpression, expr, nullptr);
		$Symbol$OperatorSymbol$AccessCode* aCode = $Symbol$OperatorSymbol$AccessCode::getFromCode(acode1);
		$init($Lower$2);
		switch ($nc($Lower$2::$SwitchMap$com$sun$tools$javac$code$Symbol$OperatorSymbol$AccessCode)->get($nc((aCode))->ordinal())) {
		case 1:
			{
				$assign(expr, ref);
				break;
			}
		case 2:
			{
				$assign(expr, $nc(this->make)->Assign(ref, $cast($JCTree$JCExpression, $nc(args)->head)));
				break;
			}
		case 3:
			{}
		case 4:
			{}
		case 5:
			{}
		case 6:
			{
				$assign(expr, makeUnary(aCode->tag, ref));
				break;
			}
		default:
			{
				$init($JCTree$Tag);
				$assign(expr, $nc(this->make)->Assignop($(treeTag($(binaryAccessOperator(acode1, $JCTree$Tag::NO_TAG)))), ref, $cast($JCTree, $nc(args)->head)));
				$init($JCTree$Tag);
				$set($nc($cast($JCTree$JCAssignOp, expr)), operator$, binaryAccessOperator(acode1, $JCTree$Tag::NO_TAG));
			}
		}
		$assign(stat, $nc(this->make)->Return($($nc(expr)->setType(sym->type))));
	} else {
		$assign(stat, $nc(this->make)->Call($($nc(this->make)->App(ref, args))));
	}
	$set($nc(md), body, $nc(this->make)->Block(0, $($List::of(stat))));
	{
		$var($List, l, md->params);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$set($nc($cast($JCTree$JCVariableDecl, l->head)), vartype, access($nc(($cast($JCTree$JCVariableDecl, l->head)))->vartype));
		}
	}
	$set(md, restype, access(md->restype));
	{
		$var($List, l, md->thrown);
		for (; l->nonEmpty(); $assign(l, l->tail)) {
			$set(l, head, access($cast($JCTree$JCExpression, l->head)));
		}
	}
	return md;
}

$JCTree* Lower::accessConstructorDef(int32_t pos, $Symbol* constr, $Symbol$MethodSymbol* accessor) {
	$useLocalCurrentObjectStackCache();
	$nc(this->make)->at(pos);
	$var($JCTree$JCMethodDecl, md, $nc(this->make)->MethodDef(accessor, $($nc(accessor)->externalType(this->types)), nullptr));
	$var($JCTree$JCIdent, callee, $nc(this->make)->Ident($nc(this->names)->_this));
	$set($nc(callee), sym, constr);
	$set(callee, type, $nc(constr)->type);
	$set($nc(md), body, $nc(this->make)->Block(0, $($List::of($($nc(this->make)->Call($($nc(this->make)->App(callee, $($nc(this->make)->Idents($($nc($nc($($nc(md->params)->reverse()))->tail)->reverse())))))))))));
	return md;
}

$Name* Lower::proxyName($Name* name, int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($Name, proxyName, $nc(this->names)->fromString($$str({"val"_s, $$str(this->target->syntheticNameChar()), name})));
	if (index > 0) {
		$assign(proxyName, $nc(proxyName)->append($($nc(this->names)->fromString($$str({""_s, $$str(this->target->syntheticNameChar()), $$str(index)})))));
	}
	return proxyName;
}

$List* Lower::freevarDefs(int32_t pos, $List* freevars, $Symbol* owner) {
	return freevarDefs(pos, freevars, owner, 0);
}

$List* Lower::freevarDefs(int32_t pos, $List* freevars, $Symbol* owner, int64_t additionalFlags) {
	$useLocalCurrentObjectStackCache();
	int64_t flags = (16 | 4096) | additionalFlags;
	$var($List, defs, $List::nil());
	$var($Set, proxyNames, $new($HashSet));
	{
		$var($List, l, freevars);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$var($Symbol$VarSymbol, v, $cast($Symbol$VarSymbol, l->head));
			int32_t index = 0;
			$var($Name, proxyName, nullptr);
			do {
				$assign(proxyName, this->proxyName($nc(v)->name, index++));
			} while (!proxyNames->add(proxyName));
			$var($Symbol$VarSymbol, proxy, $new($Symbol$VarSymbol, flags, proxyName, $($nc(v)->erasure(this->types)), owner));
			$nc(this->proxies)->put(v, proxy);
			$var($JCTree$JCVariableDecl, vd, $nc($($nc(this->make)->at(pos)))->VarDef(proxy, nullptr));
			$set($nc(vd), vartype, access(vd->vartype));
			$assign(defs, $nc(defs)->prepend(vd));
		}
	}
	return defs;
}

$Name* Lower::outerThisName($Type* type, $Symbol* owner) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, $nc(type)->getEnclosingType());
	int32_t nestingLevel = 0;
	$init($TypeTag);
	while ($nc(t)->hasTag($TypeTag::CLASS)) {
		$assign(t, t->getEnclosingType());
		++nestingLevel;
	}
	$var($Name, result, $nc(this->names)->fromString($$str({"this"_s, $$str(this->target->syntheticNameChar()), $$str(nestingLevel)})));
	$init($Kinds$Kind);
	while ($nc(owner)->kind == $Kinds$Kind::TYP && $nc($($nc(($cast($Symbol$ClassSymbol, owner)))->members()))->findFirst(result) != nullptr) {
		$var($String, var$0, $($nc(result)->toString()));
		$assign(result, $nc(this->names)->fromString($$concat(var$0, $$str(this->target->syntheticNameChar()))));
	}
	return result;
}

$Symbol$VarSymbol* Lower::makeOuterThisVarSymbol($Symbol* owner, int64_t flags) {
	$useLocalCurrentObjectStackCache();
	$var($Type, target, $nc(this->types)->erasure($($nc($nc($($nc(owner)->enclClass()))->type)->getEnclosingType())));
	$var($Symbol$VarSymbol, outerThis, $new($Symbol$VarSymbol, flags, $(outerThisName(target, owner)), target, owner));
	$set(this, outerThisStack, $nc(this->outerThisStack)->prepend(outerThis));
	return outerThis;
}

$JCTree$JCVariableDecl* Lower::makeOuterThisVarDecl(int32_t pos, $Symbol$VarSymbol* sym) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCVariableDecl, vd, $nc($($nc(this->make)->at(pos)))->VarDef(sym, nullptr));
	$set($nc(vd), vartype, access(vd->vartype));
	return vd;
}

$JCTree$JCVariableDecl* Lower::outerThisDef(int32_t pos, $Symbol$MethodSymbol* owner) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ClassSymbol, c, $nc(owner)->enclClass());
	bool var$1 = owner->isConstructor();
	bool var$0 = (var$1 && owner->isAnonymous());
	if (!var$0) {
		bool var$4 = owner->isConstructor();
		bool var$3 = var$4 && $nc(c)->isInner();
		bool var$2 = var$3 && !c->isPrivate();
		var$0 = (var$2 && !c->isStatic());
	}
	bool isMandated = var$0;
	int64_t flags = (16 | (isMandated ? 32768 : 4096)) | (int64_t)0x0000000200000000;
	$var($Symbol$VarSymbol, outerThis, makeOuterThisVarSymbol(owner, flags));
	$set(owner, extraParams, $nc(owner->extraParams)->prepend(outerThis));
	return makeOuterThisVarDecl(pos, outerThis);
}

$JCTree$JCVariableDecl* Lower::outerThisDef(int32_t pos, $Symbol$ClassSymbol* owner) {
	$var($Symbol$VarSymbol, outerThis, makeOuterThisVarSymbol(owner, 16 | 4096));
	return makeOuterThisVarDecl(pos, outerThis);
}

$List* Lower::loadFreevars($JCDiagnostic$DiagnosticPosition* pos, $List* freevars) {
	$useLocalCurrentObjectStackCache();
	$var($List, args, $List::nil());
	{
		$var($List, l, freevars);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$assign(args, $nc(args)->prepend($(loadFreevar(pos, $cast($Symbol$VarSymbol, l->head)))));
		}
	}
	return args;
}

$JCTree$JCExpression* Lower::loadFreevar($JCDiagnostic$DiagnosticPosition* pos, $Symbol$VarSymbol* v) {
	$useLocalCurrentObjectStackCache();
	return access(v, $($nc($($nc(this->make)->at(pos)))->Ident(static_cast<$Symbol*>(v))), nullptr, false);
}

$JCTree$JCExpression* Lower::makeThis($JCDiagnostic$DiagnosticPosition* pos, $Symbol$TypeSymbol* c) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this->currentClass, c)) {
		return $nc($($nc(this->make)->at(pos)))->This($($nc(c)->erasure(this->types)));
	} else {
		return makeOuterThis(pos, c);
	}
}

$JCTree* Lower::makeTwrTry($JCTree$JCTry* tree) {
	$useLocalCurrentObjectStackCache();
	make_at($($nc(tree)->pos()));
	$set(this, twrVars, $nc(this->twrVars)->dup());
	$var($JCTree$JCBlock, twrBlock, makeTwrBlock($nc(tree)->resources, tree->body, 0));
	if ($nc($nc(tree)->catchers)->isEmpty() && tree->finalizer == nullptr) {
		$set(this, result, translate(static_cast<$JCTree*>(twrBlock)));
	} else {
		$set(this, result, translate($(static_cast<$JCTree*>($nc(this->make)->Try(twrBlock, tree->catchers, tree->finalizer)))));
	}
	$set(this, twrVars, $nc(this->twrVars)->leave());
	return this->result;
}

$JCTree$JCBlock* Lower::makeTwrBlock($List* resources, $JCTree$JCBlock* block, int32_t depth) {
	$useLocalCurrentObjectStackCache();
	if ($nc(resources)->isEmpty()) {
		return block;
	}
	$var($ListBuffer, stats, $new($ListBuffer));
	$var($JCTree, resource, $cast($JCTree, $nc(resources)->head));
	$var($JCTree$JCExpression, resourceUse, nullptr);
	bool resourceNonNull = false;
	{
		$var($JCTree$JCVariableDecl, variableDecl, nullptr);
		bool var$0 = $instanceOf($JCTree$JCVariableDecl, resource);
		if (var$0) {
			$assign(variableDecl, $cast($JCTree$JCVariableDecl, resource));
			var$0 = true;
		}
		if (var$0) {
			$assign(resourceUse, $nc($($nc(this->make)->Ident(static_cast<$Symbol*>($nc(variableDecl)->sym))))->setType($nc(resource)->type));
			$init($JCTree$Tag);
			resourceNonNull = $nc(variableDecl)->init != nullptr && $nc($($TreeInfo::skipParens(variableDecl->init)))->hasTag($JCTree$Tag::NEWCLASS);
			stats->add(variableDecl);
		} else {
			$Assert::check($instanceOf($JCTree$JCExpression, resource));
			$var($Name, var$1, makeSyntheticName($($nc(this->names)->fromString($$str({"twrVar"_s, $$str(depth)}))), this->twrVars));
			$init($TypeTag);
			$var($Symbol$VarSymbol, syntheticTwrVar, $new($Symbol$VarSymbol, 4096 | 16, var$1, ($nc($nc(resource)->type)->hasTag($TypeTag::BOT)) ? $nc(this->syms)->autoCloseableType : $nc(resource)->type, this->currentMethodSym));
			$nc(this->twrVars)->enter(syntheticTwrVar);
			$var($JCTree$JCVariableDecl, syntheticTwrVarDecl, $nc(this->make)->VarDef(syntheticTwrVar, $cast($JCTree$JCExpression, resource)));
			$assign(resourceUse, static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(syntheticTwrVar))));
			resourceNonNull = false;
			stats->add(syntheticTwrVarDecl);
		}
	}
	int32_t oldPos = $nc(this->make)->pos;
	$nc(this->make)->at($TreeInfo::endPos(block));
	$var($JCTree$JCStatement, bodyCloseStatement, makeResourceCloseInvocation(resourceUse));
	if (!resourceNonNull) {
		$assign(bodyCloseStatement, $nc(this->make)->If($(makeNonNullCheck(resourceUse)), bodyCloseStatement, nullptr));
	}
	$var($JCTree$JCBlock, finallyClause, $nc(this->make)->Block(131072, $($List::of(bodyCloseStatement))));
	$nc(this->make)->at(oldPos);
	$var($Symbol$VarSymbol, primaryException, $new($Symbol$VarSymbol, 16 | 4096, $($nc(this->names)->fromString($$str({"t"_s, $$str(this->target->syntheticNameChar())}))), $nc(this->syms)->throwableType, this->currentMethodSym));
	$var($JCTree$JCVariableDecl, primaryExceptionDecl, $nc(this->make)->VarDef(primaryException, nullptr));
	$var($Symbol$VarSymbol, suppressedException, $new($Symbol$VarSymbol, 4096, $($nc(this->make)->paramName(2)), $nc(this->syms)->throwableType, this->currentMethodSym));
	$var($JCTree$JCExpression, var$2, static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(primaryException))));
	$var($Name, var$3, $nc(this->names)->addSuppressed);
	$var($JCTree$JCStatement, addSuppressedStatement, $nc(this->make)->Exec($(makeCall(var$2, var$3, $($List::of($($nc(this->make)->Ident(static_cast<$Symbol*>(suppressedException)))))))));
	$var($JCTree$JCBlock, closeResourceTryBlock, $nc(this->make)->Block(0, $($List::of($(makeResourceCloseInvocation(resourceUse))))));
	$var($JCTree$JCVariableDecl, catchSuppressedDecl, $nc(this->make)->VarDef(suppressedException, nullptr));
	$var($JCTree$JCBlock, catchSuppressedBlock, $nc(this->make)->Block(0, $($List::of(addSuppressedStatement))));
	$var($List, catchSuppressedClauses, $List::of($($nc(this->make)->Catch(catchSuppressedDecl, catchSuppressedBlock))));
	$var($JCTree$JCTry, closeResourceTry, $nc(this->make)->Try(closeResourceTryBlock, catchSuppressedClauses, nullptr));
	$nc(closeResourceTry)->finallyCanCompleteNormally = true;
	$var($JCTree$JCStatement, exceptionalCloseStatement, closeResourceTry);
	if (!resourceNonNull) {
		$assign(exceptionalCloseStatement, $nc(this->make)->If($(makeNonNullCheck(resourceUse)), exceptionalCloseStatement, nullptr));
	}
	$var($JCTree$JCStatement, exceptionalRethrow, $nc(this->make)->Throw($($nc(this->make)->Ident(static_cast<$Symbol*>(primaryException)))));
	$var($JCTree$JCBlock, exceptionalCloseBlock, $nc(this->make)->Block(0, $($List::of(exceptionalCloseStatement, exceptionalRethrow))));
	$var($JCTree$JCCatch, exceptionalCatchClause, $nc(this->make)->Catch(primaryExceptionDecl, exceptionalCloseBlock));
	$var($JCTree$JCBlock, var$4, makeTwrBlock(resources->tail, block, depth + 1));
	$var($JCTree$JCTry, outerTry, $nc(this->make)->Try(var$4, $($List::of(exceptionalCatchClause)), finallyClause));
	$nc(outerTry)->finallyCanCompleteNormally = true;
	stats->add(outerTry);
	$var($JCTree$JCBlock, newBlock, $nc(this->make)->Block(0, $(stats->toList())));
	return newBlock;
}

$JCTree$JCStatement* Lower::makeResourceCloseInvocation($JCTree$JCExpression* resource$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, resource, resource$renamed);
	if ($nc(this->types)->asSuper($nc(resource)->type, $nc($nc(this->syms)->autoCloseableType)->tsym) == nullptr) {
		$assign(resource, convert(resource, $nc(this->syms)->autoCloseableType));
	}
	$var($JCTree$JCExpression, resourceClose, makeCall(resource, $nc(this->names)->close, $($List::nil())));
	return $nc(this->make)->Exec(resourceClose);
}

$JCTree$JCExpression* Lower::makeNonNullCheck($JCTree$JCExpression* expression) {
	$init($JCTree$Tag);
	return makeBinary($JCTree$Tag::NE, expression, $(makeNull()));
}

$JCTree$JCExpression* Lower::makeOuterThis($JCDiagnostic$DiagnosticPosition* pos, $Symbol$TypeSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$var($List, ots, this->outerThisStack);
	if ($nc(ots)->isEmpty()) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::NoEnclInstanceOfTypeInScope(c)));
		$Assert::error();
		return makeNull();
	}
	$var($Symbol$VarSymbol, ot, $cast($Symbol$VarSymbol, $nc(ots)->head));
	$var($JCTree$JCExpression, tree, access($($nc($($nc(this->make)->at(pos)))->Ident(static_cast<$Symbol*>(ot)))));
	$var($Symbol$TypeSymbol, otc, $nc($nc(ot)->type)->tsym);
	while (otc != c) {
		do {
			$assign(ots, ots->tail);
			if ($nc(ots)->isEmpty()) {
				$nc(this->log)->error(pos, $($CompilerProperties$Errors::NoEnclInstanceOfTypeInScope(c)));
				$Assert::error();
				return tree;
			}
			$assign(ot, $cast($Symbol$VarSymbol, $nc(ots)->head));
		} while (!$equals(ot->owner, otc));
		$init($Kinds$Kind);
		if ($nc($nc(otc)->owner)->kind != $Kinds$Kind::PCK && !otc->hasOuterInstance()) {
			$nc(this->chk)->earlyRefError(pos, c);
			$Assert::error();
			return makeNull();
		}
		$assign(tree, access($($nc($($nc(this->make)->at(pos)))->Select(tree, static_cast<$Symbol*>(ot)))));
		$assign(otc, $nc(ot->type)->tsym);
	}
	return tree;
}

$JCTree$JCExpression* Lower::makeOwnerThis($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym, bool preciseMatch) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, c, $nc(sym)->owner);
	if (preciseMatch ? sym->isMemberOf(this->currentClass, this->types) : $nc(this->currentClass)->isSubClass(sym->owner, this->types)) {
		return $nc($($nc(this->make)->at(pos)))->This($($nc(c)->erasure(this->types)));
	} else {
		return makeOwnerThisN(pos, sym, preciseMatch);
	}
}

$JCTree$JCExpression* Lower::makeOwnerThisN($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym, bool preciseMatch) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, c, $nc(sym)->owner);
	$var($List, ots, this->outerThisStack);
	if ($nc(ots)->isEmpty()) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::NoEnclInstanceOfTypeInScope(c)));
		$Assert::error();
		return makeNull();
	}
	$var($Symbol$VarSymbol, ot, $cast($Symbol$VarSymbol, $nc(ots)->head));
	$var($JCTree$JCExpression, tree, access($($nc($($nc(this->make)->at(pos)))->Ident(static_cast<$Symbol*>(ot)))));
	$var($Symbol$TypeSymbol, otc, $nc($nc(ot)->type)->tsym);
	while (!(preciseMatch ? sym->isMemberOf(otc, this->types) : $nc(otc)->isSubClass(sym->owner, this->types))) {
		do {
			$assign(ots, ots->tail);
			if ($nc(ots)->isEmpty()) {
				$nc(this->log)->error(pos, $($CompilerProperties$Errors::NoEnclInstanceOfTypeInScope(c)));
				$Assert::error();
				return tree;
			}
			$assign(ot, $cast($Symbol$VarSymbol, $nc(ots)->head));
		} while (!$equals(ot->owner, otc));
		$assign(tree, access($($nc($($nc(this->make)->at(pos)))->Select(tree, static_cast<$Symbol*>(ot)))));
		$assign(otc, $nc(ot->type)->tsym);
	}
	return tree;
}

$JCTree$JCStatement* Lower::initField(int32_t pos, $Symbol* rhs, $Symbol* lhs) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	$Assert::check($nc($nc(rhs)->owner)->kind == $Kinds$Kind::MTH);
	$Assert::check($nc($nc(rhs)->owner)->owner == $nc(lhs)->owner);
	$nc(this->make)->at(pos);
	$var($JCTree$JCExpression, var$0, $nc(this->make)->Select($($nc(this->make)->This($($nc($nc(lhs)->owner)->erasure(this->types)))), lhs));
	return $nc(this->make)->Exec($($nc($($nc(this->make)->Assign(var$0, $($nc(this->make)->Ident(rhs)))))->setType($($nc(lhs)->erasure(this->types)))));
}

$JCTree$JCStatement* Lower::initOuterThis(int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$VarSymbol, rhs, $cast($Symbol$VarSymbol, $nc(this->outerThisStack)->head));
	$init($Kinds$Kind);
	$Assert::check($nc($nc(rhs)->owner)->kind == $Kinds$Kind::MTH);
	$var($Symbol$VarSymbol, lhs, $cast($Symbol$VarSymbol, $nc($nc(this->outerThisStack)->tail)->head));
	$Assert::check($nc($nc(rhs)->owner)->owner == $nc(lhs)->owner);
	$nc(this->make)->at(pos);
	$var($JCTree$JCExpression, var$0, $nc(this->make)->Select($($nc(this->make)->This($($nc($nc(lhs)->owner)->erasure(this->types)))), static_cast<$Symbol*>(lhs)));
	return $nc(this->make)->Exec($($nc($($nc(this->make)->Assign(var$0, $($nc(this->make)->Ident(static_cast<$Symbol*>(rhs))))))->setType($($nc(lhs)->erasure(this->types)))));
}

$Symbol$ClassSymbol* Lower::outerCacheClass() {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ClassSymbol, clazz, $nc(this->outermostClassDef)->sym);
	$var($Scope, s, $nc(clazz)->members());
	{
		$init($Scope$LookupKind);
		$var($Iterator, i$, $nc($($nc(s)->getSymbols($Scope$LookupKind::NON_RECURSIVE)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			$init($Kinds$Kind);
			if ($nc(sym)->kind == $Kinds$Kind::TYP && sym->name == $nc(this->names)->empty && ((int64_t)(sym->flags() & (uint64_t)(int64_t)512)) == 0) {
				return $cast($Symbol$ClassSymbol, sym);
			}
		}
	}
	return $nc($(makeEmptyClass(8 | 4096, clazz)))->sym;
}

$JCTree$JCMethodInvocation* Lower::makeCall($JCTree$JCExpression* left, $Name* name, $List* args) {
	$useLocalCurrentObjectStackCache();
	$Assert::checkNonNull($nc(left)->type);
	$var($Symbol, funcsym, lookupMethod(this->make_pos, name, $nc(left)->type, $($TreeInfo::types(args))));
	return $nc(this->make)->App($($nc(this->make)->Select(left, funcsym)), args);
}

$JCTree$JCExpression* Lower::classOf($JCTree* clazz) {
	return classOfType($nc(clazz)->type, $(clazz->pos()));
}

$JCTree$JCExpression* Lower::classOfType($Type* type, $JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalCurrentObjectStackCache();
	$init($Lower$2);
	{
		$var($Symbol$ClassSymbol, c, nullptr)
		$var($Symbol, typeSym, nullptr)
		$var($Symbol$VarSymbol, sym, nullptr)
		switch ($nc($Lower$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(type)->getTag())))->ordinal())) {
		case 1:
			{}
		case 2:
			{}
		case 3:
			{}
		case 4:
			{}
		case 5:
			{}
		case 6:
			{}
		case 7:
			{}
		case 8:
			{}
		case 9:
			{
				$assign(c, $nc(this->types)->boxedClass(type));
				$init($Kinds$KindSelector);
				$assign(typeSym, $nc(this->rs)->accessBase($($nc(this->rs)->findIdentInType(pos, this->attrEnv, $nc(c)->type, $nc(this->names)->TYPE, $Kinds$KindSelector::VAR)), pos, $nc(c)->type, $nc(this->names)->TYPE, true));
				$init($Kinds$Kind);
				if ($nc(typeSym)->kind == $Kinds$Kind::VAR) {
					$nc(($cast($Symbol$VarSymbol, typeSym)))->getConstValue();
				}
				return $nc(this->make)->QualIdent(typeSym);
			}
		case 10:
			{}
		case 11:
			{
				$assign(sym, $new($Symbol$VarSymbol, (8 | 1) | 16, $nc(this->names)->_class, $nc(this->syms)->classType, type->tsym));
				return $nc($(make_at(pos)))->Select($($nc(this->make)->Type(type)), static_cast<$Symbol*>(sym));
			}
		default:
			{
				$throwNew($AssertionError);
			}
		}
	}
}

$Symbol$ClassSymbol* Lower::assertionsDisabledClass() {
	if (this->assertionsDisabledClassCache != nullptr) {
		return this->assertionsDisabledClassCache;
	}
	$set(this, assertionsDisabledClassCache, $nc($(makeEmptyClass(8 | 4096, $nc(this->outermostClassDef)->sym)))->sym);
	return this->assertionsDisabledClassCache;
}

$JCTree$JCExpression* Lower::assertFlagTest($JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ClassSymbol, outermostClass, $nc(this->outermostClassDef)->sym);
	$var($Symbol$ClassSymbol, container, !$nc(this->currentClass)->isInterface() ? this->currentClass : assertionsDisabledClass());
	$var($Symbol$VarSymbol, assertDisabledSym, $cast($Symbol$VarSymbol, lookupSynthetic(this->dollarAssertionsDisabled, $($nc(container)->members()))));
	if (assertDisabledSym == nullptr) {
		$assign(assertDisabledSym, $new($Symbol$VarSymbol, (8 | 16) | 4096, this->dollarAssertionsDisabled, $nc(this->syms)->booleanType, container));
		enterSynthetic(pos, assertDisabledSym, $($nc(container)->members()));
		$var($JCDiagnostic$DiagnosticPosition, var$0, pos);
		$var($Name, var$1, $nc(this->names)->desiredAssertionStatus);
		$var($Type, var$2, $nc(this->types)->erasure($nc(this->syms)->classType));
		$var($Symbol, desiredAssertionStatusSym, lookupMethod(var$0, var$1, var$2, $($List::nil())));
		$var($JCTree$JCClassDecl, containerDef, classDef(container));
		make_at($($nc(containerDef)->pos()));
		$init($JCTree$Tag);
		$var($Type, var$3, $nc(this->types)->erasure($nc(outermostClass)->type));
		$var($JCTree$JCExpression, notStatus, makeUnary($JCTree$Tag::NOT, $($nc(this->make)->App($($nc(this->make)->Select($(classOfType(var$3, $($nc(containerDef)->pos()))), desiredAssertionStatusSym))))));
		$var($JCTree$JCVariableDecl, assertDisabledDef, $nc(this->make)->VarDef(assertDisabledSym, notStatus));
		$set($nc(containerDef), defs, $nc(containerDef->defs)->prepend(assertDisabledDef));
		if ($nc(this->currentClass)->isInterface()) {
			$var($JCTree$JCClassDecl, currentClassDef, classDef(this->currentClass));
			make_at($($nc(currentClassDef)->pos()));
			$var($JCTree$JCExpression, var$4, $nc(this->make)->QualIdent(assertDisabledSym));
			$var($JCTree$JCStatement, dummy, $nc(this->make)->If(var$4, $($nc(this->make)->Skip()), nullptr));
			$var($JCTree$JCBlock, clinit, $nc(this->make)->Block(8, $($List::of(dummy))));
			$set($nc(currentClassDef), defs, $nc(currentClassDef->defs)->prepend(clinit));
		}
	}
	make_at(pos);
	$init($JCTree$Tag);
	return makeUnary($JCTree$Tag::NOT, $($nc(this->make)->Ident(static_cast<$Symbol*>(assertDisabledSym))));
}

$JCTree$JCExpression* Lower::abstractRval($JCTree$JCExpression* rval$renamed, $Type* type, $Lower$TreeBuilder* builder) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, rval, rval$renamed);
	$assign(rval, $TreeInfo::skipParens(rval));
	$init($Lower$2);
	{
		$var($JCTree$JCIdent, id, nullptr)
		switch ($nc($Lower$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(rval)->getTag())))->ordinal())) {
		case 1:
			{
				return $nc(builder)->build(rval);
			}
		case 2:
			{
				$assign(id, $cast($JCTree$JCIdent, rval));
				$init($Kinds$Kind);
				if (((int64_t)($nc($nc(id)->sym)->flags() & (uint64_t)(int64_t)16)) != 0 && $nc($nc(id->sym)->owner)->kind == $Kinds$Kind::MTH) {
					return $nc(builder)->build(rval);
				}
			}
		}
	}
	$var($Name, name, $TreeInfo::name(rval));
	if (name == $nc(this->names)->_super || name == $nc(this->names)->_this) {
		return $nc(builder)->build(rval);
	}
	$var($String, var$0, $$str({$$str(this->target->syntheticNameChar()), ""_s}));
	$var($Symbol$VarSymbol, var, $new($Symbol$VarSymbol, 16 | 4096, $($nc(this->names)->fromString($$concat(var$0, $$str($of(rval)->hashCode())))), type, this->currentMethodSym));
	$assign(rval, convert(rval, type));
	$var($JCTree$JCVariableDecl, def, $nc(this->make)->VarDef(var, rval));
	$var($JCTree$JCExpression, built, $nc(builder)->build($($nc(this->make)->Ident(static_cast<$Symbol*>(var)))));
	$var($JCTree$JCExpression, res, $nc(this->make)->LetExpr(def, built));
	$set($nc(res), type, $nc(built)->type);
	return res;
}

$JCTree$JCExpression* Lower::abstractRval($JCTree$JCExpression* rval, $Lower$TreeBuilder* builder) {
	return abstractRval(rval, $nc(rval)->type, builder);
}

$JCTree$JCExpression* Lower::abstractLval($JCTree$JCExpression* lval$renamed, $Lower$TreeBuilder* builder) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, lval, lval$renamed);
	$assign(lval, $TreeInfo::skipParens(lval));
	$init($Lower$2);
	switch ($nc($Lower$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(lval)->getTag())))->ordinal())) {
	case 2:
		{
			return $nc(builder)->build(lval);
		}
	case 3:
		{
			{
				$var($JCTree$JCFieldAccess, s, $cast($JCTree$JCFieldAccess, lval));
				$var($Symbol, lid, $TreeInfo::symbol(s->selected));
				$init($Kinds$Kind);
				if (lid != nullptr && lid->kind == $Kinds$Kind::TYP) {
					return $nc(builder)->build(lval);
				}
				return abstractRval(s->selected, static_cast<$Lower$TreeBuilder*>($$new(Lower$$Lambda$lambda$abstractLval$1$1, this, builder, s)));
			}
		}
	case 4:
		{
			{
				$var($JCTree$JCArrayAccess, i, $cast($JCTree$JCArrayAccess, lval));
				return abstractRval(i->indexed, static_cast<$Lower$TreeBuilder*>($$new(Lower$$Lambda$lambda$abstractLval$3$2, this, i, builder)));
			}
		}
	case 5:
		{
			{
				return abstractLval($nc(($cast($JCTree$JCTypeCast, lval)))->expr, builder);
			}
		}
	}
	$throwNew($AssertionError, $of(lval));
}

$JCTree$JCExpression* Lower::makeComma($JCTree$JCExpression* expr1, $JCTree$JCExpression* expr2) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, res, $nc(this->make)->LetExpr($($List::of($($nc(this->make)->Exec(expr1)))), expr2));
	$set($nc(res), type, $nc(expr2)->type);
	return res;
}

$JCTree* Lower::translate($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	if (tree == nullptr) {
		return nullptr;
	} else {
		make_at($($nc(tree)->pos()));
		$var($JCTree, result, $TreeTranslator::translate(tree));
		if (this->endPosTable != nullptr && result != tree) {
			$nc(this->endPosTable)->replaceTree(tree, result);
		}
		return result;
	}
}

$JCTree$JCExpression* Lower::translate($JCTree$JCExpression* tree, $Type* type) {
	return (tree == nullptr) ? ($JCTree$JCExpression*)nullptr : boxIfNeeded($cast($JCTree$JCExpression, $(translate(static_cast<$JCTree*>(tree)))), type);
}

$JCTree* Lower::translate($JCTree* tree, $JCTree$JCExpression* enclOp) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, prevEnclOp, this->enclOp);
	$set(this, enclOp, enclOp);
	$var($JCTree, res, translate(tree));
	$set(this, enclOp, prevEnclOp);
	return res;
}

$List* Lower::translate($List* trees, $Type* type) {
	if (trees == nullptr) {
		return nullptr;
	}
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$set(l, head, translate($cast($JCTree$JCExpression, l->head), type));
		}
	}
	return trees;
}

void Lower::visitPackageDef($JCTree$JCPackageDecl* tree) {
	$useLocalCurrentObjectStackCache();
	if (!needPackageInfoClass(tree)) {
		return;
	}
	int64_t flags = $Flags::ABSTRACT | $Flags::INTERFACE;
	flags = flags | $Flags::SYNTHETIC;
	$var($Symbol$ClassSymbol, c, $nc($nc(tree)->packge)->package_info);
	$nc(c)->setAttributes(tree->packge);
	c->flags_field |= flags;
	$var($Type$ClassType, ctype, $cast($Type$ClassType, c->type));
	$set($nc(ctype), supertype_field, $nc(this->syms)->objectType);
	$set(ctype, interfaces_field, $List::nil());
	createInfoClass(tree->annotations, c);
}

bool Lower::needPackageInfoClass($JCTree$JCPackageDecl* pd) {
	$useLocalCurrentObjectStackCache();
	$init($Lower$2);
	switch ($nc($Lower$2::$SwitchMap$com$sun$tools$javac$main$Option$PkgInfo)->get((this->pkginfoOpt)->ordinal())) {
	case 1:
		{
			return true;
		}
	case 2:
		{
			return $nc($($cast($List, $nc(pd)->getAnnotations())))->nonEmpty();
		}
	case 3:
		{
			{
				$var($Iterator, i$, $nc($($nc($nc(pd)->packge)->getDeclarationAttributes()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Attribute$Compound, a, $cast($Attribute$Compound, i$->next()));
					{
						$Attribute$RetentionPolicy* p = $nc(this->types)->getRetention(a);
						$init($Attribute$RetentionPolicy);
						if (p != $Attribute$RetentionPolicy::SOURCE) {
							return true;
						}
					}
				}
			}
			return false;
		}
	}
	$throwNew($AssertionError);
}

void Lower::visitModuleDef($JCTree$JCModuleDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ModuleSymbol, msym, $nc(tree)->sym);
	$var($Symbol$ClassSymbol, c, $nc(msym)->module_info);
	$nc(c)->setAttributes(msym);
	c->flags_field |= $Flags::MODULE;
	createInfoClass($($List::nil()), $nc(tree->sym)->module_info);
}

void Lower::createInfoClass($List* annots, $Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	int64_t flags = $Flags::ABSTRACT | $Flags::INTERFACE;
	$var($JCTree$JCModifiers, var$0, $nc(this->make)->Modifiers(flags, annots));
	$var($Name, var$1, $nc(c)->name);
	$var($List, var$2, $List::nil());
	$var($List, var$3, $List::nil());
	$var($JCTree$JCClassDecl, infoClass, $nc(this->make)->ClassDef(var$0, var$1, var$2, nullptr, var$3, $($List::nil())));
	$set($nc(infoClass), sym, c);
	$nc(this->translated)->append(infoClass);
}

void Lower::visitClassDef($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Env, prevEnv, this->attrEnv);
	$var($Symbol$ClassSymbol, currentClassPrev, this->currentClass);
	$var($Symbol$MethodSymbol, currentMethodSymPrev, this->currentMethodSym);
	$set(this, currentClass, $nc(tree)->sym);
	$set(this, currentMethodSym, nullptr);
	$set(this, attrEnv, $nc(this->typeEnvs)->remove(this->currentClass));
	if (this->attrEnv == nullptr) {
		$set(this, attrEnv, prevEnv);
	}
	$nc(this->classdefs)->put(this->currentClass, tree);
	$var($Map, prevProxies, this->proxies);
	$set(this, proxies, $new($HashMap, this->proxies));
	$var($List, prevOuterThisStack, this->outerThisStack);
	if (((int64_t)($nc(tree->mods)->flags & (uint64_t)(int64_t)16384)) != 0 && ((int64_t)($nc($nc($($nc(this->types)->supertype($nc(this->currentClass)->type)))->tsym)->flags() & (uint64_t)(int64_t)16384)) == 0) {
		visitEnumDef(tree);
	}
	if (((int64_t)($nc(tree->mods)->flags & (uint64_t)(int64_t)0x2000000000000000)) != 0) {
		visitRecordDef(tree);
	}
	$var($JCTree$JCVariableDecl, otdef, nullptr);
	if ($nc(this->currentClass)->hasOuterInstance()) {
		$assign(otdef, outerThisDef(tree->pos$, this->currentClass));
	}
	$var($List, fvdefs, freevarDefs(tree->pos$, $(freevars(this->currentClass)), this->currentClass));
	$set(tree, extending, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->extending))));
	$set(tree, implementing, translate(tree->implementing));
	if ($nc(this->currentClass)->isDirectlyOrIndirectlyLocal()) {
		$var($Symbol$ClassSymbol, encl, $nc($nc(this->currentClass)->owner)->enclClass());
		if ($nc(encl)->trans_local == nullptr) {
			$set(encl, trans_local, $List::nil());
		}
		$set($nc(encl), trans_local, $nc(encl->trans_local)->prepend(this->currentClass));
	}
	$var($List, seen, $List::nil());
	while (tree->defs != seen) {
		$var($List, unseen, tree->defs);
		{
			$var($List, l, unseen);
			for (; $nc(l)->nonEmpty() && l != seen; $assign(l, $nc(l)->tail)) {
				$var($JCTree, outermostMemberDefPrev, this->outermostMemberDef);
				if (outermostMemberDefPrev == nullptr) {
					$set(this, outermostMemberDef, $cast($JCTree, l->head));
				}
				$set(l, head, translate($cast($JCTree, l->head)));
				$set(this, outermostMemberDef, outermostMemberDefPrev);
			}
		}
		$assign(seen, unseen);
	}
	if (((int64_t)($nc(tree->mods)->flags & (uint64_t)(int64_t)4)) != 0) {
		$nc(tree->mods)->flags |= 1;
	}
	$nc(tree->mods)->flags &= (uint64_t)32273;
	$set(tree, name, $Convert::shortName($($nc(this->currentClass)->flatName())));
	{
		$var($List, l, fvdefs);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$set(tree, defs, $nc(tree->defs)->prepend($cast($JCTree, l->head)));
			$var($JCDiagnostic$DiagnosticPosition, var$0, tree->pos());
			$var($Symbol, var$1, static_cast<$Symbol*>($nc(($cast($JCTree$JCVariableDecl, l->head)))->sym));
			enterSynthetic(var$0, var$1, $($nc(this->currentClass)->members()));
		}
	}
	if ($nc(this->currentClass)->hasOuterInstance()) {
		$set(tree, defs, $nc(tree->defs)->prepend(otdef));
		$var($JCDiagnostic$DiagnosticPosition, var$2, tree->pos());
		$var($Symbol, var$3, static_cast<$Symbol*>($nc(otdef)->sym));
		enterSynthetic(var$2, var$3, $($nc(this->currentClass)->members()));
	}
	$set(this, proxies, prevProxies);
	$set(this, outerThisStack, prevOuterThisStack);
	$nc(this->translated)->append(tree);
	$set(this, attrEnv, prevEnv);
	$set(this, currentClass, currentClassPrev);
	$set(this, currentMethodSym, currentMethodSymPrev);
	$set(this, result, $nc($(make_at($(tree->pos()))))->Block(4096, $($List::nil())));
}

$List* Lower::generateMandatedAccessors($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($List, fields, $TreeInfo::recordFields(tree));
	return $cast($List, $nc($($nc($($nc($($nc($($nc($nc(tree)->sym)->getRecordComponents()))->stream()))->filter(static_cast<$Predicate*>($$new(Lower$$Lambda$lambda$generateMandatedAccessors$4$3)))))->map(static_cast<$Function*>($$new(Lower$$Lambda$lambda$generateMandatedAccessors$6$4, this, fields, tree)))))->collect($($List::collector())));
}

void Lower::visitEnumDef($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	make_at($($nc(tree)->pos()));
	if ($nc(tree)->extending == nullptr) {
		$set(tree, extending, $nc(this->make)->Type($($nc(this->types)->supertype(tree->type))));
	}
	$var($JCTree$JCExpression, e_class, $nc($(classOfType($nc($nc(tree)->sym)->type, $(tree->pos()))))->setType($($nc(this->types)->erasure($nc(this->syms)->classType))));
	int32_t nextOrdinal = 0;
	$var($ListBuffer, values, $new($ListBuffer));
	$var($ListBuffer, enumDefs, $new($ListBuffer));
	$var($ListBuffer, otherDefs, $new($ListBuffer));
	{
		$var($List, defs, $nc(tree)->defs);
		for (; $nc(defs)->nonEmpty(); $assign(defs, $nc(defs)->tail)) {
			$init($JCTree$Tag);
			if ($nc(($cast($JCTree, defs->head)))->hasTag($JCTree$Tag::VARDEF) && ((int64_t)($nc($nc(($cast($JCTree$JCVariableDecl, defs->head)))->mods)->flags & (uint64_t)(int64_t)16384)) != 0) {
				$var($JCTree$JCVariableDecl, var, $cast($JCTree$JCVariableDecl, defs->head));
				visitEnumConstantDef(var, nextOrdinal++);
				values->append($($nc(this->make)->QualIdent($nc(var)->sym)));
				enumDefs->append(var);
			} else {
				otherDefs->append($cast($JCTree, defs->head));
			}
		}
	}
	$var($Name, valuesName, syntheticName(tree, "VALUES"_s));
	$var($Type, arrayType, $new($Type$ArrayType, $($nc(this->types)->erasure(tree->type)), $nc(this->syms)->arrayClass));
	$var($Symbol$VarSymbol, valuesVar, $new($Symbol$VarSymbol, ((2 | 16) | 8) | 4096, valuesName, arrayType, $nc(tree->type)->tsym));
	$var($JCTree$JCExpression, var$0, $nc(this->make)->Type($($nc(this->types)->erasure(tree->type))));
	$var($List, var$1, $List::nil());
	$var($JCTree$JCNewArray, newArray, $nc(this->make)->NewArray(var$0, var$1, $(values->toList())));
	$set($nc(newArray), type, arrayType);
	$var($Name, var$2, syntheticName(tree, "values"_s));
	$var($List, var$3, $List::nil());
	$var($Type, var$4, arrayType);
	$var($Symbol$MethodSymbol, valuesMethod, $new($Symbol$MethodSymbol, (2 | 8) | 4096, var$2, $$new($Type$MethodType, var$3, var$4, $($List::nil()), $nc(tree->type)->tsym), $nc(tree->type)->tsym));
	enumDefs->append($($nc(this->make)->MethodDef(valuesMethod, $($nc(this->make)->Block(0, $($List::of($($nc(this->make)->Return(newArray)))))))));
	$nc($($nc(tree->sym)->members()))->enter(valuesMethod);
	enumDefs->append($($nc(this->make)->VarDef(valuesVar, $($nc(this->make)->App($($nc(this->make)->QualIdent(valuesMethod)))))));
	$nc($($nc(tree->sym)->members()))->enter(valuesVar);
	$var($JCDiagnostic$DiagnosticPosition, var$5, tree->pos());
	$var($Name, var$6, $nc(this->names)->values);
	$var($Type, var$7, tree->type);
	$var($Symbol, valuesSym, lookupMethod(var$5, var$6, var$7, $($List::nil())));
	$var($List, valuesBody, nullptr);
	if (useClone()) {
		$var($Type, var$8, $nc($nc(valuesSym)->type)->getReturnType());
		$var($JCTree$JCTypeCast, valuesResult, $nc(this->make)->TypeCast(var$8, $(static_cast<$JCTree$JCExpression*>($nc(this->make)->App($($nc(this->make)->Select($(static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(valuesVar)))), static_cast<$Symbol*>($nc(this->syms)->arrayCloneMethod))))))));
		$assign(valuesBody, $List::of($($nc(this->make)->Return(valuesResult))));
	} else {
		$var($Name, resultName, syntheticName(tree, "result"_s));
		$var($Symbol$VarSymbol, resultVar, $new($Symbol$VarSymbol, 16 | 4096, resultName, arrayType, valuesSym));
		$var($JCTree$JCExpression, var$9, $nc(this->make)->Type($($nc(this->types)->erasure(tree->type))));
		$var($JCTree$JCNewArray, resultArray, $nc(this->make)->NewArray(var$9, $($List::of($($nc(this->make)->Select($(static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(valuesVar)))), static_cast<$Symbol*>($nc(this->syms)->lengthVar))))), nullptr));
		$set($nc(resultArray), type, arrayType);
		$var($JCTree$JCVariableDecl, decl, $nc(this->make)->VarDef(resultVar, resultArray));
		if (this->systemArraycopyMethod == nullptr) {
			$var($Name, var$10, $nc(this->names)->fromString("arraycopy"_s));
			$var($List, var$11, $List::of($nc(this->syms)->objectType, $nc(this->syms)->intType, $nc(this->syms)->objectType, $$new($TypeArray, {
				static_cast<$Type*>($nc(this->syms)->intType),
				static_cast<$Type*>($nc(this->syms)->intType)
			})));
			$var($Type, var$12, static_cast<$Type*>($nc(this->syms)->voidType));
			$set(this, systemArraycopyMethod, $new($Symbol$MethodSymbol, 1 | 8, var$10, $$new($Type$MethodType, var$11, var$12, $($List::nil()), $nc(this->syms)->methodClass), $nc($nc(this->syms)->systemType)->tsym));
		}
		$var($JCTree$JCExpression, var$13, $nc(this->make)->Select($(static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>($nc($nc(this->syms)->systemType)->tsym)))), static_cast<$Symbol*>(this->systemArraycopyMethod)));
		$var($Object, var$14, $of($nc(this->make)->Ident(static_cast<$Symbol*>(valuesVar))));
		$var($Object, var$15, $of($nc(this->make)->Literal($($Integer::valueOf(0)))));
		$var($Object, var$16, $of($nc(this->make)->Ident(static_cast<$Symbol*>(resultVar))));
		$var($JCTree$JCStatement, copy, $nc(this->make)->Exec($($nc(this->make)->App(var$13, $($List::of(var$14, var$15, var$16, $$new($JCTree$JCExpressionArray, {
			$(static_cast<$JCTree$JCExpression*>($nc(this->make)->Literal($($Integer::valueOf(0))))),
			$($nc(this->make)->Select($(static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(valuesVar)))), static_cast<$Symbol*>($nc(this->syms)->lengthVar)))
		})))))));
		$var($JCTree$JCStatement, ret, $nc(this->make)->Return($($nc(this->make)->Ident(static_cast<$Symbol*>(resultVar)))));
		$assign(valuesBody, $List::of(decl, copy, ret));
	}
	$var($JCTree$JCMethodDecl, valuesDef, $nc(this->make)->MethodDef($cast($Symbol$MethodSymbol, valuesSym), $($nc(this->make)->Block(0, valuesBody))));
	enumDefs->append(valuesDef);
	if (this->debugLower) {
		$nc($System::err)->println($$str({tree->sym, ".valuesDef = "_s, valuesDef}));
	}
	$var($JCDiagnostic$DiagnosticPosition, var$17, tree->pos());
	$var($Name, var$18, $nc(this->names)->valueOf);
	$var($Type, var$19, $nc(tree->sym)->type);
	$var($Symbol$MethodSymbol, valueOfSym, lookupMethod(var$17, var$18, var$19, $($List::of($nc(this->syms)->stringType))));
	$Assert::check(((int64_t)($nc(valueOfSym)->flags() & (uint64_t)(int64_t)8)) != 0);
	$var($Symbol$VarSymbol, nameArgSym, $cast($Symbol$VarSymbol, $nc($nc(valueOfSym)->params$)->head));
	$var($JCTree$JCIdent, nameVal, $nc(this->make)->Ident(static_cast<$Symbol*>(nameArgSym)));
	$var($JCTree$JCExpression, var$20, static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>($nc(this->syms)->enumSym))));
	$var($Name, var$21, $nc(this->names)->valueOf);
	$var($JCTree$JCStatement, enum_ValueOf, $nc(this->make)->Return($($nc(this->make)->TypeCast($nc(tree->sym)->type, $(static_cast<$JCTree$JCExpression*>(makeCall(var$20, var$21, $($List::of(e_class, nameVal)))))))));
	$var($JCTree$JCMethodDecl, valueOf, $nc(this->make)->MethodDef(valueOfSym, $($nc(this->make)->Block(0, $($List::of(enum_ValueOf))))));
	$set($nc(nameVal), sym, $nc(($cast($JCTree$JCVariableDecl, $nc($nc(valueOf)->params)->head)))->sym);
	if (this->debugLower) {
		$nc($System::err)->println($$str({tree->sym, ".valueOf = "_s, valueOf}));
	}
	enumDefs->append(valueOf);
	enumDefs->appendList($(otherDefs->toList()));
	$set(tree, defs, enumDefs->toList());
}

bool Lower::useClone() {
	try {
		return $nc($($nc($nc($nc(this->syms)->objectType)->tsym)->members()))->findFirst($nc(this->names)->clone$) != nullptr;
	} catch ($Symbol$CompletionFailure& e) {
		return false;
	}
	$shouldNotReachHere();
}

$Name* Lower::syntheticName($JCTree$JCClassDecl* tree, $String* baseName) {
	$useLocalCurrentObjectStackCache();
	$var($Name, valuesName, $nc(this->names)->fromString($$str({$$str(this->target->syntheticNameChar()), baseName})));
	while ($nc($($nc($nc(tree)->sym)->members()))->findFirst(valuesName) != nullptr) {
		$var($String, var$0, $$str({valuesName, ""_s}));
		$assign(valuesName, $nc(this->names)->fromString($$concat(var$0, $$str(this->target->syntheticNameChar()))));
	}
	return valuesName;
}

void Lower::visitEnumConstantDef($JCTree$JCVariableDecl* var, int32_t ordinal) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCNewClass, varDef, $cast($JCTree$JCNewClass, $nc(var)->init));
	$set($nc(varDef), args, $nc($($nc(varDef->args)->prepend($(makeLit($nc(this->syms)->intType, $($Integer::valueOf(ordinal)))))))->prepend($(makeLit($nc(this->syms)->stringType, $($nc(var->name)->toString())))));
}

$List* Lower::recordVars($Type* t$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, t$renamed);
	$var($List, vars, $List::nil());
	$init($TypeTag);
	while (!$nc(t)->hasTag($TypeTag::NONE)) {
		if (t->hasTag($TypeTag::CLASS)) {
			{
				$var($Iterator, i$, $nc($($nc($($nc(t->tsym)->members()))->getSymbols(static_cast<$Predicate*>($$new(Lower$$Lambda$lambda$recordVars$7$5)))))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Symbol, s, $cast($Symbol, i$->next()));
					{
						$assign(vars, $nc(vars)->prepend($cast($Symbol$VarSymbol, s)));
					}
				}
			}
		}
		$assign(t, $nc(this->types)->supertype(t));
	}
	return vars;
}

void Lower::visitRecordDef($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	make_at($($nc(tree)->pos()));
	$var($List, vars, recordVars($nc(tree)->type));
	$var($Symbol$MethodHandleSymbolArray, getterMethHandles, $new($Symbol$MethodHandleSymbolArray, $nc(vars)->size()));
	int32_t index = 0;
	{
		$var($Iterator, i$, vars->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$VarSymbol, var, $cast($Symbol$VarSymbol, i$->next()));
			{
				if (!$equals($nc(var)->owner, $nc(tree)->sym)) {
					$assign(var, $new($Symbol$VarSymbol, var->flags_field, var->name, var->type, tree->sym));
				}
				getterMethHandles->set(index, $($nc(var)->asMethodHandle(true)));
				++index;
			}
		}
	}
	$set($nc(tree), defs, $nc(tree->defs)->appendList($(generateMandatedAccessors(tree))));
	$var($Object, var$0, $of(generateRecordMethod(tree, $nc(this->names)->toString$, vars, getterMethHandles)));
	$var($Object, var$1, $of(generateRecordMethod(tree, $nc(this->names)->hashCode$, vars, getterMethHandles)));
	$set(tree, defs, $nc(tree->defs)->appendList($($List::of(var$0, var$1, $(generateRecordMethod(tree, $nc(this->names)->equals$, vars, getterMethHandles))))));
}

$JCTree* Lower::generateRecordMethod($JCTree$JCClassDecl* tree, $Name* name, $List* vars, $Symbol$MethodHandleSymbolArray* getterMethHandles) {
	$useLocalCurrentObjectStackCache();
	make_at($($nc(tree)->pos()));
	bool isEquals = name == $nc(this->names)->equals$;
	$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree)->pos());
	$var($Name, var$1, name);
	$var($Type, var$2, $nc(tree->sym)->type);
	$var($Symbol$MethodSymbol, msym, lookupMethod(var$0, var$1, var$2, isEquals ? $($List::of($nc(this->syms)->objectType)) : $($List::nil())));
	if (((int64_t)($nc(msym)->flags() & (uint64_t)(int64_t)0x2000000000000000)) != 0) {
		$var($Name, bootstrapName, $nc(this->names)->bootstrap);
		$var($PoolConstant$LoadableConstantArray, staticArgsValues, $new($PoolConstant$LoadableConstantArray, 2 + $nc(getterMethHandles)->length));
		staticArgsValues->set(0, $cast($Type$ClassType, $nc($nc(tree)->sym)->type));
		$var($String, concatNames, $cast($String, $nc($($nc($($nc(vars)->stream()))->map(static_cast<$Function*>($$new(Lower$$Lambda$lambda$generateRecordMethod$8$6)))))->collect($($Collectors::joining(";"_s, ""_s, ""_s)))));
		staticArgsValues->set(1, $($PoolConstant$LoadableConstant::String(concatNames)));
		int32_t index = 2;
		{
			$var($Symbol$MethodHandleSymbolArray, arr$, getterMethHandles);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Symbol$MethodHandleSymbol, mho, arr$->get(i$));
				{
					staticArgsValues->set(index, mho);
					++index;
				}
			}
		}
		$var($List, staticArgTypes, $List::of($nc(this->syms)->classType, $nc(this->syms)->stringType, $$new($Type$ArrayType, $nc(this->syms)->methodHandleType, $nc(this->syms)->arrayClass)));
		$var($JCTree$JCFieldAccess, qualifier, makeIndyQualifier($nc(this->syms)->objectMethodsType, tree, msym, $($nc($($List::of($nc(this->syms)->methodHandleLookupType, $nc(this->syms)->stringType, $nc(this->syms)->typeDescriptorType)))->appendList(staticArgTypes)), staticArgsValues, bootstrapName, name, false));
		$var($Symbol$VarSymbol, _this, $new($Symbol$VarSymbol, 4096, $nc(this->names)->_this, $nc(tree->sym)->type, tree->sym));
		$var($JCTree$JCMethodInvocation, proxyCall, nullptr);
		if (!isEquals) {
			$var($List, var$3, $List::nil());
			$var($JCTree$JCExpression, var$4, static_cast<$JCTree$JCExpression*>(qualifier));
			$assign(proxyCall, $nc(this->make)->Apply(var$3, var$4, $($List::of($($nc(this->make)->Ident(static_cast<$Symbol*>(_this)))))));
		} else {
			$var($Symbol$VarSymbol, o, $cast($Symbol$VarSymbol, $nc(msym->params$)->head));
			$nc(o)->adr = 0;
			$var($List, var$5, $List::nil());
			$var($JCTree$JCExpression, var$6, static_cast<$JCTree$JCExpression*>(qualifier));
			$var($Object, var$7, $of($nc(this->make)->Ident(static_cast<$Symbol*>(_this))));
			$assign(proxyCall, $nc(this->make)->Apply(var$5, var$6, $($List::of(var$7, $($nc(this->make)->Ident(static_cast<$Symbol*>(o)))))));
		}
		$set($nc(proxyCall), type, $nc(qualifier)->type);
		return $nc(this->make)->MethodDef(msym, $($nc(this->make)->Block(0, $($List::of($($nc(this->make)->Return(proxyCall)))))));
	} else {
		return $nc(this->make)->Block(4096, $($List::nil()));
	}
}

$String* Lower::argsTypeSig($List* typeList) {
	$var($Lower$LowerSignatureGenerator, sg, $new($Lower$LowerSignatureGenerator, this));
	sg->assembleSig(typeList);
	return sg->toString();
}

$JCTree$JCFieldAccess* Lower::makeIndyQualifier($Type* site, $JCTree$JCClassDecl* tree, $Symbol$MethodSymbol* msym, $List* staticArgTypes, $PoolConstant$LoadableConstantArray* staticArgValues, $Name* bootstrapName, $Name* argName, bool isStatic) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree)->pos());
	$var($Env, var$1, this->attrEnv);
	$var($Type, var$2, site);
	$var($Name, var$3, bootstrapName);
	$var($List, var$4, staticArgTypes);
	$var($Symbol, bsm, $nc(this->rs)->resolveInternalMethod(var$0, var$1, var$2, var$3, var$4, $($List::nil())));
	$var($Type$MethodType, indyType, $nc($nc(msym)->type)->asMethodType());
	$assign(indyType, $new($Type$MethodType, isStatic ? $($List::nil()) : $($nc($nc(indyType)->argtypes$)->prepend($nc($nc(tree)->sym)->type)), indyType->restype, indyType->thrown, $nc(this->syms)->methodClass));
	$var($Symbol$DynamicMethodSymbol, dynSym, $new($Symbol$DynamicMethodSymbol, argName, $nc(this->syms)->noSymbol, $($nc(($cast($Symbol$MethodSymbol, bsm)))->asHandle()), indyType, staticArgValues));
	$var($JCTree$JCFieldAccess, qualifier, $nc(this->make)->Select($($nc(this->make)->QualIdent($nc(site)->tsym)), argName));
	$set($nc(qualifier), sym, dynSym);
	$set(qualifier, type, $nc($($nc(msym->type)->asMethodType()))->restype);
	return qualifier;
}

void Lower::visitMethodDef($JCTree$JCMethodDecl* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tree)->name == $nc(this->names)->init && ((int64_t)($nc(this->currentClass)->flags_field & (uint64_t)(int64_t)16384)) != 0) {
		$var($String, var$1, $$str({$$str(this->target->syntheticNameChar()), "enum"_s}));
		$var($String, var$0, $$concat(var$1, $$str(this->target->syntheticNameChar())));
		$var($JCTree$JCVariableDecl, nameParam, $nc($(make_at($(tree->pos()))))->Param($($nc(this->names)->fromString($$concat(var$0, "name"))), $nc(this->syms)->stringType, tree->sym));
		$nc($nc(nameParam)->mods)->flags |= 4096;
		$nc(nameParam->sym)->flags_field |= 4096;
		$var($String, var$3, $$str({$$str(this->target->syntheticNameChar()), "enum"_s}));
		$var($String, var$2, $$concat(var$3, $$str(this->target->syntheticNameChar())));
		$var($JCTree$JCVariableDecl, ordParam, $nc(this->make)->Param($($nc(this->names)->fromString($$concat(var$2, "ordinal"))), $nc(this->syms)->intType, tree->sym));
		$nc($nc(ordParam)->mods)->flags |= 4096;
		$nc(ordParam->sym)->flags_field |= 4096;
		$var($Symbol$MethodSymbol, m, tree->sym);
		$set(tree, params, $nc($($nc(tree->params)->prepend(ordParam)))->prepend(nameParam));
		$set($nc(m), extraParams, $nc(m->extraParams)->prepend(ordParam->sym));
		$set(m, extraParams, $nc(m->extraParams)->prepend(nameParam->sym));
		$var($Type, olderasure, m->erasure(this->types));
		$var($List, var$4, $nc($($nc($($nc(olderasure)->getParameterTypes()))->prepend($nc(this->syms)->intType)))->prepend($nc(this->syms)->stringType));
		$var($Type, var$5, olderasure->getReturnType());
		$set(m, erasure_field, $new($Type$MethodType, var$4, var$5, $(olderasure->getThrownTypes()), $nc(this->syms)->methodClass));
	}
	$var($JCTree$JCMethodDecl, prevMethodDef, this->currentMethodDef);
	$var($Symbol$MethodSymbol, prevMethodSym, this->currentMethodSym);
	{
		$var($Throwable, var$6, nullptr);
		try {
			$set(this, currentMethodDef, tree);
			$set(this, currentMethodSym, $nc(tree)->sym);
			visitMethodDefInternal(tree);
		} catch ($Throwable& var$7) {
			$assign(var$6, var$7);
		} /*finally*/ {
			$set(this, currentMethodDef, prevMethodDef);
			$set(this, currentMethodSym, prevMethodSym);
		}
		if (var$6 != nullptr) {
			$throw(var$6);
		}
	}
}

void Lower::visitMethodDefInternal($JCTree$JCMethodDecl* tree) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(tree)->name == $nc(this->names)->init;
	if (var$0) {
		bool var$1 = $nc(this->currentClass)->isInner();
		var$0 = (var$1 || $nc(this->currentClass)->isDirectlyOrIndirectlyLocal());
	}
	if (var$0) {
		$var($Symbol$MethodSymbol, m, $nc(tree)->sym);
		$var($Map, prevProxies, this->proxies);
		$set(this, proxies, $new($HashMap, this->proxies));
		$var($List, prevOuterThisStack, this->outerThisStack);
		$var($List, fvs, freevars(this->currentClass));
		$var($JCTree$JCVariableDecl, otdef, nullptr);
		if ($nc(this->currentClass)->hasOuterInstance()) {
			$assign(otdef, outerThisDef(tree->pos$, m));
		}
		$var($List, fvdefs, freevarDefs(tree->pos$, fvs, m, 0x0000000200000000));
		$set(tree, restype, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->restype))));
		$set(tree, params, translateVarDefs(tree->params));
		$set(tree, thrown, translate(tree->thrown));
		if (tree->body == nullptr) {
			$set(this, result, tree);
			return;
		}
		$set(tree, params, $nc(tree->params)->appendList(fvdefs));
		if ($nc(this->currentClass)->hasOuterInstance()) {
			$set(tree, params, $nc(tree->params)->prepend(otdef));
		}
		$var($JCTree$JCStatement, selfCall, $cast($JCTree$JCStatement, translate($cast($JCTree$JCStatement, $nc($nc(tree->body)->stats)->head))));
		$var($List, added, $List::nil());
		if ($nc(fvs)->nonEmpty()) {
			$var($List, addedargtypes, $List::nil());
			{
				$var($List, l, fvs);
				for (; l->nonEmpty(); $assign(l, l->tail)) {
					$set($nc(m), capturedLocals, $nc(m->capturedLocals)->prepend(($cast($Symbol$VarSymbol, $($nc(this->proxies)->get($nc(l)->head))))));
					if ($TreeInfo::isInitialConstructor(tree)) {
						int32_t var$2 = $nc(tree->body)->pos$;
						$var($Symbol, var$3, $cast($Symbol, $nc(this->proxies)->get($nc(l)->head)));
						$assign(added, $nc(added)->prepend($(initField(var$2, var$3, $cast($Symbol, $($nc(prevProxies)->get($nc(l)->head)))))));
					}
					$assign(addedargtypes, $nc(addedargtypes)->prepend($($nc(($cast($Symbol$VarSymbol, $nc(l)->head)))->erasure(this->types))));
				}
			}
			$var($Type, olderasure, $nc(m)->erasure(this->types));
			$var($List, var$4, $nc($($nc(olderasure)->getParameterTypes()))->appendList(addedargtypes));
			$var($Type, var$5, olderasure->getReturnType());
			$set(m, erasure_field, $new($Type$MethodType, var$4, var$5, $(olderasure->getThrownTypes()), $nc(this->syms)->methodClass));
		}
		bool var$6 = $nc(this->currentClass)->hasOuterInstance();
		if (var$6 && $TreeInfo::isInitialConstructor(tree)) {
			$assign(added, $nc(added)->prepend($(initOuterThis($nc(tree->body)->pos$))));
		}
		$set(this, proxies, prevProxies);
		$var($List, stats, translate($nc($nc(tree->body)->stats)->tail));
		$set($nc(tree->body), stats, $nc($($nc(stats)->prepend(selfCall)))->prependList(added));
		$set(this, outerThisStack, prevOuterThisStack);
	} else {
		$var($Map, prevLambdaTranslationMap, this->lambdaTranslationMap);
		{
			$var($Throwable, var$7, nullptr);
			try {
				bool var$8 = ((int64_t)($nc($nc(tree)->sym)->flags() & (uint64_t)(int64_t)4096)) != 0;
				$set(this, lambdaTranslationMap, var$8 && $nc($nc(tree->sym)->name)->startsWith($nc(this->names)->lambda) ? makeTranslationMap(tree) : ($Map*)nullptr);
				$TreeTranslator::visitMethodDef(tree);
			} catch ($Throwable& var$9) {
				$assign(var$7, var$9);
			} /*finally*/ {
				$set(this, lambdaTranslationMap, prevLambdaTranslationMap);
			}
			if (var$7 != nullptr) {
				$throw(var$7);
			}
		}
	}
	if ($nc(tree)->name == $nc(this->names)->init && ((int64_t)($nc(tree->sym)->flags_field & (uint64_t)$Flags::COMPACT_RECORD_CONSTRUCTOR)) != 0) {
		$var($ListBuffer, fields, $new($ListBuffer));
		{
			$var($Iterator, i$, $nc($($cast($List, $nc(this->currentClass)->getEnclosedElements())))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol, sym, $cast($Symbol, i$->next()));
				{
					$init($Kinds$Kind);
					if ($nc(sym)->kind == $Kinds$Kind::VAR && (((int64_t)(sym->flags() & (uint64_t)(int64_t)0x2000000000000000)) != 0)) {
						fields->append($cast($Symbol$VarSymbol, sym));
					}
				}
			}
		}
		{
			$var($Iterator, i$, fields->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol$VarSymbol, field, $cast($Symbol$VarSymbol, i$->next()));
				{
					if (((int64_t)($nc(field)->flags_field & (uint64_t)$Flags::UNINITIALIZED_FIELD)) != 0) {
						$var($Symbol$VarSymbol, param, $nc(($cast($JCTree$JCVariableDecl, $($nc($($nc($($nc($($nc(tree->params)->stream()))->filter(static_cast<$Predicate*>($$new(Lower$$Lambda$lambda$visitMethodDefInternal$9$7, field)))))->findFirst()))->get()))))->sym);
						$nc(this->make)->at(tree->pos$);
						$var($JCTree$JCExpression, var$10, $nc(this->make)->Select($($nc(this->make)->This($($nc(field->owner)->erasure(this->types)))), static_cast<$Symbol*>(field)));
						$set($nc(tree->body), stats, $nc($nc(tree->body)->stats)->append($($nc(this->make)->Exec($($nc($($nc(this->make)->Assign(var$10, $($nc(this->make)->Ident(static_cast<$Symbol*>(param))))))->setType($(field->erasure(this->types))))))));
						field->flags_field &= (uint64_t)~$Flags::UNINITIALIZED_FIELD;
					}
				}
			}
		}
	}
	$set(this, result, tree);
}

$Map* Lower::makeTranslationMap($JCTree$JCMethodDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Map, translationMap, $new($HashMap));
	{
		$var($Iterator, i$, $nc($nc(tree)->params)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCVariableDecl, vd, $cast($JCTree$JCVariableDecl, i$->next()));
			{
				$var($Symbol, p, $nc(vd)->sym);
				if (p != $nc(p)->baseSymbol()) {
					translationMap->put($(p->baseSymbol()), p);
				}
			}
		}
	}
	return translationMap;
}

void Lower::visitTypeCast($JCTree$JCTypeCast* tree) {
	$set($nc(tree), clazz, translate(tree->clazz));
	bool var$0 = $nc(tree->type)->isPrimitive();
	if (var$0 != $nc($nc(tree->expr)->type)->isPrimitive()) {
		$set(tree, expr, translate(tree->expr, tree->type));
	} else {
		$set(tree, expr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr))));
	}
	$set(this, result, tree);
}

void Lower::visitNewClass($JCTree$JCNewClass* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ClassSymbol, c, $cast($Symbol$ClassSymbol, $nc($nc(tree)->constructor)->owner));
	bool isEnum = ((int64_t)($nc($nc(tree->constructor)->owner)->flags() & (uint64_t)(int64_t)16384)) != 0;
	$var($List, argTypes, $nc($nc(tree->constructor)->type)->getParameterTypes());
	if (isEnum) {
		$assign(argTypes, $nc($($nc(argTypes)->prepend($nc(this->syms)->intType)))->prepend($nc(this->syms)->stringType));
	}
	$set(tree, args, boxArgs(argTypes, tree->args, tree->varargsElement));
	$set(tree, varargsElement, nullptr);
	if ($nc(c)->isDirectlyOrIndirectlyLocal()) {
		$var($JCDiagnostic$DiagnosticPosition, var$0, tree->pos());
		$set(tree, args, $nc(tree->args)->appendList($(loadFreevars(var$0, $(freevars(c))))));
	}
	$var($Symbol, constructor, accessConstructor($(tree->pos()), tree->constructor));
	if (constructor != tree->constructor) {
		$set(tree, args, $nc(tree->args)->append($(makeNull())));
		$set(tree, constructor, constructor);
	}
	if ($nc(c)->hasOuterInstance()) {
		$var($JCTree$JCExpression, thisArg, nullptr);
		if (tree->encl != nullptr) {
			$assign(thisArg, $nc(this->attr)->makeNullCheck($cast($JCTree$JCExpression, $(translate(static_cast<$JCTree*>(tree->encl))))));
			$set($nc(thisArg), type, $nc(tree->encl)->type);
		} else if (c->isDirectlyOrIndirectlyLocal()) {
			$var($JCDiagnostic$DiagnosticPosition, var$1, tree->pos());
			$assign(thisArg, makeThis(var$1, $nc($($nc(c->type)->getEnclosingType()))->tsym));
		} else {
			$assign(thisArg, makeOwnerThis($(tree->pos()), c, false));
		}
		$set(tree, args, $nc(tree->args)->prepend(thisArg));
	}
	$set(tree, encl, nullptr);
	if (tree->def != nullptr) {
		$var($Map, prevLambdaTranslationMap, this->lambdaTranslationMap);
		{
			$var($Throwable, var$2, nullptr);
			try {
				$set(this, lambdaTranslationMap, nullptr);
				translate(static_cast<$JCTree*>(tree->def));
			} catch ($Throwable& var$3) {
				$assign(var$2, var$3);
			} /*finally*/ {
				$set(this, lambdaTranslationMap, prevLambdaTranslationMap);
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
		$set(tree, clazz, access($($nc($(make_at($($nc(tree->clazz)->pos()))))->Ident(static_cast<$Symbol*>($nc(tree->def)->sym)))));
		$set(tree, def, nullptr);
	} else {
		$set(tree, clazz, access(c, tree->clazz, this->enclOp, false));
	}
	$set(this, result, tree);
}

bool Lower::isTrue($JCTree* exp) {
	if ($nc($nc(exp)->type)->isTrue()) {
		return true;
	}
	$var($Boolean, b, expValue(exp));
	return b == nullptr ? false : $nc(b)->booleanValue();
}

bool Lower::isFalse($JCTree* exp) {
	if ($nc($nc(exp)->type)->isFalse()) {
		return true;
	}
	$var($Boolean, b, expValue(exp));
	return b == nullptr ? false : !$nc(b)->booleanValue();
}

$Boolean* Lower::expValue($JCTree* exp$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, exp, exp$renamed);
	$init($JCTree$Tag);
	while ($nc(exp)->hasTag($JCTree$Tag::PARENS)) {
		$assign(exp, $nc(($cast($JCTree$JCParens, exp)))->expr);
	}
	bool eq = false;
	$init($Lower$2);
	switch ($nc($Lower$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(exp)->getTag())))->ordinal())) {
	case 6:
		{
			eq = true;
			break;
		}
	case 7:
		{
			eq = false;
			break;
		}
	default:
		{
			return nullptr;
		}
	}
	$var($JCTree$JCBinary, b, $cast($JCTree$JCBinary, exp));
	$init($TypeTag);
	if ($nc($nc(b->lhs)->type)->hasTag($TypeTag::BOT)) {
		return expValueIsNull(eq, b->rhs);
	}
	if ($nc($nc(b->rhs)->type)->hasTag($TypeTag::BOT)) {
		return expValueIsNull(eq, b->lhs);
	}
	return nullptr;
}

$Boolean* Lower::expValueIsNull(bool eq, $JCTree* t) {
	$init($TypeTag);
	if ($nc($nc(t)->type)->hasTag($TypeTag::BOT)) {
		return $Boolean::valueOf(eq);
	}
	$init($JCTree$Tag);
	if ($nc(t)->hasTag($JCTree$Tag::LITERAL)) {
		return $Boolean::valueOf(!eq);
	}
	return nullptr;
}

void Lower::visitConditional($JCTree$JCConditional* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, cond, ($set($nc(tree), cond, translate(tree->cond, static_cast<$Type*>($nc(this->syms)->booleanType)))));
	if (isTrue(cond)) {
		$set(this, result, convert($(translate(tree->truepart, tree->type)), tree->type));
		addPrunedInfo(cond);
	} else if (isFalse(cond)) {
		$set(this, result, convert($(translate(tree->falsepart, tree->type)), tree->type));
		addPrunedInfo(cond);
	} else {
		$set(tree, truepart, translate(tree->truepart, tree->type));
		$set(tree, falsepart, translate(tree->falsepart, tree->type));
		$set(this, result, tree);
	}
}

$JCTree$JCExpression* Lower::convert($JCTree$JCExpression* tree, $Type* pt) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if ($nc(tree)->type == pt || $nc($nc(tree)->type)->hasTag($TypeTag::BOT)) {
		return tree;
	}
	$var($JCTree$JCExpression, result, $nc($(make_at($($nc(tree)->pos()))))->TypeCast($(static_cast<$JCTree*>($nc(this->make)->Type(pt))), tree));
	$set($nc(result), type, ($nc($nc(tree)->type)->constValue() != nullptr) ? $nc(this->cfolder)->coerce($nc(tree)->type, pt) : pt);
	return result;
}

void Lower::visitIf($JCTree$JCIf* tree) {
	$var($JCTree, cond, ($set($nc(tree), cond, translate(tree->cond, static_cast<$Type*>($nc(this->syms)->booleanType)))));
	if (isTrue(cond)) {
		$set(this, result, translate(static_cast<$JCTree*>(tree->thenpart)));
		addPrunedInfo(cond);
	} else if (isFalse(cond)) {
		if (tree->elsepart != nullptr) {
			$set(this, result, translate(static_cast<$JCTree*>(tree->elsepart)));
		} else {
			$set(this, result, $nc(this->make)->Skip());
		}
		addPrunedInfo(cond);
	} else {
		$set(tree, thenpart, $cast($JCTree$JCStatement, translate(static_cast<$JCTree*>(tree->thenpart))));
		$set(tree, elsepart, $cast($JCTree$JCStatement, translate(static_cast<$JCTree*>(tree->elsepart))));
		$set(this, result, tree);
	}
}

void Lower::visitAssert($JCTree$JCAssert* tree) {
	$useLocalCurrentObjectStackCache();
	$set($nc(tree), cond, translate(tree->cond, static_cast<$Type*>($nc(this->syms)->booleanType)));
	if (!$nc($nc(tree->cond)->type)->isTrue()) {
		$var($JCTree$JCExpression, cond, assertFlagTest($(tree->pos())));
		$var($List, exnArgs, (tree->detail == nullptr) ? $List::nil() : $List::of($cast($JCTree$JCExpression, $(translate(static_cast<$JCTree*>(tree->detail))))));
		if (!$nc($nc(tree->cond)->type)->isFalse()) {
			$init($JCTree$Tag);
			$assign(cond, makeBinary($JCTree$Tag::AND, cond, $(makeUnary($JCTree$Tag::NOT, tree->cond))));
		}
		$set(this, result, $nc(this->make)->If(cond, $($nc($(make_at(tree)))->Throw($(makeNewClass($nc(this->syms)->assertionErrorType, exnArgs)))), nullptr));
	} else {
		$set(this, result, $nc(this->make)->Skip());
	}
}

void Lower::visitApply($JCTree$JCMethodInvocation* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, meth, $TreeInfo::symbol($nc(tree)->meth));
	$var($List, argtypes, $nc($nc(meth)->type)->getParameterTypes());
	if (meth->name == $nc(this->names)->init && $equals(meth->owner, $nc(this->syms)->enumSym)) {
		$assign(argtypes, $nc($nc(argtypes)->tail)->tail);
	}
	$set($nc(tree), args, boxArgs(argtypes, tree->args, tree->varargsElement));
	$set(tree, varargsElement, nullptr);
	$var($Name, methName, $TreeInfo::name(tree->meth));
	if (meth->name == $nc(this->names)->init) {
		$var($Symbol, constructor, accessConstructor($(tree->pos()), meth));
		if (constructor != meth) {
			$set(tree, args, $nc(tree->args)->append($(makeNull())));
			$TreeInfo::setSymbol(tree->meth, constructor);
		}
		$var($Symbol$ClassSymbol, c, $cast($Symbol$ClassSymbol, $nc(constructor)->owner));
		if ($nc(c)->isDirectlyOrIndirectlyLocal()) {
			$var($JCDiagnostic$DiagnosticPosition, var$0, tree->pos());
			$set(tree, args, $nc(tree->args)->appendList($(loadFreevars(var$0, $(freevars(c))))));
		}
		if (((int64_t)($nc(c)->flags_field & (uint64_t)(int64_t)16384)) != 0 || $nc(c)->getQualifiedName() == $nc(this->names)->java_lang_Enum) {
			$var($List, params, $nc(this->currentMethodDef)->params);
			if ($nc($nc(this->currentMethodSym)->owner)->hasOuterInstance()) {
				$assign(params, $nc(params)->tail);
			}
			$set(tree, args, $nc($($nc(tree->args)->prepend($($nc($(make_at($(tree->pos()))))->Ident(static_cast<$Symbol*>($nc(($cast($JCTree$JCVariableDecl, $nc($nc(params)->tail)->head)))->sym))))))->prepend($($nc(this->make)->Ident(static_cast<$Symbol*>($nc(($cast($JCTree$JCVariableDecl, $nc(params)->head)))->sym)))));
		}
		if ($nc(c)->hasOuterInstance()) {
			$var($JCTree$JCExpression, thisArg, nullptr);
			$init($JCTree$Tag);
			if ($nc(tree->meth)->hasTag($JCTree$Tag::SELECT)) {
				$assign(thisArg, $nc(this->attr)->makeNullCheck($cast($JCTree$JCExpression, $(translate(static_cast<$JCTree*>($nc(($cast($JCTree$JCFieldAccess, tree->meth)))->selected))))));
				$set(tree, meth, $nc(this->make)->Ident(constructor));
				$set($nc($cast($JCTree$JCIdent, tree->meth)), name, methName);
			} else if (c->isDirectlyOrIndirectlyLocal() || methName == $nc(this->names)->_this) {
				$var($JCDiagnostic$DiagnosticPosition, var$1, $nc(tree->meth)->pos());
				$assign(thisArg, makeThis(var$1, $nc($($nc(c->type)->getEnclosingType()))->tsym));
			} else {
				$assign(thisArg, makeOwnerThisN($($nc(tree->meth)->pos()), c, false));
			}
			$set(tree, args, $nc(tree->args)->prepend(thisArg));
		}
	} else {
		$set(tree, meth, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->meth))));
		$init($JCTree$Tag);
		if ($nc(tree->meth)->hasTag($JCTree$Tag::APPLY)) {
			$var($JCTree$JCMethodInvocation, app, $cast($JCTree$JCMethodInvocation, tree->meth));
			$set($nc(app), args, $nc(tree->args)->prependList(app->args));
			$set(this, result, app);
			return;
		}
	}
	$set(this, result, tree);
}

$List* Lower::boxArgs($List* parameters$renamed, $List* _args, $Type* varargsElement) {
	$useLocalCurrentObjectStackCache();
	$var($List, parameters, parameters$renamed);
	$var($List, args, _args);
	if ($nc(parameters)->isEmpty()) {
		return args;
	}
	bool anyChanges = false;
	$var($ListBuffer, result, $new($ListBuffer));
	while ($nc($nc(parameters)->tail)->nonEmpty()) {
		$var($JCTree$JCExpression, arg, translate($cast($JCTree$JCExpression, $nc(args)->head), $cast($Type, parameters->head)));
		anyChanges |= (!$equals(arg, $nc(args)->head));
		result->append(arg);
		$assign(args, args->tail);
		$assign(parameters, parameters->tail);
	}
	$var($Type, parameter, $cast($Type, $nc(parameters)->head));
	if (varargsElement != nullptr) {
		anyChanges = true;
		$var($ListBuffer, elems, $new($ListBuffer));
		while ($nc(args)->nonEmpty()) {
			$var($JCTree$JCExpression, arg, translate($cast($JCTree$JCExpression, args->head), varargsElement));
			elems->append(arg);
			$assign(args, args->tail);
		}
		$var($JCTree$JCExpression, var$0, $nc(this->make)->Type(varargsElement));
		$var($List, var$1, $List::nil());
		$var($JCTree$JCNewArray, boxedArgs, $nc(this->make)->NewArray(var$0, var$1, $(elems->toList())));
		$set($nc(boxedArgs), type, $new($Type$ArrayType, varargsElement, $nc(this->syms)->arrayClass));
		result->append(boxedArgs);
	} else {
		if ($nc(args)->length() != 1) {
			$throwNew($AssertionError, $of(args));
		}
		$var($JCTree$JCExpression, arg, translate($cast($JCTree$JCExpression, $nc(args)->head), parameter));
		anyChanges |= (!$equals(arg, $nc(args)->head));
		result->append(arg);
		if (!anyChanges) {
			return _args;
		}
	}
	return result->toList();
}

$JCTree$JCExpression* Lower::boxIfNeeded($JCTree$JCExpression* tree$renamed, $Type* type) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, tree, tree$renamed);
	bool havePrimitive = $nc($nc(tree)->type)->isPrimitive();
	if (havePrimitive == $nc(type)->isPrimitive()) {
		return tree;
	}
	if (havePrimitive) {
		$var($Type, unboxedTarget, $nc(this->types)->unboxedType(type));
		$init($TypeTag);
		if (!$nc(unboxedTarget)->hasTag($TypeTag::NONE)) {
			if (!$nc(this->types)->isSubtype(tree->type, unboxedTarget)) {
				$set(tree, type, unboxedTarget->constType($($nc(tree->type)->constValue())));
			}
			return boxPrimitive(tree, $($nc(this->types)->erasure(type)));
		} else {
			$assign(tree, boxPrimitive(tree));
		}
	} else {
		$assign(tree, unbox(tree, type));
	}
	return tree;
}

$JCTree$JCExpression* Lower::boxPrimitive($JCTree$JCExpression* tree) {
	return boxPrimitive(tree, $nc($($nc(this->types)->boxedClass($nc(tree)->type)))->type);
}

$JCTree$JCExpression* Lower::boxPrimitive($JCTree$JCExpression* tree, $Type* box) {
	$useLocalCurrentObjectStackCache();
	make_at($($nc(tree)->pos()));
	$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree)->pos());
	$var($Name, var$1, $nc(this->names)->valueOf);
	$var($Type, var$2, box);
	$var($Symbol, valueOfSym, lookupMethod(var$0, var$1, var$2, $($nc($($List::nil()))->prepend(tree->type))));
	$var($JCTree$JCExpression, var$3, $nc(this->make)->QualIdent(valueOfSym));
	return $nc(this->make)->App(var$3, $($List::of(tree)));
}

$JCTree$JCExpression* Lower::unbox($JCTree$JCExpression* tree$renamed, $Type* primitive) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, tree, tree$renamed);
	$var($Type, unboxedType, $nc(this->types)->unboxedType($nc(tree)->type));
	$init($TypeTag);
	if ($nc(unboxedType)->hasTag($TypeTag::NONE)) {
		$assign(unboxedType, primitive);
		if (!$nc(unboxedType)->isPrimitive()) {
			$throwNew($AssertionError, $of(unboxedType));
		}
		make_at($($nc(tree)->pos()));
		$assign(tree, $nc(this->make)->TypeCast($nc($($nc(this->types)->boxedClass(unboxedType)))->type, tree));
	} else if (!$nc(this->types)->isSubtype(unboxedType, primitive)) {
		$throwNew($AssertionError, $of(tree));
	}
	make_at($($nc(tree)->pos()));
	$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree)->pos());
	$var($Name, var$1, $nc($nc($nc(unboxedType)->tsym)->name)->append($nc(this->names)->Value));
	$var($Type, var$2, tree->type);
	$var($Symbol, valueSym, lookupMethod(var$0, var$1, var$2, $($List::nil())));
	return $nc(this->make)->App($($nc(this->make)->Select(tree, valueSym)));
}

void Lower::visitParens($JCTree$JCParens* tree) {
	$var($JCTree, expr, translate(static_cast<$JCTree*>($nc(tree)->expr)));
	$set(this, result, ($equals(expr, $nc(tree)->expr)) ? static_cast<$JCTree*>(tree) : expr);
}

void Lower::visitIndexed($JCTree$JCArrayAccess* tree) {
	$set($nc(tree), indexed, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->indexed))));
	$set(tree, index, translate(tree->index, static_cast<$Type*>($nc(this->syms)->intType)));
	$set(this, result, tree);
}

void Lower::visitAssign($JCTree$JCAssign* tree) {
	$useLocalCurrentObjectStackCache();
	$set($nc(tree), lhs, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->lhs), static_cast<$JCTree$JCExpression*>(tree))));
	$set(tree, rhs, translate(tree->rhs, $nc(tree->lhs)->type));
	$init($JCTree$Tag);
	if ($nc(tree->lhs)->hasTag($JCTree$Tag::APPLY)) {
		$var($JCTree$JCMethodInvocation, app, $cast($JCTree$JCMethodInvocation, tree->lhs));
		$set($nc(app), args, $nc($($List::of(tree->rhs)))->prependList(app->args));
		$set(this, result, app);
	} else {
		$set(this, result, tree);
	}
}

void Lower::visitAssignop($JCTree$JCAssignOp* tree) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !$nc($nc($nc(tree)->lhs)->type)->isPrimitive();
	bool boxingReq = var$0 && $nc($($nc($nc(tree->operator$)->type)->getReturnType()))->isPrimitive();
	$var($Lower$AssignopDependencyScanner, depScanner, $new($Lower$AssignopDependencyScanner, this, tree));
	depScanner->scan(static_cast<$JCTree*>(tree->rhs));
	if (boxingReq || depScanner->dependencyFound) {
		$var($JCTree, newTree, abstractLval(tree->lhs, static_cast<$Lower$TreeBuilder*>($$new(Lower$$Lambda$lambda$visitAssignop$10$8, this, tree, boxingReq))));
		$set(this, result, translate(newTree));
		return;
	}
	$set(tree, lhs, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->lhs), static_cast<$JCTree$JCExpression*>(tree))));
	$set(tree, rhs, translate(tree->rhs, $cast($Type, $nc($nc($($nc($nc(tree->operator$)->type)->getParameterTypes()))->tail)->head)));
	$init($JCTree$Tag);
	if ($nc(tree->lhs)->hasTag($JCTree$Tag::APPLY)) {
		$var($JCTree$JCMethodInvocation, app, $cast($JCTree$JCMethodInvocation, tree->lhs));
		$var($JCTree$JCExpression, rhs, $nc(tree->operator$)->opcode == 256 ? makeString(tree->rhs) : tree->rhs);
		$set($nc(app), args, $nc($($List::of(rhs)))->prependList(app->args));
		$set(this, result, app);
	} else {
		$set(this, result, tree);
	}
}

$JCTree$JCExpression* Lower::lowerBoxedPostop($JCTree$JCUnary* tree) {
	$useLocalCurrentObjectStackCache();
	$init($JCTree$Tag);
	bool cast = $nc($($TreeInfo::skipParens($nc(tree)->arg)))->hasTag($JCTree$Tag::TYPECAST);
	return abstractLval($nc(tree)->arg, static_cast<$Lower$TreeBuilder*>($$new(Lower$$Lambda$lambda$lowerBoxedPostop$12$9, this, tree, cast)));
}

void Lower::visitUnary($JCTree$JCUnary* tree) {
	$useLocalCurrentObjectStackCache();
	bool isUpdateOperator = $nc($($nc(tree)->getTag()))->isIncOrDecUnaryOp();
	if (isUpdateOperator && !$nc($nc(tree->arg)->type)->isPrimitive()) {
		$init($Lower$2);
		switch ($nc($Lower$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($(tree->getTag())))->ordinal())) {
		case 8:
			{}
		case 9:
			{
				{
					$JCTree$Tag* opcode = (tree->hasTag($JCTree$Tag::PREINC)) ? $JCTree$Tag::PLUS_ASG : $JCTree$Tag::MINUS_ASG;
					$var($JCTree$JCAssignOp, newTree, makeAssignop(opcode, tree->arg, $($nc(this->make)->Literal($($Integer::valueOf(1))))));
					$set(this, result, translate(static_cast<$JCTree$JCExpression*>(newTree), tree->type));
					return;
				}
			}
		case 10:
			{}
		case 11:
			{
				{
					$set(this, result, translate($(lowerBoxedPostop(tree)), tree->type));
					return;
				}
			}
		}
		$throwNew($AssertionError, $of(tree));
	}
	$set(tree, arg, boxIfNeeded($cast($JCTree$JCExpression, $(translate(static_cast<$JCTree*>(tree->arg), static_cast<$JCTree$JCExpression*>(tree)))), tree->type));
	bool var$0 = tree->hasTag($JCTree$Tag::NOT);
	if (var$0 && $nc($nc(tree->arg)->type)->constValue() != nullptr) {
		$set(tree, type, $nc(this->cfolder)->fold1(257, $nc(tree->arg)->type));
	}
	if (isUpdateOperator && $nc(tree->arg)->hasTag($JCTree$Tag::APPLY)) {
		$set(this, result, tree->arg);
	} else {
		$set(this, result, tree);
	}
}

void Lower::visitBinary($JCTree$JCBinary* tree) {
	$useLocalCurrentObjectStackCache();
	$var($List, formals, $nc($nc($nc(tree)->operator$)->type)->getParameterTypes());
	$var($JCTree, lhs, ($set(tree, lhs, translate(tree->lhs, $cast($Type, $nc(formals)->head)))));
	$init($Lower$2);
	switch ($nc($Lower$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($(tree->getTag())))->ordinal())) {
	case 12:
		{
			if (isTrue(lhs)) {
				$set(this, result, lhs);
				return;
			}
			if (isFalse(lhs)) {
				$set(this, result, translate(tree->rhs, $cast($Type, $nc($nc(formals)->tail)->head)));
				return;
			}
			break;
		}
	case 13:
		{
			if (isFalse(lhs)) {
				$set(this, result, lhs);
				return;
			}
			if (isTrue(lhs)) {
				$set(this, result, translate(tree->rhs, $cast($Type, $nc($nc(formals)->tail)->head)));
				return;
			}
			break;
		}
	}
	$set(tree, rhs, translate(tree->rhs, $cast($Type, $nc($nc(formals)->tail)->head)));
	$set(this, result, tree);
}

void Lower::visitIdent($JCTree$JCIdent* tree) {
	$set(this, result, access($nc(tree)->sym, tree, this->enclOp, false));
}

void Lower::visitForeachLoop($JCTree$JCEnhancedForLoop* tree) {
	if ($nc(this->types)->elemtype($nc($nc(tree)->expr)->type) == nullptr) {
		visitIterableForeachLoop(tree);
	} else {
		visitArrayForeachLoop(tree);
	}
}

void Lower::visitArrayForeachLoop($JCTree$JCEnhancedForLoop* tree) {
	$useLocalCurrentObjectStackCache();
	make_at($($nc($nc(tree)->expr)->pos()));
	$var($Symbol$VarSymbol, arraycache, $new($Symbol$VarSymbol, 4096, $($nc(this->names)->fromString($$str({"arr"_s, $$str(this->target->syntheticNameChar())}))), $nc($nc(tree)->expr)->type, this->currentMethodSym));
	$var($JCTree$JCStatement, arraycachedef, $nc(this->make)->VarDef(arraycache, $nc(tree)->expr));
	$var($Symbol$VarSymbol, lencache, $new($Symbol$VarSymbol, 4096, $($nc(this->names)->fromString($$str({"len"_s, $$str(this->target->syntheticNameChar())}))), $nc(this->syms)->intType, this->currentMethodSym));
	$var($JCTree$JCStatement, lencachedef, $nc(this->make)->VarDef(lencache, $($nc(this->make)->Select($(static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(arraycache)))), static_cast<$Symbol*>($nc(this->syms)->lengthVar)))));
	$var($Symbol$VarSymbol, index, $new($Symbol$VarSymbol, 4096, $($nc(this->names)->fromString($$str({"i"_s, $$str(this->target->syntheticNameChar())}))), $nc(this->syms)->intType, this->currentMethodSym));
	$init($TypeTag);
	$var($JCTree$JCVariableDecl, indexdef, $nc(this->make)->VarDef(index, $($nc(this->make)->Literal($TypeTag::INT, $($Integer::valueOf(0))))));
	$set($nc($nc(indexdef)->init), type, ($set(indexdef, type, $nc($nc(this->syms)->intType)->constType($($Integer::valueOf(0))))));
	$var($List, loopinit, $List::of(arraycachedef, lencachedef, indexdef));
	$init($JCTree$Tag);
	$var($JCTree$Tag, var$0, $JCTree$Tag::LT);
	$var($JCTree$JCExpression, var$1, static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(index))));
	$var($JCTree$JCBinary, cond, makeBinary(var$0, var$1, $($nc(this->make)->Ident(static_cast<$Symbol*>(lencache)))));
	$var($JCTree$JCExpressionStatement, step, $nc(this->make)->Exec($(makeUnary($JCTree$Tag::PREINC, $($nc(this->make)->Ident(static_cast<$Symbol*>(index)))))));
	$var($Type, elemtype, $nc(this->types)->elemtype($nc($nc(tree)->expr)->type));
	$var($JCTree$JCExpression, var$2, static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(arraycache))));
	$var($JCTree$JCExpression, loopvarinit, $nc($($nc(this->make)->Indexed(var$2, $(static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(index)))))))->setType(elemtype));
	$var($JCTree$JCVariableDecl, loopvardef, $cast($JCTree$JCVariableDecl, $nc($($nc(this->make)->VarDef($nc($nc(tree)->var)->mods, $nc(tree->var)->name, $nc(tree->var)->vartype, loopvarinit)))->setType($nc($nc(tree)->var)->type)));
	$set($nc(loopvardef), sym, $nc($nc(tree)->var)->sym);
	$var($JCTree$JCBlock, body, $nc(this->make)->Block(0, $($List::of(loopvardef, tree->body))));
	$set(this, result, translate($(static_cast<$JCTree*>($nc(this->make)->ForLoop(loopinit, cond, $($List::of(step)), body)))));
	patchTargets(body, tree, this->result);
}

void Lower::patchTargets($JCTree* body, $JCTree* src, $JCTree* dest) {
	{
	}
	$$new($Lower$1Patcher, this, src, dest)->scan(body);
}

void Lower::visitIterableForeachLoop($JCTree$JCEnhancedForLoop* tree) {
	$useLocalCurrentObjectStackCache();
	make_at($($nc($nc(tree)->expr)->pos()));
	$var($Type, iteratorTarget, $nc(this->syms)->objectType);
	$var($Type, iterableType, $nc(this->types)->asSuper($($nc(this->types)->cvarUpperBound($nc($nc(tree)->expr)->type)), $nc($nc(this->syms)->iterableType)->tsym));
	if ($nc($($nc(iterableType)->getTypeArguments()))->nonEmpty()) {
		$assign(iteratorTarget, $nc(this->types)->erasure($cast($Type, $nc($(iterableType->getTypeArguments()))->head)));
	}
	$var($Type, eType, $nc(this->types)->skipTypeVars($nc($nc(tree)->expr)->type, false));
	$set($nc($nc(tree)->expr), type, $nc(this->types)->erasure(eType));
	if ($nc(eType)->isCompound()) {
		$set(tree, expr, $nc(this->make)->TypeCast($($nc(this->types)->erasure(iterableType)), tree->expr));
	}
	$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree->expr)->pos());
	$var($Name, var$1, $nc(this->names)->iterator);
	$var($Type, var$2, eType);
	$var($Symbol, iterator, lookupMethod(var$0, var$1, var$2, $($List::nil())));
	$var($Name, var$3, $nc(this->names)->fromString($$str({"i"_s, $$str(this->target->syntheticNameChar())})));
	$var($Symbol$VarSymbol, itvar, $new($Symbol$VarSymbol, 4096, var$3, $($nc(this->types)->erasure($($nc(this->types)->asSuper($($nc($nc(iterator)->type)->getReturnType()), $nc($nc(this->syms)->iteratorType)->tsym)))), this->currentMethodSym));
	$var($JCTree$JCStatement, init, $nc(this->make)->VarDef(itvar, $($nc(this->make)->App($($nc($($nc(this->make)->Select(tree->expr, iterator)))->setType($($nc(this->types)->erasure($nc(iterator)->type))))))));
	$var($JCDiagnostic$DiagnosticPosition, var$4, $nc(tree->expr)->pos());
	$var($Name, var$5, $nc(this->names)->hasNext);
	$var($Type, var$6, itvar->type);
	$var($Symbol, hasNext, lookupMethod(var$4, var$5, var$6, $($List::nil())));
	$var($JCTree$JCMethodInvocation, cond, $nc(this->make)->App($($nc(this->make)->Select($(static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(itvar)))), hasNext))));
	$var($JCDiagnostic$DiagnosticPosition, var$7, $nc(tree->expr)->pos());
	$var($Name, var$8, $nc(this->names)->next);
	$var($Type, var$9, itvar->type);
	$var($Symbol, next, lookupMethod(var$7, var$8, var$9, $($List::nil())));
	$var($JCTree$JCExpression, vardefinit, $nc(this->make)->App($($nc(this->make)->Select($(static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(itvar)))), next))));
	if ($nc($nc(tree->var)->type)->isPrimitive()) {
		$assign(vardefinit, $nc(this->make)->TypeCast($($nc(this->types)->cvarUpperBound(iteratorTarget)), vardefinit));
	} else {
		$assign(vardefinit, $nc(this->make)->TypeCast($nc(tree->var)->type, vardefinit));
	}
	$var($JCTree$JCVariableDecl, indexDef, $cast($JCTree$JCVariableDecl, $nc($($nc(this->make)->VarDef($nc(tree->var)->mods, $nc(tree->var)->name, $nc(tree->var)->vartype, vardefinit)))->setType($nc(tree->var)->type)));
	$set($nc(indexDef), sym, $nc(tree->var)->sym);
	$var($JCTree$JCBlock, body, $nc(this->make)->Block(0, $($List::of(indexDef, tree->body))));
	$nc(body)->endpos = $TreeInfo::endPos(tree->body);
	$var($List, var$10, $List::of(init));
	$var($JCTree$JCExpression, var$11, static_cast<$JCTree$JCExpression*>(cond));
	$set(this, result, translate($(static_cast<$JCTree*>($nc(this->make)->ForLoop(var$10, var$11, $($List::nil()), body)))));
	patchTargets(body, tree, this->result);
}

void Lower::visitVarDef($JCTree$JCVariableDecl* tree) {
	$var($Symbol$MethodSymbol, oldMethodSym, this->currentMethodSym);
	$set($nc(tree), mods, $cast($JCTree$JCModifiers, translate(static_cast<$JCTree*>(tree->mods))));
	$set(tree, vartype, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->vartype))));
	if (this->currentMethodSym == nullptr) {
		$set(this, currentMethodSym, $new($Symbol$MethodSymbol, ((int64_t)($nc(tree->mods)->flags & (uint64_t)(int64_t)8)) | 0x00100000, $nc(this->names)->empty, nullptr, this->currentClass));
	}
	if (tree->init != nullptr) {
		$set(tree, init, translate(tree->init, tree->type));
	}
	$set(this, result, tree);
	$set(this, currentMethodSym, oldMethodSym);
}

void Lower::visitBlock($JCTree$JCBlock* tree) {
	$var($Symbol$MethodSymbol, oldMethodSym, this->currentMethodSym);
	if (this->currentMethodSym == nullptr) {
		$set(this, currentMethodSym, $new($Symbol$MethodSymbol, $nc(tree)->flags | 0x00100000, $nc(this->names)->empty, nullptr, this->currentClass));
	}
	$TreeTranslator::visitBlock(tree);
	$set(this, currentMethodSym, oldMethodSym);
}

void Lower::visitDoLoop($JCTree$JCDoWhileLoop* tree) {
	$set($nc(tree), body, $cast($JCTree$JCStatement, translate(static_cast<$JCTree*>(tree->body))));
	$set(tree, cond, translate(tree->cond, static_cast<$Type*>($nc(this->syms)->booleanType)));
	$set(this, result, tree);
}

void Lower::visitWhileLoop($JCTree$JCWhileLoop* tree) {
	$set($nc(tree), cond, translate(tree->cond, static_cast<$Type*>($nc(this->syms)->booleanType)));
	$set(tree, body, $cast($JCTree$JCStatement, translate(static_cast<$JCTree*>(tree->body))));
	$set(this, result, tree);
}

void Lower::visitForLoop($JCTree$JCForLoop* tree) {
	$set($nc(tree), init, translate(tree->init));
	if (tree->cond != nullptr) {
		$set(tree, cond, translate(tree->cond, static_cast<$Type*>($nc(this->syms)->booleanType)));
	}
	$set(tree, step, translate(tree->step));
	$set(tree, body, $cast($JCTree$JCStatement, translate(static_cast<$JCTree*>(tree->body))));
	$set(this, result, tree);
}

void Lower::visitReturn($JCTree$JCReturn* tree) {
	if ($nc(tree)->expr != nullptr) {
		$set(tree, expr, translate(tree->expr, $($nc(this->types)->erasure($nc($nc(this->currentMethodDef)->restype)->type))));
	}
	$set(this, result, tree);
}

void Lower::visitSwitch($JCTree$JCSwitch* tree) {
	$var($List, cases, $nc(tree)->patternSwitch ? addDefaultIfNeeded($nc(tree)->cases) : $nc(tree)->cases);
	handleSwitch(tree, tree->selector, cases);
}

void Lower::visitSwitchExpression($JCTree$JCSwitchExpression* tree) {
	$var($List, cases, addDefaultIfNeeded($nc(tree)->cases));
	handleSwitch(tree, $nc(tree)->selector, cases);
}

$List* Lower::addDefaultIfNeeded($List* cases$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, cases, cases$renamed);
	if ($nc($($nc($($nc(cases)->stream()))->flatMap(static_cast<$Function*>($$new(Lower$$Lambda$lambda$addDefaultIfNeeded$13$10)))))->noneMatch(static_cast<$Predicate*>($$new(Lower$$Lambda$lambda$addDefaultIfNeeded$14$11)))) {
		$var($JCTree$JCThrow, thr, $nc(this->make)->Throw($(makeNewClass($nc(this->syms)->incompatibleClassChangeErrorType, $($List::nil())))));
		$init($JCTree$JCCase);
		$var($CaseTree$CaseKind, var$0, $JCTree$JCCase::STATEMENT);
		$var($List, var$1, $List::of($($nc(this->make)->DefaultCaseLabel())));
		$var($JCTree$JCCase, c, $nc(this->make)->Case(var$0, var$1, $($List::of(thr)), nullptr));
		$assign(cases, cases->prepend(c));
	}
	return cases;
}

void Lower::handleSwitch($JCTree* tree, $JCTree$JCExpression* selector$renamed, $List* cases$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, cases, cases$renamed);
	$var($JCTree$JCExpression, selector, selector$renamed);
	$var($ListBuffer, convertedCases, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(cases)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCCase, c, $cast($JCTree$JCCase, i$->next()));
			{
				{
					$var($List, patterns, nullptr)
					switch ($nc($nc(c)->labels)->size()) {
					case 0:
						{}
					case 1:
						{
							convertedCases->append(c);
							break;
						}
					default:
						{
							$assign(patterns, c->labels);
							while ($nc($nc(patterns)->tail)->nonEmpty()) {
								$init($JCTree$JCCase);
								$var($CaseTree$CaseKind, var$0, $JCTree$JCCase::STATEMENT);
								$var($List, var$1, $List::of($cast($JCTree$JCCaseLabel, patterns->head)));
								convertedCases->append($($nc($(make_at($(c->pos()))))->Case(var$0, var$1, $($List::nil()), nullptr)));
								$assign(patterns, patterns->tail);
							}
							$set(c, labels, patterns);
							convertedCases->append(c);
							break;
						}
					}
				}
			}
		}
	}
	{
		$var($Iterator, i$, convertedCases->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCCase, c, $cast($JCTree$JCCase, i$->next()));
			{
				$init($JCTree$JCCase);
				if ($nc(c)->caseKind == $JCTree$JCCase::RULE && c->completesNormally) {
					$var($JCTree$JCBreak, b, $nc($($nc(this->make)->at($TreeInfo::endPos($cast($JCTree, $($nc(c->stats)->last()))))))->Break(nullptr));
					$set($nc(b), target, tree);
					$set(c, stats, $nc(c->stats)->append(b));
				}
			}
		}
	}
	$assign(cases, convertedCases->toList());
	$var($Type, selsuper, $nc(this->types)->supertype($nc(selector)->type));
	bool enumSwitch = selsuper != nullptr && ((int64_t)($nc($nc($nc(selector)->type)->tsym)->flags() & (uint64_t)(int64_t)16384)) != 0;
	bool stringSwitch = selsuper != nullptr && $nc(this->types)->isSameType(selector->type, $nc(this->syms)->stringType);
	bool boxedSwitch = !enumSwitch && !stringSwitch && !$nc(selector->type)->isPrimitive();
	$assign(selector, translate(selector, selector->type));
	$assign(cases, translateCases(cases));
	$init($JCTree$Tag);
	if ($nc(tree)->hasTag($JCTree$Tag::SWITCH)) {
		$set($nc($cast($JCTree$JCSwitch, tree)), selector, selector);
		$set($cast($JCTree$JCSwitch, tree), cases, cases);
	} else {
		if (tree->hasTag($JCTree$Tag::SWITCH_EXPRESSION)) {
			$set($nc($cast($JCTree$JCSwitchExpression, tree)), selector, selector);
			$set($cast($JCTree$JCSwitchExpression, tree), cases, cases);
		} else {
			$Assert::error();
		}
	}
	if (enumSwitch) {
		$set(this, result, visitEnumSwitch(tree, selector, cases));
	} else if (stringSwitch) {
		$set(this, result, visitStringSwitch(tree, selector, cases));
	} else if (boxedSwitch) {
		$set(this, result, visitBoxedPrimitiveSwitch(tree, selector, cases));
	} else {
		$set(this, result, tree);
	}
}

$JCTree* Lower::visitEnumSwitch($JCTree* tree, $JCTree$JCExpression* selector, $List* cases) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$TypeSymbol, enumSym, $nc($nc(selector)->type)->tsym);
	$var($Lower$EnumMapping, map, mapForEnum($($nc(tree)->pos()), enumSym));
	make_at($($nc(tree)->pos()));
	$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree)->pos());
	$var($Name, var$1, $nc(this->names)->ordinal);
	$var($Type, var$2, selector->type);
	$var($Symbol, ordinalMethod, lookupMethod(var$0, var$1, var$2, $($List::nil())));
	$var($JCTree$JCExpression, newSelector, nullptr);
	if ($nc($($nc(cases)->stream()))->anyMatch(static_cast<$Predicate*>($$new(Lower$$Lambda$lambda$visitEnumSwitch$15$12)))) {
		$var($Symbol$VarSymbol, dollar_s, $new($Symbol$VarSymbol, 16 | 4096, $($nc(this->names)->fromString($$str({"s"_s, $$str($nc(tree)->pos$), $$str(this->target->syntheticNameChar())}))), selector->type, this->currentMethodSym));
		$var($JCTree$JCStatement, var, $nc($($nc($($nc(this->make)->at($($nc(tree)->pos()))))->VarDef(dollar_s, selector)))->setType(dollar_s->type));
		$assign(newSelector, $nc(this->make)->Indexed(static_cast<$Symbol*>($nc(map)->mapVar), $(static_cast<$JCTree$JCExpression*>($nc(this->make)->App($($nc(this->make)->Select($(static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(dollar_s)))), ordinalMethod)))))));
		$var($List, var$3, $List::of(var));
		$init($JCTree$Tag);
		$var($JCTree$Tag, var$5, $JCTree$Tag::NE);
		$var($JCTree$JCExpression, var$6, static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(dollar_s))));
		$var($JCTree$JCExpression, var$4, static_cast<$JCTree$JCExpression*>(makeBinary(var$5, var$6, $(makeNull()))));
		$var($JCTree$JCExpression, var$7, newSelector);
		$assign(newSelector, $nc($($nc(this->make)->LetExpr(var$3, $($nc($($nc(this->make)->Conditional(var$4, var$7, $(makeLit($nc(this->syms)->intType, $($Integer::valueOf(-1)))))))->setType($nc(newSelector)->type)))))->setType($nc(newSelector)->type));
	} else {
		$assign(newSelector, $nc(this->make)->Indexed(static_cast<$Symbol*>($nc(map)->mapVar), $(static_cast<$JCTree$JCExpression*>($nc(this->make)->App($($nc(this->make)->Select(selector, ordinalMethod)))))));
	}
	$var($ListBuffer, newCases, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(cases)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCCase, c, $cast($JCTree$JCCase, i$->next()));
			{
				if ($nc(($cast($JCTree$JCCaseLabel, $nc($nc(c)->labels)->head)))->isExpression()) {
					$var($JCTree$JCExpression, pat, nullptr);
					if ($TreeInfo::isNull($cast($JCTree, $nc(c->labels)->head))) {
						$assign(pat, makeLit($nc(this->syms)->intType, $($Integer::valueOf(-1))));
					} else {
						$var($Symbol$VarSymbol, label, $cast($Symbol$VarSymbol, $TreeInfo::symbol($cast($JCTree$JCExpression, $nc(c->labels)->head))));
						$assign(pat, $nc(map)->forConstant(label));
					}
					$init($JCTree$JCCase);
					newCases->append($($nc(this->make)->Case($JCTree$JCCase::STATEMENT, $($List::of(pat)), c->stats, nullptr)));
				} else {
					newCases->append(c);
				}
			}
		}
	}
	$var($JCTree, enumSwitch, nullptr);
	$init($JCTree$Tag);
	if ($nc(tree)->hasTag($JCTree$Tag::SWITCH)) {
		$assign(enumSwitch, $nc(this->make)->Switch(newSelector, $(newCases->toList())));
	} else {
		if (tree->hasTag($JCTree$Tag::SWITCH_EXPRESSION)) {
			$assign(enumSwitch, $nc(this->make)->SwitchExpression(newSelector, $(newCases->toList())));
			$nc(enumSwitch)->setType(tree->type);
		} else {
			$Assert::error();
			$throwNew($AssertionError);
		}
	}
	patchTargets(enumSwitch, tree, enumSwitch);
	return enumSwitch;
}

$JCTree* Lower::visitStringSwitch($JCTree* tree, $JCTree$JCExpression* selector, $List* caseList) {
	$useLocalCurrentObjectStackCache();
	int32_t alternatives = $nc(caseList)->size();
	if (alternatives == 0) {
		return $nc($($nc(this->make)->at($($nc(tree)->pos()))))->Exec($($nc(this->attr)->makeNullCheck(selector)));
	} else {
		$var($ListBuffer, stmtList, $new($ListBuffer));
		$var($Map, caseLabelToPosition, $new($LinkedHashMap, alternatives + 1, 1.0f));
		$var($Map, hashToString, $new($LinkedHashMap, alternatives + 1, 1.0f));
		int32_t casePosition = 0;
		$var($JCTree$JCCase, nullCase, nullptr);
		int32_t nullCaseLabel = -1;
		{
			$var($Iterator, i$, caseList->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCCase, oneCase, $cast($JCTree$JCCase, i$->next()));
				{
					if ($nc(($cast($JCTree$JCCaseLabel, $nc($nc(oneCase)->labels)->head)))->isExpression()) {
						if ($TreeInfo::isNull($cast($JCTree, $nc(oneCase->labels)->head))) {
							$assign(nullCase, oneCase);
							nullCaseLabel = casePosition;
						} else {
							$var($JCTree$JCExpression, expression, $cast($JCTree$JCExpression, $nc(oneCase->labels)->head));
							$var($String, labelExpr, $cast($String, $nc($nc(expression)->type)->constValue()));
							$var($Integer, mapping, $cast($Integer, caseLabelToPosition->put(labelExpr, $($Integer::valueOf(casePosition)))));
							$Assert::checkNull(mapping);
							int32_t hashCode = $nc(labelExpr)->hashCode();
							$var($Set, stringSet, $cast($Set, hashToString->get($($Integer::valueOf(hashCode)))));
							if (stringSet == nullptr) {
								$assign(stringSet, $new($LinkedHashSet, 1, 1.0f));
								stringSet->add(labelExpr);
								hashToString->put($($Integer::valueOf(hashCode)), stringSet);
							} else {
								bool added = $nc(stringSet)->add(labelExpr);
								$Assert::check(added);
							}
						}
					}
					++casePosition;
				}
			}
		}
		$var($Symbol$VarSymbol, dollar_s, $new($Symbol$VarSymbol, 16 | 4096, $($nc(this->names)->fromString($$str({"s"_s, $$str($nc(tree)->pos$), $$str(this->target->syntheticNameChar())}))), $nc(this->syms)->stringType, this->currentMethodSym));
		stmtList->append($($nc($($nc($($nc(this->make)->at($($nc(tree)->pos()))))->VarDef(dollar_s, selector)))->setType(dollar_s->type)));
		$var($Symbol$VarSymbol, dollar_tmp, $new($Symbol$VarSymbol, 4096, $($nc(this->names)->fromString($$str({"tmp"_s, $$str($nc(tree)->pos$), $$str(this->target->syntheticNameChar())}))), $nc(this->syms)->intType, this->currentMethodSym));
		$init($TypeTag);
		$var($JCTree$JCVariableDecl, dollar_tmp_def, $cast($JCTree$JCVariableDecl, $nc($($nc(this->make)->VarDef(dollar_tmp, $($nc(this->make)->Literal($TypeTag::INT, $($Integer::valueOf(-1)))))))->setType(dollar_tmp->type)));
		$set($nc($nc(dollar_tmp_def)->init), type, ($set(dollar_tmp, type, $nc(this->syms)->intType)));
		stmtList->append(dollar_tmp_def);
		$var($ListBuffer, caseBuffer, $new($ListBuffer));
		$var($JCTree$JCExpression, var$0, static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(dollar_s))));
		$var($Name, var$1, $nc(this->names)->hashCode$);
		$var($JCTree$JCMethodInvocation, hashCodeCall, $nc($(makeCall(var$0, var$1, $($List::nil()))))->setType($nc(this->syms)->intType));
		$var($JCTree$JCSwitch, switch1, $nc(this->make)->Switch(hashCodeCall, $(caseBuffer->toList())));
		{
			$var($Iterator, i$, $nc($(hashToString->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					int32_t hashCode = $nc(($cast($Integer, $($nc(entry)->getKey()))))->intValue();
					$var($Set, stringsWithHashCode, $cast($Set, entry->getValue()));
					$Assert::check($nc(stringsWithHashCode)->size() >= 1);
					$var($JCTree$JCStatement, elsepart, nullptr);
					{
						$var($Iterator, i$, $nc(stringsWithHashCode)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($String, caseLabel, $cast($String, i$->next()));
							{
								$var($JCTree$JCExpression, var$2, static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(dollar_s))));
								$var($Name, var$3, $nc(this->names)->equals$);
								$var($JCTree$JCMethodInvocation, stringEqualsCall, makeCall(var$2, var$3, $($List::of($($nc(this->make)->Literal(caseLabel))))));
								$var($JCTree$JCExpression, var$4, static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(dollar_tmp))));
								$assign(elsepart, $nc(this->make)->If(stringEqualsCall, $($nc(this->make)->Exec($($nc($($nc(this->make)->Assign(var$4, $($nc(this->make)->Literal($(caseLabelToPosition->get(caseLabel)))))))->setType(dollar_tmp->type)))), elsepart));
							}
						}
					}
					$var($ListBuffer, lb, $new($ListBuffer));
					$var($JCTree$JCBreak, breakStmt, $nc(this->make)->Break(nullptr));
					$set($nc(breakStmt), target, switch1);
					$nc($(lb->append(elsepart)))->append(breakStmt);
					$init($JCTree$JCCase);
					$var($CaseTree$CaseKind, var$5, $JCTree$JCCase::STATEMENT);
					$var($List, var$6, $List::of($($nc(this->make)->Literal($($Integer::valueOf(hashCode))))));
					caseBuffer->append($($nc(this->make)->Case(var$5, var$6, $(lb->toList()), nullptr)));
				}
			}
		}
		$set($nc(switch1), cases, caseBuffer->toList());
		if (nullCase != nullptr) {
			$init($JCTree$Tag);
			$var($JCTree$Tag, var$8, $JCTree$Tag::NE);
			$var($JCTree$JCExpression, var$9, static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(dollar_s))));
			$var($JCTree$JCExpression, var$7, static_cast<$JCTree$JCExpression*>(makeBinary(var$8, var$9, $(makeNull()))));
			$var($JCTree$JCStatement, var$10, static_cast<$JCTree$JCStatement*>(switch1));
			$var($JCTree$JCExpression, var$11, static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(dollar_tmp))));
			stmtList->append($($nc($($nc(this->make)->If(var$7, var$10, $($nc(this->make)->Exec($($nc($($nc(this->make)->Assign(var$11, $($nc(this->make)->Literal($($Integer::valueOf(nullCaseLabel)))))))->setType(dollar_tmp->type)))))))->setType($nc(this->syms)->intType)));
		} else {
			stmtList->append(switch1);
		}
		$var($ListBuffer, lb, $new($ListBuffer));
		{
			$var($Iterator, i$, caseList->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCCase, oneCase, $cast($JCTree$JCCase, i$->next()));
				{
					bool isDefault = !$nc(($cast($JCTree$JCCaseLabel, $nc($nc(oneCase)->labels)->head)))->isExpression();
					$var($JCTree$JCCaseLabel, caseExpr, nullptr);
					if (isDefault) {
						$assign(caseExpr, nullptr);
					} else if (oneCase == nullCase) {
						$assign(caseExpr, $nc(this->make)->Literal($($Integer::valueOf(nullCaseLabel))));
					} else {
						$assign(caseExpr, $nc(this->make)->Literal($(caseLabelToPosition->get($cast($String, $($nc($nc($($TreeInfo::skipParens($cast($JCTree$JCExpression, $nc(oneCase->labels)->head))))->type)->constValue()))))));
					}
					$init($JCTree$JCCase);
					lb->append($($nc(this->make)->Case($JCTree$JCCase::STATEMENT, caseExpr == nullptr ? $($List::of($($nc(this->make)->DefaultCaseLabel()))) : $($List::of(caseExpr)), oneCase->stats, nullptr)));
				}
			}
		}
		$init($JCTree$Tag);
		if ($nc(tree)->hasTag($JCTree$Tag::SWITCH)) {
			$var($JCTree$JCExpression, var$12, static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(dollar_tmp))));
			$var($JCTree$JCSwitch, switch2, $nc(this->make)->Switch(var$12, $(lb->toList())));
			patchTargets(switch2, tree, switch2);
			stmtList->append(switch2);
			$var($JCTree$JCBlock, res, $nc(this->make)->Block(0, $(stmtList->toList())));
			$nc(res)->endpos = $TreeInfo::endPos(tree);
			return res;
		} else {
			$var($JCTree$JCExpression, var$13, static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(dollar_tmp))));
			$var($JCTree$JCSwitchExpression, switch2, $nc(this->make)->SwitchExpression(var$13, $(lb->toList())));
			patchTargets(switch2, tree, switch2);
			$nc(switch2)->setType(tree->type);
			$var($JCTree$LetExpr, res, $nc(this->make)->LetExpr($(stmtList->toList()), static_cast<$JCTree$JCExpression*>(switch2)));
			$nc(res)->needsCond = true;
			res->setType(tree->type);
			return res;
		}
	}
}

$JCTree* Lower::visitBoxedPrimitiveSwitch($JCTree* tree, $JCTree$JCExpression* selector, $List* cases) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, newSelector, nullptr);
	if ($nc($($nc(cases)->stream()))->anyMatch(static_cast<$Predicate*>($$new(Lower$$Lambda$lambda$visitEnumSwitch$15$12)))) {
		$var($Set, constants, $new($LinkedHashSet));
		$var($JCTree$JCCase, nullCase, nullptr);
		{
			$var($Iterator, i$, cases->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCCase, c, $cast($JCTree$JCCase, i$->next()));
				{
					if ($TreeInfo::isNull($cast($JCTree, $nc($nc(c)->labels)->head))) {
						$assign(nullCase, c);
					} else {
						$init($JCTree$Tag);
						if (!$nc(($cast($JCTree$JCCaseLabel, $nc($nc(c)->labels)->head)))->hasTag($JCTree$Tag::DEFAULTCASELABEL)) {
							constants->add($($Integer::valueOf($nc(($cast($Integer, $($nc($nc(($cast($JCTree$JCCaseLabel, $nc(c->labels)->head)))->type)->constValue()))))->intValue())));
						}
					}
				}
			}
		}
		$Assert::checkNonNull(nullCase);
		int32_t nullValue = constants->isEmpty() ? 0 : $nc(($cast($Integer, $($nc($(constants->iterator()))->next()))))->intValue();
		while (constants->contains($($Integer::valueOf(nullValue)))) {
			++nullValue;
		}
		constants->add($($Integer::valueOf(nullValue)));
		$set($nc($nc(nullCase)->labels), head, makeLit($nc(this->syms)->intType, $($Integer::valueOf(nullValue))));
		int32_t replacementValue = nullValue;
		while (constants->contains($($Integer::valueOf(replacementValue)))) {
			++replacementValue;
		}
		$var($Symbol$VarSymbol, dollar_s, $new($Symbol$VarSymbol, 16 | 4096, $($nc(this->names)->fromString($$str({"s"_s, $$str($nc(tree)->pos$), $$str(this->target->syntheticNameChar())}))), $nc(selector)->type, this->currentMethodSym));
		$var($JCTree$JCStatement, var, $nc($($nc($($nc(this->make)->at($($nc(tree)->pos()))))->VarDef(dollar_s, selector)))->setType(dollar_s->type));
		$init($JCTree$Tag);
		$var($JCTree$Tag, var$1, $JCTree$Tag::NE);
		$var($JCTree$JCExpression, var$2, unbox($($nc(this->make)->Ident(static_cast<$Symbol*>(dollar_s))), $nc(this->syms)->intType));
		$var($JCTree$JCExpression, var$0, static_cast<$JCTree$JCExpression*>(makeBinary(var$1, var$2, $(makeLit($nc(this->syms)->intType, $($Integer::valueOf(nullValue)))))));
		$var($JCTree$JCExpression, var$3, unbox($($nc(this->make)->Ident(static_cast<$Symbol*>(dollar_s))), $nc(this->syms)->intType));
		$var($JCTree$JCExpression, nullValueReplacement, $nc($($nc(this->make)->Conditional(var$0, var$3, $(makeLit($nc(this->syms)->intType, $($Integer::valueOf(replacementValue)))))))->setType($nc(this->syms)->intType));
		$var($JCTree$Tag, var$5, $JCTree$Tag::NE);
		$var($JCTree$JCExpression, var$6, static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(dollar_s))));
		$var($JCTree$JCExpression, var$4, static_cast<$JCTree$JCExpression*>(makeBinary(var$5, var$6, $(makeNull()))));
		$var($JCTree$JCExpression, var$7, nullValueReplacement);
		$var($JCTree$JCExpression, nullCheck, $nc($($nc(this->make)->Conditional(var$4, var$7, $(makeLit($nc(this->syms)->intType, $($Integer::valueOf(nullValue)))))))->setType($nc(this->syms)->intType));
		$assign(newSelector, $nc($($nc(this->make)->LetExpr($($List::of(var)), nullCheck)))->setType($nc(this->syms)->intType));
	} else {
		$assign(newSelector, unbox(selector, $nc(this->syms)->intType));
	}
	$init($JCTree$Tag);
	if ($nc(tree)->hasTag($JCTree$Tag::SWITCH)) {
		$set($nc($cast($JCTree$JCSwitch, tree)), selector, newSelector);
	} else {
		$set($nc($cast($JCTree$JCSwitchExpression, tree)), selector, newSelector);
	}
	return tree;
}

void Lower::visitBreak($JCTree$JCBreak* tree) {
	$set(this, result, tree);
}

void Lower::visitYield($JCTree$JCYield* tree) {
	$set($nc(tree), value, translate(tree->value, $nc(tree->target)->type));
	$set(this, result, tree);
}

void Lower::visitNewArray($JCTree$JCNewArray* tree) {
	$useLocalCurrentObjectStackCache();
	$set($nc(tree), elemtype, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->elemtype))));
	{
		$var($List, t, tree->dims);
		for (; $nc(t)->tail != nullptr; $assign(t, $nc(t)->tail)) {
			if (t->head != nullptr) {
				$set(t, head, translate($cast($JCTree$JCExpression, t->head), static_cast<$Type*>($nc(this->syms)->intType)));
			}
		}
	}
	$set(tree, elems, translate(tree->elems, $($nc(this->types)->elemtype(tree->type))));
	$set(this, result, tree);
}

void Lower::visitSelect($JCTree$JCFieldAccess* tree) {
	$useLocalCurrentObjectStackCache();
	$init($JCTree$Tag);
	bool var$1 = $nc($nc(tree)->selected)->hasTag($JCTree$Tag::SELECT);
	bool var$0 = var$1 && $TreeInfo::name(tree->selected) == $nc(this->names)->_super;
	bool qualifiedSuperAccess = var$0 && !$nc(this->types)->isDirectSuperInterface($nc($nc($nc(($cast($JCTree$JCFieldAccess, tree->selected)))->selected)->type)->tsym, this->currentClass);
	$set(tree, selected, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->selected))));
	if (tree->name == $nc(this->names)->_class) {
		$set(this, result, classOf(tree->selected));
	} else if (tree->name == $nc(this->names)->_super && $nc(this->types)->isDirectSuperInterface($nc($nc(tree->selected)->type)->tsym, this->currentClass)) {
		$var($Symbol$TypeSymbol, supSym, $nc($nc(tree->selected)->type)->tsym);
		$Assert::checkNonNull($($nc(this->types)->asSuper($nc(this->currentClass)->type, supSym)));
		$set(this, result, tree);
	} else if (tree->name == $nc(this->names)->_this || tree->name == $nc(this->names)->_super) {
		$set(this, result, makeThis($(tree->pos()), $nc($nc(tree->selected)->type)->tsym));
	} else {
		$set(this, result, access(tree->sym, tree, this->enclOp, qualifiedSuperAccess));
	}
}

void Lower::visitLetExpr($JCTree$LetExpr* tree) {
	$set($nc(tree), defs, translate(tree->defs));
	$set(tree, expr, translate(tree->expr, tree->type));
	$set(this, result, tree);
}

void Lower::visitAnnotation($JCTree$JCAnnotation* tree) {
	$set(this, result, tree);
}

void Lower::visitTry($JCTree$JCTry* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc($nc(tree)->resources)->nonEmpty()) {
		$set(this, result, makeTwrTry(tree));
		return;
	}
	bool hasBody = $nc($($cast($List, $nc($nc(tree)->body)->getStatements())))->nonEmpty();
	bool hasCatchers = $nc(tree->catchers)->nonEmpty();
	bool hasFinally = tree->finalizer != nullptr && $nc($($cast($List, $nc(tree->finalizer)->getStatements())))->nonEmpty();
	if (!hasCatchers && !hasFinally) {
		$set(this, result, translate(static_cast<$JCTree*>(tree->body)));
		return;
	}
	if (!hasBody) {
		if (hasFinally) {
			$set(this, result, translate(static_cast<$JCTree*>(tree->finalizer)));
		} else {
			$set(this, result, translate(static_cast<$JCTree*>(tree->body)));
		}
		return;
	}
	$TreeTranslator::visitTry(tree);
}

$List* Lower::translateTopLevelClass($Env* env, $JCTree* cdef, $TreeMaker* make) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, translated, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, attrEnv, env);
			$set(this, make, make);
			$set(this, endPosTable, $nc($nc(env)->toplevel)->endPositions);
			$set(this, currentClass, nullptr);
			$set(this, currentMethodDef, nullptr);
			$init($JCTree$Tag);
			$set(this, outermostClassDef, ($nc(cdef)->hasTag($JCTree$Tag::CLASSDEF)) ? $cast($JCTree$JCClassDecl, cdef) : ($JCTree$JCClassDecl*)nullptr);
			$set(this, outermostMemberDef, nullptr);
			$set(this, translated, $new($ListBuffer));
			$set(this, classdefs, $new($HashMap));
			$set(this, actualSymbols, $new($HashMap));
			$set(this, freevarCache, $new($HashMap));
			$set(this, proxies, $new($HashMap));
			$set(this, twrVars, $Scope$WriteableScope::create($nc(this->syms)->noSymbol));
			$set(this, outerThisStack, $List::nil());
			$set(this, accessNums, $new($HashMap));
			$set(this, accessSyms, $new($HashMap));
			$set(this, accessConstrs, $new($HashMap));
			$set(this, accessConstrTags, $List::nil());
			$set(this, accessed, $new($ListBuffer));
			translate(cdef, ($JCTree$JCExpression*)nullptr);
			{
				$var($List, l, $nc(this->accessed)->toList());
				for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
					makeAccessible($cast($Symbol, l->head));
				}
			}
			{
				$var($Iterator, i$, $nc($($nc(this->enumSwitchMap)->values()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Lower$EnumMapping, map, $cast($Lower$EnumMapping, i$->next()));
					$nc(map)->translate();
				}
			}
			checkConflicts($($nc(this->translated)->toList()));
			checkAccessConstructorTags();
			$assign(translated, this->translated);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, attrEnv, nullptr);
			$set(this, make, nullptr);
			$set(this, endPosTable, nullptr);
			$set(this, currentClass, nullptr);
			$set(this, currentMethodDef, nullptr);
			$set(this, outermostClassDef, nullptr);
			$set(this, outermostMemberDef, nullptr);
			$set(this, translated, nullptr);
			$set(this, classdefs, nullptr);
			$set(this, actualSymbols, nullptr);
			$set(this, freevarCache, nullptr);
			$set(this, proxies, nullptr);
			$set(this, outerThisStack, nullptr);
			$set(this, accessNums, nullptr);
			$set(this, accessSyms, nullptr);
			$set(this, accessConstrs, nullptr);
			$set(this, accessConstrTags, nullptr);
			$set(this, accessed, nullptr);
			$nc(this->enumSwitchMap)->clear();
			$set(this, assertionsDisabledClassCache, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return $nc(translated)->toList();
}

bool Lower::lambda$visitEnumSwitch$15($JCTree$JCCase* c) {
	$init(Lower);
	return $TreeInfo::isNull($cast($JCTree, $nc($nc(c)->labels)->head));
}

bool Lower::lambda$addDefaultIfNeeded$14($JCTree$JCCaseLabel* p) {
	$init(Lower);
	$init($JCTree$Tag);
	return $nc(p)->hasTag($JCTree$Tag::DEFAULTCASELABEL);
}

$Stream* Lower::lambda$addDefaultIfNeeded$13($JCTree$JCCase* c) {
	$init(Lower);
	return $nc($nc(c)->labels)->stream();
}

$JCTree$JCExpression* Lower::lambda$lowerBoxedPostop$12($JCTree$JCUnary* tree, bool cast, $JCTree$JCExpression* tmp1) {
	return abstractRval(tmp1, $nc($nc(tree)->arg)->type, static_cast<$Lower$TreeBuilder*>($$new(Lower$$Lambda$lambda$lowerBoxedPostop$11$13, this, tree, tmp1, cast)));
}

$JCTree$JCExpression* Lower::lambda$lowerBoxedPostop$11($JCTree$JCUnary* tree, $JCTree$JCExpression* tmp1, bool cast, $JCTree$JCExpression* tmp2) {
	$useLocalCurrentObjectStackCache();
	$init($JCTree$Tag);
	$JCTree$Tag* opcode = ($nc(tree)->hasTag($JCTree$Tag::POSTINC)) ? $JCTree$Tag::PLUS_ASG : $JCTree$Tag::MINUS_ASG;
	$var($JCTree$JCExpression, lhs, $cast($JCTree$JCExpression, $nc(tmp1)->clone()));
	$assign(lhs, cast ? static_cast<$JCTree$JCExpression*>($nc(this->make)->TypeCast($nc($nc(tree)->arg)->type, lhs)) : lhs);
	$var($JCTree$JCExpression, update, makeAssignop(opcode, lhs, $($nc(this->make)->Literal($($Integer::valueOf(1))))));
	return makeComma(update, tmp2);
}

$JCTree$JCExpression* Lower::lambda$visitAssignop$10($JCTree$JCAssignOp* tree, bool boxingReq, $JCTree$JCExpression* lhs) {
	$useLocalCurrentObjectStackCache();
	$JCTree$Tag* newTag = $nc($($nc(tree)->getTag()))->noAssignOp();
	$var($Symbol$OperatorSymbol, newOperator, $nc(this->operators)->resolveBinary(tree, newTag, tree->type, $nc(tree->rhs)->type));
	$var($JCTree$JCExpression, expr, $cast($JCTree$JCExpression, $nc(lhs)->clone()));
	if ($nc(expr)->type != tree->type) {
		$assign(expr, $nc(this->make)->TypeCast(tree->type, expr));
	}
	$var($JCTree$JCBinary, opResult, $nc(this->make)->Binary(newTag, expr, tree->rhs));
	$set($nc(opResult), operator$, newOperator);
	$set(opResult, type, $nc($nc(newOperator)->type)->getReturnType());
	$var($JCTree$JCExpression, newRhs, boxingReq ? static_cast<$JCTree$JCExpression*>($nc(this->make)->TypeCast($($nc(this->types)->unboxedType(tree->type)), static_cast<$JCTree$JCExpression*>(opResult))) : static_cast<$JCTree$JCExpression*>(opResult));
	return $nc($($nc(this->make)->Assign(lhs, newRhs)))->setType(tree->type);
}

bool Lower::lambda$visitMethodDefInternal$9($Symbol$VarSymbol* field, $JCTree$JCVariableDecl* p) {
	$init(Lower);
	return $nc(p)->name == $nc(field)->name;
}

$Name* Lower::lambda$generateRecordMethod$8($Symbol$VarSymbol* v) {
	$init(Lower);
	return $nc(v)->name;
}

bool Lower::lambda$recordVars$7($Symbol* s) {
	$init(Lower);
	$init($Kinds$Kind);
	return $nc(s)->kind == $Kinds$Kind::VAR && ((int64_t)(s->flags() & (uint64_t)(int64_t)0x2000000000000000)) != 0;
}

$JCTree$JCMethodDecl* Lower::lambda$generateMandatedAccessors$6($List* fields, $JCTree$JCClassDecl* tree, $Symbol$RecordComponent* rc) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCVariableDecl, field, $cast($JCTree$JCVariableDecl, $nc($($nc($($nc($($nc(fields)->stream()))->filter(static_cast<$Predicate*>($$new(Lower$$Lambda$lambda$generateMandatedAccessors$5$14, rc)))))->findAny()))->get()));
	make_at($($nc(tree)->pos()));
	return $nc(this->make)->MethodDef($nc(rc)->accessor, $($nc(this->make)->Block(0, $($List::of($($nc(this->make)->Return($($nc(this->make)->Ident(field)))))))));
}

bool Lower::lambda$generateMandatedAccessors$5($Symbol$RecordComponent* rc, $JCTree$JCVariableDecl* f) {
	$init(Lower);
	return $nc(f)->name == $nc(rc)->name;
}

bool Lower::lambda$generateMandatedAccessors$4($Symbol$RecordComponent* rc) {
	$init(Lower);
	return ((int64_t)($nc($nc(rc)->accessor)->flags() & (uint64_t)(int64_t)$Flags::GENERATED_MEMBER)) != 0;
}

$JCTree$JCExpression* Lower::lambda$abstractLval$3($JCTree$JCArrayAccess* i, $Lower$TreeBuilder* builder, $JCTree$JCExpression* indexed) {
	return abstractRval($nc(i)->index, $nc(this->syms)->intType, static_cast<$Lower$TreeBuilder*>($$new(Lower$$Lambda$lambda$abstractLval$2$15, this, indexed, i, builder)));
}

$JCTree$JCExpression* Lower::lambda$abstractLval$2($JCTree$JCExpression* indexed, $JCTree$JCArrayAccess* i, $Lower$TreeBuilder* builder, $JCTree$JCExpression* index) {
	$var($JCTree$JCExpression, newLval, $nc(this->make)->Indexed(indexed, index));
	$nc(newLval)->setType($nc(i)->type);
	return $nc(builder)->build(newLval);
}

$JCTree$JCExpression* Lower::lambda$abstractLval$1($Lower$TreeBuilder* builder, $JCTree$JCFieldAccess* s, $JCTree$JCExpression* selected) {
	return $nc(builder)->build($($nc(this->make)->Select(selected, $nc(s)->sym)));
}

bool Lower::lambda$binaryAccessOperator$0($JCTree$Tag* tag, int32_t acode, $Symbol$OperatorSymbol* op) {
	$init(Lower);
	return $nc(op)->getAccessCode(tag) == acode;
}

void clinit$Lower($Class* class$) {
	$assignStatic(Lower::lowerKey, $new($Context$Key));
}

Lower::Lower() {
}

$Class* Lower::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Lower$$Lambda$lambda$binaryAccessOperator$0::classInfo$.name)) {
			return Lower$$Lambda$lambda$binaryAccessOperator$0::load$(name, initialize);
		}
		if (name->equals(Lower$$Lambda$lambda$abstractLval$1$1::classInfo$.name)) {
			return Lower$$Lambda$lambda$abstractLval$1$1::load$(name, initialize);
		}
		if (name->equals(Lower$$Lambda$lambda$abstractLval$3$2::classInfo$.name)) {
			return Lower$$Lambda$lambda$abstractLval$3$2::load$(name, initialize);
		}
		if (name->equals(Lower$$Lambda$lambda$generateMandatedAccessors$4$3::classInfo$.name)) {
			return Lower$$Lambda$lambda$generateMandatedAccessors$4$3::load$(name, initialize);
		}
		if (name->equals(Lower$$Lambda$lambda$generateMandatedAccessors$6$4::classInfo$.name)) {
			return Lower$$Lambda$lambda$generateMandatedAccessors$6$4::load$(name, initialize);
		}
		if (name->equals(Lower$$Lambda$lambda$recordVars$7$5::classInfo$.name)) {
			return Lower$$Lambda$lambda$recordVars$7$5::load$(name, initialize);
		}
		if (name->equals(Lower$$Lambda$lambda$generateRecordMethod$8$6::classInfo$.name)) {
			return Lower$$Lambda$lambda$generateRecordMethod$8$6::load$(name, initialize);
		}
		if (name->equals(Lower$$Lambda$lambda$visitMethodDefInternal$9$7::classInfo$.name)) {
			return Lower$$Lambda$lambda$visitMethodDefInternal$9$7::load$(name, initialize);
		}
		if (name->equals(Lower$$Lambda$lambda$visitAssignop$10$8::classInfo$.name)) {
			return Lower$$Lambda$lambda$visitAssignop$10$8::load$(name, initialize);
		}
		if (name->equals(Lower$$Lambda$lambda$lowerBoxedPostop$12$9::classInfo$.name)) {
			return Lower$$Lambda$lambda$lowerBoxedPostop$12$9::load$(name, initialize);
		}
		if (name->equals(Lower$$Lambda$lambda$addDefaultIfNeeded$13$10::classInfo$.name)) {
			return Lower$$Lambda$lambda$addDefaultIfNeeded$13$10::load$(name, initialize);
		}
		if (name->equals(Lower$$Lambda$lambda$addDefaultIfNeeded$14$11::classInfo$.name)) {
			return Lower$$Lambda$lambda$addDefaultIfNeeded$14$11::load$(name, initialize);
		}
		if (name->equals(Lower$$Lambda$lambda$visitEnumSwitch$15$12::classInfo$.name)) {
			return Lower$$Lambda$lambda$visitEnumSwitch$15$12::load$(name, initialize);
		}
		if (name->equals(Lower$$Lambda$lambda$lowerBoxedPostop$11$13::classInfo$.name)) {
			return Lower$$Lambda$lambda$lowerBoxedPostop$11$13::load$(name, initialize);
		}
		if (name->equals(Lower$$Lambda$lambda$generateMandatedAccessors$5$14::classInfo$.name)) {
			return Lower$$Lambda$lambda$generateMandatedAccessors$5$14::load$(name, initialize);
		}
		if (name->equals(Lower$$Lambda$lambda$abstractLval$2$15::classInfo$.name)) {
			return Lower$$Lambda$lambda$abstractLval$2$15::load$(name, initialize);
		}
	}
	$loadClass(Lower, name, initialize, &_Lower_ClassInfo_, clinit$Lower, allocate$Lower);
	return class$;
}

$Class* Lower::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com