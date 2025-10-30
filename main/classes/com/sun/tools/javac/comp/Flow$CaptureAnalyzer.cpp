#include <com/sun/tools/javac/comp/Flow$CaptureAnalyzer.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Flow$1.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssignOp.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCGuardPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCTry.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/lang/AssertionError.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef IDENT
#undef MTH
#undef SELECT
#undef VAR
#undef VARDEF

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Flow = ::com::sun::tools::javac::comp::Flow;
using $Flow$1 = ::com::sun::tools::javac::comp::Flow$1;
using $Flow$BaseAnalyzer = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAssign = ::com::sun::tools::javac::tree::JCTree$JCAssign;
using $JCTree$JCAssignOp = ::com::sun::tools::javac::tree::JCTree$JCAssignOp;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
using $JCTree$JCGuardPattern = ::com::sun::tools::javac::tree::JCTree$JCGuardPattern;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $JCTree$JCPattern = ::com::sun::tools::javac::tree::JCTree$JCPattern;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCTry = ::com::sun::tools::javac::tree::JCTree$JCTry;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
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

$FieldInfo _Flow$CaptureAnalyzer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Flow;", nullptr, $FINAL | $SYNTHETIC, $field(Flow$CaptureAnalyzer, this$0)},
	{"currentTree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0, $field(Flow$CaptureAnalyzer, currentTree)},
	{}
};

$MethodInfo _Flow$CaptureAnalyzer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Flow;)V", nullptr, 0, $method(static_cast<void(Flow$CaptureAnalyzer::*)($Flow*)>(&Flow$CaptureAnalyzer::init$))},
	{"analyzeTree", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/TreeMaker;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/TreeMaker;)V", $PUBLIC},
	{"analyzeTree", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)V", $PUBLIC},
	{"checkEffectivelyFinal", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$VarSymbol;)V", nullptr, 0},
	{"letInit", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0},
	{"markDead", "()V", nullptr, 0},
	{"reportEffectivelyFinalError", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"reportInnerClsNeedsFinalError", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"visitAssign", "(Lcom/sun/tools/javac/tree/JCTree$JCAssign;)V", nullptr, $PUBLIC},
	{"visitAssignop", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitGuardPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCGuardPattern;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitModuleDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;)V", nullptr, $PUBLIC},
	{"visitTry", "(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V", nullptr, $PUBLIC},
	{"visitUnary", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)V", nullptr, $PUBLIC},
	{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Flow$CaptureAnalyzer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Flow$CaptureAnalyzer", "com.sun.tools.javac.comp.Flow", "CaptureAnalyzer", 0},
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer", "com.sun.tools.javac.comp.Flow", "BaseAnalyzer", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Flow$CaptureAnalyzer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Flow$CaptureAnalyzer",
	"com.sun.tools.javac.comp.Flow$BaseAnalyzer",
	nullptr,
	_Flow$CaptureAnalyzer_FieldInfo_,
	_Flow$CaptureAnalyzer_MethodInfo_,
	nullptr,
	nullptr,
	_Flow$CaptureAnalyzer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Flow"
};

$Object* allocate$Flow$CaptureAnalyzer($Class* clazz) {
	return $of($alloc(Flow$CaptureAnalyzer));
}

void Flow$CaptureAnalyzer::init$($Flow* this$0) {
	$set(this, this$0, this$0);
	$Flow$BaseAnalyzer::init$();
}

void Flow$CaptureAnalyzer::markDead() {
}

void Flow$CaptureAnalyzer::checkEffectivelyFinal($JCDiagnostic$DiagnosticPosition* pos, $Symbol$VarSymbol* sym) {
	$init($Kinds$Kind);
	if (this->currentTree != nullptr && $nc($nc(sym)->owner)->kind == $Kinds$Kind::MTH && sym->pos < $nc(this->currentTree)->getStartPosition()) {
		$init($Flow$1);
		switch ($nc($Flow$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(this->currentTree)->getTag())))->ordinal())) {
		case 8:
			{
				if (!this->this$0->allowEffectivelyFinalInInnerClasses) {
					if (((int64_t)(sym->flags() & (uint64_t)(int64_t)16)) == 0) {
						reportInnerClsNeedsFinalError(pos, sym);
					}
					break;
				}
			}
		case 9:
			{}
		case 10:
			{
				if (((int64_t)(sym->flags() & (uint64_t)((int64_t)0x0000020000000000 | 16))) == 0) {
					reportEffectivelyFinalError(pos, sym);
				}
			}
		}
	}
}

void Flow$CaptureAnalyzer::letInit($JCTree* tree$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, tree, tree$renamed);
	$assign(tree, $TreeInfo::skipParens(tree));
	$init($JCTree$Tag);
	bool var$0 = $nc(tree)->hasTag($JCTree$Tag::IDENT);
	if (var$0 || $nc(tree)->hasTag($JCTree$Tag::SELECT)) {
		$var($Symbol, sym, $TreeInfo::symbol(tree));
		$init($Kinds$Kind);
		if (this->currentTree != nullptr && $nc(sym)->kind == $Kinds$Kind::VAR && $nc(sym->owner)->kind == $Kinds$Kind::MTH && $nc(($cast($Symbol$VarSymbol, sym)))->pos < $nc(this->currentTree)->getStartPosition()) {
			$init($Flow$1);
			switch ($nc($Flow$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(this->currentTree)->getTag())))->ordinal())) {
			case 8:
				{
					if (!this->this$0->allowEffectivelyFinalInInnerClasses) {
						reportInnerClsNeedsFinalError(tree, sym);
						break;
					}
				}
			case 9:
				{}
			case 10:
				{
					reportEffectivelyFinalError(tree, sym);
				}
			}
		}
	}
}

void Flow$CaptureAnalyzer::reportEffectivelyFinalError($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$init($Flow$1);

	$var($JCDiagnostic$Fragment, var$0, nullptr)
	switch ($nc($Flow$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(this->currentTree)->getTag())))->ordinal())) {
	case 10:
		{
			$init($CompilerProperties$Fragments);
			$assign(var$0, $CompilerProperties$Fragments::Lambda);
			break;
		}
	case 9:
		{
			$init($CompilerProperties$Fragments);
			$assign(var$0, $CompilerProperties$Fragments::Guard);
			break;
		}
	case 8:
		{
			$init($CompilerProperties$Fragments);
			$assign(var$0, $CompilerProperties$Fragments::InnerCls);
			break;
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"Unexpected tree kind: "_s, $($nc(this->currentTree)->getTag())})));
		}
	}
	$var($JCDiagnostic$Fragment, subKey, var$0);
	$nc(this->this$0->log)->error(pos, $($CompilerProperties$Errors::CantRefNonEffectivelyFinalVar(sym, $($nc(this->this$0->diags)->fragment(subKey)))));
}

void Flow$CaptureAnalyzer::reportInnerClsNeedsFinalError($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym) {
	$nc(this->this$0->log)->error(pos, $($CompilerProperties$Errors::LocalVarAccessedFromIclsNeedsFinal(sym)));
}

void Flow$CaptureAnalyzer::visitClassDef($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, prevTree, this->currentTree);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, currentTree, $nc($nc(tree)->sym)->isDirectlyOrIndirectlyLocal() ? static_cast<$JCTree*>(tree) : ($JCTree*)nullptr);
			$Flow$BaseAnalyzer::visitClassDef(tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, currentTree, prevTree);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Flow$CaptureAnalyzer::visitLambda($JCTree$JCLambda* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, prevTree, this->currentTree);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, currentTree, tree);
			$Flow$BaseAnalyzer::visitLambda(tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, currentTree, prevTree);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Flow$CaptureAnalyzer::visitGuardPattern($JCTree$JCGuardPattern* tree) {
	$useLocalCurrentObjectStackCache();
	scan(static_cast<$JCTree*>($nc(tree)->patt));
	$var($JCTree, prevTree, this->currentTree);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, currentTree, tree);
			scan(static_cast<$JCTree*>($nc(tree)->expr));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, currentTree, prevTree);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Flow$CaptureAnalyzer::visitIdent($JCTree$JCIdent* tree) {
	$init($Kinds$Kind);
	if ($nc($nc(tree)->sym)->kind == $Kinds$Kind::VAR) {
		checkEffectivelyFinal(tree, $cast($Symbol$VarSymbol, tree->sym));
	}
}

void Flow$CaptureAnalyzer::visitAssign($JCTree$JCAssign* tree) {
	$var($JCTree, lhs, $TreeInfo::skipParens($nc(tree)->lhs));
	if (!($instanceOf($JCTree$JCIdent, lhs))) {
		scan(lhs);
	}
	scan(static_cast<$JCTree*>($nc(tree)->rhs));
	letInit(lhs);
}

void Flow$CaptureAnalyzer::visitAssignop($JCTree$JCAssignOp* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->lhs));
	scan(static_cast<$JCTree*>($nc(tree)->rhs));
	letInit($nc(tree)->lhs);
}

void Flow$CaptureAnalyzer::visitUnary($JCTree$JCUnary* tree) {
	$init($Flow$1);
	switch ($nc($Flow$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
	case 2:
		{}
	case 3:
		{}
	case 4:
		{}
	case 5:
		{
			scan(static_cast<$JCTree*>(tree->arg));
			letInit(tree->arg);
			break;
		}
	default:
		{
			scan(static_cast<$JCTree*>(tree->arg));
		}
	}
}

void Flow$CaptureAnalyzer::visitTry($JCTree$JCTry* tree) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($nc(tree)->resources)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, resource, $cast($JCTree, i$->next()));
			{
				$init($JCTree$Tag);
				if (!$nc(resource)->hasTag($JCTree$Tag::VARDEF)) {
					$var($Symbol, var, $TreeInfo::symbol(resource));
					if (var != nullptr && ((int64_t)(var->flags() & (uint64_t)(16 | (int64_t)0x0000020000000000))) == 0) {
						$var($JCDiagnostic$DiagnosticPosition, var$0, resource->pos());
						$nc(this->this$0->log)->error(var$0, $($CompilerProperties$Errors::TryWithResourcesExprEffectivelyFinalVar(var)));
					}
				}
			}
		}
	}
	$Flow$BaseAnalyzer::visitTry(tree);
}

void Flow$CaptureAnalyzer::visitYield($JCTree$JCYield* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->value));
}

void Flow$CaptureAnalyzer::visitModuleDef($JCTree$JCModuleDecl* tree) {
}

void Flow$CaptureAnalyzer::analyzeTree($Env* env, $TreeMaker* make) {
	analyzeTree(env, $nc(env)->tree, make);
}

void Flow$CaptureAnalyzer::analyzeTree($Env* env, $JCTree* tree, $TreeMaker* make) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this->this$0, attrEnv, env);
			$set(this->this$0, make, make);
			$set(this, pendingExits, $new($ListBuffer));
			scan(tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, pendingExits, nullptr);
			$set(this->this$0, make, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

Flow$CaptureAnalyzer::Flow$CaptureAnalyzer() {
}

$Class* Flow$CaptureAnalyzer::load$($String* name, bool initialize) {
	$loadClass(Flow$CaptureAnalyzer, name, initialize, &_Flow$CaptureAnalyzer_ClassInfo_, allocate$Flow$CaptureAnalyzer);
	return class$;
}

$Class* Flow$CaptureAnalyzer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com