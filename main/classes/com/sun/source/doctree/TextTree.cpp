#include <com/sun/source/doctree/TextTree.h>

#include <jcpp.h>

using $DocTree = ::com::sun::source::doctree::DocTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _TextTree_MethodInfo_[] = {
	{"getBody", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TextTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.TextTree",
	nullptr,
	"com.sun.source.doctree.DocTree",
	nullptr,
	_TextTree_MethodInfo_
};

$Object* allocate$TextTree($Class* clazz) {
	return $of($alloc(TextTree));
}

$Class* TextTree::load$($String* name, bool initialize) {
	$loadClass(TextTree, name, initialize, &_TextTree_ClassInfo_, allocate$TextTree);
	return class$;
}

$Class* TextTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com