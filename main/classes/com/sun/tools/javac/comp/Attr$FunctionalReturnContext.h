#ifndef _com_sun_tools_javac_comp_Attr$FunctionalReturnContext_h_
#define _com_sun_tools_javac_comp_Attr$FunctionalReturnContext_h_
//$ class com.sun.tools.javac.comp.Attr$FunctionalReturnContext
//$ extends com.sun.tools.javac.comp.Check$NestedCheckContext

#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>

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
				namespace util {
					class JCDiagnostic;
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

class $export Attr$FunctionalReturnContext : public ::com::sun::tools::javac::comp::Check$NestedCheckContext {
	$class(Attr$FunctionalReturnContext, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Check$NestedCheckContext)
public:
	Attr$FunctionalReturnContext();
	void init$(::com::sun::tools::javac::comp::Attr* this$0, ::com::sun::tools::javac::comp::Check$CheckContext* enclosingContext);
	virtual bool compatible(::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* req, ::com::sun::tools::javac::util::Warner* warn) override;
	virtual void report(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic* details) override;
	::com::sun::tools::javac::comp::Attr* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$FunctionalReturnContext_h_