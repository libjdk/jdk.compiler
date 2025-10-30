#include <com/sun/tools/javac/main/Option$PkgInfo.h>

#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/StringUtils.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ALWAYS
#undef LEGACY
#undef NONEMPTY
#undef XPKGINFO

using $Option$PkgInfoArray = $Array<::com::sun::tools::javac::main::Option$PkgInfo>;
using $Option = ::com::sun::tools::javac::main::Option;
using $Options = ::com::sun::tools::javac::util::Options;
using $StringUtils = ::com::sun::tools::javac::util::StringUtils;
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

$FieldInfo _Option$PkgInfo_FieldInfo_[] = {
	{"ALWAYS", "Lcom/sun/tools/javac/main/Option$PkgInfo;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$PkgInfo, ALWAYS)},
	{"LEGACY", "Lcom/sun/tools/javac/main/Option$PkgInfo;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$PkgInfo, LEGACY)},
	{"NONEMPTY", "Lcom/sun/tools/javac/main/Option$PkgInfo;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$PkgInfo, NONEMPTY)},
	{"$VALUES", "[Lcom/sun/tools/javac/main/Option$PkgInfo;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Option$PkgInfo, $VALUES)},
	{}
};

$MethodInfo _Option$PkgInfo_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/main/Option$PkgInfo;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Option$PkgInfoArray*(*)()>(&Option$PkgInfo::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Option$PkgInfo::*)($String*,int32_t)>(&Option$PkgInfo::init$))},
	{"get", "(Lcom/sun/tools/javac/util/Options;)Lcom/sun/tools/javac/main/Option$PkgInfo;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Option$PkgInfo*(*)($Options*)>(&Option$PkgInfo::get))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/main/Option$PkgInfo;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Option$PkgInfo*(*)($String*)>(&Option$PkgInfo::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/main/Option$PkgInfo;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Option$PkgInfoArray*(*)()>(&Option$PkgInfo::values))},
	{}
};

$InnerClassInfo _Option$PkgInfo_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$PkgInfo", "com.sun.tools.javac.main.Option", "PkgInfo", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$PkgInfo_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$PkgInfo",
	"java.lang.Enum",
	nullptr,
	_Option$PkgInfo_FieldInfo_,
	_Option$PkgInfo_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/main/Option$PkgInfo;>;",
	nullptr,
	_Option$PkgInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$PkgInfo($Class* clazz) {
	return $of($alloc(Option$PkgInfo));
}

Option$PkgInfo* Option$PkgInfo::ALWAYS = nullptr;
Option$PkgInfo* Option$PkgInfo::LEGACY = nullptr;
Option$PkgInfo* Option$PkgInfo::NONEMPTY = nullptr;
$Option$PkgInfoArray* Option$PkgInfo::$VALUES = nullptr;

$Option$PkgInfoArray* Option$PkgInfo::$values() {
	$init(Option$PkgInfo);
	return $new($Option$PkgInfoArray, {
		Option$PkgInfo::ALWAYS,
		Option$PkgInfo::LEGACY,
		Option$PkgInfo::NONEMPTY
	});
}

$Option$PkgInfoArray* Option$PkgInfo::values() {
	$init(Option$PkgInfo);
	return $cast($Option$PkgInfoArray, Option$PkgInfo::$VALUES->clone());
}

Option$PkgInfo* Option$PkgInfo::valueOf($String* name) {
	$init(Option$PkgInfo);
	return $cast(Option$PkgInfo, $Enum::valueOf(Option$PkgInfo::class$, name));
}

void Option$PkgInfo::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

Option$PkgInfo* Option$PkgInfo::get($Options* options) {
	$init(Option$PkgInfo);
	$useLocalCurrentObjectStackCache();
	$init($Option);
	$var($String, v, $nc(options)->get($Option::XPKGINFO));
	return (v == nullptr ? Option$PkgInfo::LEGACY : Option$PkgInfo::valueOf($($StringUtils::toUpperCase(v))));
}

void clinit$Option$PkgInfo($Class* class$) {
	$assignStatic(Option$PkgInfo::ALWAYS, $new(Option$PkgInfo, "ALWAYS"_s, 0));
	$assignStatic(Option$PkgInfo::LEGACY, $new(Option$PkgInfo, "LEGACY"_s, 1));
	$assignStatic(Option$PkgInfo::NONEMPTY, $new(Option$PkgInfo, "NONEMPTY"_s, 2));
	$assignStatic(Option$PkgInfo::$VALUES, Option$PkgInfo::$values());
}

Option$PkgInfo::Option$PkgInfo() {
}

$Class* Option$PkgInfo::load$($String* name, bool initialize) {
	$loadClass(Option$PkgInfo, name, initialize, &_Option$PkgInfo_ClassInfo_, clinit$Option$PkgInfo, allocate$Option$PkgInfo);
	return class$;
}

$Class* Option$PkgInfo::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com