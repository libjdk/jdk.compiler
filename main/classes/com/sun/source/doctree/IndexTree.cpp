#include <com/sun/source/doctree/IndexTree.h>

#include <com/sun/source/doctree/DocTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $DocTree = ::com::sun::source::doctree::DocTree;
using $InlineTagTree = ::com::sun::source::doctree::InlineTagTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _IndexTree_MethodInfo_[] = {
	{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{"getSearchTerm", "()Lcom/sun/source/doctree/DocTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _IndexTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.IndexTree",
	nullptr,
	"com.sun.source.doctree.InlineTagTree",
	nullptr,
	_IndexTree_MethodInfo_
};

$Object* allocate$IndexTree($Class* clazz) {
	return $of($alloc(IndexTree));
}

$Class* IndexTree::load$($String* name, bool initialize) {
	$loadClass(IndexTree, name, initialize, &_IndexTree_ClassInfo_, allocate$IndexTree);
	return class$;
}

$Class* IndexTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com