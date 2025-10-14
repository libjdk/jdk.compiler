#ifndef _com_sun_tools_javac_parser_Tokens$Token$Tag_h_
#define _com_sun_tools_javac_parser_Tokens$Token$Tag_h_
//$ class com.sun.tools.javac.parser.Tokens$Token$Tag
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("NAMED")
#undef NAMED
#pragma push_macro("NUMERIC")
#undef NUMERIC
#pragma push_macro("STRING")
#undef STRING

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class $import Tokens$Token$Tag : public ::java::lang::Enum {
	$class(Tokens$Token$Tag, 0, ::java::lang::Enum)
public:
	Tokens$Token$Tag();
	static $Array<::com::sun::tools::javac::parser::Tokens$Token$Tag>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::parser::Tokens$Token$Tag* valueOf($String* name);
	static $Array<::com::sun::tools::javac::parser::Tokens$Token$Tag>* values();
	static ::com::sun::tools::javac::parser::Tokens$Token$Tag* DEFAULT;
	static ::com::sun::tools::javac::parser::Tokens$Token$Tag* NAMED;
	static ::com::sun::tools::javac::parser::Tokens$Token$Tag* STRING;
	static ::com::sun::tools::javac::parser::Tokens$Token$Tag* NUMERIC;
	static $Array<::com::sun::tools::javac::parser::Tokens$Token$Tag>* $VALUES;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("DEFAULT")
#pragma pop_macro("NAMED")
#pragma pop_macro("NUMERIC")
#pragma pop_macro("STRING")

#endif // _com_sun_tools_javac_parser_Tokens$Token$Tag_h_