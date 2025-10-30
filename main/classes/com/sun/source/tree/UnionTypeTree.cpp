#include <com/sun/source/tree/UnionTypeTree.h>

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

$MethodInfo _UnionTypeTree_MethodInfo_[] = {
	{"getTypeAlternatives", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _UnionTypeTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.UnionTypeTree",
	nullptr,
	"com.sun.source.tree.Tree",
	nullptr,
	_UnionTypeTree_MethodInfo_
};

$Object* allocate$UnionTypeTree($Class* clazz) {
	return $of($alloc(UnionTypeTree));
}

$Class* UnionTypeTree::load$($String* name, bool initialize) {
	$loadClass(UnionTypeTree, name, initialize, &_UnionTypeTree_ClassInfo_, allocate$UnionTypeTree);
	return class$;
}

$Class* UnionTypeTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com