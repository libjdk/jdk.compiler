#ifndef _com_sun_source_doctree_EndElementTree_h_
#define _com_sun_source_doctree_EndElementTree_h_
//$ interface com.sun.source.doctree.EndElementTree
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

class $import EndElementTree : public ::com::sun::source::doctree::DocTree {
	$interface(EndElementTree, $NO_CLASS_INIT, ::com::sun::source::doctree::DocTree)
public:
	virtual ::javax::lang::model::element::Name* getName() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_EndElementTree_h_