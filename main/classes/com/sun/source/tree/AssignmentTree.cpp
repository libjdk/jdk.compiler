#include <com/sun/source/tree/AssignmentTree.h>

#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _AssignmentTree_MethodInfo_[] = {
	{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getVariable", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AssignmentTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.AssignmentTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_AssignmentTree_MethodInfo_
};

$Object* allocate$AssignmentTree($Class* clazz) {
	return $of($alloc(AssignmentTree));
}

$Class* AssignmentTree::load$($String* name, bool initialize) {
	$loadClass(AssignmentTree, name, initialize, &_AssignmentTree_ClassInfo_, allocate$AssignmentTree);
	return class$;
}

$Class* AssignmentTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com