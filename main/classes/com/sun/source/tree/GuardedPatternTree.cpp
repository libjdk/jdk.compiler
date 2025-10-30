#include <com/sun/source/tree/GuardedPatternTree.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $PatternTree = ::com::sun::source::tree::PatternTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$CompoundAttribute _GuardedPatternTree_Annotations_[] = {
	{}
};

$MethodInfo _GuardedPatternTree_MethodInfo_[] = {
	{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPattern", "()Lcom/sun/source/tree/PatternTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _GuardedPatternTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.GuardedPatternTree",
	nullptr,
	"com.sun.source.tree.PatternTree",
	nullptr,
	_GuardedPatternTree_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_GuardedPatternTree_Annotations_
};

$Object* allocate$GuardedPatternTree($Class* clazz) {
	return $of($alloc(GuardedPatternTree));
}

$Class* GuardedPatternTree::load$($String* name, bool initialize) {
	$loadClass(GuardedPatternTree, name, initialize, &_GuardedPatternTree_ClassInfo_, allocate$GuardedPatternTree);
	return class$;
}

$Class* GuardedPatternTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com