#include <com/sun/tools/javac/comp/Flow$AssignAnalyzer.h>

#include <com/sun/source/tree/CaseTree$CaseKind.h>
#include <com/sun/source/tree/LambdaExpressionTree$BodyKind.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Flow$1.h>
#include <com/sun/tools/javac/comp/Flow$AssignAnalyzer$1.h>
#include <com/sun/tools/javac/comp/Flow$AssignAnalyzer$AssignPendingExit.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$PendingExit.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$FlowKind.h>
#include <com/sun/tools/javac/comp/Flow$Liveness.h>
#include <com/sun/tools/javac/comp/Flow.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotatedType.h>
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
#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>
#include <com/sun/tools/javac/tree/JCTree$JCContinue.h>
#include <com/sun/tools/javac/tree/JCTree$JCDoWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCLabeledStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitch.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCThrow.h>
#include <com/sun/tools/javac/tree/JCTree$JCTry.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/ArrayUtils.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Bits.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/lang/AssertionError.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef BOOLEAN
#undef COMPACT_RECORD_CONSTRUCTOR
#undef EXPRESSION
#undef FINAL
#undef GENERATED_MEMBER
#undef IDENT
#undef METHODDEF
#undef MTH
#undef NORMAL
#undef PRIVATE
#undef RECORD
#undef RETURN
#undef RULE
#undef SELECT
#undef SPECULATIVE_LOOP
#undef SWITCH_EXPRESSION
#undef TRY
#undef TYP
#undef VAR
#undef VARDEF

using $JCTree$JCVariableDeclArray = $Array<::com::sun::tools::javac::tree::JCTree$JCVariableDecl>;
using $BitsArray = $Array<::com::sun::tools::javac::util::Bits>;
using $CaseTree$CaseKind = ::com::sun::source::tree::CaseTree$CaseKind;
using $LambdaExpressionTree$BodyKind = ::com::sun::source::tree::LambdaExpressionTree$BodyKind;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Lint = ::com::sun::tools::javac::code::Lint;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Flow = ::com::sun::tools::javac::comp::Flow;
using $Flow$1 = ::com::sun::tools::javac::comp::Flow$1;
using $Flow$AssignAnalyzer$1 = ::com::sun::tools::javac::comp::Flow$AssignAnalyzer$1;
using $Flow$AssignAnalyzer$AssignPendingExit = ::com::sun::tools::javac::comp::Flow$AssignAnalyzer$AssignPendingExit;
using $Flow$BaseAnalyzer = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer;
using $Flow$BaseAnalyzer$PendingExit = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$PendingExit;
using $Flow$FlowKind = ::com::sun::tools::javac::comp::Flow$FlowKind;
using $Flow$Liveness = ::com::sun::tools::javac::comp::Flow$Liveness;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotatedType = ::com::sun::tools::javac::tree::JCTree$JCAnnotatedType;
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
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCContinue = ::com::sun::tools::javac::tree::JCTree$JCContinue;
using $JCTree$JCDoWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop;
using $JCTree$JCEnhancedForLoop = ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCForLoop = ::com::sun::tools::javac::tree::JCTree$JCForLoop;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCIf = ::com::sun::tools::javac::tree::JCTree$JCIf;
using $JCTree$JCLabeledStatement = ::com::sun::tools::javac::tree::JCTree$JCLabeledStatement;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCSwitch = ::com::sun::tools::javac::tree::JCTree$JCSwitch;
using $JCTree$JCSwitchExpression = ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression;
using $JCTree$JCThrow = ::com::sun::tools::javac::tree::JCTree$JCThrow;
using $JCTree$JCTry = ::com::sun::tools::javac::tree::JCTree$JCTry;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$JCWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCWhileLoop;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $ArrayUtils = ::com::sun::tools::javac::util::ArrayUtils;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Bits = ::com::sun::tools::javac::util::Bits;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Flow$AssignAnalyzer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Flow;", nullptr, $FINAL | $SYNTHETIC, $field(Flow$AssignAnalyzer, this$0)},
	{"inits", "Lcom/sun/tools/javac/util/Bits;", nullptr, $FINAL, $field(Flow$AssignAnalyzer, inits)},
	{"uninits", "Lcom/sun/tools/javac/util/Bits;", nullptr, $FINAL, $field(Flow$AssignAnalyzer, uninits)},
	{"uninitsTry", "Lcom/sun/tools/javac/util/Bits;", nullptr, $FINAL, $field(Flow$AssignAnalyzer, uninitsTry)},
	{"initsWhenTrue", "Lcom/sun/tools/javac/util/Bits;", nullptr, $FINAL, $field(Flow$AssignAnalyzer, initsWhenTrue)},
	{"initsWhenFalse", "Lcom/sun/tools/javac/util/Bits;", nullptr, $FINAL, $field(Flow$AssignAnalyzer, initsWhenFalse)},
	{"uninitsWhenTrue", "Lcom/sun/tools/javac/util/Bits;", nullptr, $FINAL, $field(Flow$AssignAnalyzer, uninitsWhenTrue)},
	{"uninitsWhenFalse", "Lcom/sun/tools/javac/util/Bits;", nullptr, $FINAL, $field(Flow$AssignAnalyzer, uninitsWhenFalse)},
	{"vardecls", "[Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PROTECTED, $field(Flow$AssignAnalyzer, vardecls)},
	{"classDef", "Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, 0, $field(Flow$AssignAnalyzer, classDef)},
	{"firstadr", "I", nullptr, 0, $field(Flow$AssignAnalyzer, firstadr)},
	{"nextadr", "I", nullptr, $PROTECTED, $field(Flow$AssignAnalyzer, nextadr)},
	{"returnadr", "I", nullptr, $PROTECTED, $field(Flow$AssignAnalyzer, returnadr)},
	{"unrefdResources", "Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, 0, $field(Flow$AssignAnalyzer, unrefdResources)},
	{"flowKind", "Lcom/sun/tools/javac/comp/Flow$FlowKind;", nullptr, 0, $field(Flow$AssignAnalyzer, flowKind)},
	{"startPos", "I", nullptr, 0, $field(Flow$AssignAnalyzer, startPos)},
	{"isInitialConstructor", "Z", nullptr, $PRIVATE, $field(Flow$AssignAnalyzer, isInitialConstructor)},
	{}
};

$MethodInfo _Flow$AssignAnalyzer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Flow;)V", nullptr, $PUBLIC, $method(static_cast<void(Flow$AssignAnalyzer::*)($Flow*)>(&Flow$AssignAnalyzer::init$))},
	{"addVars", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Bits;Lcom/sun/tools/javac/util/Bits;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;Lcom/sun/tools/javac/util/Bits;Lcom/sun/tools/javac/util/Bits;)V", $PRIVATE, $method(static_cast<void(Flow$AssignAnalyzer::*)($List*,$Bits*,$Bits*)>(&Flow$AssignAnalyzer::addVars))},
	{"analyzeTree", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/TreeMaker;)V", "(Lcom/sun/tools/javac/comp/Env<*>;Lcom/sun/tools/javac/tree/TreeMaker;)V", $PUBLIC},
	{"analyzeTree", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)V", "(Lcom/sun/tools/javac/comp/Env<*>;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)V", $PUBLIC},
	{"checkInit", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$VarSymbol;)V", nullptr, 0},
	{"checkInit", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$VarSymbol;Lcom/sun/tools/javac/util/JCDiagnostic$Error;)V", nullptr, 0},
	{"clearPendingExits", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(Flow$AssignAnalyzer::*)(bool)>(&Flow$AssignAnalyzer::clearPendingExits))},
	{"handleSwitch", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Z)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;Z)V", $PRIVATE, $method(static_cast<void(Flow$AssignAnalyzer::*)($JCTree*,$JCTree$JCExpression*,$List*,bool)>(&Flow$AssignAnalyzer::handleSwitch))},
	{"initParam", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PROTECTED},
	{"isFinalUninitializedField", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)Z", nullptr, 0},
	{"isFinalUninitializedStaticField", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)Z", nullptr, 0},
	{"letInit", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$VarSymbol;)V", nullptr, 0},
	{"letInit", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0},
	{"markDead", "()V", nullptr, $PROTECTED},
	{"merge", "()V", nullptr, $PROTECTED},
	{"newVar", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, 0},
	{"referenced", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"resetBits", "([Lcom/sun/tools/javac/util/Bits;)V", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<void(Flow$AssignAnalyzer::*)($BitsArray*)>(&Flow$AssignAnalyzer::resetBits))},
	{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"scanCond", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0},
	{"scanExpr", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0},
	{"scanExprs", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)V", 0},
	{"split", "(Z)V", nullptr, 0},
	{"trackable", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)Z", nullptr, $PROTECTED},
	{"uninit", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)V", nullptr, 0},
	{"visitAnnotatedType", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotatedType;)V", nullptr, $PUBLIC},
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
	{"visitForLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCForLoop;)V", nullptr, $PUBLIC},
	{"visitForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitIf", "(Lcom/sun/tools/javac/tree/JCTree$JCIf;)V", nullptr, $PUBLIC},
	{"visitLabelled", "(Lcom/sun/tools/javac/tree/JCTree$JCLabeledStatement;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitModuleDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;)V", nullptr, $PUBLIC},
	{"visitNewArray", "(Lcom/sun/tools/javac/tree/JCTree$JCNewArray;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitPackageDef", "(Lcom/sun/tools/javac/tree/JCTree$JCPackageDecl;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitSwitch", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitch;)V", nullptr, $PUBLIC},
	{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC},
	{"visitThrow", "(Lcom/sun/tools/javac/tree/JCTree$JCThrow;)V", nullptr, $PUBLIC},
	{"visitTry", "(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V", nullptr, $PUBLIC},
	{"visitUnary", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{"visitWhileLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCWhileLoop;)V", nullptr, $PUBLIC},
	{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Flow$AssignAnalyzer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Flow$AssignAnalyzer", "com.sun.tools.javac.comp.Flow", "AssignAnalyzer", $PUBLIC},
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer", "com.sun.tools.javac.comp.Flow", "BaseAnalyzer", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.comp.Flow$AssignAnalyzer$AssignPendingExit", "com.sun.tools.javac.comp.Flow$AssignAnalyzer", "AssignPendingExit", $PUBLIC},
	{"com.sun.tools.javac.comp.Flow$AssignAnalyzer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Flow$AssignAnalyzer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Flow$AssignAnalyzer",
	"com.sun.tools.javac.comp.Flow$BaseAnalyzer",
	nullptr,
	_Flow$AssignAnalyzer_FieldInfo_,
	_Flow$AssignAnalyzer_MethodInfo_,
	nullptr,
	nullptr,
	_Flow$AssignAnalyzer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Flow"
};

$Object* allocate$Flow$AssignAnalyzer($Class* clazz) {
	return $of($alloc(Flow$AssignAnalyzer));
}

void Flow$AssignAnalyzer::init$($Flow* this$0) {
	$set(this, this$0, this$0);
	$Flow$BaseAnalyzer::init$();
	$init($Flow$FlowKind);
	$set(this, flowKind, $Flow$FlowKind::NORMAL);
	this->isInitialConstructor = false;
	$set(this, inits, $new($Bits));
	$set(this, uninits, $new($Bits));
	$set(this, uninitsTry, $new($Bits));
	$set(this, initsWhenTrue, $new($Bits, true));
	$set(this, initsWhenFalse, $new($Bits, true));
	$set(this, uninitsWhenTrue, $new($Bits, true));
	$set(this, uninitsWhenFalse, $new($Bits, true));
}

void Flow$AssignAnalyzer::markDead() {
	if (!this->isInitialConstructor) {
		$nc(this->inits)->inclRange(this->returnadr, this->nextadr);
	} else {
		for (int32_t address = this->returnadr; address < this->nextadr; ++address) {
			if (!(isFinalUninitializedStaticField($nc($nc(this->vardecls)->get(address))->sym))) {
				$nc(this->inits)->incl(address);
			}
		}
	}
	$nc(this->uninits)->inclRange(this->returnadr, this->nextadr);
}

bool Flow$AssignAnalyzer::trackable($Symbol$VarSymbol* sym) {
	$init($Kinds$Kind);
	return $nc(sym)->pos >= this->startPos && ($nc(sym->owner)->kind == $Kinds$Kind::MTH || $nc($nc(sym)->owner)->kind == $Kinds$Kind::VAR || isFinalUninitializedField(sym));
}

bool Flow$AssignAnalyzer::isFinalUninitializedField($Symbol$VarSymbol* sym) {
	$init($Kinds$Kind);
	bool var$0 = $nc($nc(sym)->owner)->kind == $Kinds$Kind::TYP;
	if (var$0) {
		bool var$1 = ((int64_t)(sym->flags() & (uint64_t)((16 | 0x00040000) | (int64_t)0x0000000200000000))) == 16;
		var$0 = (var$1 && $nc($nc(this->classDef)->sym)->isEnclosedBy($cast($Symbol$ClassSymbol, sym->owner)));
	}
	return var$0;
}

bool Flow$AssignAnalyzer::isFinalUninitializedStaticField($Symbol$VarSymbol* sym) {
	bool var$0 = isFinalUninitializedField(sym);
	return var$0 && $nc(sym)->isStatic();
}

void Flow$AssignAnalyzer::newVar($JCTree$JCVariableDecl* varDecl) {
	$var($Symbol$VarSymbol, sym, $nc(varDecl)->sym);
	$set(this, vardecls, $fcast($JCTree$JCVariableDeclArray, $ArrayUtils::ensureCapacity(this->vardecls, this->nextadr)));
	if (((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)16)) == 0) {
		sym->flags_field |= 0x0000020000000000;
	}
	$nc(sym)->adr = this->nextadr;
	$nc(this->vardecls)->set(this->nextadr, varDecl);
	$nc(this->inits)->excl(this->nextadr);
	$nc(this->uninits)->incl(this->nextadr);
	++this->nextadr;
}

void Flow$AssignAnalyzer::letInit($JCDiagnostic$DiagnosticPosition* pos, $Symbol$VarSymbol* sym) {
	$useLocalCurrentObjectStackCache();
	if ($nc(sym)->adr >= this->firstadr && trackable(sym)) {
		if (((int64_t)(sym->flags() & (uint64_t)(int64_t)0x0000020000000000)) != 0) {
			if (!$nc(this->uninits)->isMember(sym->adr)) {
				sym->flags_field &= (uint64_t)~0x0000020000000000;
			} else {
				uninit(sym);
			}
		} else if (((int64_t)(sym->flags() & (uint64_t)(int64_t)16)) != 0) {
			if (((int64_t)(sym->flags() & (uint64_t)(int64_t)0x0000000200000000)) != 0) {
				if (((int64_t)(sym->flags() & (uint64_t)(int64_t)0x0000008000000000)) != 0) {
					$nc(this->this$0->log)->error(pos, $($CompilerProperties$Errors::MulticatchParameterMayNotBeAssigned(sym)));
				} else {
					$nc(this->this$0->log)->error(pos, $($CompilerProperties$Errors::FinalParameterMayNotBeAssigned(sym)));
				}
			} else if (!$nc(this->uninits)->isMember(sym->adr)) {
				$nc(this->this$0->log)->error(pos, $($nc(this->this$0->diags)->errorKey($nc(this->flowKind)->errKey, $$new($ObjectArray, {$of(sym)}))));
			} else {
				uninit(sym);
			}
		}
		$nc(this->inits)->incl(sym->adr);
	} else if (((int64_t)(sym->flags() & (uint64_t)(int64_t)16)) != 0) {
		$nc(this->this$0->log)->error(pos, $($CompilerProperties$Errors::VarMightAlreadyBeAssigned(sym)));
	}
}

void Flow$AssignAnalyzer::uninit($Symbol$VarSymbol* sym) {
	if (!$nc(this->inits)->isMember($nc(sym)->adr)) {
		$nc(this->uninits)->excl($nc(sym)->adr);
		$nc(this->uninitsTry)->excl($nc(sym)->adr);
	} else {
		$nc(this->uninits)->excl($nc(sym)->adr);
	}
}

void Flow$AssignAnalyzer::letInit($JCTree* tree$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, tree, tree$renamed);
	$assign(tree, $TreeInfo::skipParens(tree));
	$init($JCTree$Tag);
	bool var$0 = $nc(tree)->hasTag($JCTree$Tag::IDENT);
	if (var$0 || $nc(tree)->hasTag($JCTree$Tag::SELECT)) {
		$var($Symbol, sym, $TreeInfo::symbol(tree));
		$init($Kinds$Kind);
		if ($nc(sym)->kind == $Kinds$Kind::VAR) {
			letInit($(tree->pos()), $cast($Symbol$VarSymbol, sym));
		}
	}
}

void Flow$AssignAnalyzer::checkInit($JCDiagnostic$DiagnosticPosition* pos, $Symbol$VarSymbol* sym) {
	checkInit(pos, sym, $($CompilerProperties$Errors::VarMightNotHaveBeenInitialized(sym)));
}

void Flow$AssignAnalyzer::checkInit($JCDiagnostic$DiagnosticPosition* pos, $Symbol$VarSymbol* sym, $JCDiagnostic$Error* errkey) {
	$init($Kinds$Kind);
	bool var$0 = ($nc(sym)->adr >= this->firstadr || $nc($nc(sym)->owner)->kind != $Kinds$Kind::TYP) && trackable(sym);
	if (var$0 && !$nc(this->inits)->isMember(sym->adr) && ((int64_t)(sym->flags_field & (uint64_t)(int64_t)0x0000040000000000)) == 0) {
		$nc(this->this$0->log)->error(pos, errkey);
		$nc(this->inits)->incl(sym->adr);
	}
}

void Flow$AssignAnalyzer::resetBits($BitsArray* bits) {
	$useLocalCurrentObjectStackCache();
	{
		$var($BitsArray, arr$, bits);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Bits, b, arr$->get(i$));
			{
				$nc(b)->reset();
			}
		}
	}
}

void Flow$AssignAnalyzer::split(bool setToNull) {
	$nc(this->initsWhenFalse)->assign(this->inits);
	$nc(this->uninitsWhenFalse)->assign(this->uninits);
	$nc(this->initsWhenTrue)->assign(this->inits);
	$nc(this->uninitsWhenTrue)->assign(this->uninits);
	if (setToNull) {
		resetBits($$new($BitsArray, {
			this->inits,
			this->uninits
		}));
	}
}

void Flow$AssignAnalyzer::merge() {
	$useLocalCurrentObjectStackCache();
	$nc(this->inits)->assign($($nc(this->initsWhenFalse)->andSet(this->initsWhenTrue)));
	$nc(this->uninits)->assign($($nc(this->uninitsWhenFalse)->andSet(this->uninitsWhenTrue)));
}

void Flow$AssignAnalyzer::scanExpr($JCTree* tree) {
	if (tree != nullptr) {
		scan(tree);
		if ($nc(this->inits)->isReset()) {
			merge();
		}
	}
}

void Flow$AssignAnalyzer::scanExprs($List* trees) {
	if (trees != nullptr) {
		{
			$var($List, l, trees);
			for (; l->nonEmpty(); $assign(l, l->tail)) {
				scanExpr($cast($JCTree, $nc(l)->head));
			}
		}
	}
}

void Flow$AssignAnalyzer::scanCond($JCTree* tree) {
	if ($nc($nc(tree)->type)->isFalse()) {
		if ($nc(this->inits)->isReset()) {
			merge();
		}
		$nc(this->initsWhenTrue)->assign(this->inits);
		$nc(this->initsWhenTrue)->inclRange(this->firstadr, this->nextadr);
		$nc(this->uninitsWhenTrue)->assign(this->uninits);
		$nc(this->uninitsWhenTrue)->inclRange(this->firstadr, this->nextadr);
		$nc(this->initsWhenFalse)->assign(this->inits);
		$nc(this->uninitsWhenFalse)->assign(this->uninits);
	} else if ($nc(tree->type)->isTrue()) {
		if ($nc(this->inits)->isReset()) {
			merge();
		}
		$nc(this->initsWhenFalse)->assign(this->inits);
		$nc(this->initsWhenFalse)->inclRange(this->firstadr, this->nextadr);
		$nc(this->uninitsWhenFalse)->assign(this->uninits);
		$nc(this->uninitsWhenFalse)->inclRange(this->firstadr, this->nextadr);
		$nc(this->initsWhenTrue)->assign(this->inits);
		$nc(this->uninitsWhenTrue)->assign(this->uninits);
	} else {
		scan(tree);
		if (!$nc(this->inits)->isReset()) {
			split(tree->type != $nc(this->this$0->syms)->unknownType);
		}
	}
	if ($nc(tree)->type != $nc(this->this$0->syms)->unknownType) {
		resetBits($$new($BitsArray, {
			this->inits,
			this->uninits
		}));
	}
}

void Flow$AssignAnalyzer::visitClassDef($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tree)->sym == nullptr) {
		return;
	}
	$var($Lint, lintPrev, this->this$0->lint);
	$set(this->this$0, lint, $nc(this->this$0->lint)->augment(static_cast<$Symbol*>($nc(tree)->sym)));
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if ($nc(tree)->sym == nullptr) {
				return$1 = true;
				goto $finally;
			}
			$var($JCTree$JCClassDecl, classDefPrev, this->classDef);
			int32_t firstadrPrev = this->firstadr;
			int32_t nextadrPrev = this->nextadr;
			$var($ListBuffer, pendingExitsPrev, this->pendingExits);
			$set(this, pendingExits, $new($ListBuffer));
			if ($nc(tree)->name != $nc(this->this$0->names)->empty) {
				this->firstadr = this->nextadr;
			}
			$set(this, classDef, tree);
			{
				$var($Throwable, var$2, nullptr);
				try {
					{
						$var($List, l, $nc(tree)->defs);
						for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
							$init($JCTree$Tag);
							if ($nc(($cast($JCTree, l->head)))->hasTag($JCTree$Tag::VARDEF)) {
								$var($JCTree$JCVariableDecl, def, $cast($JCTree$JCVariableDecl, l->head));
								if (((int64_t)($nc($nc(def)->mods)->flags & (uint64_t)(int64_t)8)) != 0) {
									$var($Symbol$VarSymbol, sym, def->sym);
									if (trackable(sym)) {
										newVar(def);
									}
								}
							}
						}
					}
					{
						$var($List, l, tree->defs);
						for (; l->nonEmpty(); $assign(l, l->tail)) {
							$init($JCTree$Tag);
							bool var$3 = !$nc(($cast($JCTree, $nc(l)->head)))->hasTag($JCTree$Tag::METHODDEF);
							if (var$3 && ((int64_t)($TreeInfo::flags($cast($JCTree, l->head)) & (uint64_t)(int64_t)8)) != 0) {
								scan($cast($JCTree, l->head));
								clearPendingExits(false);
							}
						}
					}
					{
						$var($List, l, tree->defs);
						for (; l->nonEmpty(); $assign(l, l->tail)) {
							$init($JCTree$Tag);
							if ($nc(($cast($JCTree, $nc(l)->head)))->hasTag($JCTree$Tag::VARDEF)) {
								$var($JCTree$JCVariableDecl, def, $cast($JCTree$JCVariableDecl, l->head));
								if (((int64_t)($nc($nc(def)->mods)->flags & (uint64_t)(int64_t)8)) == 0) {
									$var($Symbol$VarSymbol, sym, def->sym);
									if (trackable(sym)) {
										newVar(def);
									}
								}
							}
						}
					}
					{
						$var($List, l, tree->defs);
						for (; l->nonEmpty(); $assign(l, l->tail)) {
							$init($JCTree$Tag);
							bool var$4 = !$nc(($cast($JCTree, $nc(l)->head)))->hasTag($JCTree$Tag::METHODDEF);
							if (var$4 && ((int64_t)($TreeInfo::flags($cast($JCTree, l->head)) & (uint64_t)(int64_t)8)) == 0) {
								scan($cast($JCTree, l->head));
								clearPendingExits(false);
							}
						}
					}
					{
						$var($List, l, tree->defs);
						for (; l->nonEmpty(); $assign(l, l->tail)) {
							$init($JCTree$Tag);
							if ($nc(($cast($JCTree, $nc(l)->head)))->hasTag($JCTree$Tag::METHODDEF)) {
								scan($cast($JCTree, l->head));
							}
						}
					}
				} catch ($Throwable& var$5) {
					$assign(var$2, var$5);
				} /*finally*/ {
					$set(this, pendingExits, pendingExitsPrev);
					this->nextadr = nextadrPrev;
					this->firstadr = firstadrPrev;
					$set(this, classDef, classDefPrev);
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
			}
		} catch ($Throwable& var$6) {
			$assign(var$0, var$6);
		} $finally: {
			$set(this->this$0, lint, lintPrev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void Flow$AssignAnalyzer::visitMethodDef($JCTree$JCMethodDecl* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tree)->body == nullptr) {
		return;
	}
	if (((int64_t)($nc($nc(tree)->sym)->flags() & (uint64_t)(int64_t)4096)) != 0) {
		return;
	}
	$var($Lint, lintPrev, this->this$0->lint);
	$set(this->this$0, lint, $nc(this->this$0->lint)->augment(static_cast<$Symbol*>($nc(tree)->sym)));
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if ($nc(tree)->body == nullptr) {
				return$1 = true;
				goto $finally;
			}
			if (((int64_t)($nc($nc(tree)->sym)->flags() & (uint64_t)(4096 | (int64_t)0x0002000000000000))) == 4096) {
				return$1 = true;
				goto $finally;
			}
			$var($Bits, initsPrev, $new($Bits, this->inits));
			$var($Bits, uninitsPrev, $new($Bits, this->uninits));
			int32_t nextadrPrev = this->nextadr;
			int32_t firstadrPrev = this->firstadr;
			int32_t returnadrPrev = this->returnadr;
			$Assert::check($nc(this->pendingExits)->isEmpty());
			bool lastInitialConstructor = this->isInitialConstructor;
			{
				$var($Throwable, var$2, nullptr);
				try {
					this->isInitialConstructor = $TreeInfo::isInitialConstructor(tree);
					if (!this->isInitialConstructor) {
						this->firstadr = this->nextadr;
					}
					{
						$var($List, l, $nc(tree)->params);
						for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
							$var($JCTree$JCVariableDecl, def, $cast($JCTree$JCVariableDecl, l->head));
							scan(static_cast<$JCTree*>(def));
							$Assert::check(((int64_t)($nc($nc(def)->sym)->flags() & (uint64_t)(int64_t)0x0000000200000000)) != 0, "Method parameter without PARAMETER flag"_s);
							initParam(def);
						}
					}
					scan(static_cast<$JCTree*>(tree->body));
					bool isCompactConstructor = ((int64_t)($nc(tree->sym)->flags() & (uint64_t)$Flags::COMPACT_RECORD_CONSTRUCTOR)) != 0;
					if (this->isInitialConstructor) {
						bool isSynthesized = ((int64_t)($nc(tree->sym)->flags() & (uint64_t)(int64_t)0x0000001000000000)) != 0;
						for (int32_t i = this->firstadr; i < this->nextadr; ++i) {
							$var($JCTree$JCVariableDecl, vardecl, $nc(this->vardecls)->get(i));
							$var($Symbol$VarSymbol, var, $nc(vardecl)->sym);
							if ($equals($nc(var)->owner, $nc(this->classDef)->sym)) {
								if (isSynthesized && !isCompactConstructor) {
									$var($JCDiagnostic$DiagnosticPosition, var$3, $TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>(var), static_cast<$JCTree*>(vardecl)));
									$var($Symbol$VarSymbol, var$4, var);
									checkInit(var$3, var$4, $($CompilerProperties$Errors::VarNotInitializedInDefaultConstructor(var)));
								} else if (isCompactConstructor) {
									bool var$5 = $nc($(var->enclClass()))->isRecord() && ((int64_t)(var->flags_field & (uint64_t)((($Flags::PRIVATE | $Flags::FINAL) | $Flags::GENERATED_MEMBER) | $Flags::RECORD))) != 0;
									$init($Kinds$Kind);
									bool isInstanceRecordField = var$5 && !var->isStatic() && $nc(var->owner)->kind == $Kinds$Kind::TYP;
									if (isInstanceRecordField) {
										bool notInitialized = !$nc(this->inits)->isMember(var->adr);
										if (notInitialized && $nc(this->uninits)->isMember(var->adr) && tree->completesNormally) {
											var->flags_field |= 0x0008000000000000;
										} else {
											checkInit($($TreeInfo::diagEndPos(tree->body)), var);
										}
									} else {
										checkInit($($TreeInfo::diagnosticPositionFor(static_cast<$Symbol*>(var), static_cast<$JCTree*>(vardecl))), var);
									}
								} else {
									checkInit($($TreeInfo::diagEndPos(tree->body)), var);
								}
							}
						}
					}
					clearPendingExits(true);
				} catch ($Throwable& var$6) {
					$assign(var$2, var$6);
				} /*finally*/ {
					$nc(this->inits)->assign(initsPrev);
					$nc(this->uninits)->assign(uninitsPrev);
					this->nextadr = nextadrPrev;
					this->firstadr = firstadrPrev;
					this->returnadr = returnadrPrev;
					this->isInitialConstructor = lastInitialConstructor;
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
			}
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
		} $finally: {
			$set(this->this$0, lint, lintPrev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void Flow$AssignAnalyzer::clearPendingExits(bool inMethod) {
	$useLocalCurrentObjectStackCache();
	$var($List, exits, $nc(this->pendingExits)->toList());
	$set(this, pendingExits, $new($ListBuffer));
	while ($nc(exits)->nonEmpty()) {
		$var($Flow$BaseAnalyzer$PendingExit, exit, $cast($Flow$BaseAnalyzer$PendingExit, exits->head));
		$assign(exits, exits->tail);
		$init($JCTree$Tag);
		bool var$0 = (inMethod && $nc($nc(exit)->tree)->hasTag($JCTree$Tag::RETURN));
		$Assert::check(var$0 || $nc(this->this$0->log)->hasErrorOn($($nc($nc(exit)->tree)->pos())), $of($nc(exit)->tree));
		if (inMethod && this->isInitialConstructor) {
			$Assert::check($instanceOf($Flow$AssignAnalyzer$AssignPendingExit, exit));
			$nc(this->inits)->assign($nc(($cast($Flow$AssignAnalyzer$AssignPendingExit, exit)))->exit_inits);
			for (int32_t i = this->firstadr; i < this->nextadr; ++i) {
				checkInit($($nc($nc(exit)->tree)->pos()), $nc($nc(this->vardecls)->get(i))->sym);
			}
		}
	}
}

void Flow$AssignAnalyzer::initParam($JCTree$JCVariableDecl* def) {
	$nc(this->inits)->incl($nc($nc(def)->sym)->adr);
	$nc(this->uninits)->excl($nc($nc(def)->sym)->adr);
}

void Flow$AssignAnalyzer::visitVarDef($JCTree$JCVariableDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Lint, lintPrev, this->this$0->lint);
	$set(this->this$0, lint, $nc(this->this$0->lint)->augment(static_cast<$Symbol*>($nc(tree)->sym)));
	{
		$var($Throwable, var$0, nullptr);
		try {
			bool track = trackable($nc(tree)->sym);
			$init($Kinds$Kind);
			if (track && ($nc($nc($nc(tree)->sym)->owner)->kind == $Kinds$Kind::MTH || $nc($nc($nc(tree)->sym)->owner)->kind == $Kinds$Kind::VAR)) {
				newVar(tree);
			}
			if ($nc(tree)->init != nullptr) {
				scanExpr(tree->init);
				if (track) {
					letInit($(tree->pos()), tree->sym);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this->this$0, lint, lintPrev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Flow$AssignAnalyzer::visitBlock($JCTree$JCBlock* tree) {
	int32_t nextadrPrev = this->nextadr;
	scan($nc(tree)->stats);
	this->nextadr = nextadrPrev;
}

void Flow$AssignAnalyzer::visitDoLoop($JCTree$JCDoWhileLoop* tree) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$Flow$FlowKind* prevFlowKind = this->flowKind;
	$init($Flow$FlowKind);
	$set(this, flowKind, $Flow$FlowKind::NORMAL);
	$var($Bits, initsSkip, $new($Bits, true));
	$var($Bits, uninitsSkip, $new($Bits, true));
	$set(this, pendingExits, $new($ListBuffer));
	int32_t prevErrors = $nc(this->this$0->log)->nerrors;
	do {
		$var($Bits, uninitsEntry, $new($Bits, this->uninits));
		uninitsEntry->excludeFrom(this->nextadr);
		scan(static_cast<$JCTree*>($nc(tree)->body));
		resolveContinues(tree);
		scanCond($nc(tree)->cond);
		if (!$nc(this->flowKind)->isFinal()) {
			initsSkip->assign(this->initsWhenFalse);
			uninitsSkip->assign(this->uninitsWhenFalse);
		}
		bool var$0 = $nc(this->this$0->log)->nerrors != prevErrors || $nc(this->flowKind)->isFinal();
		if (var$0 || $nc($($$new($Bits, uninitsEntry)->diffSet(this->uninitsWhenTrue)))->nextBit(this->firstadr) == -1) {
			break;
		}
		$nc(this->inits)->assign(this->initsWhenTrue);
		$nc(this->uninits)->assign($(uninitsEntry->andSet(this->uninitsWhenTrue)));
		$set(this, flowKind, $Flow$FlowKind::SPECULATIVE_LOOP);
	} while (true);
	$set(this, flowKind, prevFlowKind);
	$nc(this->inits)->assign(initsSkip);
	$nc(this->uninits)->assign(uninitsSkip);
	resolveBreaks(tree, prevPendingExits);
}

void Flow$AssignAnalyzer::visitWhileLoop($JCTree$JCWhileLoop* tree) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$Flow$FlowKind* prevFlowKind = this->flowKind;
	$init($Flow$FlowKind);
	$set(this, flowKind, $Flow$FlowKind::NORMAL);
	$var($Bits, initsSkip, $new($Bits, true));
	$var($Bits, uninitsSkip, $new($Bits, true));
	$set(this, pendingExits, $new($ListBuffer));
	int32_t prevErrors = $nc(this->this$0->log)->nerrors;
	$var($Bits, uninitsEntry, $new($Bits, this->uninits));
	uninitsEntry->excludeFrom(this->nextadr);
	do {
		scanCond($nc(tree)->cond);
		if (!$nc(this->flowKind)->isFinal()) {
			initsSkip->assign(this->initsWhenFalse);
			uninitsSkip->assign(this->uninitsWhenFalse);
		}
		$nc(this->inits)->assign(this->initsWhenTrue);
		$nc(this->uninits)->assign(this->uninitsWhenTrue);
		scan(static_cast<$JCTree*>($nc(tree)->body));
		resolveContinues(tree);
		bool var$0 = $nc(this->this$0->log)->nerrors != prevErrors || $nc(this->flowKind)->isFinal();
		if (var$0 || $nc($($$new($Bits, uninitsEntry)->diffSet(this->uninits)))->nextBit(this->firstadr) == -1) {
			break;
		}
		$nc(this->uninits)->assign($(uninitsEntry->andSet(this->uninits)));
		$set(this, flowKind, $Flow$FlowKind::SPECULATIVE_LOOP);
	} while (true);
	$set(this, flowKind, prevFlowKind);
	$nc(this->inits)->assign(initsSkip);
	$nc(this->uninits)->assign(uninitsSkip);
	resolveBreaks(tree, prevPendingExits);
}

void Flow$AssignAnalyzer::visitForLoop($JCTree$JCForLoop* tree) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$Flow$FlowKind* prevFlowKind = this->flowKind;
	$init($Flow$FlowKind);
	$set(this, flowKind, $Flow$FlowKind::NORMAL);
	int32_t nextadrPrev = this->nextadr;
	scan($nc(tree)->init);
	$var($Bits, initsSkip, $new($Bits, true));
	$var($Bits, uninitsSkip, $new($Bits, true));
	$set(this, pendingExits, $new($ListBuffer));
	int32_t prevErrors = $nc(this->this$0->log)->nerrors;
	do {
		$var($Bits, uninitsEntry, $new($Bits, this->uninits));
		uninitsEntry->excludeFrom(this->nextadr);
		if ($nc(tree)->cond != nullptr) {
			scanCond(tree->cond);
			if (!$nc(this->flowKind)->isFinal()) {
				initsSkip->assign(this->initsWhenFalse);
				uninitsSkip->assign(this->uninitsWhenFalse);
			}
			$nc(this->inits)->assign(this->initsWhenTrue);
			$nc(this->uninits)->assign(this->uninitsWhenTrue);
		} else if (!$nc(this->flowKind)->isFinal()) {
			initsSkip->assign(this->inits);
			initsSkip->inclRange(this->firstadr, this->nextadr);
			uninitsSkip->assign(this->uninits);
			uninitsSkip->inclRange(this->firstadr, this->nextadr);
		}
		scan(static_cast<$JCTree*>($nc(tree)->body));
		resolveContinues(tree);
		scan($nc(tree)->step);
		bool var$0 = $nc(this->this$0->log)->nerrors != prevErrors || $nc(this->flowKind)->isFinal();
		if (var$0 || $nc($($$new($Bits, uninitsEntry)->diffSet(this->uninits)))->nextBit(this->firstadr) == -1) {
			break;
		}
		$nc(this->uninits)->assign($(uninitsEntry->andSet(this->uninits)));
		$set(this, flowKind, $Flow$FlowKind::SPECULATIVE_LOOP);
	} while (true);
	$set(this, flowKind, prevFlowKind);
	$nc(this->inits)->assign(initsSkip);
	$nc(this->uninits)->assign(uninitsSkip);
	resolveBreaks(tree, prevPendingExits);
	this->nextadr = nextadrPrev;
}

void Flow$AssignAnalyzer::visitForeachLoop($JCTree$JCEnhancedForLoop* tree) {
	$useLocalCurrentObjectStackCache();
	visitVarDef($nc(tree)->var);
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$Flow$FlowKind* prevFlowKind = this->flowKind;
	$init($Flow$FlowKind);
	$set(this, flowKind, $Flow$FlowKind::NORMAL);
	int32_t nextadrPrev = this->nextadr;
	scan(static_cast<$JCTree*>($nc(tree)->expr));
	$var($Bits, initsStart, $new($Bits, this->inits));
	$var($Bits, uninitsStart, $new($Bits, this->uninits));
	letInit($($nc(tree)->pos()), $nc(tree->var)->sym);
	$set(this, pendingExits, $new($ListBuffer));
	int32_t prevErrors = $nc(this->this$0->log)->nerrors;
	do {
		$var($Bits, uninitsEntry, $new($Bits, this->uninits));
		uninitsEntry->excludeFrom(this->nextadr);
		scan(static_cast<$JCTree*>($nc(tree)->body));
		resolveContinues(tree);
		bool var$0 = $nc(this->this$0->log)->nerrors != prevErrors || $nc(this->flowKind)->isFinal();
		if (var$0 || $nc($($$new($Bits, uninitsEntry)->diffSet(this->uninits)))->nextBit(this->firstadr) == -1) {
			break;
		}
		$nc(this->uninits)->assign($(uninitsEntry->andSet(this->uninits)));
		$set(this, flowKind, $Flow$FlowKind::SPECULATIVE_LOOP);
	} while (true);
	$set(this, flowKind, prevFlowKind);
	$nc(this->inits)->assign(initsStart);
	$nc(this->uninits)->assign($(uninitsStart->andSet(this->uninits)));
	resolveBreaks(tree, prevPendingExits);
	this->nextadr = nextadrPrev;
}

void Flow$AssignAnalyzer::visitLabelled($JCTree$JCLabeledStatement* tree) {
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$set(this, pendingExits, $new($ListBuffer));
	scan(static_cast<$JCTree*>($nc(tree)->body));
	resolveBreaks(tree, prevPendingExits);
}

void Flow$AssignAnalyzer::visitSwitch($JCTree$JCSwitch* tree) {
	handleSwitch(tree, $nc(tree)->selector, tree->cases, tree->hasTotalPattern);
}

void Flow$AssignAnalyzer::visitSwitchExpression($JCTree$JCSwitchExpression* tree) {
	handleSwitch(tree, $nc(tree)->selector, tree->cases, tree->hasTotalPattern);
}

void Flow$AssignAnalyzer::handleSwitch($JCTree* tree, $JCTree$JCExpression* selector, $List* cases, bool hasTotalPattern) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$set(this, pendingExits, $new($ListBuffer));
	int32_t nextadrPrev = this->nextadr;
	scanExpr(selector);
	$var($Bits, initsSwitch, $new($Bits, this->inits));
	$var($Bits, uninitsSwitch, $new($Bits, this->uninits));
	{
		$var($List, l, cases);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$nc(this->inits)->assign(initsSwitch);
			$nc(this->uninits)->assign($($nc(this->uninits)->andSet(uninitsSwitch)));
			$var($JCTree$JCCase, c, $cast($JCTree$JCCase, l->head));
			{
				$var($Iterator, i$, $nc($nc(c)->labels)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree$JCCaseLabel, pat, $cast($JCTree$JCCaseLabel, i$->next()));
					{
						scan(static_cast<$JCTree*>(pat));
						if ($nc(this->inits)->isReset()) {
							$nc(this->inits)->assign(this->initsWhenTrue);
							$nc(this->uninits)->assign(this->uninitsWhenTrue);
						}
					}
				}
			}
			bool var$3 = $nc($nc(($cast($JCTree$JCCase, l->head)))->stats)->isEmpty();
			bool var$2 = var$3 && $nc(l->tail)->nonEmpty();
			bool var$1 = var$2 && $nc($nc(($cast($JCTree$JCCase, $nc(l->tail)->head)))->labels)->size() == 1;
			bool var$0 = var$1 && $nc(($cast($JCTree$JCCaseLabel, $nc($nc(($cast($JCTree$JCCase, $nc(l->tail)->head)))->labels)->head)))->isExpression();
			if (var$0 && $TreeInfo::isNull($cast($JCTree, $nc($nc(($cast($JCTree$JCCase, $nc(l->tail)->head)))->labels)->head))) {
				$assign(l, l->tail);
				$assign(c, $cast($JCTree$JCCase, l->head));
			}
			scan(c->stats);
			$init($JCTree$JCCase);
			if (c->completesNormally && c->caseKind == $JCTree$JCCase::RULE) {
				scanSyntheticBreak(this->this$0->make, tree);
			}
			addVars(c->stats, initsSwitch, uninitsSwitch);
		}
	}
	if (!hasTotalPattern) {
		$init($JCTree$Tag);
		if ($nc(tree)->hasTag($JCTree$Tag::SWITCH_EXPRESSION)) {
			markDead();
		} else {
			$nc(this->inits)->assign(initsSwitch);
			$nc(this->uninits)->assign($($nc(this->uninits)->andSet(uninitsSwitch)));
		}
	}
	$init($JCTree$Tag);
	if ($nc(tree)->hasTag($JCTree$Tag::SWITCH_EXPRESSION)) {
		resolveYields(tree, prevPendingExits);
	} else {
		resolveBreaks(tree, prevPendingExits);
	}
	this->nextadr = nextadrPrev;
}

void Flow$AssignAnalyzer::addVars($List* stats$renamed, $Bits* inits, $Bits* uninits) {
	$useLocalCurrentObjectStackCache();
	$var($List, stats, stats$renamed);
	for (; $nc(stats)->nonEmpty(); $assign(stats, $nc(stats)->tail)) {
		$var($JCTree, stat, $cast($JCTree, stats->head));
		$init($JCTree$Tag);
		if ($nc(stat)->hasTag($JCTree$Tag::VARDEF)) {
			int32_t adr = $nc($nc(($cast($JCTree$JCVariableDecl, stat)))->sym)->adr;
			$nc(inits)->excl(adr);
			$nc(uninits)->incl(adr);
		}
	}
}

void Flow$AssignAnalyzer::visitTry($JCTree$JCTry* tree) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, resourceVarDecls, $new($ListBuffer));
	$var($Bits, uninitsTryPrev, $new($Bits, this->uninitsTry));
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$set(this, pendingExits, $new($ListBuffer));
	$var($Bits, initsTry, $new($Bits, this->inits));
	$nc(this->uninitsTry)->assign(this->uninits);
	{
		$var($Iterator, i$, $nc($nc(tree)->resources)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, resource, $cast($JCTree, i$->next()));
			{
				$var($JCTree$JCExpression, expression, nullptr);
				{
					$var($JCTree$JCVariableDecl, variableDecl, nullptr);
					bool var$0 = $instanceOf($JCTree$JCVariableDecl, resource);
					if (var$0) {
						$assign(variableDecl, $cast($JCTree$JCVariableDecl, resource));
						var$0 = true;
					}
					if (var$0) {
						visitVarDef(variableDecl);
						$nc(this->unrefdResources)->enter($nc(variableDecl)->sym);
						resourceVarDecls->append(variableDecl);
					} else {
						bool var$2 = $instanceOf($JCTree$JCExpression, resource);
						if (var$2) {
							$assign(expression, $cast($JCTree$JCExpression, resource));
							var$2 = true;
						}
						if (var$2) {
							scanExpr(expression);
						} else {
							$throwNew($AssertionError, $of(tree));
						}
					}
				}
			}
		}
	}
	scan(static_cast<$JCTree*>(tree->body));
	$nc(this->uninitsTry)->andSet(this->uninits);
	$var($Bits, initsEnd, $new($Bits, this->inits));
	$var($Bits, uninitsEnd, $new($Bits, this->uninits));
	int32_t nextadrCatch = this->nextadr;
	bool var$3 = !resourceVarDecls->isEmpty();
	$init($Lint$LintCategory);
	if (var$3 && $nc(this->this$0->lint)->isEnabled($Lint$LintCategory::TRY)) {
		{
			$var($Iterator, i$, resourceVarDecls->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCVariableDecl, resVar, $cast($JCTree$JCVariableDecl, i$->next()));
				{
					if ($nc(this->unrefdResources)->includes($nc(resVar)->sym)) {
						$var($Lint$LintCategory, var$4, $Lint$LintCategory::TRY);
						$var($JCDiagnostic$DiagnosticPosition, var$5, $nc(resVar)->pos());
						$nc(this->this$0->log)->warning(var$4, var$5, $($CompilerProperties$Warnings::TryResourceNotReferenced(resVar->sym)));
						$nc(this->unrefdResources)->remove($nc(resVar)->sym);
					}
				}
			}
		}
	}
	$var($Bits, initsCatchPrev, $new($Bits, initsTry));
	$var($Bits, uninitsCatchPrev, $new($Bits, this->uninitsTry));
	{
		$var($List, l, tree->catchers);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$var($JCTree$JCVariableDecl, param, $nc(($cast($JCTree$JCCatch, l->head)))->param);
			$nc(this->inits)->assign(initsCatchPrev);
			$nc(this->uninits)->assign(uninitsCatchPrev);
			scan(static_cast<$JCTree*>(param));
			initParam(param);
			scan(static_cast<$JCTree*>($nc(($cast($JCTree$JCCatch, l->head)))->body));
			initsEnd->andSet(this->inits);
			uninitsEnd->andSet(this->uninits);
			this->nextadr = nextadrCatch;
		}
	}
	if (tree->finalizer != nullptr) {
		$nc(this->inits)->assign(initsTry);
		$nc(this->uninits)->assign(this->uninitsTry);
		$var($ListBuffer, exits, this->pendingExits);
		$set(this, pendingExits, prevPendingExits);
		scan(static_cast<$JCTree*>(tree->finalizer));
		if (!tree->finallyCanCompleteNormally) {
		} else {
			$nc(this->uninits)->andSet(uninitsEnd);
			while ($nc(exits)->nonEmpty()) {
				$var($Flow$BaseAnalyzer$PendingExit, exit, $cast($Flow$BaseAnalyzer$PendingExit, exits->next()));
				{
					$var($Flow$AssignAnalyzer$AssignPendingExit, assignPendingExit, nullptr);
					bool var$6 = $instanceOf($Flow$AssignAnalyzer$AssignPendingExit, exit);
					if (var$6) {
						$assign(assignPendingExit, $cast($Flow$AssignAnalyzer$AssignPendingExit, exit));
						var$6 = true;
					}
					if (var$6) {
						$nc($nc(assignPendingExit)->exit_inits)->orSet(this->inits);
						$nc(assignPendingExit->exit_uninits)->andSet(this->uninits);
					}
				}
				$nc(this->pendingExits)->append(exit);
			}
			$nc(this->inits)->orSet(initsEnd);
		}
	} else {
		$nc(this->inits)->assign(initsEnd);
		$nc(this->uninits)->assign(uninitsEnd);
		$var($ListBuffer, exits, this->pendingExits);
		$set(this, pendingExits, prevPendingExits);
		while ($nc(exits)->nonEmpty()) {
			$nc(this->pendingExits)->append($cast($Flow$BaseAnalyzer$PendingExit, $(exits->next())));
		}
	}
	$nc($($nc(this->uninitsTry)->andSet(uninitsTryPrev)))->andSet(this->uninits);
}

void Flow$AssignAnalyzer::visitConditional($JCTree$JCConditional* tree) {
	$useLocalCurrentObjectStackCache();
	scanCond($nc(tree)->cond);
	$var($Bits, initsBeforeElse, $new($Bits, this->initsWhenFalse));
	$var($Bits, uninitsBeforeElse, $new($Bits, this->uninitsWhenFalse));
	$nc(this->inits)->assign(this->initsWhenTrue);
	$nc(this->uninits)->assign(this->uninitsWhenTrue);
	$init($TypeTag);
	bool var$0 = $nc($nc($nc(tree)->truepart)->type)->hasTag($TypeTag::BOOLEAN);
	if (var$0 && $nc($nc(tree->falsepart)->type)->hasTag($TypeTag::BOOLEAN)) {
		scanCond(tree->truepart);
		$var($Bits, initsAfterThenWhenTrue, $new($Bits, this->initsWhenTrue));
		$var($Bits, initsAfterThenWhenFalse, $new($Bits, this->initsWhenFalse));
		$var($Bits, uninitsAfterThenWhenTrue, $new($Bits, this->uninitsWhenTrue));
		$var($Bits, uninitsAfterThenWhenFalse, $new($Bits, this->uninitsWhenFalse));
		$nc(this->inits)->assign(initsBeforeElse);
		$nc(this->uninits)->assign(uninitsBeforeElse);
		scanCond(tree->falsepart);
		$nc(this->initsWhenTrue)->andSet(initsAfterThenWhenTrue);
		$nc(this->initsWhenFalse)->andSet(initsAfterThenWhenFalse);
		$nc(this->uninitsWhenTrue)->andSet(uninitsAfterThenWhenTrue);
		$nc(this->uninitsWhenFalse)->andSet(uninitsAfterThenWhenFalse);
	} else {
		scanExpr(tree->truepart);
		$var($Bits, initsAfterThen, $new($Bits, this->inits));
		$var($Bits, uninitsAfterThen, $new($Bits, this->uninits));
		$nc(this->inits)->assign(initsBeforeElse);
		$nc(this->uninits)->assign(uninitsBeforeElse);
		scanExpr(tree->falsepart);
		$nc(this->inits)->andSet(initsAfterThen);
		$nc(this->uninits)->andSet(uninitsAfterThen);
	}
}

void Flow$AssignAnalyzer::visitIf($JCTree$JCIf* tree) {
	$useLocalCurrentObjectStackCache();
	scanCond($nc(tree)->cond);
	$var($Bits, initsBeforeElse, $new($Bits, this->initsWhenFalse));
	$var($Bits, uninitsBeforeElse, $new($Bits, this->uninitsWhenFalse));
	$nc(this->inits)->assign(this->initsWhenTrue);
	$nc(this->uninits)->assign(this->uninitsWhenTrue);
	scan(static_cast<$JCTree*>($nc(tree)->thenpart));
	if ($nc(tree)->elsepart != nullptr) {
		$var($Bits, initsAfterThen, $new($Bits, this->inits));
		$var($Bits, uninitsAfterThen, $new($Bits, this->uninits));
		$nc(this->inits)->assign(initsBeforeElse);
		$nc(this->uninits)->assign(uninitsBeforeElse);
		scan(static_cast<$JCTree*>(tree->elsepart));
		$nc(this->inits)->andSet(initsAfterThen);
		$nc(this->uninits)->andSet(uninitsAfterThen);
	} else {
		$nc(this->inits)->andSet(initsBeforeElse);
		$nc(this->uninits)->andSet(uninitsBeforeElse);
	}
}

void Flow$AssignAnalyzer::visitBreak($JCTree$JCBreak* tree) {
	recordExit($$new($Flow$AssignAnalyzer$AssignPendingExit, this, tree, this->inits, this->uninits));
}

void Flow$AssignAnalyzer::visitYield($JCTree$JCYield* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCSwitchExpression, expr, $cast($JCTree$JCSwitchExpression, $nc(tree)->target));
	$init($TypeTag);
	if (expr != nullptr && $nc(expr->type)->hasTag($TypeTag::BOOLEAN)) {
		scanCond(tree->value);
		$var($Bits, initsAfterBreakWhenTrue, $new($Bits, this->initsWhenTrue));
		$var($Bits, initsAfterBreakWhenFalse, $new($Bits, this->initsWhenFalse));
		$var($Bits, uninitsAfterBreakWhenTrue, $new($Bits, this->uninitsWhenTrue));
		$var($Bits, uninitsAfterBreakWhenFalse, $new($Bits, this->uninitsWhenFalse));
		$var($Flow$BaseAnalyzer$PendingExit, exit, $new($Flow$AssignAnalyzer$1, this, tree, initsAfterBreakWhenTrue, initsAfterBreakWhenFalse, uninitsAfterBreakWhenTrue, uninitsAfterBreakWhenFalse));
		merge();
		recordExit(exit);
		return;
	} else {
		scanExpr(tree->value);
		recordExit($$new($Flow$AssignAnalyzer$AssignPendingExit, this, tree, this->inits, this->uninits));
	}
}

void Flow$AssignAnalyzer::visitContinue($JCTree$JCContinue* tree) {
	recordExit($$new($Flow$AssignAnalyzer$AssignPendingExit, this, tree, this->inits, this->uninits));
}

void Flow$AssignAnalyzer::visitReturn($JCTree$JCReturn* tree) {
	scanExpr($nc(tree)->expr);
	recordExit($$new($Flow$AssignAnalyzer$AssignPendingExit, this, tree, this->inits, this->uninits));
}

void Flow$AssignAnalyzer::visitThrow($JCTree$JCThrow* tree) {
	scanExpr($nc(tree)->expr);
	markDead();
}

void Flow$AssignAnalyzer::visitApply($JCTree$JCMethodInvocation* tree) {
	scanExpr($nc(tree)->meth);
	scanExprs($nc(tree)->args);
}

void Flow$AssignAnalyzer::visitNewClass($JCTree$JCNewClass* tree) {
	scanExpr($nc(tree)->encl);
	scanExprs($nc(tree)->args);
	scan(static_cast<$JCTree*>($nc(tree)->def));
}

void Flow$AssignAnalyzer::visitLambda($JCTree$JCLambda* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Bits, prevUninits, $new($Bits, this->uninits));
	$var($Bits, prevInits, $new($Bits, this->inits));
	int32_t returnadrPrev = this->returnadr;
	int32_t nextadrPrev = this->nextadr;
	$var($ListBuffer, prevPending, this->pendingExits);
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->returnadr = this->nextadr;
			$set(this, pendingExits, $new($ListBuffer));
			{
				$var($List, l, $nc(tree)->params);
				for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
					$var($JCTree$JCVariableDecl, def, $cast($JCTree$JCVariableDecl, l->head));
					scan(static_cast<$JCTree*>(def));
					$nc(this->inits)->incl($nc($nc(def)->sym)->adr);
					$nc(this->uninits)->excl($nc($nc(def)->sym)->adr);
				}
			}
			$init($LambdaExpressionTree$BodyKind);
			if (tree->getBodyKind() == $LambdaExpressionTree$BodyKind::EXPRESSION) {
				scanExpr(tree->body);
			} else {
				scan(tree->body);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->returnadr = returnadrPrev;
			$nc(this->uninits)->assign(prevUninits);
			$nc(this->inits)->assign(prevInits);
			$set(this, pendingExits, prevPending);
			this->nextadr = nextadrPrev;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Flow$AssignAnalyzer::visitNewArray($JCTree$JCNewArray* tree) {
	scanExprs($nc(tree)->dims);
	scanExprs($nc(tree)->elems);
}

void Flow$AssignAnalyzer::visitAssert($JCTree$JCAssert* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Bits, initsExit, $new($Bits, this->inits));
	$var($Bits, uninitsExit, $new($Bits, this->uninits));
	scanCond($nc(tree)->cond);
	uninitsExit->andSet(this->uninitsWhenTrue);
	if ($nc(tree)->detail != nullptr) {
		$nc(this->inits)->assign(this->initsWhenFalse);
		$nc(this->uninits)->assign(this->uninitsWhenFalse);
		scanExpr(tree->detail);
	}
	$nc(this->inits)->assign(initsExit);
	$nc(this->uninits)->assign(uninitsExit);
}

void Flow$AssignAnalyzer::visitAssign($JCTree$JCAssign* tree) {
	if (!$TreeInfo::isIdentOrThisDotIdent($nc(tree)->lhs)) {
		scanExpr($nc(tree)->lhs);
	}
	scanExpr($nc(tree)->rhs);
	letInit($nc(tree)->lhs);
}

void Flow$AssignAnalyzer::visitSelect($JCTree$JCFieldAccess* tree) {
	$Flow$BaseAnalyzer::visitSelect(tree);
	$init($Kinds$Kind);
	if ($TreeInfo::isThisQualifier($nc(tree)->selected) && $nc($nc(tree)->sym)->kind == $Kinds$Kind::VAR) {
		checkInit($(tree->pos()), $cast($Symbol$VarSymbol, tree->sym));
	}
}

void Flow$AssignAnalyzer::visitAssignop($JCTree$JCAssignOp* tree) {
	scanExpr($nc(tree)->lhs);
	scanExpr($nc(tree)->rhs);
	letInit($nc(tree)->lhs);
}

void Flow$AssignAnalyzer::visitUnary($JCTree$JCUnary* tree) {
	$useLocalCurrentObjectStackCache();
	$init($Flow$1);
	{
		$var($Bits, t, nullptr)
		switch ($nc($Flow$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
		case 1:
			{
				scanCond(tree->arg);
				$assign(t, $new($Bits, this->initsWhenFalse));
				$nc(this->initsWhenFalse)->assign(this->initsWhenTrue);
				$nc(this->initsWhenTrue)->assign(t);
				$nc(t)->assign(this->uninitsWhenFalse);
				$nc(this->uninitsWhenFalse)->assign(this->uninitsWhenTrue);
				$nc(this->uninitsWhenTrue)->assign(t);
				break;
			}
		case 2:
			{}
		case 3:
			{}
		case 4:
			{}
		case 5:
			{
				scanExpr(tree->arg);
				letInit(tree->arg);
				break;
			}
		default:
			{
				scanExpr(tree->arg);
			}
		}
	}
}

void Flow$AssignAnalyzer::visitBinary($JCTree$JCBinary* tree) {
	$useLocalCurrentObjectStackCache();
	$init($Flow$1);
	{
		$var($Bits, initsWhenFalseLeft, nullptr)
		$var($Bits, uninitsWhenFalseLeft, nullptr)
		$var($Bits, initsWhenTrueLeft, nullptr)
		$var($Bits, uninitsWhenTrueLeft, nullptr)
		switch ($nc($Flow$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
		case 6:
			{
				scanCond(tree->lhs);
				$assign(initsWhenFalseLeft, $new($Bits, this->initsWhenFalse));
				$assign(uninitsWhenFalseLeft, $new($Bits, this->uninitsWhenFalse));
				$nc(this->inits)->assign(this->initsWhenTrue);
				$nc(this->uninits)->assign(this->uninitsWhenTrue);
				scanCond(tree->rhs);
				$nc(this->initsWhenFalse)->andSet(initsWhenFalseLeft);
				$nc(this->uninitsWhenFalse)->andSet(uninitsWhenFalseLeft);
				break;
			}
		case 7:
			{
				scanCond(tree->lhs);
				$assign(initsWhenTrueLeft, $new($Bits, this->initsWhenTrue));
				$assign(uninitsWhenTrueLeft, $new($Bits, this->uninitsWhenTrue));
				$nc(this->inits)->assign(this->initsWhenFalse);
				$nc(this->uninits)->assign(this->uninitsWhenFalse);
				scanCond(tree->rhs);
				$nc(this->initsWhenTrue)->andSet(initsWhenTrueLeft);
				$nc(this->uninitsWhenTrue)->andSet(uninitsWhenTrueLeft);
				break;
			}
		default:
			{
				scanExpr(tree->lhs);
				scanExpr(tree->rhs);
			}
		}
	}
}

void Flow$AssignAnalyzer::visitIdent($JCTree$JCIdent* tree) {
	$init($Kinds$Kind);
	if ($nc($nc(tree)->sym)->kind == $Kinds$Kind::VAR) {
		checkInit($(tree->pos()), $cast($Symbol$VarSymbol, tree->sym));
		referenced(tree->sym);
	}
}

void Flow$AssignAnalyzer::visitBindingPattern($JCTree$JCBindingPattern* tree) {
	$Flow$BaseAnalyzer::visitBindingPattern(tree);
	initParam($nc(tree)->var);
}

void Flow$AssignAnalyzer::referenced($Symbol* sym) {
	$nc(this->unrefdResources)->remove(sym);
}

void Flow$AssignAnalyzer::visitAnnotatedType($JCTree$JCAnnotatedType* tree) {
	$nc($nc(tree)->underlyingType)->accept(this);
}

void Flow$AssignAnalyzer::visitModuleDef($JCTree$JCModuleDecl* tree) {
}

void Flow$AssignAnalyzer::analyzeTree($Env* env, $TreeMaker* make) {
	analyzeTree(env, $nc(env)->tree, make);
}

void Flow$AssignAnalyzer::analyzeTree($Env* env, $JCTree* tree, $TreeMaker* make) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->startPos = $nc($($nc(tree)->pos()))->getStartPosition();
			if (this->vardecls == nullptr) {
				$set(this, vardecls, $new($JCTree$JCVariableDeclArray, 32));
			} else {
				for (int32_t i = 0; i < $nc(this->vardecls)->length; ++i) {
					$nc(this->vardecls)->set(i, nullptr);
				}
			}
			this->firstadr = 0;
			this->nextadr = 0;
			$set(this->this$0, make, make);
			$set(this, pendingExits, $new($ListBuffer));
			$set(this, classDef, nullptr);
			$set(this, unrefdResources, $Scope$WriteableScope::create($nc($nc(env)->enclClass)->sym));
			scan(tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->startPos = -1;
			resetBits($$new($BitsArray, {
				this->inits,
				this->uninits,
				this->uninitsTry,
				this->initsWhenTrue,
				this->initsWhenFalse,
				this->uninitsWhenTrue,
				this->uninitsWhenFalse
			}));
			if (this->vardecls != nullptr) {
				for (int32_t i = 0; i < $nc(this->vardecls)->length; ++i) {
					$nc(this->vardecls)->set(i, nullptr);
				}
			}
			this->firstadr = 0;
			this->nextadr = 0;
			$set(this->this$0, make, nullptr);
			$set(this, pendingExits, nullptr);
			$set(this, classDef, nullptr);
			$set(this, unrefdResources, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Flow$AssignAnalyzer::visitPackageDef($JCTree$JCPackageDecl* tree) {
	$Flow$BaseAnalyzer::visitPackageDef(tree);
}

void Flow$AssignAnalyzer::scan($JCTree* tree) {
	$Flow$BaseAnalyzer::scan(tree);
}

Flow$AssignAnalyzer::Flow$AssignAnalyzer() {
}

$Class* Flow$AssignAnalyzer::load$($String* name, bool initialize) {
	$loadClass(Flow$AssignAnalyzer, name, initialize, &_Flow$AssignAnalyzer_ClassInfo_, allocate$Flow$AssignAnalyzer);
	return class$;
}

$Class* Flow$AssignAnalyzer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com