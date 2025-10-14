#ifndef _com_sun_source_doctree_SystemPropertyTree_h_
#define _com_sun_source_doctree_SystemPropertyTree_h_
//$ interface com.sun.source.doctree.SystemPropertyTree
//$ extends com.sun.source.doctree.InlineTagTree

#include <com/sun/source/doctree/InlineTagTree.h>

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

class $import SystemPropertyTree : public ::com::sun::source::doctree::InlineTagTree {
	$interface(SystemPropertyTree, $NO_CLASS_INIT, ::com::sun::source::doctree::InlineTagTree)
public:
	virtual ::javax::lang::model::element::Name* getPropertyName() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_SystemPropertyTree_h_