#include <com/sun/source/doctree/CommentTree.h>

#include <jcpp.h>

using $DocTree = ::com::sun::source::doctree::DocTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _CommentTree_MethodInfo_[] = {
	{"getBody", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CommentTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.CommentTree",
	nullptr,
	"com.sun.source.doctree.DocTree",
	nullptr,
	_CommentTree_MethodInfo_
};

$Object* allocate$CommentTree($Class* clazz) {
	return $of($alloc(CommentTree));
}

$Class* CommentTree::load$($String* name, bool initialize) {
	$loadClass(CommentTree, name, initialize, &_CommentTree_ClassInfo_, allocate$CommentTree);
	return class$;
}

$Class* CommentTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com