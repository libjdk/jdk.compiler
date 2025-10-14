#ifndef _com_sun_source_tree_AssignmentTree_h_
#define _com_sun_source_tree_AssignmentTree_h_
//$ interface com.sun.source.tree.AssignmentTree
//$ extends com.sun.source.tree.ExpressionTree

#include <com/sun/source/tree/ExpressionTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $import AssignmentTree : public ::com::sun::source::tree::ExpressionTree {
	$interface(AssignmentTree, $NO_CLASS_INIT, ::com::sun::source::tree::ExpressionTree)
public:
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getVariable() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_AssignmentTree_h_