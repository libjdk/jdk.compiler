#include <com/sun/tools/javac/parser/Tokens$Comment.h>

#include <com/sun/tools/javac/parser/Tokens$Comment$CommentStyle.h>
#include <com/sun/tools/javac/parser/Tokens.h>
#include <jcpp.h>

using $Tokens = ::com::sun::tools::javac::parser::Tokens;
using $Tokens$Comment$CommentStyle = ::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$MethodInfo _Tokens$Comment_MethodInfo_[] = {
	{"getSourcePos", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getStyle", "()Lcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;", nullptr, $PUBLIC | $ABSTRACT},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isDeprecated", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Tokens$Comment_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.Tokens$Comment", "com.sun.tools.javac.parser.Tokens", "Comment", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.parser.Tokens$Comment$CommentStyle", "com.sun.tools.javac.parser.Tokens$Comment", "CommentStyle", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Tokens$Comment_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.parser.Tokens$Comment",
	nullptr,
	nullptr,
	nullptr,
	_Tokens$Comment_MethodInfo_,
	nullptr,
	nullptr,
	_Tokens$Comment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.Tokens"
};

$Object* allocate$Tokens$Comment($Class* clazz) {
	return $of($alloc(Tokens$Comment));
}

$Class* Tokens$Comment::load$($String* name, bool initialize) {
	$loadClass(Tokens$Comment, name, initialize, &_Tokens$Comment_ClassInfo_, allocate$Tokens$Comment);
	return class$;
}

$Class* Tokens$Comment::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com