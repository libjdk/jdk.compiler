#ifndef _com_sun_tools_javac_comp_Attr$2_h_
#define _com_sun_tools_javac_comp_Attr$2_h_
//$ class com.sun.tools.javac.comp.Attr$2
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

class Attr$2 : public ::com::sun::tools::javac::comp::Check$NestedCheckContext {
	$class(Attr$2, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Check$NestedCheckContext)
public:
	Attr$2();
	void init$(::com::sun::tools::javac::comp::Attr* this$0, ::com::sun::tools::javac::comp::Check$CheckContext* enclosingContext);
	virtual void report(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic* details) override;
	::com::sun::tools::javac::comp::Attr* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$2_h_