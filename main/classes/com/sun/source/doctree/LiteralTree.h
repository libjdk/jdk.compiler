#ifndef _com_sun_source_doctree_LiteralTree_h_
#define _com_sun_source_doctree_LiteralTree_h_
//$ interface com.sun.source.doctree.LiteralTree
//$ extends com.sun.source.doctree.InlineTagTree

#include <com/sun/source/doctree/InlineTagTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class TextTree;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

class $export LiteralTree : public ::com::sun::source::doctree::InlineTagTree {
	$interface(LiteralTree, $NO_CLASS_INIT, ::com::sun::source::doctree::InlineTagTree)
public:
	virtual ::com::sun::source::doctree::TextTree* getBody() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_LiteralTree_h_