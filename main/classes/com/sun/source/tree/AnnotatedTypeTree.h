#ifndef _com_sun_source_tree_AnnotatedTypeTree_h_
#define _com_sun_source_tree_AnnotatedTypeTree_h_
//$ interface com.sun.source.tree.AnnotatedTypeTree
//$ extends com.sun.source.tree.ExpressionTree

#include <com/sun/source/tree/ExpressionTree.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $export AnnotatedTypeTree : public ::com::sun::source::tree::ExpressionTree {
	$interface(AnnotatedTypeTree, $NO_CLASS_INIT, ::com::sun::source::tree::ExpressionTree)
public:
	virtual ::java::util::List* getAnnotations() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getUnderlyingType() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_AnnotatedTypeTree_h_