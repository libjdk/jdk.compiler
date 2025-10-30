#include <com/sun/source/tree/AnnotatedTypeTree.h>

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

$MethodInfo _AnnotatedTypeTree_MethodInfo_[] = {
	{"getAnnotations", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/AnnotationTree;>;", $PUBLIC | $ABSTRACT},
	{"getUnderlyingType", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AnnotatedTypeTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.AnnotatedTypeTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_AnnotatedTypeTree_MethodInfo_
};

$Object* allocate$AnnotatedTypeTree($Class* clazz) {
	return $of($alloc(AnnotatedTypeTree));
}

$Class* AnnotatedTypeTree::load$($String* name, bool initialize) {
	$loadClass(AnnotatedTypeTree, name, initialize, &_AnnotatedTypeTree_ClassInfo_, allocate$AnnotatedTypeTree);
	return class$;
}

$Class* AnnotatedTypeTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com