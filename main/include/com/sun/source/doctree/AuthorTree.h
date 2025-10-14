#ifndef _com_sun_source_doctree_AuthorTree_h_
#define _com_sun_source_doctree_AuthorTree_h_
//$ interface com.sun.source.doctree.AuthorTree
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

class $import AuthorTree : public ::com::sun::source::doctree::BlockTagTree {
	$interface(AuthorTree, $NO_CLASS_INIT, ::com::sun::source::doctree::BlockTagTree)
public:
	virtual ::java::util::List* getName() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_AuthorTree_h_