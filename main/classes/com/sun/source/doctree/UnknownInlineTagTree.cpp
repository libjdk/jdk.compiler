#include <com/sun/source/doctree/UnknownInlineTagTree.h>

#include <java/util/List.h>
#include <jcpp.h>

using $InlineTagTree = ::com::sun::source::doctree::InlineTagTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _UnknownInlineTagTree_MethodInfo_[] = {
	{"getContent", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _UnknownInlineTagTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.UnknownInlineTagTree",
	nullptr,
	"com.sun.source.doctree.InlineTagTree",
	nullptr,
	_UnknownInlineTagTree_MethodInfo_
};

$Object* allocate$UnknownInlineTagTree($Class* clazz) {
	return $of($alloc(UnknownInlineTagTree));
}

$Class* UnknownInlineTagTree::load$($String* name, bool initialize) {
	$loadClass(UnknownInlineTagTree, name, initialize, &_UnknownInlineTagTree_ClassInfo_, allocate$UnknownInlineTagTree);
	return class$;
}

$Class* UnknownInlineTagTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com