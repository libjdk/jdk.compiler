#ifndef _com_sun_source_tree_TypeCastTree_h_
#define _com_sun_source_tree_TypeCastTree_h_
//$ interface com.sun.source.tree.TypeCastTree
//$ extends com.sun.source.tree.ExpressionTree

#include <com/sun/source/tree/ExpressionTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class Tree;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $import TypeCastTree : public ::com::sun::source::tree::ExpressionTree {
	$interface(TypeCastTree, $NO_CLASS_INIT, ::com::sun::source::tree::ExpressionTree)
public:
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() {return nullptr;}
	virtual ::com::sun::source::tree::Tree* getType() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_TypeCastTree_h_