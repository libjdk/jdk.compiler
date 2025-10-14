#ifndef _com_sun_source_tree_MethodInvocationTree_h_
#define _com_sun_source_tree_MethodInvocationTree_h_
//$ interface com.sun.source.tree.MethodInvocationTree
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

class $export MethodInvocationTree : public ::com::sun::source::tree::ExpressionTree {
	$interface(MethodInvocationTree, $NO_CLASS_INIT, ::com::sun::source::tree::ExpressionTree)
public:
	virtual ::java::util::List* getArguments() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getMethodSelect() {return nullptr;}
	virtual ::java::util::List* getTypeArguments() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_MethodInvocationTree_h_