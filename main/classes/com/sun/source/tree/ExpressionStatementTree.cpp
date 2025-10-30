#include <com/sun/source/tree/ExpressionStatementTree.h>

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

$MethodInfo _ExpressionStatementTree_MethodInfo_[] = {
	{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ExpressionStatementTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.ExpressionStatementTree",
	nullptr,
	"com.sun.source.tree.StatementTree",
	nullptr,
	_ExpressionStatementTree_MethodInfo_
};

$Object* allocate$ExpressionStatementTree($Class* clazz) {
	return $of($alloc(ExpressionStatementTree));
}

$Class* ExpressionStatementTree::load$($String* name, bool initialize) {
	$loadClass(ExpressionStatementTree, name, initialize, &_ExpressionStatementTree_ClassInfo_, allocate$ExpressionStatementTree);
	return class$;
}

$Class* ExpressionStatementTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com