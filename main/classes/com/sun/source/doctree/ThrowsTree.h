#ifndef _com_sun_source_doctree_ThrowsTree_h_
#define _com_sun_source_doctree_ThrowsTree_h_
//$ interface com.sun.source.doctree.ThrowsTree
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

class $export ThrowsTree : public ::com::sun::source::doctree::BlockTagTree {
	$interface(ThrowsTree, $NO_CLASS_INIT, ::com::sun::source::doctree::BlockTagTree)
public:
	virtual ::java::util::List* getDescription() {return nullptr;}
	virtual ::com::sun::source::doctree::ReferenceTree* getExceptionName() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_ThrowsTree_h_