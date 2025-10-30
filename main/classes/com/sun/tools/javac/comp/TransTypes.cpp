#include <com/sun/tools/javac/comp/TransTypes.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$IntersectionClassType.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/CompileStates$CompileState.h>
#include <com/sun/tools/javac/comp/CompileStates.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve.h>
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
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>
#include <com/sun/tools/javac/tree/JCTree$JCDoWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpressionStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCGuardPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCInstanceOf.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCParens.h>
#include <com/sun/tools/javac/tree/JCTree$JCParenthesizedPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitch.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCSynchronized.h>
#include <com/sun/tools/javac/tree/JCTree$JCThrow.h>
#include <com/sun/tools/javac/tree/JCTree$JCTry.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeApply.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeIntersection.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/tree/TreeTranslator.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef CLASS
#undef DEFAULT_METHODS
#undef FLOW
#undef GRAPH_INFERENCE
#undef MTH
#undef NON_RECURSIVE
#undef NULLCHK
#undef TYP
#undef TYPECAST
#undef TYPEVAR
#undef UNBOUND
#undef VAR
#undef VOID

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$IntersectionClassType = ::com::sun::tools::javac::code::Type$IntersectionClassType;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $CompileStates = ::com::sun::tools::javac::comp::CompileStates;
using $CompileStates$CompileState = ::com::sun::tools::javac::comp::CompileStates$CompileState;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
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
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCDoWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop;
using $JCTree$JCEnhancedForLoop = ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCExpressionStatement = ::com::sun::tools::javac::tree::JCTree$JCExpressionStatement;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCForLoop = ::com::sun::tools::javac::tree::JCTree$JCForLoop;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
using $JCTree$JCGuardPattern = ::com::sun::tools::javac::tree::JCTree$JCGuardPattern;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCIf = ::com::sun::tools::javac::tree::JCTree$JCIf;
using $JCTree$JCInstanceOf = ::com::sun::tools::javac::tree::JCTree$JCInstanceOf;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMemberReference$ReferenceKind = ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $JCTree$JCParens = ::com::sun::tools::javac::tree::JCTree$JCParens;
using $JCTree$JCParenthesizedPattern = ::com::sun::tools::javac::tree::JCTree$JCParenthesizedPattern;
using $JCTree$JCPattern = ::com::sun::tools::javac::tree::JCTree$JCPattern;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCSwitch = ::com::sun::tools::javac::tree::JCTree$JCSwitch;
using $JCTree$JCSwitchExpression = ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression;
using $JCTree$JCSynchronized = ::com::sun::tools::javac::tree::JCTree$JCSynchronized;
using $JCTree$JCThrow = ::com::sun::tools::javac::tree::JCTree$JCThrow;
using $JCTree$JCTry = ::com::sun::tools::javac::tree::JCTree$JCTry;
using $JCTree$JCTypeApply = ::com::sun::tools::javac::tree::JCTree$JCTypeApply;
using $JCTree$JCTypeCast = ::com::sun::tools::javac::tree::JCTree$JCTypeCast;
using $JCTree$JCTypeIntersection = ::com::sun::tools::javac::tree::JCTree$JCTypeIntersection;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$JCWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCWhileLoop;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $TreeTranslator = ::com::sun::tools::javac::tree::TreeTranslator;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _TransTypes_FieldInfo_[] = {
	{"transTypesKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/TransTypes;>;", $PROTECTED | $STATIC | $FINAL, $staticField(TransTypes, transTypesKey)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE, $field(TransTypes, names)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE, $field(TransTypes, log)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE, $field(TransTypes, syms)},
	{"make", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $PRIVATE, $field(TransTypes, make)},
	{"enter", "Lcom/sun/tools/javac/comp/Enter;", nullptr, $PRIVATE, $field(TransTypes, enter)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE, $field(TransTypes, types)},
	{"annotate", "Lcom/sun/tools/javac/comp/Annotate;", nullptr, $PRIVATE, $field(TransTypes, annotate)},
	{"attr", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $PRIVATE, $field(TransTypes, attr)},
	{"resolve", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $PRIVATE | $FINAL, $field(TransTypes, resolve)},
	{"compileStates", "Lcom/sun/tools/javac/comp/CompileStates;", nullptr, $PRIVATE | $FINAL, $field(TransTypes, compileStates)},
	{"allowGraphInference", "Z", nullptr, $PRIVATE | $FINAL, $field(TransTypes, allowGraphInference)},
	{"allowInterfaceBridges", "Z", nullptr, $PRIVATE | $FINAL, $field(TransTypes, allowInterfaceBridges)},
	{"pt", "Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $field(TransTypes, pt)},
	{"returnType", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(TransTypes, returnType)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PRIVATE, $field(TransTypes, env)},
	{"statePreviousToFlowAssertMsg", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TransTypes, statePreviousToFlowAssertMsg)},
	{}
};

$MethodInfo _TransTypes_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(TransTypes::*)($Context*)>(&TransTypes::init$))},
	{"addBridge", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/ListBuffer;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/tree/JCTree;>;)V", 0},
	{"addBridgeIfNeeded", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/ListBuffer;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/tree/JCTree;>;)V", 0},
	{"addBridges", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/ListBuffer;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/tree/JCTree;>;)V", 0},
	{"addBridges", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/ListBuffer;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/tree/JCTree;>;)V", 0},
	{"cast", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"coerce", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", $PUBLIC},
	{"coerce", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"createBridgeParams", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$VarSymbol;>;", $PRIVATE, $method(static_cast<$List*(TransTypes::*)($Symbol$MethodSymbol*,$Symbol$MethodSymbol*,$Type*)>(&TransTypes::createBridgeParams))},
	{"erasure", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(TransTypes::*)($Type*)>(&TransTypes::erasure))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/TransTypes;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TransTypes*(*)($Context*)>(&TransTypes::instance))},
	{"isBridgeNeeded", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(static_cast<bool(TransTypes::*)($Symbol$MethodSymbol*,$Symbol$MethodSymbol*,$Type*)>(&TransTypes::isBridgeNeeded))},
	{"isSameMemberWhenErased", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(static_cast<bool(TransTypes::*)($Type*,$Symbol$MethodSymbol*,$Type*)>(&TransTypes::isSameMemberWhenErased))},
	{"retype", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"translate", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(TT;Lcom/sun/tools/javac/code/Type;)TT;", $PUBLIC},
	{"translate", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(Lcom/sun/tools/javac/util/List<TT;>;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<TT;>;", $PUBLIC},
	{"translateArgs", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(Lcom/sun/tools/javac/util/List<TT;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<TT;>;", 0},
	{"translateArgs", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/util/List;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(Lcom/sun/tools/javac/util/List<TT;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/util/List<TT;>;", $PUBLIC},
	{"translateClass", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, 0},
	{"translateTopLevelClass", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"visitAnnotatedType", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotatedType;)V", nullptr, $PUBLIC},
	{"visitAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)V", nullptr, $PUBLIC},
	{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC},
	{"visitAssert", "(Lcom/sun/tools/javac/tree/JCTree$JCAssert;)V", nullptr, $PUBLIC},
	{"visitAssign", "(Lcom/sun/tools/javac/tree/JCTree$JCAssign;)V", nullptr, $PUBLIC},
	{"visitAssignop", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)V", nullptr, $PUBLIC},
	{"visitBinary", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)V", nullptr, $PUBLIC},
	{"visitBindingPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCBindingPattern;)V", nullptr, $PUBLIC},
	{"visitBreak", "(Lcom/sun/tools/javac/tree/JCTree$JCBreak;)V", nullptr, $PUBLIC},
	{"visitCase", "(Lcom/sun/tools/javac/tree/JCTree$JCCase;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitConditional", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", nullptr, $PUBLIC},
	{"visitDoLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCDoWhileLoop;)V", nullptr, $PUBLIC},
	{"visitExec", "(Lcom/sun/tools/javac/tree/JCTree$JCExpressionStatement;)V", nullptr, $PUBLIC},
	{"visitForLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCForLoop;)V", nullptr, $PUBLIC},
	{"visitForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)V", nullptr, $PUBLIC},
	{"visitGuardPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCGuardPattern;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitIf", "(Lcom/sun/tools/javac/tree/JCTree$JCIf;)V", nullptr, $PUBLIC},
	{"visitIndexed", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayAccess;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitNewArray", "(Lcom/sun/tools/javac/tree/JCTree$JCNewArray;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitParens", "(Lcom/sun/tools/javac/tree/JCTree$JCParens;)V", nullptr, $PUBLIC},
	{"visitParenthesizedPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCParenthesizedPattern;)V", nullptr, $PUBLIC},
	{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC},
	{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitSwitch", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitch;)V", nullptr, $PUBLIC},
	{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC},
	{"visitSynchronized", "(Lcom/sun/tools/javac/tree/JCTree$JCSynchronized;)V", nullptr, $PUBLIC},
	{"visitThrow", "(Lcom/sun/tools/javac/tree/JCTree$JCThrow;)V", nullptr, $PUBLIC},
	{"visitTry", "(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V", nullptr, $PUBLIC},
	{"visitTypeApply", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeApply;)V", nullptr, $PUBLIC},
	{"visitTypeArray", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayTypeTree;)V", nullptr, $PUBLIC},
	{"visitTypeCast", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PUBLIC},
	{"visitTypeIntersection", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeIntersection;)V", nullptr, $PUBLIC},
	{"visitTypeTest", "(Lcom/sun/tools/javac/tree/JCTree$JCInstanceOf;)V", nullptr, $PUBLIC},
	{"visitUnary", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{"visitWhileLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCWhileLoop;)V", nullptr, $PUBLIC},
	{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TransTypes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.TransTypes",
	"com.sun.tools.javac.tree.TreeTranslator",
	nullptr,
	_TransTypes_FieldInfo_,
	_TransTypes_MethodInfo_
};

$Object* allocate$TransTypes($Class* clazz) {
	return $of($alloc(TransTypes));
}

$Context$Key* TransTypes::transTypesKey = nullptr;
$String* TransTypes::statePreviousToFlowAssertMsg = nullptr;

TransTypes* TransTypes::instance($Context* context) {
	$init(TransTypes);
	$var(TransTypes, instance, $cast(TransTypes, $nc(context)->get(TransTypes::transTypesKey)));
	if (instance == nullptr) {
		$assign(instance, $new(TransTypes, context));
	}
	return instance;
}

void TransTypes::init$($Context* context) {
	$TreeTranslator::init$();
	$set(this, returnType, nullptr);
	$nc(context)->put(TransTypes::transTypesKey, $of(this));
	$set(this, compileStates, $CompileStates::instance(context));
	$set(this, names, $Names::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, enter, $Enter::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, make, $TreeMaker::instance(context));
	$set(this, resolve, $Resolve::instance(context));
	$Source* source = $Source::instance(context);
	$init($Source$Feature);
	this->allowInterfaceBridges = $Source$Feature::DEFAULT_METHODS->allowedInSource(source);
	this->allowGraphInference = $Source$Feature::GRAPH_INFERENCE->allowedInSource(source);
	$set(this, annotate, $Annotate::instance(context));
	$set(this, attr, $Attr::instance(context));
}

$JCTree$JCExpression* TransTypes::cast($JCTree$JCExpression* tree$renamed, $Type* target) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, tree, tree$renamed);
	int32_t oldpos = $nc(this->make)->pos;
	$nc(this->make)->at($nc(tree)->pos$);
	if (!$nc(this->types)->isSameType($nc(tree)->type, target)) {
		if (!$nc(this->resolve)->isAccessible(this->env, $nc(target)->tsym)) {
			$nc(this->resolve)->logAccessErrorInternal(this->env, tree, target);
		}
		$assign(tree, $nc($($nc(this->make)->TypeCast($(static_cast<$JCTree*>($nc(this->make)->Type(target))), tree)))->setType(target));
	}
	$nc(this->make)->pos = oldpos;
	return tree;
}

$JCTree$JCExpression* TransTypes::coerce($Env* env, $JCTree$JCExpression* tree, $Type* target) {
	$useLocalCurrentObjectStackCache();
	$var($Env, prevEnv, this->env);
	{
		$var($Throwable, var$0, nullptr);
		$var($JCTree$JCExpression, var$2, nullptr);
		bool return$1 = false;
		try {
			$set(this, env, env);
			$assign(var$2, coerce(tree, target));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set(this, env, prevEnv);
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

$JCTree$JCExpression* TransTypes::coerce($JCTree$JCExpression* tree, $Type* target) {
	$var($Type, btarget, $nc(target)->baseType());
	bool var$0 = $nc($nc(tree)->type)->isPrimitive();
	if (var$0 == target->isPrimitive()) {
		return $nc(this->types)->isAssignable(tree->type, btarget, $nc(this->types)->noWarnings) ? tree : cast(tree, btarget);
	}
	return tree;
}

$JCTree$JCExpression* TransTypes::retype($JCTree$JCExpression* tree, $Type* erasedType, $Type* target$renamed) {
	$var($Type, target, target$renamed);
	if (!$nc(erasedType)->isPrimitive()) {
		if (target != nullptr && target->isPrimitive()) {
			$assign(target, erasure($nc(tree)->type));
		}
		$set($nc(tree), type, erasedType);
		if (target != nullptr) {
			return coerce(tree, target);
		}
	}
	return tree;
}

$List* TransTypes::translateArgs($List* _args, $List* parameters$renamed, $Type* varargsElement) {
	$useLocalCurrentObjectStackCache();
	$var($List, parameters, parameters$renamed);
	if ($nc(parameters)->isEmpty()) {
		return _args;
	}
	$var($List, args, _args);
	while ($nc($nc(parameters)->tail)->nonEmpty()) {
		$set($nc(args), head, translate($cast($JCTree, args->head), $cast($Type, parameters->head)));
		$assign(args, args->tail);
		$assign(parameters, parameters->tail);
	}
	$var($Type, parameter, $cast($Type, $nc(parameters)->head));
	$Assert::check(varargsElement != nullptr || $nc(args)->length() == 1);
	if (varargsElement != nullptr) {
		while ($nc(args)->nonEmpty()) {
			$set(args, head, translate($cast($JCTree, args->head), varargsElement));
			$assign(args, args->tail);
		}
	} else {
		$set($nc(args), head, translate($cast($JCTree, args->head), parameter));
	}
	return _args;
}

$List* TransTypes::translateArgs($List* _args, $List* parameters, $Type* varargsElement, $Env* localEnv) {
	$useLocalCurrentObjectStackCache();
	$var($Env, prevEnv, this->env);
	{
		$var($Throwable, var$0, nullptr);
		$var($List, var$2, nullptr);
		bool return$1 = false;
		try {
			$set(this, env, localEnv);
			$assign(var$2, translateArgs(_args, parameters, varargsElement));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set(this, env, prevEnv);
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

void TransTypes::addBridge($JCDiagnostic$DiagnosticPosition* pos, $Symbol$MethodSymbol* meth, $Symbol$MethodSymbol* impl, $Symbol$ClassSymbol* origin, $ListBuffer* bridges) {
	$useLocalCurrentObjectStackCache();
	$nc(this->make)->at(pos);
	$var($Type, implTypeErasure, erasure($nc(impl)->type));
	$var($Type, bridgeType, $nc(meth)->erasure(this->types));
	int64_t var$0 = (((int64_t)($nc(impl)->flags() & (uint64_t)(int64_t)7)) | 4096) | (int64_t)0x0000000080000000;
	int64_t flags = var$0 | ($nc(origin)->isInterface() ? (int64_t)0x0000080000000000 : (int64_t)0);
	$var($Symbol$MethodSymbol, bridge, $new($Symbol$MethodSymbol, flags, meth->name, bridgeType, origin));
	$set(bridge, params$, createBridgeParams(impl, bridge, bridgeType));
	bridge->setAttributes(impl);
	$var($JCTree$JCMethodDecl, md, $nc(this->make)->MethodDef(bridge, nullptr));
	$var($JCTree$JCExpression, receiver, ($equals(impl->owner, origin)) ? $nc(this->make)->This($($nc(origin)->erasure(this->types))) : static_cast<$JCTree$JCExpression*>($nc(this->make)->Super($($nc($nc($($nc(this->types)->supertype($nc(origin)->type)))->tsym)->erasure(this->types)), origin)));
	$var($Type, calltype, $nc(implTypeErasure)->getReturnType());
	$var($JCTree$JCExpression, var$1, $nc($($nc(this->make)->Select(receiver, static_cast<$Symbol*>(impl))))->setType(calltype));
	$var($List, var$2, $nc(this->make)->Idents($nc(md)->params));
	$var($JCTree$JCExpression, call, $nc($($nc(this->make)->Apply(nullptr, var$1, $(translateArgs(var$2, $(implTypeErasure->getParameterTypes()), nullptr)))))->setType(calltype));
	$init($TypeTag);
	$var($JCTree$JCStatement, stat, ($nc($(implTypeErasure->getReturnType()))->hasTag($TypeTag::VOID)) ? static_cast<$JCTree$JCStatement*>($nc(this->make)->Exec(call)) : static_cast<$JCTree$JCStatement*>($nc(this->make)->Return($(coerce(call, $($nc(bridgeType)->getReturnType()))))));
	$set($nc(md), body, $nc(this->make)->Block(0, $($List::of(stat))));
	$nc(bridges)->append(md);
	$nc($($nc(origin)->members()))->enter(bridge);
}

$List* TransTypes::createBridgeParams($Symbol$MethodSymbol* impl, $Symbol$MethodSymbol* bridge, $Type* bridgeType) {
	$useLocalCurrentObjectStackCache();
	$var($List, bridgeParams, nullptr);
	if ($nc(impl)->params$ != nullptr) {
		$assign(bridgeParams, $List::nil());
		$var($List, implParams, impl->params$);
		$var($Type$MethodType, mType, $cast($Type$MethodType, bridgeType));
		$var($List, argTypes, $nc(mType)->argtypes$);
		while (true) {
			bool var$0 = $nc(implParams)->nonEmpty();
			if (!(var$0 && $nc(argTypes)->nonEmpty())) {
				break;
			}
			{
				$var($Symbol$VarSymbol, param, $new($Symbol$VarSymbol, ($nc(($cast($Symbol$VarSymbol, implParams->head)))->flags() | 4096) | (int64_t)0x0000000200000000, $nc(($cast($Symbol$VarSymbol, implParams->head)))->name, $cast($Type, argTypes->head), bridge));
				param->setAttributes($cast($Symbol, implParams->head));
				$assign(bridgeParams, $nc(bridgeParams)->append(param));
				$assign(implParams, implParams->tail);
				$assign(argTypes, argTypes->tail);
			}
		}
	}
	return bridgeParams;
}

void TransTypes::addBridgeIfNeeded($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym, $Symbol$ClassSymbol* origin, $ListBuffer* bridges) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	bool var$1 = $nc(sym)->kind == $Kinds$Kind::MTH && sym->name != $nc(this->names)->init && ((int64_t)(sym->flags() & (uint64_t)(int64_t)(2 | 8))) == 0;
	bool var$0 = var$1 && ((int64_t)(sym->flags() & (uint64_t)(int64_t)4096)) != 4096;
	if (var$0 && sym->isMemberOf(origin, this->types)) {
		$var($Symbol$MethodSymbol, meth, $cast($Symbol$MethodSymbol, sym));
		$var($Symbol$MethodSymbol, bridge, meth->binaryImplementation(origin, this->types));
		$var($Symbol$MethodSymbol, impl, meth->implementation(origin, this->types, true));
		if (bridge == nullptr || bridge == meth || (impl != nullptr && !$nc($nc(bridge)->owner)->isSubClass(impl->owner, this->types))) {
			if (impl != nullptr && bridge != impl && isBridgeNeeded(meth, impl, $nc(origin)->type)) {
				addBridge(pos, meth, impl, origin, bridges);
			} else {
				bool var$6 = impl == meth && !$equals(impl->owner, origin) && ((int64_t)(impl->flags() & (uint64_t)(int64_t)16)) == 0;
				bool var$5 = var$6 && ((int64_t)(meth->flags() & (uint64_t)(int64_t)(1024 | 1))) == 1;
				if (var$5) {
					int64_t var$7 = ((int64_t)($nc(origin)->flags() & (uint64_t)(int64_t)1));
					var$5 = var$7 > ((int64_t)($nc(impl->owner)->flags() & (uint64_t)(int64_t)1));
				}
				if (var$5) {
					addBridge(pos, meth, impl, origin, bridges);
				}
			}
		}
	}
}

bool TransTypes::isBridgeNeeded($Symbol$MethodSymbol* method, $Symbol$MethodSymbol* impl, $Type* dest) {
	$useLocalCurrentObjectStackCache();
	if (impl != method) {
		$var($Type, method_erasure, $nc(method)->erasure(this->types));
		if (!isSameMemberWhenErased(dest, method, method_erasure)) {
			return true;
		}
		$var($Type, impl_erasure, $nc(impl)->erasure(this->types));
		if (!isSameMemberWhenErased(dest, impl, impl_erasure)) {
			return true;
		}
		return !$nc(this->types)->isSameType(impl_erasure, method_erasure);
	} else {
		if (((int64_t)($nc(method)->flags() & (uint64_t)(int64_t)1024)) != 0) {
			return false;
		}
		return !isSameMemberWhenErased(dest, method, $($nc(method)->erasure(this->types)));
	}
}

bool TransTypes::isSameMemberWhenErased($Type* type, $Symbol$MethodSymbol* method, $Type* erasure) {
	$useLocalCurrentObjectStackCache();
	return $nc(this->types)->isSameType($(this->erasure($($nc(this->types)->memberType(type, method)))), erasure);
}

void TransTypes::addBridges($JCDiagnostic$DiagnosticPosition* pos, $Symbol$TypeSymbol* i, $Symbol$ClassSymbol* origin, $ListBuffer* bridges) {
	$useLocalCurrentObjectStackCache();
	{
		$init($Scope$LookupKind);
		$var($Iterator, i$, $nc($($nc($($nc(i)->members()))->getSymbols($Scope$LookupKind::NON_RECURSIVE)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			addBridgeIfNeeded(pos, sym, origin, bridges);
		}
	}
	{
		$var($List, l, $nc(this->types)->interfaces(i->type));
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			addBridges(pos, $nc(($cast($Type, l->head)))->tsym, origin, bridges);
		}
	}
}

void TransTypes::addBridges($JCDiagnostic$DiagnosticPosition* pos, $Symbol$ClassSymbol* origin, $ListBuffer* bridges) {
	$useLocalCurrentObjectStackCache();
	$var($Type, st, $nc(this->types)->supertype($nc(origin)->type));
	$init($TypeTag);
	while ($nc(st)->hasTag($TypeTag::CLASS)) {
		addBridges(pos, st->tsym, origin, bridges);
		$assign(st, $nc(this->types)->supertype(st));
	}
	{
		$var($List, l, $nc(this->types)->interfaces($nc(origin)->type));
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			addBridges(pos, $nc(($cast($Type, l->head)))->tsym, origin, bridges);
		}
	}
}

$JCTree* TransTypes::translate($JCTree* tree, $Type* pt) {
	$useLocalCurrentObjectStackCache();
	$var($Type, prevPt, this->pt);
	{
		$var($Throwable, var$0, nullptr);
		$var($JCTree, var$2, nullptr);
		bool return$1 = false;
		try {
			$set(this, pt, pt);
			$assign(var$2, translate(tree));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set(this, pt, prevPt);
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

$List* TransTypes::translate($List* trees, $Type* pt) {
	$useLocalCurrentObjectStackCache();
	$var($Type, prevPt, this->pt);
	$var($List, res, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, pt, pt);
			$assign(res, translate(trees));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, pt, prevPt);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return res;
}

void TransTypes::visitClassDef($JCTree$JCClassDecl* tree) {
	translateClass($nc(tree)->sym);
	$set(this, result, tree);
}

void TransTypes::visitMethodDef($JCTree$JCMethodDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, prevRetType, this->returnType);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, returnType, $nc($(erasure($nc(tree)->type)))->getReturnType());
			$set($nc(tree), restype, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->restype), ($Type*)nullptr)));
			$set(tree, typarams, $List::nil());
			$set(tree, params, translateVarDefs(tree->params));
			$set(tree, recvparam, $cast($JCTree$JCVariableDecl, translate(static_cast<$JCTree*>(tree->recvparam), ($Type*)nullptr)));
			$set(tree, thrown, translate(tree->thrown, ($Type*)nullptr));
			$set(tree, body, $cast($JCTree$JCBlock, translate(static_cast<$JCTree*>(tree->body), $($nc($($nc(tree->sym)->erasure(this->types)))->getReturnType()))));
			$set(tree, type, erasure(tree->type));
			$set(this, result, tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, returnType, prevRetType);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TransTypes::visitVarDef($JCTree$JCVariableDecl* tree) {
	$set($nc(tree), vartype, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->vartype), ($Type*)nullptr)));
	$set(tree, init, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->init), $($nc(tree->sym)->erasure(this->types)))));
	$set(tree, type, erasure(tree->type));
	$set(this, result, tree);
}

void TransTypes::visitDoLoop($JCTree$JCDoWhileLoop* tree) {
	$set($nc(tree), body, $cast($JCTree$JCStatement, translate(static_cast<$JCTree*>(tree->body))));
	$set(tree, cond, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->cond), static_cast<$Type*>($nc(this->syms)->booleanType))));
	$set(this, result, tree);
}

void TransTypes::visitWhileLoop($JCTree$JCWhileLoop* tree) {
	$set($nc(tree), cond, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->cond), static_cast<$Type*>($nc(this->syms)->booleanType))));
	$set(tree, body, $cast($JCTree$JCStatement, translate(static_cast<$JCTree*>(tree->body))));
	$set(this, result, tree);
}

void TransTypes::visitForLoop($JCTree$JCForLoop* tree) {
	$set($nc(tree), init, translate(tree->init, ($Type*)nullptr));
	if (tree->cond != nullptr) {
		$set(tree, cond, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->cond), static_cast<$Type*>($nc(this->syms)->booleanType))));
	}
	$set(tree, step, translate(tree->step, ($Type*)nullptr));
	$set(tree, body, $cast($JCTree$JCStatement, translate(static_cast<$JCTree*>(tree->body))));
	$set(this, result, tree);
}

void TransTypes::visitForeachLoop($JCTree$JCEnhancedForLoop* tree) {
	$useLocalCurrentObjectStackCache();
	$set($nc(tree), var, $cast($JCTree$JCVariableDecl, translate(static_cast<$JCTree*>(tree->var), ($Type*)nullptr)));
	$var($Type, iterableType, $nc(tree->expr)->type);
	$set(tree, expr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr), $(erasure($nc(tree->expr)->type)))));
	if ($nc(this->types)->elemtype($nc(tree->expr)->type) == nullptr) {
		$set($nc(tree->expr), type, iterableType);
	}
	$set(tree, body, $cast($JCTree$JCStatement, translate(static_cast<$JCTree*>(tree->body))));
	$set(this, result, tree);
}

void TransTypes::visitLambda($JCTree$JCLambda* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, prevRetType, this->returnType);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, returnType, $nc($(erasure($($nc(tree)->getDescriptorType(this->types)))))->getReturnType());
			$set($nc(tree), params, translate(tree->params));
			$init($TypeTag);
			$set(tree, body, translate(tree->body, $nc(tree->body)->type == nullptr || $nc(this->returnType)->hasTag($TypeTag::VOID) ? ($Type*)nullptr : this->returnType));
			if (!$nc(tree->type)->isIntersection()) {
				$set(tree, type, erasure(tree->type));
			} else {
				$set(tree, type, $nc(this->types)->erasure($nc($nc($($nc(this->types)->findDescriptorSymbol($nc(tree->type)->tsym)))->owner)->type));
			}
			$set(this, result, tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, returnType, prevRetType);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TransTypes::visitSwitch($JCTree$JCSwitch* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, selsuper, $nc(this->types)->supertype($nc($nc(tree)->selector)->type));
	bool enumSwitch = selsuper != nullptr && selsuper->tsym == $nc(this->syms)->enumSym;
	$var($Type, target, enumSwitch ? erasure($nc($nc(tree)->selector)->type) : static_cast<$Type*>($nc(this->syms)->intType));
	$set($nc(tree), selector, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->selector), target)));
	$set(tree, cases, translateCases(tree->cases));
	$set(this, result, tree);
}

void TransTypes::visitCase($JCTree$JCCase* tree) {
	$set($nc(tree), labels, translate(tree->labels, ($Type*)nullptr));
	$set(tree, stats, translate(tree->stats));
	$set(this, result, tree);
}

void TransTypes::visitBindingPattern($JCTree$JCBindingPattern* tree) {
	$set($nc(tree), var, $cast($JCTree$JCVariableDecl, translate(static_cast<$JCTree*>(tree->var), ($Type*)nullptr)));
	$set(this, result, tree);
}

void TransTypes::visitSwitchExpression($JCTree$JCSwitchExpression* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, selsuper, $nc(this->types)->supertype($nc($nc(tree)->selector)->type));
	bool enumSwitch = selsuper != nullptr && selsuper->tsym == $nc(this->syms)->enumSym;
	$var($Type, target, enumSwitch ? erasure($nc($nc(tree)->selector)->type) : static_cast<$Type*>($nc(this->syms)->intType));
	$set($nc(tree), selector, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->selector), target)));
	$set(tree, cases, translate(tree->cases));
	$set(tree, type, erasure(tree->type));
	$set(this, result, retype(tree, tree->type, this->pt));
}

void TransTypes::visitParenthesizedPattern($JCTree$JCParenthesizedPattern* tree) {
	$set($nc(tree), pattern, $cast($JCTree$JCPattern, translate(static_cast<$JCTree*>(tree->pattern), ($Type*)nullptr)));
	$set(this, result, tree);
}

void TransTypes::visitGuardPattern($JCTree$JCGuardPattern* tree) {
	$set($nc(tree), patt, $cast($JCTree$JCPattern, translate(static_cast<$JCTree*>(tree->patt), ($Type*)nullptr)));
	$set(tree, expr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr), static_cast<$Type*>($nc(this->syms)->booleanType))));
	$set(this, result, tree);
}

void TransTypes::visitSynchronized($JCTree$JCSynchronized* tree) {
	$set($nc(tree), lock, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->lock), $(erasure($nc(tree->lock)->type)))));
	$set(tree, body, $cast($JCTree$JCBlock, translate(static_cast<$JCTree*>(tree->body))));
	$set(this, result, tree);
}

void TransTypes::visitTry($JCTree$JCTry* tree) {
	$set($nc(tree), resources, translate(tree->resources, $nc(this->syms)->autoCloseableType));
	$set(tree, body, $cast($JCTree$JCBlock, translate(static_cast<$JCTree*>(tree->body))));
	$set(tree, catchers, translateCatchers(tree->catchers));
	$set(tree, finalizer, $cast($JCTree$JCBlock, translate(static_cast<$JCTree*>(tree->finalizer))));
	$set(this, result, tree);
}

void TransTypes::visitConditional($JCTree$JCConditional* tree) {
	$useLocalCurrentObjectStackCache();
	$set($nc(tree), cond, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->cond), static_cast<$Type*>($nc(this->syms)->booleanType))));
	$set(tree, truepart, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->truepart), $(erasure(tree->type)))));
	$set(tree, falsepart, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->falsepart), $(erasure(tree->type)))));
	$set(tree, type, erasure(tree->type));
	$set(this, result, retype(tree, tree->type, this->pt));
}

void TransTypes::visitIf($JCTree$JCIf* tree) {
	$set($nc(tree), cond, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->cond), static_cast<$Type*>($nc(this->syms)->booleanType))));
	$set(tree, thenpart, $cast($JCTree$JCStatement, translate(static_cast<$JCTree*>(tree->thenpart))));
	$set(tree, elsepart, $cast($JCTree$JCStatement, translate(static_cast<$JCTree*>(tree->elsepart))));
	$set(this, result, tree);
}

void TransTypes::visitExec($JCTree$JCExpressionStatement* tree) {
	$set($nc(tree), expr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr), ($Type*)nullptr)));
	$set(this, result, tree);
}

void TransTypes::visitReturn($JCTree$JCReturn* tree) {
	$init($TypeTag);
	if (!$nc(this->returnType)->hasTag($TypeTag::VOID)) {
		$set($nc(tree), expr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr), this->returnType)));
	}
	$set(this, result, tree);
}

void TransTypes::visitBreak($JCTree$JCBreak* tree) {
	$set(this, result, tree);
}

void TransTypes::visitYield($JCTree$JCYield* tree) {
	$set($nc(tree), value, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->value), $(erasure($nc(tree->value)->type)))));
	$set($nc(tree->value), type, erasure($nc(tree->value)->type));
	$set(tree, value, retype(tree->value, $nc(tree->value)->type, this->pt));
	$set(this, result, tree);
}

void TransTypes::visitThrow($JCTree$JCThrow* tree) {
	$set($nc(tree), expr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr), $(erasure($nc(tree->expr)->type)))));
	$set(this, result, tree);
}

void TransTypes::visitAssert($JCTree$JCAssert* tree) {
	$set($nc(tree), cond, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->cond), static_cast<$Type*>($nc(this->syms)->booleanType))));
	if (tree->detail != nullptr) {
		$set(tree, detail, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->detail), $(erasure($nc(tree->detail)->type)))));
	}
	$set(this, result, tree);
}

void TransTypes::visitApply($JCTree$JCMethodInvocation* tree) {
	$useLocalCurrentObjectStackCache();
	$set($nc(tree), meth, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->meth), ($Type*)nullptr)));
	$var($Symbol, meth, $TreeInfo::symbol(tree->meth));
	$var($Type, mt, $nc(meth)->erasure(this->types));
	bool useInstantiatedPtArgs = this->allowGraphInference && !$nc(this->types)->isSignaturePolymorphic($cast($Symbol$MethodSymbol, $(meth->baseSymbol())));
	$var($List, argtypes, useInstantiatedPtArgs ? $nc($nc(tree->meth)->type)->getParameterTypes() : $nc(mt)->getParameterTypes());
	if (meth->name == $nc(this->names)->init && $equals(meth->owner, $nc(this->syms)->enumSym)) {
		$assign(argtypes, $nc($nc(argtypes)->tail)->tail);
	}
	if (tree->varargsElement != nullptr) {
		$set(tree, varargsElement, $nc(this->types)->erasure(tree->varargsElement));
	} else {
		int32_t var$1 = $nc(tree->args)->length();
		if (var$1 != $nc(argtypes)->length()) {
			$Assert::error($($String::format("Incorrect number of arguments; expected %d, found %d"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf($nc(tree->args)->length()))),
				$($of($Integer::valueOf(argtypes->length())))
			}))));
		}
	}
	$set(tree, args, translateArgs(tree->args, argtypes, tree->varargsElement));
	$set(tree, type, $nc(this->types)->erasure(tree->type));
	$set(this, result, retype(tree, $(mt->getReturnType()), this->pt));
}

void TransTypes::visitNewClass($JCTree$JCNewClass* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tree)->encl != nullptr) {
		if (tree->def == nullptr) {
			$set(tree, encl, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->encl), $(erasure($nc(tree->encl)->type)))));
		} else {
			$set(tree, args, $nc(tree->args)->prepend($($nc(this->attr)->makeNullCheck(tree->encl))));
			$set(tree, encl, nullptr);
		}
	}
	$var($Type, erasedConstructorType, $nc(tree)->constructorType != nullptr ? erasure($nc(tree)->constructorType) : ($Type*)nullptr);
	$var($List, argtypes, erasedConstructorType != nullptr && this->allowGraphInference ? $nc(erasedConstructorType)->getParameterTypes() : $nc($($nc($nc(tree)->constructor)->erasure(this->types)))->getParameterTypes());
	$set(tree, clazz, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->clazz), ($Type*)nullptr)));
	if (tree->varargsElement != nullptr) {
		$set(tree, varargsElement, $nc(this->types)->erasure(tree->varargsElement));
	}
	$set(tree, args, translateArgs(tree->args, argtypes, tree->varargsElement));
	$set(tree, def, $cast($JCTree$JCClassDecl, translate(static_cast<$JCTree*>(tree->def), ($Type*)nullptr)));
	if (erasedConstructorType != nullptr) {
		$set(tree, constructorType, erasedConstructorType);
	}
	$set(tree, type, erasure(tree->type));
	$set(this, result, tree);
}

void TransTypes::visitNewArray($JCTree$JCNewArray* tree) {
	$useLocalCurrentObjectStackCache();
	$set($nc(tree), elemtype, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->elemtype), ($Type*)nullptr)));
	translate(tree->dims, static_cast<$Type*>($nc(this->syms)->intType));
	if (tree->type != nullptr) {
		$set(tree, elems, translate(tree->elems, $(erasure($($nc(this->types)->elemtype(tree->type))))));
		$set(tree, type, erasure(tree->type));
	} else {
		$set(tree, elems, translate(tree->elems, ($Type*)nullptr));
	}
	$set(this, result, tree);
}

void TransTypes::visitParens($JCTree$JCParens* tree) {
	$set($nc(tree), expr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr), this->pt)));
	$set(tree, type, erasure($nc(tree->expr)->type));
	$set(this, result, tree);
}

void TransTypes::visitAssign($JCTree$JCAssign* tree) {
	$set($nc(tree), lhs, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->lhs), ($Type*)nullptr)));
	$set(tree, rhs, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->rhs), $(erasure($nc(tree->lhs)->type)))));
	$set(tree, type, erasure($nc(tree->lhs)->type));
	$set(this, result, retype(tree, tree->type, this->pt));
}

void TransTypes::visitAssignop($JCTree$JCAssignOp* tree) {
	$set($nc(tree), lhs, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->lhs), ($Type*)nullptr)));
	$set(tree, rhs, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->rhs), $cast($Type, $nc($nc($($nc($nc(tree->operator$)->type)->getParameterTypes()))->tail)->head))));
	$set(tree, type, erasure(tree->type));
	$set(this, result, tree);
}

void TransTypes::visitUnary($JCTree$JCUnary* tree) {
	$init($JCTree$Tag);
	$set($nc(tree), arg, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->arg), (tree->getTag() == $JCTree$Tag::NULLCHK) ? tree->type : $cast($Type, $nc($($nc($nc(tree->operator$)->type)->getParameterTypes()))->head))));
	$set(this, result, tree);
}

void TransTypes::visitBinary($JCTree$JCBinary* tree) {
	$useLocalCurrentObjectStackCache();
	$set($nc(tree), lhs, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->lhs), $cast($Type, $nc($($nc($nc(tree->operator$)->type)->getParameterTypes()))->head))));
	$set(tree, rhs, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->rhs), $cast($Type, $nc($nc($($nc($nc(tree->operator$)->type)->getParameterTypes()))->tail)->head))));
	$set(this, result, tree);
}

void TransTypes::visitAnnotatedType($JCTree$JCAnnotatedType* tree) {
	$var($List, mirrors, $nc(this->annotate)->fromAnnotations($nc(tree)->annotations));
	$set($nc(tree), underlyingType, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->underlyingType))));
	$set(tree, type, $nc($nc(tree->underlyingType)->type)->annotatedType(mirrors));
	$set(this, result, tree);
}

void TransTypes::visitTypeCast($JCTree$JCTypeCast* tree) {
	$useLocalCurrentObjectStackCache();
	$set($nc(tree), clazz, translate(tree->clazz, ($Type*)nullptr));
	$var($Type, originalTarget, tree->type);
	$set(tree, type, erasure(tree->type));
	$var($JCTree$JCExpression, newExpression, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr), tree->type)));
	if (newExpression != tree->expr) {
		$init($JCTree$Tag);
		$var($JCTree$JCTypeCast, typeCast, $nc(newExpression)->hasTag($JCTree$Tag::TYPECAST) ? $cast($JCTree$JCTypeCast, newExpression) : ($JCTree$JCTypeCast*)nullptr);
		$set(tree, expr, typeCast != nullptr && $nc(this->types)->isSameType(typeCast->type, tree->type) ? $nc(typeCast)->expr : newExpression);
	}
	if ($nc(originalTarget)->isIntersection()) {
		$var($Type$IntersectionClassType, ict, $cast($Type$IntersectionClassType, originalTarget));
		{
			$var($Iterator, i$, $nc($(ict->getExplicitComponents()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, c, $cast($Type, i$->next()));
				{
					$var($Type, ec, erasure(c));
					if (!$nc(this->types)->isSameType(ec, tree->type)) {
						$set(tree, expr, coerce(tree->expr, ec));
					}
				}
			}
		}
	}
	$set(this, result, retype(tree, tree->type, this->pt));
}

void TransTypes::visitTypeTest($JCTree$JCInstanceOf* tree) {
	$set($nc(tree), expr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr), ($Type*)nullptr)));
	$set(tree, pattern, translate(tree->pattern, ($Type*)nullptr));
	$set(this, result, tree);
}

void TransTypes::visitIndexed($JCTree$JCArrayAccess* tree) {
	$useLocalCurrentObjectStackCache();
	$set($nc(tree), indexed, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->indexed), $(erasure($nc(tree->indexed)->type)))));
	$set(tree, index, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->index), static_cast<$Type*>($nc(this->syms)->intType))));
	$set(this, result, retype(tree, $($nc(this->types)->elemtype($nc(tree->indexed)->type)), this->pt));
}

void TransTypes::visitAnnotation($JCTree$JCAnnotation* tree) {
	$set(this, result, tree);
}

void TransTypes::visitIdent($JCTree$JCIdent* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, et, $nc($nc(tree)->sym)->erasure(this->types));
	$init($Kinds$Kind);
	$init($TypeTag);
	if ($nc(tree->sym)->kind == $Kinds$Kind::TYP && $nc($nc(tree->sym)->type)->hasTag($TypeTag::TYPEVAR)) {
		$set(this, result, $nc($($nc(this->make)->at(tree->pos$)))->Type(et));
	} else if ($nc(tree->type)->constValue() != nullptr) {
		$set(this, result, tree);
	} else {
		if ($nc(tree->sym)->kind == $Kinds$Kind::VAR) {
			$set(this, result, retype(tree, et, this->pt));
		} else {
			$set(tree, type, erasure(tree->type));
			$set(this, result, tree);
		}
	}
}

void TransTypes::visitSelect($JCTree$JCFieldAccess* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, $nc(this->types)->skipTypeVars($nc($nc(tree)->selected)->type, false));
	if ($nc(t)->isCompound()) {
		$var($JCTree$JCExpression, var$0, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->selected), $(erasure($nc(tree->selected)->type)))));
		$set($nc(tree), selected, coerce(var$0, $(erasure($nc($nc(tree->sym)->owner)->type))));
	} else {
		$set($nc(tree), selected, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->selected), $(erasure(t)))));
	}
	if ($nc($nc(tree)->type)->constValue() != nullptr) {
		$set(this, result, tree);
	} else {
		$init($Kinds$Kind);
		if ($nc(tree->sym)->kind == $Kinds$Kind::VAR) {
			$set(this, result, retype(tree, $($nc(tree->sym)->erasure(this->types)), this->pt));
		} else {
			$set(tree, type, erasure(tree->type));
			$set(this, result, tree);
		}
	}
}

void TransTypes::visitReference($JCTree$JCMemberReference* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, $nc(this->types)->skipTypeVars($nc($nc(tree)->expr)->type, false));
	$var($Type, receiverTarget, $nc(t)->isCompound() ? erasure($nc($nc($nc(tree)->sym)->owner)->type) : erasure(t));
	$init($JCTree$JCMemberReference$ReferenceKind);
	if ($nc(tree)->kind == $JCTree$JCMemberReference$ReferenceKind::UNBOUND) {
		$set(tree, expr, $nc(this->make)->Type(receiverTarget));
	} else {
		$set(tree, expr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr), receiverTarget)));
	}
	if (!$nc($nc(tree)->type)->isIntersection()) {
		$set(tree, type, erasure(tree->type));
	} else {
		$set(tree, type, $nc(this->types)->erasure($nc($nc($($nc(this->types)->findDescriptorSymbol($nc(tree->type)->tsym)))->owner)->type));
	}
	if ($nc(tree)->varargsElement != nullptr) {
		$set(tree, varargsElement, erasure(tree->varargsElement));
	}
	$set(this, result, tree);
}

void TransTypes::visitTypeArray($JCTree$JCArrayTypeTree* tree) {
	$set($nc(tree), elemtype, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->elemtype), ($Type*)nullptr)));
	$set(tree, type, erasure(tree->type));
	$set(this, result, tree);
}

void TransTypes::visitTypeApply($JCTree$JCTypeApply* tree) {
	$var($JCTree, clazz, translate(static_cast<$JCTree*>($nc(tree)->clazz), ($Type*)nullptr));
	$set(this, result, clazz);
}

void TransTypes::visitTypeIntersection($JCTree$JCTypeIntersection* tree) {
	$set($nc(tree), bounds, translate(tree->bounds, ($Type*)nullptr));
	$set(tree, type, erasure(tree->type));
	$set(this, result, tree);
}

$Type* TransTypes::erasure($Type* t) {
	return $nc(this->types)->erasure(t);
}

void TransTypes::translateClass($Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$var($Type, st, $nc(this->types)->supertype($nc(c)->type));
	$init($TypeTag);
	if ($nc(st)->hasTag($TypeTag::CLASS)) {
		translateClass($cast($Symbol$ClassSymbol, st->tsym));
	}
	$var($Env, myEnv, $nc(this->enter)->getEnv(c));
	if (myEnv == nullptr || ((int64_t)($nc(c)->flags_field & (uint64_t)(int64_t)0x0004000000000000)) != 0) {
		return;
	}
	$nc(c)->flags_field |= 0x0004000000000000;
	bool envHasCompState = $nc(this->compileStates)->get(myEnv) != nullptr;
	if (!envHasCompState && c->outermostClass() == c) {
		$Assert::error($$str({"No info for outermost class: "_s, $nc($nc(myEnv)->enclClass)->sym}));
	}
	$init($CompileStates$CompileState);
	if (envHasCompState && $CompileStates$CompileState::FLOW->isAfter($cast($CompileStates$CompileState, $($nc(this->compileStates)->get(myEnv))))) {
		$Assert::error($($String::format(TransTypes::statePreviousToFlowAssertMsg, $$new($ObjectArray, {
			$($nc(this->compileStates)->get(myEnv)),
			$of($nc($nc(myEnv)->enclClass)->sym)
		}))));
	}
	$var($Env, oldEnv, this->env);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, env, myEnv);
			$var($TreeMaker, savedMake, this->make);
			$var($Type, savedPt, this->pt);
			$set(this, make, $nc(this->make)->forToplevel($nc(this->env)->toplevel));
			$set(this, pt, nullptr);
			{
				$var($Throwable, var$1, nullptr);
				try {
					$var($JCTree$JCClassDecl, tree, $cast($JCTree$JCClassDecl, $nc(this->env)->tree));
					$set($nc(tree), typarams, $List::nil());
					$TreeTranslator::visitClassDef(tree);
					$nc(this->make)->at(tree->pos$);
					$var($ListBuffer, bridges, $new($ListBuffer));
					if (this->allowInterfaceBridges || ((int64_t)($nc(tree->sym)->flags() & (uint64_t)(int64_t)512)) == 0) {
						addBridges($(tree->pos()), c, bridges);
					}
					$set(tree, defs, $nc($(bridges->toList()))->prependList(tree->defs));
					$set(tree, type, erasure(tree->type));
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					$set(this, make, savedMake);
					$set(this, pt, savedPt);
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$set(this, env, oldEnv);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$JCTree* TransTypes::translateTopLevelClass($JCTree* cdef, $TreeMaker* make) {
	$set(this, make, make);
	$set(this, pt, nullptr);
	return translate(cdef, ($Type*)nullptr);
}

void clinit$TransTypes($Class* class$) {
	$assignStatic(TransTypes::statePreviousToFlowAssertMsg, "The current compile state [%s] of class %s is previous to FLOW"_s);
	$assignStatic(TransTypes::transTypesKey, $new($Context$Key));
}

TransTypes::TransTypes() {
}

$Class* TransTypes::load$($String* name, bool initialize) {
	$loadClass(TransTypes, name, initialize, &_TransTypes_ClassInfo_, clinit$TransTypes, allocate$TransTypes);
	return class$;
}

$Class* TransTypes::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com