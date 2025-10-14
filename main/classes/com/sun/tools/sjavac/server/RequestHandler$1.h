#ifndef _com_sun_tools_sjavac_server_RequestHandler$1_h_
#define _com_sun_tools_sjavac_server_RequestHandler$1_h_
//$ class com.sun.tools.sjavac.server.RequestHandler$1
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
namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {
					class RequestHandler;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class Writer;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

class RequestHandler$1 : public ::com::sun::tools::sjavac::Log {
	$class(RequestHandler$1, $NO_CLASS_INIT, ::com::sun::tools::sjavac::Log)
public:
	RequestHandler$1();
	void init$(::com::sun::tools::sjavac::server::RequestHandler* this$0, ::java::io::Writer* out, ::java::io::Writer* err);
	virtual bool isLevelLogged(::com::sun::tools::sjavac::Log$Level* l) override;
	static $String* lambda$printLogMsg$0(::com::sun::tools::sjavac::Log$Level* msgLevel, $String* line);
	void lambda$printLogMsg$1(::com::sun::tools::sjavac::Log$Level* msgLevel, $String* line);
	virtual void printLogMsg(::com::sun::tools::sjavac::Log$Level* msgLevel, $String* msg) override;
	::com::sun::tools::sjavac::server::RequestHandler* this$0 = nullptr;
};

				} // server
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_server_RequestHandler$1_h_