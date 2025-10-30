#include <com/sun/source/tree/StatementTree.h>

#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$ClassInfo _StatementTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.StatementTree",
	nullptr,
	"com.sun.source.tree.Tree"
};

$Object* allocate$StatementTree($Class* clazz) {
	return $of($alloc(StatementTree));
}

$Class* StatementTree::load$($String* name, bool initialize) {
	$loadClass(StatementTree, name, initialize, &_StatementTree_ClassInfo_, allocate$StatementTree);
	return class$;
}

$Class* StatementTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com