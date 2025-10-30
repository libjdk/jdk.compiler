#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind.h>

#include <com/sun/tools/javac/comp/LambdaToMethod$1.h>
#include <com/sun/tools/javac/comp/LambdaToMethod.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CAPTURED_OUTER_THIS
#undef CAPTURED_THIS
#undef CAPTURED_VAR
#undef LOCAL_VAR
#undef PARAM

using $LambdaToMethod$LambdaSymbolKindArray = $Array<::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind>;
using $LambdaToMethod = ::com::sun::tools::javac::comp::LambdaToMethod;
using $LambdaToMethod$1 = ::com::sun::tools::javac::comp::LambdaToMethod$1;
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

$FieldInfo _LambdaToMethod$LambdaSymbolKind_FieldInfo_[] = {
	{"PARAM", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaToMethod$LambdaSymbolKind, PARAM)},
	{"LOCAL_VAR", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaToMethod$LambdaSymbolKind, LOCAL_VAR)},
	{"CAPTURED_VAR", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaToMethod$LambdaSymbolKind, CAPTURED_VAR)},
	{"CAPTURED_THIS", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaToMethod$LambdaSymbolKind, CAPTURED_THIS)},
	{"CAPTURED_OUTER_THIS", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaToMethod$LambdaSymbolKind, CAPTURED_OUTER_THIS)},
	{"$VALUES", "[Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaToMethod$LambdaSymbolKind, $VALUES)},
	{}
};

$MethodInfo _LambdaToMethod$LambdaSymbolKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$LambdaToMethod$LambdaSymbolKindArray*(*)()>(&LambdaToMethod$LambdaSymbolKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(LambdaToMethod$LambdaSymbolKind::*)($String*,int32_t)>(&LambdaToMethod$LambdaSymbolKind::init$))},
	{"propagateAnnotations", "()Z", nullptr, 0, $method(static_cast<bool(LambdaToMethod$LambdaSymbolKind::*)()>(&LambdaToMethod$LambdaSymbolKind::propagateAnnotations))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LambdaToMethod$LambdaSymbolKind*(*)($String*)>(&LambdaToMethod$LambdaSymbolKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LambdaToMethod$LambdaSymbolKindArray*(*)()>(&LambdaToMethod$LambdaSymbolKind::values))},
	{}
};

$InnerClassInfo _LambdaToMethod$LambdaSymbolKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaSymbolKind", "com.sun.tools.javac.comp.LambdaToMethod", "LambdaSymbolKind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _LambdaToMethod$LambdaSymbolKind_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.LambdaToMethod$LambdaSymbolKind",
	"java.lang.Enum",
	nullptr,
	_LambdaToMethod$LambdaSymbolKind_FieldInfo_,
	_LambdaToMethod$LambdaSymbolKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;>;",
	nullptr,
	_LambdaToMethod$LambdaSymbolKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.LambdaToMethod"
};

$Object* allocate$LambdaToMethod$LambdaSymbolKind($Class* clazz) {
	return $of($alloc(LambdaToMethod$LambdaSymbolKind));
}

LambdaToMethod$LambdaSymbolKind* LambdaToMethod$LambdaSymbolKind::PARAM = nullptr;
LambdaToMethod$LambdaSymbolKind* LambdaToMethod$LambdaSymbolKind::LOCAL_VAR = nullptr;
LambdaToMethod$LambdaSymbolKind* LambdaToMethod$LambdaSymbolKind::CAPTURED_VAR = nullptr;
LambdaToMethod$LambdaSymbolKind* LambdaToMethod$LambdaSymbolKind::CAPTURED_THIS = nullptr;
LambdaToMethod$LambdaSymbolKind* LambdaToMethod$LambdaSymbolKind::CAPTURED_OUTER_THIS = nullptr;
$LambdaToMethod$LambdaSymbolKindArray* LambdaToMethod$LambdaSymbolKind::$VALUES = nullptr;

$LambdaToMethod$LambdaSymbolKindArray* LambdaToMethod$LambdaSymbolKind::$values() {
	$init(LambdaToMethod$LambdaSymbolKind);
	return $new($LambdaToMethod$LambdaSymbolKindArray, {
		LambdaToMethod$LambdaSymbolKind::PARAM,
		LambdaToMethod$LambdaSymbolKind::LOCAL_VAR,
		LambdaToMethod$LambdaSymbolKind::CAPTURED_VAR,
		LambdaToMethod$LambdaSymbolKind::CAPTURED_THIS,
		LambdaToMethod$LambdaSymbolKind::CAPTURED_OUTER_THIS
	});
}

$LambdaToMethod$LambdaSymbolKindArray* LambdaToMethod$LambdaSymbolKind::values() {
	$init(LambdaToMethod$LambdaSymbolKind);
	return $cast($LambdaToMethod$LambdaSymbolKindArray, LambdaToMethod$LambdaSymbolKind::$VALUES->clone());
}

LambdaToMethod$LambdaSymbolKind* LambdaToMethod$LambdaSymbolKind::valueOf($String* name) {
	$init(LambdaToMethod$LambdaSymbolKind);
	return $cast(LambdaToMethod$LambdaSymbolKind, $Enum::valueOf(LambdaToMethod$LambdaSymbolKind::class$, name));
}

void LambdaToMethod$LambdaSymbolKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

bool LambdaToMethod$LambdaSymbolKind::propagateAnnotations() {
	$init($LambdaToMethod$1);
	switch ($nc($LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$comp$LambdaToMethod$LambdaSymbolKind)->get((this)->ordinal())) {
	case 2:
		{}
	case 1:
		{}
	case 3:
		{
			return false;
		}
	default:
		{
			return true;
		}
	}
}

void clinit$LambdaToMethod$LambdaSymbolKind($Class* class$) {
	$assignStatic(LambdaToMethod$LambdaSymbolKind::PARAM, $new(LambdaToMethod$LambdaSymbolKind, "PARAM"_s, 0));
	$assignStatic(LambdaToMethod$LambdaSymbolKind::LOCAL_VAR, $new(LambdaToMethod$LambdaSymbolKind, "LOCAL_VAR"_s, 1));
	$assignStatic(LambdaToMethod$LambdaSymbolKind::CAPTURED_VAR, $new(LambdaToMethod$LambdaSymbolKind, "CAPTURED_VAR"_s, 2));
	$assignStatic(LambdaToMethod$LambdaSymbolKind::CAPTURED_THIS, $new(LambdaToMethod$LambdaSymbolKind, "CAPTURED_THIS"_s, 3));
	$assignStatic(LambdaToMethod$LambdaSymbolKind::CAPTURED_OUTER_THIS, $new(LambdaToMethod$LambdaSymbolKind, "CAPTURED_OUTER_THIS"_s, 4));
	$assignStatic(LambdaToMethod$LambdaSymbolKind::$VALUES, LambdaToMethod$LambdaSymbolKind::$values());
}

LambdaToMethod$LambdaSymbolKind::LambdaToMethod$LambdaSymbolKind() {
}

$Class* LambdaToMethod$LambdaSymbolKind::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$LambdaSymbolKind, name, initialize, &_LambdaToMethod$LambdaSymbolKind_ClassInfo_, clinit$LambdaToMethod$LambdaSymbolKind, allocate$LambdaToMethod$LambdaSymbolKind);
	return class$;
}

$Class* LambdaToMethod$LambdaSymbolKind::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com