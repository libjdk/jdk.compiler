#include <com/sun/tools/javac/parser/Tokens$NamedToken.h>

#include <com/sun/tools/javac/parser/Tokens$Token$Tag.h>
#include <com/sun/tools/javac/parser/Tokens$Token.h>
#include <com/sun/tools/javac/parser/Tokens$TokenKind.h>
#include <com/sun/tools/javac/parser/Tokens.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef NAMED

using $Tokens = ::com::sun::tools::javac::parser::Tokens;
using $Tokens$Token = ::com::sun::tools::javac::parser::Tokens$Token;
using $Tokens$Token$Tag = ::com::sun::tools::javac::parser::Tokens$Token$Tag;
using $Tokens$TokenKind = ::com::sun::tools::javac::parser::Tokens$TokenKind;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
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

$FieldInfo _Tokens$NamedToken_FieldInfo_[] = {
	{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Tokens$NamedToken, name$)},
	{}
};

$MethodInfo _Tokens$NamedToken_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;IILcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;IILcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/parser/Tokens$Comment;>;)V", $PUBLIC, $method(static_cast<void(Tokens$NamedToken::*)($Tokens$TokenKind*,int32_t,int32_t,$Name*,$List*)>(&Tokens$NamedToken::init$))},
	{"checkKind", "()V", nullptr, $PROTECTED},
	{"name", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Tokens$NamedToken_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.Tokens$NamedToken", "com.sun.tools.javac.parser.Tokens", "NamedToken", $STATIC | $FINAL},
	{"com.sun.tools.javac.parser.Tokens$Token", "com.sun.tools.javac.parser.Tokens", "Token", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Tokens$NamedToken_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.parser.Tokens$NamedToken",
	"com.sun.tools.javac.parser.Tokens$Token",
	nullptr,
	_Tokens$NamedToken_FieldInfo_,
	_Tokens$NamedToken_MethodInfo_,
	nullptr,
	nullptr,
	_Tokens$NamedToken_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.Tokens"
};

$Object* allocate$Tokens$NamedToken($Class* clazz) {
	return $of($alloc(Tokens$NamedToken));
}

void Tokens$NamedToken::init$($Tokens$TokenKind* kind, int32_t pos, int32_t endPos, $Name* name, $List* comments) {
	$Tokens$Token::init$(kind, pos, endPos, comments);
	$set(this, name$, name);
}

void Tokens$NamedToken::checkKind() {
	$init($Tokens$Token$Tag);
	if (this->kind->tag != $Tokens$Token$Tag::NAMED) {
		$throwNew($AssertionError, $of($$str({"Bad token kind - expected "_s, $Tokens$Token$Tag::NAMED})));
	}
}

$Name* Tokens$NamedToken::name() {
	return this->name$;
}

Tokens$NamedToken::Tokens$NamedToken() {
}

$Class* Tokens$NamedToken::load$($String* name, bool initialize) {
	$loadClass(Tokens$NamedToken, name, initialize, &_Tokens$NamedToken_ClassInfo_, allocate$Tokens$NamedToken);
	return class$;
}

$Class* Tokens$NamedToken::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com