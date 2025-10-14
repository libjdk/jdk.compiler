#ifndef _com_sun_source_doctree_CommentTree_h_
#define _com_sun_source_doctree_CommentTree_h_
//$ interface com.sun.source.doctree.CommentTree
//$ extends com.sun.source.doctree.DocTree

#include <com/sun/source/doctree/DocTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

class $export CommentTree : public ::com::sun::source::doctree::DocTree {
	$interface(CommentTree, $NO_CLASS_INIT, ::com::sun::source::doctree::DocTree)
public:
	virtual $String* getBody() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_CommentTree_h_