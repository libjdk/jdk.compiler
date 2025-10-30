#include <com/sun/source/tree/SynchronizedTree.h>

#include <com/sun/source/tree/BlockTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <jcpp.h>

using $BlockTree = ::com::sun::source::tree::BlockTree;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $StatementTree = ::com::sun::source::tree::StatementTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _SynchronizedTree_MethodInfo_[] = {
	{"getBlock", "()Lcom/sun/source/tree/BlockTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SynchronizedTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.SynchronizedTree",
	nullptr,
	"com.sun.source.tree.StatementTree",
	nullptr,
	_SynchronizedTree_MethodInfo_
};

$Object* allocate$SynchronizedTree($Class* clazz) {
	return $of($alloc(SynchronizedTree));
}

$Class* SynchronizedTree::load$($String* name, bool initialize) {
	$loadClass(SynchronizedTree, name, initialize, &_SynchronizedTree_ClassInfo_, allocate$SynchronizedTree);
	return class$;
}

$Class* SynchronizedTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com