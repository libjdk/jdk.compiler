#ifndef _com_sun_source_tree_UnaryTree_h_
#define _com_sun_source_tree_UnaryTree_h_
//$ interface com.sun.source.tree.UnaryTree
//$ extends com.sun.source.tree.ExpressionTree

#include <com/sun/source/tree/ExpressionTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $import UnaryTree : public ::com::sun::source::tree::ExpressionTree {
	$interface(UnaryTree, $NO_CLASS_INIT, ::com::sun::source::tree::ExpressionTree)
public:
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_UnaryTree_h_