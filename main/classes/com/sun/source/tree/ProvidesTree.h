#ifndef _com_sun_source_tree_ProvidesTree_h_
#define _com_sun_source_tree_ProvidesTree_h_
//$ interface com.sun.source.tree.ProvidesTree
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

class $export ProvidesTree : public ::com::sun::source::tree::DirectiveTree {
	$interface(ProvidesTree, $NO_CLASS_INIT, ::com::sun::source::tree::DirectiveTree)
public:
	virtual ::java::util::List* getImplementationNames() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getServiceName() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_ProvidesTree_h_