#ifndef _com_sun_tools_javac_comp_Attr$12_h_
#define _com_sun_tools_javac_comp_Attr$12_h_
//$ class com.sun.tools.javac.comp.Attr$12
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
					class Attr;
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

class Attr$12 : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Attr$12, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Attr$12();
	void init$(::com::sun::tools::javac::comp::Attr* this$0, ::com::sun::tools::javac::code::Symbol* val$pkg);
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* that) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* that) override;
	::com::sun::tools::javac::comp::Attr* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol* val$pkg = nullptr;
	::com::sun::tools::javac::code::Symbol* packge = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$12_h_