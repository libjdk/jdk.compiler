#include <com/sun/source/doctree/ProvidesTree.h>

#include <com/sun/source/doctree/ReferenceTree.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _ProvidesTree_MethodInfo_[] = {
	{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{"getServiceType", "()Lcom/sun/source/doctree/ReferenceTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ProvidesTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.ProvidesTree",
	nullptr,
	"com.sun.source.doctree.BlockTagTree",
	nullptr,
	_ProvidesTree_MethodInfo_
};

$Object* allocate$ProvidesTree($Class* clazz) {
	return $of($alloc(ProvidesTree));
}

$Class* ProvidesTree::load$($String* name, bool initialize) {
	$loadClass(ProvidesTree, name, initialize, &_ProvidesTree_ClassInfo_, allocate$ProvidesTree);
	return class$;
}

$Class* ProvidesTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com