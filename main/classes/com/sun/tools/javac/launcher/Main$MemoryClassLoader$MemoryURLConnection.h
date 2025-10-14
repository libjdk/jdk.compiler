#ifndef _com_sun_tools_javac_launcher_Main$MemoryClassLoader$MemoryURLConnection_h_
#define _com_sun_tools_javac_launcher_Main$MemoryClassLoader$MemoryURLConnection_h_
//$ class com.sun.tools.javac.launcher.Main$MemoryClassLoader$MemoryURLConnection
//$ extends java.net.URLConnection

#include <java/lang/Array.h>
#include <java/net/URLConnection.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

class Main$MemoryClassLoader$MemoryURLConnection : public ::java::net::URLConnection {
	$class(Main$MemoryClassLoader$MemoryURLConnection, $NO_CLASS_INIT, ::java::net::URLConnection)
public:
	Main$MemoryClassLoader$MemoryURLConnection();
	void init$(::java::net::URL* u, $bytes* bytes);
	virtual void connect() override;
	virtual int64_t getContentLengthLong() override;
	virtual $String* getContentType() override;
	virtual ::java::io::InputStream* getInputStream() override;
	$bytes* bytes = nullptr;
	::java::io::InputStream* in = nullptr;
};

				} // launcher
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_launcher_Main$MemoryClassLoader$MemoryURLConnection_h_