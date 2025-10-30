#include <com/sun/source/doctree/HiddenTree.h>

#include <java/util/List.h>
#include <jcpp.h>

using $BlockTagTree = ::com::sun::source::doctree::BlockTagTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _HiddenTree_MethodInfo_[] = {
	{"getBody", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _HiddenTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.HiddenTree",
	nullptr,
	"com.sun.source.doctree.BlockTagTree",
	nullptr,
	_HiddenTree_MethodInfo_
};

$Object* allocate$HiddenTree($Class* clazz) {
	return $of($alloc(HiddenTree));
}

$Class* HiddenTree::load$($String* name, bool initialize) {
	$loadClass(HiddenTree, name, initialize, &_HiddenTree_ClassInfo_, allocate$HiddenTree);
	return class$;
}

$Class* HiddenTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com