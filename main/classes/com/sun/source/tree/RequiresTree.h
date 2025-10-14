#ifndef _com_sun_source_tree_RequiresTree_h_
#define _com_sun_source_tree_RequiresTree_h_
//$ interface com.sun.source.tree.RequiresTree
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

class $export RequiresTree : public ::com::sun::source::tree::DirectiveTree {
	$interface(RequiresTree, $NO_CLASS_INIT, ::com::sun::source::tree::DirectiveTree)
public:
	virtual ::com::sun::source::tree::ExpressionTree* getModuleName() {return nullptr;}
	virtual bool isStatic() {return false;}
	virtual bool isTransitive() {return false;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_RequiresTree_h_