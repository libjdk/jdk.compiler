#include <com/sun/tools/javac/comp/Flow$FlowAnalyzer.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$PendingExit.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$FlowAnalyzer$ThrownPendingExit.h>
#include <com/sun/tools/javac/comp/Flow$Liveness.h>
#include <com/sun/tools/javac/comp/Flow.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCBreak.h>
#include <com/sun/tools/javac/tree/JCTree$JCCase.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCCatch.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCContinue.h>
#include <com/sun/tools/javac/tree/JCTree$JCDoWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCLabeledStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitch.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCThrow.h>
#include <com/sun/tools/javac/tree/JCTree$JCTry.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeUnion.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/lang/AssertionError.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef METHODDEF
#undef MTH
#undef RETURN
#undef SWITCH_EXPRESSION
#undef VAR
#undef VARDEF

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Lint = ::com::sun::tools::javac::code::Lint;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Flow = ::com::sun::tools::javac::comp::Flow;
using $Flow$BaseAnalyzer = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer;
using $Flow$BaseAnalyzer$PendingExit = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$PendingExit;
using $Flow$FlowAnalyzer$ThrownPendingExit = ::com::sun::tools::javac::comp::Flow$FlowAnalyzer$ThrownPendingExit;
using $Flow$Liveness = ::com::sun::tools::javac::comp::Flow$Liveness;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCBreak = ::com::sun::tools::javac::tree::JCTree$JCBreak;
using $JCTree$JCCase = ::com::sun::tools::javac::tree::JCTree$JCCase;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCCatch = ::com::sun::tools::javac::tree::JCTree$JCCatch;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCContinue = ::com::sun::tools::javac::tree::JCTree$JCContinue;
using $JCTree$JCDoWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop;
using $JCTree$JCEnhancedForLoop = ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCForLoop = ::com::sun::tools::javac::tree::JCTree$JCForLoop;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
using $JCTree$JCIf = ::com::sun::tools::javac::tree::JCTree$JCIf;
using $JCTree$JCLabeledStatement = ::com::sun::tools::javac::tree::JCTree$JCLabeledStatement;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCSwitch = ::com::sun::tools::javac::tree::JCTree$JCSwitch;
using $JCTree$JCSwitchExpression = ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression;
using $JCTree$JCThrow = ::com::sun::tools::javac::tree::JCTree$JCThrow;
using $JCTree$JCTry = ::com::sun::tools::javac::tree::JCTree$JCTry;
using $JCTree$JCTypeUnion = ::com::sun::tools::javac::tree::JCTree$JCTypeUnion;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$JCWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCWhileLoop;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Flow$FlowAnalyzer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Flow;", nullptr, $FINAL | $SYNTHETIC, $field(Flow$FlowAnalyzer, this$0)},
	{"preciseRethrowTypes", "Ljava/util/HashMap;", "Ljava/util/HashMap<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;>;", 0, $field(Flow$FlowAnalyzer, preciseRethrowTypes)},
	{"classDef", "Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, 0, $field(Flow$FlowAnalyzer, classDef)},
	{"thrown", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $field(Flow$FlowAnalyzer, thrown)},
	{"caught", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $field(Flow$FlowAnalyzer, caught)},
	{}
};

$MethodInfo _Flow$FlowAnalyzer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Flow;)V", nullptr, 0, $method(static_cast<void(Flow$FlowAnalyzer::*)($Flow*)>(&Flow$FlowAnalyzer::init$))},
	{"analyzeTree", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/TreeMaker;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/TreeMaker;)V", $PUBLIC},
	{"analyzeTree", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)V", $PUBLIC},
	{"checkCaughtType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", 0},
	{"errorUncaught", "()V", nullptr, 0},
	{"handleSwitch", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;)V", $PRIVATE, $method(static_cast<void(Flow$FlowAnalyzer::*)($JCTree*,$JCTree$JCExpression*,$List*)>(&Flow$FlowAnalyzer::handleSwitch))},
	{"isExceptionOrThrowable", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Flow$FlowAnalyzer::*)($Type*)>(&Flow$FlowAnalyzer::isExceptionOrThrowable))},
	{"markDead", "()V", nullptr, 0},
	{"markThrown", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0},
	{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC},
	{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC},
	{"visitBreak", "(Lcom/sun/tools/javac/tree/JCTree$JCBreak;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitContinue", "(Lcom/sun/tools/javac/tree/JCTree$JCContinue;)V", nullptr, $PUBLIC},
	{"visitDoLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCDoWhileLoop;)V", nullptr, $PUBLIC},
	{"visitForLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCForLoop;)V", nullptr, $PUBLIC},
	{"visitForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)V", nullptr, $PUBLIC},
	{"visitIf", "(Lcom/sun/tools/javac/tree/JCTree$JCIf;)V", nullptr, $PUBLIC},
	{"visitLabelled", "(Lcom/sun/tools/javac/tree/JCTree$JCLabeledStatement;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitModuleDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC},
	{"visitSwitch", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitch;)V", nullptr, $PUBLIC},
	{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC},
	{"visitThrow", "(Lcom/sun/tools/javac/tree/JCTree$JCThrow;)V", nullptr, $PUBLIC},
	{"visitTry", "(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{"visitWhileLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCWhileLoop;)V", nullptr, $PUBLIC},
	{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Flow$FlowAnalyzer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Flow$FlowAnalyzer", "com.sun.tools.javac.comp.Flow", "FlowAnalyzer", 0},
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer", "com.sun.tools.javac.comp.Flow", "BaseAnalyzer", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.comp.Flow$FlowAnalyzer$ThrownPendingExit", "com.sun.tools.javac.comp.Flow$FlowAnalyzer", "ThrownPendingExit", 0},
	{}
};

$ClassInfo _Flow$FlowAnalyzer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Flow$FlowAnalyzer",
	"com.sun.tools.javac.comp.Flow$BaseAnalyzer",
	nullptr,
	_Flow$FlowAnalyzer_FieldInfo_,
	_Flow$FlowAnalyzer_MethodInfo_,
	nullptr,
	nullptr,
	_Flow$FlowAnalyzer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Flow"
};

$Object* allocate$Flow$FlowAnalyzer($Class* clazz) {
	return $of($alloc(Flow$FlowAnalyzer));
}

void Flow$FlowAnalyzer::init$($Flow* this$0) {
	$set(this, this$0, this$0);
	$Flow$BaseAnalyzer::init$();
}

void Flow$FlowAnalyzer::markDead() {
}

void Flow$FlowAnalyzer::errorUncaught() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Flow$BaseAnalyzer$PendingExit, exit, $cast($Flow$BaseAnalyzer$PendingExit, $nc(this->pendingExits)->next()));
		for (; exit != nullptr; $assign(exit, $cast($Flow$BaseAnalyzer$PendingExit, $nc(this->pendingExits)->next()))) {
			{
				$var($Flow$FlowAnalyzer$ThrownPendingExit, thrownExit, nullptr);
				bool var$0 = $instanceOf($Flow$FlowAnalyzer$ThrownPendingExit, exit);
				if (var$0) {
					$assign(thrownExit, $cast($Flow$FlowAnalyzer$ThrownPendingExit, exit));
					var$0 = true;
				}
				if (var$0) {
					if (this->classDef != nullptr && $nc(this->classDef)->pos$ == $nc($nc(exit)->tree)->pos$) {
						$var($JCDiagnostic$DiagnosticPosition, var$1, $nc(exit->tree)->pos());
						$nc(this->this$0->log)->error(var$1, $($CompilerProperties$Errors::UnreportedExceptionDefaultConstructor($nc(thrownExit)->thrown)));
					} else {
						$init($JCTree$Tag);
						bool var$3 = $nc(exit->tree)->hasTag($JCTree$Tag::VARDEF);
						if (var$3 && $nc($nc(($cast($JCTree$JCVariableDecl, exit->tree)))->sym)->isResourceVariable()) {
							$var($JCDiagnostic$DiagnosticPosition, var$4, $nc(exit->tree)->pos());
							$nc(this->this$0->log)->error(var$4, $($CompilerProperties$Errors::UnreportedExceptionImplicitClose($nc(thrownExit)->thrown, $nc($nc(($cast($JCTree$JCVariableDecl, exit->tree)))->sym)->name)));
						} else {
							$var($JCDiagnostic$DiagnosticPosition, var$5, $nc(exit->tree)->pos());
							$nc(this->this$0->log)->error(var$5, $($CompilerProperties$Errors::UnreportedExceptionNeedToCatchOrThrow($nc(thrownExit)->thrown)));
						}
					}
				} else {
					$Assert::check($nc(this->this$0->log)->hasErrorOn($($nc($nc(exit)->tree)->pos())));
				}
			}
		}
	}
}

void Flow$FlowAnalyzer::markThrown($JCTree* tree, $Type* exc) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->this$0->chk)->isUnchecked($($nc(tree)->pos()), exc)) {
		if (!$nc(this->this$0->chk)->isHandled(exc, this->caught)) {
			$nc(this->pendingExits)->append($$new($Flow$FlowAnalyzer$ThrownPendingExit, this, tree, exc));
		}
		$set(this, thrown, $nc(this->this$0->chk)->incl(exc, this->thrown));
	}
}

void Flow$FlowAnalyzer::visitClassDef($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tree)->sym == nullptr) {
		return;
	}
	$var($JCTree$JCClassDecl, classDefPrev, this->classDef);
	$var($List, thrownPrev, this->thrown);
	$var($List, caughtPrev, this->caught);
	$var($ListBuffer, pendingExitsPrev, this->pendingExits);
	$var($Lint, lintPrev, this->this$0->lint);
	bool anonymousClass = $nc(tree)->name == $nc(this->this$0->names)->empty;
	$set(this, pendingExits, $new($ListBuffer));
	if (!anonymousClass) {
		$set(this, caught, $List::nil());
	}
	$set(this, classDef, tree);
	$set(this, thrown, $List::nil());
	$set(this->this$0, lint, $nc(this->this$0->lint)->augment(static_cast<$Symbol*>(tree->sym)));
	{
		$var($Throwable, var$0, nullptr);
		try {
			{
				$var($List, l, tree->defs);
				for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
					$init($JCTree$Tag);
					bool var$1 = !$nc(($cast($JCTree, l->head)))->hasTag($JCTree$Tag::METHODDEF);
					if (var$1 && ((int64_t)($TreeInfo::flags($cast($JCTree, l->head)) & (uint64_t)(int64_t)8)) != 0) {
						scan($cast($JCTree, l->head));
						errorUncaught();
					}
				}
			}
			if (!anonymousClass) {
				bool firstConstructor = true;
				{
					$var($List, l, tree->defs);
					for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
						if ($TreeInfo::isInitialConstructor($cast($JCTree, l->head))) {
							$var($List, mthrown, $nc($nc($nc(($cast($JCTree$JCMethodDecl, l->head)))->sym)->type)->getThrownTypes());
							if (firstConstructor) {
								$set(this, caught, mthrown);
								firstConstructor = false;
							} else {
								$set(this, caught, $nc(this->this$0->chk)->intersect(mthrown, this->caught));
							}
						}
					}
				}
			}
			{
				$var($List, l, tree->defs);
				for (; l->nonEmpty(); $assign(l, l->tail)) {
					$init($JCTree$Tag);
					bool var$2 = !$nc(($cast($JCTree, $nc(l)->head)))->hasTag($JCTree$Tag::METHODDEF);
					if (var$2 && ((int64_t)($TreeInfo::flags($cast($JCTree, l->head)) & (uint64_t)(int64_t)8)) == 0) {
						scan($cast($JCTree, l->head));
						errorUncaught();
					}
				}
			}
			if (anonymousClass) {
				{
					$var($List, l, tree->defs);
					for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
						if ($TreeInfo::isConstructor($cast($JCTree, l->head))) {
							$var($JCTree$JCMethodDecl, mdef, $cast($JCTree$JCMethodDecl, l->head));
							scan(static_cast<$JCTree*>(mdef));
							$set($nc(mdef), thrown, $nc(this->this$0->make)->Types(this->thrown));
							$set($nc(mdef->sym), type, $nc(this->this$0->types)->createMethodTypeWithThrown($nc(mdef->sym)->type, this->thrown));
						}
					}
				}
				$assign(thrownPrev, $nc(this->this$0->chk)->union$(this->thrown, thrownPrev));
			}
			{
				$var($List, l, tree->defs);
				for (; l->nonEmpty(); $assign(l, l->tail)) {
					if (anonymousClass && $TreeInfo::isConstructor($cast($JCTree, $nc(l)->head))) {
						continue;
					}
					$init($JCTree$Tag);
					if ($nc(($cast($JCTree, $nc(l)->head)))->hasTag($JCTree$Tag::METHODDEF)) {
						scan($cast($JCTree, l->head));
						errorUncaught();
					}
				}
			}
			$set(this, thrown, thrownPrev);
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$set(this, pendingExits, pendingExitsPrev);
			$set(this, caught, caughtPrev);
			$set(this, classDef, classDefPrev);
			$set(this->this$0, lint, lintPrev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Flow$FlowAnalyzer::visitMethodDef($JCTree$JCMethodDecl* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tree)->body == nullptr) {
		return;
	}
	$var($List, caughtPrev, this->caught);
	$var($List, mthrown, $nc($nc($nc(tree)->sym)->type)->getThrownTypes());
	$var($Lint, lintPrev, this->this$0->lint);
	$set(this->this$0, lint, $nc(this->this$0->lint)->augment(static_cast<$Symbol*>(tree->sym)));
	$Assert::check($nc(this->pendingExits)->isEmpty());
	{
		$var($Throwable, var$0, nullptr);
		try {
			{
				$var($List, l, tree->params);
				for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
					$var($JCTree$JCVariableDecl, def, $cast($JCTree$JCVariableDecl, l->head));
					scan(static_cast<$JCTree*>(def));
				}
			}
			if ($TreeInfo::isInitialConstructor(tree)) {
				$set(this, caught, $nc(this->this$0->chk)->union$(this->caught, mthrown));
			} else if (((int64_t)($nc(tree->sym)->flags() & (uint64_t)(int64_t)(0x00100000 | 8))) != 0x00100000) {
				$set(this, caught, mthrown);
			}
			scan(static_cast<$JCTree*>(tree->body));
			$var($List, exits, $nc(this->pendingExits)->toList());
			$set(this, pendingExits, $new($ListBuffer));
			while ($nc(exits)->nonEmpty()) {
				$var($Flow$BaseAnalyzer$PendingExit, exit, $cast($Flow$BaseAnalyzer$PendingExit, exits->head));
				$assign(exits, exits->tail);
				if (!($instanceOf($Flow$FlowAnalyzer$ThrownPendingExit, exit))) {
					$init($JCTree$Tag);
					bool var$1 = $nc($nc(exit)->tree)->hasTag($JCTree$Tag::RETURN);
					$Assert::check(var$1 || $nc(this->this$0->log)->hasErrorOn($($nc($nc(exit)->tree)->pos())));
				} else {
					$nc(this->pendingExits)->append(exit);
				}
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$set(this, caught, caughtPrev);
			$set(this->this$0, lint, lintPrev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Flow$FlowAnalyzer::visitVarDef($JCTree$JCVariableDecl* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tree)->init != nullptr) {
		$var($Lint, lintPrev, this->this$0->lint);
		$set(this->this$0, lint, $nc(this->this$0->lint)->augment(static_cast<$Symbol*>(tree->sym)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				scan(static_cast<$JCTree*>(tree->init));
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
}

void Flow$FlowAnalyzer::visitBlock($JCTree$JCBlock* tree) {
	scan($nc(tree)->stats);
}

void Flow$FlowAnalyzer::visitDoLoop($JCTree$JCDoWhileLoop* tree) {
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$set(this, pendingExits, $new($ListBuffer));
	scan(static_cast<$JCTree*>($nc(tree)->body));
	resolveContinues(tree);
	scan(static_cast<$JCTree*>($nc(tree)->cond));
	resolveBreaks(tree, prevPendingExits);
}

void Flow$FlowAnalyzer::visitWhileLoop($JCTree$JCWhileLoop* tree) {
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$set(this, pendingExits, $new($ListBuffer));
	scan(static_cast<$JCTree*>($nc(tree)->cond));
	scan(static_cast<$JCTree*>($nc(tree)->body));
	resolveContinues(tree);
	resolveBreaks(tree, prevPendingExits);
}

void Flow$FlowAnalyzer::visitForLoop($JCTree$JCForLoop* tree) {
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	scan($nc(tree)->init);
	$set(this, pendingExits, $new($ListBuffer));
	if ($nc(tree)->cond != nullptr) {
		scan(static_cast<$JCTree*>(tree->cond));
	}
	scan(static_cast<$JCTree*>($nc(tree)->body));
	resolveContinues(tree);
	scan($nc(tree)->step);
	resolveBreaks(tree, prevPendingExits);
}

void Flow$FlowAnalyzer::visitForeachLoop($JCTree$JCEnhancedForLoop* tree) {
	visitVarDef($nc(tree)->var);
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	scan(static_cast<$JCTree*>($nc(tree)->expr));
	$set(this, pendingExits, $new($ListBuffer));
	scan(static_cast<$JCTree*>($nc(tree)->body));
	resolveContinues(tree);
	resolveBreaks(tree, prevPendingExits);
}

void Flow$FlowAnalyzer::visitLabelled($JCTree$JCLabeledStatement* tree) {
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$set(this, pendingExits, $new($ListBuffer));
	scan(static_cast<$JCTree*>($nc(tree)->body));
	resolveBreaks(tree, prevPendingExits);
}

void Flow$FlowAnalyzer::visitSwitch($JCTree$JCSwitch* tree) {
	handleSwitch(tree, $nc(tree)->selector, tree->cases);
}

void Flow$FlowAnalyzer::visitSwitchExpression($JCTree$JCSwitchExpression* tree) {
	handleSwitch(tree, $nc(tree)->selector, tree->cases);
}

void Flow$FlowAnalyzer::handleSwitch($JCTree* tree, $JCTree$JCExpression* selector, $List* cases) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$set(this, pendingExits, $new($ListBuffer));
	scan(static_cast<$JCTree*>(selector));
	{
		$var($List, l, cases);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$var($JCTree$JCCase, c, $cast($JCTree$JCCase, l->head));
			scan($nc(c)->labels);
			scan($nc(c)->stats);
		}
	}
	$init($JCTree$Tag);
	if ($nc(tree)->hasTag($JCTree$Tag::SWITCH_EXPRESSION)) {
		resolveYields(tree, prevPendingExits);
	} else {
		resolveBreaks(tree, prevPendingExits);
	}
}

void Flow$FlowAnalyzer::visitTry($JCTree$JCTry* tree) {
	$useLocalCurrentObjectStackCache();
	$var($List, caughtPrev, this->caught);
	$var($List, thrownPrev, this->thrown);
	$set(this, thrown, $List::nil());
	{
		$var($List, l, $nc(tree)->catchers);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$var($List, subClauses, $TreeInfo::isMultiCatch($cast($JCTree$JCCatch, l->head)) ? $nc(($cast($JCTree$JCTypeUnion, $nc($nc(($cast($JCTree$JCCatch, l->head)))->param)->vartype)))->alternatives : $List::of($nc($nc(($cast($JCTree$JCCatch, l->head)))->param)->vartype));
			{
				$var($Iterator, i$, $nc(subClauses)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree$JCExpression, ct, $cast($JCTree$JCExpression, i$->next()));
					{
						$set(this, caught, $nc(this->this$0->chk)->incl($nc(ct)->type, this->caught));
					}
				}
			}
		}
	}
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$set(this, pendingExits, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(tree->resources)->iterator());
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
					} else {
						bool var$2 = $instanceOf($JCTree$JCExpression, resource);
						if (var$2) {
							$assign(expression, $cast($JCTree$JCExpression, resource));
							var$2 = true;
						}
						if (var$2) {
							scan(static_cast<$JCTree*>(expression));
						} else {
							$throwNew($AssertionError, $of(tree));
						}
					}
				}
			}
		}
	}
	{
		$var($Iterator, i$, $nc(tree->resources)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, resource, $cast($JCTree, i$->next()));
			{
				$var($List, closeableSupertypes, $nc($nc(resource)->type)->isCompound() ? $nc($($nc(this->this$0->types)->interfaces($nc(resource)->type)))->prepend($($nc(this->this$0->types)->supertype($nc(resource)->type))) : $List::of($nc(resource)->type));
				{
					$var($Iterator, i$, $nc(closeableSupertypes)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Type, sup, $cast($Type, i$->next()));
						{
							if ($nc(this->this$0->types)->asSuper(sup, $nc($nc(this->this$0->syms)->autoCloseableType)->tsym) != nullptr) {
								$var($JCDiagnostic$DiagnosticPosition, var$3, static_cast<$JCDiagnostic$DiagnosticPosition*>(tree));
								$var($Env, var$4, this->this$0->attrEnv);
								$var($Type, var$5, $nc(this->this$0->types)->skipTypeVars(sup, false));
								$var($Name, var$6, $nc(this->this$0->names)->close);
								$var($List, var$7, $List::nil());
								$var($Symbol, closeMethod, $nc(this->this$0->rs)->resolveQualifiedMethod(var$3, var$4, var$5, var$6, var$7, $($List::nil())));
								$var($Type, mt, $nc(this->this$0->types)->memberType($nc(resource)->type, closeMethod));
								$init($Kinds$Kind);
								if ($nc(closeMethod)->kind == $Kinds$Kind::MTH) {
									{
										$var($Iterator, i$, $nc($($nc(mt)->getThrownTypes()))->iterator());
										for (; $nc(i$)->hasNext();) {
											$var($Type, t, $cast($Type, i$->next()));
											{
												markThrown(resource, t);
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
	scan(static_cast<$JCTree*>(tree->body));
	$var($List, thrownInTry, $nc(this->this$0->chk)->union$(this->thrown, $($List::of($nc(this->this$0->syms)->runtimeExceptionType, $nc(this->this$0->syms)->errorType))));
	$set(this, thrown, thrownPrev);
	$set(this, caught, caughtPrev);
	$var($List, caughtInTry, $List::nil());
	{
		$var($List, l, tree->catchers);
		for (; l->nonEmpty(); $assign(l, l->tail)) {
			$var($JCTree$JCVariableDecl, param, $nc(($cast($JCTree$JCCatch, $nc(l)->head)))->param);
			$var($List, subClauses, $TreeInfo::isMultiCatch($cast($JCTree$JCCatch, l->head)) ? $nc(($cast($JCTree$JCTypeUnion, $nc($nc(($cast($JCTree$JCCatch, l->head)))->param)->vartype)))->alternatives : $List::of($nc($nc(($cast($JCTree$JCCatch, l->head)))->param)->vartype));
			$var($List, ctypes, $List::nil());
			$var($List, rethrownTypes, $nc(this->this$0->chk)->diff(thrownInTry, caughtInTry));
			{
				$var($Iterator, i$, $nc(subClauses)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree$JCExpression, ct, $cast($JCTree$JCExpression, i$->next()));
					{
						$var($Type, exc, $nc(ct)->type);
						if (exc != $nc(this->this$0->syms)->unknownType) {
							$assign(ctypes, $nc(ctypes)->append(exc));
							if ($nc(this->this$0->types)->isSameType(exc, $nc(this->this$0->syms)->objectType)) {
								continue;
							}
							$var($JCDiagnostic$DiagnosticPosition, pos, subClauses->size() > 1 ? ct->pos() : $nc(($cast($JCTree$JCCatch, l->head)))->pos());
							checkCaughtType(pos, exc, thrownInTry, caughtInTry);
							$assign(caughtInTry, $nc(this->this$0->chk)->incl(exc, caughtInTry));
						}
					}
				}
			}
			scan(static_cast<$JCTree*>(param));
			$nc(this->preciseRethrowTypes)->put($nc(param)->sym, $($nc(this->this$0->chk)->intersect(ctypes, rethrownTypes)));
			scan(static_cast<$JCTree*>($nc(($cast($JCTree$JCCatch, l->head)))->body));
			$nc(this->preciseRethrowTypes)->remove($nc(param)->sym);
		}
	}
	if (tree->finalizer != nullptr) {
		$var($List, savedThrown, this->thrown);
		$set(this, thrown, $List::nil());
		$var($ListBuffer, exits, this->pendingExits);
		$set(this, pendingExits, prevPendingExits);
		scan(static_cast<$JCTree*>(tree->finalizer));
		if (!tree->finallyCanCompleteNormally) {
			$set(this, thrown, $nc(this->this$0->chk)->union$(this->thrown, thrownPrev));
		} else {
			$set(this, thrown, $nc(this->this$0->chk)->union$(this->thrown, $($nc(this->this$0->chk)->diff(thrownInTry, caughtInTry))));
			$set(this, thrown, $nc(this->this$0->chk)->union$(this->thrown, savedThrown));
			while ($nc(exits)->nonEmpty()) {
				$nc(this->pendingExits)->append($cast($Flow$BaseAnalyzer$PendingExit, $(exits->next())));
			}
		}
	} else {
		$set(this, thrown, $nc(this->this$0->chk)->union$(this->thrown, $($nc(this->this$0->chk)->diff(thrownInTry, caughtInTry))));
		$var($ListBuffer, exits, this->pendingExits);
		$set(this, pendingExits, prevPendingExits);
		while ($nc(exits)->nonEmpty()) {
			$nc(this->pendingExits)->append($cast($Flow$BaseAnalyzer$PendingExit, $(exits->next())));
		}
	}
}

void Flow$FlowAnalyzer::visitIf($JCTree$JCIf* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->cond));
	scan(static_cast<$JCTree*>($nc(tree)->thenpart));
	if ($nc(tree)->elsepart != nullptr) {
		scan(static_cast<$JCTree*>(tree->elsepart));
	}
}

void Flow$FlowAnalyzer::checkCaughtType($JCDiagnostic$DiagnosticPosition* pos, $Type* exc, $List* thrownInTry, $List* caughtInTry) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->this$0->chk)->subset(exc, caughtInTry)) {
		$nc(this->this$0->log)->error(pos, $($CompilerProperties$Errors::ExceptAlreadyCaught(exc)));
	} else {
		bool var$3 = !$nc(this->this$0->chk)->isUnchecked(pos, exc);
		bool var$2 = var$3 && !isExceptionOrThrowable(exc);
		if (var$2 && !$nc(this->this$0->chk)->intersects(exc, thrownInTry)) {
			$nc(this->this$0->log)->error(pos, $($CompilerProperties$Errors::ExceptNeverThrownInTry(exc)));
		} else {
			$var($List, catchableThrownTypes, $nc(this->this$0->chk)->intersect($($List::of(exc)), thrownInTry));
			bool var$4 = $nc($($nc(this->this$0->chk)->diff(catchableThrownTypes, caughtInTry)))->isEmpty();
			if (var$4 && !isExceptionOrThrowable(exc)) {
				$var($JCDiagnostic$Warning, key, $nc(catchableThrownTypes)->length() == 1 ? $CompilerProperties$Warnings::UnreachableCatch(catchableThrownTypes) : $CompilerProperties$Warnings::UnreachableCatch1(catchableThrownTypes));
				$nc(this->this$0->log)->warning(pos, key);
			}
		}
	}
}

bool Flow$FlowAnalyzer::isExceptionOrThrowable($Type* exc) {
	return $nc(exc)->tsym == $nc($nc(this->this$0->syms)->throwableType)->tsym || $nc(exc)->tsym == $nc($nc(this->this$0->syms)->exceptionType)->tsym;
}

void Flow$FlowAnalyzer::visitBreak($JCTree$JCBreak* tree) {
	recordExit($$new($Flow$BaseAnalyzer$PendingExit, tree));
}

void Flow$FlowAnalyzer::visitYield($JCTree$JCYield* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->value));
	recordExit($$new($Flow$BaseAnalyzer$PendingExit, tree));
}

void Flow$FlowAnalyzer::visitContinue($JCTree$JCContinue* tree) {
	recordExit($$new($Flow$BaseAnalyzer$PendingExit, tree));
}

void Flow$FlowAnalyzer::visitReturn($JCTree$JCReturn* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->expr));
	recordExit($$new($Flow$BaseAnalyzer$PendingExit, tree));
}

void Flow$FlowAnalyzer::visitThrow($JCTree$JCThrow* tree) {
	$useLocalCurrentObjectStackCache();
	scan(static_cast<$JCTree*>($nc(tree)->expr));
	$var($Symbol, sym, $TreeInfo::symbol($nc(tree)->expr));
	$init($Kinds$Kind);
	bool var$0 = sym != nullptr && sym->kind == $Kinds$Kind::VAR && ((int64_t)(sym->flags() & (uint64_t)(16 | (int64_t)0x0000020000000000))) != 0;
	if (var$0 && $nc(this->preciseRethrowTypes)->get(sym) != nullptr) {
		{
			$var($Iterator, i$, $nc(($cast($List, $($nc(this->preciseRethrowTypes)->get(sym)))))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, t, $cast($Type, i$->next()));
				{
					markThrown(tree, t);
				}
			}
		}
	} else {
		markThrown(tree, $nc($nc(tree)->expr)->type);
	}
	markDead();
}

void Flow$FlowAnalyzer::visitApply($JCTree$JCMethodInvocation* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->meth));
	scan($nc(tree)->args);
	{
		$var($List, l, $nc($nc($nc(tree)->meth)->type)->getThrownTypes());
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			markThrown(tree, $cast($Type, l->head));
		}
	}
}

void Flow$FlowAnalyzer::visitNewClass($JCTree$JCNewClass* tree) {
	$useLocalCurrentObjectStackCache();
	scan(static_cast<$JCTree*>($nc(tree)->encl));
	scan($nc(tree)->args);
	{
		$var($List, l, $nc($nc(tree)->constructorType)->getThrownTypes());
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			markThrown(tree, $cast($Type, l->head));
		}
	}
	$var($List, caughtPrev, this->caught);
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (tree->def != nullptr) {
				{
					$var($List, l, $nc($nc(tree->constructor)->type)->getThrownTypes());
					for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
						$set(this, caught, $nc(this->this$0->chk)->incl($cast($Type, l->head), this->caught));
					}
				}
			}
			scan(static_cast<$JCTree*>(tree->def));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, caught, caughtPrev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Flow$FlowAnalyzer::visitLambda($JCTree$JCLambda* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tree)->type != nullptr && $nc(tree->type)->isErroneous()) {
		return;
	}
	$var($List, prevCaught, this->caught);
	$var($List, prevThrown, this->thrown);
	$var($ListBuffer, prevPending, this->pendingExits);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, pendingExits, $new($ListBuffer));
			$set(this, caught, $nc($($nc(tree)->getDescriptorType(this->this$0->types)))->getThrownTypes());
			$set(this, thrown, $List::nil());
			scan(tree->body);
			$var($List, exits, $nc(this->pendingExits)->toList());
			$set(this, pendingExits, $new($ListBuffer));
			while ($nc(exits)->nonEmpty()) {
				$var($Flow$BaseAnalyzer$PendingExit, exit, $cast($Flow$BaseAnalyzer$PendingExit, exits->head));
				$assign(exits, exits->tail);
				if (!($instanceOf($Flow$FlowAnalyzer$ThrownPendingExit, exit))) {
					$init($JCTree$Tag);
					bool var$1 = $nc($nc(exit)->tree)->hasTag($JCTree$Tag::RETURN);
					$Assert::check(var$1 || $nc(this->this$0->log)->hasErrorOn($($nc($nc(exit)->tree)->pos())));
				} else {
					$nc(this->pendingExits)->append(exit);
				}
			}
			errorUncaught();
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$set(this, pendingExits, prevPending);
			$set(this, caught, prevCaught);
			$set(this, thrown, prevThrown);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Flow$FlowAnalyzer::visitModuleDef($JCTree$JCModuleDecl* tree) {
}

void Flow$FlowAnalyzer::analyzeTree($Env* env, $TreeMaker* make) {
	analyzeTree(env, $nc(env)->tree, make);
}

void Flow$FlowAnalyzer::analyzeTree($Env* env, $JCTree* tree, $TreeMaker* make) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this->this$0, attrEnv, env);
			$set(this->this$0, make, make);
			$set(this, pendingExits, $new($ListBuffer));
			$set(this, preciseRethrowTypes, $new($HashMap));
			$set(this, thrown, ($set(this, caught, nullptr)));
			$set(this, classDef, nullptr);
			scan(tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, pendingExits, nullptr);
			$set(this->this$0, make, nullptr);
			$set(this, thrown, ($set(this, caught, nullptr)));
			$set(this, classDef, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

Flow$FlowAnalyzer::Flow$FlowAnalyzer() {
}

$Class* Flow$FlowAnalyzer::load$($String* name, bool initialize) {
	$loadClass(Flow$FlowAnalyzer, name, initialize, &_Flow$FlowAnalyzer_ClassInfo_, allocate$Flow$FlowAnalyzer);
	return class$;
}

$Class* Flow$FlowAnalyzer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com