#ifndef _com_sun_source_doctree_BlockTagTree_h_
#define _com_sun_source_doctree_BlockTagTree_h_
//$ interface com.sun.source.doctree.BlockTagTree
//$ extends com.sun.source.doctree.DocTree

#include <com/sun/source/doctree/DocTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

class $export BlockTagTree : public ::com::sun::source::doctree::DocTree {
	$interface(BlockTagTree, $NO_CLASS_INIT, ::com::sun::source::doctree::DocTree)
public:
	virtual $String* getTagName() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_BlockTagTree_h_