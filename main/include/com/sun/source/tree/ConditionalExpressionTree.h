#ifndef _com_sun_source_tree_ConditionalExpressionTree_h_
#define _com_sun_source_tree_ConditionalExpressionTree_h_
//$ interface com.sun.source.tree.ConditionalExpressionTree
//$ extends com.sun.source.tree.ExpressionTree

#include <com/sun/source/tree/ExpressionTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $import ConditionalExpressionTree : public ::com::sun::source::tree::ExpressionTree {
	$interface(ConditionalExpressionTree, $NO_CLASS_INIT, ::com::sun::source::tree::ExpressionTree)
public:
	virtual ::com::sun::source::tree::ExpressionTree* getCondition() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getFalseExpression() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getTrueExpression() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_ConditionalExpressionTree_h_