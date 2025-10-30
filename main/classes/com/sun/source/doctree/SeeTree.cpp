#include <com/sun/source/doctree/SeeTree.h>

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

$MethodInfo _SeeTree_MethodInfo_[] = {
	{"getReference", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SeeTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.SeeTree",
	nullptr,
	"com.sun.source.doctree.BlockTagTree",
	nullptr,
	_SeeTree_MethodInfo_
};

$Object* allocate$SeeTree($Class* clazz) {
	return $of($alloc(SeeTree));
}

$Class* SeeTree::load$($String* name, bool initialize) {
	$loadClass(SeeTree, name, initialize, &_SeeTree_ClassInfo_, allocate$SeeTree);
	return class$;
}

$Class* SeeTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com