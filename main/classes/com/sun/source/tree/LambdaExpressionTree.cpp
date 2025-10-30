#include <com/sun/source/tree/LambdaExpressionTree.h>

#include <com/sun/source/tree/LambdaExpressionTree$BodyKind.h>
#include <com/sun/source/tree/Tree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $LambdaExpressionTree$BodyKind = ::com::sun::source::tree::LambdaExpressionTree$BodyKind;
using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _LambdaExpressionTree_MethodInfo_[] = {
	{"getBody", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBodyKind", "()Lcom/sun/source/tree/LambdaExpressionTree$BodyKind;", nullptr, $PUBLIC | $ABSTRACT},
	{"getParameters", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/VariableTree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _LambdaExpressionTree_InnerClassesInfo_[] = {
	{"com.sun.source.tree.LambdaExpressionTree$BodyKind", "com.sun.source.tree.LambdaExpressionTree", "BodyKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _LambdaExpressionTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.LambdaExpressionTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_LambdaExpressionTree_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaExpressionTree_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.source.tree.LambdaExpressionTree$BodyKind"
};

$Object* allocate$LambdaExpressionTree($Class* clazz) {
	return $of($alloc(LambdaExpressionTree));
}

$Class* LambdaExpressionTree::load$($String* name, bool initialize) {
	$loadClass(LambdaExpressionTree, name, initialize, &_LambdaExpressionTree_ClassInfo_, allocate$LambdaExpressionTree);
	return class$;
}

$Class* LambdaExpressionTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com