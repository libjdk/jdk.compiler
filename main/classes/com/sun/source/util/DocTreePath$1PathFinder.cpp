#include <com/sun/source/util/DocTreePath$1PathFinder.h>

#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/util/DocTreePath$1Result.h>
#include <com/sun/source/util/DocTreePath.h>
#include <com/sun/source/util/DocTreePathScanner.h>
#include <jcpp.h>

using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTreePath = ::com::sun::source::util::DocTreePath;
using $DocTreePath$1Result = ::com::sun::source::util::DocTreePath$1Result;
using $DocTreePathScanner = ::com::sun::source::util::DocTreePathScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$MethodInfo _DocTreePath$1PathFinder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DocTreePath$1PathFinder::*)()>(&DocTreePath$1PathFinder::init$))},
	{"scan", "(Lcom/sun/source/doctree/DocTree;Lcom/sun/source/doctree/DocTree;)Lcom/sun/source/util/DocTreePath;", nullptr, $PUBLIC},
	{"scan", "(Lcom/sun/source/doctree/DocTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _DocTreePath$1PathFinder_EnclosingMethodInfo_ = {
	"com.sun.source.util.DocTreePath",
	"getPath",
	"(Lcom/sun/source/util/DocTreePath;Lcom/sun/source/doctree/DocTree;)Lcom/sun/source/util/DocTreePath;"
};

$InnerClassInfo _DocTreePath$1PathFinder_InnerClassesInfo_[] = {
	{"com.sun.source.util.DocTreePath$1PathFinder", nullptr, "PathFinder", 0},
	{}
};

$ClassInfo _DocTreePath$1PathFinder_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.source.util.DocTreePath$1PathFinder",
	"com.sun.source.util.DocTreePathScanner",
	nullptr,
	nullptr,
	_DocTreePath$1PathFinder_MethodInfo_,
	"Lcom/sun/source/util/DocTreePathScanner<Lcom/sun/source/util/DocTreePath;Lcom/sun/source/doctree/DocTree;>;",
	&_DocTreePath$1PathFinder_EnclosingMethodInfo_,
	_DocTreePath$1PathFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.source.util.DocTreePath"
};

$Object* allocate$DocTreePath$1PathFinder($Class* clazz) {
	return $of($alloc(DocTreePath$1PathFinder));
}

void DocTreePath$1PathFinder::init$() {
	$DocTreePathScanner::init$();
}

$DocTreePath* DocTreePath$1PathFinder::scan($DocTree* tree, $DocTree* target) {
	$useLocalCurrentObjectStackCache();
	if (tree == target) {
		$throwNew($DocTreePath$1Result, $$new($DocTreePath, $(getCurrentPath()), target));
	}
	return $cast($DocTreePath, $DocTreePathScanner::scan(tree, $of(target)));
}

$Object* DocTreePath$1PathFinder::scan($DocTree* tree, Object$* target) {
	return $of(this->scan(tree, $cast($DocTree, target)));
}

DocTreePath$1PathFinder::DocTreePath$1PathFinder() {
}

$Class* DocTreePath$1PathFinder::load$($String* name, bool initialize) {
	$loadClass(DocTreePath$1PathFinder, name, initialize, &_DocTreePath$1PathFinder_ClassInfo_, allocate$DocTreePath$1PathFinder);
	return class$;
}

$Class* DocTreePath$1PathFinder::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com