#ifndef _com_sun_tools_javac_util_JCDiagnostic$Warning_h_
#define _com_sun_tools_javac_util_JCDiagnostic$Warning_h_
//$ class com.sun.tools.javac.util.JCDiagnostic$Warning
//$ extends com.sun.tools.javac.util.JCDiagnostic$DiagnosticInfo

#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import JCDiagnostic$Warning : public ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo {
	$class(JCDiagnostic$Warning, $NO_CLASS_INIT, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo)
public:
	JCDiagnostic$Warning();
	void init$($String* prefix, $String* key, $ObjectArray* args);
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_JCDiagnostic$Warning_h_