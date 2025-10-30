#include <com/sun/source/doctree/DocRootTree.h>

#include <jcpp.h>

using $InlineTagTree = ::com::sun::source::doctree::InlineTagTree;
using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$ClassInfo _DocRootTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.DocRootTree",
	nullptr,
	"com.sun.source.doctree.InlineTagTree"
};

$Object* allocate$DocRootTree($Class* clazz) {
	return $of($alloc(DocRootTree));
}

$Class* DocRootTree::load$($String* name, bool initialize) {
	$loadClass(DocRootTree, name, initialize, &_DocRootTree_ClassInfo_, allocate$DocRootTree);
	return class$;
}

$Class* DocRootTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com