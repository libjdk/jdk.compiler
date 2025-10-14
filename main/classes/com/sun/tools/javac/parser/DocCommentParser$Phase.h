#ifndef _com_sun_tools_javac_parser_DocCommentParser$Phase_h_
#define _com_sun_tools_javac_parser_DocCommentParser$Phase_h_
//$ class com.sun.tools.javac.parser.DocCommentParser$Phase
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BODY")
#undef BODY
#pragma push_macro("POSTAMBLE")
#undef POSTAMBLE
#pragma push_macro("PREAMBLE")
#undef PREAMBLE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class DocCommentParser$Phase : public ::java::lang::Enum {
	$class(DocCommentParser$Phase, 0, ::java::lang::Enum)
public:
	DocCommentParser$Phase();
	static $Array<::com::sun::tools::javac::parser::DocCommentParser$Phase>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::parser::DocCommentParser$Phase* valueOf($String* name);
	static $Array<::com::sun::tools::javac::parser::DocCommentParser$Phase>* values();
	static ::com::sun::tools::javac::parser::DocCommentParser$Phase* PREAMBLE;
	static ::com::sun::tools::javac::parser::DocCommentParser$Phase* BODY;
	static ::com::sun::tools::javac::parser::DocCommentParser$Phase* POSTAMBLE;
	static $Array<::com::sun::tools::javac::parser::DocCommentParser$Phase>* $VALUES;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("BODY")
#pragma pop_macro("POSTAMBLE")
#pragma pop_macro("PREAMBLE")

#endif // _com_sun_tools_javac_parser_DocCommentParser$Phase_h_