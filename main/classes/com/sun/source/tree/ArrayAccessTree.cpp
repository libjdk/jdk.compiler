#include <com/sun/source/tree/ArrayAccessTree.h>

#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _ArrayAccessTree_MethodInfo_[] = {
	{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getIndex", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ArrayAccessTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.ArrayAccessTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_ArrayAccessTree_MethodInfo_
};

$Object* allocate$ArrayAccessTree($Class* clazz) {
	return $of($alloc(ArrayAccessTree));
}

$Class* ArrayAccessTree::load$($String* name, bool initialize) {
	$loadClass(ArrayAccessTree, name, initialize, &_ArrayAccessTree_ClassInfo_, allocate$ArrayAccessTree);
	return class$;
}

$Class* ArrayAccessTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com