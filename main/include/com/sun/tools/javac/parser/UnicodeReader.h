#ifndef _com_sun_tools_javac_parser_UnicodeReader_h_
#define _com_sun_tools_javac_parser_UnicodeReader_h_
//$ class com.sun.tools.javac.parser.UnicodeReader
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class ScannerFactory;
					class UnicodeReader$UnicodeEscapeResult;
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
					class Log;
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

class $import UnicodeReader : public ::java::lang::Object {
	$class(UnicodeReader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UnicodeReader();
	void init$(::com::sun::tools::javac::parser::ScannerFactory* sf, $chars* array, int32_t length);
	virtual bool accept(char16_t ch);
	virtual bool accept($String* string);
	virtual bool acceptOneOf(char16_t ch1, char16_t ch2);
	virtual bool acceptOneOf(char16_t ch1, char16_t ch2, char16_t ch3);
	virtual int32_t digit(int32_t pos, int32_t digitRadix);
	virtual char16_t get();
	virtual int32_t getCodepoint();
	virtual $chars* getRawCharacters();
	virtual $chars* getRawCharacters(int32_t beginIndex, int32_t endIndex);
	virtual bool inRange(char16_t lo, char16_t hi);
	virtual bool is(char16_t ch);
	virtual bool isASCII();
	virtual bool isAvailable();
	virtual bool isOneOf(char16_t ch1, char16_t ch2);
	virtual bool isOneOf(char16_t ch1, char16_t ch2, char16_t ch3);
	virtual bool isOneOf(char16_t ch1, char16_t ch2, char16_t ch3, char16_t ch4, char16_t ch5, char16_t ch6);
	virtual bool isSurrogate();
	virtual int32_t length();
	virtual char16_t next();
	void nextCodePoint();
	void nextCodeUnit();
	void nextUnicodeInputCharacter();
	virtual int32_t position();
	virtual void reset(int32_t pos);
	virtual void skip(char16_t ch);
	virtual void skipToEOLN();
	virtual void skipWhitespace();
	::com::sun::tools::javac::parser::UnicodeReader$UnicodeEscapeResult* unicodeEscape();
	$chars* buffer = nullptr;
	int32_t length$ = 0;
	int32_t position$ = 0;
	int32_t width = 0;
	char16_t character = 0;
	int32_t codepoint = 0;
	bool wasBackslash = false;
	bool wasUnicodeEscape = false;
	::com::sun::tools::javac::util::Log* log = nullptr;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_UnicodeReader_h_