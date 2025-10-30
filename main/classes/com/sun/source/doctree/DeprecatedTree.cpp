#include <com/sun/source/doctree/DeprecatedTree.h>

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

$MethodInfo _DeprecatedTree_MethodInfo_[] = {
	{"getBody", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DeprecatedTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.DeprecatedTree",
	nullptr,
	"com.sun.source.doctree.BlockTagTree",
	nullptr,
	_DeprecatedTree_MethodInfo_
};

$Object* allocate$DeprecatedTree($Class* clazz) {
	return $of($alloc(DeprecatedTree));
}

$Class* DeprecatedTree::load$($String* name, bool initialize) {
	$loadClass(DeprecatedTree, name, initialize, &_DeprecatedTree_ClassInfo_, allocate$DeprecatedTree);
	return class$;
}

$Class* DeprecatedTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com