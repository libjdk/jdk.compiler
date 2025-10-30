#include <com/sun/source/tree/PatternTree.h>

#include <jcpp.h>

using $CaseLabelTree = ::com::sun::source::tree::CaseLabelTree;
using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$ClassInfo _PatternTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.PatternTree",
	nullptr,
	"com.sun.source.tree.CaseLabelTree"
};

$Object* allocate$PatternTree($Class* clazz) {
	return $of($alloc(PatternTree));
}

$Class* PatternTree::load$($String* name, bool initialize) {
	$loadClass(PatternTree, name, initialize, &_PatternTree_ClassInfo_, allocate$PatternTree);
	return class$;
}

$Class* PatternTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com