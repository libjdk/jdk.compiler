#include <com/sun/source/tree/ExportsTree.h>

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

$MethodInfo _ExportsTree_MethodInfo_[] = {
	{"getModuleNames", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/ExpressionTree;>;", $PUBLIC | $ABSTRACT},
	{"getPackageName", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ExportsTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.ExportsTree",
	nullptr,
	"com.sun.source.tree.DirectiveTree",
	nullptr,
	_ExportsTree_MethodInfo_
};

$Object* allocate$ExportsTree($Class* clazz) {
	return $of($alloc(ExportsTree));
}

$Class* ExportsTree::load$($String* name, bool initialize) {
	$loadClass(ExportsTree, name, initialize, &_ExportsTree_ClassInfo_, allocate$ExportsTree);
	return class$;
}

$Class* ExportsTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com