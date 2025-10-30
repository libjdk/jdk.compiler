#include <com/sun/source/tree/PrimitiveTypeTree.h>

#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeKind = ::javax::lang::model::type::TypeKind;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _PrimitiveTypeTree_MethodInfo_[] = {
	{"getPrimitiveTypeKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PrimitiveTypeTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.PrimitiveTypeTree",
	nullptr,
	"com.sun.source.tree.Tree",
	nullptr,
	_PrimitiveTypeTree_MethodInfo_
};

$Object* allocate$PrimitiveTypeTree($Class* clazz) {
	return $of($alloc(PrimitiveTypeTree));
}

$Class* PrimitiveTypeTree::load$($String* name, bool initialize) {
	$loadClass(PrimitiveTypeTree, name, initialize, &_PrimitiveTypeTree_ClassInfo_, allocate$PrimitiveTypeTree);
	return class$;
}

$Class* PrimitiveTypeTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com