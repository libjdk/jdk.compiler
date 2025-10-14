#ifndef _com_sun_tools_javac_comp_Check$NestedCheckContext_h_
#define _com_sun_tools_javac_comp_Check$NestedCheckContext_h_
//$ class com.sun.tools.javac.comp.Check$NestedCheckContext
//$ extends com.sun.tools.javac.comp.Check$CheckContext

#include <com/sun/tools/javac/comp/Check$CheckContext.h>

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

class $export Check$NestedCheckContext : public ::com::sun::tools::javac::comp::Check$CheckContext {
	$class(Check$NestedCheckContext, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Check$CheckContext)
public:
	Check$NestedCheckContext();
	void init$(::com::sun::tools::javac::comp::Check$CheckContext* enclosingContext);
	virtual ::com::sun::tools::javac::util::Warner* checkWarner(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* req) override;
	virtual bool compatible(::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* req, ::com::sun::tools::javac::util::Warner* warn) override;
	virtual ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext() override;
	virtual ::com::sun::tools::javac::comp::InferenceContext* inferenceContext() override;
	virtual void report(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic* details) override;
	::com::sun::tools::javac::comp::Check$CheckContext* enclosingContext = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Check$NestedCheckContext_h_