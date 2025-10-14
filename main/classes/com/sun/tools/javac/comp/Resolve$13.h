#ifndef _com_sun_tools_javac_comp_Resolve$13_h_
#define _com_sun_tools_javac_comp_Resolve$13_h_
//$ class com.sun.tools.javac.comp.Resolve$13
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

class Resolve$13 : public ::com::sun::tools::javac::comp::Resolve$BasicLookupHelper {
	$class(Resolve$13, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$BasicLookupHelper)
public:
	Resolve$13();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* val$pos);
	virtual ::com::sun::tools::javac::code::Symbol* doLookup(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* phase) override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* val$pos = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$13_h_