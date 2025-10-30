#include <com/sun/source/tree/MethodTree.h>

#include <com/sun/source/tree/BlockTree.h>
#include <com/sun/source/tree/ModifiersTree.h>
#include <com/sun/source/tree/VariableTree.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $BlockTree = ::com::sun::source::tree::BlockTree;
using $ModifiersTree = ::com::sun::source::tree::ModifiersTree;
using $Tree = ::com::sun::source::tree::Tree;
using $VariableTree = ::com::sun::source::tree::VariableTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _MethodTree_MethodInfo_[] = {
	{"getBody", "()Lcom/sun/source/tree/BlockTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDefaultValue", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getModifiers", "()Lcom/sun/source/tree/ModifiersTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{"getParameters", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/VariableTree;>;", $PUBLIC | $ABSTRACT},
	{"getReceiverParameter", "()Lcom/sun/source/tree/VariableTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getReturnType", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getThrows", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/ExpressionTree;>;", $PUBLIC | $ABSTRACT},
	{"getTypeParameters", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/TypeParameterTree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MethodTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.MethodTree",
	nullptr,
	"com.sun.source.tree.Tree",
	nullptr,
	_MethodTree_MethodInfo_
};

$Object* allocate$MethodTree($Class* clazz) {
	return $of($alloc(MethodTree));
}

$Class* MethodTree::load$($String* name, bool initialize) {
	$loadClass(MethodTree, name, initialize, &_MethodTree_ClassInfo_, allocate$MethodTree);
	return class$;
}

$Class* MethodTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com