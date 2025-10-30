#include <com/sun/source/doctree/LinkTree.h>

#include <com/sun/source/doctree/ReferenceTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $InlineTagTree = ::com::sun::source::doctree::InlineTagTree;
using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _LinkTree_MethodInfo_[] = {
	{"getLabel", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{"getReference", "()Lcom/sun/source/doctree/ReferenceTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LinkTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.LinkTree",
	nullptr,
	"com.sun.source.doctree.InlineTagTree",
	nullptr,
	_LinkTree_MethodInfo_
};

$Object* allocate$LinkTree($Class* clazz) {
	return $of($alloc(LinkTree));
}

$Class* LinkTree::load$($String* name, bool initialize) {
	$loadClass(LinkTree, name, initialize, &_LinkTree_ClassInfo_, allocate$LinkTree);
	return class$;
}

$Class* LinkTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com