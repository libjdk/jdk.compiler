#ifndef _com_sun_source_tree_ThrowTree_h_
#define _com_sun_source_tree_ThrowTree_h_
//$ interface com.sun.source.tree.ThrowTree
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

class $export ThrowTree : public ::com::sun::source::tree::StatementTree {
	$interface(ThrowTree, $NO_CLASS_INIT, ::com::sun::source::tree::StatementTree)
public:
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_ThrowTree_h_