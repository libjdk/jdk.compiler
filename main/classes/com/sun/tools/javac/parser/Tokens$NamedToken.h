#ifndef _com_sun_tools_javac_parser_Tokens$NamedToken_h_
#define _com_sun_tools_javac_parser_Tokens$NamedToken_h_
//$ class com.sun.tools.javac.parser.Tokens$NamedToken
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
					class Name;
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

class $export Tokens$NamedToken : public ::com::sun::tools::javac::parser::Tokens$Token {
	$class(Tokens$NamedToken, $NO_CLASS_INIT, ::com::sun::tools::javac::parser::Tokens$Token)
public:
	Tokens$NamedToken();
	void init$(::com::sun::tools::javac::parser::Tokens$TokenKind* kind, int32_t pos, int32_t endPos, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* comments);
	virtual void checkKind() override;
	virtual ::com::sun::tools::javac::util::Name* name() override;
	::com::sun::tools::javac::util::Name* name$ = nullptr;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_Tokens$NamedToken_h_