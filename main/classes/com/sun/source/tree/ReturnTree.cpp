#include <com/sun/source/tree/ReturnTree.h>

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

$MethodInfo _ReturnTree_MethodInfo_[] = {
	{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ReturnTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.ReturnTree",
	nullptr,
	"com.sun.source.tree.StatementTree",
	nullptr,
	_ReturnTree_MethodInfo_
};

$Object* allocate$ReturnTree($Class* clazz) {
	return $of($alloc(ReturnTree));
}

$Class* ReturnTree::load$($String* name, bool initialize) {
	$loadClass(ReturnTree, name, initialize, &_ReturnTree_ClassInfo_, allocate$ReturnTree);
	return class$;
}

$Class* ReturnTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com