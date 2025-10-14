#ifndef _com_sun_tools_sjavac_server_IdleResetSjavac_h_
#define _com_sun_tools_sjavac_server_IdleResetSjavac_h_
//$ class com.sun.tools.sjavac.server.IdleResetSjavac
//$ extends com.sun.tools.sjavac.server.Sjavac

#include <com/sun/tools/sjavac/server/Sjavac.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {
					class Main$Result;
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
					class Terminable;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Timer;
		class TimerTask;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

class IdleResetSjavac : public ::com::sun::tools::sjavac::server::Sjavac {
	$class(IdleResetSjavac, $NO_CLASS_INIT, ::com::sun::tools::sjavac::server::Sjavac)
public:
	IdleResetSjavac();
	void init$(::com::sun::tools::sjavac::server::Sjavac* delegate, ::com::sun::tools::sjavac::server::Terminable* toShutdown, int64_t idleTimeout);
	virtual ::com::sun::tools::javac::main::Main$Result* compile($StringArray* args) override;
	void endCall();
	void scheduleTimeout();
	virtual void shutdown() override;
	void startCall();
	::com::sun::tools::sjavac::server::Sjavac* delegate = nullptr;
	::com::sun::tools::sjavac::server::Terminable* toShutdown = nullptr;
	::java::util::Timer* idlenessTimer = nullptr;
	int64_t idleTimeout = 0;
	int32_t outstandingCalls = 0;
	::java::util::TimerTask* idlenessTimerTask = nullptr;
};

				} // server
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_server_IdleResetSjavac_h_