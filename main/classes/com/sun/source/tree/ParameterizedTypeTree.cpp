#include <com/sun/source/tree/ParameterizedTypeTree.h>

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

$MethodInfo _ParameterizedTypeTree_MethodInfo_[] = {
	{"getType", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypeArguments", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ParameterizedTypeTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.ParameterizedTypeTree",
	nullptr,
	"com.sun.source.tree.Tree",
	nullptr,
	_ParameterizedTypeTree_MethodInfo_
};

$Object* allocate$ParameterizedTypeTree($Class* clazz) {
	return $of($alloc(ParameterizedTypeTree));
}

$Class* ParameterizedTypeTree::load$($String* name, bool initialize) {
	$loadClass(ParameterizedTypeTree, name, initialize, &_ParameterizedTypeTree_ClassInfo_, allocate$ParameterizedTypeTree);
	return class$;
}

$Class* ParameterizedTypeTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com