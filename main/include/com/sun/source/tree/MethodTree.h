#ifndef _com_sun_source_tree_MethodTree_h_
#define _com_sun_source_tree_MethodTree_h_
//$ interface com.sun.source.tree.MethodTree
//$ extends com.sun.source.tree.Tree

#include <com/sun/source/tree/Tree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class BlockTree;
				class ModifiersTree;
				class VariableTree;
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

class $import MethodTree : public ::com::sun::source::tree::Tree {
	$interface(MethodTree, $NO_CLASS_INIT, ::com::sun::source::tree::Tree)
public:
	virtual ::com::sun::source::tree::BlockTree* getBody() {return nullptr;}
	virtual ::com::sun::source::tree::Tree* getDefaultValue() {return nullptr;}
	virtual ::com::sun::source::tree::ModifiersTree* getModifiers() {return nullptr;}
	virtual ::javax::lang::model::element::Name* getName() {return nullptr;}
	virtual ::java::util::List* getParameters() {return nullptr;}
	virtual ::com::sun::source::tree::VariableTree* getReceiverParameter() {return nullptr;}
	virtual ::com::sun::source::tree::Tree* getReturnType() {return nullptr;}
	virtual ::java::util::List* getThrows() {return nullptr;}
	virtual ::java::util::List* getTypeParameters() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_MethodTree_h_