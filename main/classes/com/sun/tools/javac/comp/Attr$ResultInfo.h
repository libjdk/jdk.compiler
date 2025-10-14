#ifndef _com_sun_tools_javac_comp_Attr$ResultInfo_h_
#define _com_sun_tools_javac_comp_Attr$ResultInfo_h_
//$ class com.sun.tools.javac.comp.Attr$ResultInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Kinds$KindSelector;
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

class $export Attr$ResultInfo : public ::java::lang::Object {
	$class(Attr$ResultInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Attr$ResultInfo();
	void init$(::com::sun::tools::javac::comp::Attr* this$0, ::com::sun::tools::javac::code::Kinds$KindSelector* pkind, ::com::sun::tools::javac::code::Type* pt);
	void init$(::com::sun::tools::javac::comp::Attr* this$0, ::com::sun::tools::javac::code::Kinds$KindSelector* pkind, ::com::sun::tools::javac::code::Type* pt, ::com::sun::tools::javac::comp::Attr$CheckMode* checkMode);
	void init$(::com::sun::tools::javac::comp::Attr* this$0, ::com::sun::tools::javac::code::Kinds$KindSelector* pkind, ::com::sun::tools::javac::code::Type* pt, ::com::sun::tools::javac::comp::Check$CheckContext* checkContext);
	void init$(::com::sun::tools::javac::comp::Attr* this$0, ::com::sun::tools::javac::code::Kinds$KindSelector* pkind, ::com::sun::tools::javac::code::Type* pt, ::com::sun::tools::javac::comp::Check$CheckContext* checkContext, ::com::sun::tools::javac::comp::Attr$CheckMode* checkMode);
	virtual ::com::sun::tools::javac::code::Type* check(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* found);
	virtual ::com::sun::tools::javac::comp::Attr$ResultInfo* dup(::com::sun::tools::javac::code::Type* newPt);
	virtual ::com::sun::tools::javac::comp::Attr$ResultInfo* dup(::com::sun::tools::javac::comp::Check$CheckContext* newContext);
	virtual ::com::sun::tools::javac::comp::Attr$ResultInfo* dup(::com::sun::tools::javac::code::Type* newPt, ::com::sun::tools::javac::comp::Check$CheckContext* newContext);
	virtual ::com::sun::tools::javac::comp::Attr$ResultInfo* dup(::com::sun::tools::javac::code::Type* newPt, ::com::sun::tools::javac::comp::Check$CheckContext* newContext, ::com::sun::tools::javac::comp::Attr$CheckMode* newMode);
	virtual ::com::sun::tools::javac::comp::Attr$ResultInfo* dup(::com::sun::tools::javac::comp::Attr$CheckMode* newMode);
	virtual bool needsArgumentAttr(::com::sun::tools::javac::tree::JCTree* tree);
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::Attr* this$0 = nullptr;
	::com::sun::tools::javac::code::Kinds$KindSelector* pkind = nullptr;
	::com::sun::tools::javac::code::Type* pt = nullptr;
	::com::sun::tools::javac::comp::Check$CheckContext* checkContext = nullptr;
	::com::sun::tools::javac::comp::Attr$CheckMode* checkMode = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$ResultInfo_h_