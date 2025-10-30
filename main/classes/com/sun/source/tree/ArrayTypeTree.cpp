#include <com/sun/source/tree/ArrayTypeTree.h>

#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _ArrayTypeTree_MethodInfo_[] = {
	{"getType", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ArrayTypeTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.ArrayTypeTree",
	nullptr,
	"com.sun.source.tree.Tree",
	nullptr,
	_ArrayTypeTree_MethodInfo_
};

$Object* allocate$ArrayTypeTree($Class* clazz) {
	return $of($alloc(ArrayTypeTree));
}

$Class* ArrayTypeTree::load$($String* name, bool initialize) {
	$loadClass(ArrayTypeTree, name, initialize, &_ArrayTypeTree_ClassInfo_, allocate$ArrayTypeTree);
	return class$;
}

$Class* ArrayTypeTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com