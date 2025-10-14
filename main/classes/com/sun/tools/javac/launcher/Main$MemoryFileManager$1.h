#ifndef _com_sun_tools_javac_launcher_Main$MemoryFileManager$1_h_
#define _com_sun_tools_javac_launcher_Main$MemoryFileManager$1_h_
//$ class com.sun.tools.javac.launcher.Main$MemoryFileManager$1
//$ extends javax.tools.SimpleJavaFileObject

#include <javax/tools/SimpleJavaFileObject.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {
					class Main$MemoryFileManager;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject$Kind;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

class Main$MemoryFileManager$1 : public ::javax::tools::SimpleJavaFileObject {
	$class(Main$MemoryFileManager$1, $NO_CLASS_INIT, ::javax::tools::SimpleJavaFileObject)
public:
	Main$MemoryFileManager$1();
	void init$(::com::sun::tools::javac::launcher::Main$MemoryFileManager* this$0, ::java::net::URI* arg0, ::javax::tools::JavaFileObject$Kind* arg1, $String* val$className);
	virtual ::java::io::OutputStream* openOutputStream() override;
	::com::sun::tools::javac::launcher::Main$MemoryFileManager* this$0 = nullptr;
	$String* val$className = nullptr;
};

				} // launcher
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_launcher_Main$MemoryFileManager$1_h_