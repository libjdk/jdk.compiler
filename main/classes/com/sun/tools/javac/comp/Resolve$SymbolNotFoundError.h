#ifndef _com_sun_tools_javac_comp_Resolve$SymbolNotFoundError_h_
#define _com_sun_tools_javac_comp_Resolve$SymbolNotFoundError_h_
//$ class com.sun.tools.javac.comp.Resolve$SymbolNotFoundError
//$ extends com.sun.tools.javac.comp.Resolve$ResolveError

#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Kinds$Kind;
					class Kinds$KindName;
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

class $export Resolve$SymbolNotFoundError : public ::com::sun::tools::javac::comp::Resolve$ResolveError {
	$class(Resolve$SymbolNotFoundError, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$ResolveError)
public:
	Resolve$SymbolNotFoundError();
	using ::com::sun::tools::javac::comp::Resolve$ResolveError::accept;
	using ::com::sun::tools::javac::comp::Resolve$ResolveError::clone;
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::code::Kinds$Kind* kind);
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::code::Kinds$Kind* kind, $String* debugName);
	$Object* args(::com::sun::tools::javac::util::List* args);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* getDiagnostic(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* dkind, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes) override;
	$String* getErrorKey(::com::sun::tools::javac::code::Kinds$KindName* kindname, bool hasTypeArgs, bool hasLocation);
	::com::sun::tools::javac::util::JCDiagnostic* getLocationDiag(::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::code::Type* site);
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$SymbolNotFoundError_h_