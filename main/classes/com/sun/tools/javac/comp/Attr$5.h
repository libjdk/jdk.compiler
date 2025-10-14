#ifndef _com_sun_tools_javac_comp_Attr$5_h_
#define _com_sun_tools_javac_comp_Attr$5_h_
//$ class com.sun.tools.javac.comp.Attr$5
//$ extends com.sun.tools.javac.comp.Check$NestedCheckContext

#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>

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

class Attr$5 : public ::com::sun::tools::javac::comp::Check$NestedCheckContext {
	$class(Attr$5, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Check$NestedCheckContext)
public:
	Attr$5();
	void init$(::com::sun::tools::javac::comp::Attr* this$0, ::com::sun::tools::javac::comp::Check$CheckContext* enclosingContext);
	virtual void report(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic* details) override;
	::com::sun::tools::javac::comp::Attr* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$5_h_