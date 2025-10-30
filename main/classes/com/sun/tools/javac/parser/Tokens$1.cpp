#include <com/sun/tools/javac/parser/Tokens$1.h>

#include <com/sun/tools/javac/parser/Tokens$TokenKind.h>
#include <com/sun/tools/javac/parser/Tokens.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef CHARLITERAL
#undef COMMA
#undef DOT
#undef DOUBLELITERAL
#undef EOF
#undef ERROR
#undef FLOATLITERAL
#undef IDENTIFIER
#undef INTLITERAL
#undef LBRACE
#undef LBRACKET
#undef LONGLITERAL
#undef LPAREN
#undef RBRACE
#undef RBRACKET
#undef RPAREN
#undef SEMI
#undef STRINGLITERAL

using $Tokens$TokenKindArray = $Array<::com::sun::tools::javac::parser::Tokens$TokenKind>;
using $Tokens = ::com::sun::tools::javac::parser::Tokens;
using $Tokens$TokenKind = ::com::sun::tools::javac::parser::Tokens$TokenKind;
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

$FieldInfo _Tokens$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Tokens$1, $SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)},
	{}
};

$EnclosingMethodInfo _Tokens$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.parser.Tokens",
	nullptr,
	nullptr
};

$InnerClassInfo _Tokens$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.Tokens$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Tokens$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.parser.Tokens$1",
	"java.lang.Object",
	nullptr,
	_Tokens$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Tokens$1_EnclosingMethodInfo_,
	_Tokens$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.Tokens"
};

$Object* allocate$Tokens$1($Class* clazz) {
	return $of($alloc(Tokens$1));
}

$ints* Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind = nullptr;

void clinit$Tokens$1($Class* class$) {
	$assignStatic(Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind, $new($ints, $($Tokens$TokenKind::values())->length));
	{
		try {
			$nc(Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::IDENTIFIER->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::CHARLITERAL->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::STRINGLITERAL->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::INTLITERAL->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::LONGLITERAL->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::FLOATLITERAL->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::DOUBLELITERAL->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::ERROR->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::EOF->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::DOT->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::COMMA->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::SEMI->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::LPAREN->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::RPAREN->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::LBRACKET->ordinal(), 15);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::RBRACKET->ordinal(), 16);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::LBRACE->ordinal(), 17);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Tokens$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->set($Tokens$TokenKind::RBRACE->ordinal(), 18);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Tokens$1::Tokens$1() {
}

$Class* Tokens$1::load$($String* name, bool initialize) {
	$loadClass(Tokens$1, name, initialize, &_Tokens$1_ClassInfo_, clinit$Tokens$1, allocate$Tokens$1);
	return class$;
}

$Class* Tokens$1::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com