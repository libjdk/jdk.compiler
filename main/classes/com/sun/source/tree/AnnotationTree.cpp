#include <com/sun/source/tree/AnnotationTree.h>

#include <com/sun/source/tree/Tree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _AnnotationTree_MethodInfo_[] = {
	{"getAnnotationType", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getArguments", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/ExpressionTree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AnnotationTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.AnnotationTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_AnnotationTree_MethodInfo_
};

$Object* allocate$AnnotationTree($Class* clazz) {
	return $of($alloc(AnnotationTree));
}

$Class* AnnotationTree::load$($String* name, bool initialize) {
	$loadClass(AnnotationTree, name, initialize, &_AnnotationTree_ClassInfo_, allocate$AnnotationTree);
	return class$;
}

$Class* AnnotationTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com