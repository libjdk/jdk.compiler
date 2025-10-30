#include <com/sun/source/doctree/UsesTree.h>

#include <com/sun/source/doctree/ReferenceTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $BlockTagTree = ::com::sun::source::doctree::BlockTagTree;
using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _UsesTree_MethodInfo_[] = {
	{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{"getServiceType", "()Lcom/sun/source/doctree/ReferenceTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _UsesTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.UsesTree",
	nullptr,
	"com.sun.source.doctree.BlockTagTree",
	nullptr,
	_UsesTree_MethodInfo_
};

$Object* allocate$UsesTree($Class* clazz) {
	return $of($alloc(UsesTree));
}

$Class* UsesTree::load$($String* name, bool initialize) {
	$loadClass(UsesTree, name, initialize, &_UsesTree_ClassInfo_, allocate$UsesTree);
	return class$;
}

$Class* UsesTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com