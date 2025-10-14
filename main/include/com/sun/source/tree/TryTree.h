#ifndef _com_sun_source_tree_TryTree_h_
#define _com_sun_source_tree_TryTree_h_
//$ interface com.sun.source.tree.TryTree
//$ extends com.sun.source.tree.StatementTree

#include <com/sun/source/tree/StatementTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class BlockTree;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $import TryTree : public ::com::sun::source::tree::StatementTree {
	$interface(TryTree, $NO_CLASS_INIT, ::com::sun::source::tree::StatementTree)
public:
	virtual ::com::sun::source::tree::BlockTree* getBlock() {return nullptr;}
	virtual ::java::util::List* getCatches() {return nullptr;}
	virtual ::com::sun::source::tree::BlockTree* getFinallyBlock() {return nullptr;}
	virtual ::java::util::List* getResources() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_TryTree_h_