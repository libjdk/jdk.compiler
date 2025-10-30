#include <com/sun/source/tree/ThrowTree.h>

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

$MethodInfo _ThrowTree_MethodInfo_[] = {
	{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ThrowTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.ThrowTree",
	nullptr,
	"com.sun.source.tree.StatementTree",
	nullptr,
	_ThrowTree_MethodInfo_
};

$Object* allocate$ThrowTree($Class* clazz) {
	return $of($alloc(ThrowTree));
}

$Class* ThrowTree::load$($String* name, bool initialize) {
	$loadClass(ThrowTree, name, initialize, &_ThrowTree_ClassInfo_, allocate$ThrowTree);
	return class$;
}

$Class* ThrowTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com