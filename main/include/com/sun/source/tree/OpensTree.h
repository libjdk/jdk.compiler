#ifndef _com_sun_source_tree_OpensTree_h_
#define _com_sun_source_tree_OpensTree_h_
//$ interface com.sun.source.tree.OpensTree
//$ extends com.sun.source.tree.DirectiveTree

#include <com/sun/source/tree/DirectiveTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ExpressionTree;
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

class $import OpensTree : public ::com::sun::source::tree::DirectiveTree {
	$interface(OpensTree, $NO_CLASS_INIT, ::com::sun::source::tree::DirectiveTree)
public:
	virtual ::java::util::List* getModuleNames() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getPackageName() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_OpensTree_h_