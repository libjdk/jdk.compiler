#ifndef _com_sun_tools_javac_comp_Resolve$DiamondError_h_
#define _com_sun_tools_javac_comp_Resolve$DiamondError_h_
//$ class com.sun.tools.javac.comp.Resolve$DiamondError
//$ extends com.sun.tools.javac.comp.Resolve$InapplicableSymbolError

#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolError.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Type;
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
					class JCDiagnostic$DiagnosticPosition;
					class JCDiagnostic$DiagnosticType;
					class List;
					class Name;
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

class $export Resolve$DiamondError : public ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError {
	$class(Resolve$DiamondError, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError)
public:
	Resolve$DiamondError();
	using ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError::accept;
	using ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError::clone;
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext* context);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* getDetails();
	virtual ::com::sun::tools::javac::util::JCDiagnostic* getDiagnostic(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* dkind, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes) override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol* sym = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$DiamondError_h_