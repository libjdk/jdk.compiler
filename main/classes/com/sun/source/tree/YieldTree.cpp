#include <com/sun/source/tree/YieldTree.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $StatementTree = ::com::sun::source::tree::StatementTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _YieldTree_MethodInfo_[] = {
	{"getValue", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _YieldTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.YieldTree",
	nullptr,
	"com.sun.source.tree.StatementTree",
	nullptr,
	_YieldTree_MethodInfo_
};

$Object* allocate$YieldTree($Class* clazz) {
	return $of($alloc(YieldTree));
}

$Class* YieldTree::load$($String* name, bool initialize) {
	$loadClass(YieldTree, name, initialize, &_YieldTree_ClassInfo_, allocate$YieldTree);
	return class$;
}

$Class* YieldTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com