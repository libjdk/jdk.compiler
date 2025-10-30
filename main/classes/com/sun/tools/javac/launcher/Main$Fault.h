#ifndef _com_sun_tools_javac_launcher_Main$Fault_h_
#define _com_sun_tools_javac_launcher_Main$Fault_h_
//$ class com.sun.tools.javac.launcher.Main$Fault
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {
					class Main;
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
					class JCDiagnostic$Error;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

class Main$Fault : public ::java::lang::Exception {
	$class(Main$Fault, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	Main$Fault();
	void init$(::com::sun::tools::javac::launcher::Main* this$0, ::com::sun::tools::javac::util::JCDiagnostic$Error* error);
	::com::sun::tools::javac::launcher::Main* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)1;
	Main$Fault(const Main$Fault& e);
	virtual void throw$() override;
	inline Main$Fault* operator ->() {
		return (Main$Fault*)throwing$;
	}
};

				} // launcher
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_launcher_Main$Fault_h_