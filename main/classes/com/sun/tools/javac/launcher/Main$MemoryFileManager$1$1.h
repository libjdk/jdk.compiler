#ifndef _com_sun_tools_javac_launcher_Main$MemoryFileManager$1$1_h_
#define _com_sun_tools_javac_launcher_Main$MemoryFileManager$1$1_h_
//$ class com.sun.tools.javac.launcher.Main$MemoryFileManager$1$1
//$ extends java.io.ByteArrayOutputStream

#include <java/io/ByteArrayOutputStream.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {
					class Main$MemoryFileManager$1;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

class Main$MemoryFileManager$1$1 : public ::java::io::ByteArrayOutputStream {
	$class(Main$MemoryFileManager$1$1, $NO_CLASS_INIT, ::java::io::ByteArrayOutputStream)
public:
	Main$MemoryFileManager$1$1();
	void init$(::com::sun::tools::javac::launcher::Main$MemoryFileManager$1* this$1);
	virtual void close() override;
	using ::java::io::ByteArrayOutputStream::write;
	::com::sun::tools::javac::launcher::Main$MemoryFileManager$1* this$1 = nullptr;
};

				} // launcher
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_launcher_Main$MemoryFileManager$1$1_h_