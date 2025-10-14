#ifndef _com_sun_source_doctree_ProvidesTree_h_
#define _com_sun_source_doctree_ProvidesTree_h_
//$ interface com.sun.source.doctree.ProvidesTree
//$ extends com.sun.source.doctree.BlockTagTree

#include <com/sun/source/doctree/BlockTagTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class ReferenceTree;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

class $export ProvidesTree : public ::com::sun::source::doctree::BlockTagTree {
	$interface(ProvidesTree, $NO_CLASS_INIT, ::com::sun::source::doctree::BlockTagTree)
public:
	virtual ::java::util::List* getDescription() {return nullptr;}
	virtual ::com::sun::source::doctree::ReferenceTree* getServiceType() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_ProvidesTree_h_