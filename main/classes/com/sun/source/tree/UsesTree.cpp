#include <com/sun/source/tree/UsesTree.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <jcpp.h>

using $DirectiveTree = ::com::sun::source::tree::DirectiveTree;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _UsesTree_MethodInfo_[] = {
	{"getServiceName", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _UsesTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.UsesTree",
	nullptr,
	"com.sun.source.tree.DirectiveTree",
	nullptr,
	_UsesTree_MethodInfo_
};

$Object* allocate$UsesTree($Class* clazz) {
	return $of($alloc(UsesTree));
}

$Class* UsesTree::load$($String* name, bool initialize) {
	$loadClass(UsesTree, name, initialize, &_UsesTree_ClassInfo_, allocate$UsesTree);
	return class$;
}

$Class* UsesTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com