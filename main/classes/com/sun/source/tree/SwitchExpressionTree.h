#ifndef _com_sun_source_tree_SwitchExpressionTree_h_
#define _com_sun_source_tree_SwitchExpressionTree_h_
//$ interface com.sun.source.tree.SwitchExpressionTree
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

class $export SwitchExpressionTree : public ::com::sun::source::tree::ExpressionTree {
	$interface(SwitchExpressionTree, $NO_CLASS_INIT, ::com::sun::source::tree::ExpressionTree)
public:
	virtual ::java::util::List* getCases() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_SwitchExpressionTree_h_