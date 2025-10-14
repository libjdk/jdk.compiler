#ifndef _com_sun_tools_javac_comp_Annotate$TypeAnnotate_h_
#define _com_sun_tools_javac_comp_Annotate$TypeAnnotate_h_
//$ class com.sun.tools.javac.comp.Annotate$TypeAnnotate
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
				namespace comp {
					class Annotate;
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
					class JCTree$JCAnnotatedType;
					class JCTree$JCBindingPattern;
					class JCTree$JCClassDecl;
					class JCTree$JCMethodDecl;
					class JCTree$JCNewArray;
					class JCTree$JCNewClass;
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
				namespace util {
					class JCDiagnostic$DiagnosticPosition;
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

class Annotate$TypeAnnotate : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Annotate$TypeAnnotate, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Annotate$TypeAnnotate();
	void init$(::com::sun::tools::javac::comp::Annotate* this$0, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* deferPos);
	virtual void visitAnnotatedType(::com::sun::tools::javac::tree::JCTree$JCAnnotatedType* tree) override;
	virtual void visitBindingPattern(::com::sun::tools::javac::tree::JCTree$JCBindingPattern* tree) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree) override;
	virtual void visitNewArray(::com::sun::tools::javac::tree::JCTree$JCNewArray* tree) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree) override;
	virtual void visitTypeParameter(::com::sun::tools::javac::tree::JCTree$JCTypeParameter* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	::com::sun::tools::javac::comp::Annotate* this$0 = nullptr;
	::com::sun::tools::javac::comp::Env* env = nullptr;
	::com::sun::tools::javac::code::Symbol* sym = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* deferPos = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Annotate$TypeAnnotate_h_