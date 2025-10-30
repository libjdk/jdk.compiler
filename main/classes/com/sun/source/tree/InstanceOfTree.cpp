#include <com/sun/source/tree/InstanceOfTree.h>

#include <com/sun/source/tree/PatternTree.h>
#include <com/sun/source/tree/Tree.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $PatternTree = ::com::sun::source::tree::PatternTree;
using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _InstanceOfTree_MethodInfo_[] = {
	{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPattern", "()Lcom/sun/source/tree/PatternTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _InstanceOfTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.InstanceOfTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_InstanceOfTree_MethodInfo_
};

$Object* allocate$InstanceOfTree($Class* clazz) {
	return $of($alloc(InstanceOfTree));
}

$Class* InstanceOfTree::load$($String* name, bool initialize) {
	$loadClass(InstanceOfTree, name, initialize, &_InstanceOfTree_ClassInfo_, allocate$InstanceOfTree);
	return class$;
}

$Class* InstanceOfTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com