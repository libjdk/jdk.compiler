#include <com/sun/source/tree/EmptyStatementTree.h>

#include <jcpp.h>

using $StatementTree = ::com::sun::source::tree::StatementTree;
using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$ClassInfo _EmptyStatementTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.EmptyStatementTree",
	nullptr,
	"com.sun.source.tree.StatementTree"
};

$Object* allocate$EmptyStatementTree($Class* clazz) {
	return $of($alloc(EmptyStatementTree));
}

$Class* EmptyStatementTree::load$($String* name, bool initialize) {
	$loadClass(EmptyStatementTree, name, initialize, &_EmptyStatementTree_ClassInfo_, allocate$EmptyStatementTree);
	return class$;
}

$Class* EmptyStatementTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com