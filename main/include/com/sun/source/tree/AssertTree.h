#ifndef _com_sun_source_tree_AssertTree_h_
#define _com_sun_source_tree_AssertTree_h_
//$ interface com.sun.source.tree.AssertTree
//$ extends com.sun.source.tree.StatementTree

#include <com/sun/source/tree/StatementTree.h>

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

class $import AssertTree : public ::com::sun::source::tree::StatementTree {
	$interface(AssertTree, $NO_CLASS_INIT, ::com::sun::source::tree::StatementTree)
public:
	virtual ::com::sun::source::tree::ExpressionTree* getCondition() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getDetail() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_AssertTree_h_