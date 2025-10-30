#include <com/sun/source/util/TreePath$1PathFinder.h>

#include <com/sun/source/tree/Tree.h>
#include <com/sun/source/util/TreePath$1Result.h>
#include <com/sun/source/util/TreePath.h>
#include <com/sun/source/util/TreePathScanner.h>
#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $TreePath = ::com::sun::source::util::TreePath;
using $TreePath$1Result = ::com::sun::source::util::TreePath$1Result;
using $TreePathScanner = ::com::sun::source::util::TreePathScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$MethodInfo _TreePath$1PathFinder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TreePath$1PathFinder::*)()>(&TreePath$1PathFinder::init$))},
	{"scan", "(Lcom/sun/source/tree/Tree;Lcom/sun/source/tree/Tree;)Lcom/sun/source/util/TreePath;", nullptr, $PUBLIC},
	{"scan", "(Lcom/sun/source/tree/Tree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _TreePath$1PathFinder_EnclosingMethodInfo_ = {
	"com.sun.source.util.TreePath",
	"getPath",
	"(Lcom/sun/source/util/TreePath;Lcom/sun/source/tree/Tree;)Lcom/sun/source/util/TreePath;"
};

$InnerClassInfo _TreePath$1PathFinder_InnerClassesInfo_[] = {
	{"com.sun.source.util.TreePath$1PathFinder", nullptr, "PathFinder", 0},
	{}
};

$ClassInfo _TreePath$1PathFinder_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.source.util.TreePath$1PathFinder",
	"com.sun.source.util.TreePathScanner",
	nullptr,
	nullptr,
	_TreePath$1PathFinder_MethodInfo_,
	"Lcom/sun/source/util/TreePathScanner<Lcom/sun/source/util/TreePath;Lcom/sun/source/tree/Tree;>;",
	&_TreePath$1PathFinder_EnclosingMethodInfo_,
	_TreePath$1PathFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.source.util.TreePath"
};

$Object* allocate$TreePath$1PathFinder($Class* clazz) {
	return $of($alloc(TreePath$1PathFinder));
}

void TreePath$1PathFinder::init$() {
	$TreePathScanner::init$();
}

$TreePath* TreePath$1PathFinder::scan($Tree* tree, $Tree* target) {
	$useLocalCurrentObjectStackCache();
	if (tree == target) {
		$throwNew($TreePath$1Result, $$new($TreePath, $(getCurrentPath()), target));
	}
	return $cast($TreePath, $TreePathScanner::scan(tree, $of(target)));
}

$Object* TreePath$1PathFinder::scan($Tree* tree, Object$* target) {
	return $of(this->scan(tree, $cast($Tree, target)));
}

TreePath$1PathFinder::TreePath$1PathFinder() {
}

$Class* TreePath$1PathFinder::load$($String* name, bool initialize) {
	$loadClass(TreePath$1PathFinder, name, initialize, &_TreePath$1PathFinder_ClassInfo_, allocate$TreePath$1PathFinder);
	return class$;
}

$Class* TreePath$1PathFinder::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com