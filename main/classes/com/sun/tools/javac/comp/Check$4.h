#ifndef _com_sun_tools_javac_comp_Check$4_h_
#define _com_sun_tools_javac_comp_Check$4_h_
//$ class com.sun.tools.javac.comp.Check$4
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Lint;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Check;
					class Env;
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
					class JCTree$JCAnnotation;
					class JCTree$JCBlock;
					class JCTree$JCClassDecl;
					class JCTree$JCCompilationUnit;
					class JCTree$JCFieldAccess;
					class JCTree$JCIdent;
					class JCTree$JCMethodDecl;
					class JCTree$JCTypeApply;
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
				namespace comp {

class Check$4 : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Check$4, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Check$4();
	void init$(::com::sun::tools::javac::comp::Check* this$0, ::com::sun::tools::javac::comp::Env* val$env, ::com::sun::tools::javac::tree::JCTree$JCClassDecl* val$check, ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* val$toplevel);
	virtual void visitAnnotation(::com::sun::tools::javac::tree::JCTree$JCAnnotation* tree) override;
	virtual void visitBlock(::com::sun::tools::javac::tree::JCTree$JCBlock* tree) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* tree) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* tree) override;
	virtual void visitTypeApply(::com::sun::tools::javac::tree::JCTree$JCTypeApply* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	::com::sun::tools::javac::comp::Check* this$0 = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* val$toplevel = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCClassDecl* val$check = nullptr;
	::com::sun::tools::javac::comp::Env* val$env = nullptr;
	::com::sun::tools::javac::code::Lint* lint = nullptr;
	bool inSuperType = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Check$4_h_