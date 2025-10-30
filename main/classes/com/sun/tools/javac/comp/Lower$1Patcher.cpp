#include <com/sun/tools/javac/comp/Lower$1Patcher.h>

#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/tree/JCTree$JCBreak.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCContinue.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <jcpp.h>

using $Lower = ::com::sun::tools::javac::comp::Lower;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBreak = ::com::sun::tools::javac::tree::JCTree$JCBreak;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCContinue = ::com::sun::tools::javac::tree::JCTree$JCContinue;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Lower$1Patcher_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Lower;", nullptr, $FINAL | $SYNTHETIC, $field(Lower$1Patcher, this$0)},
	{"val$dest", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $FINAL | $SYNTHETIC, $field(Lower$1Patcher, val$dest)},
	{"val$src", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $FINAL | $SYNTHETIC, $field(Lower$1Patcher, val$src)},
	{}
};

$MethodInfo _Lower$1Patcher_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Lower;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;)V", "()V", 0, $method(static_cast<void(Lower$1Patcher::*)($Lower*,$JCTree*,$JCTree*)>(&Lower$1Patcher::init$))},
	{"visitBreak", "(Lcom/sun/tools/javac/tree/JCTree$JCBreak;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitContinue", "(Lcom/sun/tools/javac/tree/JCTree$JCContinue;)V", nullptr, $PUBLIC},
	{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Lower$1Patcher_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Lower",
	"patchTargets",
	"(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;)V"
};

$InnerClassInfo _Lower$1Patcher_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Lower$1Patcher", nullptr, "Patcher", 0},
	{}
};

$ClassInfo _Lower$1Patcher_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Lower$1Patcher",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_Lower$1Patcher_FieldInfo_,
	_Lower$1Patcher_MethodInfo_,
	nullptr,
	&_Lower$1Patcher_EnclosingMethodInfo_,
	_Lower$1Patcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Lower"
};

$Object* allocate$Lower$1Patcher($Class* clazz) {
	return $of($alloc(Lower$1Patcher));
}

void Lower$1Patcher::init$($Lower* this$0, $JCTree* val$src, $JCTree* val$dest) {
	$set(this, this$0, this$0);
	$set(this, val$src, val$src);
	$set(this, val$dest, val$dest);
	$TreeScanner::init$();
}

void Lower$1Patcher::visitBreak($JCTree$JCBreak* tree) {
	if ($nc(tree)->target == this->val$src) {
		$set(tree, target, this->val$dest);
	}
}

void Lower$1Patcher::visitYield($JCTree$JCYield* tree) {
	if ($nc(tree)->target == this->val$src) {
		$set(tree, target, this->val$dest);
	}
	scan(static_cast<$JCTree*>($nc(tree)->value));
}

void Lower$1Patcher::visitContinue($JCTree$JCContinue* tree) {
	if ($nc(tree)->target == this->val$src) {
		$set(tree, target, this->val$dest);
	}
}

void Lower$1Patcher::visitClassDef($JCTree$JCClassDecl* tree) {
}

Lower$1Patcher::Lower$1Patcher() {
}

$Class* Lower$1Patcher::load$($String* name, bool initialize) {
	$loadClass(Lower$1Patcher, name, initialize, &_Lower$1Patcher_ClassInfo_, allocate$Lower$1Patcher);
	return class$;
}

$Class* Lower$1Patcher::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com