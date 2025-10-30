#include <com/sun/source/tree/CaseLabelTree.h>

#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$CompoundAttribute _CaseLabelTree_Annotations_[] = {
	{}
};

$ClassInfo _CaseLabelTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.CaseLabelTree",
	nullptr,
	"com.sun.source.tree.Tree",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_CaseLabelTree_Annotations_
};

$Object* allocate$CaseLabelTree($Class* clazz) {
	return $of($alloc(CaseLabelTree));
}

$Class* CaseLabelTree::load$($String* name, bool initialize) {
	$loadClass(CaseLabelTree, name, initialize, &_CaseLabelTree_ClassInfo_, allocate$CaseLabelTree);
	return class$;
}

$Class* CaseLabelTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com