#ifndef _com_sun_tools_javac_util_JCDiagnostic$DiagnosticInfo_h_
#define _com_sun_tools_javac_util_JCDiagnostic$DiagnosticInfo_h_
//$ class com.sun.tools.javac.util.JCDiagnostic$DiagnosticInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class JCDiagnostic$DiagnosticType;
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

class $export JCDiagnostic$DiagnosticInfo : public ::java::lang::Object {
	$class(JCDiagnostic$DiagnosticInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JCDiagnostic$DiagnosticInfo();
	void init$(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* type, $String* prefix, $String* code, $ObjectArray* args);
	virtual $ObjectArray* getArgs();
	virtual $String* getCode();
	virtual $String* key();
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo* of(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* type, $String* prefix, $String* code, $ObjectArray* args);
	virtual void setArgs($ObjectArray* args);
	::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* type = nullptr;
	$String* prefix = nullptr;
	$String* code = nullptr;
	$ObjectArray* args = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_JCDiagnostic$DiagnosticInfo_h_