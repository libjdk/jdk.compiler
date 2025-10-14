#ifndef _com_sun_tools_javac_processing_ServiceProxy_h_
#define _com_sun_tools_javac_processing_ServiceProxy_h_
//$ class com.sun.tools.javac.processing.ServiceProxy
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class URL;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class ServiceProxy : public ::java::lang::Object {
	$class(ServiceProxy, 0, ::java::lang::Object)
public:
	ServiceProxy();
	void init$();
	static void fail($Class* service, $String* msg);
	static void fail($Class* service, ::java::net::URL* u, int32_t line, $String* msg);
	static bool hasService($Class* service, $Array<::java::net::URL>* urls);
	static bool parse($Class* service, ::java::net::URL* u);
	static $String* prefix;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_ServiceProxy_h_