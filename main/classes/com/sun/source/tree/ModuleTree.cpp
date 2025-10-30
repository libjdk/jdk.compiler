#include <com/sun/source/tree/ModuleTree.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/ModuleTree$ModuleKind.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ModuleTree$ModuleKind = ::com::sun::source::tree::ModuleTree$ModuleKind;
using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _ModuleTree_MethodInfo_[] = {
	{"getAnnotations", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/AnnotationTree;>;", $PUBLIC | $ABSTRACT},
	{"getDirectives", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/DirectiveTree;>;", $PUBLIC | $ABSTRACT},
	{"getModuleType", "()Lcom/sun/source/tree/ModuleTree$ModuleKind;", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ModuleTree_InnerClassesInfo_[] = {
	{"com.sun.source.tree.ModuleTree$ModuleKind", "com.sun.source.tree.ModuleTree", "ModuleKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ModuleTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.ModuleTree",
	nullptr,
	"com.sun.source.tree.Tree",
	nullptr,
	_ModuleTree_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleTree_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.source.tree.ModuleTree$ModuleKind"
};

$Object* allocate$ModuleTree($Class* clazz) {
	return $of($alloc(ModuleTree));
}

$Class* ModuleTree::load$($String* name, bool initialize) {
	$loadClass(ModuleTree, name, initialize, &_ModuleTree_ClassInfo_, allocate$ModuleTree);
	return class$;
}

$Class* ModuleTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com