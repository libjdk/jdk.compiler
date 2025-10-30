#include <com/sun/tools/javac/tree/TreeInfo$1PathFinder.h>

#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo$1Result.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeInfo$1Result = ::com::sun::tools::javac::tree::TreeInfo$1Result;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _TreeInfo$1PathFinder_FieldInfo_[] = {
	{"val$node", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $FINAL | $SYNTHETIC, $field(TreeInfo$1PathFinder, val$node)},
	{"path", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", 0, $field(TreeInfo$1PathFinder, path)},
	{}
};

$MethodInfo _TreeInfo$1PathFinder_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree;)V", "()V", 0, $method(static_cast<void(TreeInfo$1PathFinder::*)($JCTree*)>(&TreeInfo$1PathFinder::init$))},
	{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TreeInfo$1PathFinder_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.tree.TreeInfo",
	"pathFor",
	"(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)Lcom/sun/tools/javac/util/List;"
};

$InnerClassInfo _TreeInfo$1PathFinder_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.TreeInfo$1PathFinder", nullptr, "PathFinder", 0},
	{"com.sun.tools.javac.tree.JCTree$JCCompilationUnit", "com.sun.tools.javac.tree.JCTree", "JCCompilationUnit", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TreeInfo$1PathFinder_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.tree.TreeInfo$1PathFinder",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_TreeInfo$1PathFinder_FieldInfo_,
	_TreeInfo$1PathFinder_MethodInfo_,
	nullptr,
	&_TreeInfo$1PathFinder_EnclosingMethodInfo_,
	_TreeInfo$1PathFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.TreeInfo"
};

$Object* allocate$TreeInfo$1PathFinder($Class* clazz) {
	return $of($alloc(TreeInfo$1PathFinder));
}

void TreeInfo$1PathFinder::init$($JCTree* val$node) {
	$set(this, val$node, val$node);
	$TreeScanner::init$();
	$set(this, path, $List::nil());
}

void TreeInfo$1PathFinder::scan($JCTree* tree) {
	if (tree != nullptr) {
		$set(this, path, $nc(this->path)->prepend(tree));
		if (tree == this->val$node) {
			$throwNew($TreeInfo$1Result, this->path);
		}
		$TreeScanner::scan(tree);
		$set(this, path, $nc(this->path)->tail);
	}
}

TreeInfo$1PathFinder::TreeInfo$1PathFinder() {
}

$Class* TreeInfo$1PathFinder::load$($String* name, bool initialize) {
	$loadClass(TreeInfo$1PathFinder, name, initialize, &_TreeInfo$1PathFinder_ClassInfo_, allocate$TreeInfo$1PathFinder);
	return class$;
}

$Class* TreeInfo$1PathFinder::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com