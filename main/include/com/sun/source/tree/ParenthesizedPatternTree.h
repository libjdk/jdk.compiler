#ifndef _com_sun_source_tree_ParenthesizedPatternTree_h_
#define _com_sun_source_tree_ParenthesizedPatternTree_h_
//$ interface com.sun.source.tree.ParenthesizedPatternTree
//$ extends com.sun.source.tree.PatternTree

#include <com/sun/source/tree/PatternTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $import ParenthesizedPatternTree : public ::com::sun::source::tree::PatternTree {
	$interface(ParenthesizedPatternTree, $NO_CLASS_INIT, ::com::sun::source::tree::PatternTree)
public:
	virtual ::com::sun::source::tree::PatternTree* getPattern() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_ParenthesizedPatternTree_h_