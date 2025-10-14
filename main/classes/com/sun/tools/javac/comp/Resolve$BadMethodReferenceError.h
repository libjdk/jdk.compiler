#ifndef _com_sun_tools_javac_comp_Resolve$BadMethodReferenceError_h_
#define _com_sun_tools_javac_comp_Resolve$BadMethodReferenceError_h_
//$ class com.sun.tools.javac.comp.Resolve$BadMethodReferenceError
//$ extends com.sun.tools.javac.comp.Resolve$StaticError

#include <com/sun/tools/javac/comp/Resolve$StaticError.h>

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

class $export Resolve$BadMethodReferenceError : public ::com::sun::tools::javac::comp::Resolve$StaticError {
	$class(Resolve$BadMethodReferenceError, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$StaticError)
public:
	Resolve$BadMethodReferenceError();
	using ::com::sun::tools::javac::comp::Resolve$StaticError::accept;
	using ::com::sun::tools::javac::comp::Resolve$StaticError::clone;
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::code::Symbol* sym, bool unboundLookup);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* getDiagnostic(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* dkind, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes) override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
	bool unboundLookup = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$BadMethodReferenceError_h_