#ifndef _com_sun_tools_javac_launcher_Main$MemoryFileManager_h_
#define _com_sun_tools_javac_launcher_Main$MemoryFileManager_h_
//$ class com.sun.tools.javac.launcher.Main$MemoryFileManager
//$ extends javax.tools.ForwardingJavaFileManager

#include <javax/tools/ForwardingJavaFileManager.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace tools {
		class FileObject;
		class JavaFileManager;
		class JavaFileManager$Location;
		class JavaFileObject;
		class JavaFileObject$Kind;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

class Main$MemoryFileManager : public ::javax::tools::ForwardingJavaFileManager {
	$class(Main$MemoryFileManager, $NO_CLASS_INIT, ::javax::tools::ForwardingJavaFileManager)
public:
	Main$MemoryFileManager();
	void init$(::java::util::Map* map, ::javax::tools::JavaFileManager* delegate);
	::javax::tools::JavaFileObject* createInMemoryClassFile($String* className);
	virtual ::javax::tools::JavaFileObject* getJavaFileForOutput(::javax::tools::JavaFileManager$Location* location, $String* className, ::javax::tools::JavaFileObject$Kind* kind, ::javax::tools::FileObject* sibling) override;
	::java::util::Map* map = nullptr;
};

				} // launcher
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_launcher_Main$MemoryFileManager_h_