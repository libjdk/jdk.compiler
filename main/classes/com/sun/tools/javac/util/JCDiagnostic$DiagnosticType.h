#ifndef _com_sun_tools_javac_util_JCDiagnostic$DiagnosticType_h_
#define _com_sun_tools_javac_util_JCDiagnostic$DiagnosticType_h_
//$ class com.sun.tools.javac.util.JCDiagnostic$DiagnosticType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("FRAGMENT")
#undef FRAGMENT
#pragma push_macro("NOTE")
#undef NOTE
#pragma push_macro("WARNING")
#undef WARNING

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export JCDiagnostic$DiagnosticType : public ::java::lang::Enum {
	$class(JCDiagnostic$DiagnosticType, 0, ::java::lang::Enum)
public:
	JCDiagnostic$DiagnosticType();
	static $Array<::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* key);
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* valueOf($String* name);
	static $Array<::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType>* values();
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* FRAGMENT;
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* NOTE;
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* WARNING;
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* ERROR;
	static $Array<::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType>* $VALUES;
	$String* key = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ERROR")
#pragma pop_macro("FRAGMENT")
#pragma pop_macro("NOTE")
#pragma pop_macro("WARNING")

#endif // _com_sun_tools_javac_util_JCDiagnostic$DiagnosticType_h_