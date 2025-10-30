#include <com/sun/source/doctree/ReferenceTree.h>

#include <jcpp.h>

using $DocTree = ::com::sun::source::doctree::DocTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _ReferenceTree_MethodInfo_[] = {
	{"getSignature", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ReferenceTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.ReferenceTree",
	nullptr,
	"com.sun.source.doctree.DocTree",
	nullptr,
	_ReferenceTree_MethodInfo_
};

$Object* allocate$ReferenceTree($Class* clazz) {
	return $of($alloc(ReferenceTree));
}

$Class* ReferenceTree::load$($String* name, bool initialize) {
	$loadClass(ReferenceTree, name, initialize, &_ReferenceTree_ClassInfo_, allocate$ReferenceTree);
	return class$;
}

$Class* ReferenceTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com