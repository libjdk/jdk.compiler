#ifndef _com_sun_source_doctree_SerialFieldTree_h_
#define _com_sun_source_doctree_SerialFieldTree_h_
//$ interface com.sun.source.doctree.SerialFieldTree
//$ extends com.sun.source.doctree.BlockTagTree

#include <com/sun/source/doctree/BlockTagTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class IdentifierTree;
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

class $export SerialFieldTree : public ::com::sun::source::doctree::BlockTagTree {
	$interface(SerialFieldTree, $NO_CLASS_INIT, ::com::sun::source::doctree::BlockTagTree)
public:
	virtual ::java::util::List* getDescription() {return nullptr;}
	virtual ::com::sun::source::doctree::IdentifierTree* getName() {return nullptr;}
	virtual ::com::sun::source::doctree::ReferenceTree* getType() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_SerialFieldTree_h_