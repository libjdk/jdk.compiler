#include <com/sun/source/doctree/DocCommentTree.h>

#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <jcpp.h>

using $DocTree = ::com::sun::source::doctree::DocTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _DocCommentTree_MethodInfo_[] = {
	{"getBlockTags", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{"getBody", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{"getFirstSentence", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{"getFullBody", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getPostamble", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getPreamble", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{}
};

$ClassInfo _DocCommentTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.DocCommentTree",
	nullptr,
	"com.sun.source.doctree.DocTree",
	nullptr,
	_DocCommentTree_MethodInfo_
};

$Object* allocate$DocCommentTree($Class* clazz) {
	return $of($alloc(DocCommentTree));
}

$List* DocCommentTree::getFullBody() {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, bodyList, $new($ArrayList));
	bodyList->addAll($(getFirstSentence()));
	bodyList->addAll($(getBody()));
	return bodyList;
}

$List* DocCommentTree::getPreamble() {
	return $Collections::emptyList();
}

$List* DocCommentTree::getPostamble() {
	return $Collections::emptyList();
}

$Class* DocCommentTree::load$($String* name, bool initialize) {
	$loadClass(DocCommentTree, name, initialize, &_DocCommentTree_ClassInfo_, allocate$DocCommentTree);
	return class$;
}

$Class* DocCommentTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com