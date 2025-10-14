#ifndef _com_sun_tools_javac_comp_Attr$MethodAttrInfo_h_
#define _com_sun_tools_javac_comp_Attr$MethodAttrInfo_h_
//$ class com.sun.tools.javac.comp.Attr$MethodAttrInfo
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
					class Attr$CheckMode;
					class Check$CheckContext;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree;
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

class $export Attr$MethodAttrInfo : public ::com::sun::tools::javac::comp::Attr$ResultInfo {
	$class(Attr$MethodAttrInfo, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Attr$ResultInfo)
public:
	Attr$MethodAttrInfo();
	void init$(::com::sun::tools::javac::comp::Attr* this$0);
	void init$(::com::sun::tools::javac::comp::Attr* this$0, ::com::sun::tools::javac::comp::Check$CheckContext* checkContext);
	virtual ::com::sun::tools::javac::comp::Attr$ResultInfo* dup(::com::sun::tools::javac::code::Type* newPt) override;
	virtual ::com::sun::tools::javac::comp::Attr$ResultInfo* dup(::com::sun::tools::javac::comp::Check$CheckContext* newContext) override;
	virtual ::com::sun::tools::javac::comp::Attr$ResultInfo* dup(::com::sun::tools::javac::code::Type* newPt, ::com::sun::tools::javac::comp::Check$CheckContext* newContext) override;
	virtual ::com::sun::tools::javac::comp::Attr$ResultInfo* dup(::com::sun::tools::javac::code::Type* newPt, ::com::sun::tools::javac::comp::Check$CheckContext* newContext, ::com::sun::tools::javac::comp::Attr$CheckMode* newMode) override;
	virtual ::com::sun::tools::javac::comp::Attr$ResultInfo* dup(::com::sun::tools::javac::comp::Attr$CheckMode* newMode) override;
	virtual bool needsArgumentAttr(::com::sun::tools::javac::tree::JCTree* tree) override;
	::com::sun::tools::javac::comp::Attr* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$MethodAttrInfo_h_