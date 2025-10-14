#ifndef _com_sun_source_tree_IdentifierTree_h_
#define _com_sun_source_tree_IdentifierTree_h_
//$ interface com.sun.source.tree.IdentifierTree
//$ extends com.sun.source.tree.ExpressionTree

#include <com/sun/source/tree/ExpressionTree.h>

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

class $export IdentifierTree : public ::com::sun::source::tree::ExpressionTree {
	$interface(IdentifierTree, $NO_CLASS_INIT, ::com::sun::source::tree::ExpressionTree)
public:
	virtual ::javax::lang::model::element::Name* getName() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_IdentifierTree_h_