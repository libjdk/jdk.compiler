#include <com/sun/tools/javac/parser/JavacParser$1.h>

#include <com/sun/tools/javac/parser/JavacParser$ParensResult.h>
#include <com/sun/tools/javac/parser/JavacParser.h>
#include <com/sun/tools/javac/parser/Tokens$TokenKind.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/lang/NoSuchFieldError.h>
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
#undef CAST
#undef CATCH
#undef CHAR
#undef CHARLITERAL
#undef CLASS
#undef CLASSDEF
#undef COMMA
#undef CONTINUE
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
#undef EXPLICIT_LAMBDA
#undef EXTENDS
#undef FALSE
#undef FINAL
#undef FINALLY
#undef FLOAT
#undef FLOATLITERAL
#undef FOR
#undef GT
#undef GTEQ
#undef GTGT
#undef GTGTEQ
#undef GTGTGT
#undef GTGTGTEQ
#undef IDENT
#undef IDENTIFIER
#undef IF
#undef IMPLICIT_LAMBDA
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
#undef NATIVE
#undef NEW
#undef NULL
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
#undef REFERENCE
#undef RETURN
#undef RPAREN
#undef SELECT
#undef SEMI
#undef SHORT
#undef SLASH
#undef SLASHEQ
#undef STAR
#undef STAREQ
#undef STATIC
#undef STRICTFP
#undef STRINGLITERAL
#undef SUB
#undef SUBEQ
#undef SUBSUB
#undef SUPER
#undef SWITCH
#undef SYNCHRONIZED
#undef THIS
#undef THROW
#undef TILDE
#undef TRANSIENT
#undef TRUE
#undef TRY
#undef TYPEARRAY
#undef UNDERSCORE
#undef VARDEF
#undef VOID
#undef VOLATILE
#undef WHILE

using $JavacParser$ParensResultArray = $Array<::com::sun::tools::javac::parser::JavacParser$ParensResult>;
using $Tokens$TokenKindArray = $Array<::com::sun::tools::javac::parser::Tokens$TokenKind>;
using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $JavacParser = ::com::sun::tools::javac::parser::JavacParser;
using $JavacParser$ParensResult = ::com::sun::tools::javac::parser::JavacParser$ParensResult;
using $Tokens$TokenKind = ::com::sun::tools::javac::parser::Tokens$TokenKind;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _JavacParser$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacParser$1, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
	{"$SwitchMap$com$sun$tools$javac$parser$JavacParser$ParensResult", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacParser$1, $SwitchMap$com$sun$tools$javac$parser$JavacParser$ParensResult)},
	{"$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacParser$1, $SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)},
	{}
};

$EnclosingMethodInfo _JavacParser$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.parser.JavacParser",
	nullptr,
	nullptr
};

$InnerClassInfo _JavacParser$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.JavacParser$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JavacParser$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.parser.JavacParser$1",
	"java.lang.Object",
	nullptr,
	_JavacParser$1_FieldInfo_,
	nullptr,
	nullptr,
	&_JavacParser$1_EnclosingMethodInfo_,
	_JavacParser$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.JavacParser"
};

$Object* allocate$JavacParser$1($Class* clazz) {
	return $of($alloc(JavacParser$1));
}

$ints* JavacParser$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;
$ints* JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$JavacParser$ParensResult = nullptr;
$ints* JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind = nullptr;

void clinit$JavacParser$1($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JavacParser$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::REFERENCE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::SELECT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::CLASSDEF->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::VARDEF->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::IDENT->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::TYPEARRAY->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$JavacParser$ParensResult, $new($ints, $($JavacParser$ParensResult::values())->length));
	{
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$JavacParser$ParensResult)->set($JavacParser$ParensResult::CAST->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$JavacParser$ParensResult)->set($JavacParser$ParensResult::IMPLICIT_LAMBDA->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$JavacParser$ParensResult)->set($JavacParser$ParensResult::EXPLICIT_LAMBDA->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind, $new($ints, $($Tokens$TokenKind::values())->length));
	{
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::SEMI->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::PUBLIC->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::FINAL->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::ABSTRACT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::MONKEYS_AT->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::EOF->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::CLASS->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::INTERFACE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::ENUM->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::IMPORT->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::LBRACE->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::RBRACE->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::PRIVATE->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::PROTECTED->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::STATIC->ordinal(), 15);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::TRANSIENT->ordinal(), 16);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::NATIVE->ordinal(), 17);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::VOLATILE->ordinal(), 18);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::SYNCHRONIZED->ordinal(), 19);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::STRICTFP->ordinal(), 20);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::LT->ordinal(), 21);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::BYTE->ordinal(), 22);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::SHORT->ordinal(), 23);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::CHAR->ordinal(), 24);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::INT->ordinal(), 25);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::LONG->ordinal(), 26);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::FLOAT->ordinal(), 27);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::DOUBLE->ordinal(), 28);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::BOOLEAN->ordinal(), 29);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::VOID->ordinal(), 30);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::UNDERSCORE->ordinal(), 31);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::IDENTIFIER->ordinal(), 32);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::CASE->ordinal(), 33);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::DEFAULT->ordinal(), 34);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::IF->ordinal(), 35);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::FOR->ordinal(), 36);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::WHILE->ordinal(), 37);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::DO->ordinal(), 38);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::TRY->ordinal(), 39);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::SWITCH->ordinal(), 40);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::RETURN->ordinal(), 41);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::THROW->ordinal(), 42);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::BREAK->ordinal(), 43);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::CONTINUE->ordinal(), 44);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::ELSE->ordinal(), 45);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::FINALLY->ordinal(), 46);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::CATCH->ordinal(), 47);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::THIS->ordinal(), 48);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::SUPER->ordinal(), 49);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::NEW->ordinal(), 50);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::ASSERT->ordinal(), 51);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::INTLITERAL->ordinal(), 52);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::LONGLITERAL->ordinal(), 53);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::FLOATLITERAL->ordinal(), 54);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::DOUBLELITERAL->ordinal(), 55);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::CHARLITERAL->ordinal(), 56);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::STRINGLITERAL->ordinal(), 57);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::TRUE->ordinal(), 58);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::FALSE->ordinal(), 59);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::NULL->ordinal(), 60);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::EQ->ordinal(), 61);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::PLUSEQ->ordinal(), 62);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::SUBEQ->ordinal(), 63);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::STAREQ->ordinal(), 64);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::SLASHEQ->ordinal(), 65);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::PERCENTEQ->ordinal(), 66);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::AMPEQ->ordinal(), 67);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::BAREQ->ordinal(), 68);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::CARETEQ->ordinal(), 69);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::LTLTEQ->ordinal(), 70);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::GTGTEQ->ordinal(), 71);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::GTGTGTEQ->ordinal(), 72);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::LBRACKET->ordinal(), 73);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::LPAREN->ordinal(), 74);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::DOT->ordinal(), 75);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::ELLIPSIS->ordinal(), 76);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::QUES->ordinal(), 77);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::PLUSPLUS->ordinal(), 78);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::SUBSUB->ordinal(), 79);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::BANG->ordinal(), 80);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::TILDE->ordinal(), 81);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::PLUS->ordinal(), 82);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::SUB->ordinal(), 83);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::ARROW->ordinal(), 84);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::RPAREN->ordinal(), 85);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::EXTENDS->ordinal(), 86);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::RBRACKET->ordinal(), 87);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::COMMA->ordinal(), 88);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::GTGTGT->ordinal(), 89);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::GTGT->ordinal(), 90);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::GT->ordinal(), 91);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::AMP->ordinal(), 92);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::GTEQ->ordinal(), 93);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::ERROR->ordinal(), 94);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::BARBAR->ordinal(), 95);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::AMPAMP->ordinal(), 96);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::BAR->ordinal(), 97);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::CARET->ordinal(), 98);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::EQEQ->ordinal(), 99);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::BANGEQ->ordinal(), 100);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::LTEQ->ordinal(), 101);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::LTLT->ordinal(), 102);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::STAR->ordinal(), 103);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::SLASH->ordinal(), 104);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::PERCENT->ordinal(), 105);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::INSTANCEOF->ordinal(), 106);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JavacParser$1::JavacParser$1() {
}

$Class* JavacParser$1::load$($String* name, bool initialize) {
	$loadClass(JavacParser$1, name, initialize, &_JavacParser$1_ClassInfo_, clinit$JavacParser$1, allocate$JavacParser$1);
	return class$;
}

$Class* JavacParser$1::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com