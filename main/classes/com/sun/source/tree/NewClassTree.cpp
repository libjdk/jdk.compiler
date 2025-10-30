#include <com/sun/source/tree/NewClassTree.h>

#include <com/sun/source/tree/ClassTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassTree = ::com::sun::source::tree::ClassTree;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _NewClassTree_MethodInfo_[] = {
	{"getArguments", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/ExpressionTree;>;", $PUBLIC | $ABSTRACT},
	{"getClassBody", "()Lcom/sun/source/tree/ClassTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEnclosingExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getIdentifier", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypeArguments", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _NewClassTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.NewClassTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_NewClassTree_MethodInfo_
};

$Object* allocate$NewClassTree($Class* clazz) {
	return $of($alloc(NewClassTree));
}

$Class* NewClassTree::load$($String* name, bool initialize) {
	$loadClass(NewClassTree, name, initialize, &_NewClassTree_ClassInfo_, allocate$NewClassTree);
	return class$;
}

$Class* NewClassTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com