#ifndef _com_sun_source_tree_CompoundAssignmentTree_h_
#define _com_sun_source_tree_CompoundAssignmentTree_h_
//$ interface com.sun.source.tree.CompoundAssignmentTree
//$ extends com.sun.source.tree.ExpressionTree

#include <com/sun/source/tree/ExpressionTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $export CompoundAssignmentTree : public ::com::sun::source::tree::ExpressionTree {
	$interface(CompoundAssignmentTree, $NO_CLASS_INIT, ::com::sun::source::tree::ExpressionTree)
public:
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getVariable() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_CompoundAssignmentTree_h_