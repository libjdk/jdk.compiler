#ifndef _com_sun_tools_javac_util_JCDiagnostic$SourcePosition_h_
#define _com_sun_tools_javac_util_JCDiagnostic$SourcePosition_h_
//$ class com.sun.tools.javac.util.JCDiagnostic$SourcePosition
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import JCDiagnostic$SourcePosition : public ::java::lang::Object {
	$class(JCDiagnostic$SourcePosition, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JCDiagnostic$SourcePosition();
	void init$(::com::sun::tools::javac::util::JCDiagnostic* this$0);
	virtual int32_t getColumnNumber();
	virtual int32_t getLineNumber();
	::com::sun::tools::javac::util::JCDiagnostic* this$0 = nullptr;
	int32_t line = 0;
	int32_t column = 0;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_JCDiagnostic$SourcePosition_h_