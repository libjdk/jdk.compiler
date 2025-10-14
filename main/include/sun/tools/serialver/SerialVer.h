#ifndef _sun_tools_serialver_SerialVer_h_
#define _sun_tools_serialver_SerialVer_h_
//$ class sun.tools.serialver.SerialVer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class URLClassLoader;
	}
}

namespace sun {
	namespace tools {
		namespace serialver {

class $import SerialVer : public ::java::lang::Object {
	$class(SerialVer, 0, ::java::lang::Object)
public:
	SerialVer();
	void init$();
	static void initializeLoader($String* cp);
	static void main($StringArray* args);
	static $String* resolveClass($String* classname);
	static $String* serialSyntax($String* classname);
	static void usage();
	static ::java::net::URLClassLoader* loader;
};

		} // serialver
	} // tools
} // sun

#endif // _sun_tools_serialver_SerialVer_h_