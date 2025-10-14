#ifndef _com_sun_source_tree_UsesTree_h_
#define _com_sun_source_tree_UsesTree_h_
//$ interface com.sun.source.tree.UsesTree
//$ extends com.sun.source.tree.DirectiveTree

#include <com/sun/source/tree/DirectiveTree.h>

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

class $export UsesTree : public ::com::sun::source::tree::DirectiveTree {
	$interface(UsesTree, $NO_CLASS_INIT, ::com::sun::source::tree::DirectiveTree)
public:
	virtual ::com::sun::source::tree::ExpressionTree* getServiceName() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_UsesTree_h_