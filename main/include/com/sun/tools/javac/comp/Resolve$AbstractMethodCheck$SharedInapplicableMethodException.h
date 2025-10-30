#ifndef _com_sun_tools_javac_comp_Resolve$AbstractMethodCheck$SharedInapplicableMethodException_h_
#define _com_sun_tools_javac_comp_Resolve$AbstractMethodCheck$SharedInapplicableMethodException_h_
//$ class com.sun.tools.javac.comp.Resolve$AbstractMethodCheck$SharedInapplicableMethodException
//$ extends com.sun.tools.javac.comp.Resolve$InapplicableMethodException

#include <com/sun/tools/javac/comp/Resolve$InapplicableMethodException.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Resolve$AbstractMethodCheck;
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

class $import Resolve$AbstractMethodCheck$SharedInapplicableMethodException : public ::com::sun::tools::javac::comp::Resolve$InapplicableMethodException {
	$class(Resolve$AbstractMethodCheck$SharedInapplicableMethodException, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$InapplicableMethodException)
public:
	Resolve$AbstractMethodCheck$SharedInapplicableMethodException();
	void init$(::com::sun::tools::javac::comp::Resolve$AbstractMethodCheck* this$1);
	virtual ::com::sun::tools::javac::comp::Resolve$AbstractMethodCheck$SharedInapplicableMethodException* setMessage(::com::sun::tools::javac::util::JCDiagnostic* details);
	::com::sun::tools::javac::comp::Resolve$AbstractMethodCheck* this$1 = nullptr;
	static const int64_t serialVersionUID = 0;
	Resolve$AbstractMethodCheck$SharedInapplicableMethodException(const Resolve$AbstractMethodCheck$SharedInapplicableMethodException& e);
	virtual void throw$() override;
	inline Resolve$AbstractMethodCheck$SharedInapplicableMethodException* operator ->() {
		return (Resolve$AbstractMethodCheck$SharedInapplicableMethodException*)throwing$;
	}
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$AbstractMethodCheck$SharedInapplicableMethodException_h_