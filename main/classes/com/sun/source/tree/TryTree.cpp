#include <com/sun/source/tree/TryTree.h>

#include <com/sun/source/tree/BlockTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $BlockTree = ::com::sun::source::tree::BlockTree;
using $StatementTree = ::com::sun::source::tree::StatementTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _TryTree_MethodInfo_[] = {
	{"getBlock", "()Lcom/sun/source/tree/BlockTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCatches", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/CatchTree;>;", $PUBLIC | $ABSTRACT},
	{"getFinallyBlock", "()Lcom/sun/source/tree/BlockTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getResources", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TryTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.TryTree",
	nullptr,
	"com.sun.source.tree.StatementTree",
	nullptr,
	_TryTree_MethodInfo_
};

$Object* allocate$TryTree($Class* clazz) {
	return $of($alloc(TryTree));
}

$Class* TryTree::load$($String* name, bool initialize) {
	$loadClass(TryTree, name, initialize, &_TryTree_ClassInfo_, allocate$TryTree);
	return class$;
}

$Class* TryTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com