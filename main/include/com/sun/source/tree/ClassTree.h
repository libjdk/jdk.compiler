#ifndef _com_sun_source_tree_ClassTree_h_
#define _com_sun_source_tree_ClassTree_h_
//$ interface com.sun.source.tree.ClassTree
//$ extends com.sun.source.tree.StatementTree

#include <com/sun/source/tree/StatementTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ModifiersTree;
				class Tree;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
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

class $import ClassTree : public ::com::sun::source::tree::StatementTree {
	$interface(ClassTree, $NO_CLASS_INIT, ::com::sun::source::tree::StatementTree)
public:
	virtual ::com::sun::source::tree::Tree* getExtendsClause() {return nullptr;}
	virtual ::java::util::List* getImplementsClause() {return nullptr;}
	virtual ::java::util::List* getMembers() {return nullptr;}
	virtual ::com::sun::source::tree::ModifiersTree* getModifiers() {return nullptr;}
	virtual ::java::util::List* getPermitsClause();
	virtual ::javax::lang::model::element::Name* getSimpleName() {return nullptr;}
	virtual ::java::util::List* getTypeParameters() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_ClassTree_h_