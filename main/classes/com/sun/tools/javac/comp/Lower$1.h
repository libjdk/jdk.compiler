#ifndef _com_sun_tools_javac_comp_Lower$1_h_
#define _com_sun_tools_javac_comp_Lower$1_h_
//$ class com.sun.tools.javac.comp.Lower$1
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$TypeSymbol;
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
					class Lower;
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
					class JCTree$JCClassDecl;
					class JCTree$JCMethodDecl;
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

class Lower$1 : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Lower$1, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Lower$1();
	void init$(::com::sun::tools::javac::comp::Lower* this$0);
	virtual void checkConflicts(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Symbol$TypeSymbol* c);
	void syntheticError(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* sym);
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* that) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* that) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* that) override;
	::com::sun::tools::javac::comp::Lower* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol$TypeSymbol* currentClass = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Lower$1_h_