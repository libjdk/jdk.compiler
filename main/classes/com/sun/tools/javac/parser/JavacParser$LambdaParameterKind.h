#ifndef _com_sun_tools_javac_parser_JavacParser$LambdaParameterKind_h_
#define _com_sun_tools_javac_parser_JavacParser$LambdaParameterKind_h_
//$ class com.sun.tools.javac.parser.JavacParser$LambdaParameterKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("EXPLICIT")
#undef EXPLICIT
#pragma push_macro("IMPLICIT")
#undef IMPLICIT
#pragma push_macro("VAR")
#undef VAR

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class $export JavacParser$LambdaParameterKind : public ::java::lang::Enum {
	$class(JavacParser$LambdaParameterKind, 0, ::java::lang::Enum)
public:
	JavacParser$LambdaParameterKind();
	static $Array<::com::sun::tools::javac::parser::JavacParser$LambdaParameterKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t index);
	static ::com::sun::tools::javac::parser::JavacParser$LambdaParameterKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::parser::JavacParser$LambdaParameterKind>* values();
	static ::com::sun::tools::javac::parser::JavacParser$LambdaParameterKind* VAR;
	static ::com::sun::tools::javac::parser::JavacParser$LambdaParameterKind* EXPLICIT;
	static ::com::sun::tools::javac::parser::JavacParser$LambdaParameterKind* IMPLICIT;
	static ::com::sun::tools::javac::parser::JavacParser$LambdaParameterKind* ERROR;
	static $Array<::com::sun::tools::javac::parser::JavacParser$LambdaParameterKind>* $VALUES;
	int32_t index = 0;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ERROR")
#pragma pop_macro("EXPLICIT")
#pragma pop_macro("IMPLICIT")
#pragma pop_macro("VAR")

#endif // _com_sun_tools_javac_parser_JavacParser$LambdaParameterKind_h_