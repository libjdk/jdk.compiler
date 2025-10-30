#include <com/sun/source/doctree/StartElementTree.h>

#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $DocTree = ::com::sun::source::doctree::DocTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _StartElementTree_MethodInfo_[] = {
	{"getAttributes", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{"isSelfClosing", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _StartElementTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.StartElementTree",
	nullptr,
	"com.sun.source.doctree.DocTree",
	nullptr,
	_StartElementTree_MethodInfo_
};

$Object* allocate$StartElementTree($Class* clazz) {
	return $of($alloc(StartElementTree));
}

$Class* StartElementTree::load$($String* name, bool initialize) {
	$loadClass(StartElementTree, name, initialize, &_StartElementTree_ClassInfo_, allocate$StartElementTree);
	return class$;
}

$Class* StartElementTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com