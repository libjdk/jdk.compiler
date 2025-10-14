#ifndef _com_sun_tools_javac_util_Log$DiagnosticHandler_h_
#define _com_sun_tools_javac_util_Log$DiagnosticHandler_h_
//$ class com.sun.tools.javac.util.Log$DiagnosticHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import Log$DiagnosticHandler : public ::java::lang::Object {
	$class(Log$DiagnosticHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Log$DiagnosticHandler();
	void init$();
	virtual void install(::com::sun::tools::javac::util::Log* log);
	virtual void report(::com::sun::tools::javac::util::JCDiagnostic* diag) {}
	::com::sun::tools::javac::util::Log$DiagnosticHandler* prev = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Log$DiagnosticHandler_h_