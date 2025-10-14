#ifndef _com_sun_tools_sjavac_client_ClientMain_h_
#define _com_sun_tools_sjavac_client_ClientMain_h_
//$ class com.sun.tools.sjavac.client.ClientMain
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class Writer;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace client {

class ClientMain : public ::java::lang::Object {
	$class(ClientMain, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClientMain();
	void init$();
	static int32_t run($StringArray* args);
	static int32_t run($StringArray* args, ::java::io::Writer* out, ::java::io::Writer* err);
};

				} // client
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_client_ClientMain_h_