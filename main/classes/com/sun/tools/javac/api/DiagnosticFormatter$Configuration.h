#ifndef _com_sun_tools_javac_api_DiagnosticFormatter$Configuration_h_
#define _com_sun_tools_javac_api_DiagnosticFormatter$Configuration_h_
//$ interface com.sun.tools.javac.api.DiagnosticFormatter$Configuration
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
				namespace api {

class $export DiagnosticFormatter$Configuration : public ::java::lang::Object {
	$interface(DiagnosticFormatter$Configuration, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getMultilineLimit(::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$MultilineLimit* limit) {return 0;}
	virtual ::java::util::Set* getVisible() {return nullptr;}
	virtual void setMultilineLimit(::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$MultilineLimit* limit, int32_t value) {}
	virtual void setVisible(::java::util::Set* visibleParts) {}
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_DiagnosticFormatter$Configuration_h_