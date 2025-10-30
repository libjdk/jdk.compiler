#include <com/sun/source/tree/CatchTree.h>

#include <com/sun/source/tree/BlockTree.h>
#include <com/sun/source/tree/VariableTree.h>
#include <jcpp.h>

using $BlockTree = ::com::sun::source::tree::BlockTree;
using $Tree = ::com::sun::source::tree::Tree;
using $VariableTree = ::com::sun::source::tree::VariableTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _CatchTree_MethodInfo_[] = {
	{"getBlock", "()Lcom/sun/source/tree/BlockTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getParameter", "()Lcom/sun/source/tree/VariableTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CatchTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.CatchTree",
	nullptr,
	"com.sun.source.tree.Tree",
	nullptr,
	_CatchTree_MethodInfo_
};

$Object* allocate$CatchTree($Class* clazz) {
	return $of($alloc(CatchTree));
}

$Class* CatchTree::load$($String* name, bool initialize) {
	$loadClass(CatchTree, name, initialize, &_CatchTree_ClassInfo_, allocate$CatchTree);
	return class$;
}

$Class* CatchTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com