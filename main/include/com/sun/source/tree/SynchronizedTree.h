#ifndef _com_sun_source_tree_SynchronizedTree_h_
#define _com_sun_source_tree_SynchronizedTree_h_
//$ interface com.sun.source.tree.SynchronizedTree
//$ extends com.sun.source.tree.StatementTree

#include <com/sun/source/tree/StatementTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class BlockTree;
				class ExpressionTree;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $import SynchronizedTree : public ::com::sun::source::tree::StatementTree {
	$interface(SynchronizedTree, $NO_CLASS_INIT, ::com::sun::source::tree::StatementTree)
public:
	virtual ::com::sun::source::tree::BlockTree* getBlock() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_SynchronizedTree_h_