#include <com/sun/source/doctree/DocTypeTree.h>

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

$MethodInfo _DocTypeTree_MethodInfo_[] = {
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DocTypeTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.DocTypeTree",
	nullptr,
	"com.sun.source.doctree.DocTree",
	nullptr,
	_DocTypeTree_MethodInfo_
};

$Object* allocate$DocTypeTree($Class* clazz) {
	return $of($alloc(DocTypeTree));
}

$Class* DocTypeTree::load$($String* name, bool initialize) {
	$loadClass(DocTypeTree, name, initialize, &_DocTypeTree_ClassInfo_, allocate$DocTypeTree);
	return class$;
}

$Class* DocTypeTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com