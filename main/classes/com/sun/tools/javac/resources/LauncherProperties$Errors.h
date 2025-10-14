#ifndef _com_sun_tools_javac_resources_LauncherProperties$Errors_h_
#define _com_sun_tools_javac_resources_LauncherProperties$Errors_h_
//$ class com.sun.tools.javac.resources.LauncherProperties$Errors
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

class $export LauncherProperties$Errors : public ::java::lang::Object {
	$class(LauncherProperties$Errors, 0, ::java::lang::Object)
public:
	LauncherProperties$Errors();
	void init$();
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantAccessMainMethod($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantFindClass($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantFindMainMethod($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantReadFile(::java::nio::file::Path* arg0, Object$* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* FileNotFound(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidFilename($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidValueForSource($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NoValueForOption($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CompilationFailed;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* EnablePreviewRequiresSource;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* MainNotPublicStatic;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* MainNotVoid;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NoArgs;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NoClass;
};

				} // resources
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_resources_LauncherProperties$Errors_h_