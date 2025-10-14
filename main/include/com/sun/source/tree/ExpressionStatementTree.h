#ifndef _com_sun_source_tree_ExpressionStatementTree_h_
#define _com_sun_source_tree_ExpressionStatementTree_h_
//$ interface com.sun.source.tree.ExpressionStatementTree
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

class $import ExpressionStatementTree : public ::com::sun::source::tree::StatementTree {
	$interface(ExpressionStatementTree, $NO_CLASS_INIT, ::com::sun::source::tree::StatementTree)
public:
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_ExpressionStatementTree_h_