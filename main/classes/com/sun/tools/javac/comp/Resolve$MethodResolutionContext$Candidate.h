#ifndef _com_sun_tools_javac_comp_Resolve$MethodResolutionContext$Candidate_h_
#define _com_sun_tools_javac_comp_Resolve$MethodResolutionContext$Candidate_h_
//$ class com.sun.tools.javac.comp.Resolve$MethodResolutionContext$Candidate
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
					class Resolve$MethodResolutionContext;
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
					class JCDiagnostic;
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

class $export Resolve$MethodResolutionContext$Candidate : public ::java::lang::Object {
	$class(Resolve$MethodResolutionContext$Candidate, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Resolve$MethodResolutionContext$Candidate();
	void init$(::com::sun::tools::javac::comp::Resolve$MethodResolutionContext* this$1, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* step, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::util::JCDiagnostic* details, ::com::sun::tools::javac::code::Type* mtype);
	virtual bool isApplicable();
	::com::sun::tools::javac::comp::Resolve$MethodResolutionContext* this$1 = nullptr;
	::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* step = nullptr;
	::com::sun::tools::javac::code::Symbol* sym = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic* details = nullptr;
	::com::sun::tools::javac::code::Type* mtype = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$MethodResolutionContext$Candidate_h_