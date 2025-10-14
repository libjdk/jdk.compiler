#ifndef _com_sun_source_doctree_UnknownInlineTagTree_h_
#define _com_sun_source_doctree_UnknownInlineTagTree_h_
//$ interface com.sun.source.doctree.UnknownInlineTagTree
//$ extends com.sun.source.doctree.InlineTagTree

#include <com/sun/source/doctree/InlineTagTree.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

class $export UnknownInlineTagTree : public ::com::sun::source::doctree::InlineTagTree {
	$interface(UnknownInlineTagTree, $NO_CLASS_INIT, ::com::sun::source::doctree::InlineTagTree)
public:
	virtual ::java::util::List* getContent() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_UnknownInlineTagTree_h_