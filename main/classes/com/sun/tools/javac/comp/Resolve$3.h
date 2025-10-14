#ifndef _com_sun_tools_javac_comp_Resolve$3_h_
#define _com_sun_tools_javac_comp_Resolve$3_h_
//$ class com.sun.tools.javac.comp.Resolve$3
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
					class DeferredAttr$DeferredAttrContext;
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

class Resolve$3 : public ::com::sun::tools::javac::comp::Resolve$AbstractMethodCheck {
	$class(Resolve$3, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$AbstractMethodCheck)
public:
	Resolve$3();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0);
	virtual void checkArg(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, bool varargs, ::com::sun::tools::javac::code::Type* actual, ::com::sun::tools::javac::code::Type* formal, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext, ::com::sun::tools::javac::util::Warner* warn) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$3_h_