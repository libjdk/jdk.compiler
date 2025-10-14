#ifndef _com_sun_tools_javac_platform_PlatformProvider_h_
#define _com_sun_tools_javac_platform_PlatformProvider_h_
//$ interface com.sun.tools.javac.platform.PlatformProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {
					class PlatformDescription;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

class $import PlatformProvider : public ::java::lang::Object {
	$interface(PlatformProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::tools::javac::platform::PlatformDescription* getPlatform($String* platformName, $String* options) {return nullptr;}
	virtual ::java::lang::Iterable* getSupportedPlatformNames() {return nullptr;}
};

				} // platform
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_platform_PlatformProvider_h_