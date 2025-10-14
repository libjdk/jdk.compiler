#ifndef _com_sun_source_doctree_IdentifierTree_h_
#define _com_sun_source_doctree_IdentifierTree_h_
//$ interface com.sun.source.doctree.IdentifierTree
//$ extends com.sun.source.doctree.DocTree

#include <com/sun/source/doctree/DocTree.h>

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
			namespace doctree {

class $export IdentifierTree : public ::com::sun::source::doctree::DocTree {
	$interface(IdentifierTree, $NO_CLASS_INIT, ::com::sun::source::doctree::DocTree)
public:
	virtual ::javax::lang::model::element::Name* getName() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_IdentifierTree_h_