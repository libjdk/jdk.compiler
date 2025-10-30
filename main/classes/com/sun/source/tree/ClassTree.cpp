#include <com/sun/source/tree/ClassTree.h>

#include <com/sun/source/tree/ModifiersTree.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $ModifiersTree = ::com::sun::source::tree::ModifiersTree;
using $StatementTree = ::com::sun::source::tree::StatementTree;
using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _ClassTree_MethodInfo_[] = {
	{"getExtendsClause", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getImplementsClause", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC | $ABSTRACT},
	{"getMembers", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC | $ABSTRACT},
	{"getModifiers", "()Lcom/sun/source/tree/ModifiersTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPermitsClause", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC},
	{"getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypeParameters", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/TypeParameterTree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ClassTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.ClassTree",
	nullptr,
	"com.sun.source.tree.StatementTree",
	nullptr,
	_ClassTree_MethodInfo_
};

$Object* allocate$ClassTree($Class* clazz) {
	return $of($alloc(ClassTree));
}

$List* ClassTree::getPermitsClause() {
	return $List::of();
}

$Class* ClassTree::load$($String* name, bool initialize) {
	$loadClass(ClassTree, name, initialize, &_ClassTree_ClassInfo_, allocate$ClassTree);
	return class$;
}

$Class* ClassTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com