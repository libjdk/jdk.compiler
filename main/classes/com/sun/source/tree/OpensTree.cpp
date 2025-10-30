#include <com/sun/source/tree/OpensTree.h>

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

$MethodInfo _OpensTree_MethodInfo_[] = {
	{"getModuleNames", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/ExpressionTree;>;", $PUBLIC | $ABSTRACT},
	{"getPackageName", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _OpensTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.OpensTree",
	nullptr,
	"com.sun.source.tree.DirectiveTree",
	nullptr,
	_OpensTree_MethodInfo_
};

$Object* allocate$OpensTree($Class* clazz) {
	return $of($alloc(OpensTree));
}

$Class* OpensTree::load$($String* name, bool initialize) {
	$loadClass(OpensTree, name, initialize, &_OpensTree_ClassInfo_, allocate$OpensTree);
	return class$;
}

$Class* OpensTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com