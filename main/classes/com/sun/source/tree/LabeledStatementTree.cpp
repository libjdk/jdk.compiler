#include <com/sun/source/tree/LabeledStatementTree.h>

#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $StatementTree = ::com::sun::source::tree::StatementTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _LabeledStatementTree_MethodInfo_[] = {
	{"getLabel", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{"getStatement", "()Lcom/sun/source/tree/StatementTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LabeledStatementTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.LabeledStatementTree",
	nullptr,
	"com.sun.source.tree.StatementTree",
	nullptr,
	_LabeledStatementTree_MethodInfo_
};

$Object* allocate$LabeledStatementTree($Class* clazz) {
	return $of($alloc(LabeledStatementTree));
}

$Class* LabeledStatementTree::load$($String* name, bool initialize) {
	$loadClass(LabeledStatementTree, name, initialize, &_LabeledStatementTree_ClassInfo_, allocate$LabeledStatementTree);
	return class$;
}

$Class* LabeledStatementTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com