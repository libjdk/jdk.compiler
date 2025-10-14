#ifndef _com_sun_tools_javac_util_Log$DeferredDiagnosticHandler_h_
#define _com_sun_tools_javac_util_Log$DeferredDiagnosticHandler_h_
//$ class com.sun.tools.javac.util.Log$DeferredDiagnosticHandler
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
namespace java {
	namespace util {
		class Queue;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Predicate;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export Log$DeferredDiagnosticHandler : public ::com::sun::tools::javac::util::Log$DiagnosticHandler {
	$class(Log$DeferredDiagnosticHandler, $NO_CLASS_INIT, ::com::sun::tools::javac::util::Log$DiagnosticHandler)
public:
	Log$DeferredDiagnosticHandler();
	void init$(::com::sun::tools::javac::util::Log* log);
	void init$(::com::sun::tools::javac::util::Log* log, ::java::util::function::Predicate* filter);
	virtual ::java::util::Queue* getDiagnostics();
	static bool lambda$reportDeferredDiagnostics$0(::com::sun::tools::javac::util::JCDiagnostic* d);
	virtual void report(::com::sun::tools::javac::util::JCDiagnostic* diag) override;
	virtual void reportDeferredDiagnostics();
	virtual void reportDeferredDiagnostics(::java::util::function::Predicate* accepter);
	::java::util::Queue* deferred = nullptr;
	::java::util::function::Predicate* filter = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Log$DeferredDiagnosticHandler_h_