#ifndef _com_sun_tools_javac_parser_JavaTokenizer_h_
#define _com_sun_tools_javac_parser_JavaTokenizer_h_
//$ class com.sun.tools.javac.parser.JavaTokenizer
//$ extends com.sun.tools.javac.parser.UnicodeReader

#include <com/sun/tools/javac/parser/UnicodeReader.h>
#include <java/lang/Array.h>

#pragma push_macro("NOT_FOUND")
#undef NOT_FOUND

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Lint;
					class Lint$LintCategory;
					class Preview;
					class Source;
					class Source$Feature;
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
					class ScannerFactory;
					class Tokens;
					class Tokens$Comment;
					class Tokens$Comment$CommentStyle;
					class Tokens$Token;
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
					class JCDiagnostic$DiagnosticFlag;
					class JCDiagnostic$Error;
					class JCDiagnostic$Warning;
					class List;
					class Log;
					class Name;
					class Names;
					class Position$LineMap;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace nio {
		class CharBuffer;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class $import JavaTokenizer : public ::com::sun::tools::javac::parser::UnicodeReader {
	$class(JavaTokenizer, $NO_CLASS_INIT, ::com::sun::tools::javac::parser::UnicodeReader)
public:
	JavaTokenizer();
	void init$(::com::sun::tools::javac::parser::ScannerFactory* fac, ::java::nio::CharBuffer* cb);
	void init$(::com::sun::tools::javac::parser::ScannerFactory* fac, $chars* array, int32_t length);
	virtual bool acceptOneOfThenPut(char16_t ch1, char16_t ch2);
	virtual bool acceptThenPut(char16_t ch);
	virtual ::com::sun::tools::javac::util::List* appendComment(::com::sun::tools::javac::util::List* comments, ::com::sun::tools::javac::parser::Tokens$Comment* comment);
	void checkIdent();
	virtual void checkSourceLevel(int32_t pos, ::com::sun::tools::javac::code::Source$Feature* feature);
	virtual int32_t errPos();
	virtual void errPos(int32_t pos);
	virtual ::com::sun::tools::javac::util::Position$LineMap* getLineMap();
	bool isEOLN();
	bool isSpecial(char16_t ch);
	virtual void lexError(int32_t pos, ::com::sun::tools::javac::util::JCDiagnostic$Error* key);
	virtual void lexError(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag* flags, int32_t pos, ::com::sun::tools::javac::util::JCDiagnostic$Error* key);
	virtual void lexWarning(::com::sun::tools::javac::code::Lint$LintCategory* lc, int32_t pos, ::com::sun::tools::javac::util::JCDiagnostic$Warning* key);
	virtual ::com::sun::tools::javac::parser::Tokens$Comment* processComment(int32_t pos, int32_t endPos, ::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle* style);
	virtual void processLineTerminator(int32_t pos, int32_t endPos);
	virtual void processWhiteSpace(int32_t pos, int32_t endPos);
	virtual void put(char16_t ch);
	virtual void put();
	virtual void put($String* string);
	virtual void putCodePoint(int32_t codePoint);
	virtual char16_t putThenNext();
	virtual ::com::sun::tools::javac::parser::Tokens$Token* readToken();
	void scanDigits(int32_t pos, int32_t digitRadix);
	void scanFraction(int32_t pos);
	void scanFractionAndSuffix(int32_t pos);
	void scanHexExponentAndSuffix(int32_t pos);
	void scanHexFractionAndSuffix(int32_t pos, bool seendigit);
	void scanIdent();
	void scanLitChar(int32_t pos);
	void scanNumber(int32_t pos, int32_t radix);
	void scanOperator();
	void scanString(int32_t pos);
	void skipIllegalUnderscores();
	void skipLineTerminator();
	static const bool scannerDebug = false;
	int32_t NOT_FOUND = 0;
	::com::sun::tools::javac::code::Source* source = nullptr;
	::com::sun::tools::javac::code::Preview* preview = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::parser::Tokens* tokens = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::parser::Tokens$TokenKind* tk = nullptr;
	int32_t radix = 0;
	::com::sun::tools::javac::util::Name* name = nullptr;
	int32_t errPos$ = 0;
	bool isTextBlock = false;
	bool hasEscapeSequences = false;
	::java::lang::StringBuilder* sb = nullptr;
	::com::sun::tools::javac::parser::ScannerFactory* fac = nullptr;
	::com::sun::tools::javac::code::Lint* lint = nullptr;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("NOT_FOUND")

#endif // _com_sun_tools_javac_parser_JavaTokenizer_h_