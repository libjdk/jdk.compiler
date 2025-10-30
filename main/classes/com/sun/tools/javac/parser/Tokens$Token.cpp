#include <com/sun/tools/javac/parser/Tokens$Token.h>

#include <com/sun/tools/javac/parser/Tokens$Comment$CommentStyle.h>
#include <com/sun/tools/javac/parser/Tokens$Comment.h>
#include <com/sun/tools/javac/parser/Tokens$Token$Tag.h>
#include <com/sun/tools/javac/parser/Tokens$TokenKind.h>
#include <com/sun/tools/javac/parser/Tokens.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/AssertionError.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef DEFAULT
#undef JAVADOC

using $Tokens$TokenArray = $Array<::com::sun::tools::javac::parser::Tokens$Token>;
using $Tokens = ::com::sun::tools::javac::parser::Tokens;
using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $Tokens$Comment$CommentStyle = ::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle;
using $Tokens$Token$Tag = ::com::sun::tools::javac::parser::Tokens$Token$Tag;
using $Tokens$TokenKind = ::com::sun::tools::javac::parser::Tokens$TokenKind;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _Tokens$Token_FieldInfo_[] = {
	{"kind", "Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, $PUBLIC | $FINAL, $field(Tokens$Token, kind)},
	{"pos", "I", nullptr, $PUBLIC | $FINAL, $field(Tokens$Token, pos)},
	{"endPos", "I", nullptr, $PUBLIC | $FINAL, $field(Tokens$Token, endPos)},
	{"comments", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/parser/Tokens$Comment;>;", $PUBLIC | $FINAL, $field(Tokens$Token, comments)},
	{}
};

$MethodInfo _Tokens$Token_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;IILcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;IILcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/parser/Tokens$Comment;>;)V", 0, $method(static_cast<void(Tokens$Token::*)($Tokens$TokenKind*,int32_t,int32_t,$List*)>(&Tokens$Token::init$))},
	{"checkKind", "()V", nullptr, $PROTECTED},
	{"comment", "(Lcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;)Lcom/sun/tools/javac/parser/Tokens$Comment;", nullptr, $PUBLIC},
	{"deprecatedFlag", "()Z", nullptr, $PUBLIC},
	{"getComments", "(Lcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/parser/Tokens$Comment;>;", $PRIVATE, $method(static_cast<$List*(Tokens$Token::*)($Tokens$Comment$CommentStyle*)>(&Tokens$Token::getComments))},
	{"name", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"radix", "()I", nullptr, $PUBLIC},
	{"split", "(Lcom/sun/tools/javac/parser/Tokens;)[Lcom/sun/tools/javac/parser/Tokens$Token;", nullptr, 0},
	{"stringVal", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Tokens$Token_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.Tokens$Token", "com.sun.tools.javac.parser.Tokens", "Token", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.parser.Tokens$Token$Tag", "com.sun.tools.javac.parser.Tokens$Token", "Tag", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Tokens$Token_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.parser.Tokens$Token",
	"java.lang.Object",
	nullptr,
	_Tokens$Token_FieldInfo_,
	_Tokens$Token_MethodInfo_,
	nullptr,
	nullptr,
	_Tokens$Token_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.Tokens"
};

$Object* allocate$Tokens$Token($Class* clazz) {
	return $of($alloc(Tokens$Token));
}

void Tokens$Token::init$($Tokens$TokenKind* kind, int32_t pos, int32_t endPos, $List* comments) {
	$set(this, kind, kind);
	this->pos = pos;
	this->endPos = endPos;
	$set(this, comments, comments);
	checkKind();
}

$Tokens$TokenArray* Tokens$Token::split($Tokens* tokens) {
	$useLocalCurrentObjectStackCache();
	$init($Tokens$Token$Tag);
	if ($nc(this->kind->name$)->length() < 2 || this->kind->tag != $Tokens$Token$Tag::DEFAULT) {
		$throwNew($AssertionError, $of($$str({"Cant split"_s, this->kind})));
	}
	$Tokens$TokenKind* t1 = $nc(tokens)->lookupKind($($nc(this->kind->name$)->substring(0, 1)));
	$Tokens$TokenKind* t2 = tokens->lookupKind($($nc(this->kind->name$)->substring(1)));
	if (t1 == nullptr || t2 == nullptr) {
		$throwNew($AssertionError, $of("Cant split - bad subtokens"_s));
	}
	return $new($Tokens$TokenArray, {
		$$new(Tokens$Token, t1, this->pos, this->pos + $nc($nc(t1)->name$)->length(), this->comments),
		$$new(Tokens$Token, t2, this->pos + $nc($nc(t1)->name$)->length(), this->endPos, nullptr)
	});
}

void Tokens$Token::checkKind() {
	$init($Tokens$Token$Tag);
	if (this->kind->tag != $Tokens$Token$Tag::DEFAULT) {
		$throwNew($AssertionError, $of($$str({"Bad token kind - expected "_s, $Tokens$Token$Tag::DEFAULT})));
	}
}

$Name* Tokens$Token::name() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$String* Tokens$Token::stringVal() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t Tokens$Token::radix() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Tokens$Comment* Tokens$Token::comment($Tokens$Comment$CommentStyle* style) {
	$init($Tokens$Comment$CommentStyle);
	$var($List, comments, getComments($Tokens$Comment$CommentStyle::JAVADOC));
	return $nc(comments)->isEmpty() ? ($Tokens$Comment*)nullptr : $cast($Tokens$Comment, $nc(comments)->head);
}

bool Tokens$Token::deprecatedFlag() {
	$useLocalCurrentObjectStackCache();
	{
		$init($Tokens$Comment$CommentStyle);
		$var($Iterator, i$, $nc($(getComments($Tokens$Comment$CommentStyle::JAVADOC)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Tokens$Comment, c, $cast($Tokens$Comment, i$->next()));
			{
				if ($nc(c)->isDeprecated()) {
					return true;
				}
			}
		}
	}
	return false;
}

$List* Tokens$Token::getComments($Tokens$Comment$CommentStyle* style) {
	$useLocalCurrentObjectStackCache();
	if (this->comments == nullptr) {
		return $List::nil();
	} else {
		$var($ListBuffer, buf, $new($ListBuffer));
		{
			$var($Iterator, i$, $nc(this->comments)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Tokens$Comment, c, $cast($Tokens$Comment, i$->next()));
				{
					if ($nc(c)->getStyle() == style) {
						buf->add(c);
					}
				}
			}
		}
		return buf->toList();
	}
}

Tokens$Token::Tokens$Token() {
}

$Class* Tokens$Token::load$($String* name, bool initialize) {
	$loadClass(Tokens$Token, name, initialize, &_Tokens$Token_ClassInfo_, allocate$Tokens$Token);
	return class$;
}

$Class* Tokens$Token::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com