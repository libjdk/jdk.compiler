#ifndef _com_sun_tools_javac_util_RichDiagnosticFormatter$RichConfiguration_h_
#define _com_sun_tools_javac_util_RichDiagnosticFormatter$RichConfiguration_h_
//$ class com.sun.tools.javac.util.RichDiagnosticFormatter$RichConfiguration
//$ extends com.sun.tools.javac.util.ForwardingDiagnosticFormatter$ForwardingConfiguration

#include <com/sun/tools/javac/util/ForwardingDiagnosticFormatter$ForwardingConfiguration.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class AbstractDiagnosticFormatter;
					class Options;
					class RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class EnumSet;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export RichDiagnosticFormatter$RichConfiguration : public ::com::sun::tools::javac::util::ForwardingDiagnosticFormatter$ForwardingConfiguration {
	$class(RichDiagnosticFormatter$RichConfiguration, $NO_CLASS_INIT, ::com::sun::tools::javac::util::ForwardingDiagnosticFormatter$ForwardingConfiguration)
public:
	RichDiagnosticFormatter$RichConfiguration();
	void init$(::com::sun::tools::javac::util::Options* options, ::com::sun::tools::javac::util::AbstractDiagnosticFormatter* formatter);
	virtual void disable(::com::sun::tools::javac::util::RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature* feature);
	virtual void enable(::com::sun::tools::javac::util::RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature* feature);
	virtual $Array<::com::sun::tools::javac::util::RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature>* getAvailableFeatures();
	virtual bool isEnabled(::com::sun::tools::javac::util::RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature* feature);
	::java::util::EnumSet* features = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_RichDiagnosticFormatter$RichConfiguration_h_