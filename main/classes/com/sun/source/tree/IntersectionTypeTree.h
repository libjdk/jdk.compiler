#ifndef _com_sun_source_tree_IntersectionTypeTree_h_
#define _com_sun_source_tree_IntersectionTypeTree_h_
//$ interface com.sun.source.tree.IntersectionTypeTree
//$ extends com.sun.source.tree.Tree

#include <com/sun/source/tree/Tree.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $export IntersectionTypeTree : public ::com::sun::source::tree::Tree {
	$interface(IntersectionTypeTree, $NO_CLASS_INIT, ::com::sun::source::tree::Tree)
public:
	virtual ::java::util::List* getBounds() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_IntersectionTypeTree_h_