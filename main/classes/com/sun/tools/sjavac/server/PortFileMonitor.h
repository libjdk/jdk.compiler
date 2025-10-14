#ifndef _com_sun_tools_sjavac_server_PortFileMonitor_h_
#define _com_sun_tools_sjavac_server_PortFileMonitor_h_
//$ class com.sun.tools.sjavac.server.PortFileMonitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CHECK_PORTFILE_INTERVAL")
#undef CHECK_PORTFILE_INTERVAL

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {
					class PortFile;
					class SjavacServer;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Timer;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

class PortFileMonitor : public ::java::lang::Object {
	$class(PortFileMonitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PortFileMonitor();
	void init$(::com::sun::tools::sjavac::server::PortFile* portFile, ::com::sun::tools::sjavac::server::SjavacServer* server);
	virtual void shutdown();
	virtual void start();
	static const int32_t CHECK_PORTFILE_INTERVAL = 5000;
	::java::util::Timer* timer = nullptr;
	::com::sun::tools::sjavac::server::PortFile* portFile = nullptr;
	::com::sun::tools::sjavac::server::SjavacServer* server = nullptr;
};

				} // server
			} // sjavac
		} // tools
	} // sun
} // com

#pragma pop_macro("CHECK_PORTFILE_INTERVAL")

#endif // _com_sun_tools_sjavac_server_PortFileMonitor_h_