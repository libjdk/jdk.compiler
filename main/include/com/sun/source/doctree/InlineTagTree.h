#ifndef _com_sun_source_doctree_InlineTagTree_h_
#define _com_sun_source_doctree_InlineTagTree_h_
//$ interface com.sun.source.doctree.InlineTagTree
//$ extends com.sun.source.doctree.DocTree

#include <com/sun/source/doctree/DocTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

class $import InlineTagTree : public ::com::sun::source::doctree::DocTree {
	$interface(InlineTagTree, $NO_CLASS_INIT, ::com::sun::source::doctree::DocTree)
public:
	virtual $String* getTagName() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_InlineTagTree_h_