#ifndef _com_sun_source_tree_ModifiersTree_h_
#define _com_sun_source_tree_ModifiersTree_h_
//$ interface com.sun.source.tree.ModifiersTree
//$ extends com.sun.source.tree.Tree

#include <com/sun/source/tree/Tree.h>

namespace java {
	namespace util {
		class List;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $export ModifiersTree : public ::com::sun::source::tree::Tree {
	$interface(ModifiersTree, $NO_CLASS_INIT, ::com::sun::source::tree::Tree)
public:
	virtual ::java::util::List* getAnnotations() {return nullptr;}
	virtual ::java::util::Set* getFlags() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_ModifiersTree_h_