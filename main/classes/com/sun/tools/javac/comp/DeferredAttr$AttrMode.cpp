#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>

#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CHECK
#undef SPECULATIVE

using $DeferredAttr$AttrModeArray = $Array<::com::sun::tools::javac::comp::DeferredAttr$AttrMode>;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
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

$FieldInfo _DeferredAttr$AttrMode_FieldInfo_[] = {
	{"SPECULATIVE", "Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DeferredAttr$AttrMode, SPECULATIVE)},
	{"CHECK", "Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DeferredAttr$AttrMode, CHECK)},
	{"$VALUES", "[Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DeferredAttr$AttrMode, $VALUES)},
	{}
};

$MethodInfo _DeferredAttr$AttrMode_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DeferredAttr$AttrModeArray*(*)()>(&DeferredAttr$AttrMode::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(DeferredAttr$AttrMode::*)($String*,int32_t)>(&DeferredAttr$AttrMode::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DeferredAttr$AttrMode*(*)($String*)>(&DeferredAttr$AttrMode::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DeferredAttr$AttrModeArray*(*)()>(&DeferredAttr$AttrMode::values))},
	{}
};

$InnerClassInfo _DeferredAttr$AttrMode_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$AttrMode", "com.sun.tools.javac.comp.DeferredAttr", "AttrMode", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DeferredAttr$AttrMode_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.DeferredAttr$AttrMode",
	"java.lang.Enum",
	nullptr,
	_DeferredAttr$AttrMode_FieldInfo_,
	_DeferredAttr$AttrMode_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;>;",
	nullptr,
	_DeferredAttr$AttrMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$AttrMode($Class* clazz) {
	return $of($alloc(DeferredAttr$AttrMode));
}

DeferredAttr$AttrMode* DeferredAttr$AttrMode::SPECULATIVE = nullptr;
DeferredAttr$AttrMode* DeferredAttr$AttrMode::CHECK = nullptr;
$DeferredAttr$AttrModeArray* DeferredAttr$AttrMode::$VALUES = nullptr;

$DeferredAttr$AttrModeArray* DeferredAttr$AttrMode::$values() {
	$init(DeferredAttr$AttrMode);
	return $new($DeferredAttr$AttrModeArray, {
		DeferredAttr$AttrMode::SPECULATIVE,
		DeferredAttr$AttrMode::CHECK
	});
}

$DeferredAttr$AttrModeArray* DeferredAttr$AttrMode::values() {
	$init(DeferredAttr$AttrMode);
	return $cast($DeferredAttr$AttrModeArray, DeferredAttr$AttrMode::$VALUES->clone());
}

DeferredAttr$AttrMode* DeferredAttr$AttrMode::valueOf($String* name) {
	$init(DeferredAttr$AttrMode);
	return $cast(DeferredAttr$AttrMode, $Enum::valueOf(DeferredAttr$AttrMode::class$, name));
}

void DeferredAttr$AttrMode::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$DeferredAttr$AttrMode($Class* class$) {
	$assignStatic(DeferredAttr$AttrMode::SPECULATIVE, $new(DeferredAttr$AttrMode, "SPECULATIVE"_s, 0));
	$assignStatic(DeferredAttr$AttrMode::CHECK, $new(DeferredAttr$AttrMode, "CHECK"_s, 1));
	$assignStatic(DeferredAttr$AttrMode::$VALUES, DeferredAttr$AttrMode::$values());
}

DeferredAttr$AttrMode::DeferredAttr$AttrMode() {
}

$Class* DeferredAttr$AttrMode::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$AttrMode, name, initialize, &_DeferredAttr$AttrMode_ClassInfo_, clinit$DeferredAttr$AttrMode, allocate$DeferredAttr$AttrMode);
	return class$;
}

$Class* DeferredAttr$AttrMode::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com