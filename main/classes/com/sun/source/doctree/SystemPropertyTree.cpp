#include <com/sun/source/doctree/SystemPropertyTree.h>

#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $InlineTagTree = ::com::sun::source::doctree::InlineTagTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _SystemPropertyTree_MethodInfo_[] = {
	{"getPropertyName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SystemPropertyTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.SystemPropertyTree",
	nullptr,
	"com.sun.source.doctree.InlineTagTree",
	nullptr,
	_SystemPropertyTree_MethodInfo_
};

$Object* allocate$SystemPropertyTree($Class* clazz) {
	return $of($alloc(SystemPropertyTree));
}

$Class* SystemPropertyTree::load$($String* name, bool initialize) {
	$loadClass(SystemPropertyTree, name, initialize, &_SystemPropertyTree_ClassInfo_, allocate$SystemPropertyTree);
	return class$;
}

$Class* SystemPropertyTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com