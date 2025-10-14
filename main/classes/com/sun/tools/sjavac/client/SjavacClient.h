#ifndef _com_sun_tools_sjavac_client_SjavacClient_h_
#define _com_sun_tools_sjavac_client_SjavacClient_h_
//$ class com.sun.tools.sjavac.client.SjavacClient
//$ extends com.sun.tools.sjavac.server.Sjavac

#include <com/sun/tools/sjavac/server/Sjavac.h>
#include <java/lang/Array.h>

#pragma push_macro("CONNECTION_TIMEOUT")
#undef CONNECTION_TIMEOUT
#pragma push_macro("KEEPALIVE")
#undef KEEPALIVE
#pragma push_macro("MAX_CONNECT_ATTEMPTS")
#undef MAX_CONNECT_ATTEMPTS
#pragma push_macro("POOLSIZE")
#undef POOLSIZE
#pragma push_macro("WAIT_BETWEEN_CONNECT_ATTEMPTS")
#undef WAIT_BETWEEN_CONNECT_ATTEMPTS

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
				namespace options {
					class Options;
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
					class PortFile;
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
				namespace client {

class SjavacClient : public ::com::sun::tools::sjavac::server::Sjavac {
	$class(SjavacClient, 0, ::com::sun::tools::sjavac::server::Sjavac)
public:
	SjavacClient();
	void init$(::com::sun::tools::sjavac::options::Options* options);
	virtual ::com::sun::tools::javac::main::Main$Result* compile($StringArray* args) override;
	::java::net::Socket* makeConnectionAttempt();
	void makeSureServerIsRunning();
	virtual void shutdown() override;
	virtual void startNewServer();
	::java::net::Socket* tryConnect();
	::com::sun::tools::sjavac::server::PortFile* portFile = nullptr;
	$String* serverCommand = nullptr;
	static const int32_t KEEPALIVE = 120;
	static int32_t POOLSIZE;
	static const int32_t CONNECTION_TIMEOUT = 2000;
	static const int32_t MAX_CONNECT_ATTEMPTS = 3;
	static const int32_t WAIT_BETWEEN_CONNECT_ATTEMPTS = 2000;
};

				} // client
			} // sjavac
		} // tools
	} // sun
} // com

#pragma pop_macro("CONNECTION_TIMEOUT")
#pragma pop_macro("KEEPALIVE")
#pragma pop_macro("MAX_CONNECT_ATTEMPTS")
#pragma pop_macro("POOLSIZE")
#pragma pop_macro("WAIT_BETWEEN_CONNECT_ATTEMPTS")

#endif // _com_sun_tools_sjavac_client_SjavacClient_h_