#ifndef _com_sun_source_tree_PrimitiveTypeTree_h_
#define _com_sun_source_tree_PrimitiveTypeTree_h_
//$ interface com.sun.source.tree.PrimitiveTypeTree
//$ extends com.sun.source.tree.Tree

#include <com/sun/source/tree/Tree.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeKind;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $import PrimitiveTypeTree : public ::com::sun::source::tree::Tree {
	$interface(PrimitiveTypeTree, $NO_CLASS_INIT, ::com::sun::source::tree::Tree)
public:
	virtual ::javax::lang::model::type::TypeKind* getPrimitiveTypeKind() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_PrimitiveTypeTree_h_