#ifndef _com_sun_tools_javac_comp_Attr$TargetInfo_h_
#define _com_sun_tools_javac_comp_Attr$TargetInfo_h_
//$ class com.sun.tools.javac.comp.Attr$TargetInfo
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
					class Attr;
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

class $export Attr$TargetInfo : public ::java::lang::Object {
	$class(Attr$TargetInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Attr$TargetInfo();
	void init$(::com::sun::tools::javac::comp::Attr* this$0, ::com::sun::tools::javac::code::Type* target, ::com::sun::tools::javac::code::Type* descriptor);
	::com::sun::tools::javac::comp::Attr* this$0 = nullptr;
	::com::sun::tools::javac::code::Type* target = nullptr;
	::com::sun::tools::javac::code::Type* descriptor = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$TargetInfo_h_