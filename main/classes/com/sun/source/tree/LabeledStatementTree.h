#ifndef _com_sun_source_tree_LabeledStatementTree_h_
#define _com_sun_source_tree_LabeledStatementTree_h_
//$ interface com.sun.source.tree.LabeledStatementTree
//$ extends com.sun.source.tree.StatementTree

#include <com/sun/source/tree/StatementTree.h>

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

class $export LabeledStatementTree : public ::com::sun::source::tree::StatementTree {
	$interface(LabeledStatementTree, $NO_CLASS_INIT, ::com::sun::source::tree::StatementTree)
public:
	virtual ::javax::lang::model::element::Name* getLabel() {return nullptr;}
	virtual ::com::sun::source::tree::StatementTree* getStatement() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_LabeledStatementTree_h_