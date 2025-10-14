#ifndef _com_sun_tools_javac_comp_Resolve$BadConstructorReferenceError_h_
#define _com_sun_tools_javac_comp_Resolve$BadConstructorReferenceError_h_
//$ class com.sun.tools.javac.comp.Resolve$BadConstructorReferenceError
//$ extends com.sun.tools.javac.comp.Resolve$InvalidSymbolError

#include <com/sun/tools/javac/comp/Resolve$InvalidSymbolError.h>

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

class $export Resolve$BadConstructorReferenceError : public ::com::sun::tools::javac::comp::Resolve$InvalidSymbolError {
	$class(Resolve$BadConstructorReferenceError, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$InvalidSymbolError)
public:
	Resolve$BadConstructorReferenceError();
	using ::com::sun::tools::javac::comp::Resolve$InvalidSymbolError::accept;
	using ::com::sun::tools::javac::comp::Resolve$InvalidSymbolError::clone;
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* getDiagnostic(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* dkind, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes) override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$BadConstructorReferenceError_h_