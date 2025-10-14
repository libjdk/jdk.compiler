#ifndef _com_sun_tools_javac_util_MandatoryWarningHandler_h_
#define _com_sun_tools_javac_util_MandatoryWarningHandler_h_
//$ class com.sun.tools.javac.util.MandatoryWarningHandler
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Lint$LintCategory;
					class Source;
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
					class JCDiagnostic$DiagnosticPosition;
					class JCDiagnostic$Warning;
					class Log;
					class MandatoryWarningHandler$DeferredDiagnosticKind;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import MandatoryWarningHandler : public ::java::lang::Object {
	$class(MandatoryWarningHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MandatoryWarningHandler();
	void init$(::com::sun::tools::javac::util::Log* log, ::com::sun::tools::javac::code::Source* source, bool verbose, bool enforceMandatory, $String* prefix, ::com::sun::tools::javac::code::Lint$LintCategory* lc);
	virtual void clear();
	void logMandatoryNote(::javax::tools::JavaFileObject* file, $String* msg, $ObjectArray* args);
	void logMandatoryWarning(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic$Warning* warnKey);
	virtual void report(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic$Warning* warnKey);
	virtual void reportDeferredDiagnostic();
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::code::Source* source = nullptr;
	bool verbose = false;
	$String* prefix = nullptr;
	::java::util::Set* sourcesWithReportedWarnings = nullptr;
	::com::sun::tools::javac::util::MandatoryWarningHandler$DeferredDiagnosticKind* deferredDiagnosticKind = nullptr;
	::javax::tools::JavaFileObject* deferredDiagnosticSource = nullptr;
	$Object* deferredDiagnosticArg = nullptr;
	bool enforceMandatory = false;
	::com::sun::tools::javac::code::Lint$LintCategory* lintCategory = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_MandatoryWarningHandler_h_