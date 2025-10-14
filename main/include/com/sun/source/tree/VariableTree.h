#ifndef _com_sun_source_tree_VariableTree_h_
#define _com_sun_source_tree_VariableTree_h_
//$ interface com.sun.source.tree.VariableTree
//$ extends com.sun.source.tree.StatementTree

#include <com/sun/source/tree/StatementTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ExpressionTree;
				class ModifiersTree;
				class Tree;
			}
		}
	}
}
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

class $import VariableTree : public ::com::sun::source::tree::StatementTree {
	$interface(VariableTree, $NO_CLASS_INIT, ::com::sun::source::tree::StatementTree)
public:
	virtual ::com::sun::source::tree::ExpressionTree* getInitializer() {return nullptr;}
	virtual ::com::sun::source::tree::ModifiersTree* getModifiers() {return nullptr;}
	virtual ::javax::lang::model::element::Name* getName() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getNameExpression() {return nullptr;}
	virtual ::com::sun::source::tree::Tree* getType() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_VariableTree_h_