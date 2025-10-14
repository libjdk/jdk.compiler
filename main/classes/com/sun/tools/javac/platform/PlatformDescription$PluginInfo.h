#ifndef _com_sun_tools_javac_platform_PlatformDescription$PluginInfo_h_
#define _com_sun_tools_javac_platform_PlatformDescription$PluginInfo_h_
//$ interface com.sun.tools.javac.platform.PlatformDescription$PluginInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

class $export PlatformDescription$PluginInfo : public ::java::lang::Object {
	$interface(PlatformDescription$PluginInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getName() {return nullptr;}
	virtual ::java::util::Map* getOptions() {return nullptr;}
	virtual $Object* getPlugin() {return nullptr;}
};

				} // platform
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_platform_PlatformDescription$PluginInfo_h_