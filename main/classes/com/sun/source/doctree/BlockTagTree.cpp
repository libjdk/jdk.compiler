#include <com/sun/source/doctree/BlockTagTree.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $DocTree = ::com::sun::source::doctree::DocTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _BlockTagTree_MethodInfo_[] = {
	{"getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BlockTagTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.BlockTagTree",
	nullptr,
	"com.sun.source.doctree.DocTree",
	nullptr,
	_BlockTagTree_MethodInfo_
};

$Object* allocate$BlockTagTree($Class* clazz) {
	return $of($alloc(BlockTagTree));
}

$Class* BlockTagTree::load$($String* name, bool initialize) {
	$loadClass(BlockTagTree, name, initialize, &_BlockTagTree_ClassInfo_, allocate$BlockTagTree);
	return class$;
}

$Class* BlockTagTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com