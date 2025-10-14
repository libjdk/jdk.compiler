#ifndef _com_sun_source_tree_Tree_h_
#define _com_sun_source_tree_Tree_h_
//$ interface com.sun.source.tree.Tree
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class Tree$Kind;
				class TreeVisitor;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $export Tree : public ::java::lang::Object {
	$interface(Tree, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* visitor, Object$* data) {return nullptr;}
	virtual ::com::sun::source::tree::Tree$Kind* getKind() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_Tree_h_