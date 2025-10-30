#include <com/sun/source/tree/ExpressionTree.h>

#include <jcpp.h>

using $CaseLabelTree = ::com::sun::source::tree::CaseLabelTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$CompoundAttribute _ExpressionTree_Annotations_[] = {
	{}
};

$ClassInfo _ExpressionTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	"com.sun.source.tree.CaseLabelTree",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_ExpressionTree_Annotations_
};

$Object* allocate$ExpressionTree($Class* clazz) {
	return $of($alloc(ExpressionTree));
}

$Class* ExpressionTree::load$($String* name, bool initialize) {
	$loadClass(ExpressionTree, name, initialize, &_ExpressionTree_ClassInfo_, allocate$ExpressionTree);
	return class$;
}

$Class* ExpressionTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com