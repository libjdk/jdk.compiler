#include <com/sun/source/tree/ImportTree.h>

#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _ImportTree_MethodInfo_[] = {
	{"getQualifiedIdentifier", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT},
	{"isStatic", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ImportTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.ImportTree",
	nullptr,
	"com.sun.source.tree.Tree",
	nullptr,
	_ImportTree_MethodInfo_
};

$Object* allocate$ImportTree($Class* clazz) {
	return $of($alloc(ImportTree));
}

$Class* ImportTree::load$($String* name, bool initialize) {
	$loadClass(ImportTree, name, initialize, &_ImportTree_ClassInfo_, allocate$ImportTree);
	return class$;
}

$Class* ImportTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com