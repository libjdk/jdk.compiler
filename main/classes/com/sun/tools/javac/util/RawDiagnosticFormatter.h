#ifndef _com_sun_tools_javac_util_RawDiagnosticFormatter_h_
#define _com_sun_tools_javac_util_RawDiagnosticFormatter_h_
//$ class com.sun.tools.javac.util.RawDiagnosticFormatter
//$ extends com.sun.tools.javac.util.AbstractDiagnosticFormatter

#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter.h>
#include <java/lang/Array.h>

#pragma push_macro("CODES_NEEDING_SOURCE_NORMALIZATION")
#undef CODES_NEEDING_SOURCE_NORMALIZATION

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class JCDiagnostic;
					class Options;
					class RawDiagnosticFormatter$RawDiagnosticPosHelper;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Locale;
		class Set;
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

class $export RawDiagnosticFormatter : public ::com::sun::tools::javac::util::AbstractDiagnosticFormatter {
	$class(RawDiagnosticFormatter, 0, ::com::sun::tools::javac::util::AbstractDiagnosticFormatter)
public:
	RawDiagnosticFormatter();
	void init$(::com::sun::tools::javac::util::Options* options);
	virtual $String* formatArgument(::com::sun::tools::javac::util::JCDiagnostic* diag, Object$* arg, ::java::util::Locale* l) override;
	virtual $String* formatDiagnostic(::com::sun::tools::javac::util::JCDiagnostic* d, ::java::util::Locale* l) override;
	$String* formatMessage(::com::sun::tools::javac::util::JCDiagnostic* d, ::java::util::Locale* l);
	virtual $String* formatMessage(::javax::tools::Diagnostic* d, ::java::util::Locale* l) override;
	virtual bool isRaw() override;
	virtual $String* localize(::java::util::Locale* l, $String* key, $ObjectArray* args) override;
	::com::sun::tools::javac::util::RawDiagnosticFormatter$RawDiagnosticPosHelper* rawDiagnosticPosHelper = nullptr;
	static ::java::util::Set* CODES_NEEDING_SOURCE_NORMALIZATION;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("CODES_NEEDING_SOURCE_NORMALIZATION")

#endif // _com_sun_tools_javac_util_RawDiagnosticFormatter_h_