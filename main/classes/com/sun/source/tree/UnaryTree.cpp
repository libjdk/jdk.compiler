#include <com/sun/source/tree/UnaryTree.h>

#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _UnaryTree_MethodInfo_[] = {
	{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _UnaryTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.UnaryTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_UnaryTree_MethodInfo_
};

$Object* allocate$UnaryTree($Class* clazz) {
	return $of($alloc(UnaryTree));
}

$Class* UnaryTree::load$($String* name, bool initialize) {
	$loadClass(UnaryTree, name, initialize, &_UnaryTree_ClassInfo_, allocate$UnaryTree);
	return class$;
}

$Class* UnaryTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com