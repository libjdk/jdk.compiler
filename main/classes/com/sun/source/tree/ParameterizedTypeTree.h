#ifndef _com_sun_source_tree_ParameterizedTypeTree_h_
#define _com_sun_source_tree_ParameterizedTypeTree_h_
//$ interface com.sun.source.tree.ParameterizedTypeTree
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

class $export ParameterizedTypeTree : public ::com::sun::source::tree::Tree {
	$interface(ParameterizedTypeTree, $NO_CLASS_INIT, ::com::sun::source::tree::Tree)
public:
	virtual ::com::sun::source::tree::Tree* getType() {return nullptr;}
	virtual ::java::util::List* getTypeArguments() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_ParameterizedTypeTree_h_