#ifndef _com_sun_tools_javac_api_DiagnosticFormatter$Configuration$DiagnosticPart_h_
#define _com_sun_tools_javac_api_DiagnosticFormatter$Configuration$DiagnosticPart_h_
//$ class com.sun.tools.javac.api.DiagnosticFormatter$Configuration$DiagnosticPart
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DETAILS")
#undef DETAILS
#pragma push_macro("JLS")
#undef JLS
#pragma push_macro("SOURCE")
#undef SOURCE
#pragma push_macro("SUBDIAGNOSTICS")
#undef SUBDIAGNOSTICS
#pragma push_macro("SUMMARY")
#undef SUMMARY

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $export DiagnosticFormatter$Configuration$DiagnosticPart : public ::java::lang::Enum {
	$class(DiagnosticFormatter$Configuration$DiagnosticPart, 0, ::java::lang::Enum)
public:
	DiagnosticFormatter$Configuration$DiagnosticPart();
	static $Array<::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$DiagnosticPart>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$DiagnosticPart* valueOf($String* name);
	static $Array<::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$DiagnosticPart>* values();
	static ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$DiagnosticPart* SUMMARY;
	static ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$DiagnosticPart* DETAILS;
	static ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$DiagnosticPart* SOURCE;
	static ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$DiagnosticPart* SUBDIAGNOSTICS;
	static ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$DiagnosticPart* JLS;
	static $Array<::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$DiagnosticPart>* $VALUES;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("DETAILS")
#pragma pop_macro("JLS")
#pragma pop_macro("SOURCE")
#pragma pop_macro("SUBDIAGNOSTICS")
#pragma pop_macro("SUMMARY")

#endif // _com_sun_tools_javac_api_DiagnosticFormatter$Configuration$DiagnosticPart_h_