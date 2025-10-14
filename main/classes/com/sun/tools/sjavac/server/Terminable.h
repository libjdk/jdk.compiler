#ifndef _com_sun_tools_sjavac_server_Terminable_h_
#define _com_sun_tools_sjavac_server_Terminable_h_
//$ interface com.sun.tools.sjavac.server.Terminable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

class Terminable : public ::java::lang::Object {
	$interface(Terminable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void shutdown($String* quitMsg) {}
};

				} // server
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_server_Terminable_h_