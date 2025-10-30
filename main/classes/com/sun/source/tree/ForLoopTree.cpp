#include <com/sun/source/tree/ForLoopTree.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $StatementTree = ::com::sun::source::tree::StatementTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _ForLoopTree_MethodInfo_[] = {
	{"getCondition", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getInitializer", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/StatementTree;>;", $PUBLIC | $ABSTRACT},
	{"getStatement", "()Lcom/sun/source/tree/StatementTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getUpdate", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/ExpressionStatementTree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ForLoopTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.ForLoopTree",
	nullptr,
	"com.sun.source.tree.StatementTree",
	nullptr,
	_ForLoopTree_MethodInfo_
};

$Object* allocate$ForLoopTree($Class* clazz) {
	return $of($alloc(ForLoopTree));
}

$Class* ForLoopTree::load$($String* name, bool initialize) {
	$loadClass(ForLoopTree, name, initialize, &_ForLoopTree_ClassInfo_, allocate$ForLoopTree);
	return class$;
}

$Class* ForLoopTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com