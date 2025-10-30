#include <com/sun/source/tree/SwitchTree.h>

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

$MethodInfo _SwitchTree_MethodInfo_[] = {
	{"getCases", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/CaseTree;>;", $PUBLIC | $ABSTRACT},
	{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SwitchTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.SwitchTree",
	nullptr,
	"com.sun.source.tree.StatementTree",
	nullptr,
	_SwitchTree_MethodInfo_
};

$Object* allocate$SwitchTree($Class* clazz) {
	return $of($alloc(SwitchTree));
}

$Class* SwitchTree::load$($String* name, bool initialize) {
	$loadClass(SwitchTree, name, initialize, &_SwitchTree_ClassInfo_, allocate$SwitchTree);
	return class$;
}

$Class* SwitchTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com