#ifndef _com_sun_source_tree_LiteralTree_h_
#define _com_sun_source_tree_LiteralTree_h_
//$ interface com.sun.source.tree.LiteralTree
//$ extends com.sun.source.tree.ExpressionTree

#include <com/sun/source/tree/ExpressionTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $import LiteralTree : public ::com::sun::source::tree::ExpressionTree {
	$interface(LiteralTree, $NO_CLASS_INIT, ::com::sun::source::tree::ExpressionTree)
public:
	virtual $Object* getValue() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_LiteralTree_h_