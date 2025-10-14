#ifndef _com_sun_source_tree_BinaryTree_h_
#define _com_sun_source_tree_BinaryTree_h_
//$ interface com.sun.source.tree.BinaryTree
//$ extends com.sun.source.tree.ExpressionTree

#include <com/sun/source/tree/ExpressionTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $export BinaryTree : public ::com::sun::source::tree::ExpressionTree {
	$interface(BinaryTree, $NO_CLASS_INIT, ::com::sun::source::tree::ExpressionTree)
public:
	virtual ::com::sun::source::tree::ExpressionTree* getLeftOperand() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getRightOperand() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_BinaryTree_h_