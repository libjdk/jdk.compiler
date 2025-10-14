#ifndef _com_sun_tools_javac_comp_Resolve$InapplicableSymbolError_h_
#define _com_sun_tools_javac_comp_Resolve$InapplicableSymbolError_h_
//$ class com.sun.tools.javac.comp.Resolve$InapplicableSymbolError
//$ extends com.sun.tools.javac.comp.Resolve$ResolveError

#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Kinds$Kind;
					class Symbol;
					class Symbol$TypeSymbol;
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

class $export Resolve$InapplicableSymbolError : public ::com::sun::tools::javac::comp::Resolve$ResolveError {
	$class(Resolve$InapplicableSymbolError, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$ResolveError)
public:
	Resolve$InapplicableSymbolError();
	using ::com::sun::tools::javac::comp::Resolve$ResolveError::accept;
	using ::com::sun::tools::javac::comp::Resolve$ResolveError::clone;
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext* context);
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::code::Kinds$Kind* kind, $String* debugName, ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext* context);
	virtual ::com::sun::tools::javac::code::Symbol* access(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol$TypeSymbol* location) override;
	virtual ::com::sun::tools::javac::util::Pair* errCandidate();
	virtual bool exists() override;
	virtual ::com::sun::tools::javac::util::JCDiagnostic* getDiagnostic(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* dkind, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
	::com::sun::tools::javac::comp::Resolve$MethodResolutionContext* resolveContext = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$InapplicableSymbolError_h_