#ifndef _com_sun_tools_javac_comp_Resolve$4$1_h_
#define _com_sun_tools_javac_comp_Resolve$4$1_h_
//$ class com.sun.tools.javac.comp.Resolve$4$1
//$ extends com.sun.tools.javac.comp.Resolve$MethodCheckContext

#include <com/sun/tools/javac/comp/Resolve$MethodCheckContext.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class DeferredAttr$DeferredAttrContext;
					class Resolve$4;
					class Resolve$MethodCheckDiag;
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

class Resolve$4$1 : public ::com::sun::tools::javac::comp::Resolve$MethodCheckContext {
	$class(Resolve$4$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$MethodCheckContext)
public:
	Resolve$4$1();
	void init$(::com::sun::tools::javac::comp::Resolve$4* this$1, bool strict, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext, ::com::sun::tools::javac::util::Warner* rsWarner, bool val$varargsCheck);
	virtual void report(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic* details) override;
	::com::sun::tools::javac::comp::Resolve$4* this$1 = nullptr;
	bool val$varargsCheck = false;
	::com::sun::tools::javac::comp::Resolve$MethodCheckDiag* methodDiag = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$4$1_h_