#ifndef _com_sun_source_tree_ExportsTree_h_
#define _com_sun_source_tree_ExportsTree_h_
//$ interface com.sun.source.tree.ExportsTree
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

class $import ExportsTree : public ::com::sun::source::tree::DirectiveTree {
	$interface(ExportsTree, $NO_CLASS_INIT, ::com::sun::source::tree::DirectiveTree)
public:
	virtual ::java::util::List* getModuleNames() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getPackageName() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_ExportsTree_h_