#ifndef _com_sun_tools_javac_comp_Resolve$AmbiguityError_h_
#define _com_sun_tools_javac_comp_Resolve$AmbiguityError_h_
//$ class com.sun.tools.javac.comp.Resolve$AmbiguityError
//$ extends com.sun.tools.javac.comp.Resolve$ResolveError

#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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

class $export Resolve$AmbiguityError : public ::com::sun::tools::javac::comp::Resolve$ResolveError {
	$class(Resolve$AmbiguityError, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$ResolveError)
public:
	Resolve$AmbiguityError();
	using ::com::sun::tools::javac::comp::Resolve$ResolveError::accept;
	using ::com::sun::tools::javac::comp::Resolve$ResolveError::clone;
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::code::Symbol* sym1, ::com::sun::tools::javac::code::Symbol* sym2);
	virtual ::com::sun::tools::javac::code::Symbol* access(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol$TypeSymbol* location) override;
	virtual ::com::sun::tools::javac::comp::Resolve$AmbiguityError* addAmbiguousSymbol(::com::sun::tools::javac::code::Symbol* s);
	virtual bool exists() override;
	::com::sun::tools::javac::util::List* flatten(::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* getDiagnostic(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* dkind, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes) override;
	virtual ::com::sun::tools::javac::code::Symbol* mergeAbstracts(::com::sun::tools::javac::code::Type* site);
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
	::com::sun::tools::javac::util::List* ambiguousSyms = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$AmbiguityError_h_