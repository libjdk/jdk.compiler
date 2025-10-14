#ifndef _com_sun_tools_sjavac_server_RequestHandler_h_
#define _com_sun_tools_sjavac_server_RequestHandler_h_
//$ class com.sun.tools.sjavac.server.RequestHandler
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {
					class Sjavac;
				}
			}
		}
	}
}
namespace java {
	namespace net {
		class Socket;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

class RequestHandler : public ::java::lang::Thread {
	$class(RequestHandler, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	RequestHandler();
	void init$(::java::net::Socket* socket, ::com::sun::tools::sjavac::server::Sjavac* sjavac);
	void checkInternalErrorLog();
	virtual void run() override;
	::java::net::Socket* socket = nullptr;
	::com::sun::tools::sjavac::server::Sjavac* sjavac = nullptr;
};

				} // server
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_server_RequestHandler_h_