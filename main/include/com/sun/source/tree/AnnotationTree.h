#ifndef _com_sun_source_tree_AnnotationTree_h_
#define _com_sun_source_tree_AnnotationTree_h_
//$ interface com.sun.source.tree.AnnotationTree
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

class $import AnnotationTree : public ::com::sun::source::tree::ExpressionTree {
	$interface(AnnotationTree, $NO_CLASS_INIT, ::com::sun::source::tree::ExpressionTree)
public:
	virtual ::com::sun::source::tree::Tree* getAnnotationType() {return nullptr;}
	virtual ::java::util::List* getArguments() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_AnnotationTree_h_