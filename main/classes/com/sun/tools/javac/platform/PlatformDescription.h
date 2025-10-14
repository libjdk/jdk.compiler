#ifndef _com_sun_tools_javac_platform_PlatformDescription_h_
#define _com_sun_tools_javac_platform_PlatformDescription_h_
//$ interface com.sun.tools.javac.platform.PlatformDescription
//$ extends java.io.Closeable

#include <java/io/Closeable.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace tools {
		class JavaFileManager;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

class $export PlatformDescription : public ::java::io::Closeable {
	$interface(PlatformDescription, $NO_CLASS_INIT, ::java::io::Closeable)
public:
	virtual void close() override {}
	virtual ::java::util::List* getAdditionalOptions() {return nullptr;}
	virtual ::java::util::List* getAnnotationProcessors() {return nullptr;}
	virtual ::javax::tools::JavaFileManager* getFileManager() {return nullptr;}
	virtual ::java::util::List* getPlugins() {return nullptr;}
	virtual $String* getSourceVersion() {return nullptr;}
	virtual $String* getTargetVersion() {return nullptr;}
};

				} // platform
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_platform_PlatformDescription_h_