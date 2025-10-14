#ifndef _com_sun_tools_javac_util_RawDiagnosticFormatter$RawDiagnosticPosHelper_h_
#define _com_sun_tools_javac_util_RawDiagnosticFormatter$RawDiagnosticPosHelper_h_
//$ class com.sun.tools.javac.util.RawDiagnosticFormatter$RawDiagnosticPosHelper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$JCExpression;
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
					class JCDiagnostic;
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

class $import RawDiagnosticFormatter$RawDiagnosticPosHelper : public ::java::lang::Object {
	$class(RawDiagnosticFormatter$RawDiagnosticPosHelper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RawDiagnosticFormatter$RawDiagnosticPosHelper();
	void init$(::com::sun::tools::javac::util::JCDiagnostic* diag);
	virtual $String* getPosition(::com::sun::tools::javac::tree::JCTree$JCExpression* exp);
	::com::sun::tools::javac::util::JCDiagnostic* diag = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_RawDiagnosticFormatter$RawDiagnosticPosHelper_h_