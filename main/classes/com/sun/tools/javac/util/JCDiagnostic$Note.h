#ifndef _com_sun_tools_javac_util_JCDiagnostic$Note_h_
#define _com_sun_tools_javac_util_JCDiagnostic$Note_h_
//$ class com.sun.tools.javac.util.JCDiagnostic$Note
//$ extends com.sun.tools.javac.util.JCDiagnostic$DiagnosticInfo

#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export JCDiagnostic$Note : public ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo {
	$class(JCDiagnostic$Note, $NO_CLASS_INIT, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo)
public:
	JCDiagnostic$Note();
	void init$($String* prefix, $String* key, $ObjectArray* args);
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_JCDiagnostic$Note_h_