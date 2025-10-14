#ifndef _com_sun_source_tree_IfTree_h_
#define _com_sun_source_tree_IfTree_h_
//$ interface com.sun.source.tree.IfTree
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

class $export IfTree : public ::com::sun::source::tree::StatementTree {
	$interface(IfTree, $NO_CLASS_INIT, ::com::sun::source::tree::StatementTree)
public:
	virtual ::com::sun::source::tree::ExpressionTree* getCondition() {return nullptr;}
	virtual ::com::sun::source::tree::StatementTree* getElseStatement() {return nullptr;}
	virtual ::com::sun::source::tree::StatementTree* getThenStatement() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_IfTree_h_