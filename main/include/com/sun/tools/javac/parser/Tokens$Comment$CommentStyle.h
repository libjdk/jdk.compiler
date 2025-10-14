#ifndef _com_sun_tools_javac_parser_Tokens$Comment$CommentStyle_h_
#define _com_sun_tools_javac_parser_Tokens$Comment$CommentStyle_h_
//$ class com.sun.tools.javac.parser.Tokens$Comment$CommentStyle
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BLOCK")
#undef BLOCK
#pragma push_macro("JAVADOC")
#undef JAVADOC
#pragma push_macro("LINE")
#undef LINE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class $import Tokens$Comment$CommentStyle : public ::java::lang::Enum {
	$class(Tokens$Comment$CommentStyle, 0, ::java::lang::Enum)
public:
	Tokens$Comment$CommentStyle();
	static $Array<::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle* valueOf($String* name);
	static $Array<::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle>* values();
	static ::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle* LINE;
	static ::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle* BLOCK;
	static ::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle* JAVADOC;
	static $Array<::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle>* $VALUES;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("BLOCK")
#pragma pop_macro("JAVADOC")
#pragma pop_macro("LINE")

#endif // _com_sun_tools_javac_parser_Tokens$Comment$CommentStyle_h_