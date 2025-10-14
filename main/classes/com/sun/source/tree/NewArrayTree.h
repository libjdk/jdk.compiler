#ifndef _com_sun_source_tree_NewArrayTree_h_
#define _com_sun_source_tree_NewArrayTree_h_
//$ interface com.sun.source.tree.NewArrayTree
//$ extends com.sun.source.tree.ExpressionTree

#include <com/sun/source/tree/ExpressionTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class Tree;
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
			namespace tree {

class $export NewArrayTree : public ::com::sun::source::tree::ExpressionTree {
	$interface(NewArrayTree, $NO_CLASS_INIT, ::com::sun::source::tree::ExpressionTree)
public:
	virtual ::java::util::List* getAnnotations() {return nullptr;}
	virtual ::java::util::List* getDimAnnotations() {return nullptr;}
	virtual ::java::util::List* getDimensions() {return nullptr;}
	virtual ::java::util::List* getInitializers() {return nullptr;}
	virtual ::com::sun::source::tree::Tree* getType() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_NewArrayTree_h_