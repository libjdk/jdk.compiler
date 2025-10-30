#include <com/sun/source/tree/ModifiersTree.h>

#include <java/util/List.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _ModifiersTree_MethodInfo_[] = {
	{"getAnnotations", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/AnnotationTree;>;", $PUBLIC | $ABSTRACT},
	{"getFlags", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ModifiersTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.ModifiersTree",
	nullptr,
	"com.sun.source.tree.Tree",
	nullptr,
	_ModifiersTree_MethodInfo_
};

$Object* allocate$ModifiersTree($Class* clazz) {
	return $of($alloc(ModifiersTree));
}

$Class* ModifiersTree::load$($String* name, bool initialize) {
	$loadClass(ModifiersTree, name, initialize, &_ModifiersTree_ClassInfo_, allocate$ModifiersTree);
	return class$;
}

$Class* ModifiersTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com