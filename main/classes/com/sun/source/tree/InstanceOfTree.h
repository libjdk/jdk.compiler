#ifndef _com_sun_source_tree_InstanceOfTree_h_
#define _com_sun_source_tree_InstanceOfTree_h_
//$ interface com.sun.source.tree.InstanceOfTree
//$ extends com.sun.source.tree.ExpressionTree

#include <com/sun/source/tree/ExpressionTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class PatternTree;
				class Tree;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $export InstanceOfTree : public ::com::sun::source::tree::ExpressionTree {
	$interface(InstanceOfTree, $NO_CLASS_INIT, ::com::sun::source::tree::ExpressionTree)
public:
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() {return nullptr;}
	virtual ::com::sun::source::tree::PatternTree* getPattern() {return nullptr;}
	virtual ::com::sun::source::tree::Tree* getType() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_InstanceOfTree_h_