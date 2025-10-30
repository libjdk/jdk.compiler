#include <com/sun/source/doctree/LiteralTree.h>

#include <com/sun/source/doctree/TextTree.h>
#include <jcpp.h>

using $InlineTagTree = ::com::sun::source::doctree::InlineTagTree;
using $TextTree = ::com::sun::source::doctree::TextTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _LiteralTree_MethodInfo_[] = {
	{"getBody", "()Lcom/sun/source/doctree/TextTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LiteralTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.LiteralTree",
	nullptr,
	"com.sun.source.doctree.InlineTagTree",
	nullptr,
	_LiteralTree_MethodInfo_
};

$Object* allocate$LiteralTree($Class* clazz) {
	return $of($alloc(LiteralTree));
}

$Class* LiteralTree::load$($String* name, bool initialize) {
	$loadClass(LiteralTree, name, initialize, &_LiteralTree_ClassInfo_, allocate$LiteralTree);
	return class$;
}

$Class* LiteralTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com