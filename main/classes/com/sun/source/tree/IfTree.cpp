#include <com/sun/source/tree/IfTree.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $StatementTree = ::com::sun::source::tree::StatementTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _IfTree_MethodInfo_[] = {
	{"getCondition", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getElseStatement", "()Lcom/sun/source/tree/StatementTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getThenStatement", "()Lcom/sun/source/tree/StatementTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _IfTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.IfTree",
	nullptr,
	"com.sun.source.tree.StatementTree",
	nullptr,
	_IfTree_MethodInfo_
};

$Object* allocate$IfTree($Class* clazz) {
	return $of($alloc(IfTree));
}

$Class* IfTree::load$($String* name, bool initialize) {
	$loadClass(IfTree, name, initialize, &_IfTree_ClassInfo_, allocate$IfTree);
	return class$;
}

$Class* IfTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com