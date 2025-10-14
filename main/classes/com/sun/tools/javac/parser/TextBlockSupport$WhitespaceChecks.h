#ifndef _com_sun_tools_javac_parser_TextBlockSupport$WhitespaceChecks_h_
#define _com_sun_tools_javac_parser_TextBlockSupport$WhitespaceChecks_h_
//$ class com.sun.tools.javac.parser.TextBlockSupport$WhitespaceChecks
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("INCONSISTENT")
#undef INCONSISTENT
#pragma push_macro("TRAILING")
#undef TRAILING

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class TextBlockSupport$WhitespaceChecks : public ::java::lang::Enum {
	$class(TextBlockSupport$WhitespaceChecks, 0, ::java::lang::Enum)
public:
	TextBlockSupport$WhitespaceChecks();
	static $Array<::com::sun::tools::javac::parser::TextBlockSupport$WhitespaceChecks>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::parser::TextBlockSupport$WhitespaceChecks* valueOf($String* name);
	static $Array<::com::sun::tools::javac::parser::TextBlockSupport$WhitespaceChecks>* values();
	static ::com::sun::tools::javac::parser::TextBlockSupport$WhitespaceChecks* INCONSISTENT;
	static ::com::sun::tools::javac::parser::TextBlockSupport$WhitespaceChecks* TRAILING;
	static $Array<::com::sun::tools::javac::parser::TextBlockSupport$WhitespaceChecks>* $VALUES;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("INCONSISTENT")
#pragma pop_macro("TRAILING")

#endif // _com_sun_tools_javac_parser_TextBlockSupport$WhitespaceChecks_h_