#ifndef _com_sun_tools_javac_comp_Resolve$MethodCheck_h_
#define _com_sun_tools_javac_comp_Resolve$MethodCheck_h_
//$ interface com.sun.tools.javac.comp.Resolve$MethodCheck
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class DeferredAttr$DeferredAttrContext;
					class Env;
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

class $export Resolve$MethodCheck : public ::java::lang::Object {
	$interface(Resolve$MethodCheck, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void argumentsAcceptable(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* formals, ::com::sun::tools::javac::util::Warner* warn) {}
	virtual ::com::sun::tools::javac::comp::Resolve$MethodCheck* mostSpecificCheck(::com::sun::tools::javac::util::List* actuals) {return nullptr;}
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$MethodCheck_h_