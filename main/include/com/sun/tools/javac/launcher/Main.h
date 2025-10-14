#ifndef _com_sun_tools_javac_launcher_Main_h_
#define _com_sun_tools_javac_launcher_Main_h_
//$ class com.sun.tools.javac.launcher.Main
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {
					class Main$Context;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class JCDiagnostic$Error;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class PrintStream;
		class PrintWriter;
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
		class List;
		class ResourceBundle;
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

class $import Main : public ::java::lang::Object {
	$class(Main, 0, ::java::lang::Object)
public:
	Main();
	void init$(::java::io::PrintStream* out);
	void init$(::java::io::PrintWriter* out);
	$String* compile(::java::nio::file::Path* file, ::java::util::List* javacOpts, ::com::sun::tools::javac::launcher::Main$Context* context);
	void execute($String* mainClassName, $StringArray* appArgs, ::com::sun::tools::javac::launcher::Main$Context* context);
	::java::nio::file::Path* getFile($StringArray* args);
	::java::util::List* getJavacOpts($StringArray* runtimeArgs);
	$String* getMessage(::com::sun::tools::javac::util::JCDiagnostic$Error* error);
	static void main($StringArray* args);
	::javax::tools::JavaFileObject* readFile(::java::nio::file::Path* file);
	virtual void run($StringArray* runtimeArgs, $StringArray* args);
	::java::io::PrintWriter* out = nullptr;
	static $String* bundleName;
	::java::util::ResourceBundle* resourceBundle = nullptr;
	$String* errorPrefix = nullptr;
};

				} // launcher
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_launcher_Main_h_