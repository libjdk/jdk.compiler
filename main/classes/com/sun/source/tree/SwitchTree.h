#ifndef _com_sun_source_tree_SwitchTree_h_
#define _com_sun_source_tree_SwitchTree_h_
//$ interface com.sun.source.tree.SwitchTree
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

class $export SwitchTree : public ::com::sun::source::tree::StatementTree {
	$interface(SwitchTree, $NO_CLASS_INIT, ::com::sun::source::tree::StatementTree)
public:
	virtual ::java::util::List* getCases() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_SwitchTree_h_