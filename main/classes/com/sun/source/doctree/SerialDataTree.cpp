#include <com/sun/source/doctree/SerialDataTree.h>

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

$MethodInfo _SerialDataTree_MethodInfo_[] = {
	{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SerialDataTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.SerialDataTree",
	nullptr,
	"com.sun.source.doctree.BlockTagTree",
	nullptr,
	_SerialDataTree_MethodInfo_
};

$Object* allocate$SerialDataTree($Class* clazz) {
	return $of($alloc(SerialDataTree));
}

$Class* SerialDataTree::load$($String* name, bool initialize) {
	$loadClass(SerialDataTree, name, initialize, &_SerialDataTree_ClassInfo_, allocate$SerialDataTree);
	return class$;
}

$Class* SerialDataTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com