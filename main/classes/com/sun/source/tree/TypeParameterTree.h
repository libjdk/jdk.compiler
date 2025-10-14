#ifndef _com_sun_source_tree_TypeParameterTree_h_
#define _com_sun_source_tree_TypeParameterTree_h_
//$ interface com.sun.source.tree.TypeParameterTree
//$ extends com.sun.source.tree.Tree

#include <com/sun/source/tree/Tree.h>

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

class $export TypeParameterTree : public ::com::sun::source::tree::Tree {
	$interface(TypeParameterTree, $NO_CLASS_INIT, ::com::sun::source::tree::Tree)
public:
	virtual ::java::util::List* getAnnotations() {return nullptr;}
	virtual ::java::util::List* getBounds() {return nullptr;}
	virtual ::javax::lang::model::element::Name* getName() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_TypeParameterTree_h_