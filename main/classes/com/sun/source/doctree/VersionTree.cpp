#include <com/sun/source/doctree/VersionTree.h>

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

$MethodInfo _VersionTree_MethodInfo_[] = {
	{"getBody", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _VersionTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.VersionTree",
	nullptr,
	"com.sun.source.doctree.BlockTagTree",
	nullptr,
	_VersionTree_MethodInfo_
};

$Object* allocate$VersionTree($Class* clazz) {
	return $of($alloc(VersionTree));
}

$Class* VersionTree::load$($String* name, bool initialize) {
	$loadClass(VersionTree, name, initialize, &_VersionTree_ClassInfo_, allocate$VersionTree);
	return class$;
}

$Class* VersionTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com