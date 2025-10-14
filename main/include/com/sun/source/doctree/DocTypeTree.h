#ifndef _com_sun_source_doctree_DocTypeTree_h_
#define _com_sun_source_doctree_DocTypeTree_h_
//$ interface com.sun.source.doctree.DocTypeTree
//$ extends com.sun.source.doctree.DocTree

#include <com/sun/source/doctree/DocTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

class $import DocTypeTree : public ::com::sun::source::doctree::DocTree {
	$interface(DocTypeTree, $NO_CLASS_INIT, ::com::sun::source::doctree::DocTree)
public:
	virtual $String* getText() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_DocTypeTree_h_