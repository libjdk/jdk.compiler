#ifndef _com_sun_tools_javac_util_AbstractDiagnosticFormatter$SimpleConfiguration_h_
#define _com_sun_tools_javac_util_AbstractDiagnosticFormatter$SimpleConfiguration_h_
//$ class com.sun.tools.javac.util.AbstractDiagnosticFormatter$SimpleConfiguration
//$ extends com.sun.tools.javac.api.DiagnosticFormatter$Configuration

#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class DiagnosticFormatter$Configuration$DiagnosticPart;
					class DiagnosticFormatter$Configuration$MultilineLimit;
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
					class Options;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class EnumSet;
		class Map;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import AbstractDiagnosticFormatter$SimpleConfiguration : public ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration {
	$class(AbstractDiagnosticFormatter$SimpleConfiguration, $NO_CLASS_INIT, ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration)
public:
	AbstractDiagnosticFormatter$SimpleConfiguration();
	void init$(::java::util::Set* parts);
	void init$(::com::sun::tools::javac::util::Options* options, ::java::util::Set* parts);
	virtual int32_t getMultilineLimit(::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$MultilineLimit* limit) override;
	virtual ::java::util::Set* getVisible() override;
	virtual bool isCaretEnabled();
	virtual void setCaretEnabled(bool caretEnabled);
	virtual void setMultilineLimit(::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$MultilineLimit* limit, int32_t value) override;
	virtual void setVisible(::java::util::Set* diagParts) override;
	virtual void setVisiblePart(::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$DiagnosticPart* diagParts, bool enabled);
	::java::util::Map* multilineLimits = nullptr;
	::java::util::EnumSet* visibleParts = nullptr;
	bool caretEnabled = false;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_AbstractDiagnosticFormatter$SimpleConfiguration_h_