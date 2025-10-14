#ifndef _com_sun_tools_javac_comp_Resolve$2_h_
#define _com_sun_tools_javac_comp_Resolve$2_h_
//$ class com.sun.tools.javac.comp.Resolve$2
//$ extends com.sun.tools.javac.comp.Resolve$MethodCheck

#include <com/sun/tools/javac/comp/Resolve$MethodCheck.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
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

class Resolve$2 : public ::com::sun::tools::javac::comp::Resolve$MethodCheck {
	$class(Resolve$2, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$MethodCheck)
public:
	Resolve$2();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0);
	virtual void argumentsAcceptable(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* formals, ::com::sun::tools::javac::util::Warner* warn) override;
	virtual ::com::sun::tools::javac::comp::Resolve$MethodCheck* mostSpecificCheck(::com::sun::tools::javac::util::List* actuals) override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$2_h_