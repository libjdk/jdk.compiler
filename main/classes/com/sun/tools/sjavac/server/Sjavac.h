#ifndef _com_sun_tools_sjavac_server_Sjavac_h_
#define _com_sun_tools_sjavac_server_Sjavac_h_
//$ interface com.sun.tools.sjavac.server.Sjavac
//$ extends java.lang.Object

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

class Sjavac : public ::java::lang::Object {
	$interface(Sjavac, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::tools::javac::main::Main$Result* compile($StringArray* args) {return nullptr;}
	virtual void shutdown() {}
};

				} // server
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_server_Sjavac_h_