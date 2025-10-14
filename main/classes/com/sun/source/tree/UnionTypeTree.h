#ifndef _com_sun_source_tree_UnionTypeTree_h_
#define _com_sun_source_tree_UnionTypeTree_h_
//$ interface com.sun.source.tree.UnionTypeTree
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

class $export UnionTypeTree : public ::com::sun::source::tree::Tree {
	$interface(UnionTypeTree, $NO_CLASS_INIT, ::com::sun::source::tree::Tree)
public:
	virtual ::java::util::List* getTypeAlternatives() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_UnionTypeTree_h_