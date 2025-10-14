#ifndef _com_sun_tools_javac_main_Main_h_
#define _com_sun_tools_javac_main_Main_h_
//$ class com.sun.tools.javac.main.Main
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ENV_OPT_NAME")
#undef ENV_OPT_NAME

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {
					class Main$Result;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {
					class AnnotationProcessingError;
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
					class Context;
					class JCDiagnostic$DiagnosticInfo;
					class Log;
					class Options;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class PrintWriter;
	}
}
namespace java {
	namespace lang {
		class IllegalAccessError;
		class Throwable;
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
				namespace main {

class $import Main : public ::java::lang::Object {
	$class(Main, 0, ::java::lang::Object)
public:
	Main();
	void init$($String* name);
	void init$($String* name, ::java::io::PrintWriter* out);
	void init$($String* name, ::java::io::PrintWriter* out, ::java::io::PrintWriter* err);
	virtual void apMessage(::com::sun::tools::javac::processing::AnnotationProcessingError* ex);
	virtual void bugMessage($Throwable* ex);
	virtual ::com::sun::tools::javac::main::Main$Result* compile($StringArray* args);
	virtual ::com::sun::tools::javac::main::Main$Result* compile($StringArray* argv, ::com::sun::tools::javac::util::Context* context);
	virtual void feMessage($Throwable* ex, ::com::sun::tools::javac::util::Options* options);
	virtual void ioMessage($Throwable* ex);
	virtual void pluginMessage($Throwable* ex);
	virtual void printArgumentsToFile($StringArray* params);
	virtual void reportDiag(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo* diag);
	virtual void reportHelper(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo* diag);
	virtual void resourceMessage($Throwable* ex);
	virtual void showClass($String* className);
	bool twoClassLoadersInUse(::java::lang::IllegalAccessError* iae);
	$String* ownName = nullptr;
	::java::io::PrintWriter* stdOut = nullptr;
	::java::io::PrintWriter* stdErr = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	bool apiMode = false;
	static $String* ENV_OPT_NAME;
	::javax::tools::JavaFileManager* fileManager = nullptr;
	static $String* javacBundleName;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ENV_OPT_NAME")

#endif // _com_sun_tools_javac_main_Main_h_