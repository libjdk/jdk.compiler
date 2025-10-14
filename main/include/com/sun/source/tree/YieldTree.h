#ifndef _com_sun_source_tree_YieldTree_h_
#define _com_sun_source_tree_YieldTree_h_
//$ interface com.sun.source.tree.YieldTree
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

class $import YieldTree : public ::com::sun::source::tree::StatementTree {
	$interface(YieldTree, $NO_CLASS_INIT, ::com::sun::source::tree::StatementTree)
public:
	virtual ::com::sun::source::tree::ExpressionTree* getValue() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_YieldTree_h_