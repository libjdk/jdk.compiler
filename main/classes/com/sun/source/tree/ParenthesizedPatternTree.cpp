#include <com/sun/source/tree/ParenthesizedPatternTree.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PatternTree = ::com::sun::source::tree::PatternTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
$CompoundAttribute _ParenthesizedPatternTree_Annotations_[] = {
	{}
};


$MethodInfo _ParenthesizedPatternTree_MethodInfo_[] = {
	{"getPattern", "()Lcom/sun/source/tree/PatternTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ParenthesizedPatternTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.ParenthesizedPatternTree",
	nullptr,
	"com.sun.source.tree.PatternTree",
	nullptr,
	_ParenthesizedPatternTree_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ParenthesizedPatternTree_Annotations_
};

$Object* allocate$ParenthesizedPatternTree($Class* clazz) {
	return $of($alloc(ParenthesizedPatternTree));
}

$Class* ParenthesizedPatternTree::load$($String* name, bool initialize) {
	$loadClass(ParenthesizedPatternTree, name, initialize, &_ParenthesizedPatternTree_ClassInfo_, allocate$ParenthesizedPatternTree);
	return class$;
}

$Class* ParenthesizedPatternTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com