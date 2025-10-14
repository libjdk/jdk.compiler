#ifndef _com_sun_source_tree_BlockTree_h_
#define _com_sun_source_tree_BlockTree_h_
//$ interface com.sun.source.tree.BlockTree
//$ extends com.sun.source.tree.StatementTree

#include <com/sun/source/tree/StatementTree.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $export BlockTree : public ::com::sun::source::tree::StatementTree {
	$interface(BlockTree, $NO_CLASS_INIT, ::com::sun::source::tree::StatementTree)
public:
	virtual ::java::util::List* getStatements() {return nullptr;}
	virtual bool isStatic() {return false;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_BlockTree_h_