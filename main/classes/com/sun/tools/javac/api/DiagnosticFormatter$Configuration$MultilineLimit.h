#ifndef _com_sun_tools_javac_api_DiagnosticFormatter$Configuration$MultilineLimit_h_
#define _com_sun_tools_javac_api_DiagnosticFormatter$Configuration$MultilineLimit_h_
//$ class com.sun.tools.javac.api.DiagnosticFormatter$Configuration$MultilineLimit
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DEPTH")
#undef DEPTH
#pragma push_macro("LENGTH")
#undef LENGTH

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $export DiagnosticFormatter$Configuration$MultilineLimit : public ::java::lang::Enum {
	$class(DiagnosticFormatter$Configuration$MultilineLimit, 0, ::java::lang::Enum)
public:
	DiagnosticFormatter$Configuration$MultilineLimit();
	static $Array<::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$MultilineLimit>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$MultilineLimit* valueOf($String* name);
	static $Array<::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$MultilineLimit>* values();
	static ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$MultilineLimit* DEPTH;
	static ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$MultilineLimit* LENGTH;
	static $Array<::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$MultilineLimit>* $VALUES;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("DEPTH")
#pragma pop_macro("LENGTH")

#endif // _com_sun_tools_javac_api_DiagnosticFormatter$Configuration$MultilineLimit_h_