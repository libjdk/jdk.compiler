#ifndef _com_sun_source_tree_PackageTree_h_
#define _com_sun_source_tree_PackageTree_h_
//$ interface com.sun.source.tree.PackageTree
//$ extends com.sun.source.tree.Tree

#include <com/sun/source/tree/Tree.h>

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

class $export PackageTree : public ::com::sun::source::tree::Tree {
	$interface(PackageTree, $NO_CLASS_INIT, ::com::sun::source::tree::Tree)
public:
	virtual ::java::util::List* getAnnotations() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getPackageName() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_PackageTree_h_