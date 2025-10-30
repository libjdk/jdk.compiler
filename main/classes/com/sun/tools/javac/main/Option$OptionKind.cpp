#include <com/sun/tools/javac/main/Option$OptionKind.h>

#include <com/sun/tools/javac/main/Option.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef EXTENDED
#undef HIDDEN
#undef STANDARD

using $Option$OptionKindArray = $Array<::com::sun::tools::javac::main::Option$OptionKind>;
using $Option = ::com::sun::tools::javac::main::Option;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$FieldInfo _Option$OptionKind_FieldInfo_[] = {
	{"STANDARD", "Lcom/sun/tools/javac/main/Option$OptionKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$OptionKind, STANDARD)},
	{"EXTENDED", "Lcom/sun/tools/javac/main/Option$OptionKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$OptionKind, EXTENDED)},
	{"HIDDEN", "Lcom/sun/tools/javac/main/Option$OptionKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$OptionKind, HIDDEN)},
	{"$VALUES", "[Lcom/sun/tools/javac/main/Option$OptionKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Option$OptionKind, $VALUES)},
	{}
};

$MethodInfo _Option$OptionKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/main/Option$OptionKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Option$OptionKindArray*(*)()>(&Option$OptionKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Option$OptionKind::*)($String*,int32_t)>(&Option$OptionKind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/main/Option$OptionKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Option$OptionKind*(*)($String*)>(&Option$OptionKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/main/Option$OptionKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Option$OptionKindArray*(*)()>(&Option$OptionKind::values))},
	{}
};

$InnerClassInfo _Option$OptionKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$OptionKind", "com.sun.tools.javac.main.Option", "OptionKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$OptionKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$OptionKind",
	"java.lang.Enum",
	nullptr,
	_Option$OptionKind_FieldInfo_,
	_Option$OptionKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/main/Option$OptionKind;>;",
	nullptr,
	_Option$OptionKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$OptionKind($Class* clazz) {
	return $of($alloc(Option$OptionKind));
}

Option$OptionKind* Option$OptionKind::STANDARD = nullptr;
Option$OptionKind* Option$OptionKind::EXTENDED = nullptr;
Option$OptionKind* Option$OptionKind::HIDDEN = nullptr;
$Option$OptionKindArray* Option$OptionKind::$VALUES = nullptr;

$Option$OptionKindArray* Option$OptionKind::$values() {
	$init(Option$OptionKind);
	return $new($Option$OptionKindArray, {
		Option$OptionKind::STANDARD,
		Option$OptionKind::EXTENDED,
		Option$OptionKind::HIDDEN
	});
}

$Option$OptionKindArray* Option$OptionKind::values() {
	$init(Option$OptionKind);
	return $cast($Option$OptionKindArray, Option$OptionKind::$VALUES->clone());
}

Option$OptionKind* Option$OptionKind::valueOf($String* name) {
	$init(Option$OptionKind);
	return $cast(Option$OptionKind, $Enum::valueOf(Option$OptionKind::class$, name));
}

void Option$OptionKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Option$OptionKind($Class* class$) {
	$assignStatic(Option$OptionKind::STANDARD, $new(Option$OptionKind, "STANDARD"_s, 0));
	$assignStatic(Option$OptionKind::EXTENDED, $new(Option$OptionKind, "EXTENDED"_s, 1));
	$assignStatic(Option$OptionKind::HIDDEN, $new(Option$OptionKind, "HIDDEN"_s, 2));
	$assignStatic(Option$OptionKind::$VALUES, Option$OptionKind::$values());
}

Option$OptionKind::Option$OptionKind() {
}

$Class* Option$OptionKind::load$($String* name, bool initialize) {
	$loadClass(Option$OptionKind, name, initialize, &_Option$OptionKind_ClassInfo_, clinit$Option$OptionKind, allocate$Option$OptionKind);
	return class$;
}

$Class* Option$OptionKind::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com