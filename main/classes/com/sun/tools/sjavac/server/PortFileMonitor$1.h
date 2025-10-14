#ifndef _com_sun_tools_sjavac_server_PortFileMonitor$1_h_
#define _com_sun_tools_sjavac_server_PortFileMonitor$1_h_
//$ class com.sun.tools.sjavac.server.PortFileMonitor$1
//$ extends java.util.TimerTask

#include <java/util/TimerTask.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				class Log;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {
					class PortFileMonitor;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

class PortFileMonitor$1 : public ::java::util::TimerTask {
	$class(PortFileMonitor$1, $NO_CLASS_INIT, ::java::util::TimerTask)
public:
	PortFileMonitor$1();
	void init$(::com::sun::tools::sjavac::server::PortFileMonitor* this$0, ::com::sun::tools::sjavac::Log* val$log);
	virtual void run() override;
	::com::sun::tools::sjavac::server::PortFileMonitor* this$0 = nullptr;
	::com::sun::tools::sjavac::Log* val$log = nullptr;
};

				} // server
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_server_PortFileMonitor$1_h_