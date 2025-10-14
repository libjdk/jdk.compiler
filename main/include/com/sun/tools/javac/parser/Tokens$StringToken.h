#ifndef _com_sun_tools_javac_parser_Tokens$StringToken_h_
#define _com_sun_tools_javac_parser_Tokens$StringToken_h_
//$ class com.sun.tools.javac.parser.Tokens$StringToken
//$ extends com.sun.tools.javac.parser.Tokens$Token

#include <com/sun/tools/javac/parser/Tokens$Token.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class Tokens$TokenKind;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class List;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class $import Tokens$StringToken : public ::com::sun::tools::javac::parser::Tokens$Token {
	$class(Tokens$StringToken, $NO_CLASS_INIT, ::com::sun::tools::javac::parser::Tokens$Token)
public:
	Tokens$StringToken();
	void init$(::com::sun::tools::javac::parser::Tokens$TokenKind* kind, int32_t pos, int32_t endPos, $String* stringVal, ::com::sun::tools::javac::util::List* comments);
	virtual void checkKind() override;
	virtual $String* stringVal() override;
	$String* stringVal$ = nullptr;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_Tokens$StringToken_h_