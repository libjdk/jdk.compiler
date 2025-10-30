#include <com/sun/source/doctree/EntityTree.h>

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

$MethodInfo _EntityTree_MethodInfo_[] = {
	{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _EntityTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.EntityTree",
	nullptr,
	"com.sun.source.doctree.DocTree",
	nullptr,
	_EntityTree_MethodInfo_
};

$Object* allocate$EntityTree($Class* clazz) {
	return $of($alloc(EntityTree));
}

$Class* EntityTree::load$($String* name, bool initialize) {
	$loadClass(EntityTree, name, initialize, &_EntityTree_ClassInfo_, allocate$EntityTree);
	return class$;
}

$Class* EntityTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com