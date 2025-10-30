#include <com/sun/source/doctree/ThrowsTree.h>

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

$MethodInfo _ThrowsTree_MethodInfo_[] = {
	{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{"getExceptionName", "()Lcom/sun/source/doctree/ReferenceTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ThrowsTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.ThrowsTree",
	nullptr,
	"com.sun.source.doctree.BlockTagTree",
	nullptr,
	_ThrowsTree_MethodInfo_
};

$Object* allocate$ThrowsTree($Class* clazz) {
	return $of($alloc(ThrowsTree));
}

$Class* ThrowsTree::load$($String* name, bool initialize) {
	$loadClass(ThrowsTree, name, initialize, &_ThrowsTree_ClassInfo_, allocate$ThrowsTree);
	return class$;
}

$Class* ThrowsTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com