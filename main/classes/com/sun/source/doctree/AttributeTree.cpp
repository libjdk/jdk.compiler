#include <com/sun/source/doctree/AttributeTree.h>

#include <com/sun/source/doctree/AttributeTree$ValueKind.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $AttributeTree$ValueKind = ::com::sun::source::doctree::AttributeTree$ValueKind;
using $DocTree = ::com::sun::source::doctree::DocTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _AttributeTree_MethodInfo_[] = {
	{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{"getValue", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{"getValueKind", "()Lcom/sun/source/doctree/AttributeTree$ValueKind;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AttributeTree_InnerClassesInfo_[] = {
	{"com.sun.source.doctree.AttributeTree$ValueKind", "com.sun.source.doctree.AttributeTree", "ValueKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _AttributeTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.AttributeTree",
	nullptr,
	"com.sun.source.doctree.DocTree",
	nullptr,
	_AttributeTree_MethodInfo_,
	nullptr,
	nullptr,
	_AttributeTree_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.source.doctree.AttributeTree$ValueKind"
};

$Object* allocate$AttributeTree($Class* clazz) {
	return $of($alloc(AttributeTree));
}

$Class* AttributeTree::load$($String* name, bool initialize) {
	$loadClass(AttributeTree, name, initialize, &_AttributeTree_ClassInfo_, allocate$AttributeTree);
	return class$;
}

$Class* AttributeTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com