#ifndef _com_sun_tools_javac_parser_TextBlockSupport_h_
#define _com_sun_tools_javac_parser_TextBlockSupport_h_
//$ class com.sun.tools.javac.parser.TextBlockSupport
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class TextBlockSupport : public ::java::lang::Object {
	$class(TextBlockSupport, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TextBlockSupport();
	void init$();
	static ::java::util::Set* checkWhitespace($String* string);
	static int32_t indexOfNonWhitespace($String* string);
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_TextBlockSupport_h_