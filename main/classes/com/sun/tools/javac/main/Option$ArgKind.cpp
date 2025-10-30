#include <com/sun/tools/javac/main/Option$ArgKind.h>

#include <com/sun/tools/javac/main/Option.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ADJACENT
#undef NONE
#undef REQUIRED

using $Option$ArgKindArray = $Array<::com::sun::tools::javac::main::Option$ArgKind>;
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

$FieldInfo _Option$ArgKind_FieldInfo_[] = {
	{"NONE", "Lcom/sun/tools/javac/main/Option$ArgKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$ArgKind, NONE)},
	{"REQUIRED", "Lcom/sun/tools/javac/main/Option$ArgKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$ArgKind, REQUIRED)},
	{"ADJACENT", "Lcom/sun/tools/javac/main/Option$ArgKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$ArgKind, ADJACENT)},
	{"$VALUES", "[Lcom/sun/tools/javac/main/Option$ArgKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Option$ArgKind, $VALUES)},
	{}
};

$MethodInfo _Option$ArgKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/main/Option$ArgKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Option$ArgKindArray*(*)()>(&Option$ArgKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Option$ArgKind::*)($String*,int32_t)>(&Option$ArgKind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/main/Option$ArgKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Option$ArgKind*(*)($String*)>(&Option$ArgKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/main/Option$ArgKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Option$ArgKindArray*(*)()>(&Option$ArgKind::values))},
	{}
};

$InnerClassInfo _Option$ArgKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$ArgKind", "com.sun.tools.javac.main.Option", "ArgKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$ArgKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$ArgKind",
	"java.lang.Enum",
	nullptr,
	_Option$ArgKind_FieldInfo_,
	_Option$ArgKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/main/Option$ArgKind;>;",
	nullptr,
	_Option$ArgKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$ArgKind($Class* clazz) {
	return $of($alloc(Option$ArgKind));
}

Option$ArgKind* Option$ArgKind::NONE = nullptr;
Option$ArgKind* Option$ArgKind::REQUIRED = nullptr;
Option$ArgKind* Option$ArgKind::ADJACENT = nullptr;
$Option$ArgKindArray* Option$ArgKind::$VALUES = nullptr;

$Option$ArgKindArray* Option$ArgKind::$values() {
	$init(Option$ArgKind);
	return $new($Option$ArgKindArray, {
		Option$ArgKind::NONE,
		Option$ArgKind::REQUIRED,
		Option$ArgKind::ADJACENT
	});
}

$Option$ArgKindArray* Option$ArgKind::values() {
	$init(Option$ArgKind);
	return $cast($Option$ArgKindArray, Option$ArgKind::$VALUES->clone());
}

Option$ArgKind* Option$ArgKind::valueOf($String* name) {
	$init(Option$ArgKind);
	return $cast(Option$ArgKind, $Enum::valueOf(Option$ArgKind::class$, name));
}

void Option$ArgKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Option$ArgKind($Class* class$) {
	$assignStatic(Option$ArgKind::NONE, $new(Option$ArgKind, "NONE"_s, 0));
	$assignStatic(Option$ArgKind::REQUIRED, $new(Option$ArgKind, "REQUIRED"_s, 1));
	$assignStatic(Option$ArgKind::ADJACENT, $new(Option$ArgKind, "ADJACENT"_s, 2));
	$assignStatic(Option$ArgKind::$VALUES, Option$ArgKind::$values());
}

Option$ArgKind::Option$ArgKind() {
}

$Class* Option$ArgKind::load$($String* name, bool initialize) {
	$loadClass(Option$ArgKind, name, initialize, &_Option$ArgKind_ClassInfo_, clinit$Option$ArgKind, allocate$Option$ArgKind);
	return class$;
}

$Class* Option$ArgKind::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com