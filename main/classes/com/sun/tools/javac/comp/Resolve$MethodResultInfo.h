#ifndef _com_sun_tools_javac_comp_Resolve$MethodResultInfo_h_
#define _com_sun_tools_javac_comp_Resolve$MethodResultInfo_h_
//$ class com.sun.tools.javac.comp.Resolve$MethodResultInfo
//$ extends com.sun.tools.javac.comp.Attr$ResultInfo

#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>

#pragma push_macro("U")
#undef U

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
					class Check$CheckContext;
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

class $export Resolve$MethodResultInfo : public ::com::sun::tools::javac::comp::Attr$ResultInfo {
	$class(Resolve$MethodResultInfo, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Attr$ResultInfo)
public:
	Resolve$MethodResultInfo();
	using ::com::sun::tools::javac::comp::Attr$ResultInfo::dup;
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::code::Type* pt, ::com::sun::tools::javac::comp::Check$CheckContext* checkContext);
	::com::sun::tools::javac::code::Type* U(::com::sun::tools::javac::code::Type* found);
	virtual ::com::sun::tools::javac::code::Type* check(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* found) override;
	virtual ::com::sun::tools::javac::comp::Resolve$MethodResultInfo* dup(::com::sun::tools::javac::code::Type* newPt) override;
	virtual ::com::sun::tools::javac::comp::Attr$ResultInfo* dup(::com::sun::tools::javac::comp::Check$CheckContext* newContext) override;
	virtual ::com::sun::tools::javac::comp::Attr$ResultInfo* dup(::com::sun::tools::javac::code::Type* newPt, ::com::sun::tools::javac::comp::Check$CheckContext* newContext) override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("U")

#endif // _com_sun_tools_javac_comp_Resolve$MethodResultInfo_h_