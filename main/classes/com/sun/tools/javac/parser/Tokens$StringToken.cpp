#include <com/sun/tools/javac/parser/Tokens$StringToken.h>

#include <com/sun/tools/javac/parser/Tokens$Token$Tag.h>
#include <com/sun/tools/javac/parser/Tokens$Token.h>
#include <com/sun/tools/javac/parser/Tokens$TokenKind.h>
#include <com/sun/tools/javac/parser/Tokens.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef STRING

using $Tokens = ::com::sun::tools::javac::parser::Tokens;
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

$FieldInfo _Tokens$StringToken_FieldInfo_[] = {
	{"stringVal", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(Tokens$StringToken, stringVal$)},
	{}
};

$MethodInfo _Tokens$StringToken_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;IILjava/lang/String;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;IILjava/lang/String;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/parser/Tokens$Comment;>;)V", $PUBLIC, $method(static_cast<void(Tokens$StringToken::*)($Tokens$TokenKind*,int32_t,int32_t,$String*,$List*)>(&Tokens$StringToken::init$))},
	{"checkKind", "()V", nullptr, $PROTECTED},
	{"stringVal", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Tokens$StringToken_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.Tokens$StringToken", "com.sun.tools.javac.parser.Tokens", "StringToken", $STATIC},
	{"com.sun.tools.javac.parser.Tokens$Token", "com.sun.tools.javac.parser.Tokens", "Token", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Tokens$StringToken_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.parser.Tokens$StringToken",
	"com.sun.tools.javac.parser.Tokens$Token",
	nullptr,
	_Tokens$StringToken_FieldInfo_,
	_Tokens$StringToken_MethodInfo_,
	nullptr,
	nullptr,
	_Tokens$StringToken_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.Tokens"
};

$Object* allocate$Tokens$StringToken($Class* clazz) {
	return $of($alloc(Tokens$StringToken));
}

void Tokens$StringToken::init$($Tokens$TokenKind* kind, int32_t pos, int32_t endPos, $String* stringVal, $List* comments) {
	$Tokens$Token::init$(kind, pos, endPos, comments);
	$set(this, stringVal$, stringVal);
}

void Tokens$StringToken::checkKind() {
	$init($Tokens$Token$Tag);
	if (this->kind->tag != $Tokens$Token$Tag::STRING) {
		$throwNew($AssertionError, $of($$str({"Bad token kind - expected "_s, $Tokens$Token$Tag::STRING})));
	}
}

$String* Tokens$StringToken::stringVal() {
	return this->stringVal$;
}

Tokens$StringToken::Tokens$StringToken() {
}

$Class* Tokens$StringToken::load$($String* name, bool initialize) {
	$loadClass(Tokens$StringToken, name, initialize, &_Tokens$StringToken_ClassInfo_, allocate$Tokens$StringToken);
	return class$;
}

$Class* Tokens$StringToken::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com