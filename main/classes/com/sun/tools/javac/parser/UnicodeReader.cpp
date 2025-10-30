#include <com/sun/tools/javac/parser/UnicodeReader.h>

#include <com/sun/tools/javac/parser/ScannerFactory.h>
#include <com/sun/tools/javac/parser/UnicodeReader$1.h>
#include <com/sun/tools/javac/parser/UnicodeReader$UnicodeEscapeResult.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef BACKSLASH
#undef BROKEN_ESCAPE
#undef VALID_ESCAPE

using $ScannerFactory = ::com::sun::tools::javac::parser::ScannerFactory;
using $UnicodeReader$1 = ::com::sun::tools::javac::parser::UnicodeReader$1;
using $UnicodeReader$UnicodeEscapeResult = ::com::sun::tools::javac::parser::UnicodeReader$UnicodeEscapeResult;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $Log = ::com::sun::tools::javac::util::Log;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _UnicodeReader_FieldInfo_[] = {
	{"buffer", "[C", nullptr, $PRIVATE | $FINAL, $field(UnicodeReader, buffer)},
	{"length", "I", nullptr, $PRIVATE | $FINAL, $field(UnicodeReader, length$)},
	{"position", "I", nullptr, $PRIVATE, $field(UnicodeReader, position$)},
	{"width", "I", nullptr, $PRIVATE, $field(UnicodeReader, width)},
	{"character", "C", nullptr, $PRIVATE, $field(UnicodeReader, character)},
	{"codepoint", "I", nullptr, $PRIVATE, $field(UnicodeReader, codepoint)},
	{"wasBackslash", "Z", nullptr, $PRIVATE, $field(UnicodeReader, wasBackslash)},
	{"wasUnicodeEscape", "Z", nullptr, $PRIVATE, $field(UnicodeReader, wasUnicodeEscape)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(UnicodeReader, log)},
	{}
};

$MethodInfo _UnicodeReader_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/ScannerFactory;[CI)V", nullptr, $PROTECTED, $method(static_cast<void(UnicodeReader::*)($ScannerFactory*,$chars*,int32_t)>(&UnicodeReader::init$))},
	{"accept", "(C)Z", nullptr, $PROTECTED},
	{"accept", "(Ljava/lang/String;)Z", nullptr, $PROTECTED},
	{"acceptOneOf", "(CC)Z", nullptr, $PROTECTED},
	{"acceptOneOf", "(CCC)Z", nullptr, $PROTECTED},
	{"digit", "(II)I", nullptr, $PROTECTED},
	{"get", "()C", nullptr, $PROTECTED},
	{"getCodepoint", "()I", nullptr, $PROTECTED},
	{"getRawCharacters", "()[C", nullptr, $PUBLIC},
	{"getRawCharacters", "(II)[C", nullptr, $PUBLIC},
	{"inRange", "(CC)Z", nullptr, $PROTECTED},
	{"is", "(C)Z", nullptr, $PROTECTED},
	{"isASCII", "()Z", nullptr, $PROTECTED},
	{"isAvailable", "()Z", nullptr, $PROTECTED},
	{"isOneOf", "(CC)Z", nullptr, $PROTECTED},
	{"isOneOf", "(CCC)Z", nullptr, $PROTECTED},
	{"isOneOf", "(CCCCCC)Z", nullptr, $PROTECTED},
	{"isSurrogate", "()Z", nullptr, $PROTECTED},
	{"length", "()I", nullptr, $PROTECTED},
	{"next", "()C", nullptr, $PROTECTED},
	{"nextCodePoint", "()V", nullptr, $PRIVATE, $method(static_cast<void(UnicodeReader::*)()>(&UnicodeReader::nextCodePoint))},
	{"nextCodeUnit", "()V", nullptr, $PRIVATE, $method(static_cast<void(UnicodeReader::*)()>(&UnicodeReader::nextCodeUnit))},
	{"nextUnicodeInputCharacter", "()V", nullptr, $PRIVATE, $method(static_cast<void(UnicodeReader::*)()>(&UnicodeReader::nextUnicodeInputCharacter))},
	{"position", "()I", nullptr, $PROTECTED},
	{"reset", "(I)V", nullptr, $PROTECTED},
	{"skip", "(C)V", nullptr, $PROTECTED},
	{"skipToEOLN", "()V", nullptr, $PROTECTED},
	{"skipWhitespace", "()V", nullptr, $PROTECTED},
	{"unicodeEscape", "()Lcom/sun/tools/javac/parser/UnicodeReader$UnicodeEscapeResult;", nullptr, $PRIVATE, $method(static_cast<$UnicodeReader$UnicodeEscapeResult*(UnicodeReader::*)()>(&UnicodeReader::unicodeEscape))},
	{}
};

$InnerClassInfo _UnicodeReader_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.UnicodeReader$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.parser.UnicodeReader$PositionTrackingReader", "com.sun.tools.javac.parser.UnicodeReader", "PositionTrackingReader", $STATIC},
	{"com.sun.tools.javac.parser.UnicodeReader$UnicodeEscapeResult", "com.sun.tools.javac.parser.UnicodeReader", "UnicodeEscapeResult", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _UnicodeReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.parser.UnicodeReader",
	"java.lang.Object",
	nullptr,
	_UnicodeReader_FieldInfo_,
	_UnicodeReader_MethodInfo_,
	nullptr,
	nullptr,
	_UnicodeReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.UnicodeReader$1,com.sun.tools.javac.parser.UnicodeReader$PositionTrackingReader,com.sun.tools.javac.parser.UnicodeReader$UnicodeEscapeResult"
};

$Object* allocate$UnicodeReader($Class* clazz) {
	return $of($alloc(UnicodeReader));
}

void UnicodeReader::init$($ScannerFactory* sf, $chars* array, int32_t length) {
	$set(this, buffer, array);
	this->length$ = length;
	this->position$ = 0;
	this->width = 0;
	this->character = u'\0';
	this->codepoint = 0;
	this->wasBackslash = false;
	this->wasUnicodeEscape = false;
	$set(this, log, $nc(sf)->log);
	nextCodePoint();
}

int32_t UnicodeReader::length() {
	return this->length$;
}

bool UnicodeReader::isAvailable() {
	return this->position$ < this->length$;
}

void UnicodeReader::nextCodeUnit() {
	int32_t index = this->position$ + this->width;
	if (this->length$ <= index) {
		this->character = (char16_t)26;
	} else {
		this->character = $nc(this->buffer)->get(index);
		++this->width;
	}
}

void UnicodeReader::nextUnicodeInputCharacter() {
	this->position$ += this->width;
	this->width = 0;
	nextCodeUnit();
	if (this->character == u'\\' && (!this->wasBackslash || this->wasUnicodeEscape)) {
		$init($UnicodeReader$1);
		switch ($nc($UnicodeReader$1::$SwitchMap$com$sun$tools$javac$parser$UnicodeReader$UnicodeEscapeResult)->get($nc(($(unicodeEscape())))->ordinal())) {
		case 1:
			{
				{
					this->wasUnicodeEscape = false;
					this->wasBackslash = !this->wasBackslash;
				}
				break;
			}
		case 2:
			{
				{
					this->wasUnicodeEscape = true;
					this->wasBackslash = this->character == u'\\' && !this->wasBackslash;
				}
				break;
			}
		case 3:
			{
				nextUnicodeInputCharacter();
				break;
			}
		}
	} else {
		this->wasBackslash = false;
		this->wasUnicodeEscape = false;
	}
	this->codepoint = (int32_t)this->character;
}

void UnicodeReader::nextCodePoint() {
	nextUnicodeInputCharacter();
	bool var$0 = isASCII();
	if (var$0 || !$Character::isHighSurrogate(this->character)) {
		return;
	}
	char16_t hi = this->character;
	int32_t savePosition = this->position$;
	int32_t saveWidth = this->width;
	nextUnicodeInputCharacter();
	char16_t lo = this->character;
	if ($Character::isLowSurrogate(lo)) {
		this->position$ = savePosition;
		this->width += saveWidth;
		this->codepoint = $Character::toCodePoint(hi, lo);
	} else {
		this->position$ = savePosition;
		this->width = saveWidth;
		this->character = hi;
		this->codepoint = (int32_t)hi;
	}
}

$UnicodeReader$UnicodeEscapeResult* UnicodeReader::unicodeEscape() {
	int32_t start = this->position$ + this->width;
	this->character = u'\\';
	this->width = 1;
	int32_t index = 0;
	for (index = start; index < this->length$; ++index) {
		if ($nc(this->buffer)->get(index) != u'u') {
			break;
		}
	}
	if (index == start) {
		$init($UnicodeReader$UnicodeEscapeResult);
		return $UnicodeReader$UnicodeEscapeResult::BACKSLASH;
	}
	int32_t code = 0;
	for (int32_t i = 0; i < 4; ++i) {
		int32_t digit = index < this->length$ ? $Character::digit($nc(this->buffer)->get(index), 16) : -1;
		code = (code << 4) | digit;
		if (code < 0) {
			break;
		}
		++index;
	}
	this->width = index - this->position$;
	if (code >= 0) {
		this->character = (char16_t)code;
		$init($UnicodeReader$UnicodeEscapeResult);
		return $UnicodeReader$UnicodeEscapeResult::VALID_ESCAPE;
	} else {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error(index, $CompilerProperties$Errors::IllegalUnicodeEsc);
		$init($UnicodeReader$UnicodeEscapeResult);
		return $UnicodeReader$UnicodeEscapeResult::BROKEN_ESCAPE;
	}
}

int32_t UnicodeReader::position() {
	return this->position$;
}

void UnicodeReader::reset(int32_t pos) {
	this->position$ = pos;
	this->width = 0;
	this->wasBackslash = false;
	this->wasUnicodeEscape = false;
	nextCodePoint();
}

char16_t UnicodeReader::get() {
	return this->character;
}

int32_t UnicodeReader::getCodepoint() {
	return this->codepoint;
}

bool UnicodeReader::isSurrogate() {
	return 0x0000FFFF < this->codepoint;
}

bool UnicodeReader::isASCII() {
	return this->character <= 127;
}

char16_t UnicodeReader::next() {
	nextCodePoint();
	return this->character;
}

bool UnicodeReader::is(char16_t ch) {
	return this->character == ch;
}

bool UnicodeReader::isOneOf(char16_t ch1, char16_t ch2) {
	bool var$0 = is(ch1);
	return var$0 || is(ch2);
}

bool UnicodeReader::isOneOf(char16_t ch1, char16_t ch2, char16_t ch3) {
	bool var$1 = is(ch1);
	bool var$0 = var$1 || is(ch2);
	return var$0 || is(ch3);
}

bool UnicodeReader::isOneOf(char16_t ch1, char16_t ch2, char16_t ch3, char16_t ch4, char16_t ch5, char16_t ch6) {
	bool var$4 = is(ch1);
	bool var$3 = var$4 || is(ch2);
	bool var$2 = var$3 || is(ch3);
	bool var$1 = var$2 || is(ch4);
	bool var$0 = var$1 || is(ch5);
	return var$0 || is(ch6);
}

bool UnicodeReader::inRange(char16_t lo, char16_t hi) {
	return lo <= this->character && this->character <= hi;
}

bool UnicodeReader::accept(char16_t ch) {
	if (is(ch)) {
		next();
		return true;
	}
	return false;
}

bool UnicodeReader::acceptOneOf(char16_t ch1, char16_t ch2) {
	if (isOneOf(ch1, ch2)) {
		next();
		return true;
	}
	return false;
}

bool UnicodeReader::acceptOneOf(char16_t ch1, char16_t ch2, char16_t ch3) {
	if (isOneOf(ch1, ch2, ch3)) {
		next();
		return true;
	}
	return false;
}

void UnicodeReader::skip(char16_t ch) {
	while (accept(ch)) {
	}
}

void UnicodeReader::skipWhitespace() {
	while (acceptOneOf(u' ', u'\t', u'\f')) {
	}
}

void UnicodeReader::skipToEOLN() {
	while (isAvailable()) {
		if (isOneOf(u'\r', u'\n')) {
			break;
		}
		next();
	}
}

bool UnicodeReader::accept($String* string) {
	bool var$0 = $nc(string)->length() == 0;
	if (var$0 || !is($nc(string)->charAt(0))) {
		return false;
	}
	int32_t savedPosition = this->position$;
	nextCodePoint();
	for (int32_t i = 1; i < $nc(string)->length(); ++i) {
		if (!is(string->charAt(i))) {
			reset(savedPosition);
			return false;
		}
		nextCodePoint();
	}
	return true;
}

int32_t UnicodeReader::digit(int32_t pos, int32_t digitRadix) {
	int32_t result = 0;
	if (inRange(u'0', u'9')) {
		result = this->character - u'0';
		return result < digitRadix ? result : -1;
	}
	result = isSurrogate() ? $Character::digit(this->codepoint, digitRadix) : $Character::digit(this->character, digitRadix);
	if (result >= 0 && !isASCII()) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error(position(), $CompilerProperties$Errors::IllegalNonasciiDigit);
		this->character = "0123456789abcdef"_s->charAt(result);
	}
	return result;
}

$chars* UnicodeReader::getRawCharacters() {
	return this->length$ == $nc(this->buffer)->length ? this->buffer : $Arrays::copyOf(this->buffer, this->length$);
}

$chars* UnicodeReader::getRawCharacters(int32_t beginIndex, int32_t endIndex) {
	return $Arrays::copyOfRange(this->buffer, beginIndex, endIndex);
}

UnicodeReader::UnicodeReader() {
}

$Class* UnicodeReader::load$($String* name, bool initialize) {
	$loadClass(UnicodeReader, name, initialize, &_UnicodeReader_ClassInfo_, allocate$UnicodeReader);
	return class$;
}

$Class* UnicodeReader::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com