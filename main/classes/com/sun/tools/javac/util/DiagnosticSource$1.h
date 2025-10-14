#ifndef _com_sun_tools_javac_util_DiagnosticSource$1_h_
#define _com_sun_tools_javac_util_DiagnosticSource$1_h_
//$ class com.sun.tools.javac.util.DiagnosticSource$1
//$ extends com.sun.tools.javac.util.DiagnosticSource

#include <com/sun/tools/javac/util/DiagnosticSource.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class DiagnosticSource$1 : public ::com::sun::tools::javac::util::DiagnosticSource {
	$class(DiagnosticSource$1, $NO_CLASS_INIT, ::com::sun::tools::javac::util::DiagnosticSource)
public:
	DiagnosticSource$1();
	void init$();
	virtual bool findLine(int32_t pos) override;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_DiagnosticSource$1_h_