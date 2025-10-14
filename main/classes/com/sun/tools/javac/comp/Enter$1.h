#ifndef _com_sun_tools_javac_comp_Enter$1_h_
#define _com_sun_tools_javac_comp_Enter$1_h_
//$ class com.sun.tools.javac.comp.Enter$1
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
					class Enter;
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
					class JCTree$JCFieldAccess;
					class JCTree$JCIdent;
					class JCTree$JCPackageDecl;
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

class Enter$1 : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Enter$1, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Enter$1();
	void init$(::com::sun::tools::javac::comp::Enter* this$0);
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* tree) override;
	virtual void visitPackageDef(::com::sun::tools::javac::tree::JCTree$JCPackageDecl* tree) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* tree) override;
	::com::sun::tools::javac::comp::Enter* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol* currentPackage = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Enter$1_h_