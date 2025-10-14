#ifndef _com_sun_source_doctree_ValueTree_h_
#define _com_sun_source_doctree_ValueTree_h_
//$ interface com.sun.source.doctree.ValueTree
//$ extends com.sun.source.doctree.InlineTagTree

#include <com/sun/source/doctree/InlineTagTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class ReferenceTree;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

class $export ValueTree : public ::com::sun::source::doctree::InlineTagTree {
	$interface(ValueTree, $NO_CLASS_INIT, ::com::sun::source::doctree::InlineTagTree)
public:
	virtual ::com::sun::source::doctree::ReferenceTree* getReference() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_ValueTree_h_