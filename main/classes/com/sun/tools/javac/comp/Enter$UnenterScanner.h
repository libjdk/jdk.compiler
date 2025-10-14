#ifndef _com_sun_tools_javac_comp_Enter$UnenterScanner_h_
#define _com_sun_tools_javac_comp_Enter$UnenterScanner_h_
//$ class com.sun.tools.javac.comp.Enter$UnenterScanner
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ModuleSymbol;
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
					class JCTree$JCClassDecl;
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

class $export Enter$UnenterScanner : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Enter$UnenterScanner, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Enter$UnenterScanner();
	void init$(::com::sun::tools::javac::comp::Enter* this$0, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym);
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	::com::sun::tools::javac::comp::Enter* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Enter$UnenterScanner_h_