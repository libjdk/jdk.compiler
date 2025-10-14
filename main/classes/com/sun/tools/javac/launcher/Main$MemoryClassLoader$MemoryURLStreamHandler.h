#ifndef _com_sun_tools_javac_launcher_Main$MemoryClassLoader$MemoryURLStreamHandler_h_
#define _com_sun_tools_javac_launcher_Main$MemoryClassLoader$MemoryURLStreamHandler_h_
//$ class com.sun.tools.javac.launcher.Main$MemoryClassLoader$MemoryURLStreamHandler
//$ extends java.net.URLStreamHandler

#include <java/net/URLStreamHandler.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {
					class Main$MemoryClassLoader;
				}
			}
		}
	}
}
namespace java {
	namespace net {
		class URL;
		class URLConnection;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

class Main$MemoryClassLoader$MemoryURLStreamHandler : public ::java::net::URLStreamHandler {
	$class(Main$MemoryClassLoader$MemoryURLStreamHandler, $NO_CLASS_INIT, ::java::net::URLStreamHandler)
public:
	Main$MemoryClassLoader$MemoryURLStreamHandler();
	using ::java::net::URLStreamHandler::equals;
	using ::java::net::URLStreamHandler::hashCode;
	void init$(::com::sun::tools::javac::launcher::Main$MemoryClassLoader* this$0);
	using ::java::net::URLStreamHandler::openConnection;
	virtual ::java::net::URLConnection* openConnection(::java::net::URL* u) override;
	::com::sun::tools::javac::launcher::Main$MemoryClassLoader* this$0 = nullptr;
};

				} // launcher
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_launcher_Main$MemoryClassLoader$MemoryURLStreamHandler_h_