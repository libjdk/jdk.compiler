#include <com/sun/source/tree/ConditionalExpressionTree.h>

#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _ConditionalExpressionTree_MethodInfo_[] = {
	{"getCondition", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFalseExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTrueExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ConditionalExpressionTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.ConditionalExpressionTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_ConditionalExpressionTree_MethodInfo_
};

$Object* allocate$ConditionalExpressionTree($Class* clazz) {
	return $of($alloc(ConditionalExpressionTree));
}

$Class* ConditionalExpressionTree::load$($String* name, bool initialize) {
	$loadClass(ConditionalExpressionTree, name, initialize, &_ConditionalExpressionTree_ClassInfo_, allocate$ConditionalExpressionTree);
	return class$;
}

$Class* ConditionalExpressionTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com