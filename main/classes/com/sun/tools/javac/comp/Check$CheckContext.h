#ifndef _com_sun_tools_javac_comp_Check$CheckContext_h_
#define _com_sun_tools_javac_comp_Check$CheckContext_h_
//$ interface com.sun.tools.javac.comp.Check$CheckContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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
					class DeferredAttr$DeferredAttrContext;
					class InferenceContext;
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
					class Warner;
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

class $export Check$CheckContext : public ::java::lang::Object {
	$interface(Check$CheckContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::tools::javac::util::Warner* checkWarner(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* req) {return nullptr;}
	virtual bool compatible(::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* req, ::com::sun::tools::javac::util::Warner* warn) {return false;}
	virtual ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext() {return nullptr;}
	virtual ::com::sun::tools::javac::comp::InferenceContext* inferenceContext() {return nullptr;}
	virtual void report(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic* details) {}
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Check$CheckContext_h_