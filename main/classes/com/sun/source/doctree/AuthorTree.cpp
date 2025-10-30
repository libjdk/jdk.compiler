#include <com/sun/source/doctree/AuthorTree.h>

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

$MethodInfo _AuthorTree_MethodInfo_[] = {
	{"getName", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AuthorTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.AuthorTree",
	nullptr,
	"com.sun.source.doctree.BlockTagTree",
	nullptr,
	_AuthorTree_MethodInfo_
};

$Object* allocate$AuthorTree($Class* clazz) {
	return $of($alloc(AuthorTree));
}

$Class* AuthorTree::load$($String* name, bool initialize) {
	$loadClass(AuthorTree, name, initialize, &_AuthorTree_ClassInfo_, allocate$AuthorTree);
	return class$;
}

$Class* AuthorTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com