#ifndef _com_sun_tools_sjavac_server_ServerMain_h_
#define _com_sun_tools_sjavac_server_ServerMain_h_
//$ class com.sun.tools.sjavac.server.ServerMain
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {
					namespace log {
						class LazyInitFileLog;
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Thread;
		class Throwable;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

class ServerMain : public ::java::lang::Object {
	$class(ServerMain, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ServerMain();
	void init$();
	static ::com::sun::tools::sjavac::server::log::LazyInitFileLog* getErrorLog();
	static void lambda$run$0($Thread* t, $Throwable* e);
	static int32_t run($StringArray* args);
	static ::com::sun::tools::sjavac::server::log::LazyInitFileLog* errorLog;
};

				} // server
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_server_ServerMain_h_