#include <com/sun/source/doctree/InheritDocTree.h>

#include <jcpp.h>

using $InlineTagTree = ::com::sun::source::doctree::InlineTagTree;
using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$ClassInfo _InheritDocTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.InheritDocTree",
	nullptr,
	"com.sun.source.doctree.InlineTagTree"
};

$Object* allocate$InheritDocTree($Class* clazz) {
	return $of($alloc(InheritDocTree));
}

$Class* InheritDocTree::load$($String* name, bool initialize) {
	$loadClass(InheritDocTree, name, initialize, &_InheritDocTree_ClassInfo_, allocate$InheritDocTree);
	return class$;
}

$Class* InheritDocTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com