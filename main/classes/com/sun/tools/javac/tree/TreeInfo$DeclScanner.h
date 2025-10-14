#ifndef _com_sun_tools_javac_tree_TreeInfo$DeclScanner_h_
#define _com_sun_tools_javac_tree_TreeInfo$DeclScanner_h_
//$ class com.sun.tools.javac.tree.TreeInfo$DeclScanner
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree;
					class JCTree$JCClassDecl;
					class JCTree$JCCompilationUnit;
					class JCTree$JCMethodDecl;
					class JCTree$JCModuleDecl;
					class JCTree$JCPackageDecl;
					class JCTree$JCTypeParameter;
					class JCTree$JCVariableDecl;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class TreeInfo$DeclScanner : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(TreeInfo$DeclScanner, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	TreeInfo$DeclScanner();
	void init$(::com::sun::tools::javac::code::Symbol* sym);
	using ::com::sun::tools::javac::tree::TreeScanner::scan;
	virtual void scan(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* that) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* that) override;
	virtual void visitModuleDef(::com::sun::tools::javac::tree::JCTree$JCModuleDecl* that) override;
	virtual void visitPackageDef(::com::sun::tools::javac::tree::JCTree$JCPackageDecl* that) override;
	virtual void visitTopLevel(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* that) override;
	virtual void visitTypeParameter(::com::sun::tools::javac::tree::JCTree$JCTypeParameter* that) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* that) override;
	::com::sun::tools::javac::code::Symbol* sym = nullptr;
	::com::sun::tools::javac::tree::JCTree* result = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_TreeInfo$DeclScanner_h_