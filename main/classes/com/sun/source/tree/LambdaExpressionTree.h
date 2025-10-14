#ifndef _com_sun_source_tree_LambdaExpressionTree_h_
#define _com_sun_source_tree_LambdaExpressionTree_h_
//$ interface com.sun.source.tree.LambdaExpressionTree
//$ extends com.sun.source.tree.ExpressionTree

#include <com/sun/source/tree/ExpressionTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class LambdaExpressionTree$BodyKind;
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

class $export LambdaExpressionTree : public ::com::sun::source::tree::ExpressionTree {
	$interface(LambdaExpressionTree, $NO_CLASS_INIT, ::com::sun::source::tree::ExpressionTree)
public:
	virtual ::com::sun::source::tree::Tree* getBody() {return nullptr;}
	virtual ::com::sun::source::tree::LambdaExpressionTree$BodyKind* getBodyKind() {return nullptr;}
	virtual ::java::util::List* getParameters() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_LambdaExpressionTree_h_