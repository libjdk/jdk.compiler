#include <com/sun/source/doctree/ParamTree.h>

#include <com/sun/source/doctree/IdentifierTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $BlockTagTree = ::com::sun::source::doctree::BlockTagTree;
using $IdentifierTree = ::com::sun::source::doctree::IdentifierTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _ParamTree_MethodInfo_[] = {
	{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{"getName", "()Lcom/sun/source/doctree/IdentifierTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"isTypeParameter", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ParamTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.ParamTree",
	nullptr,
	"com.sun.source.doctree.BlockTagTree",
	nullptr,
	_ParamTree_MethodInfo_
};

$Object* allocate$ParamTree($Class* clazz) {
	return $of($alloc(ParamTree));
}

$Class* ParamTree::load$($String* name, bool initialize) {
	$loadClass(ParamTree, name, initialize, &_ParamTree_ClassInfo_, allocate$ParamTree);
	return class$;
}

$Class* ParamTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com