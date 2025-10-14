#ifndef _com_sun_source_doctree_DeprecatedTree_h_
#define _com_sun_source_doctree_DeprecatedTree_h_
//$ interface com.sun.source.doctree.DeprecatedTree
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

class $export DeprecatedTree : public ::com::sun::source::doctree::BlockTagTree {
	$interface(DeprecatedTree, $NO_CLASS_INIT, ::com::sun::source::doctree::BlockTagTree)
public:
	virtual ::java::util::List* getBody() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_DeprecatedTree_h_