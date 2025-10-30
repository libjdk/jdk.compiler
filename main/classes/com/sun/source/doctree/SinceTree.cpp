#include <com/sun/source/doctree/SinceTree.h>

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

$MethodInfo _SinceTree_MethodInfo_[] = {
	{"getBody", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SinceTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.SinceTree",
	nullptr,
	"com.sun.source.doctree.BlockTagTree",
	nullptr,
	_SinceTree_MethodInfo_
};

$Object* allocate$SinceTree($Class* clazz) {
	return $of($alloc(SinceTree));
}

$Class* SinceTree::load$($String* name, bool initialize) {
	$loadClass(SinceTree, name, initialize, &_SinceTree_ClassInfo_, allocate$SinceTree);
	return class$;
}

$Class* SinceTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com