#include <com/sun/tools/javac/parser/TextBlockSupport$WhitespaceChecks.h>

#include <com/sun/tools/javac/parser/TextBlockSupport.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef INCONSISTENT
#undef TRAILING

using $TextBlockSupport$WhitespaceChecksArray = $Array<::com::sun::tools::javac::parser::TextBlockSupport$WhitespaceChecks>;
using $TextBlockSupport = ::com::sun::tools::javac::parser::TextBlockSupport;
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

$FieldInfo _TextBlockSupport$WhitespaceChecks_FieldInfo_[] = {
	{"INCONSISTENT", "Lcom/sun/tools/javac/parser/TextBlockSupport$WhitespaceChecks;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TextBlockSupport$WhitespaceChecks, INCONSISTENT)},
	{"TRAILING", "Lcom/sun/tools/javac/parser/TextBlockSupport$WhitespaceChecks;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TextBlockSupport$WhitespaceChecks, TRAILING)},
	{"$VALUES", "[Lcom/sun/tools/javac/parser/TextBlockSupport$WhitespaceChecks;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TextBlockSupport$WhitespaceChecks, $VALUES)},
	{}
};

$MethodInfo _TextBlockSupport$WhitespaceChecks_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/parser/TextBlockSupport$WhitespaceChecks;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$TextBlockSupport$WhitespaceChecksArray*(*)()>(&TextBlockSupport$WhitespaceChecks::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(TextBlockSupport$WhitespaceChecks::*)($String*,int32_t)>(&TextBlockSupport$WhitespaceChecks::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/parser/TextBlockSupport$WhitespaceChecks;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TextBlockSupport$WhitespaceChecks*(*)($String*)>(&TextBlockSupport$WhitespaceChecks::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/parser/TextBlockSupport$WhitespaceChecks;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TextBlockSupport$WhitespaceChecksArray*(*)()>(&TextBlockSupport$WhitespaceChecks::values))},
	{}
};

$InnerClassInfo _TextBlockSupport$WhitespaceChecks_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.TextBlockSupport$WhitespaceChecks", "com.sun.tools.javac.parser.TextBlockSupport", "WhitespaceChecks", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _TextBlockSupport$WhitespaceChecks_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.parser.TextBlockSupport$WhitespaceChecks",
	"java.lang.Enum",
	nullptr,
	_TextBlockSupport$WhitespaceChecks_FieldInfo_,
	_TextBlockSupport$WhitespaceChecks_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/parser/TextBlockSupport$WhitespaceChecks;>;",
	nullptr,
	_TextBlockSupport$WhitespaceChecks_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.TextBlockSupport"
};

$Object* allocate$TextBlockSupport$WhitespaceChecks($Class* clazz) {
	return $of($alloc(TextBlockSupport$WhitespaceChecks));
}

TextBlockSupport$WhitespaceChecks* TextBlockSupport$WhitespaceChecks::INCONSISTENT = nullptr;
TextBlockSupport$WhitespaceChecks* TextBlockSupport$WhitespaceChecks::TRAILING = nullptr;
$TextBlockSupport$WhitespaceChecksArray* TextBlockSupport$WhitespaceChecks::$VALUES = nullptr;

$TextBlockSupport$WhitespaceChecksArray* TextBlockSupport$WhitespaceChecks::$values() {
	$init(TextBlockSupport$WhitespaceChecks);
	return $new($TextBlockSupport$WhitespaceChecksArray, {
		TextBlockSupport$WhitespaceChecks::INCONSISTENT,
		TextBlockSupport$WhitespaceChecks::TRAILING
	});
}

$TextBlockSupport$WhitespaceChecksArray* TextBlockSupport$WhitespaceChecks::values() {
	$init(TextBlockSupport$WhitespaceChecks);
	return $cast($TextBlockSupport$WhitespaceChecksArray, TextBlockSupport$WhitespaceChecks::$VALUES->clone());
}

TextBlockSupport$WhitespaceChecks* TextBlockSupport$WhitespaceChecks::valueOf($String* name) {
	$init(TextBlockSupport$WhitespaceChecks);
	return $cast(TextBlockSupport$WhitespaceChecks, $Enum::valueOf(TextBlockSupport$WhitespaceChecks::class$, name));
}

void TextBlockSupport$WhitespaceChecks::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$TextBlockSupport$WhitespaceChecks($Class* class$) {
	$assignStatic(TextBlockSupport$WhitespaceChecks::INCONSISTENT, $new(TextBlockSupport$WhitespaceChecks, "INCONSISTENT"_s, 0));
	$assignStatic(TextBlockSupport$WhitespaceChecks::TRAILING, $new(TextBlockSupport$WhitespaceChecks, "TRAILING"_s, 1));
	$assignStatic(TextBlockSupport$WhitespaceChecks::$VALUES, TextBlockSupport$WhitespaceChecks::$values());
}

TextBlockSupport$WhitespaceChecks::TextBlockSupport$WhitespaceChecks() {
}

$Class* TextBlockSupport$WhitespaceChecks::load$($String* name, bool initialize) {
	$loadClass(TextBlockSupport$WhitespaceChecks, name, initialize, &_TextBlockSupport$WhitespaceChecks_ClassInfo_, clinit$TextBlockSupport$WhitespaceChecks, allocate$TextBlockSupport$WhitespaceChecks);
	return class$;
}

$Class* TextBlockSupport$WhitespaceChecks::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com