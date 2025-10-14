#ifndef _com_sun_source_tree_WildcardTree_h_
#define _com_sun_source_tree_WildcardTree_h_
//$ interface com.sun.source.tree.WildcardTree
//$ extends com.sun.source.tree.Tree

#include <com/sun/source/tree/Tree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $export WildcardTree : public ::com::sun::source::tree::Tree {
	$interface(WildcardTree, $NO_CLASS_INIT, ::com::sun::source::tree::Tree)
public:
	virtual ::com::sun::source::tree::Tree* getBound() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_WildcardTree_h_