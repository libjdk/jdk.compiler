#ifndef _com_sun_tools_javac_launcher_Main$1_h_
#define _com_sun_tools_javac_launcher_Main$1_h_
//$ class com.sun.tools.javac.launcher.Main$1
//$ extends javax.tools.SimpleJavaFileObject

#include <javax/tools/SimpleJavaFileObject.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {
					class Main;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class CharSequence;
		class StringBuilder;
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
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

class Main$1 : public ::javax::tools::SimpleJavaFileObject {
	$class(Main$1, $NO_CLASS_INIT, ::javax::tools::SimpleJavaFileObject)
public:
	Main$1();
	void init$(::com::sun::tools::javac::launcher::Main* this$0, ::java::net::URI* arg0, ::javax::tools::JavaFileObject$Kind* arg1, ::java::nio::file::Path* val$file, ::java::lang::StringBuilder* val$sb);
	virtual ::java::lang::CharSequence* getCharContent(bool ignoreEncodingErrors) override;
	virtual $String* getName() override;
	virtual bool isNameCompatible($String* simpleName, ::javax::tools::JavaFileObject$Kind* kind) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::launcher::Main* this$0 = nullptr;
	::java::lang::StringBuilder* val$sb = nullptr;
	::java::nio::file::Path* val$file = nullptr;
};

				} // launcher
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_launcher_Main$1_h_