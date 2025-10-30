#include <com/sun/source/tree/RequiresTree.h>

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

$MethodInfo _RequiresTree_MethodInfo_[] = {
	{"getModuleName", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"isStatic", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isTransitive", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _RequiresTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.RequiresTree",
	nullptr,
	"com.sun.source.tree.DirectiveTree",
	nullptr,
	_RequiresTree_MethodInfo_
};

$Object* allocate$RequiresTree($Class* clazz) {
	return $of($alloc(RequiresTree));
}

$Class* RequiresTree::load$($String* name, bool initialize) {
	$loadClass(RequiresTree, name, initialize, &_RequiresTree_ClassInfo_, allocate$RequiresTree);
	return class$;
}

$Class* RequiresTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com