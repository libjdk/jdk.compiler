#include <com/sun/source/tree/PackageTree.h>

#include <com/sun/source/tree/ExpressionTree.h>
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

$MethodInfo _PackageTree_MethodInfo_[] = {
	{"getAnnotations", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/AnnotationTree;>;", $PUBLIC | $ABSTRACT},
	{"getPackageName", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PackageTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.PackageTree",
	nullptr,
	"com.sun.source.tree.Tree",
	nullptr,
	_PackageTree_MethodInfo_
};

$Object* allocate$PackageTree($Class* clazz) {
	return $of($alloc(PackageTree));
}

$Class* PackageTree::load$($String* name, bool initialize) {
	$loadClass(PackageTree, name, initialize, &_PackageTree_ClassInfo_, allocate$PackageTree);
	return class$;
}

$Class* PackageTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com