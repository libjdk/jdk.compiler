#ifndef _com_sun_tools_javac_util_JCDiagnostic$DiagnosticFlag_h_
#define _com_sun_tools_javac_util_JCDiagnostic$DiagnosticFlag_h_
//$ class com.sun.tools.javac.util.JCDiagnostic$DiagnosticFlag
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("API")
#undef API
#pragma push_macro("COMPRESSED")
#undef COMPRESSED
#pragma push_macro("MANDATORY")
#undef MANDATORY
#pragma push_macro("NON_DEFERRABLE")
#undef NON_DEFERRABLE
#pragma push_macro("RECOVERABLE")
#undef RECOVERABLE
#pragma push_macro("RESOLVE_ERROR")
#undef RESOLVE_ERROR
#pragma push_macro("SOURCE_LEVEL")
#undef SOURCE_LEVEL
#pragma push_macro("SYNTAX")
#undef SYNTAX

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import JCDiagnostic$DiagnosticFlag : public ::java::lang::Enum {
	$class(JCDiagnostic$DiagnosticFlag, 0, ::java::lang::Enum)
public:
	JCDiagnostic$DiagnosticFlag();
	static $Array<::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag* valueOf($String* name);
	static $Array<::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag>* values();
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag* MANDATORY;
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag* RESOLVE_ERROR;
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag* SYNTAX;
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag* RECOVERABLE;
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag* NON_DEFERRABLE;
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag* COMPRESSED;
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag* API;
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag* SOURCE_LEVEL;
	static $Array<::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag>* $VALUES;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("API")
#pragma pop_macro("COMPRESSED")
#pragma pop_macro("MANDATORY")
#pragma pop_macro("NON_DEFERRABLE")
#pragma pop_macro("RECOVERABLE")
#pragma pop_macro("RESOLVE_ERROR")
#pragma pop_macro("SOURCE_LEVEL")
#pragma pop_macro("SYNTAX")

#endif // _com_sun_tools_javac_util_JCDiagnostic$DiagnosticFlag_h_