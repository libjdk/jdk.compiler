#ifndef _com_sun_tools_javac_util_AbstractLog_h_
#define _com_sun_tools_javac_util_AbstractLog_h_
//$ class com.sun.tools.javac.util.AbstractLog
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Lint$LintCategory;
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
					class DiagnosticSource;
					class JCDiagnostic;
					class JCDiagnostic$DiagnosticFlag;
					class JCDiagnostic$DiagnosticPosition;
					class JCDiagnostic$Error;
					class JCDiagnostic$Factory;
					class JCDiagnostic$Note;
					class JCDiagnostic$Warning;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
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

class $export AbstractLog : public ::java::lang::Object {
	$class(AbstractLog, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AbstractLog();
	void init$(::com::sun::tools::javac::util::JCDiagnostic$Factory* diags);
	virtual ::com::sun::tools::javac::util::DiagnosticSource* currentSource();
	virtual void directError($String* key, $ObjectArray* args) {}
	virtual void error($String* key, $ObjectArray* args);
	virtual void error(::com::sun::tools::javac::util::JCDiagnostic$Error* errorKey);
	virtual void error(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic$Error* errorKey);
	virtual void error(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag* flag, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic$Error* errorKey);
	virtual void error(int32_t pos, $String* key, $ObjectArray* args);
	virtual void error(int32_t pos, ::com::sun::tools::javac::util::JCDiagnostic$Error* errorKey);
	virtual void error(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag* flag, int32_t pos, ::com::sun::tools::javac::util::JCDiagnostic$Error* errorKey);
	virtual ::com::sun::tools::javac::util::DiagnosticSource* getSource(::javax::tools::JavaFileObject* file);
	virtual void mandatoryNote(::javax::tools::JavaFileObject* file, ::com::sun::tools::javac::util::JCDiagnostic$Note* noteKey);
	virtual void mandatoryWarning(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic$Warning* warningKey);
	virtual void mandatoryWarning(::com::sun::tools::javac::code::Lint$LintCategory* lc, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic$Warning* warningKey);
	virtual void note(::com::sun::tools::javac::util::JCDiagnostic$Note* noteKey);
	virtual void note(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic$Note* noteKey);
	virtual void note(int32_t pos, ::com::sun::tools::javac::util::JCDiagnostic$Note* noteKey);
	virtual void note(::javax::tools::JavaFileObject* file, ::com::sun::tools::javac::util::JCDiagnostic$Note* noteKey);
	virtual void report(::com::sun::tools::javac::util::JCDiagnostic* diagnostic) {}
	virtual ::javax::tools::JavaFileObject* useSource(::javax::tools::JavaFileObject* file);
	virtual void warning(::com::sun::tools::javac::util::JCDiagnostic$Warning* warningKey);
	virtual void warning(::com::sun::tools::javac::code::Lint$LintCategory* lc, ::com::sun::tools::javac::util::JCDiagnostic$Warning* warningKey);
	virtual void warning(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic$Warning* warningKey);
	virtual void warning(::com::sun::tools::javac::code::Lint$LintCategory* lc, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic$Warning* warningKey);
	virtual void warning(int32_t pos, ::com::sun::tools::javac::util::JCDiagnostic$Warning* warningKey);
	::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* wrap(int32_t pos);
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diags = nullptr;
	::com::sun::tools::javac::util::DiagnosticSource* source = nullptr;
	::java::util::Map* sourceMap = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_AbstractLog_h_