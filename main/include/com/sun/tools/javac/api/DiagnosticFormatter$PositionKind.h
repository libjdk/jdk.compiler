#ifndef _com_sun_tools_javac_api_DiagnosticFormatter$PositionKind_h_
#define _com_sun_tools_javac_api_DiagnosticFormatter$PositionKind_h_
//$ class com.sun.tools.javac.api.DiagnosticFormatter$PositionKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("COLUMN")
#undef COLUMN
#pragma push_macro("END")
#undef END
#pragma push_macro("LINE")
#undef LINE
#pragma push_macro("OFFSET")
#undef OFFSET
#pragma push_macro("START")
#undef START

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $import DiagnosticFormatter$PositionKind : public ::java::lang::Enum {
	$class(DiagnosticFormatter$PositionKind, 0, ::java::lang::Enum)
public:
	DiagnosticFormatter$PositionKind();
	static $Array<::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind>* values();
	static ::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind* START;
	static ::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind* END;
	static ::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind* LINE;
	static ::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind* COLUMN;
	static ::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind* OFFSET;
	static $Array<::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind>* $VALUES;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("COLUMN")
#pragma pop_macro("END")
#pragma pop_macro("LINE")
#pragma pop_macro("OFFSET")
#pragma pop_macro("START")

#endif // _com_sun_tools_javac_api_DiagnosticFormatter$PositionKind_h_