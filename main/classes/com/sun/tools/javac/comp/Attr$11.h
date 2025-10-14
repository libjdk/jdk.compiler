#ifndef _com_sun_tools_javac_comp_Attr$11_h_
#define _com_sun_tools_javac_comp_Attr$11_h_
//$ class com.sun.tools.javac.comp.Attr$11
//$ extends com.sun.tools.javac.comp.Resolve$InapplicableSymbolError

#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolError.h>

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
					class Resolve;
					class Resolve$MethodResolutionContext;
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
					class JCDiagnostic;
					class Pair;
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

class Attr$11 : public ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError {
	$class(Attr$11, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError)
public:
	Attr$11();
	using ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError::accept;
	using ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError::clone;
	void init$(::com::sun::tools::javac::comp::Attr* this$0, ::com::sun::tools::javac::comp::Resolve* x0, ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext* context, ::com::sun::tools::javac::code::Symbol* val$sym, ::com::sun::tools::javac::util::JCDiagnostic* val$diag);
	virtual ::com::sun::tools::javac::util::Pair* errCandidate() override;
	::com::sun::tools::javac::comp::Attr* this$0 = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic* val$diag = nullptr;
	::com::sun::tools::javac::code::Symbol* val$sym = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$11_h_