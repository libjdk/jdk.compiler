#ifndef _com_sun_tools_sjavac_server_SjavacServer_h_
#define _com_sun_tools_sjavac_server_SjavacServer_h_
//$ class com.sun.tools.sjavac.server.SjavacServer
//$ extends com.sun.tools.sjavac.server.Terminable

#include <com/sun/tools/sjavac/server/Terminable.h>

#pragma push_macro("LINE_TYPE_RC")
#undef LINE_TYPE_RC

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {
					class PortFile;
					class PortFileMonitor;
					class Sjavac;
				}
			}
		}
	}
}
namespace java {
	namespace net {
		class ServerSocket;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

class SjavacServer : public ::com::sun::tools::sjavac::server::Terminable {
	$class(SjavacServer, 0, ::com::sun::tools::sjavac::server::Terminable)
public:
	SjavacServer();
	void init$($String* settings);
	void init$($String* portfilename, int32_t poolsize, int32_t keepalive);
	virtual void addBuildTime(int64_t inc);
	virtual int64_t getCookie();
	virtual int32_t getPort();
	static ::com::sun::tools::sjavac::server::PortFile* getPortFile($String* filename);
	virtual void shutdown($String* quitMsg) override;
	virtual int32_t startServer();
	static $String* LINE_TYPE_RC;
	$String* portfilename = nullptr;
	int32_t poolsize = 0;
	int32_t keepalive = 0;
	int64_t myCookie = 0;
	int64_t totalBuildTime = 0;
	::com::sun::tools::sjavac::server::Sjavac* sjavac = nullptr;
	::java::net::ServerSocket* serverSocket = nullptr;
	::com::sun::tools::sjavac::server::PortFile* portFile = nullptr;
	::com::sun::tools::sjavac::server::PortFileMonitor* portFileMonitor = nullptr;
	::java::util::concurrent::atomic::AtomicBoolean* keepAcceptingRequests = nullptr;
	static ::java::util::Map* allPortFiles;
};

				} // server
			} // sjavac
		} // tools
	} // sun
} // com

#pragma pop_macro("LINE_TYPE_RC")

#endif // _com_sun_tools_sjavac_server_SjavacServer_h_