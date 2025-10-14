#ifndef _com_sun_source_doctree_ReferenceTree_h_
#define _com_sun_source_doctree_ReferenceTree_h_
//$ interface com.sun.source.doctree.ReferenceTree
//$ extends com.sun.source.doctree.DocTree

#include <com/sun/source/doctree/DocTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

class $export ReferenceTree : public ::com::sun::source::doctree::DocTree {
	$interface(ReferenceTree, $NO_CLASS_INIT, ::com::sun::source::doctree::DocTree)
public:
	virtual $String* getSignature() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_ReferenceTree_h_