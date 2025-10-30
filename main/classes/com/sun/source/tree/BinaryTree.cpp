#include <com/sun/source/tree/BinaryTree.h>

#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _BinaryTree_MethodInfo_[] = {
	{"getLeftOperand", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRightOperand", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BinaryTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.BinaryTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_BinaryTree_MethodInfo_
};

$Object* allocate$BinaryTree($Class* clazz) {
	return $of($alloc(BinaryTree));
}

$Class* BinaryTree::load$($String* name, bool initialize) {
	$loadClass(BinaryTree, name, initialize, &_BinaryTree_ClassInfo_, allocate$BinaryTree);
	return class$;
}

$Class* BinaryTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com