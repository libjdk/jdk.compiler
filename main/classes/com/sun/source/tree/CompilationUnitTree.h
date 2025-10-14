#ifndef _com_sun_source_tree_CompilationUnitTree_h_
#define _com_sun_source_tree_CompilationUnitTree_h_
//$ interface com.sun.source.tree.CompilationUnitTree
//$ extends com.sun.source.tree.Tree

#include <com/sun/source/tree/Tree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ExpressionTree;
				class LineMap;
				class ModuleTree;
				class PackageTree;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $export CompilationUnitTree : public ::com::sun::source::tree::Tree {
	$interface(CompilationUnitTree, $NO_CLASS_INIT, ::com::sun::source::tree::Tree)
public:
	virtual ::java::util::List* getImports() {return nullptr;}
	virtual ::com::sun::source::tree::LineMap* getLineMap() {return nullptr;}
	virtual ::com::sun::source::tree::ModuleTree* getModule();
	virtual ::com::sun::source::tree::PackageTree* getPackage() {return nullptr;}
	virtual ::java::util::List* getPackageAnnotations() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getPackageName() {return nullptr;}
	virtual ::javax::tools::JavaFileObject* getSourceFile() {return nullptr;}
	virtual ::java::util::List* getTypeDecls() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_CompilationUnitTree_h_