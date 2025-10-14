#ifndef _com_sun_tools_javac_util_ForwardingDiagnosticFormatter$ForwardingConfiguration_h_
#define _com_sun_tools_javac_util_ForwardingDiagnosticFormatter$ForwardingConfiguration_h_
//$ class com.sun.tools.javac.util.ForwardingDiagnosticFormatter$ForwardingConfiguration
//$ extends com.sun.tools.javac.api.DiagnosticFormatter$Configuration

#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class DiagnosticFormatter$Configuration$MultilineLimit;
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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export ForwardingDiagnosticFormatter$ForwardingConfiguration : public ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration {
	$class(ForwardingDiagnosticFormatter$ForwardingConfiguration, $NO_CLASS_INIT, ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration)
public:
	ForwardingDiagnosticFormatter$ForwardingConfiguration();
	void init$(::com::sun::tools::javac::api::DiagnosticFormatter$Configuration* configuration);
	virtual ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration* getDelegatedConfiguration();
	virtual int32_t getMultilineLimit(::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$MultilineLimit* limit) override;
	virtual ::java::util::Set* getVisible() override;
	virtual void setMultilineLimit(::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$MultilineLimit* limit, int32_t value) override;
	virtual void setVisible(::java::util::Set* diagParts) override;
	::com::sun::tools::javac::api::DiagnosticFormatter$Configuration* configuration = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_ForwardingDiagnosticFormatter$ForwardingConfiguration_h_