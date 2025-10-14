#ifndef _com_sun_tools_sjavac_server_log_LazyInitFileLog_h_
#define _com_sun_tools_sjavac_server_log_LazyInitFileLog_h_
//$ class com.sun.tools.sjavac.server.log.LazyInitFileLog
//$ extends com.sun.tools.sjavac.Log

#include <com/sun/tools/sjavac/Log.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				class Log$Level;
			}
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {
					namespace log {

class LazyInitFileLog : public ::com::sun::tools::sjavac::Log {
	$class(LazyInitFileLog, $NO_CLASS_INIT, ::com::sun::tools::sjavac::Log)
public:
	LazyInitFileLog();
	void init$($String* baseFilename);
	::java::nio::file::Path* getAvailableDestination();
	virtual ::java::nio::file::Path* getLogDestination();
	virtual void printLogMsg(::com::sun::tools::sjavac::Log$Level* msgLevel, $String* msg) override;
	$String* baseFilename = nullptr;
	::java::nio::file::Path* destination = nullptr;
};

					} // log
				} // server
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_server_log_LazyInitFileLog_h_