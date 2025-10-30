#include <com/sun/source/tree/IdentifierTree.h>

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

$MethodInfo _IdentifierTree_MethodInfo_[] = {
	{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _IdentifierTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.IdentifierTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_IdentifierTree_MethodInfo_
};

$Object* allocate$IdentifierTree($Class* clazz) {
	return $of($alloc(IdentifierTree));
}

$Class* IdentifierTree::load$($String* name, bool initialize) {
	$loadClass(IdentifierTree, name, initialize, &_IdentifierTree_ClassInfo_, allocate$IdentifierTree);
	return class$;
}

$Class* IdentifierTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com