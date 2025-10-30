#include <com/sun/source/tree/TypeCastTree.h>

#include <com/sun/source/tree/Tree.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _TypeCastTree_MethodInfo_[] = {
	{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TypeCastTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.TypeCastTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_TypeCastTree_MethodInfo_
};

$Object* allocate$TypeCastTree($Class* clazz) {
	return $of($alloc(TypeCastTree));
}

$Class* TypeCastTree::load$($String* name, bool initialize) {
	$loadClass(TypeCastTree, name, initialize, &_TypeCastTree_ClassInfo_, allocate$TypeCastTree);
	return class$;
}

$Class* TypeCastTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com