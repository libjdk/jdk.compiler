#include <com/sun/source/tree/DoWhileLoopTree.h>

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

$MethodInfo _DoWhileLoopTree_MethodInfo_[] = {
	{"getCondition", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getStatement", "()Lcom/sun/source/tree/StatementTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DoWhileLoopTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.DoWhileLoopTree",
	nullptr,
	"com.sun.source.tree.StatementTree",
	nullptr,
	_DoWhileLoopTree_MethodInfo_
};

$Object* allocate$DoWhileLoopTree($Class* clazz) {
	return $of($alloc(DoWhileLoopTree));
}

$Class* DoWhileLoopTree::load$($String* name, bool initialize) {
	$loadClass(DoWhileLoopTree, name, initialize, &_DoWhileLoopTree_ClassInfo_, allocate$DoWhileLoopTree);
	return class$;
}

$Class* DoWhileLoopTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com