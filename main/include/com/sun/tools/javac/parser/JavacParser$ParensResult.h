#ifndef _com_sun_tools_javac_parser_JavacParser$ParensResult_h_
#define _com_sun_tools_javac_parser_JavacParser$ParensResult_h_
//$ class com.sun.tools.javac.parser.JavacParser$ParensResult
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CAST")
#undef CAST
#pragma push_macro("EXPLICIT_LAMBDA")
#undef EXPLICIT_LAMBDA
#pragma push_macro("IMPLICIT_LAMBDA")
#undef IMPLICIT_LAMBDA
#pragma push_macro("PARENS")
#undef PARENS

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class $import JavacParser$ParensResult : public ::java::lang::Enum {
	$class(JavacParser$ParensResult, 0, ::java::lang::Enum)
public:
	JavacParser$ParensResult();
	static $Array<::com::sun::tools::javac::parser::JavacParser$ParensResult>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::parser::JavacParser$ParensResult* valueOf($String* name);
	static $Array<::com::sun::tools::javac::parser::JavacParser$ParensResult>* values();
	static ::com::sun::tools::javac::parser::JavacParser$ParensResult* CAST;
	static ::com::sun::tools::javac::parser::JavacParser$ParensResult* EXPLICIT_LAMBDA;
	static ::com::sun::tools::javac::parser::JavacParser$ParensResult* IMPLICIT_LAMBDA;
	static ::com::sun::tools::javac::parser::JavacParser$ParensResult* PARENS;
	static $Array<::com::sun::tools::javac::parser::JavacParser$ParensResult>* $VALUES;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("CAST")
#pragma pop_macro("EXPLICIT_LAMBDA")
#pragma pop_macro("IMPLICIT_LAMBDA")
#pragma pop_macro("PARENS")

#endif // _com_sun_tools_javac_parser_JavacParser$ParensResult_h_