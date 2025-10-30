#include <com/sun/tools/javac/parser/Tokens$Comment$CommentStyle.h>

#include <com/sun/tools/javac/parser/Tokens$Comment.h>
#include <com/sun/tools/javac/parser/Tokens.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BLOCK
#undef JAVADOC
#undef LINE

using $Tokens$Comment$CommentStyleArray = $Array<::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle>;
using $Tokens = ::com::sun::tools::javac::parser::Tokens;
using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _Tokens$Comment$CommentStyle_FieldInfo_[] = {
	{"LINE", "Lcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$Comment$CommentStyle, LINE)},
	{"BLOCK", "Lcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$Comment$CommentStyle, BLOCK)},
	{"JAVADOC", "Lcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$Comment$CommentStyle, JAVADOC)},
	{"$VALUES", "[Lcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Tokens$Comment$CommentStyle, $VALUES)},
	{}
};

$MethodInfo _Tokens$Comment$CommentStyle_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Tokens$Comment$CommentStyleArray*(*)()>(&Tokens$Comment$CommentStyle::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Tokens$Comment$CommentStyle::*)($String*,int32_t)>(&Tokens$Comment$CommentStyle::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Tokens$Comment$CommentStyle*(*)($String*)>(&Tokens$Comment$CommentStyle::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Tokens$Comment$CommentStyleArray*(*)()>(&Tokens$Comment$CommentStyle::values))},
	{}
};

$InnerClassInfo _Tokens$Comment$CommentStyle_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.Tokens$Comment", "com.sun.tools.javac.parser.Tokens", "Comment", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.parser.Tokens$Comment$CommentStyle", "com.sun.tools.javac.parser.Tokens$Comment", "CommentStyle", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Tokens$Comment$CommentStyle_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.parser.Tokens$Comment$CommentStyle",
	"java.lang.Enum",
	nullptr,
	_Tokens$Comment$CommentStyle_FieldInfo_,
	_Tokens$Comment$CommentStyle_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;>;",
	nullptr,
	_Tokens$Comment$CommentStyle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.Tokens"
};

$Object* allocate$Tokens$Comment$CommentStyle($Class* clazz) {
	return $of($alloc(Tokens$Comment$CommentStyle));
}

Tokens$Comment$CommentStyle* Tokens$Comment$CommentStyle::LINE = nullptr;
Tokens$Comment$CommentStyle* Tokens$Comment$CommentStyle::BLOCK = nullptr;
Tokens$Comment$CommentStyle* Tokens$Comment$CommentStyle::JAVADOC = nullptr;
$Tokens$Comment$CommentStyleArray* Tokens$Comment$CommentStyle::$VALUES = nullptr;

$Tokens$Comment$CommentStyleArray* Tokens$Comment$CommentStyle::$values() {
	$init(Tokens$Comment$CommentStyle);
	return $new($Tokens$Comment$CommentStyleArray, {
		Tokens$Comment$CommentStyle::LINE,
		Tokens$Comment$CommentStyle::BLOCK,
		Tokens$Comment$CommentStyle::JAVADOC
	});
}

$Tokens$Comment$CommentStyleArray* Tokens$Comment$CommentStyle::values() {
	$init(Tokens$Comment$CommentStyle);
	return $cast($Tokens$Comment$CommentStyleArray, Tokens$Comment$CommentStyle::$VALUES->clone());
}

Tokens$Comment$CommentStyle* Tokens$Comment$CommentStyle::valueOf($String* name) {
	$init(Tokens$Comment$CommentStyle);
	return $cast(Tokens$Comment$CommentStyle, $Enum::valueOf(Tokens$Comment$CommentStyle::class$, name));
}

void Tokens$Comment$CommentStyle::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Tokens$Comment$CommentStyle($Class* class$) {
	$assignStatic(Tokens$Comment$CommentStyle::LINE, $new(Tokens$Comment$CommentStyle, "LINE"_s, 0));
	$assignStatic(Tokens$Comment$CommentStyle::BLOCK, $new(Tokens$Comment$CommentStyle, "BLOCK"_s, 1));
	$assignStatic(Tokens$Comment$CommentStyle::JAVADOC, $new(Tokens$Comment$CommentStyle, "JAVADOC"_s, 2));
	$assignStatic(Tokens$Comment$CommentStyle::$VALUES, Tokens$Comment$CommentStyle::$values());
}

Tokens$Comment$CommentStyle::Tokens$Comment$CommentStyle() {
}

$Class* Tokens$Comment$CommentStyle::load$($String* name, bool initialize) {
	$loadClass(Tokens$Comment$CommentStyle, name, initialize, &_Tokens$Comment$CommentStyle_ClassInfo_, clinit$Tokens$Comment$CommentStyle, allocate$Tokens$Comment$CommentStyle);
	return class$;
}

$Class* Tokens$Comment$CommentStyle::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com