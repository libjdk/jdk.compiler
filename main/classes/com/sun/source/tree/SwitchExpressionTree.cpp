#include <com/sun/source/tree/SwitchExpressionTree.h>

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

$MethodInfo _SwitchExpressionTree_MethodInfo_[] = {
	{"getCases", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/CaseTree;>;", $PUBLIC | $ABSTRACT},
	{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SwitchExpressionTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.SwitchExpressionTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_SwitchExpressionTree_MethodInfo_
};

$Object* allocate$SwitchExpressionTree($Class* clazz) {
	return $of($alloc(SwitchExpressionTree));
}

$Class* SwitchExpressionTree::load$($String* name, bool initialize) {
	$loadClass(SwitchExpressionTree, name, initialize, &_SwitchExpressionTree_ClassInfo_, allocate$SwitchExpressionTree);
	return class$;
}

$Class* SwitchExpressionTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com