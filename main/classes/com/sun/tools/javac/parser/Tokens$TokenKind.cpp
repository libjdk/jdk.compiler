#include <com/sun/tools/javac/parser/Tokens$TokenKind.h>

#include <com/sun/tools/javac/api/Messages.h>
#include <com/sun/tools/javac/parser/Tokens$1.h>
#include <com/sun/tools/javac/parser/Tokens$Token$Tag.h>
#include <com/sun/tools/javac/parser/Tokens.h>
#include <java/lang/Enum.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef ABSTRACT
#undef AMP
#undef AMPAMP
#undef AMPEQ
#undef ARROW
#undef ASSERT
#undef BANG
#undef BANGEQ
#undef BAR
#undef BARBAR
#undef BAREQ
#undef BOOLEAN
#undef BREAK
#undef BYTE
#undef CARET
#undef CARETEQ
#undef CASE
#undef CATCH
#undef CHAR
#undef CHARLITERAL
#undef CLASS
#undef COLCOL
#undef COLON
#undef COMMA
#undef CONST
#undef CONTINUE
#undef CUSTOM
#undef DEFAULT
#undef DO
#undef DOT
#undef DOUBLE
#undef DOUBLELITERAL
#undef ELLIPSIS
#undef ELSE
#undef ENUM
#undef EOF
#undef EQ
#undef EQEQ
#undef ERROR
#undef EXTENDS
#undef FALSE
#undef FINAL
#undef FINALLY
#undef FLOAT
#undef FLOATLITERAL
#undef FOR
#undef GOTO
#undef GT
#undef GTEQ
#undef GTGT
#undef GTGTEQ
#undef GTGTGT
#undef GTGTGTEQ
#undef IDENTIFIER
#undef IF
#undef IMPLEMENTS
#undef IMPORT
#undef INSTANCEOF
#undef INT
#undef INTERFACE
#undef INTLITERAL
#undef LBRACE
#undef LBRACKET
#undef LONG
#undef LONGLITERAL
#undef LPAREN
#undef LT
#undef LTEQ
#undef LTLT
#undef LTLTEQ
#undef MONKEYS_AT
#undef NAMED
#undef NATIVE
#undef NEW
#undef NULL
#undef NUMERIC
#undef PACKAGE
#undef PERCENT
#undef PERCENTEQ
#undef PLUS
#undef PLUSEQ
#undef PLUSPLUS
#undef PRIVATE
#undef PROTECTED
#undef PUBLIC
#undef QUES
#undef RBRACE
#undef RBRACKET
#undef RETURN
#undef RPAREN
#undef SEMI
#undef SHORT
#undef SLASH
#undef SLASHEQ
#undef STAR
#undef STAREQ
#undef STATIC
#undef STRICTFP
#undef STRING
#undef STRINGLITERAL
#undef SUB
#undef SUBEQ
#undef SUBSUB
#undef SUPER
#undef SWITCH
#undef SYNCHRONIZED
#undef THIS
#undef THROW
#undef THROWS
#undef TILDE
#undef TRANSIENT
#undef TRUE
#undef TRY
#undef UNDERSCORE
#undef VOID
#undef VOLATILE
#undef WHILE

using $Tokens$TokenKindArray = $Array<::com::sun::tools::javac::parser::Tokens$TokenKind>;
using $Formattable = ::com::sun::tools::javac::api::Formattable;
using $Messages = ::com::sun::tools::javac::api::Messages;
using $Tokens = ::com::sun::tools::javac::parser::Tokens;
using $Tokens$1 = ::com::sun::tools::javac::parser::Tokens$1;
using $Tokens$Token$Tag = ::com::sun::tools::javac::parser::Tokens$Token$Tag;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _Tokens$TokenKind_FieldInfo_[] = {
	{"EOF", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, EOF)},
	{"ERROR", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, ERROR)},
	{"IDENTIFIER", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, IDENTIFIER)},
	{"ABSTRACT", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, ABSTRACT)},
	{"ASSERT", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, ASSERT)},
	{"BOOLEAN", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, BOOLEAN)},
	{"BREAK", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, BREAK)},
	{"BYTE", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, BYTE)},
	{"CASE", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, CASE)},
	{"CATCH", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, CATCH)},
	{"CHAR", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, CHAR)},
	{"CLASS", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, CLASS)},
	{"CONST", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, CONST)},
	{"CONTINUE", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, CONTINUE)},
	{"DEFAULT", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, DEFAULT)},
	{"DO", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, DO)},
	{"DOUBLE", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, DOUBLE)},
	{"ELSE", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, ELSE)},
	{"ENUM", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, ENUM)},
	{"EXTENDS", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, EXTENDS)},
	{"FINAL", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, FINAL)},
	{"FINALLY", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, FINALLY)},
	{"FLOAT", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, FLOAT)},
	{"FOR", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, FOR)},
	{"GOTO", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, GOTO)},
	{"IF", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, IF)},
	{"IMPLEMENTS", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, IMPLEMENTS)},
	{"IMPORT", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, IMPORT)},
	{"INSTANCEOF", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, INSTANCEOF)},
	{"INT", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, INT)},
	{"INTERFACE", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, INTERFACE)},
	{"LONG", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, LONG)},
	{"NATIVE", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, NATIVE)},
	{"NEW", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, NEW)},
	{"PACKAGE", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, PACKAGE)},
	{"PRIVATE", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, PRIVATE)},
	{"PROTECTED", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, PROTECTED)},
	{"PUBLIC", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, PUBLIC)},
	{"RETURN", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, RETURN)},
	{"SHORT", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, SHORT)},
	{"STATIC", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, STATIC)},
	{"STRICTFP", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, STRICTFP)},
	{"SUPER", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, SUPER)},
	{"SWITCH", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, SWITCH)},
	{"SYNCHRONIZED", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, SYNCHRONIZED)},
	{"THIS", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, THIS)},
	{"THROW", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, THROW)},
	{"THROWS", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, THROWS)},
	{"TRANSIENT", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, TRANSIENT)},
	{"TRY", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, TRY)},
	{"VOID", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, VOID)},
	{"VOLATILE", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, VOLATILE)},
	{"WHILE", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, WHILE)},
	{"INTLITERAL", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, INTLITERAL)},
	{"LONGLITERAL", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, LONGLITERAL)},
	{"FLOATLITERAL", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, FLOATLITERAL)},
	{"DOUBLELITERAL", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, DOUBLELITERAL)},
	{"CHARLITERAL", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, CHARLITERAL)},
	{"STRINGLITERAL", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, STRINGLITERAL)},
	{"TRUE", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, TRUE)},
	{"FALSE", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, FALSE)},
	{"NULL", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, NULL)},
	{"UNDERSCORE", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, UNDERSCORE)},
	{"ARROW", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, ARROW)},
	{"COLCOL", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, COLCOL)},
	{"LPAREN", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, LPAREN)},
	{"RPAREN", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, RPAREN)},
	{"LBRACE", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, LBRACE)},
	{"RBRACE", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, RBRACE)},
	{"LBRACKET", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, LBRACKET)},
	{"RBRACKET", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, RBRACKET)},
	{"SEMI", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, SEMI)},
	{"COMMA", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, COMMA)},
	{"DOT", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, DOT)},
	{"ELLIPSIS", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, ELLIPSIS)},
	{"EQ", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, EQ)},
	{"GT", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, GT)},
	{"LT", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, LT)},
	{"BANG", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, BANG)},
	{"TILDE", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, TILDE)},
	{"QUES", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, QUES)},
	{"COLON", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, COLON)},
	{"EQEQ", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, EQEQ)},
	{"LTEQ", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, LTEQ)},
	{"GTEQ", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, GTEQ)},
	{"BANGEQ", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, BANGEQ)},
	{"AMPAMP", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, AMPAMP)},
	{"BARBAR", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, BARBAR)},
	{"PLUSPLUS", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, PLUSPLUS)},
	{"SUBSUB", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, SUBSUB)},
	{"PLUS", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, PLUS)},
	{"SUB", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, SUB)},
	{"STAR", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, STAR)},
	{"SLASH", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, SLASH)},
	{"AMP", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, AMP)},
	{"BAR", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, BAR)},
	{"CARET", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, CARET)},
	{"PERCENT", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, PERCENT)},
	{"LTLT", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, LTLT)},
	{"GTGT", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, GTGT)},
	{"GTGTGT", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, GTGTGT)},
	{"PLUSEQ", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, PLUSEQ)},
	{"SUBEQ", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, SUBEQ)},
	{"STAREQ", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, STAREQ)},
	{"SLASHEQ", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, SLASHEQ)},
	{"AMPEQ", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, AMPEQ)},
	{"BAREQ", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, BAREQ)},
	{"CARETEQ", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, CARETEQ)},
	{"PERCENTEQ", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, PERCENTEQ)},
	{"LTLTEQ", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, LTLTEQ)},
	{"GTGTEQ", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, GTGTEQ)},
	{"GTGTGTEQ", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, GTGTGTEQ)},
	{"MONKEYS_AT", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, MONKEYS_AT)},
	{"CUSTOM", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$TokenKind, CUSTOM)},
	{"$VALUES", "[Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Tokens$TokenKind, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(Tokens$TokenKind, name$)},
	{"tag", "Lcom/sun/tools/javac/parser/Tokens$Token$Tag;", nullptr, $PUBLIC | $FINAL, $field(Tokens$TokenKind, tag)},
	{}
};

$MethodInfo _Tokens$TokenKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Tokens$TokenKindArray*(*)()>(&Tokens$TokenKind::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Tokens$TokenKind::*)($String*,int32_t)>(&Tokens$TokenKind::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(Tokens$TokenKind::*)($String*,int32_t,$String*)>(&Tokens$TokenKind::init$))},
	{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/parser/Tokens$Token$Tag;)V", "(Lcom/sun/tools/javac/parser/Tokens$Token$Tag;)V", $PRIVATE, $method(static_cast<void(Tokens$TokenKind::*)($String*,int32_t,$Tokens$Token$Tag*)>(&Tokens$TokenKind::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Lcom/sun/tools/javac/parser/Tokens$Token$Tag;)V", "(Ljava/lang/String;Lcom/sun/tools/javac/parser/Tokens$Token$Tag;)V", $PRIVATE, $method(static_cast<void(Tokens$TokenKind::*)($String*,int32_t,$String*,$Tokens$Token$Tag*)>(&Tokens$TokenKind::init$))},
	{"getKind", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"test", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;)Z", nullptr, $PUBLIC, $method(static_cast<bool(Tokens$TokenKind::*)(Tokens$TokenKind*)>(&Tokens$TokenKind::test))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Ljava/util/Locale;Lcom/sun/tools/javac/api/Messages;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Tokens$TokenKind*(*)($String*)>(&Tokens$TokenKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Tokens$TokenKindArray*(*)()>(&Tokens$TokenKind::values))},
	{}
};

$InnerClassInfo _Tokens$TokenKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.Tokens$TokenKind", "com.sun.tools.javac.parser.Tokens", "TokenKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Tokens$TokenKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.parser.Tokens$TokenKind",
	"java.lang.Enum",
	"com.sun.tools.javac.api.Formattable,java.util.function.Predicate",
	_Tokens$TokenKind_FieldInfo_,
	_Tokens$TokenKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/parser/Tokens$TokenKind;>;Lcom/sun/tools/javac/api/Formattable;Ljava/util/function/Predicate<Lcom/sun/tools/javac/parser/Tokens$TokenKind;>;",
	nullptr,
	_Tokens$TokenKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.Tokens"
};

$Object* allocate$Tokens$TokenKind($Class* clazz) {
	return $of($alloc(Tokens$TokenKind));
}

bool Tokens$TokenKind::equals(Object$* arg0) {
	 return this->$Enum::equals(arg0);
}

int32_t Tokens$TokenKind::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* Tokens$TokenKind::clone() {
	 return this->$Enum::clone();
}

void Tokens$TokenKind::finalize() {
	this->$Enum::finalize();
}

Tokens$TokenKind* Tokens$TokenKind::EOF = nullptr;
Tokens$TokenKind* Tokens$TokenKind::ERROR = nullptr;
Tokens$TokenKind* Tokens$TokenKind::IDENTIFIER = nullptr;
Tokens$TokenKind* Tokens$TokenKind::ABSTRACT = nullptr;
Tokens$TokenKind* Tokens$TokenKind::ASSERT = nullptr;
Tokens$TokenKind* Tokens$TokenKind::BOOLEAN = nullptr;
Tokens$TokenKind* Tokens$TokenKind::BREAK = nullptr;
Tokens$TokenKind* Tokens$TokenKind::BYTE = nullptr;
Tokens$TokenKind* Tokens$TokenKind::CASE = nullptr;
Tokens$TokenKind* Tokens$TokenKind::CATCH = nullptr;
Tokens$TokenKind* Tokens$TokenKind::CHAR = nullptr;
Tokens$TokenKind* Tokens$TokenKind::CLASS = nullptr;
Tokens$TokenKind* Tokens$TokenKind::CONST = nullptr;
Tokens$TokenKind* Tokens$TokenKind::CONTINUE = nullptr;
Tokens$TokenKind* Tokens$TokenKind::DEFAULT = nullptr;
Tokens$TokenKind* Tokens$TokenKind::DO = nullptr;
Tokens$TokenKind* Tokens$TokenKind::DOUBLE = nullptr;
Tokens$TokenKind* Tokens$TokenKind::ELSE = nullptr;
Tokens$TokenKind* Tokens$TokenKind::ENUM = nullptr;
Tokens$TokenKind* Tokens$TokenKind::EXTENDS = nullptr;
Tokens$TokenKind* Tokens$TokenKind::FINAL = nullptr;
Tokens$TokenKind* Tokens$TokenKind::FINALLY = nullptr;
Tokens$TokenKind* Tokens$TokenKind::FLOAT = nullptr;
Tokens$TokenKind* Tokens$TokenKind::FOR = nullptr;
Tokens$TokenKind* Tokens$TokenKind::GOTO = nullptr;
Tokens$TokenKind* Tokens$TokenKind::IF = nullptr;
Tokens$TokenKind* Tokens$TokenKind::IMPLEMENTS = nullptr;
Tokens$TokenKind* Tokens$TokenKind::IMPORT = nullptr;
Tokens$TokenKind* Tokens$TokenKind::INSTANCEOF = nullptr;
Tokens$TokenKind* Tokens$TokenKind::INT = nullptr;
Tokens$TokenKind* Tokens$TokenKind::INTERFACE = nullptr;
Tokens$TokenKind* Tokens$TokenKind::LONG = nullptr;
Tokens$TokenKind* Tokens$TokenKind::NATIVE = nullptr;
Tokens$TokenKind* Tokens$TokenKind::NEW = nullptr;
Tokens$TokenKind* Tokens$TokenKind::PACKAGE = nullptr;
Tokens$TokenKind* Tokens$TokenKind::PRIVATE = nullptr;
Tokens$TokenKind* Tokens$TokenKind::PROTECTED = nullptr;
Tokens$TokenKind* Tokens$TokenKind::PUBLIC = nullptr;
Tokens$TokenKind* Tokens$TokenKind::RETURN = nullptr;
Tokens$TokenKind* Tokens$TokenKind::SHORT = nullptr;
Tokens$TokenKind* Tokens$TokenKind::STATIC = nullptr;
Tokens$TokenKind* Tokens$TokenKind::STRICTFP = nullptr;
Tokens$TokenKind* Tokens$TokenKind::SUPER = nullptr;
Tokens$TokenKind* Tokens$TokenKind::SWITCH = nullptr;
Tokens$TokenKind* Tokens$TokenKind::SYNCHRONIZED = nullptr;
Tokens$TokenKind* Tokens$TokenKind::THIS = nullptr;
Tokens$TokenKind* Tokens$TokenKind::THROW = nullptr;
Tokens$TokenKind* Tokens$TokenKind::THROWS = nullptr;
Tokens$TokenKind* Tokens$TokenKind::TRANSIENT = nullptr;
Tokens$TokenKind* Tokens$TokenKind::TRY = nullptr;
Tokens$TokenKind* Tokens$TokenKind::VOID = nullptr;
Tokens$TokenKind* Tokens$TokenKind::VOLATILE = nullptr;
Tokens$TokenKind* Tokens$TokenKind::WHILE = nullptr;
Tokens$TokenKind* Tokens$TokenKind::INTLITERAL = nullptr;
Tokens$TokenKind* Tokens$TokenKind::LONGLITERAL = nullptr;
Tokens$TokenKind* Tokens$TokenKind::FLOATLITERAL = nullptr;
Tokens$TokenKind* Tokens$TokenKind::DOUBLELITERAL = nullptr;
Tokens$TokenKind* Tokens$TokenKind::CHARLITERAL = nullptr;
Tokens$TokenKind* Tokens$TokenKind::STRINGLITERAL = nullptr;
Tokens$TokenKind* Tokens$TokenKind::TRUE = nullptr;
Tokens$TokenKind* Tokens$TokenKind::FALSE = nullptr;
Tokens$TokenKind* Tokens$TokenKind::NULL = nullptr;
Tokens$TokenKind* Tokens$TokenKind::UNDERSCORE = nullptr;
Tokens$TokenKind* Tokens$TokenKind::ARROW = nullptr;
Tokens$TokenKind* Tokens$TokenKind::COLCOL = nullptr;
Tokens$TokenKind* Tokens$TokenKind::LPAREN = nullptr;
Tokens$TokenKind* Tokens$TokenKind::RPAREN = nullptr;
Tokens$TokenKind* Tokens$TokenKind::LBRACE = nullptr;
Tokens$TokenKind* Tokens$TokenKind::RBRACE = nullptr;
Tokens$TokenKind* Tokens$TokenKind::LBRACKET = nullptr;
Tokens$TokenKind* Tokens$TokenKind::RBRACKET = nullptr;
Tokens$TokenKind* Tokens$TokenKind::SEMI = nullptr;
Tokens$TokenKind* Tokens$TokenKind::COMMA = nullptr;
Tokens$TokenKind* Tokens$TokenKind::DOT = nullptr;
Tokens$TokenKind* Tokens$TokenKind::ELLIPSIS = nullptr;
Tokens$TokenKind* Tokens$TokenKind::EQ = nullptr;
Tokens$TokenKind* Tokens$TokenKind::GT = nullptr;
Tokens$TokenKind* Tokens$TokenKind::LT = nullptr;
Tokens$TokenKind* Tokens$TokenKind::BANG = nullptr;
Tokens$TokenKind* Tokens$TokenKind::TILDE = nullptr;
Tokens$TokenKind* Tokens$TokenKind::QUES = nullptr;
Tokens$TokenKind* Tokens$TokenKind::COLON = nullptr;
Tokens$TokenKind* Tokens$TokenKind::EQEQ = nullptr;
Tokens$TokenKind* Tokens$TokenKind::LTEQ = nullptr;
Tokens$TokenKind* Tokens$TokenKind::GTEQ = nullptr;
Tokens$TokenKind* Tokens$TokenKind::BANGEQ = nullptr;
Tokens$TokenKind* Tokens$TokenKind::AMPAMP = nullptr;
Tokens$TokenKind* Tokens$TokenKind::BARBAR = nullptr;
Tokens$TokenKind* Tokens$TokenKind::PLUSPLUS = nullptr;
Tokens$TokenKind* Tokens$TokenKind::SUBSUB = nullptr;
Tokens$TokenKind* Tokens$TokenKind::PLUS = nullptr;
Tokens$TokenKind* Tokens$TokenKind::SUB = nullptr;
Tokens$TokenKind* Tokens$TokenKind::STAR = nullptr;
Tokens$TokenKind* Tokens$TokenKind::SLASH = nullptr;
Tokens$TokenKind* Tokens$TokenKind::AMP = nullptr;
Tokens$TokenKind* Tokens$TokenKind::BAR = nullptr;
Tokens$TokenKind* Tokens$TokenKind::CARET = nullptr;
Tokens$TokenKind* Tokens$TokenKind::PERCENT = nullptr;
Tokens$TokenKind* Tokens$TokenKind::LTLT = nullptr;
Tokens$TokenKind* Tokens$TokenKind::GTGT = nullptr;
Tokens$TokenKind* Tokens$TokenKind::GTGTGT = nullptr;
Tokens$TokenKind* Tokens$TokenKind::PLUSEQ = nullptr;
Tokens$TokenKind* Tokens$TokenKind::SUBEQ = nullptr;
Tokens$TokenKind* Tokens$TokenKind::STAREQ = nullptr;
Tokens$TokenKind* Tokens$TokenKind::SLASHEQ = nullptr;
Tokens$TokenKind* Tokens$TokenKind::AMPEQ = nullptr;
Tokens$TokenKind* Tokens$TokenKind::BAREQ = nullptr;
Tokens$TokenKind* Tokens$TokenKind::CARETEQ = nullptr;
Tokens$TokenKind* Tokens$TokenKind::PERCENTEQ = nullptr;
Tokens$TokenKind* Tokens$TokenKind::LTLTEQ = nullptr;
Tokens$TokenKind* Tokens$TokenKind::GTGTEQ = nullptr;
Tokens$TokenKind* Tokens$TokenKind::GTGTGTEQ = nullptr;
Tokens$TokenKind* Tokens$TokenKind::MONKEYS_AT = nullptr;
Tokens$TokenKind* Tokens$TokenKind::CUSTOM = nullptr;
$Tokens$TokenKindArray* Tokens$TokenKind::$VALUES = nullptr;

$Tokens$TokenKindArray* Tokens$TokenKind::$values() {
	$init(Tokens$TokenKind);
	return $new($Tokens$TokenKindArray, {
		Tokens$TokenKind::EOF,
		Tokens$TokenKind::ERROR,
		Tokens$TokenKind::IDENTIFIER,
		Tokens$TokenKind::ABSTRACT,
		Tokens$TokenKind::ASSERT,
		Tokens$TokenKind::BOOLEAN,
		Tokens$TokenKind::BREAK,
		Tokens$TokenKind::BYTE,
		Tokens$TokenKind::CASE,
		Tokens$TokenKind::CATCH,
		Tokens$TokenKind::CHAR,
		Tokens$TokenKind::CLASS,
		Tokens$TokenKind::CONST,
		Tokens$TokenKind::CONTINUE,
		Tokens$TokenKind::DEFAULT,
		Tokens$TokenKind::DO,
		Tokens$TokenKind::DOUBLE,
		Tokens$TokenKind::ELSE,
		Tokens$TokenKind::ENUM,
		Tokens$TokenKind::EXTENDS,
		Tokens$TokenKind::FINAL,
		Tokens$TokenKind::FINALLY,
		Tokens$TokenKind::FLOAT,
		Tokens$TokenKind::FOR,
		Tokens$TokenKind::GOTO,
		Tokens$TokenKind::IF,
		Tokens$TokenKind::IMPLEMENTS,
		Tokens$TokenKind::IMPORT,
		Tokens$TokenKind::INSTANCEOF,
		Tokens$TokenKind::INT,
		Tokens$TokenKind::INTERFACE,
		Tokens$TokenKind::LONG,
		Tokens$TokenKind::NATIVE,
		Tokens$TokenKind::NEW,
		Tokens$TokenKind::PACKAGE,
		Tokens$TokenKind::PRIVATE,
		Tokens$TokenKind::PROTECTED,
		Tokens$TokenKind::PUBLIC,
		Tokens$TokenKind::RETURN,
		Tokens$TokenKind::SHORT,
		Tokens$TokenKind::STATIC,
		Tokens$TokenKind::STRICTFP,
		Tokens$TokenKind::SUPER,
		Tokens$TokenKind::SWITCH,
		Tokens$TokenKind::SYNCHRONIZED,
		Tokens$TokenKind::THIS,
		Tokens$TokenKind::THROW,
		Tokens$TokenKind::THROWS,
		Tokens$TokenKind::TRANSIENT,
		Tokens$TokenKind::TRY,
		Tokens$TokenKind::VOID,
		Tokens$TokenKind::VOLATILE,
		Tokens$TokenKind::WHILE,
		Tokens$TokenKind::INTLITERAL,
		Tokens$TokenKind::LONGLITERAL,
		Tokens$TokenKind::FLOATLITERAL,
		Tokens$TokenKind::DOUBLELITERAL,
		Tokens$TokenKind::CHARLITERAL,
		Tokens$TokenKind::STRINGLITERAL,
		Tokens$TokenKind::TRUE,
		Tokens$TokenKind::FALSE,
		Tokens$TokenKind::NULL,
		Tokens$TokenKind::UNDERSCORE,
		Tokens$TokenKind::ARROW,
		Tokens$TokenKind::COLCOL,
		Tokens$TokenKind::LPAREN,
		Tokens$TokenKind::RPAREN,
		Tokens$TokenKind::LBRACE,
		Tokens$TokenKind::RBRACE,
		Tokens$TokenKind::LBRACKET,
		Tokens$TokenKind::RBRACKET,
		Tokens$TokenKind::SEMI,
		Tokens$TokenKind::COMMA,
		Tokens$TokenKind::DOT,
		Tokens$TokenKind::ELLIPSIS,
		Tokens$TokenKind::EQ,
		Tokens$TokenKind::GT,
		Tokens$TokenKind::LT,
		Tokens$TokenKind::BANG,
		Tokens$TokenKind::TILDE,
		Tokens$TokenKind::QUES,
		Tokens$TokenKind::COLON,
		Tokens$TokenKind::EQEQ,
		Tokens$TokenKind::LTEQ,
		Tokens$TokenKind::GTEQ,
		Tokens$TokenKind::BANGEQ,
		Tokens$TokenKind::AMPAMP,
		Tokens$TokenKind::BARBAR,
		Tokens$TokenKind::PLUSPLUS,
		Tokens$TokenKind::SUBSUB,
		Tokens$TokenKind::PLUS,
		Tokens$TokenKind::SUB,
		Tokens$TokenKind::STAR,
		Tokens$TokenKind::SLASH,
		Tokens$TokenKind::AMP,
		Tokens$TokenKind::BAR,
		Tokens$TokenKind::CARET,
		Tokens$TokenKind::PERCENT,
		Tokens$TokenKind::LTLT,
		Tokens$TokenKind::GTGT,
		Tokens$TokenKind::GTGTGT,
		Tokens$TokenKind::PLUSEQ,
		Tokens$TokenKind::SUBEQ,
		Tokens$TokenKind::STAREQ,
		Tokens$TokenKind::SLASHEQ,
		Tokens$TokenKind::AMPEQ,
		Tokens$TokenKind::BAREQ,
		Tokens$TokenKind::CARETEQ,
		Tokens$TokenKind::PERCENTEQ,
		Tokens$TokenKind::LTLTEQ,
		Tokens$TokenKind::GTGTEQ,
		Tokens$TokenKind::GTGTGTEQ,
		Tokens$TokenKind::MONKEYS_AT,
		Tokens$TokenKind::CUSTOM
	});
}

$Tokens$TokenKindArray* Tokens$TokenKind::values() {
	$init(Tokens$TokenKind);
	return $cast($Tokens$TokenKindArray, Tokens$TokenKind::$VALUES->clone());
}

Tokens$TokenKind* Tokens$TokenKind::valueOf($String* name) {
	$init(Tokens$TokenKind);
	return $cast(Tokens$TokenKind, $Enum::valueOf(Tokens$TokenKind::class$, name));
}

void Tokens$TokenKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$init($Tokens$Token$Tag);
	Tokens$TokenKind::init$($enum$name, $enum$ordinal, nullptr, $Tokens$Token$Tag::DEFAULT);
}

void Tokens$TokenKind::init$($String* $enum$name, int32_t $enum$ordinal, $String* name) {
	$init($Tokens$Token$Tag);
	Tokens$TokenKind::init$($enum$name, $enum$ordinal, name, $Tokens$Token$Tag::DEFAULT);
}

void Tokens$TokenKind::init$($String* $enum$name, int32_t $enum$ordinal, $Tokens$Token$Tag* tag) {
	Tokens$TokenKind::init$($enum$name, $enum$ordinal, nullptr, tag);
}

void Tokens$TokenKind::init$($String* $enum$name, int32_t $enum$ordinal, $String* name, $Tokens$Token$Tag* tag) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
	$set(this, tag, tag);
}

$String* Tokens$TokenKind::toString() {
	$init($Tokens$1);
	switch ($nc($Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get((this)->ordinal())) {
	case 1:
		{
			return "token.identifier"_s;
		}
	case 2:
		{
			return "token.character"_s;
		}
	case 3:
		{
			return "token.string"_s;
		}
	case 4:
		{
			return "token.integer"_s;
		}
	case 5:
		{
			return "token.long-integer"_s;
		}
	case 6:
		{
			return "token.float"_s;
		}
	case 7:
		{
			return "token.double"_s;
		}
	case 8:
		{
			return "token.bad-symbol"_s;
		}
	case 9:
		{
			return "token.end-of-input"_s;
		}
	case 10:
		{}
	case 11:
		{}
	case 12:
		{}
	case 13:
		{}
	case 14:
		{}
	case 15:
		{}
	case 16:
		{}
	case 17:
		{}
	case 18:
		{
			return $str({"\'"_s, this->name$, "\'"_s});
		}
	default:
		{
			return this->name$;
		}
	}
}

$String* Tokens$TokenKind::getKind() {
	return "Token"_s;
}

$String* Tokens$TokenKind::toString($Locale* locale, $Messages* messages) {
	$useLocalCurrentObjectStackCache();
	return this->name$ != nullptr ? toString() : $nc(messages)->getLocalizedString(locale, $$str({"compiler.misc."_s, $(toString())}), $$new($ObjectArray, 0));
}

bool Tokens$TokenKind::test(Tokens$TokenKind* that) {
	return this == that;
}

bool Tokens$TokenKind::test(Object$* that) {
	return this->test($cast(Tokens$TokenKind, that));
}

void clinit$Tokens$TokenKind($Class* class$) {
	$assignStatic(Tokens$TokenKind::EOF, $new(Tokens$TokenKind, "EOF"_s, 0));
	$assignStatic(Tokens$TokenKind::ERROR, $new(Tokens$TokenKind, "ERROR"_s, 1));
	$init($Tokens$Token$Tag);
	$assignStatic(Tokens$TokenKind::IDENTIFIER, $new(Tokens$TokenKind, "IDENTIFIER"_s, 2, $Tokens$Token$Tag::NAMED));
	$assignStatic(Tokens$TokenKind::ABSTRACT, $new(Tokens$TokenKind, "ABSTRACT"_s, 3, "abstract"_s));
	$assignStatic(Tokens$TokenKind::ASSERT, $new(Tokens$TokenKind, "ASSERT"_s, 4, "assert"_s, $Tokens$Token$Tag::NAMED));
	$assignStatic(Tokens$TokenKind::BOOLEAN, $new(Tokens$TokenKind, "BOOLEAN"_s, 5, "boolean"_s, $Tokens$Token$Tag::NAMED));
	$assignStatic(Tokens$TokenKind::BREAK, $new(Tokens$TokenKind, "BREAK"_s, 6, "break"_s));
	$assignStatic(Tokens$TokenKind::BYTE, $new(Tokens$TokenKind, "BYTE"_s, 7, "byte"_s, $Tokens$Token$Tag::NAMED));
	$assignStatic(Tokens$TokenKind::CASE, $new(Tokens$TokenKind, "CASE"_s, 8, "case"_s));
	$assignStatic(Tokens$TokenKind::CATCH, $new(Tokens$TokenKind, "CATCH"_s, 9, "catch"_s));
	$assignStatic(Tokens$TokenKind::CHAR, $new(Tokens$TokenKind, "CHAR"_s, 10, "char"_s, $Tokens$Token$Tag::NAMED));
	$assignStatic(Tokens$TokenKind::CLASS, $new(Tokens$TokenKind, "CLASS"_s, 11, "class"_s));
	$assignStatic(Tokens$TokenKind::CONST, $new(Tokens$TokenKind, "CONST"_s, 12, "const"_s));
	$assignStatic(Tokens$TokenKind::CONTINUE, $new(Tokens$TokenKind, "CONTINUE"_s, 13, "continue"_s));
	$assignStatic(Tokens$TokenKind::DEFAULT, $new(Tokens$TokenKind, "DEFAULT"_s, 14, "default"_s));
	$assignStatic(Tokens$TokenKind::DO, $new(Tokens$TokenKind, "DO"_s, 15, "do"_s));
	$assignStatic(Tokens$TokenKind::DOUBLE, $new(Tokens$TokenKind, "DOUBLE"_s, 16, "double"_s, $Tokens$Token$Tag::NAMED));
	$assignStatic(Tokens$TokenKind::ELSE, $new(Tokens$TokenKind, "ELSE"_s, 17, "else"_s));
	$assignStatic(Tokens$TokenKind::ENUM, $new(Tokens$TokenKind, "ENUM"_s, 18, "enum"_s, $Tokens$Token$Tag::NAMED));
	$assignStatic(Tokens$TokenKind::EXTENDS, $new(Tokens$TokenKind, "EXTENDS"_s, 19, "extends"_s));
	$assignStatic(Tokens$TokenKind::FINAL, $new(Tokens$TokenKind, "FINAL"_s, 20, "final"_s));
	$assignStatic(Tokens$TokenKind::FINALLY, $new(Tokens$TokenKind, "FINALLY"_s, 21, "finally"_s));
	$assignStatic(Tokens$TokenKind::FLOAT, $new(Tokens$TokenKind, "FLOAT"_s, 22, "float"_s, $Tokens$Token$Tag::NAMED));
	$assignStatic(Tokens$TokenKind::FOR, $new(Tokens$TokenKind, "FOR"_s, 23, "for"_s));
	$assignStatic(Tokens$TokenKind::GOTO, $new(Tokens$TokenKind, "GOTO"_s, 24, "goto"_s));
	$assignStatic(Tokens$TokenKind::IF, $new(Tokens$TokenKind, "IF"_s, 25, "if"_s));
	$assignStatic(Tokens$TokenKind::IMPLEMENTS, $new(Tokens$TokenKind, "IMPLEMENTS"_s, 26, "implements"_s));
	$assignStatic(Tokens$TokenKind::IMPORT, $new(Tokens$TokenKind, "IMPORT"_s, 27, "import"_s));
	$assignStatic(Tokens$TokenKind::INSTANCEOF, $new(Tokens$TokenKind, "INSTANCEOF"_s, 28, "instanceof"_s));
	$assignStatic(Tokens$TokenKind::INT, $new(Tokens$TokenKind, "INT"_s, 29, "int"_s, $Tokens$Token$Tag::NAMED));
	$assignStatic(Tokens$TokenKind::INTERFACE, $new(Tokens$TokenKind, "INTERFACE"_s, 30, "interface"_s));
	$assignStatic(Tokens$TokenKind::LONG, $new(Tokens$TokenKind, "LONG"_s, 31, "long"_s, $Tokens$Token$Tag::NAMED));
	$assignStatic(Tokens$TokenKind::NATIVE, $new(Tokens$TokenKind, "NATIVE"_s, 32, "native"_s));
	$assignStatic(Tokens$TokenKind::NEW, $new(Tokens$TokenKind, "NEW"_s, 33, "new"_s));
	$assignStatic(Tokens$TokenKind::PACKAGE, $new(Tokens$TokenKind, "PACKAGE"_s, 34, "package"_s));
	$assignStatic(Tokens$TokenKind::PRIVATE, $new(Tokens$TokenKind, "PRIVATE"_s, 35, "private"_s));
	$assignStatic(Tokens$TokenKind::PROTECTED, $new(Tokens$TokenKind, "PROTECTED"_s, 36, "protected"_s));
	$assignStatic(Tokens$TokenKind::PUBLIC, $new(Tokens$TokenKind, "PUBLIC"_s, 37, "public"_s));
	$assignStatic(Tokens$TokenKind::RETURN, $new(Tokens$TokenKind, "RETURN"_s, 38, "return"_s));
	$assignStatic(Tokens$TokenKind::SHORT, $new(Tokens$TokenKind, "SHORT"_s, 39, "short"_s, $Tokens$Token$Tag::NAMED));
	$assignStatic(Tokens$TokenKind::STATIC, $new(Tokens$TokenKind, "STATIC"_s, 40, "static"_s));
	$assignStatic(Tokens$TokenKind::STRICTFP, $new(Tokens$TokenKind, "STRICTFP"_s, 41, "strictfp"_s));
	$assignStatic(Tokens$TokenKind::SUPER, $new(Tokens$TokenKind, "SUPER"_s, 42, "super"_s, $Tokens$Token$Tag::NAMED));
	$assignStatic(Tokens$TokenKind::SWITCH, $new(Tokens$TokenKind, "SWITCH"_s, 43, "switch"_s));
	$assignStatic(Tokens$TokenKind::SYNCHRONIZED, $new(Tokens$TokenKind, "SYNCHRONIZED"_s, 44, "synchronized"_s));
	$assignStatic(Tokens$TokenKind::THIS, $new(Tokens$TokenKind, "THIS"_s, 45, "this"_s, $Tokens$Token$Tag::NAMED));
	$assignStatic(Tokens$TokenKind::THROW, $new(Tokens$TokenKind, "THROW"_s, 46, "throw"_s));
	$assignStatic(Tokens$TokenKind::THROWS, $new(Tokens$TokenKind, "THROWS"_s, 47, "throws"_s));
	$assignStatic(Tokens$TokenKind::TRANSIENT, $new(Tokens$TokenKind, "TRANSIENT"_s, 48, "transient"_s));
	$assignStatic(Tokens$TokenKind::TRY, $new(Tokens$TokenKind, "TRY"_s, 49, "try"_s));
	$assignStatic(Tokens$TokenKind::VOID, $new(Tokens$TokenKind, "VOID"_s, 50, "void"_s, $Tokens$Token$Tag::NAMED));
	$assignStatic(Tokens$TokenKind::VOLATILE, $new(Tokens$TokenKind, "VOLATILE"_s, 51, "volatile"_s));
	$assignStatic(Tokens$TokenKind::WHILE, $new(Tokens$TokenKind, "WHILE"_s, 52, "while"_s));
	$assignStatic(Tokens$TokenKind::INTLITERAL, $new(Tokens$TokenKind, "INTLITERAL"_s, 53, $Tokens$Token$Tag::NUMERIC));
	$assignStatic(Tokens$TokenKind::LONGLITERAL, $new(Tokens$TokenKind, "LONGLITERAL"_s, 54, $Tokens$Token$Tag::NUMERIC));
	$assignStatic(Tokens$TokenKind::FLOATLITERAL, $new(Tokens$TokenKind, "FLOATLITERAL"_s, 55, $Tokens$Token$Tag::NUMERIC));
	$assignStatic(Tokens$TokenKind::DOUBLELITERAL, $new(Tokens$TokenKind, "DOUBLELITERAL"_s, 56, $Tokens$Token$Tag::NUMERIC));
	$assignStatic(Tokens$TokenKind::CHARLITERAL, $new(Tokens$TokenKind, "CHARLITERAL"_s, 57, $Tokens$Token$Tag::NUMERIC));
	$assignStatic(Tokens$TokenKind::STRINGLITERAL, $new(Tokens$TokenKind, "STRINGLITERAL"_s, 58, $Tokens$Token$Tag::STRING));
	$assignStatic(Tokens$TokenKind::TRUE, $new(Tokens$TokenKind, "TRUE"_s, 59, "true"_s, $Tokens$Token$Tag::NAMED));
	$assignStatic(Tokens$TokenKind::FALSE, $new(Tokens$TokenKind, "FALSE"_s, 60, "false"_s, $Tokens$Token$Tag::NAMED));
	$assignStatic(Tokens$TokenKind::NULL, $new(Tokens$TokenKind, "NULL"_s, 61, "null"_s, $Tokens$Token$Tag::NAMED));
	$assignStatic(Tokens$TokenKind::UNDERSCORE, $new(Tokens$TokenKind, "UNDERSCORE"_s, 62, "_"_s, $Tokens$Token$Tag::NAMED));
	$assignStatic(Tokens$TokenKind::ARROW, $new(Tokens$TokenKind, "ARROW"_s, 63, "->"_s));
	$assignStatic(Tokens$TokenKind::COLCOL, $new(Tokens$TokenKind, "COLCOL"_s, 64, "::"_s));
	$assignStatic(Tokens$TokenKind::LPAREN, $new(Tokens$TokenKind, "LPAREN"_s, 65, "("_s));
	$assignStatic(Tokens$TokenKind::RPAREN, $new(Tokens$TokenKind, "RPAREN"_s, 66, ")"_s));
	$assignStatic(Tokens$TokenKind::LBRACE, $new(Tokens$TokenKind, "LBRACE"_s, 67, "{"_s));
	$assignStatic(Tokens$TokenKind::RBRACE, $new(Tokens$TokenKind, "RBRACE"_s, 68, "}"_s));
	$assignStatic(Tokens$TokenKind::LBRACKET, $new(Tokens$TokenKind, "LBRACKET"_s, 69, "["_s));
	$assignStatic(Tokens$TokenKind::RBRACKET, $new(Tokens$TokenKind, "RBRACKET"_s, 70, "]"_s));
	$assignStatic(Tokens$TokenKind::SEMI, $new(Tokens$TokenKind, "SEMI"_s, 71, ";"_s));
	$assignStatic(Tokens$TokenKind::COMMA, $new(Tokens$TokenKind, "COMMA"_s, 72, ","_s));
	$assignStatic(Tokens$TokenKind::DOT, $new(Tokens$TokenKind, "DOT"_s, 73, "."_s));
	$assignStatic(Tokens$TokenKind::ELLIPSIS, $new(Tokens$TokenKind, "ELLIPSIS"_s, 74, "..."_s));
	$assignStatic(Tokens$TokenKind::EQ, $new(Tokens$TokenKind, "EQ"_s, 75, "="_s));
	$assignStatic(Tokens$TokenKind::GT, $new(Tokens$TokenKind, "GT"_s, 76, ">"_s));
	$assignStatic(Tokens$TokenKind::LT, $new(Tokens$TokenKind, "LT"_s, 77, "<"_s));
	$assignStatic(Tokens$TokenKind::BANG, $new(Tokens$TokenKind, "BANG"_s, 78, "!"_s));
	$assignStatic(Tokens$TokenKind::TILDE, $new(Tokens$TokenKind, "TILDE"_s, 79, "~"_s));
	$assignStatic(Tokens$TokenKind::QUES, $new(Tokens$TokenKind, "QUES"_s, 80, "?"_s));
	$assignStatic(Tokens$TokenKind::COLON, $new(Tokens$TokenKind, "COLON"_s, 81, ":"_s));
	$assignStatic(Tokens$TokenKind::EQEQ, $new(Tokens$TokenKind, "EQEQ"_s, 82, "=="_s));
	$assignStatic(Tokens$TokenKind::LTEQ, $new(Tokens$TokenKind, "LTEQ"_s, 83, "<="_s));
	$assignStatic(Tokens$TokenKind::GTEQ, $new(Tokens$TokenKind, "GTEQ"_s, 84, ">="_s));
	$assignStatic(Tokens$TokenKind::BANGEQ, $new(Tokens$TokenKind, "BANGEQ"_s, 85, "!="_s));
	$assignStatic(Tokens$TokenKind::AMPAMP, $new(Tokens$TokenKind, "AMPAMP"_s, 86, "&&"_s));
	$assignStatic(Tokens$TokenKind::BARBAR, $new(Tokens$TokenKind, "BARBAR"_s, 87, "||"_s));
	$assignStatic(Tokens$TokenKind::PLUSPLUS, $new(Tokens$TokenKind, "PLUSPLUS"_s, 88, "++"_s));
	$assignStatic(Tokens$TokenKind::SUBSUB, $new(Tokens$TokenKind, "SUBSUB"_s, 89, "--"_s));
	$assignStatic(Tokens$TokenKind::PLUS, $new(Tokens$TokenKind, "PLUS"_s, 90, "+"_s));
	$assignStatic(Tokens$TokenKind::SUB, $new(Tokens$TokenKind, "SUB"_s, 91, "-"_s));
	$assignStatic(Tokens$TokenKind::STAR, $new(Tokens$TokenKind, "STAR"_s, 92, "*"_s));
	$assignStatic(Tokens$TokenKind::SLASH, $new(Tokens$TokenKind, "SLASH"_s, 93, "/"_s));
	$assignStatic(Tokens$TokenKind::AMP, $new(Tokens$TokenKind, "AMP"_s, 94, "&"_s));
	$assignStatic(Tokens$TokenKind::BAR, $new(Tokens$TokenKind, "BAR"_s, 95, "|"_s));
	$assignStatic(Tokens$TokenKind::CARET, $new(Tokens$TokenKind, "CARET"_s, 96, "^"_s));
	$assignStatic(Tokens$TokenKind::PERCENT, $new(Tokens$TokenKind, "PERCENT"_s, 97, "%"_s));
	$assignStatic(Tokens$TokenKind::LTLT, $new(Tokens$TokenKind, "LTLT"_s, 98, "<<"_s));
	$assignStatic(Tokens$TokenKind::GTGT, $new(Tokens$TokenKind, "GTGT"_s, 99, ">>"_s));
	$assignStatic(Tokens$TokenKind::GTGTGT, $new(Tokens$TokenKind, "GTGTGT"_s, 100, ">>>"_s));
	$assignStatic(Tokens$TokenKind::PLUSEQ, $new(Tokens$TokenKind, "PLUSEQ"_s, 101, "+="_s));
	$assignStatic(Tokens$TokenKind::SUBEQ, $new(Tokens$TokenKind, "SUBEQ"_s, 102, "-="_s));
	$assignStatic(Tokens$TokenKind::STAREQ, $new(Tokens$TokenKind, "STAREQ"_s, 103, "*="_s));
	$assignStatic(Tokens$TokenKind::SLASHEQ, $new(Tokens$TokenKind, "SLASHEQ"_s, 104, "/="_s));
	$assignStatic(Tokens$TokenKind::AMPEQ, $new(Tokens$TokenKind, "AMPEQ"_s, 105, "&="_s));
	$assignStatic(Tokens$TokenKind::BAREQ, $new(Tokens$TokenKind, "BAREQ"_s, 106, "|="_s));
	$assignStatic(Tokens$TokenKind::CARETEQ, $new(Tokens$TokenKind, "CARETEQ"_s, 107, "^="_s));
	$assignStatic(Tokens$TokenKind::PERCENTEQ, $new(Tokens$TokenKind, "PERCENTEQ"_s, 108, "%="_s));
	$assignStatic(Tokens$TokenKind::LTLTEQ, $new(Tokens$TokenKind, "LTLTEQ"_s, 109, "<<="_s));
	$assignStatic(Tokens$TokenKind::GTGTEQ, $new(Tokens$TokenKind, "GTGTEQ"_s, 110, ">>="_s));
	$assignStatic(Tokens$TokenKind::GTGTGTEQ, $new(Tokens$TokenKind, "GTGTGTEQ"_s, 111, ">>>="_s));
	$assignStatic(Tokens$TokenKind::MONKEYS_AT, $new(Tokens$TokenKind, "MONKEYS_AT"_s, 112, "@"_s));
	$assignStatic(Tokens$TokenKind::CUSTOM, $new(Tokens$TokenKind, "CUSTOM"_s, 113));
	$assignStatic(Tokens$TokenKind::$VALUES, Tokens$TokenKind::$values());
}

Tokens$TokenKind::Tokens$TokenKind() {
}

$Class* Tokens$TokenKind::load$($String* name, bool initialize) {
	$loadClass(Tokens$TokenKind, name, initialize, &_Tokens$TokenKind_ClassInfo_, clinit$Tokens$TokenKind, allocate$Tokens$TokenKind);
	return class$;
}

$Class* Tokens$TokenKind::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com