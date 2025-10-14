#ifndef _com_sun_tools_javac_launcher_Main$MemoryClassLoader$1_h_
#define _com_sun_tools_javac_launcher_Main$MemoryClassLoader$1_h_
//$ class com.sun.tools.javac.launcher.Main$MemoryClassLoader$1
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

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
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

class Main$MemoryClassLoader$1 : public ::java::util::Enumeration {
	$class(Main$MemoryClassLoader$1, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	Main$MemoryClassLoader$1();
	void init$(::com::sun::tools::javac::launcher::Main$MemoryClassLoader* this$0, $String* val$name);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::com::sun::tools::javac::launcher::Main$MemoryClassLoader* this$0 = nullptr;
	$String* val$name = nullptr;
	::java::net::URL* next = nullptr;
};

				} // launcher
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_launcher_Main$MemoryClassLoader$1_h_