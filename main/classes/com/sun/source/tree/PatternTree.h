#ifndef _com_sun_source_tree_PatternTree_h_
#define _com_sun_source_tree_PatternTree_h_
//$ interface com.sun.source.tree.PatternTree
//$ extends com.sun.source.tree.CaseLabelTree

#include <com/sun/source/tree/CaseLabelTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $export PatternTree : public ::com::sun::source::tree::CaseLabelTree {
	$interface(PatternTree, $NO_CLASS_INIT, ::com::sun::source::tree::CaseLabelTree)
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_PatternTree_h_