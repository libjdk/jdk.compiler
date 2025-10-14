#ifndef _com_sun_source_doctree_IndexTree_h_
#define _com_sun_source_doctree_IndexTree_h_
//$ interface com.sun.source.doctree.IndexTree
//$ extends com.sun.source.doctree.InlineTagTree

#include <com/sun/source/doctree/InlineTagTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocTree;
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

class $export IndexTree : public ::com::sun::source::doctree::InlineTagTree {
	$interface(IndexTree, $NO_CLASS_INIT, ::com::sun::source::doctree::InlineTagTree)
public:
	virtual ::java::util::List* getDescription() {return nullptr;}
	virtual ::com::sun::source::doctree::DocTree* getSearchTerm() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_IndexTree_h_