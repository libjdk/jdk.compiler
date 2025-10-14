#ifndef _com_sun_tools_javac_parser_JavacParser$EnumeratorEstimate_h_
#define _com_sun_tools_javac_parser_JavacParser$EnumeratorEstimate_h_
//$ class com.sun.tools.javac.parser.JavacParser$EnumeratorEstimate
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ENUMERATOR")
#undef ENUMERATOR
#pragma push_macro("MEMBER")
#undef MEMBER
#pragma push_macro("UNKNOWN")
#undef UNKNOWN

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class JavacParser$EnumeratorEstimate : public ::java::lang::Enum {
	$class(JavacParser$EnumeratorEstimate, 0, ::java::lang::Enum)
public:
	JavacParser$EnumeratorEstimate();
	static $Array<::com::sun::tools::javac::parser::JavacParser$EnumeratorEstimate>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::parser::JavacParser$EnumeratorEstimate* valueOf($String* name);
	static $Array<::com::sun::tools::javac::parser::JavacParser$EnumeratorEstimate>* values();
	static ::com::sun::tools::javac::parser::JavacParser$EnumeratorEstimate* ENUMERATOR;
	static ::com::sun::tools::javac::parser::JavacParser$EnumeratorEstimate* MEMBER;
	static ::com::sun::tools::javac::parser::JavacParser$EnumeratorEstimate* UNKNOWN;
	static $Array<::com::sun::tools::javac::parser::JavacParser$EnumeratorEstimate>* $VALUES;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ENUMERATOR")
#pragma pop_macro("MEMBER")
#pragma pop_macro("UNKNOWN")

#endif // _com_sun_tools_javac_parser_JavacParser$EnumeratorEstimate_h_