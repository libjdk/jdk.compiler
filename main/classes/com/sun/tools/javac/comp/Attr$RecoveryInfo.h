#ifndef _com_sun_tools_javac_comp_Attr$RecoveryInfo_h_
#define _com_sun_tools_javac_comp_Attr$RecoveryInfo_h_
//$ class com.sun.tools.javac.comp.Attr$RecoveryInfo
//$ extends com.sun.tools.javac.comp.Attr$ResultInfo

#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>

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

class $export Attr$RecoveryInfo : public ::com::sun::tools::javac::comp::Attr$ResultInfo {
	$class(Attr$RecoveryInfo, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Attr$ResultInfo)
public:
	Attr$RecoveryInfo();
	void init$(::com::sun::tools::javac::comp::Attr* this$0, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext);
	void init$(::com::sun::tools::javac::comp::Attr* this$0, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext, ::com::sun::tools::javac::code::Type* pt);
	::com::sun::tools::javac::comp::Attr* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$RecoveryInfo_h_