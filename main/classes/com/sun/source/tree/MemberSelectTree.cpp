#include <com/sun/source/tree/MemberSelectTree.h>

#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _MemberSelectTree_MethodInfo_[] = {
	{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getIdentifier", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MemberSelectTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.MemberSelectTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_MemberSelectTree_MethodInfo_
};

$Object* allocate$MemberSelectTree($Class* clazz) {
	return $of($alloc(MemberSelectTree));
}

$Class* MemberSelectTree::load$($String* name, bool initialize) {
	$loadClass(MemberSelectTree, name, initialize, &_MemberSelectTree_ClassInfo_, allocate$MemberSelectTree);
	return class$;
}

$Class* MemberSelectTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com