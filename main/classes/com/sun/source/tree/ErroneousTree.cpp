#include <com/sun/source/tree/ErroneousTree.h>

#include <java/util/List.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _ErroneousTree_MethodInfo_[] = {
	{"getErrorTrees", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ErroneousTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.ErroneousTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_ErroneousTree_MethodInfo_
};

$Object* allocate$ErroneousTree($Class* clazz) {
	return $of($alloc(ErroneousTree));
}

$Class* ErroneousTree::load$($String* name, bool initialize) {
	$loadClass(ErroneousTree, name, initialize, &_ErroneousTree_ClassInfo_, allocate$ErroneousTree);
	return class$;
}

$Class* ErroneousTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com