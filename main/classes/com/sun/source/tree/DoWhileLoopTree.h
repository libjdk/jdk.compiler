#ifndef _com_sun_source_tree_DoWhileLoopTree_h_
#define _com_sun_source_tree_DoWhileLoopTree_h_
//$ interface com.sun.source.tree.DoWhileLoopTree
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

class $export DoWhileLoopTree : public ::com::sun::source::tree::StatementTree {
	$interface(DoWhileLoopTree, $NO_CLASS_INIT, ::com::sun::source::tree::StatementTree)
public:
	virtual ::com::sun::source::tree::ExpressionTree* getCondition() {return nullptr;}
	virtual ::com::sun::source::tree::StatementTree* getStatement() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_DoWhileLoopTree_h_