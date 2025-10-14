#ifndef _com_sun_source_tree_NewClassTree_h_
#define _com_sun_source_tree_NewClassTree_h_
//$ interface com.sun.source.tree.NewClassTree
//$ extends com.sun.source.tree.ExpressionTree

#include <com/sun/source/tree/ExpressionTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ClassTree;
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

class $import NewClassTree : public ::com::sun::source::tree::ExpressionTree {
	$interface(NewClassTree, $NO_CLASS_INIT, ::com::sun::source::tree::ExpressionTree)
public:
	virtual ::java::util::List* getArguments() {return nullptr;}
	virtual ::com::sun::source::tree::ClassTree* getClassBody() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getEnclosingExpression() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getIdentifier() {return nullptr;}
	virtual ::java::util::List* getTypeArguments() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_NewClassTree_h_