#ifndef _com_sun_tools_javac_comp_Resolve$4_h_
#define _com_sun_tools_javac_comp_Resolve$4_h_
//$ class com.sun.tools.javac.comp.Resolve$4
//$ extends com.sun.tools.javac.comp.Resolve$AbstractMethodCheck

#include <com/sun/tools/javac/comp/Resolve$AbstractMethodCheck.h>

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
					class InferenceContext;
					class Resolve;
					class Resolve$MethodCheck;
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

class Resolve$4 : public ::com::sun::tools::javac::comp::Resolve$AbstractMethodCheck {
	$class(Resolve$4, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$AbstractMethodCheck)
public:
	Resolve$4();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0);
	virtual void argumentsAcceptable(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* formals, ::com::sun::tools::javac::util::Warner* warn) override;
	virtual void checkArg(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, bool varargs, ::com::sun::tools::javac::code::Type* actual, ::com::sun::tools::javac::code::Type* formal, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext, ::com::sun::tools::javac::util::Warner* warn) override;
	void lambda$varargsAccessible$0(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::comp::InferenceContext* solvedContext);
	::com::sun::tools::javac::comp::Attr$ResultInfo* methodCheckResult(bool varargsCheck, ::com::sun::tools::javac::code::Type* to, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext, ::com::sun::tools::javac::util::Warner* rsWarner);
	virtual ::com::sun::tools::javac::comp::Resolve$MethodCheck* mostSpecificCheck(::com::sun::tools::javac::util::List* actuals) override;
	virtual $String* toString() override;
	void varargsAccessible(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext);
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$4_h_