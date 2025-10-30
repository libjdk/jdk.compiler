#include <com/sun/source/tree/MethodInvocationTree.h>

#include <java/util/List.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _MethodInvocationTree_MethodInfo_[] = {
	{"getArguments", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/ExpressionTree;>;", $PUBLIC | $ABSTRACT},
	{"getMethodSelect", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypeArguments", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MethodInvocationTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.MethodInvocationTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_MethodInvocationTree_MethodInfo_
};

$Object* allocate$MethodInvocationTree($Class* clazz) {
	return $of($alloc(MethodInvocationTree));
}

$Class* MethodInvocationTree::load$($String* name, bool initialize) {
	$loadClass(MethodInvocationTree, name, initialize, &_MethodInvocationTree_ClassInfo_, allocate$MethodInvocationTree);
	return class$;
}

$Class* MethodInvocationTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com