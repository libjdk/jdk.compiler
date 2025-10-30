#include <com/sun/tools/javac/main/Option$ChoiceKind.h>

#include <com/sun/tools/javac/main/Option.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ANYOF
#undef ONEOF

using $Option$ChoiceKindArray = $Array<::com::sun::tools::javac::main::Option$ChoiceKind>;
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

$FieldInfo _Option$ChoiceKind_FieldInfo_[] = {
	{"ONEOF", "Lcom/sun/tools/javac/main/Option$ChoiceKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$ChoiceKind, ONEOF)},
	{"ANYOF", "Lcom/sun/tools/javac/main/Option$ChoiceKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$ChoiceKind, ANYOF)},
	{"$VALUES", "[Lcom/sun/tools/javac/main/Option$ChoiceKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Option$ChoiceKind, $VALUES)},
	{}
};

$MethodInfo _Option$ChoiceKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/main/Option$ChoiceKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Option$ChoiceKindArray*(*)()>(&Option$ChoiceKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Option$ChoiceKind::*)($String*,int32_t)>(&Option$ChoiceKind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/main/Option$ChoiceKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Option$ChoiceKind*(*)($String*)>(&Option$ChoiceKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/main/Option$ChoiceKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Option$ChoiceKindArray*(*)()>(&Option$ChoiceKind::values))},
	{}
};

$InnerClassInfo _Option$ChoiceKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$ChoiceKind", "com.sun.tools.javac.main.Option", "ChoiceKind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$ChoiceKind_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$ChoiceKind",
	"java.lang.Enum",
	nullptr,
	_Option$ChoiceKind_FieldInfo_,
	_Option$ChoiceKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/main/Option$ChoiceKind;>;",
	nullptr,
	_Option$ChoiceKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$ChoiceKind($Class* clazz) {
	return $of($alloc(Option$ChoiceKind));
}

Option$ChoiceKind* Option$ChoiceKind::ONEOF = nullptr;
Option$ChoiceKind* Option$ChoiceKind::ANYOF = nullptr;
$Option$ChoiceKindArray* Option$ChoiceKind::$VALUES = nullptr;

$Option$ChoiceKindArray* Option$ChoiceKind::$values() {
	$init(Option$ChoiceKind);
	return $new($Option$ChoiceKindArray, {
		Option$ChoiceKind::ONEOF,
		Option$ChoiceKind::ANYOF
	});
}

$Option$ChoiceKindArray* Option$ChoiceKind::values() {
	$init(Option$ChoiceKind);
	return $cast($Option$ChoiceKindArray, Option$ChoiceKind::$VALUES->clone());
}

Option$ChoiceKind* Option$ChoiceKind::valueOf($String* name) {
	$init(Option$ChoiceKind);
	return $cast(Option$ChoiceKind, $Enum::valueOf(Option$ChoiceKind::class$, name));
}

void Option$ChoiceKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Option$ChoiceKind($Class* class$) {
	$assignStatic(Option$ChoiceKind::ONEOF, $new(Option$ChoiceKind, "ONEOF"_s, 0));
	$assignStatic(Option$ChoiceKind::ANYOF, $new(Option$ChoiceKind, "ANYOF"_s, 1));
	$assignStatic(Option$ChoiceKind::$VALUES, Option$ChoiceKind::$values());
}

Option$ChoiceKind::Option$ChoiceKind() {
}

$Class* Option$ChoiceKind::load$($String* name, bool initialize) {
	$loadClass(Option$ChoiceKind, name, initialize, &_Option$ChoiceKind_ClassInfo_, clinit$Option$ChoiceKind, allocate$Option$ChoiceKind);
	return class$;
}

$Class* Option$ChoiceKind::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com