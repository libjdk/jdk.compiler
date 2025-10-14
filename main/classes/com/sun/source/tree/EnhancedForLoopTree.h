#ifndef _com_sun_source_tree_EnhancedForLoopTree_h_
#define _com_sun_source_tree_EnhancedForLoopTree_h_
//$ interface com.sun.source.tree.EnhancedForLoopTree
//$ extends com.sun.source.tree.StatementTree

#include <com/sun/source/tree/StatementTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ExpressionTree;
				class VariableTree;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $export EnhancedForLoopTree : public ::com::sun::source::tree::StatementTree {
	$interface(EnhancedForLoopTree, $NO_CLASS_INIT, ::com::sun::source::tree::StatementTree)
public:
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() {return nullptr;}
	virtual ::com::sun::source::tree::StatementTree* getStatement() {return nullptr;}
	virtual ::com::sun::source::tree::VariableTree* getVariable() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_EnhancedForLoopTree_h_