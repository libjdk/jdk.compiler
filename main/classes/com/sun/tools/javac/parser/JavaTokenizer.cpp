#include <com/sun/tools/javac/parser/JavaTokenizer.h>

#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Preview.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/parser/JavaTokenizer$BasicComment.h>
#include <com/sun/tools/javac/parser/ScannerFactory.h>
#include <com/sun/tools/javac/parser/TextBlockSupport$WhitespaceChecks.h>
#include <com/sun/tools/javac/parser/TextBlockSupport.h>
#include <com/sun/tools/javac/parser/Tokens$Comment$CommentStyle.h>
#include <com/sun/tools/javac/parser/Tokens$Comment.h>
#include <com/sun/tools/javac/parser/Tokens$NamedToken.h>
#include <com/sun/tools/javac/parser/Tokens$NumericToken.h>
#include <com/sun/tools/javac/parser/Tokens$StringToken.h>
#include <com/sun/tools/javac/parser/Tokens$Token$Tag.h>
#include <com/sun/tools/javac/parser/Tokens$Token.h>
#include <com/sun/tools/javac/parser/Tokens$TokenKind.h>
#include <com/sun/tools/javac/parser/Tokens.h>
#include <com/sun/tools/javac/parser/UnicodeReader.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$SimpleDiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Position$LineMap.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/lang/Math.h>
#include <java/nio/CharBuffer.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef BLOCK
#undef CHARLITERAL
#undef COMMA
#undef DEFAULT
#undef DOT
#undef DOUBLELITERAL
#undef ELLIPSIS
#undef EOF
#undef ERROR
#undef FLOATLITERAL
#undef IDENTIFIER
#undef INCONSISTENT
#undef INTLITERAL
#undef JAVADOC
#undef LBRACE
#undef LBRACKET
#undef LINE
#undef LONGLITERAL
#undef LPAREN
#undef NAMED
#undef NOPOS
#undef NOT_FOUND
#undef RBRACE
#undef RBRACKET
#undef RPAREN
#undef SEMI
#undef SLASH
#undef SLASHEQ
#undef SOURCE_LEVEL
#undef STRING
#undef STRINGLITERAL
#undef TEXT_BLOCKS
#undef TRAILING

using $Lint = ::com::sun::tools::javac::code::Lint;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Preview = ::com::sun::tools::javac::code::Preview;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $JavaTokenizer$BasicComment = ::com::sun::tools::javac::parser::JavaTokenizer$BasicComment;
using $ScannerFactory = ::com::sun::tools::javac::parser::ScannerFactory;
using $TextBlockSupport = ::com::sun::tools::javac::parser::TextBlockSupport;
using $TextBlockSupport$WhitespaceChecks = ::com::sun::tools::javac::parser::TextBlockSupport$WhitespaceChecks;
using $Tokens = ::com::sun::tools::javac::parser::Tokens;
using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $Tokens$Comment$CommentStyle = ::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle;
using $Tokens$NamedToken = ::com::sun::tools::javac::parser::Tokens$NamedToken;
using $Tokens$NumericToken = ::com::sun::tools::javac::parser::Tokens$NumericToken;
using $Tokens$StringToken = ::com::sun::tools::javac::parser::Tokens$StringToken;
using $Tokens$Token = ::com::sun::tools::javac::parser::Tokens$Token;
using $Tokens$Token$Tag = ::com::sun::tools::javac::parser::Tokens$Token$Tag;
using $Tokens$TokenKind = ::com::sun::tools::javac::parser::Tokens$TokenKind;
using $UnicodeReader = ::com::sun::tools::javac::parser::UnicodeReader;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$SimpleDiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$SimpleDiagnosticPosition;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Position = ::com::sun::tools::javac::util::Position;
using $Position$LineMap = ::com::sun::tools::javac::util::Position$LineMap;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _JavaTokenizer_FieldInfo_[] = {
	{"scannerDebug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JavaTokenizer, scannerDebug)},
	{"NOT_FOUND", "I", nullptr, $PRIVATE, $field(JavaTokenizer, NOT_FOUND)},
	{"source", "Lcom/sun/tools/javac/code/Source;", nullptr, $PRIVATE, $field(JavaTokenizer, source)},
	{"preview", "Lcom/sun/tools/javac/code/Preview;", nullptr, $PRIVATE, $field(JavaTokenizer, preview)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(JavaTokenizer, log)},
	{"tokens", "Lcom/sun/tools/javac/parser/Tokens;", nullptr, $PRIVATE | $FINAL, $field(JavaTokenizer, tokens)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(JavaTokenizer, names)},
	{"tk", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PROTECTED, $field(JavaTokenizer, tk)},
	{"radix", "I", nullptr, $PROTECTED, $field(JavaTokenizer, radix)},
	{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PROTECTED, $field(JavaTokenizer, name)},
	{"errPos", "I", nullptr, $PROTECTED, $field(JavaTokenizer, errPos$)},
	{"isTextBlock", "Z", nullptr, $PROTECTED, $field(JavaTokenizer, isTextBlock)},
	{"hasEscapeSequences", "Z", nullptr, $PROTECTED, $field(JavaTokenizer, hasEscapeSequences)},
	{"sb", "Ljava/lang/StringBuilder;", nullptr, $PROTECTED, $field(JavaTokenizer, sb)},
	{"fac", "Lcom/sun/tools/javac/parser/ScannerFactory;", nullptr, $PROTECTED, $field(JavaTokenizer, fac)},
	{"lint", "Lcom/sun/tools/javac/code/Lint;", nullptr, $PROTECTED, $field(JavaTokenizer, lint)},
	{}
};

$MethodInfo _JavaTokenizer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/ScannerFactory;Ljava/nio/CharBuffer;)V", nullptr, $PROTECTED, $method(static_cast<void(JavaTokenizer::*)($ScannerFactory*,$CharBuffer*)>(&JavaTokenizer::init$))},
	{"<init>", "(Lcom/sun/tools/javac/parser/ScannerFactory;[CI)V", nullptr, $PROTECTED, $method(static_cast<void(JavaTokenizer::*)($ScannerFactory*,$chars*,int32_t)>(&JavaTokenizer::init$))},
	{"acceptOneOfThenPut", "(CC)Z", nullptr, $PROTECTED},
	{"acceptThenPut", "(C)Z", nullptr, $PROTECTED},
	{"appendComment", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/parser/Tokens$Comment;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/parser/Tokens$Comment;>;Lcom/sun/tools/javac/parser/Tokens$Comment;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/parser/Tokens$Comment;>;", 0},
	{"checkIdent", "()V", nullptr, $PRIVATE, $method(static_cast<void(JavaTokenizer::*)()>(&JavaTokenizer::checkIdent))},
	{"checkSourceLevel", "(ILcom/sun/tools/javac/code/Source$Feature;)V", nullptr, $PROTECTED},
	{"errPos", "()I", nullptr, $PUBLIC},
	{"errPos", "(I)V", nullptr, $PUBLIC},
	{"getLineMap", "()Lcom/sun/tools/javac/util/Position$LineMap;", nullptr, $PUBLIC},
	{"isEOLN", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(JavaTokenizer::*)()>(&JavaTokenizer::isEOLN))},
	{"isSpecial", "(C)Z", nullptr, $PRIVATE, $method(static_cast<bool(JavaTokenizer::*)(char16_t)>(&JavaTokenizer::isSpecial))},
	{"lexError", "(ILcom/sun/tools/javac/util/JCDiagnostic$Error;)V", nullptr, $PROTECTED},
	{"lexError", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;ILcom/sun/tools/javac/util/JCDiagnostic$Error;)V", nullptr, $PROTECTED},
	{"lexWarning", "(Lcom/sun/tools/javac/code/Lint$LintCategory;ILcom/sun/tools/javac/util/JCDiagnostic$Warning;)V", nullptr, $PROTECTED},
	{"processComment", "(IILcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;)Lcom/sun/tools/javac/parser/Tokens$Comment;", nullptr, $PROTECTED},
	{"processLineTerminator", "(II)V", nullptr, $PROTECTED},
	{"processWhiteSpace", "(II)V", nullptr, $PROTECTED},
	{"put", "(C)V", nullptr, $PROTECTED},
	{"put", "()V", nullptr, $PROTECTED},
	{"put", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"putCodePoint", "(I)V", nullptr, $PROTECTED},
	{"putThenNext", "()C", nullptr, $PROTECTED},
	{"readToken", "()Lcom/sun/tools/javac/parser/Tokens$Token;", nullptr, $PUBLIC},
	{"scanDigits", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(JavaTokenizer::*)(int32_t,int32_t)>(&JavaTokenizer::scanDigits))},
	{"scanFraction", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JavaTokenizer::*)(int32_t)>(&JavaTokenizer::scanFraction))},
	{"scanFractionAndSuffix", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JavaTokenizer::*)(int32_t)>(&JavaTokenizer::scanFractionAndSuffix))},
	{"scanHexExponentAndSuffix", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JavaTokenizer::*)(int32_t)>(&JavaTokenizer::scanHexExponentAndSuffix))},
	{"scanHexFractionAndSuffix", "(IZ)V", nullptr, $PRIVATE, $method(static_cast<void(JavaTokenizer::*)(int32_t,bool)>(&JavaTokenizer::scanHexFractionAndSuffix))},
	{"scanIdent", "()V", nullptr, $PRIVATE, $method(static_cast<void(JavaTokenizer::*)()>(&JavaTokenizer::scanIdent))},
	{"scanLitChar", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JavaTokenizer::*)(int32_t)>(&JavaTokenizer::scanLitChar))},
	{"scanNumber", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(JavaTokenizer::*)(int32_t,int32_t)>(&JavaTokenizer::scanNumber))},
	{"scanOperator", "()V", nullptr, $PRIVATE, $method(static_cast<void(JavaTokenizer::*)()>(&JavaTokenizer::scanOperator))},
	{"scanString", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JavaTokenizer::*)(int32_t)>(&JavaTokenizer::scanString))},
	{"skipIllegalUnderscores", "()V", nullptr, $PRIVATE, $method(static_cast<void(JavaTokenizer::*)()>(&JavaTokenizer::skipIllegalUnderscores))},
	{"skipLineTerminator", "()V", nullptr, $PRIVATE, $method(static_cast<void(JavaTokenizer::*)()>(&JavaTokenizer::skipLineTerminator))},
	{}
};

$InnerClassInfo _JavaTokenizer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.JavaTokenizer$BasicComment", "com.sun.tools.javac.parser.JavaTokenizer", "BasicComment", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _JavaTokenizer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.parser.JavaTokenizer",
	"com.sun.tools.javac.parser.UnicodeReader",
	nullptr,
	_JavaTokenizer_FieldInfo_,
	_JavaTokenizer_MethodInfo_,
	nullptr,
	nullptr,
	_JavaTokenizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.JavaTokenizer$BasicComment"
};

$Object* allocate$JavaTokenizer($Class* clazz) {
	return $of($alloc(JavaTokenizer));
}

void JavaTokenizer::init$($ScannerFactory* fac, $CharBuffer* cb) {
	$useLocalCurrentObjectStackCache();
	$var($ScannerFactory, var$0, fac);
	$var($chars, var$1, $JavacFileManager::toArray(cb));
	JavaTokenizer::init$(var$0, var$1, $nc(cb)->limit());
}

void JavaTokenizer::init$($ScannerFactory* fac, $chars* array, int32_t length) {
	$UnicodeReader::init$(fac, array, length);
	this->NOT_FOUND = -1;
	this->errPos$ = $Position::NOPOS;
	$set(this, fac, fac);
	$set(this, log, $nc(fac)->log);
	$set(this, names, fac->names);
	$set(this, tokens, fac->tokens);
	$set(this, source, fac->source);
	$set(this, preview, fac->preview);
	$set(this, lint, fac->lint);
	$set(this, sb, $new($StringBuilder, 256));
}

void JavaTokenizer::checkSourceLevel(int32_t pos, $Source$Feature* feature) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(this->preview)->isPreview(feature);
	if (var$0 && !$nc(this->preview)->isEnabled()) {
		$init($JCDiagnostic$DiagnosticFlag);
		lexError($JCDiagnostic$DiagnosticFlag::SOURCE_LEVEL, pos, $($nc(this->preview)->disabledError(feature)));
	} else if (!$nc(feature)->allowedInSource(this->source)) {
		$init($JCDiagnostic$DiagnosticFlag);
		lexError($JCDiagnostic$DiagnosticFlag::SOURCE_LEVEL, pos, $(feature->error($nc(this->source)->name$)));
	} else if ($nc(this->preview)->isPreview(feature)) {
		$nc(this->preview)->warnPreview(pos, feature);
	}
}

void JavaTokenizer::lexError(int32_t pos, $JCDiagnostic$Error* key) {
	$nc(this->log)->error(pos, key);
	$init($Tokens$TokenKind);
	$set(this, tk, $Tokens$TokenKind::ERROR);
	this->errPos$ = pos;
}

void JavaTokenizer::lexError($JCDiagnostic$DiagnosticFlag* flags, int32_t pos, $JCDiagnostic$Error* key) {
	$nc(this->log)->error(flags, pos, key);
	$init($JCDiagnostic$DiagnosticFlag);
	if (flags != $JCDiagnostic$DiagnosticFlag::SOURCE_LEVEL) {
		$init($Tokens$TokenKind);
		$set(this, tk, $Tokens$TokenKind::ERROR);
	}
	this->errPos$ = pos;
}

void JavaTokenizer::lexWarning($Lint$LintCategory* lc, int32_t pos, $JCDiagnostic$Warning* key) {
	$var($JCDiagnostic$DiagnosticPosition, dp, $new($JCDiagnostic$SimpleDiagnosticPosition, pos));
	$nc(this->log)->warning(lc, dp, key);
}

void JavaTokenizer::put(char16_t ch) {
	$nc(this->sb)->append(ch);
}

void JavaTokenizer::putCodePoint(int32_t codePoint) {
	$nc(this->sb)->appendCodePoint(codePoint);
}

void JavaTokenizer::put() {
	if (isSurrogate()) {
		putCodePoint(getCodepoint());
	} else {
		put(get());
	}
}

void JavaTokenizer::put($String* string) {
	$nc(this->sb)->append(string);
}

char16_t JavaTokenizer::putThenNext() {
	put();
	return next();
}

bool JavaTokenizer::acceptThenPut(char16_t ch) {
	if (is(ch)) {
		put(get());
		next();
		return true;
	}
	return false;
}

bool JavaTokenizer::acceptOneOfThenPut(char16_t ch1, char16_t ch2) {
	if (isOneOf(ch1, ch2)) {
		put(get());
		next();
		return true;
	}
	return false;
}

bool JavaTokenizer::isEOLN() {
	return isOneOf(u'\n', u'\r');
}

void JavaTokenizer::skipLineTerminator() {
	int32_t start = position();
	accept(u'\r');
	accept(u'\n');
	processLineTerminator(start, position());
}

void JavaTokenizer::scanLitChar(int32_t pos) {
	if (acceptThenPut(u'\\')) {
		this->hasEscapeSequences = true;
		{
			char16_t leadch = 0;
			switch (get()) {
			case u'0':
				{}
			case u'1':
				{}
			case u'2':
				{}
			case u'3':
				{}
			case u'4':
				{}
			case u'5':
				{}
			case u'6':
				{}
			case u'7':
				{
					leadch = get();
					putThenNext();
					if (inRange(u'0', u'7')) {
						putThenNext();
						if (leadch <= u'3' && inRange(u'0', u'7')) {
							putThenNext();
						}
					}
					break;
				}
			case u'b':
				{}
			case u't':
				{}
			case u'n':
				{}
			case u'f':
				{}
			case u'r':
				{}
			case u'\'':
				{}
			case u'\"':
				{}
			case u'\\':
				{
					putThenNext();
					break;
				}
			case u's':
				{
					$init($Source$Feature);
					checkSourceLevel(position(), $Source$Feature::TEXT_BLOCKS);
					putThenNext();
					break;
				}
			case u'\n':
				{}
			case u'\r':
				{
					if (this->isTextBlock) {
						skipLineTerminator();
						put(u'\n');
					} else {
						$init($CompilerProperties$Errors);
						lexError(position(), $CompilerProperties$Errors::IllegalEscChar);
					}
					break;
				}
			default:
				{
					$init($CompilerProperties$Errors);
					lexError(position(), $CompilerProperties$Errors::IllegalEscChar);
					break;
				}
			}
		}
	} else {
		putThenNext();
	}
}

void JavaTokenizer::scanString(int32_t pos) {
	$init($Tokens$TokenKind);
	$set(this, tk, $Tokens$TokenKind::STRINGLITERAL);
	int32_t firstEOLN = this->NOT_FOUND;
	this->isTextBlock = accept("\"\"\""_s);
	if (this->isTextBlock) {
		$init($Source$Feature);
		checkSourceLevel(pos, $Source$Feature::TEXT_BLOCKS);
		skipWhitespace();
		if (isEOLN()) {
			skipLineTerminator();
		} else {
			$init($CompilerProperties$Errors);
			lexError(position(), $CompilerProperties$Errors::IllegalTextBlockOpen);
			return;
		}
		while (isAvailable()) {
			if (accept("\"\"\""_s)) {
				return;
			}
			if (isEOLN()) {
				skipLineTerminator();
				put(u'\n');
				if (firstEOLN == this->NOT_FOUND) {
					firstEOLN = position();
				}
			} else {
				scanLitChar(pos);
			}
		}
	} else {
		next();
		while (isAvailable()) {
			if (accept(u'\"')) {
				return;
			}
			if (isEOLN()) {
				break;
			} else {
				scanLitChar(pos);
			}
		}
	}
	$init($CompilerProperties$Errors);
	lexError(pos, this->isTextBlock ? $CompilerProperties$Errors::UnclosedTextBlock : $CompilerProperties$Errors::UnclosedStrLit);
	if (firstEOLN != this->NOT_FOUND) {
		reset(firstEOLN);
	}
}

void JavaTokenizer::scanDigits(int32_t pos, int32_t digitRadix) {
	int32_t leadingUnderscorePos = is(u'_') ? position() : this->NOT_FOUND;
	int32_t trailingUnderscorePos = 0;
	bool var$0 = false;
	do {
		if (!is(u'_')) {
			put();
			trailingUnderscorePos = this->NOT_FOUND;
		} else {
			trailingUnderscorePos = position();
		}
		next();
		var$0 = digit(pos, digitRadix) >= 0;
	} while (var$0 || is(u'_'));
	if (leadingUnderscorePos != this->NOT_FOUND) {
		$init($CompilerProperties$Errors);
		lexError(leadingUnderscorePos, $CompilerProperties$Errors::IllegalUnderscore);
	} else if (trailingUnderscorePos != this->NOT_FOUND) {
		$init($CompilerProperties$Errors);
		lexError(trailingUnderscorePos, $CompilerProperties$Errors::IllegalUnderscore);
	}
}

void JavaTokenizer::scanHexExponentAndSuffix(int32_t pos) {
	if (acceptOneOfThenPut(u'p', u'P')) {
		skipIllegalUnderscores();
		acceptOneOfThenPut(u'+', u'-');
		skipIllegalUnderscores();
		if (digit(pos, 10) >= 0) {
			scanDigits(pos, 10);
		} else {
			$init($CompilerProperties$Errors);
			lexError(pos, $CompilerProperties$Errors::MalformedFpLit);
		}
	} else {
		$init($CompilerProperties$Errors);
		lexError(pos, $CompilerProperties$Errors::MalformedFpLit);
	}
	if (acceptOneOfThenPut(u'f', u'F')) {
		$init($Tokens$TokenKind);
		$set(this, tk, $Tokens$TokenKind::FLOATLITERAL);
		this->radix = 16;
	} else {
		acceptOneOfThenPut(u'd', u'D');
		$init($Tokens$TokenKind);
		$set(this, tk, $Tokens$TokenKind::DOUBLELITERAL);
		this->radix = 16;
	}
}

void JavaTokenizer::scanFraction(int32_t pos) {
	skipIllegalUnderscores();
	if (digit(pos, 10) >= 0) {
		scanDigits(pos, 10);
	}
	int32_t index = $nc(this->sb)->length();
	if (acceptOneOfThenPut(u'e', u'E')) {
		skipIllegalUnderscores();
		acceptOneOfThenPut(u'+', u'-');
		skipIllegalUnderscores();
		if (digit(pos, 10) >= 0) {
			scanDigits(pos, 10);
			return;
		}
		$init($CompilerProperties$Errors);
		lexError(pos, $CompilerProperties$Errors::MalformedFpLit);
		$nc(this->sb)->setLength(index);
	}
}

void JavaTokenizer::scanFractionAndSuffix(int32_t pos) {
	this->radix = 10;
	scanFraction(pos);
	if (acceptOneOfThenPut(u'f', u'F')) {
		$init($Tokens$TokenKind);
		$set(this, tk, $Tokens$TokenKind::FLOATLITERAL);
	} else {
		acceptOneOfThenPut(u'd', u'D');
		$init($Tokens$TokenKind);
		$set(this, tk, $Tokens$TokenKind::DOUBLELITERAL);
	}
}

void JavaTokenizer::scanHexFractionAndSuffix(int32_t pos, bool seendigit) {
	this->radix = 16;
	$Assert::check(is(u'.'));
	putThenNext();
	skipIllegalUnderscores();
	if (digit(pos, 16) >= 0) {
		seendigit = true;
		scanDigits(pos, 16);
	}
	if (!seendigit) {
		$init($CompilerProperties$Errors);
		lexError(pos, $CompilerProperties$Errors::InvalidHexNumber);
	} else {
		scanHexExponentAndSuffix(pos);
	}
}

void JavaTokenizer::skipIllegalUnderscores() {
	if (is(u'_')) {
		$init($CompilerProperties$Errors);
		lexError(position(), $CompilerProperties$Errors::IllegalUnderscore);
		skip(u'_');
	}
}

void JavaTokenizer::scanNumber(int32_t pos, int32_t radix) {
	this->radix = radix;
	int32_t digitRadix = (radix == 8 ? 10 : radix);
	int32_t firstDigit = digit(pos, $Math::max(10, digitRadix));
	bool seendigit = firstDigit >= 0;
	bool seenValidDigit = firstDigit >= 0 && firstDigit < digitRadix;
	if (seendigit) {
		scanDigits(pos, digitRadix);
	}
	if (radix == 16 && is(u'.')) {
		scanHexFractionAndSuffix(pos, seendigit);
	} else if (seendigit && radix == 16 && isOneOf(u'p', u'P')) {
		scanHexExponentAndSuffix(pos);
	} else if (digitRadix == 10 && is(u'.')) {
		putThenNext();
		scanFractionAndSuffix(pos);
	} else if (digitRadix == 10 && isOneOf(u'e', u'E', u'f', u'F', u'd', u'D')) {
		scanFractionAndSuffix(pos);
	} else {
		if (!seenValidDigit) {
			switch (radix) {
			case 2:
				{
					$init($CompilerProperties$Errors);
					lexError(pos, $CompilerProperties$Errors::InvalidBinaryNumber);
					break;
				}
			case 16:
				{
					$init($CompilerProperties$Errors);
					lexError(pos, $CompilerProperties$Errors::InvalidHexNumber);
					break;
				}
			}
		}
		if (radix == 8) {
			$nc(this->sb)->setLength(0);
			reset(pos);
			scanDigits(pos, 8);
		}
		if (acceptOneOf(u'l', u'L')) {
			$init($Tokens$TokenKind);
			$set(this, tk, $Tokens$TokenKind::LONGLITERAL);
		} else {
			$init($Tokens$TokenKind);
			$set(this, tk, $Tokens$TokenKind::INTLITERAL);
		}
	}
}

void JavaTokenizer::checkIdent() {
	$set(this, name, $nc(this->names)->fromString($($nc(this->sb)->toString())));
	$set(this, tk, $nc(this->tokens)->lookupKind(this->name));
}

void JavaTokenizer::scanIdent() {
	putThenNext();
	do {
		{
			bool isJavaIdentifierPart = false;
			switch (get()) {
			case u'A':
				{}
			case u'B':
				{}
			case u'C':
				{}
			case u'D':
				{}
			case u'E':
				{}
			case u'F':
				{}
			case u'G':
				{}
			case u'H':
				{}
			case u'I':
				{}
			case u'J':
				{}
			case u'K':
				{}
			case u'L':
				{}
			case u'M':
				{}
			case u'N':
				{}
			case u'O':
				{}
			case u'P':
				{}
			case u'Q':
				{}
			case u'R':
				{}
			case u'S':
				{}
			case u'T':
				{}
			case u'U':
				{}
			case u'V':
				{}
			case u'W':
				{}
			case u'X':
				{}
			case u'Y':
				{}
			case u'Z':
				{}
			case u'a':
				{}
			case u'b':
				{}
			case u'c':
				{}
			case u'd':
				{}
			case u'e':
				{}
			case u'f':
				{}
			case u'g':
				{}
			case u'h':
				{}
			case u'i':
				{}
			case u'j':
				{}
			case u'k':
				{}
			case u'l':
				{}
			case u'm':
				{}
			case u'n':
				{}
			case u'o':
				{}
			case u'p':
				{}
			case u'q':
				{}
			case u'r':
				{}
			case u's':
				{}
			case u't':
				{}
			case u'u':
				{}
			case u'v':
				{}
			case u'w':
				{}
			case u'x':
				{}
			case u'y':
				{}
			case u'z':
				{}
			case u'$':
				{}
			case u'_':
				{}
			case u'0':
				{}
			case u'1':
				{}
			case u'2':
				{}
			case u'3':
				{}
			case u'4':
				{}
			case u'5':
				{}
			case u'6':
				{}
			case u'7':
				{}
			case u'8':
				{}
			case u'9':
				{
					break;
				}
			case u'\0':
				{}
			case (char16_t)0x1:
				{}
			case (char16_t)0x2:
				{}
			case (char16_t)0x3:
				{}
			case (char16_t)0x4:
				{}
			case (char16_t)0x5:
				{}
			case (char16_t)0x6:
				{}
			case (char16_t)0x7:
				{}
			case u'\b':
				{}
			case (char16_t)0xE:
				{}
			case (char16_t)0xF:
				{}
			case (char16_t)0x10:
				{}
			case (char16_t)0x11:
				{}
			case (char16_t)0x12:
				{}
			case (char16_t)0x13:
				{}
			case (char16_t)0x14:
				{}
			case (char16_t)0x15:
				{}
			case (char16_t)0x16:
				{}
			case (char16_t)0x17:
				{}
			case (char16_t)0x18:
				{}
			case (char16_t)0x19:
				{}
			case (char16_t)0x1B:
				{}
			case (char16_t)0x7F:
				{
					next();
					continue;
				}
			case (char16_t)0x1A:
				{
					if (isAvailable()) {
						next();
						continue;
					}
					checkIdent();
					return;
				}
			default:
				{
					if (isASCII()) {
						isJavaIdentifierPart = false;
					} else {
						if ($Character::isIdentifierIgnorable(get())) {
							next();
							continue;
						}
						isJavaIdentifierPart = isSurrogate() ? $Character::isJavaIdentifierPart(getCodepoint()) : $Character::isJavaIdentifierPart(get());
					}
					if (!isJavaIdentifierPart) {
						checkIdent();
						return;
					}
				}
			}
		}
		putThenNext();
	} while (true);
}

bool JavaTokenizer::isSpecial(char16_t ch) {
	switch (ch) {
	case u'!':
		{}
	case u'%':
		{}
	case u'&':
		{}
	case u'*':
		{}
	case u'?':
		{}
	case u'+':
		{}
	case u'-':
		{}
	case u':':
		{}
	case u'<':
		{}
	case u'=':
		{}
	case u'>':
		{}
	case u'^':
		{}
	case u'|':
		{}
	case u'~':
		{}
	case u'@':
		{
			return true;
		}
	default:
		{
			return false;
		}
	}
}

void JavaTokenizer::scanOperator() {
	$useLocalCurrentObjectStackCache();
	while (true) {
		put();
		$Tokens$TokenKind* newtk = $nc(this->tokens)->lookupKind($($nc(this->sb)->toString()));
		$init($Tokens$TokenKind);
		if (newtk == $Tokens$TokenKind::IDENTIFIER) {
			$nc(this->sb)->setLength($nc(this->sb)->length() - 1);
			break;
		}
		$set(this, tk, newtk);
		next();
		if (!isSpecial(get())) {
			break;
		}
	}
}

$Tokens$Token* JavaTokenizer::readToken() {
	$useLocalCurrentObjectStackCache();
	$nc(this->sb)->setLength(0);
	$set(this, name, nullptr);
	this->radix = 0;
	this->isTextBlock = false;
	this->hasEscapeSequences = false;
	int32_t pos = 0;
	$var($List, comments, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		$var($Tokens$Token, var$2, nullptr);
		bool return$1 = false;
		try {
			bool loop$break = false;
			while (true) {
				pos = position();
				switch (get()) {
				case u' ':
					{}
				case u'\t':
					{}
				case u'\f':
					{
						skipWhitespace();
						processWhiteSpace(pos, position());
						break;
					}
				case u'\n':
					{
						next();
						processLineTerminator(pos, position());
						break;
					}
				case u'\r':
					{
						next();
						accept(u'\n');
						processLineTerminator(pos, position());
						break;
					}
				case u'A':
					{}
				case u'B':
					{}
				case u'C':
					{}
				case u'D':
					{}
				case u'E':
					{}
				case u'F':
					{}
				case u'G':
					{}
				case u'H':
					{}
				case u'I':
					{}
				case u'J':
					{}
				case u'K':
					{}
				case u'L':
					{}
				case u'M':
					{}
				case u'N':
					{}
				case u'O':
					{}
				case u'P':
					{}
				case u'Q':
					{}
				case u'R':
					{}
				case u'S':
					{}
				case u'T':
					{}
				case u'U':
					{}
				case u'V':
					{}
				case u'W':
					{}
				case u'X':
					{}
				case u'Y':
					{}
				case u'Z':
					{}
				case u'a':
					{}
				case u'b':
					{}
				case u'c':
					{}
				case u'd':
					{}
				case u'e':
					{}
				case u'f':
					{}
				case u'g':
					{}
				case u'h':
					{}
				case u'i':
					{}
				case u'j':
					{}
				case u'k':
					{}
				case u'l':
					{}
				case u'm':
					{}
				case u'n':
					{}
				case u'o':
					{}
				case u'p':
					{}
				case u'q':
					{}
				case u'r':
					{}
				case u's':
					{}
				case u't':
					{}
				case u'u':
					{}
				case u'v':
					{}
				case u'w':
					{}
				case u'x':
					{}
				case u'y':
					{}
				case u'z':
					{}
				case u'$':
					{}
				case u'_':
					{
						scanIdent();
						loop$break = true;
						break;
					}
				case u'0':
					{
						next();
						if (acceptOneOf(u'x', u'X')) {
							skipIllegalUnderscores();
							scanNumber(pos, 16);
						} else if (acceptOneOf(u'b', u'B')) {
							skipIllegalUnderscores();
							scanNumber(pos, 2);
						} else {
							put(u'0');
							if (is(u'_')) {
								int32_t savePos = position();
								skip(u'_');
								if (digit(pos, 10) < 0) {
									$init($CompilerProperties$Errors);
									lexError(savePos, $CompilerProperties$Errors::IllegalUnderscore);
								}
							}
							scanNumber(pos, 8);
						}
						loop$break = true;
						break;
					}
				case u'1':
					{}
				case u'2':
					{}
				case u'3':
					{}
				case u'4':
					{}
				case u'5':
					{}
				case u'6':
					{}
				case u'7':
					{}
				case u'8':
					{}
				case u'9':
					{
						scanNumber(pos, 10);
						loop$break = true;
						break;
					}
				case u'.':
					{
						if (accept("..."_s)) {
							put("..."_s);
							$init($Tokens$TokenKind);
							$set(this, tk, $Tokens$TokenKind::ELLIPSIS);
						} else {
							next();
							int32_t savePos = position();
							if (accept(u'.')) {
								$init($CompilerProperties$Errors);
								lexError(savePos, $CompilerProperties$Errors::IllegalDot);
							} else if (digit(pos, 10) >= 0) {
								put(u'.');
								scanFractionAndSuffix(pos);
							} else {
								$init($Tokens$TokenKind);
								$set(this, tk, $Tokens$TokenKind::DOT);
							}
						}
						loop$break = true;
						break;
					}
				case u',':
					{
						next();
						$init($Tokens$TokenKind);
						$set(this, tk, $Tokens$TokenKind::COMMA);
						loop$break = true;
						break;
					}
				case u';':
					{
						next();
						$init($Tokens$TokenKind);
						$set(this, tk, $Tokens$TokenKind::SEMI);
						loop$break = true;
						break;
					}
				case u'(':
					{
						next();
						$init($Tokens$TokenKind);
						$set(this, tk, $Tokens$TokenKind::LPAREN);
						loop$break = true;
						break;
					}
				case u')':
					{
						next();
						$init($Tokens$TokenKind);
						$set(this, tk, $Tokens$TokenKind::RPAREN);
						loop$break = true;
						break;
					}
				case u'[':
					{
						next();
						$init($Tokens$TokenKind);
						$set(this, tk, $Tokens$TokenKind::LBRACKET);
						loop$break = true;
						break;
					}
				case u']':
					{
						next();
						$init($Tokens$TokenKind);
						$set(this, tk, $Tokens$TokenKind::RBRACKET);
						loop$break = true;
						break;
					}
				case u'{':
					{
						next();
						$init($Tokens$TokenKind);
						$set(this, tk, $Tokens$TokenKind::LBRACE);
						loop$break = true;
						break;
					}
				case u'}':
					{
						next();
						$init($Tokens$TokenKind);
						$set(this, tk, $Tokens$TokenKind::RBRACE);
						loop$break = true;
						break;
					}
				case u'/':
					{
						next();
						if (accept(u'/')) {
							skipToEOLN();
							if (isAvailable()) {
								$init($Tokens$Comment$CommentStyle);
								$assign(comments, appendComment(comments, $(processComment(pos, position(), $Tokens$Comment$CommentStyle::LINE))));
							}
							break;
						} else if (accept(u'*')) {
							bool isEmpty = false;
							$Tokens$Comment$CommentStyle* style = nullptr;
							if (accept(u'*')) {
								$init($Tokens$Comment$CommentStyle);
								style = $Tokens$Comment$CommentStyle::JAVADOC;
								if (is(u'/')) {
									isEmpty = true;
								}
							} else {
								$init($Tokens$Comment$CommentStyle);
								style = $Tokens$Comment$CommentStyle::BLOCK;
							}
							if (!isEmpty) {
								while (isAvailable()) {
									if (accept(u'*')) {
										if (is(u'/')) {
											break;
										}
									} else {
										next();
									}
								}
							}
							if (accept(u'/')) {
								$assign(comments, appendComment(comments, $(processComment(pos, position(), style))));
								break;
							} else {
								$init($CompilerProperties$Errors);
								lexError(pos, $CompilerProperties$Errors::UnclosedComment);
								loop$break = true;
								break;
							}
						} else if (accept(u'=')) {
							$init($Tokens$TokenKind);
							$set(this, tk, $Tokens$TokenKind::SLASHEQ);
						} else {
							$init($Tokens$TokenKind);
							$set(this, tk, $Tokens$TokenKind::SLASH);
						}
						loop$break = true;
						break;
					}
				case u'\'':
					{
						next();
						if (accept(u'\'')) {
							$init($CompilerProperties$Errors);
							lexError(pos, $CompilerProperties$Errors::EmptyCharLit);
						} else {
							if (isEOLN()) {
								$init($CompilerProperties$Errors);
								lexError(pos, $CompilerProperties$Errors::IllegalLineEndInCharLit);
							}
							scanLitChar(pos);
							if (accept(u'\'')) {
								$init($Tokens$TokenKind);
								$set(this, tk, $Tokens$TokenKind::CHARLITERAL);
							} else {
								$init($CompilerProperties$Errors);
								lexError(pos, $CompilerProperties$Errors::UnclosedCharLit);
							}
						}
						loop$break = true;
						break;
					}
				case u'\"':
					{
						scanString(pos);
						loop$break = true;
						break;
					}
				default:
					{
						if (isSpecial(get())) {
							scanOperator();
						} else {
							bool isJavaIdentifierStart = false;
							if (isASCII()) {
								isJavaIdentifierStart = false;
							} else {
								isJavaIdentifierStart = isSurrogate() ? $Character::isJavaIdentifierStart(getCodepoint()) : $Character::isJavaIdentifierStart(get());
							}
							if (isJavaIdentifierStart) {
								scanIdent();
							} else if (digit(pos, 10) >= 0) {
								scanNumber(pos, 10);
							} else {
								bool var$4 = is((char16_t)26);
								if (var$4 || !isAvailable()) {
									$init($Tokens$TokenKind);
									$set(this, tk, $Tokens$TokenKind::EOF);
									pos = position();
								} else {
									$var($String, arg, nullptr);
									if (isSurrogate()) {
										int32_t codePoint = getCodepoint();
										char16_t hi = $Character::highSurrogate(codePoint);
										char16_t lo = $Character::lowSurrogate(codePoint);
										$assign(arg, $String::format("\\u%04x\\u%04x"_s, $$new($ObjectArray, {
											$($of($Integer::valueOf((int32_t)hi))),
											$($of($Integer::valueOf((int32_t)lo)))
										})));
									} else {
										char16_t ch = get();
										$assign(arg, (32 < ch && ch < 127) ? $String::format("%s"_s, $$new($ObjectArray, {$($of($Character::valueOf(ch)))})) : $String::format("\\u%04x"_s, $$new($ObjectArray, {$($of($Integer::valueOf((int32_t)ch)))})));
									}
									lexError(pos, $($CompilerProperties$Errors::IllegalChar(arg)));
									next();
								}
							}
						}
						loop$break = true;
						break;
					}
				}

				if (loop$break) {
					break;
				}			}
			int32_t endPos = position();
			$init($Tokens$Token$Tag);
			if ($nc(this->tk)->tag == $Tokens$Token$Tag::DEFAULT) {
				$assign(var$2, $new($Tokens$Token, this->tk, pos, endPos, comments));
				return$1 = true;
				goto $finally;
			} else {
				if ($nc(this->tk)->tag == $Tokens$Token$Tag::NAMED) {
					$assign(var$2, $new($Tokens$NamedToken, this->tk, pos, endPos, this->name, comments));
					return$1 = true;
					goto $finally;
				} else {
					$var($String, string, $nc(this->sb)->toString());
					if (this->isTextBlock) {
						$init($Lint$LintCategory);
						if ($nc(this->lint)->isEnabled($Lint$LintCategory::TEXT_BLOCKS)) {
							$var($Set, checks, $TextBlockSupport::checkWhitespace(string));
							$init($TextBlockSupport$WhitespaceChecks);
							if ($nc(checks)->contains($TextBlockSupport$WhitespaceChecks::INCONSISTENT)) {
								$init($CompilerProperties$Warnings);
								lexWarning($Lint$LintCategory::TEXT_BLOCKS, pos, $CompilerProperties$Warnings::InconsistentWhiteSpaceIndentation);
							}
							if ($nc(checks)->contains($TextBlockSupport$WhitespaceChecks::TRAILING)) {
								$init($CompilerProperties$Warnings);
								lexWarning($Lint$LintCategory::TEXT_BLOCKS, pos, $CompilerProperties$Warnings::TrailingWhiteSpaceWillBeRemoved);
							}
						}
						try {
							$assign(string, $nc(string)->stripIndent());
						} catch ($Exception& ex) {
						}
					}
					if (this->hasEscapeSequences) {
						try {
							$assign(string, $nc(string)->translateEscapes());
						} catch ($Exception& ex) {
						}
					}
					if ($nc(this->tk)->tag == $Tokens$Token$Tag::STRING) {
						$assign(var$2, $new($Tokens$StringToken, this->tk, pos, endPos, string, comments));
						return$1 = true;
						goto $finally;
					} else {
						$assign(var$2, $new($Tokens$NumericToken, this->tk, pos, endPos, string, this->radix, comments));
						return$1 = true;
						goto $finally;
					}
				}
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} $finally: {
			int32_t endPos = position();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$List* JavaTokenizer::appendComment($List* comments, $Tokens$Comment* comment) {
	return comments == nullptr ? $List::of(comment) : $nc(comments)->prepend(comment);
}

int32_t JavaTokenizer::errPos() {
	return this->errPos$;
}

void JavaTokenizer::errPos(int32_t pos) {
	this->errPos$ = pos;
}

$Tokens$Comment* JavaTokenizer::processComment(int32_t pos, int32_t endPos, $Tokens$Comment$CommentStyle* style) {
	$var($chars, buf, getRawCharacters(pos, endPos));
	return $new($JavaTokenizer$BasicComment, style, this->fac, buf, pos);
}

void JavaTokenizer::processWhiteSpace(int32_t pos, int32_t endPos) {
}

void JavaTokenizer::processLineTerminator(int32_t pos, int32_t endPos) {
}

$Position$LineMap* JavaTokenizer::getLineMap() {
	$var($chars, var$0, getRawCharacters());
	return $Position::makeLineMap(var$0, length(), false);
}

JavaTokenizer::JavaTokenizer() {
}

$Class* JavaTokenizer::load$($String* name, bool initialize) {
	$loadClass(JavaTokenizer, name, initialize, &_JavaTokenizer_ClassInfo_, allocate$JavaTokenizer);
	return class$;
}

$Class* JavaTokenizer::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com