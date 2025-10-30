#include <com/sun/source/tree/AssertTree.h>

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

$MethodInfo _AssertTree_MethodInfo_[] = {
	{"getCondition", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDetail", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AssertTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.AssertTree",
	nullptr,
	"com.sun.source.tree.StatementTree",
	nullptr,
	_AssertTree_MethodInfo_
};

$Object* allocate$AssertTree($Class* clazz) {
	return $of($alloc(AssertTree));
}

$Class* AssertTree::load$($String* name, bool initialize) {
	$loadClass(AssertTree, name, initialize, &_AssertTree_ClassInfo_, allocate$AssertTree);
	return class$;
}

$Class* AssertTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com