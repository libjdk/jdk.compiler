#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer.h>

#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$JumpKind.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$PendingExit.h>
#include <com/sun/tools/javac/comp/Flow$Liveness.h>
#include <com/sun/tools/javac/comp/Flow.h>
#include <com/sun/tools/javac/tree/JCTree$JCBreak.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Position.h>
#include <jcpp.h>

#undef BREAK
#undef CONTINUE
#undef NOPOS
#undef SWITCH_EXPRESSION
#undef YIELD

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Flow = ::com::sun::tools::javac::comp::Flow;
using $Flow$BaseAnalyzer$JumpKind = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$JumpKind;
using $Flow$BaseAnalyzer$PendingExit = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$PendingExit;
using $Flow$Liveness = ::com::sun::tools::javac::comp::Flow$Liveness;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBreak = ::com::sun::tools::javac::tree::JCTree$JCBreak;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Position = ::com::sun::tools::javac::util::Position;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Flow$BaseAnalyzer_FieldInfo_[] = {
	{"pendingExits", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/comp/Flow$BaseAnalyzer$PendingExit;>;", 0, $field(Flow$BaseAnalyzer, pendingExits)},
	{}
};

$MethodInfo _Flow$BaseAnalyzer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Flow$BaseAnalyzer::*)()>(&Flow$BaseAnalyzer::init$))},
	{"markDead", "()V", nullptr, $ABSTRACT},
	{"recordExit", "(Lcom/sun/tools/javac/comp/Flow$BaseAnalyzer$PendingExit;)V", nullptr, 0},
	{"resolveBreaks", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/ListBuffer;)Lcom/sun/tools/javac/comp/Flow$Liveness;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/comp/Flow$BaseAnalyzer$PendingExit;>;)Lcom/sun/tools/javac/comp/Flow$Liveness;", 0},
	{"resolveContinues", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, 0},
	{"resolveJump", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/ListBuffer;Lcom/sun/tools/javac/comp/Flow$BaseAnalyzer$JumpKind;)Lcom/sun/tools/javac/comp/Flow$Liveness;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/comp/Flow$BaseAnalyzer$PendingExit;>;Lcom/sun/tools/javac/comp/Flow$BaseAnalyzer$JumpKind;)Lcom/sun/tools/javac/comp/Flow$Liveness;", $PRIVATE, $method(static_cast<$Flow$Liveness*(Flow$BaseAnalyzer::*)($JCTree*,$ListBuffer*,$Flow$BaseAnalyzer$JumpKind*)>(&Flow$BaseAnalyzer::resolveJump))},
	{"resolveYields", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/ListBuffer;)Lcom/sun/tools/javac/comp/Flow$Liveness;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/comp/Flow$BaseAnalyzer$PendingExit;>;)Lcom/sun/tools/javac/comp/Flow$Liveness;", 0},
	{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"scanSyntheticBreak", "(Lcom/sun/tools/javac/tree/TreeMaker;Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PROTECTED},
	{"visitPackageDef", "(Lcom/sun/tools/javac/tree/JCTree$JCPackageDecl;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Flow$BaseAnalyzer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer", "com.sun.tools.javac.comp.Flow", "BaseAnalyzer", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer$PendingExit", "com.sun.tools.javac.comp.Flow$BaseAnalyzer", "PendingExit", $STATIC},
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer$JumpKind", "com.sun.tools.javac.comp.Flow$BaseAnalyzer", "JumpKind", $STATIC | $ABSTRACT | $ENUM},
	{}
};

$ClassInfo _Flow$BaseAnalyzer_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.Flow$BaseAnalyzer",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_Flow$BaseAnalyzer_FieldInfo_,
	_Flow$BaseAnalyzer_MethodInfo_,
	nullptr,
	nullptr,
	_Flow$BaseAnalyzer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Flow"
};

$Object* allocate$Flow$BaseAnalyzer($Class* clazz) {
	return $of($alloc(Flow$BaseAnalyzer));
}

void Flow$BaseAnalyzer::init$() {
	$TreeScanner::init$();
}

void Flow$BaseAnalyzer::recordExit($Flow$BaseAnalyzer$PendingExit* pe) {
	$nc(this->pendingExits)->append(pe);
	markDead();
}

$Flow$Liveness* Flow$BaseAnalyzer::resolveJump($JCTree* tree, $ListBuffer* oldPendingExits, $Flow$BaseAnalyzer$JumpKind* jk) {
	$useLocalCurrentObjectStackCache();
	bool resolved = false;
	$var($List, exits, $nc(this->pendingExits)->toList());
	$set(this, pendingExits, oldPendingExits);
	for (; $nc(exits)->nonEmpty(); $assign(exits, $nc(exits)->tail)) {
		$var($Flow$BaseAnalyzer$PendingExit, exit, $cast($Flow$BaseAnalyzer$PendingExit, exits->head));
		bool var$0 = $nc($nc(exit)->tree)->hasTag($nc(jk)->treeTag);
		if (var$0 && $nc(jk)->getTarget(exit->tree) == tree) {
			exit->resolveJump();
			resolved = true;
		} else {
			$nc(this->pendingExits)->append(exit);
		}
	}
	return $Flow$Liveness::from(resolved);
}

$Flow$Liveness* Flow$BaseAnalyzer::resolveContinues($JCTree* tree) {
	$init($Flow$BaseAnalyzer$JumpKind);
	return resolveJump(tree, $$new($ListBuffer), $Flow$BaseAnalyzer$JumpKind::CONTINUE);
}

$Flow$Liveness* Flow$BaseAnalyzer::resolveBreaks($JCTree* tree, $ListBuffer* oldPendingExits) {
	$init($Flow$BaseAnalyzer$JumpKind);
	return resolveJump(tree, oldPendingExits, $Flow$BaseAnalyzer$JumpKind::BREAK);
}

$Flow$Liveness* Flow$BaseAnalyzer::resolveYields($JCTree* tree, $ListBuffer* oldPendingExits) {
	$init($Flow$BaseAnalyzer$JumpKind);
	return resolveJump(tree, oldPendingExits, $Flow$BaseAnalyzer$JumpKind::YIELD);
}

void Flow$BaseAnalyzer::scan($JCTree* tree) {
	$init($Type);
	if (tree != nullptr && (tree->type == nullptr || !$equals($nc(tree)->type, $Type::stuckType))) {
		$TreeScanner::scan(tree);
	}
}

void Flow$BaseAnalyzer::visitPackageDef($JCTree$JCPackageDecl* tree) {
}

void Flow$BaseAnalyzer::scanSyntheticBreak($TreeMaker* make, $JCTree* swtch) {
	$useLocalCurrentObjectStackCache();
	$init($JCTree$Tag);
	if ($nc(swtch)->hasTag($JCTree$Tag::SWITCH_EXPRESSION)) {
		$var($JCTree$JCYield, brk, $nc($($nc(make)->at($Position::NOPOS)))->Yield(nullptr));
		$set($nc(brk), target, swtch);
		scan(static_cast<$JCTree*>(brk));
	} else {
		$var($JCTree$JCBreak, brk, $nc($($nc(make)->at($Position::NOPOS)))->Break(nullptr));
		$set($nc(brk), target, swtch);
		scan(static_cast<$JCTree*>(brk));
	}
}

Flow$BaseAnalyzer::Flow$BaseAnalyzer() {
}

$Class* Flow$BaseAnalyzer::load$($String* name, bool initialize) {
	$loadClass(Flow$BaseAnalyzer, name, initialize, &_Flow$BaseAnalyzer_ClassInfo_, allocate$Flow$BaseAnalyzer);
	return class$;
}

$Class* Flow$BaseAnalyzer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com