#ifndef _com_sun_source_tree_BindingPatternTree_h_
#define _com_sun_source_tree_BindingPatternTree_h_
//$ interface com.sun.source.tree.BindingPatternTree
//$ extends com.sun.source.tree.PatternTree

#include <com/sun/source/tree/PatternTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class VariableTree;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $export BindingPatternTree : public ::com::sun::source::tree::PatternTree {
	$interface(BindingPatternTree, $NO_CLASS_INIT, ::com::sun::source::tree::PatternTree)
public:
	virtual ::com::sun::source::tree::VariableTree* getVariable() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_BindingPatternTree_h_