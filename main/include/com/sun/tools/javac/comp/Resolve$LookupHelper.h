#ifndef _com_sun_tools_javac_comp_Resolve$LookupHelper_h_
#define _com_sun_tools_javac_comp_Resolve$LookupHelper_h_
//$ class com.sun.tools.javac.comp.Resolve$LookupHelper
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
					class Env;
					class Resolve;
					class Resolve$MethodResolutionPhase;
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
					class JCDiagnostic$DiagnosticPosition;
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

class $import Resolve$LookupHelper : public ::java::lang::Object {
	$class(Resolve$LookupHelper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Resolve$LookupHelper();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* maxPhase);
	virtual ::com::sun::tools::javac::code::Symbol* access(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::code::Symbol* sym) {return nullptr;}
	virtual void debug(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::code::Symbol* lookup(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* phase) {return nullptr;}
	bool shouldStop(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* phase);
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
	::com::sun::tools::javac::util::Name* name = nullptr;
	::com::sun::tools::javac::code::Type* site = nullptr;
	::com::sun::tools::javac::util::List* argtypes = nullptr;
	::com::sun::tools::javac::util::List* typeargtypes = nullptr;
	::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* maxPhase = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$LookupHelper_h_