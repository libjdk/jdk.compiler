#ifndef _com_sun_source_doctree_SeeTree_h_
#define _com_sun_source_doctree_SeeTree_h_
//$ interface com.sun.source.doctree.SeeTree
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

class $import SeeTree : public ::com::sun::source::doctree::BlockTagTree {
	$interface(SeeTree, $NO_CLASS_INIT, ::com::sun::source::doctree::BlockTagTree)
public:
	virtual ::java::util::List* getReference() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_SeeTree_h_