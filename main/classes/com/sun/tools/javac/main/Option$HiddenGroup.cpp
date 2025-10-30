#include <com/sun/tools/javac/main/Option$HiddenGroup.h>

#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef DEBUG
#undef DIAGS
#undef SHOULDSTOP
#undef XD

using $Option$HiddenGroupArray = $Array<::com::sun::tools::javac::main::Option$HiddenGroup>;
using $Option = ::com::sun::tools::javac::main::Option;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
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

$FieldInfo _Option$HiddenGroup_FieldInfo_[] = {
	{"DIAGS", "Lcom/sun/tools/javac/main/Option$HiddenGroup;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$HiddenGroup, DIAGS)},
	{"DEBUG", "Lcom/sun/tools/javac/main/Option$HiddenGroup;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$HiddenGroup, DEBUG)},
	{"SHOULDSTOP", "Lcom/sun/tools/javac/main/Option$HiddenGroup;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$HiddenGroup, SHOULDSTOP)},
	{"$VALUES", "[Lcom/sun/tools/javac/main/Option$HiddenGroup;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Option$HiddenGroup, $VALUES)},
	{"text", "Ljava/lang/String;", nullptr, $FINAL, $field(Option$HiddenGroup, text)},
	{}
};

$MethodInfo _Option$HiddenGroup_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/main/Option$HiddenGroup;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Option$HiddenGroupArray*(*)()>(&Option$HiddenGroup::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(Option$HiddenGroup::*)($String*,int32_t,$String*)>(&Option$HiddenGroup::init$))},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Option$HiddenGroup::*)($OptionHelper*,$String*,$String*)>(&Option$HiddenGroup::process)), "com.sun.tools.javac.main.Option$InvalidValueException"},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/main/Option$HiddenGroup;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Option$HiddenGroup*(*)($String*)>(&Option$HiddenGroup::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/main/Option$HiddenGroup;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Option$HiddenGroupArray*(*)()>(&Option$HiddenGroup::values))},
	{}
};

$InnerClassInfo _Option$HiddenGroup_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$HiddenGroup", "com.sun.tools.javac.main.Option", "HiddenGroup", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$HiddenGroup_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$HiddenGroup",
	"java.lang.Enum",
	nullptr,
	_Option$HiddenGroup_FieldInfo_,
	_Option$HiddenGroup_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/main/Option$HiddenGroup;>;",
	nullptr,
	_Option$HiddenGroup_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$HiddenGroup($Class* clazz) {
	return $of($alloc(Option$HiddenGroup));
}

Option$HiddenGroup* Option$HiddenGroup::DIAGS = nullptr;
Option$HiddenGroup* Option$HiddenGroup::DEBUG = nullptr;
Option$HiddenGroup* Option$HiddenGroup::SHOULDSTOP = nullptr;
$Option$HiddenGroupArray* Option$HiddenGroup::$VALUES = nullptr;

$Option$HiddenGroupArray* Option$HiddenGroup::$values() {
	$init(Option$HiddenGroup);
	return $new($Option$HiddenGroupArray, {
		Option$HiddenGroup::DIAGS,
		Option$HiddenGroup::DEBUG,
		Option$HiddenGroup::SHOULDSTOP
	});
}

$Option$HiddenGroupArray* Option$HiddenGroup::values() {
	$init(Option$HiddenGroup);
	return $cast($Option$HiddenGroupArray, Option$HiddenGroup::$VALUES->clone());
}

Option$HiddenGroup* Option$HiddenGroup::valueOf($String* name) {
	$init(Option$HiddenGroup);
	return $cast(Option$HiddenGroup, $Enum::valueOf(Option$HiddenGroup::class$, name));
}

void Option$HiddenGroup::init$($String* $enum$name, int32_t $enum$ordinal, $String* text) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, text, text);
}

void Option$HiddenGroup::process($OptionHelper* helper, $String* option, $String* arg) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, subOptions, $nc(arg)->split(";"_s));
	{
		$var($StringArray, arr$, subOptions);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, subOption, arr$->get(i$));
			{
				$assign(subOption, $str({this->text, "."_s, $($nc(subOption)->trim())}));
				$init($Option);
				$Option::XD->process(helper, subOption, subOption);
			}
		}
	}
}

void clinit$Option$HiddenGroup($Class* class$) {
	$assignStatic(Option$HiddenGroup::DIAGS, $new(Option$HiddenGroup, "DIAGS"_s, 0, "diags"_s));
	$assignStatic(Option$HiddenGroup::DEBUG, $new(Option$HiddenGroup, "DEBUG"_s, 1, "debug"_s));
	$assignStatic(Option$HiddenGroup::SHOULDSTOP, $new(Option$HiddenGroup, "SHOULDSTOP"_s, 2, "should-stop"_s));
	$assignStatic(Option$HiddenGroup::$VALUES, Option$HiddenGroup::$values());
}

Option$HiddenGroup::Option$HiddenGroup() {
}

$Class* Option$HiddenGroup::load$($String* name, bool initialize) {
	$loadClass(Option$HiddenGroup, name, initialize, &_Option$HiddenGroup_ClassInfo_, clinit$Option$HiddenGroup, allocate$Option$HiddenGroup);
	return class$;
}

$Class* Option$HiddenGroup::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com