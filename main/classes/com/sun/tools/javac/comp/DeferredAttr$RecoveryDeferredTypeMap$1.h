#ifndef _com_sun_tools_javac_comp_DeferredAttr$RecoveryDeferredTypeMap$1_h_
#define _com_sun_tools_javac_comp_DeferredAttr$RecoveryDeferredTypeMap$1_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap$1
//$ extends com.sun.tools.javac.comp.Attr$RecoveryInfo

#include <com/sun/tools/javac/comp/Attr$RecoveryInfo.h>

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
					class DeferredAttr$DeferredAttrContext;
					class DeferredAttr$RecoveryDeferredTypeMap;
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

class DeferredAttr$RecoveryDeferredTypeMap$1 : public ::com::sun::tools::javac::comp::Attr$RecoveryInfo {
	$class(DeferredAttr$RecoveryDeferredTypeMap$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Attr$RecoveryInfo)
public:
	DeferredAttr$RecoveryDeferredTypeMap$1();
	void init$(::com::sun::tools::javac::comp::DeferredAttr$RecoveryDeferredTypeMap* this$1, ::com::sun::tools::javac::comp::Attr* x0, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext, ::com::sun::tools::javac::code::Type* pt);
	virtual ::com::sun::tools::javac::code::Type* check(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* found) override;
	::com::sun::tools::javac::comp::DeferredAttr$RecoveryDeferredTypeMap* this$1 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$RecoveryDeferredTypeMap$1_h_