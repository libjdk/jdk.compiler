#include <com/sun/tools/javac/comp/Lower$AssignopDependencyScanner.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssignOp.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Lower = ::com::sun::tools::javac::comp::Lower;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAssignOp = ::com::sun::tools::javac::tree::JCTree$JCAssignOp;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Lower$AssignopDependencyScanner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Lower;", nullptr, $FINAL | $SYNTHETIC, $field(Lower$AssignopDependencyScanner, this$0)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $field(Lower$AssignopDependencyScanner, sym)},
	{"dependencyFound", "Z", nullptr, 0, $field(Lower$AssignopDependencyScanner, dependencyFound)},
	{}
};

$MethodInfo _Lower$AssignopDependencyScanner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Lower;Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)V", nullptr, 0, $method(static_cast<void(Lower$AssignopDependencyScanner::*)($Lower*,$JCTree$JCAssignOp*)>(&Lower$AssignopDependencyScanner::init$))},
	{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitAssignop", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)V", nullptr, $PUBLIC},
	{"visitUnary", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Lower$AssignopDependencyScanner_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Lower$AssignopDependencyScanner", "com.sun.tools.javac.comp.Lower", "AssignopDependencyScanner", 0},
	{}
};

$ClassInfo _Lower$AssignopDependencyScanner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Lower$AssignopDependencyScanner",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_Lower$AssignopDependencyScanner_FieldInfo_,
	_Lower$AssignopDependencyScanner_MethodInfo_,
	nullptr,
	nullptr,
	_Lower$AssignopDependencyScanner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Lower"
};

$Object* allocate$Lower$AssignopDependencyScanner($Class* clazz) {
	return $of($alloc(Lower$AssignopDependencyScanner));
}

void Lower$AssignopDependencyScanner::init$($Lower* this$0, $JCTree$JCAssignOp* tree) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
	this->dependencyFound = false;
	$set(this, sym, $TreeInfo::symbol($nc(tree)->lhs));
}

void Lower$AssignopDependencyScanner::scan($JCTree* tree) {
	if (tree != nullptr && this->sym != nullptr) {
		tree->accept(this);
	}
}

void Lower$AssignopDependencyScanner::visitAssignop($JCTree$JCAssignOp* tree) {
	if ($TreeInfo::symbol($nc(tree)->lhs) == this->sym) {
		this->dependencyFound = true;
		return;
	}
	$TreeScanner::visitAssignop(tree);
}

void Lower$AssignopDependencyScanner::visitUnary($JCTree$JCUnary* tree) {
	if ($TreeInfo::symbol($nc(tree)->arg) == this->sym) {
		this->dependencyFound = true;
		return;
	}
	$TreeScanner::visitUnary(tree);
}

Lower$AssignopDependencyScanner::Lower$AssignopDependencyScanner() {
}

$Class* Lower$AssignopDependencyScanner::load$($String* name, bool initialize) {
	$loadClass(Lower$AssignopDependencyScanner, name, initialize, &_Lower$AssignopDependencyScanner_ClassInfo_, allocate$Lower$AssignopDependencyScanner);
	return class$;
}

$Class* Lower$AssignopDependencyScanner::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com