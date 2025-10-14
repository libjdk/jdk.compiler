#ifndef _com_sun_tools_javac_comp_Resolve$11_h_
#define _com_sun_tools_javac_comp_Resolve$11_h_
//$ class com.sun.tools.javac.comp.Resolve$11
//$ extends com.sun.tools.javac.comp.Resolve$BasicLookupHelper

#include <com/sun/tools/javac/comp/Resolve$BasicLookupHelper.h>

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

class Resolve$11 : public ::com::sun::tools::javac::comp::Resolve$BasicLookupHelper {
	$class(Resolve$11, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$BasicLookupHelper)
public:
	Resolve$11();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes);
	virtual ::com::sun::tools::javac::code::Symbol* access(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::code::Symbol* sym) override;
	virtual ::com::sun::tools::javac::code::Symbol* doLookup(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* phase) override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$11_h_