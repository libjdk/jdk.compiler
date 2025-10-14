#ifndef _com_sun_tools_javac_parser_UnicodeReader$UnicodeEscapeResult_h_
#define _com_sun_tools_javac_parser_UnicodeReader$UnicodeEscapeResult_h_
//$ class com.sun.tools.javac.parser.UnicodeReader$UnicodeEscapeResult
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BACKSLASH")
#undef BACKSLASH
#pragma push_macro("BROKEN_ESCAPE")
#undef BROKEN_ESCAPE
#pragma push_macro("VALID_ESCAPE")
#undef VALID_ESCAPE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class UnicodeReader$UnicodeEscapeResult : public ::java::lang::Enum {
	$class(UnicodeReader$UnicodeEscapeResult, 0, ::java::lang::Enum)
public:
	UnicodeReader$UnicodeEscapeResult();
	static $Array<::com::sun::tools::javac::parser::UnicodeReader$UnicodeEscapeResult>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::parser::UnicodeReader$UnicodeEscapeResult* valueOf($String* name);
	static $Array<::com::sun::tools::javac::parser::UnicodeReader$UnicodeEscapeResult>* values();
	static ::com::sun::tools::javac::parser::UnicodeReader$UnicodeEscapeResult* BACKSLASH;
	static ::com::sun::tools::javac::parser::UnicodeReader$UnicodeEscapeResult* VALID_ESCAPE;
	static ::com::sun::tools::javac::parser::UnicodeReader$UnicodeEscapeResult* BROKEN_ESCAPE;
	static $Array<::com::sun::tools::javac::parser::UnicodeReader$UnicodeEscapeResult>* $VALUES;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("BACKSLASH")
#pragma pop_macro("BROKEN_ESCAPE")
#pragma pop_macro("VALID_ESCAPE")

#endif // _com_sun_tools_javac_parser_UnicodeReader$UnicodeEscapeResult_h_