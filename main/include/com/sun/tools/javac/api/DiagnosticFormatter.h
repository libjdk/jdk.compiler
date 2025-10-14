#ifndef _com_sun_tools_javac_api_DiagnosticFormatter_h_
#define _com_sun_tools_javac_api_DiagnosticFormatter_h_
//$ interface com.sun.tools.javac.api.DiagnosticFormatter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class DiagnosticFormatter$Configuration;
					class DiagnosticFormatter$PositionKind;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Locale;
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

class $import DiagnosticFormatter : public ::java::lang::Object {
	$interface(DiagnosticFormatter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool displaySource(::javax::tools::Diagnostic* diag) {return false;}
	virtual $String* format(::javax::tools::Diagnostic* diag, ::java::util::Locale* l) {return nullptr;}
	virtual $String* formatKind(::javax::tools::Diagnostic* diag, ::java::util::Locale* l) {return nullptr;}
	virtual $String* formatMessage(::javax::tools::Diagnostic* diag, ::java::util::Locale* l) {return nullptr;}
	virtual $String* formatPosition(::javax::tools::Diagnostic* diag, ::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind* pk, ::java::util::Locale* l) {return nullptr;}
	virtual $String* formatSource(::javax::tools::Diagnostic* diag, bool fullname, ::java::util::Locale* l) {return nullptr;}
	virtual ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration* getConfiguration() {return nullptr;}
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_DiagnosticFormatter_h_