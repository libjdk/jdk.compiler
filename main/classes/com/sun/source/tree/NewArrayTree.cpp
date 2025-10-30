#include <com/sun/source/tree/NewArrayTree.h>

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

$MethodInfo _NewArrayTree_MethodInfo_[] = {
	{"getAnnotations", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/AnnotationTree;>;", $PUBLIC | $ABSTRACT},
	{"getDimAnnotations", "()Ljava/util/List;", "()Ljava/util/List<+Ljava/util/List<+Lcom/sun/source/tree/AnnotationTree;>;>;", $PUBLIC | $ABSTRACT},
	{"getDimensions", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/ExpressionTree;>;", $PUBLIC | $ABSTRACT},
	{"getInitializers", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/ExpressionTree;>;", $PUBLIC | $ABSTRACT},
	{"getType", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _NewArrayTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.NewArrayTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_NewArrayTree_MethodInfo_
};

$Object* allocate$NewArrayTree($Class* clazz) {
	return $of($alloc(NewArrayTree));
}

$Class* NewArrayTree::load$($String* name, bool initialize) {
	$loadClass(NewArrayTree, name, initialize, &_NewArrayTree_ClassInfo_, allocate$NewArrayTree);
	return class$;
}

$Class* NewArrayTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com