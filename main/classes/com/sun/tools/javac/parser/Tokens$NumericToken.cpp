#include <com/sun/tools/javac/parser/Tokens$NumericToken.h>

#include <com/sun/tools/javac/parser/Tokens$StringToken.h>
#include <com/sun/tools/javac/parser/Tokens$Token$Tag.h>
#include <com/sun/tools/javac/parser/Tokens$Token.h>
#include <com/sun/tools/javac/parser/Tokens$TokenKind.h>
#include <com/sun/tools/javac/parser/Tokens.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef NUMERIC

using $Tokens = ::com::sun::tools::javac::parser::Tokens;
using $Tokens$StringToken = ::com::sun::tools::javac::parser::Tokens$StringToken;
using $Tokens$Token = ::com::sun::tools::javac::parser::Tokens$Token;
using $Tokens$Token$Tag = ::com::sun::tools::javac::parser::Tokens$Token$Tag;
using $Tokens$TokenKind = ::com::sun::tools::javac::parser::Tokens$TokenKind;
using $List = ::com::sun::tools::javac::util::List;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _Tokens$NumericToken_FieldInfo_[] = {
	{"radix", "I", nullptr, $PUBLIC | $FINAL, $field(Tokens$NumericToken, radix$)},
	{}
};

$MethodInfo _Tokens$NumericToken_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;IILjava/lang/String;ILcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;IILjava/lang/String;ILcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/parser/Tokens$Comment;>;)V", $PUBLIC, $method(static_cast<void(Tokens$NumericToken::*)($Tokens$TokenKind*,int32_t,int32_t,$String*,int32_t,$List*)>(&Tokens$NumericToken::init$))},
	{"checkKind", "()V", nullptr, $PROTECTED},
	{"radix", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Tokens$NumericToken_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.Tokens$NumericToken", "com.sun.tools.javac.parser.Tokens", "NumericToken", $STATIC | $FINAL},
	{"com.sun.tools.javac.parser.Tokens$StringToken", "com.sun.tools.javac.parser.Tokens", "StringToken", $STATIC},
	{}
};

$ClassInfo _Tokens$NumericToken_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.parser.Tokens$NumericToken",
	"com.sun.tools.javac.parser.Tokens$StringToken",
	nullptr,
	_Tokens$NumericToken_FieldInfo_,
	_Tokens$NumericToken_MethodInfo_,
	nullptr,
	nullptr,
	_Tokens$NumericToken_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.Tokens"
};

$Object* allocate$Tokens$NumericToken($Class* clazz) {
	return $of($alloc(Tokens$NumericToken));
}

void Tokens$NumericToken::init$($Tokens$TokenKind* kind, int32_t pos, int32_t endPos, $String* stringVal, int32_t radix, $List* comments) {
	$Tokens$StringToken::init$(kind, pos, endPos, stringVal, comments);
	this->radix$ = radix;
}

void Tokens$NumericToken::checkKind() {
	$init($Tokens$Token$Tag);
	if (this->kind->tag != $Tokens$Token$Tag::NUMERIC) {
		$throwNew($AssertionError, $of($$str({"Bad token kind - expected "_s, $Tokens$Token$Tag::NUMERIC})));
	}
}

int32_t Tokens$NumericToken::radix() {
	return this->radix$;
}

Tokens$NumericToken::Tokens$NumericToken() {
}

$Class* Tokens$NumericToken::load$($String* name, bool initialize) {
	$loadClass(Tokens$NumericToken, name, initialize, &_Tokens$NumericToken_ClassInfo_, allocate$Tokens$NumericToken);
	return class$;
}

$Class* Tokens$NumericToken::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com