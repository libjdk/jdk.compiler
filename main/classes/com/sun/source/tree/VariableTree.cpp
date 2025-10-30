#include <com/sun/source/tree/VariableTree.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/ModifiersTree.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ModifiersTree = ::com::sun::source::tree::ModifiersTree;
using $StatementTree = ::com::sun::source::tree::StatementTree;
using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _VariableTree_MethodInfo_[] = {
	{"getInitializer", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getModifiers", "()Lcom/sun/source/tree/ModifiersTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNameExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _VariableTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.VariableTree",
	nullptr,
	"com.sun.source.tree.StatementTree",
	nullptr,
	_VariableTree_MethodInfo_
};

$Object* allocate$VariableTree($Class* clazz) {
	return $of($alloc(VariableTree));
}

$Class* VariableTree::load$($String* name, bool initialize) {
	$loadClass(VariableTree, name, initialize, &_VariableTree_ClassInfo_, allocate$VariableTree);
	return class$;
}

$Class* VariableTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com