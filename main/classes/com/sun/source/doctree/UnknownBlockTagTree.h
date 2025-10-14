#ifndef _com_sun_source_doctree_UnknownBlockTagTree_h_
#define _com_sun_source_doctree_UnknownBlockTagTree_h_
//$ interface com.sun.source.doctree.UnknownBlockTagTree
//$ extends com.sun.source.doctree.BlockTagTree

#include <com/sun/source/doctree/BlockTagTree.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

class $export UnknownBlockTagTree : public ::com::sun::source::doctree::BlockTagTree {
	$interface(UnknownBlockTagTree, $NO_CLASS_INIT, ::com::sun::source::doctree::BlockTagTree)
public:
	virtual ::java::util::List* getContent() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_UnknownBlockTagTree_h_