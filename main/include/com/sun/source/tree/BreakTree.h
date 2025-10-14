#ifndef _com_sun_source_tree_BreakTree_h_
#define _com_sun_source_tree_BreakTree_h_
//$ interface com.sun.source.tree.BreakTree
//$ extends com.sun.source.tree.StatementTree

#include <com/sun/source/tree/StatementTree.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Name;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $import BreakTree : public ::com::sun::source::tree::StatementTree {
	$interface(BreakTree, $NO_CLASS_INIT, ::com::sun::source::tree::StatementTree)
public:
	virtual ::javax::lang::model::element::Name* getLabel() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_BreakTree_h_