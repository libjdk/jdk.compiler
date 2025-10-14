#ifndef _com_sun_source_tree_ImportTree_h_
#define _com_sun_source_tree_ImportTree_h_
//$ interface com.sun.source.tree.ImportTree
//$ extends com.sun.source.tree.Tree

#include <com/sun/source/tree/Tree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $import ImportTree : public ::com::sun::source::tree::Tree {
	$interface(ImportTree, $NO_CLASS_INIT, ::com::sun::source::tree::Tree)
public:
	virtual ::com::sun::source::tree::Tree* getQualifiedIdentifier() {return nullptr;}
	virtual bool isStatic() {return false;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_ImportTree_h_