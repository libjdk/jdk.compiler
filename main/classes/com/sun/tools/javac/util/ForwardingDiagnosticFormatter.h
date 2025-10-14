#ifndef _com_sun_tools_javac_util_ForwardingDiagnosticFormatter_h_
#define _com_sun_tools_javac_util_ForwardingDiagnosticFormatter_h_
//$ class com.sun.tools.javac.util.ForwardingDiagnosticFormatter
//$ extends com.sun.tools.javac.api.DiagnosticFormatter

#include <com/sun/tools/javac/api/DiagnosticFormatter.h>

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
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class ForwardingDiagnosticFormatter$ForwardingConfiguration;
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

class $export ForwardingDiagnosticFormatter : public ::com::sun::tools::javac::api::DiagnosticFormatter {
	$class(ForwardingDiagnosticFormatter, $NO_CLASS_INIT, ::com::sun::tools::javac::api::DiagnosticFormatter)
public:
	ForwardingDiagnosticFormatter();
	void init$(::com::sun::tools::javac::api::DiagnosticFormatter* formatter);
	virtual bool displaySource(::javax::tools::Diagnostic* diag) override;
	virtual $String* format(::javax::tools::Diagnostic* diag, ::java::util::Locale* l) override;
	virtual $String* formatKind(::javax::tools::Diagnostic* diag, ::java::util::Locale* l) override;
	virtual $String* formatMessage(::javax::tools::Diagnostic* diag, ::java::util::Locale* l) override;
	virtual $String* formatPosition(::javax::tools::Diagnostic* diag, ::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind* pk, ::java::util::Locale* l) override;
	virtual $String* formatSource(::javax::tools::Diagnostic* diag, bool fullname, ::java::util::Locale* l) override;
	virtual ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration* getConfiguration() override;
	virtual ::com::sun::tools::javac::api::DiagnosticFormatter* getDelegatedFormatter();
	::com::sun::tools::javac::api::DiagnosticFormatter* formatter = nullptr;
	::com::sun::tools::javac::util::ForwardingDiagnosticFormatter$ForwardingConfiguration* configuration = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_ForwardingDiagnosticFormatter_h_