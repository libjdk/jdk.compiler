#include <com/sun/source/doctree/InlineTagTree.h>

#include <jcpp.h>

using $DocTree = ::com::sun::source::doctree::DocTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _InlineTagTree_MethodInfo_[] = {
	{"getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _InlineTagTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.InlineTagTree",
	nullptr,
	"com.sun.source.doctree.DocTree",
	nullptr,
	_InlineTagTree_MethodInfo_
};

$Object* allocate$InlineTagTree($Class* clazz) {
	return $of($alloc(InlineTagTree));
}

$Class* InlineTagTree::load$($String* name, bool initialize) {
	$loadClass(InlineTagTree, name, initialize, &_InlineTagTree_ClassInfo_, allocate$InlineTagTree);
	return class$;
}

$Class* InlineTagTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com