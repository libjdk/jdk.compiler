#ifndef _com_sun_tools_javac_util_Log$DefaultDiagnosticHandler_h_
#define _com_sun_tools_javac_util_Log$DefaultDiagnosticHandler_h_
//$ class com.sun.tools.javac.util.Log$DefaultDiagnosticHandler
//$ extends com.sun.tools.javac.util.Log$DiagnosticHandler

#include <com/sun/tools/javac/util/Log$DiagnosticHandler.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class JCDiagnostic;
					class Log;
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

class Log$DefaultDiagnosticHandler : public ::com::sun::tools::javac::util::Log$DiagnosticHandler {
	$class(Log$DefaultDiagnosticHandler, $NO_CLASS_INIT, ::com::sun::tools::javac::util::Log$DiagnosticHandler)
public:
	Log$DefaultDiagnosticHandler();
	void init$(::com::sun::tools::javac::util::Log* this$0);
	virtual void report(::com::sun::tools::javac::util::JCDiagnostic* diagnostic) override;
	::com::sun::tools::javac::util::Log* this$0 = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Log$DefaultDiagnosticHandler_h_