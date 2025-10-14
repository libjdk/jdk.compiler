#ifndef _com_sun_tools_javac_comp_Resolve$MethodCheckContext_h_
#define _com_sun_tools_javac_comp_Resolve$MethodCheckContext_h_
//$ class com.sun.tools.javac.comp.Resolve$MethodCheckContext
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

class $import Resolve$MethodCheckContext : public ::com::sun::tools::javac::comp::Check$CheckContext {
	$class(Resolve$MethodCheckContext, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Check$CheckContext)
public:
	Resolve$MethodCheckContext();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, bool strict, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext, ::com::sun::tools::javac::util::Warner* rsWarner);
	virtual ::com::sun::tools::javac::util::Warner* checkWarner(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* req) override;
	virtual bool compatible(::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* req, ::com::sun::tools::javac::util::Warner* warn) override;
	virtual ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext() override;
	virtual ::com::sun::tools::javac::comp::InferenceContext* inferenceContext() override;
	virtual void report(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic* details) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
	bool strict = false;
	::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext$ = nullptr;
	::com::sun::tools::javac::util::Warner* rsWarner = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$MethodCheckContext_h_