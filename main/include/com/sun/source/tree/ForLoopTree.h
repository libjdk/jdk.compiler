#ifndef _com_sun_source_tree_ForLoopTree_h_
#define _com_sun_source_tree_ForLoopTree_h_
//$ interface com.sun.source.tree.ForLoopTree
//$ extends com.sun.source.tree.StatementTree

#include <com/sun/source/tree/StatementTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ExpressionTree;
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

class $import ForLoopTree : public ::com::sun::source::tree::StatementTree {
	$interface(ForLoopTree, $NO_CLASS_INIT, ::com::sun::source::tree::StatementTree)
public:
	virtual ::com::sun::source::tree::ExpressionTree* getCondition() {return nullptr;}
	virtual ::java::util::List* getInitializer() {return nullptr;}
	virtual ::com::sun::source::tree::StatementTree* getStatement() {return nullptr;}
	virtual ::java::util::List* getUpdate() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_ForLoopTree_h_