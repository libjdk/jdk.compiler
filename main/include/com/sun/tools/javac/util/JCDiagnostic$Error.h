#ifndef _com_sun_tools_javac_util_JCDiagnostic$Error_h_
#define _com_sun_tools_javac_util_JCDiagnostic$Error_h_
//$ class com.sun.tools.javac.util.JCDiagnostic$Error
//$ extends com.sun.tools.javac.util.JCDiagnostic$DiagnosticInfo

#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import JCDiagnostic$Error : public ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo {
	$class(JCDiagnostic$Error, $NO_CLASS_INIT, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo)
public:
	JCDiagnostic$Error();
	void init$($String* prefix, $String* key, $ObjectArray* args);
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_JCDiagnostic$Error_h_