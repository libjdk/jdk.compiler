#ifndef _com_sun_tools_javac_util_Log$DiscardDiagnosticHandler_h_
#define _com_sun_tools_javac_util_Log$DiscardDiagnosticHandler_h_
//$ class com.sun.tools.javac.util.Log$DiscardDiagnosticHandler
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

class $import Log$DiscardDiagnosticHandler : public ::com::sun::tools::javac::util::Log$DiagnosticHandler {
	$class(Log$DiscardDiagnosticHandler, $NO_CLASS_INIT, ::com::sun::tools::javac::util::Log$DiagnosticHandler)
public:
	Log$DiscardDiagnosticHandler();
	void init$(::com::sun::tools::javac::util::Log* log);
	virtual void report(::com::sun::tools::javac::util::JCDiagnostic* diag) override;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Log$DiscardDiagnosticHandler_h_