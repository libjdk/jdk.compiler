#ifndef _com_sun_source_tree_ErroneousTree_h_
#define _com_sun_source_tree_ErroneousTree_h_
//$ interface com.sun.source.tree.ErroneousTree
//$ extends com.sun.source.tree.ExpressionTree

#include <com/sun/source/tree/ExpressionTree.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $import ErroneousTree : public ::com::sun::source::tree::ExpressionTree {
	$interface(ErroneousTree, $NO_CLASS_INIT, ::com::sun::source::tree::ExpressionTree)
public:
	virtual ::java::util::List* getErrorTrees() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_ErroneousTree_h_