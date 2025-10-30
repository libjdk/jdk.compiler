#include <com/sun/source/tree/EnhancedForLoopTree.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/VariableTree.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $StatementTree = ::com::sun::source::tree::StatementTree;
using $VariableTree = ::com::sun::source::tree::VariableTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _EnhancedForLoopTree_MethodInfo_[] = {
	{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getStatement", "()Lcom/sun/source/tree/StatementTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getVariable", "()Lcom/sun/source/tree/VariableTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _EnhancedForLoopTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.EnhancedForLoopTree",
	nullptr,
	"com.sun.source.tree.StatementTree",
	nullptr,
	_EnhancedForLoopTree_MethodInfo_
};

$Object* allocate$EnhancedForLoopTree($Class* clazz) {
	return $of($alloc(EnhancedForLoopTree));
}

$Class* EnhancedForLoopTree::load$($String* name, bool initialize) {
	$loadClass(EnhancedForLoopTree, name, initialize, &_EnhancedForLoopTree_ClassInfo_, allocate$EnhancedForLoopTree);
	return class$;
}

$Class* EnhancedForLoopTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com