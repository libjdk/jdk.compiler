#ifndef _com_sun_tools_javac_parser_Tokens$NumericToken_h_
#define _com_sun_tools_javac_parser_Tokens$NumericToken_h_
//$ class com.sun.tools.javac.parser.Tokens$NumericToken
//$ extends com.sun.tools.javac.parser.Tokens$StringToken

#include <com/sun/tools/javac/parser/Tokens$StringToken.h>

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

class $export Tokens$NumericToken : public ::com::sun::tools::javac::parser::Tokens$StringToken {
	$class(Tokens$NumericToken, $NO_CLASS_INIT, ::com::sun::tools::javac::parser::Tokens$StringToken)
public:
	Tokens$NumericToken();
	void init$(::com::sun::tools::javac::parser::Tokens$TokenKind* kind, int32_t pos, int32_t endPos, $String* stringVal, int32_t radix, ::com::sun::tools::javac::util::List* comments);
	virtual void checkKind() override;
	virtual int32_t radix() override;
	int32_t radix$ = 0;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_Tokens$NumericToken_h_