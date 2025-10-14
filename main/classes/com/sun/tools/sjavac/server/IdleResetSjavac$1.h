#ifndef _com_sun_tools_sjavac_server_IdleResetSjavac$1_h_
#define _com_sun_tools_sjavac_server_IdleResetSjavac$1_h_
//$ class com.sun.tools.sjavac.server.IdleResetSjavac$1
//$ extends java.util.TimerTask

#include <java/util/TimerTask.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {
					class IdleResetSjavac;
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

class IdleResetSjavac$1 : public ::java::util::TimerTask {
	$class(IdleResetSjavac$1, $NO_CLASS_INIT, ::java::util::TimerTask)
public:
	IdleResetSjavac$1();
	void init$(::com::sun::tools::sjavac::server::IdleResetSjavac* this$0);
	virtual void run() override;
	::com::sun::tools::sjavac::server::IdleResetSjavac* this$0 = nullptr;
};

				} // server
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_server_IdleResetSjavac$1_h_