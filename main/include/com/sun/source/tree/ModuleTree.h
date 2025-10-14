#ifndef _com_sun_source_tree_ModuleTree_h_
#define _com_sun_source_tree_ModuleTree_h_
//$ interface com.sun.source.tree.ModuleTree
//$ extends com.sun.source.tree.Tree

#include <com/sun/source/tree/Tree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ExpressionTree;
				class ModuleTree$ModuleKind;
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

class $import ModuleTree : public ::com::sun::source::tree::Tree {
	$interface(ModuleTree, $NO_CLASS_INIT, ::com::sun::source::tree::Tree)
public:
	virtual ::java::util::List* getAnnotations() {return nullptr;}
	virtual ::java::util::List* getDirectives() {return nullptr;}
	virtual ::com::sun::source::tree::ModuleTree$ModuleKind* getModuleType() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getName() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_ModuleTree_h_