#include <com/sun/source/tree/ParenthesizedTree.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _ParenthesizedTree_MethodInfo_[] = {
	{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ParenthesizedTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.ParenthesizedTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_ParenthesizedTree_MethodInfo_
};

$Object* allocate$ParenthesizedTree($Class* clazz) {
	return $of($alloc(ParenthesizedTree));
}

$Class* ParenthesizedTree::load$($String* name, bool initialize) {
	$loadClass(ParenthesizedTree, name, initialize, &_ParenthesizedTree_ClassInfo_, allocate$ParenthesizedTree);
	return class$;
}

$Class* ParenthesizedTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com