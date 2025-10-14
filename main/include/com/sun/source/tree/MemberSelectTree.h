#ifndef _com_sun_source_tree_MemberSelectTree_h_
#define _com_sun_source_tree_MemberSelectTree_h_
//$ interface com.sun.source.tree.MemberSelectTree
//$ extends com.sun.source.tree.ExpressionTree

#include <com/sun/source/tree/ExpressionTree.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Name;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $import MemberSelectTree : public ::com::sun::source::tree::ExpressionTree {
	$interface(MemberSelectTree, $NO_CLASS_INIT, ::com::sun::source::tree::ExpressionTree)
public:
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() {return nullptr;}
	virtual ::javax::lang::model::element::Name* getIdentifier() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_MemberSelectTree_h_