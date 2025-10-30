#include <com/sun/source/doctree/EndElementTree.h>

#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $DocTree = ::com::sun::source::doctree::DocTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _EndElementTree_MethodInfo_[] = {
	{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _EndElementTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.EndElementTree",
	nullptr,
	"com.sun.source.doctree.DocTree",
	nullptr,
	_EndElementTree_MethodInfo_
};

$Object* allocate$EndElementTree($Class* clazz) {
	return $of($alloc(EndElementTree));
}

$Class* EndElementTree::load$($String* name, bool initialize) {
	$loadClass(EndElementTree, name, initialize, &_EndElementTree_ClassInfo_, allocate$EndElementTree);
	return class$;
}

$Class* EndElementTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com