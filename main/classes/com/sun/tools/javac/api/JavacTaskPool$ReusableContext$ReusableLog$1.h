#ifndef _com_sun_tools_javac_api_JavacTaskPool$ReusableContext$ReusableLog$1_h_
#define _com_sun_tools_javac_api_JavacTaskPool$ReusableContext$ReusableLog$1_h_
//$ class com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog$1
//$ extends javax.tools.DiagnosticListener

#include <javax/tools/DiagnosticListener.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class JavacTaskPool$ReusableContext$ReusableLog;
				}
			}
		}
	}
}
namespace javax {
	namespace tools {
		class Diagnostic;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class JavacTaskPool$ReusableContext$ReusableLog$1 : public ::javax::tools::DiagnosticListener {
	$class(JavacTaskPool$ReusableContext$ReusableLog$1, $NO_CLASS_INIT, ::javax::tools::DiagnosticListener)
public:
	JavacTaskPool$ReusableContext$ReusableLog$1();
	void init$(::com::sun::tools::javac::api::JavacTaskPool$ReusableContext$ReusableLog* this$0);
	virtual void report(::javax::tools::Diagnostic* diagnostic) override;
	::com::sun::tools::javac::api::JavacTaskPool$ReusableContext$ReusableLog* this$0 = nullptr;
	::javax::tools::DiagnosticListener* cachedListener = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacTaskPool$ReusableContext$ReusableLog$1_h_