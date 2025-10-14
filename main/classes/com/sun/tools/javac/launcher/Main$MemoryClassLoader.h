#ifndef _com_sun_tools_javac_launcher_Main$MemoryClassLoader_h_
#define _com_sun_tools_javac_launcher_Main$MemoryClassLoader_h_
//$ class com.sun.tools.javac.launcher.Main$MemoryClassLoader
//$ extends java.lang.ClassLoader

#include <java/lang/ClassLoader.h>

#pragma push_macro("DOT_CLASS_LENGTH")
#undef DOT_CLASS_LENGTH
#pragma push_macro("PROTOCOL")
#undef PROTOCOL

namespace java {
	namespace net {
		class URL;
		class URLStreamHandler;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace security {
		class ProtectionDomain;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

class Main$MemoryClassLoader : public ::java::lang::ClassLoader {
	$class(Main$MemoryClassLoader, 0, ::java::lang::ClassLoader)
public:
	Main$MemoryClassLoader();
	using ::java::lang::ClassLoader::findClass;
	using ::java::lang::ClassLoader::findResource;
	void init$(::java::util::Map* sourceFileClasses, ::java::lang::ClassLoader* parent, ::java::nio::file::Path* file);
	virtual $Class* findClass($String* name) override;
	virtual ::java::net::URL* findResource($String* name) override;
	virtual ::java::util::Enumeration* findResources($String* name) override;
	virtual ::java::net::URL* getResource($String* name) override;
	virtual ::java::util::Enumeration* getResources($String* name) override;
	using ::java::lang::ClassLoader::loadClass;
	virtual $Class* loadClass($String* name, bool resolve) override;
	$String* toBinaryName($String* name);
	::java::util::Map* sourceFileClasses = nullptr;
	::java::security::ProtectionDomain* domain = nullptr;
	static int32_t DOT_CLASS_LENGTH;
	$String* PROTOCOL = nullptr;
	::java::net::URLStreamHandler* handler = nullptr;
};

				} // launcher
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("DOT_CLASS_LENGTH")
#pragma pop_macro("PROTOCOL")

#endif // _com_sun_tools_javac_launcher_Main$MemoryClassLoader_h_