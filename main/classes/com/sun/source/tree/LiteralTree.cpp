#include <com/sun/source/tree/LiteralTree.h>

#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _LiteralTree_MethodInfo_[] = {
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LiteralTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.LiteralTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_LiteralTree_MethodInfo_
};

$Object* allocate$LiteralTree($Class* clazz) {
	return $of($alloc(LiteralTree));
}

$Class* LiteralTree::load$($String* name, bool initialize) {
	$loadClass(LiteralTree, name, initialize, &_LiteralTree_ClassInfo_, allocate$LiteralTree);
	return class$;
}

$Class* LiteralTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com