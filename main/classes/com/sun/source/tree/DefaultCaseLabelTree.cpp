#include <com/sun/source/tree/DefaultCaseLabelTree.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $CaseLabelTree = ::com::sun::source::tree::CaseLabelTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
$CompoundAttribute _DefaultCaseLabelTree_Annotations_[] = {
	{}
};


$ClassInfo _DefaultCaseLabelTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.DefaultCaseLabelTree",
	nullptr,
	"com.sun.source.tree.CaseLabelTree",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_DefaultCaseLabelTree_Annotations_
};

$Object* allocate$DefaultCaseLabelTree($Class* clazz) {
	return $of($alloc(DefaultCaseLabelTree));
}

$Class* DefaultCaseLabelTree::load$($String* name, bool initialize) {
	$loadClass(DefaultCaseLabelTree, name, initialize, &_DefaultCaseLabelTree_ClassInfo_, allocate$DefaultCaseLabelTree);
	return class$;
}

$Class* DefaultCaseLabelTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com