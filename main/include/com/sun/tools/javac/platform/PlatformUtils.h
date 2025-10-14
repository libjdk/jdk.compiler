#ifndef _com_sun_tools_javac_platform_PlatformUtils_h_
#define _com_sun_tools_javac_platform_PlatformUtils_h_
//$ class com.sun.tools.javac.platform.PlatformUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {
					class PlatformDescription;
					class PlatformProvider;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Optional;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

class $import PlatformUtils : public ::java::lang::Object {
	$class(PlatformUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PlatformUtils();
	void init$();
	static bool lambda$lookupPlatformDescription$0($String* platformProviderName, ::com::sun::tools::javac::platform::PlatformProvider* provider);
	static ::java::util::Optional* lambda$lookupPlatformDescription$1($String* platformProviderName, $String* platformOptions, ::com::sun::tools::javac::platform::PlatformProvider* provider);
	static ::com::sun::tools::javac::platform::PlatformDescription* lookupPlatformDescription($String* platformString);
};

				} // platform
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_platform_PlatformUtils_h_