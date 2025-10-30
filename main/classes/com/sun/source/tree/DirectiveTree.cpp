#include <com/sun/source/tree/DirectiveTree.h>

#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$ClassInfo _DirectiveTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.DirectiveTree",
	nullptr,
	"com.sun.source.tree.Tree"
};

$Object* allocate$DirectiveTree($Class* clazz) {
	return $of($alloc(DirectiveTree));
}

$Class* DirectiveTree::load$($String* name, bool initialize) {
	$loadClass(DirectiveTree, name, initialize, &_DirectiveTree_ClassInfo_, allocate$DirectiveTree);
	return class$;
}

$Class* DirectiveTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com