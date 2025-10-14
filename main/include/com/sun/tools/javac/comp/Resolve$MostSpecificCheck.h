#ifndef _com_sun_tools_javac_comp_Resolve$MostSpecificCheck_h_
#define _com_sun_tools_javac_comp_Resolve$MostSpecificCheck_h_
//$ class com.sun.tools.javac.comp.Resolve$MostSpecificCheck
//$ extends com.sun.tools.javac.comp.Resolve$MethodCheck

#include <com/sun/tools/javac/comp/Resolve$MethodCheck.h>

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
					class Attr$ResultInfo;
					class DeferredAttr$DeferredAttrContext;
					class Env;
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
					class List;
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

class $import Resolve$MostSpecificCheck : public ::com::sun::tools::javac::comp::Resolve$MethodCheck {
	$class(Resolve$MostSpecificCheck, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$MethodCheck)
public:
	Resolve$MostSpecificCheck();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::util::List* actuals);
	virtual void argumentsAcceptable(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext, ::com::sun::tools::javac::util::List* formals1, ::com::sun::tools::javac::util::List* formals2, ::com::sun::tools::javac::util::Warner* warn) override;
	virtual ::com::sun::tools::javac::comp::Attr$ResultInfo* methodCheckResult(::com::sun::tools::javac::code::Type* to, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext, ::com::sun::tools::javac::util::Warner* rsWarner, ::com::sun::tools::javac::code::Type* actual);
	virtual ::com::sun::tools::javac::comp::Resolve$MethodCheck* mostSpecificCheck(::com::sun::tools::javac::util::List* actuals) override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
	::com::sun::tools::javac::util::List* actuals = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$MostSpecificCheck_h_