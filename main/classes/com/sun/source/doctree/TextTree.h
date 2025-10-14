#ifndef _com_sun_source_doctree_TextTree_h_
#define _com_sun_source_doctree_TextTree_h_
//$ interface com.sun.source.doctree.TextTree
//$ extends com.sun.source.doctree.DocTree

#include <com/sun/source/doctree/DocTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

class $export TextTree : public ::com::sun::source::doctree::DocTree {
	$interface(TextTree, $NO_CLASS_INIT, ::com::sun::source::doctree::DocTree)
public:
	virtual $String* getBody() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_TextTree_h_