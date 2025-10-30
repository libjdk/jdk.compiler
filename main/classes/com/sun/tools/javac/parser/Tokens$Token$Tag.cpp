#include <com/sun/tools/javac/parser/Tokens$Token$Tag.h>

#include <com/sun/tools/javac/parser/Tokens$Token.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef DEFAULT
#undef NAMED
#undef NUMERIC
#undef STRING

using $Tokens$Token$TagArray = $Array<::com::sun::tools::javac::parser::Tokens$Token$Tag>;
using $Tokens$Token = ::com::sun::tools::javac::parser::Tokens$Token;
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

$FieldInfo _Tokens$Token$Tag_FieldInfo_[] = {
	{"DEFAULT", "Lcom/sun/tools/javac/parser/Tokens$Token$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$Token$Tag, DEFAULT)},
	{"NAMED", "Lcom/sun/tools/javac/parser/Tokens$Token$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$Token$Tag, NAMED)},
	{"STRING", "Lcom/sun/tools/javac/parser/Tokens$Token$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$Token$Tag, STRING)},
	{"NUMERIC", "Lcom/sun/tools/javac/parser/Tokens$Token$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tokens$Token$Tag, NUMERIC)},
	{"$VALUES", "[Lcom/sun/tools/javac/parser/Tokens$Token$Tag;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Tokens$Token$Tag, $VALUES)},
	{}
};

$MethodInfo _Tokens$Token$Tag_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/parser/Tokens$Token$Tag;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Tokens$Token$TagArray*(*)()>(&Tokens$Token$Tag::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Tokens$Token$Tag::*)($String*,int32_t)>(&Tokens$Token$Tag::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/parser/Tokens$Token$Tag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Tokens$Token$Tag*(*)($String*)>(&Tokens$Token$Tag::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/parser/Tokens$Token$Tag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Tokens$Token$TagArray*(*)()>(&Tokens$Token$Tag::values))},
	{}
};

$InnerClassInfo _Tokens$Token$Tag_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.Tokens$Token", "com.sun.tools.javac.parser.Tokens", "Token", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.parser.Tokens$Token$Tag", "com.sun.tools.javac.parser.Tokens$Token", "Tag", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Tokens$Token$Tag_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.parser.Tokens$Token$Tag",
	"java.lang.Enum",
	nullptr,
	_Tokens$Token$Tag_FieldInfo_,
	_Tokens$Token$Tag_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/parser/Tokens$Token$Tag;>;",
	nullptr,
	_Tokens$Token$Tag_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.Tokens"
};

$Object* allocate$Tokens$Token$Tag($Class* clazz) {
	return $of($alloc(Tokens$Token$Tag));
}

Tokens$Token$Tag* Tokens$Token$Tag::DEFAULT = nullptr;
Tokens$Token$Tag* Tokens$Token$Tag::NAMED = nullptr;
Tokens$Token$Tag* Tokens$Token$Tag::STRING = nullptr;
Tokens$Token$Tag* Tokens$Token$Tag::NUMERIC = nullptr;
$Tokens$Token$TagArray* Tokens$Token$Tag::$VALUES = nullptr;

$Tokens$Token$TagArray* Tokens$Token$Tag::$values() {
	$init(Tokens$Token$Tag);
	return $new($Tokens$Token$TagArray, {
		Tokens$Token$Tag::DEFAULT,
		Tokens$Token$Tag::NAMED,
		Tokens$Token$Tag::STRING,
		Tokens$Token$Tag::NUMERIC
	});
}

$Tokens$Token$TagArray* Tokens$Token$Tag::values() {
	$init(Tokens$Token$Tag);
	return $cast($Tokens$Token$TagArray, Tokens$Token$Tag::$VALUES->clone());
}

Tokens$Token$Tag* Tokens$Token$Tag::valueOf($String* name) {
	$init(Tokens$Token$Tag);
	return $cast(Tokens$Token$Tag, $Enum::valueOf(Tokens$Token$Tag::class$, name));
}

void Tokens$Token$Tag::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Tokens$Token$Tag($Class* class$) {
	$assignStatic(Tokens$Token$Tag::DEFAULT, $new(Tokens$Token$Tag, "DEFAULT"_s, 0));
	$assignStatic(Tokens$Token$Tag::NAMED, $new(Tokens$Token$Tag, "NAMED"_s, 1));
	$assignStatic(Tokens$Token$Tag::STRING, $new(Tokens$Token$Tag, "STRING"_s, 2));
	$assignStatic(Tokens$Token$Tag::NUMERIC, $new(Tokens$Token$Tag, "NUMERIC"_s, 3));
	$assignStatic(Tokens$Token$Tag::$VALUES, Tokens$Token$Tag::$values());
}

Tokens$Token$Tag::Tokens$Token$Tag() {
}

$Class* Tokens$Token$Tag::load$($String* name, bool initialize) {
	$loadClass(Tokens$Token$Tag, name, initialize, &_Tokens$Token$Tag_ClassInfo_, clinit$Tokens$Token$Tag, allocate$Tokens$Token$Tag);
	return class$;
}

$Class* Tokens$Token$Tag::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com