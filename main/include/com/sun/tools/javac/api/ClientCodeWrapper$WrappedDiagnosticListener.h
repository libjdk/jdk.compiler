#ifndef _com_sun_tools_javac_api_ClientCodeWrapper$WrappedDiagnosticListener_h_
#define _com_sun_tools_javac_api_ClientCodeWrapper$WrappedDiagnosticListener_h_
//$ class com.sun.tools.javac.api.ClientCodeWrapper$WrappedDiagnosticListener
//$ extends javax.tools.DiagnosticListener

#include <javax/tools/DiagnosticListener.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class ClientCodeWrapper;
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

class $import ClientCodeWrapper$WrappedDiagnosticListener : public ::javax::tools::DiagnosticListener {
	$class(ClientCodeWrapper$WrappedDiagnosticListener, $NO_CLASS_INIT, ::javax::tools::DiagnosticListener)
public:
	ClientCodeWrapper$WrappedDiagnosticListener();
	void init$(::com::sun::tools::javac::api::ClientCodeWrapper* this$0, ::javax::tools::DiagnosticListener* clientDiagnosticListener);
	virtual void report(::javax::tools::Diagnostic* diagnostic) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::api::ClientCodeWrapper* this$0 = nullptr;
	::javax::tools::DiagnosticListener* clientDiagnosticListener = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_ClientCodeWrapper$WrappedDiagnosticListener_h_