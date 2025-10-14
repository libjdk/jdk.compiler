#ifndef _com_sun_tools_javac_parser_Scanner_h_
#define _com_sun_tools_javac_parser_Scanner_h_
//$ class com.sun.tools.javac.parser.Scanner
//$ extends com.sun.tools.javac.parser.Lexer

#include <com/sun/tools/javac/parser/Lexer.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class JavaTokenizer;
					class ScannerFactory;
					class Tokens;
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
namespace java {
	namespace nio {
		class CharBuffer;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class $import Scanner : public ::com::sun::tools::javac::parser::Lexer {
	$class(Scanner, $NO_CLASS_INIT, ::com::sun::tools::javac::parser::Lexer)
public:
	Scanner();
	void init$(::com::sun::tools::javac::parser::ScannerFactory* fac, ::java::nio::CharBuffer* buf);
	void init$(::com::sun::tools::javac::parser::ScannerFactory* fac, $chars* buf, int32_t inputLength);
	void init$(::com::sun::tools::javac::parser::ScannerFactory* fac, ::com::sun::tools::javac::parser::JavaTokenizer* tokenizer);
	void ensureLookahead(int32_t lookahead);
	virtual int32_t errPos() override;
	virtual void errPos(int32_t pos) override;
	virtual ::com::sun::tools::javac::util::Position$LineMap* getLineMap() override;
	virtual void nextToken() override;
	virtual ::com::sun::tools::javac::parser::Tokens$Token* prevToken() override;
	virtual ::com::sun::tools::javac::parser::Tokens$Token* split() override;
	virtual ::com::sun::tools::javac::parser::Tokens$Token* token() override;
	virtual ::com::sun::tools::javac::parser::Tokens$Token* token(int32_t lookahead) override;
	::com::sun::tools::javac::parser::Tokens* tokens = nullptr;
	::com::sun::tools::javac::parser::Tokens$Token* token$ = nullptr;
	::com::sun::tools::javac::parser::Tokens$Token* prevToken$ = nullptr;
	::java::util::List* savedTokens = nullptr;
	::com::sun::tools::javac::parser::JavaTokenizer* tokenizer = nullptr;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_Scanner_h_