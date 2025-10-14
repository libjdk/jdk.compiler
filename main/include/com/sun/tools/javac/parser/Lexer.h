#ifndef _com_sun_tools_javac_parser_Lexer_h_
#define _com_sun_tools_javac_parser_Lexer_h_
//$ interface com.sun.tools.javac.parser.Lexer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class Tokens$Token;
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
					class Position$LineMap;
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

class $import Lexer : public ::java::lang::Object {
	$interface(Lexer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t errPos() {return 0;}
	virtual void errPos(int32_t pos) {}
	virtual ::com::sun::tools::javac::util::Position$LineMap* getLineMap() {return nullptr;}
	virtual void nextToken() {}
	virtual ::com::sun::tools::javac::parser::Tokens$Token* prevToken() {return nullptr;}
	virtual ::com::sun::tools::javac::parser::Tokens$Token* split() {return nullptr;}
	virtual ::com::sun::tools::javac::parser::Tokens$Token* token() {return nullptr;}
	virtual ::com::sun::tools::javac::parser::Tokens$Token* token(int32_t lookahead) {return nullptr;}
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_Lexer_h_