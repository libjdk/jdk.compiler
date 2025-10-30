#include <com/sun/source/doctree/SerialTree.h>

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

$MethodInfo _SerialTree_MethodInfo_[] = {
	{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SerialTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.SerialTree",
	nullptr,
	"com.sun.source.doctree.BlockTagTree",
	nullptr,
	_SerialTree_MethodInfo_
};

$Object* allocate$SerialTree($Class* clazz) {
	return $of($alloc(SerialTree));
}

$Class* SerialTree::load$($String* name, bool initialize) {
	$loadClass(SerialTree, name, initialize, &_SerialTree_ClassInfo_, allocate$SerialTree);
	return class$;
}

$Class* SerialTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com