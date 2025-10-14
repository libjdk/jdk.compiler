#ifndef _com_sun_tools_javac_util_BasicDiagnosticFormatter_h_
#define _com_sun_tools_javac_util_BasicDiagnosticFormatter_h_
//$ class com.sun.tools.javac.util.BasicDiagnosticFormatter
//$ extends com.sun.tools.javac.util.AbstractDiagnosticFormatter

#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class DiagnosticFormatter$Configuration;
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
					class JCDiagnostic;
					class JavacMessages;
					class Options;
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
				namespace util {

class $export BasicDiagnosticFormatter : public ::com::sun::tools::javac::util::AbstractDiagnosticFormatter {
	$class(BasicDiagnosticFormatter, $NO_CLASS_INIT, ::com::sun::tools::javac::util::AbstractDiagnosticFormatter)
public:
	BasicDiagnosticFormatter();
	void init$(::com::sun::tools::javac::util::Options* options, ::com::sun::tools::javac::util::JavacMessages* msgs);
	void init$(::com::sun::tools::javac::util::JavacMessages* msgs);
	virtual $String* addSourceLineIfNeeded(::com::sun::tools::javac::util::JCDiagnostic* d, $String* msg);
	virtual $String* formatDiagnostic(::com::sun::tools::javac::util::JCDiagnostic* d, ::java::util::Locale* l) override;
	virtual $String* formatMessage(::com::sun::tools::javac::util::JCDiagnostic* d, ::java::util::Locale* l);
	virtual $String* formatMessage(::javax::tools::Diagnostic* d, ::java::util::Locale* l) override;
	virtual $String* formatMeta(char16_t c, ::com::sun::tools::javac::util::JCDiagnostic* d, ::java::util::Locale* l);
	virtual ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration* getConfiguration() override;
	$String* selectFormat(::com::sun::tools::javac::util::JCDiagnostic* d);
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_BasicDiagnosticFormatter_h_