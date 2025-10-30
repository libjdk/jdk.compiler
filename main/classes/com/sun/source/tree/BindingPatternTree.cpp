#include <com/sun/source/tree/BindingPatternTree.h>

#include <com/sun/source/tree/VariableTree.h>
#include <jcpp.h>

using $PatternTree = ::com::sun::source::tree::PatternTree;
using $VariableTree = ::com::sun::source::tree::VariableTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _BindingPatternTree_MethodInfo_[] = {
	{"getVariable", "()Lcom/sun/source/tree/VariableTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BindingPatternTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.BindingPatternTree",
	nullptr,
	"com.sun.source.tree.PatternTree",
	nullptr,
	_BindingPatternTree_MethodInfo_
};

$Object* allocate$BindingPatternTree($Class* clazz) {
	return $of($alloc(BindingPatternTree));
}

$Class* BindingPatternTree::load$($String* name, bool initialize) {
	$loadClass(BindingPatternTree, name, initialize, &_BindingPatternTree_ClassInfo_, allocate$BindingPatternTree);
	return class$;
}

$Class* BindingPatternTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com