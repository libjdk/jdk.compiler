#ifndef _com_sun_tools_javac_comp_Attr$RecoveryInfo$1_h_
#define _com_sun_tools_javac_comp_Attr$RecoveryInfo$1_h_
//$ class com.sun.tools.javac.comp.Attr$RecoveryInfo$1
//$ extends com.sun.tools.javac.comp.Check$NestedCheckContext

#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>

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
					class Attr;
					class Check$CheckContext;
					class DeferredAttr$DeferredAttrContext;
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

class Attr$RecoveryInfo$1 : public ::com::sun::tools::javac::comp::Check$NestedCheckContext {
	$class(Attr$RecoveryInfo$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Check$NestedCheckContext)
public:
	Attr$RecoveryInfo$1();
	void init$(::com::sun::tools::javac::comp::Check$CheckContext* enclosingContext, ::com::sun::tools::javac::comp::Attr* val$this$0, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* val$deferredAttrContext, ::com::sun::tools::javac::code::Type* val$pt);
	virtual bool compatible(::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* req, ::com::sun::tools::javac::util::Warner* warn) override;
	virtual ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext() override;
	virtual void report(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic* details) override;
	::com::sun::tools::javac::code::Type* val$pt = nullptr;
	::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* val$deferredAttrContext = nullptr;
	::com::sun::tools::javac::comp::Attr* val$this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$RecoveryInfo$1_h_