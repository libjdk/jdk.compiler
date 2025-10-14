#ifndef _com_sun_source_doctree_SummaryTree_h_
#define _com_sun_source_doctree_SummaryTree_h_
//$ interface com.sun.source.doctree.SummaryTree
//$ extends com.sun.source.doctree.InlineTagTree

#include <com/sun/source/doctree/InlineTagTree.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

class $export SummaryTree : public ::com::sun::source::doctree::InlineTagTree {
	$interface(SummaryTree, $NO_CLASS_INIT, ::com::sun::source::doctree::InlineTagTree)
public:
	virtual ::java::util::List* getSummary() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_SummaryTree_h_