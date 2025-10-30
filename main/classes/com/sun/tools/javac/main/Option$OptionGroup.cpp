#include <com/sun/tools/javac/main/Option$OptionGroup.h>

#include <com/sun/tools/javac/main/Option.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BASIC
#undef FILEMANAGER
#undef INFO
#undef OPERAND

using $Option$OptionGroupArray = $Array<::com::sun::tools::javac::main::Option$OptionGroup>;
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

$FieldInfo _Option$OptionGroup_FieldInfo_[] = {
	{"BASIC", "Lcom/sun/tools/javac/main/Option$OptionGroup;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$OptionGroup, BASIC)},
	{"FILEMANAGER", "Lcom/sun/tools/javac/main/Option$OptionGroup;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$OptionGroup, FILEMANAGER)},
	{"INFO", "Lcom/sun/tools/javac/main/Option$OptionGroup;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$OptionGroup, INFO)},
	{"OPERAND", "Lcom/sun/tools/javac/main/Option$OptionGroup;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$OptionGroup, OPERAND)},
	{"$VALUES", "[Lcom/sun/tools/javac/main/Option$OptionGroup;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Option$OptionGroup, $VALUES)},
	{}
};

$MethodInfo _Option$OptionGroup_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/main/Option$OptionGroup;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Option$OptionGroupArray*(*)()>(&Option$OptionGroup::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Option$OptionGroup::*)($String*,int32_t)>(&Option$OptionGroup::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/main/Option$OptionGroup;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Option$OptionGroup*(*)($String*)>(&Option$OptionGroup::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/main/Option$OptionGroup;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Option$OptionGroupArray*(*)()>(&Option$OptionGroup::values))},
	{}
};

$InnerClassInfo _Option$OptionGroup_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$OptionGroup", "com.sun.tools.javac.main.Option", "OptionGroup", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$OptionGroup_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$OptionGroup",
	"java.lang.Enum",
	nullptr,
	_Option$OptionGroup_FieldInfo_,
	_Option$OptionGroup_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/main/Option$OptionGroup;>;",
	nullptr,
	_Option$OptionGroup_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$OptionGroup($Class* clazz) {
	return $of($alloc(Option$OptionGroup));
}

Option$OptionGroup* Option$OptionGroup::BASIC = nullptr;
Option$OptionGroup* Option$OptionGroup::FILEMANAGER = nullptr;
Option$OptionGroup* Option$OptionGroup::INFO = nullptr;
Option$OptionGroup* Option$OptionGroup::OPERAND = nullptr;
$Option$OptionGroupArray* Option$OptionGroup::$VALUES = nullptr;

$Option$OptionGroupArray* Option$OptionGroup::$values() {
	$init(Option$OptionGroup);
	return $new($Option$OptionGroupArray, {
		Option$OptionGroup::BASIC,
		Option$OptionGroup::FILEMANAGER,
		Option$OptionGroup::INFO,
		Option$OptionGroup::OPERAND
	});
}

$Option$OptionGroupArray* Option$OptionGroup::values() {
	$init(Option$OptionGroup);
	return $cast($Option$OptionGroupArray, Option$OptionGroup::$VALUES->clone());
}

Option$OptionGroup* Option$OptionGroup::valueOf($String* name) {
	$init(Option$OptionGroup);
	return $cast(Option$OptionGroup, $Enum::valueOf(Option$OptionGroup::class$, name));
}

void Option$OptionGroup::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Option$OptionGroup($Class* class$) {
	$assignStatic(Option$OptionGroup::BASIC, $new(Option$OptionGroup, "BASIC"_s, 0));
	$assignStatic(Option$OptionGroup::FILEMANAGER, $new(Option$OptionGroup, "FILEMANAGER"_s, 1));
	$assignStatic(Option$OptionGroup::INFO, $new(Option$OptionGroup, "INFO"_s, 2));
	$assignStatic(Option$OptionGroup::OPERAND, $new(Option$OptionGroup, "OPERAND"_s, 3));
	$assignStatic(Option$OptionGroup::$VALUES, Option$OptionGroup::$values());
}

Option$OptionGroup::Option$OptionGroup() {
}

$Class* Option$OptionGroup::load$($String* name, bool initialize) {
	$loadClass(Option$OptionGroup, name, initialize, &_Option$OptionGroup_ClassInfo_, clinit$Option$OptionGroup, allocate$Option$OptionGroup);
	return class$;
}

$Class* Option$OptionGroup::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com