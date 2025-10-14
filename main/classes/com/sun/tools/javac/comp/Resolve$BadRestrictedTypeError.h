#ifndef _com_sun_tools_javac_comp_Resolve$BadRestrictedTypeError_h_
#define _com_sun_tools_javac_comp_Resolve$BadRestrictedTypeError_h_
//$ class com.sun.tools.javac.comp.Resolve$BadRestrictedTypeError
//$ extends com.sun.tools.javac.comp.Resolve$ResolveError

#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>

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

class $export Resolve$BadRestrictedTypeError : public ::com::sun::tools::javac::comp::Resolve$ResolveError {
	$class(Resolve$BadRestrictedTypeError, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$ResolveError)
public:
	Resolve$BadRestrictedTypeError();
	using ::com::sun::tools::javac::comp::Resolve$ResolveError::accept;
	using ::com::sun::tools::javac::comp::Resolve$ResolveError::clone;
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::util::Name* typeName);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* getDiagnostic(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* dkind, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes) override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
	::com::sun::tools::javac::util::Name* typeName = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$BadRestrictedTypeError_h_