#ifndef _com_sun_source_doctree_SerialTree_h_
#define _com_sun_source_doctree_SerialTree_h_
//$ interface com.sun.source.doctree.SerialTree
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

class $import SerialTree : public ::com::sun::source::doctree::BlockTagTree {
	$interface(SerialTree, $NO_CLASS_INIT, ::com::sun::source::doctree::BlockTagTree)
public:
	virtual ::java::util::List* getDescription() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_SerialTree_h_