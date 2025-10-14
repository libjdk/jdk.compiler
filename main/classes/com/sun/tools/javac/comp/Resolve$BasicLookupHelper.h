#ifndef _com_sun_tools_javac_comp_Resolve$BasicLookupHelper_h_
#define _com_sun_tools_javac_comp_Resolve$BasicLookupHelper_h_
//$ class com.sun.tools.javac.comp.Resolve$BasicLookupHelper
//$ extends com.sun.tools.javac.comp.Resolve$LookupHelper

#include <com/sun/tools/javac/comp/Resolve$LookupHelper.h>

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

class $export Resolve$BasicLookupHelper : public ::com::sun::tools::javac::comp::Resolve$LookupHelper {
	$class(Resolve$BasicLookupHelper, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$LookupHelper)
public:
	Resolve$BasicLookupHelper();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes);
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* maxPhase);
	virtual ::com::sun::tools::javac::code::Symbol* access(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::code::Symbol* sym) override;
	virtual void debug(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* sym) override;
	virtual ::com::sun::tools::javac::code::Symbol* doLookup(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* phase) {return nullptr;}
	virtual ::com::sun::tools::javac::code::Symbol* lookup(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* phase) override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$BasicLookupHelper_h_