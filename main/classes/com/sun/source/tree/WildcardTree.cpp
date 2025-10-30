#include <com/sun/source/tree/WildcardTree.h>

#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _WildcardTree_MethodInfo_[] = {
	{"getBound", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _WildcardTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.WildcardTree",
	nullptr,
	"com.sun.source.tree.Tree",
	nullptr,
	_WildcardTree_MethodInfo_
};

$Object* allocate$WildcardTree($Class* clazz) {
	return $of($alloc(WildcardTree));
}

$Class* WildcardTree::load$($String* name, bool initialize) {
	$loadClass(WildcardTree, name, initialize, &_WildcardTree_ClassInfo_, allocate$WildcardTree);
	return class$;
}

$Class* WildcardTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com