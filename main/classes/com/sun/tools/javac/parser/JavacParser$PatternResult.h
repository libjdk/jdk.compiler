#ifndef _com_sun_tools_javac_parser_JavacParser$PatternResult_h_
#define _com_sun_tools_javac_parser_JavacParser$PatternResult_h_
//$ class com.sun.tools.javac.parser.JavacParser$PatternResult
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("EXPRESSION")
#undef EXPRESSION
#pragma push_macro("PATTERN")
#undef PATTERN

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class JavacParser$PatternResult : public ::java::lang::Enum {
	$class(JavacParser$PatternResult, 0, ::java::lang::Enum)
public:
	JavacParser$PatternResult();
	static $Array<::com::sun::tools::javac::parser::JavacParser$PatternResult>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::parser::JavacParser$PatternResult* valueOf($String* name);
	static $Array<::com::sun::tools::javac::parser::JavacParser$PatternResult>* values();
	static ::com::sun::tools::javac::parser::JavacParser$PatternResult* EXPRESSION;
	static ::com::sun::tools::javac::parser::JavacParser$PatternResult* PATTERN;
	static $Array<::com::sun::tools::javac::parser::JavacParser$PatternResult>* $VALUES;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("EXPRESSION")
#pragma pop_macro("PATTERN")

#endif // _com_sun_tools_javac_parser_JavacParser$PatternResult_h_