#ifndef _com_sun_source_tree_ArrayTypeTree_h_
#define _com_sun_source_tree_ArrayTypeTree_h_
//$ interface com.sun.source.tree.ArrayTypeTree
//$ extends com.sun.source.tree.Tree

#include <com/sun/source/tree/Tree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $import ArrayTypeTree : public ::com::sun::source::tree::Tree {
	$interface(ArrayTypeTree, $NO_CLASS_INIT, ::com::sun::source::tree::Tree)
public:
	virtual ::com::sun::source::tree::Tree* getType() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_ArrayTypeTree_h_