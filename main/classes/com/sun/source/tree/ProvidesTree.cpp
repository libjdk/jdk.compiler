#include <com/sun/source/tree/ProvidesTree.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $DirectiveTree = ::com::sun::source::tree::DirectiveTree;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _ProvidesTree_MethodInfo_[] = {
	{"getImplementationNames", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/ExpressionTree;>;", $PUBLIC | $ABSTRACT},
	{"getServiceName", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ProvidesTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.ProvidesTree",
	nullptr,
	"com.sun.source.tree.DirectiveTree",
	nullptr,
	_ProvidesTree_MethodInfo_
};

$Object* allocate$ProvidesTree($Class* clazz) {
	return $of($alloc(ProvidesTree));
}

$Class* ProvidesTree::load$($String* name, bool initialize) {
	$loadClass(ProvidesTree, name, initialize, &_ProvidesTree_ClassInfo_, allocate$ProvidesTree);
	return class$;
}

$Class* ProvidesTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com