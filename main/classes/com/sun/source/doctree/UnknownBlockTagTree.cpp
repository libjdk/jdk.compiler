#include <com/sun/source/doctree/UnknownBlockTagTree.h>

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

$MethodInfo _UnknownBlockTagTree_MethodInfo_[] = {
	{"getContent", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _UnknownBlockTagTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.UnknownBlockTagTree",
	nullptr,
	"com.sun.source.doctree.BlockTagTree",
	nullptr,
	_UnknownBlockTagTree_MethodInfo_
};

$Object* allocate$UnknownBlockTagTree($Class* clazz) {
	return $of($alloc(UnknownBlockTagTree));
}

$Class* UnknownBlockTagTree::load$($String* name, bool initialize) {
	$loadClass(UnknownBlockTagTree, name, initialize, &_UnknownBlockTagTree_ClassInfo_, allocate$UnknownBlockTagTree);
	return class$;
}

$Class* UnknownBlockTagTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com