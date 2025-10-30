#include <com/sun/source/doctree/ValueTree.h>

#include <com/sun/source/doctree/ReferenceTree.h>
#include <jcpp.h>

using $InlineTagTree = ::com::sun::source::doctree::InlineTagTree;
using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _ValueTree_MethodInfo_[] = {
	{"getReference", "()Lcom/sun/source/doctree/ReferenceTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ValueTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.ValueTree",
	nullptr,
	"com.sun.source.doctree.InlineTagTree",
	nullptr,
	_ValueTree_MethodInfo_
};

$Object* allocate$ValueTree($Class* clazz) {
	return $of($alloc(ValueTree));
}

$Class* ValueTree::load$($String* name, bool initialize) {
	$loadClass(ValueTree, name, initialize, &_ValueTree_ClassInfo_, allocate$ValueTree);
	return class$;
}

$Class* ValueTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com