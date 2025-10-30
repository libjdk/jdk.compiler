#include <com/sun/tools/javac/comp/Attr$CheckMode.h>

#include <com/sun/tools/javac/comp/Attr$CheckMode$1.h>
#include <com/sun/tools/javac/comp/Attr$CheckMode$2.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef NORMAL
#undef NO_INFERENCE_HOOK
#undef NO_TREE_UPDATE

using $Attr$CheckModeArray = $Array<::com::sun::tools::javac::comp::Attr$CheckMode>;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$CheckMode$1 = ::com::sun::tools::javac::comp::Attr$CheckMode$1;
using $Attr$CheckMode$2 = ::com::sun::tools::javac::comp::Attr$CheckMode$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Attr$CheckMode_FieldInfo_[] = {
	{"NORMAL", "Lcom/sun/tools/javac/comp/Attr$CheckMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Attr$CheckMode, NORMAL)},
	{"NO_TREE_UPDATE", "Lcom/sun/tools/javac/comp/Attr$CheckMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Attr$CheckMode, NO_TREE_UPDATE)},
	{"NO_INFERENCE_HOOK", "Lcom/sun/tools/javac/comp/Attr$CheckMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Attr$CheckMode, NO_INFERENCE_HOOK)},
	{"$VALUES", "[Lcom/sun/tools/javac/comp/Attr$CheckMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Attr$CheckMode, $VALUES)},
	{}
};

$MethodInfo _Attr$CheckMode_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/comp/Attr$CheckMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Attr$CheckModeArray*(*)()>(&Attr$CheckMode::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Attr$CheckMode::*)($String*,int32_t)>(&Attr$CheckMode::init$))},
	{"installPostInferenceHook", "()Z", nullptr, $PUBLIC},
	{"updateTreeType", "()Z", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Attr$CheckMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Attr$CheckMode*(*)($String*)>(&Attr$CheckMode::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/comp/Attr$CheckMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Attr$CheckModeArray*(*)()>(&Attr$CheckMode::values))},
	{}
};

$InnerClassInfo _Attr$CheckMode_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$CheckMode", "com.sun.tools.javac.comp.Attr", "CheckMode", $STATIC | $ENUM},
	{"com.sun.tools.javac.comp.Attr$CheckMode$2", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.comp.Attr$CheckMode$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Attr$CheckMode_ClassInfo_ = {
	$ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Attr$CheckMode",
	"java.lang.Enum",
	nullptr,
	_Attr$CheckMode_FieldInfo_,
	_Attr$CheckMode_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Attr$CheckMode;>;",
	nullptr,
	_Attr$CheckMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$CheckMode($Class* clazz) {
	return $of($alloc(Attr$CheckMode));
}

Attr$CheckMode* Attr$CheckMode::NORMAL = nullptr;
Attr$CheckMode* Attr$CheckMode::NO_TREE_UPDATE = nullptr;
Attr$CheckMode* Attr$CheckMode::NO_INFERENCE_HOOK = nullptr;
$Attr$CheckModeArray* Attr$CheckMode::$VALUES = nullptr;

$Attr$CheckModeArray* Attr$CheckMode::$values() {
	$init(Attr$CheckMode);
	return $new($Attr$CheckModeArray, {
		Attr$CheckMode::NORMAL,
		Attr$CheckMode::NO_TREE_UPDATE,
		Attr$CheckMode::NO_INFERENCE_HOOK
	});
}

$Attr$CheckModeArray* Attr$CheckMode::values() {
	$init(Attr$CheckMode);
	return $cast($Attr$CheckModeArray, Attr$CheckMode::$VALUES->clone());
}

Attr$CheckMode* Attr$CheckMode::valueOf($String* name) {
	$init(Attr$CheckMode);
	return $cast(Attr$CheckMode, $Enum::valueOf(Attr$CheckMode::class$, name));
}

void Attr$CheckMode::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

bool Attr$CheckMode::updateTreeType() {
	return true;
}

bool Attr$CheckMode::installPostInferenceHook() {
	return true;
}

void clinit$Attr$CheckMode($Class* class$) {
	$assignStatic(Attr$CheckMode::NORMAL, $new(Attr$CheckMode, "NORMAL"_s, 0));
	$assignStatic(Attr$CheckMode::NO_TREE_UPDATE, $new($Attr$CheckMode$1, "NO_TREE_UPDATE"_s, 1));
	$assignStatic(Attr$CheckMode::NO_INFERENCE_HOOK, $new($Attr$CheckMode$2, "NO_INFERENCE_HOOK"_s, 2));
	$assignStatic(Attr$CheckMode::$VALUES, Attr$CheckMode::$values());
}

Attr$CheckMode::Attr$CheckMode() {
}

$Class* Attr$CheckMode::load$($String* name, bool initialize) {
	$loadClass(Attr$CheckMode, name, initialize, &_Attr$CheckMode_ClassInfo_, clinit$Attr$CheckMode, allocate$Attr$CheckMode);
	return class$;
}

$Class* Attr$CheckMode::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com