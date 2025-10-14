#ifndef _com_sun_source_tree_GuardedPatternTree_h_
#define _com_sun_source_tree_GuardedPatternTree_h_
//$ interface com.sun.source.tree.GuardedPatternTree
//$ extends com.sun.source.tree.PatternTree

#include <com/sun/source/tree/PatternTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ExpressionTree;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $import GuardedPatternTree : public ::com::sun::source::tree::PatternTree {
	$interface(GuardedPatternTree, $NO_CLASS_INIT, ::com::sun::source::tree::PatternTree)
public:
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() {return nullptr;}
	virtual ::com::sun::source::tree::PatternTree* getPattern() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_GuardedPatternTree_h_