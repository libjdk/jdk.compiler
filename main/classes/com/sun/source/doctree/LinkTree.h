#ifndef _com_sun_source_doctree_LinkTree_h_
#define _com_sun_source_doctree_LinkTree_h_
//$ interface com.sun.source.doctree.LinkTree
//$ extends com.sun.source.doctree.InlineTagTree

#include <com/sun/source/doctree/InlineTagTree.h>

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

class $export LinkTree : public ::com::sun::source::doctree::InlineTagTree {
	$interface(LinkTree, $NO_CLASS_INIT, ::com::sun::source::doctree::InlineTagTree)
public:
	virtual ::java::util::List* getLabel() {return nullptr;}
	virtual ::com::sun::source::doctree::ReferenceTree* getReference() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_LinkTree_h_