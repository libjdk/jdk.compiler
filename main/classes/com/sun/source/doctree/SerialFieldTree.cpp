#include <com/sun/source/doctree/SerialFieldTree.h>

#include <com/sun/source/doctree/IdentifierTree.h>
#include <com/sun/source/doctree/ReferenceTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $BlockTagTree = ::com::sun::source::doctree::BlockTagTree;
using $IdentifierTree = ::com::sun::source::doctree::IdentifierTree;
using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _SerialFieldTree_MethodInfo_[] = {
	{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{"getName", "()Lcom/sun/source/doctree/IdentifierTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "()Lcom/sun/source/doctree/ReferenceTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SerialFieldTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.SerialFieldTree",
	nullptr,
	"com.sun.source.doctree.BlockTagTree",
	nullptr,
	_SerialFieldTree_MethodInfo_
};

$Object* allocate$SerialFieldTree($Class* clazz) {
	return $of($alloc(SerialFieldTree));
}

$Class* SerialFieldTree::load$($String* name, bool initialize) {
	$loadClass(SerialFieldTree, name, initialize, &_SerialFieldTree_ClassInfo_, allocate$SerialFieldTree);
	return class$;
}

$Class* SerialFieldTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com