#include <com/sun/source/tree/IntersectionTypeTree.h>

#include <java/util/List.h>
#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _IntersectionTypeTree_MethodInfo_[] = {
	{"getBounds", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _IntersectionTypeTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.IntersectionTypeTree",
	nullptr,
	"com.sun.source.tree.Tree",
	nullptr,
	_IntersectionTypeTree_MethodInfo_
};

$Object* allocate$IntersectionTypeTree($Class* clazz) {
	return $of($alloc(IntersectionTypeTree));
}

$Class* IntersectionTypeTree::load$($String* name, bool initialize) {
	$loadClass(IntersectionTypeTree, name, initialize, &_IntersectionTypeTree_ClassInfo_, allocate$IntersectionTypeTree);
	return class$;
}

$Class* IntersectionTypeTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com