#ifndef _com_sun_source_tree_CatchTree_h_
#define _com_sun_source_tree_CatchTree_h_
//$ interface com.sun.source.tree.CatchTree
//$ extends com.sun.source.tree.Tree

#include <com/sun/source/tree/Tree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class BlockTree;
				class VariableTree;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $export CatchTree : public ::com::sun::source::tree::Tree {
	$interface(CatchTree, $NO_CLASS_INIT, ::com::sun::source::tree::Tree)
public:
	virtual ::com::sun::source::tree::BlockTree* getBlock() {return nullptr;}
	virtual ::com::sun::source::tree::VariableTree* getParameter() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_CatchTree_h_