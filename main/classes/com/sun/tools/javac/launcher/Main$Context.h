#ifndef _com_sun_tools_javac_launcher_Main$Context_h_
#define _com_sun_tools_javac_launcher_Main$Context_h_
//$ class com.sun.tools.javac.launcher.Main$Context
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class ClassLoader;
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
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace tools {
		class JavaFileManager;
		class StandardJavaFileManager;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

class Main$Context : public ::java::lang::Object {
	$class(Main$Context, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Main$Context();
	void init$(::java::nio::file::Path* file);
	virtual ::java::lang::ClassLoader* getClassLoader(::java::lang::ClassLoader* parent);
	virtual ::javax::tools::JavaFileManager* getFileManager(::javax::tools::StandardJavaFileManager* delegate);
	::java::nio::file::Path* file = nullptr;
	::java::util::Map* inMemoryClasses = nullptr;
};

				} // launcher
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_launcher_Main$Context_h_