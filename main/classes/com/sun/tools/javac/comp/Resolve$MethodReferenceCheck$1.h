#ifndef _com_sun_tools_javac_comp_Resolve$MethodReferenceCheck$1_h_
#define _com_sun_tools_javac_comp_Resolve$MethodReferenceCheck$1_h_
//$ class com.sun.tools.javac.comp.Resolve$MethodReferenceCheck$1
//$ extends com.sun.tools.javac.comp.Resolve$MethodCheckContext

#include <com/sun/tools/javac/comp/Resolve$MethodCheckContext.h>

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
					class Resolve$MethodCheckDiag;
					class Resolve$MethodReferenceCheck;
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

class Resolve$MethodReferenceCheck$1 : public ::com::sun::tools::javac::comp::Resolve$MethodCheckContext {
	$class(Resolve$MethodReferenceCheck$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$MethodCheckContext)
public:
	Resolve$MethodReferenceCheck$1();
	void init$(::com::sun::tools::javac::comp::Resolve$MethodReferenceCheck* this$1, bool strict, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext, ::com::sun::tools::javac::util::Warner* rsWarner, bool val$varargsCheck);
	virtual bool compatible(::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* req, ::com::sun::tools::javac::util::Warner* warn) override;
	virtual void report(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic* details) override;
	::com::sun::tools::javac::comp::Resolve$MethodReferenceCheck* this$1 = nullptr;
	bool val$varargsCheck = false;
	::com::sun::tools::javac::comp::Resolve$MethodCheckDiag* methodDiag = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$MethodReferenceCheck$1_h_