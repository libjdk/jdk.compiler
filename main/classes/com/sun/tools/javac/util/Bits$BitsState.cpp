#include <com/sun/tools/javac/util/Bits$BitsState.h>

#include <com/sun/tools/javac/util/Bits.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef NORMAL
#undef UNINIT
#undef UNKNOWN

using $Bits$BitsStateArray = $Array<::com::sun::tools::javac::util::Bits$BitsState>;
using $Bits = ::com::sun::tools::javac::util::Bits;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Bits$BitsState_FieldInfo_[] = {
	{"UNKNOWN", "Lcom/sun/tools/javac/util/Bits$BitsState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Bits$BitsState, UNKNOWN)},
	{"UNINIT", "Lcom/sun/tools/javac/util/Bits$BitsState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Bits$BitsState, UNINIT)},
	{"NORMAL", "Lcom/sun/tools/javac/util/Bits$BitsState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Bits$BitsState, NORMAL)},
	{"$VALUES", "[Lcom/sun/tools/javac/util/Bits$BitsState;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Bits$BitsState, $VALUES)},
	{}
};

$MethodInfo _Bits$BitsState_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/util/Bits$BitsState;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Bits$BitsStateArray*(*)()>(&Bits$BitsState::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Bits$BitsState::*)($String*,int32_t)>(&Bits$BitsState::init$))},
	{"getState", "([IZ)Lcom/sun/tools/javac/util/Bits$BitsState;", nullptr, $STATIC, $method(static_cast<Bits$BitsState*(*)($ints*,bool)>(&Bits$BitsState::getState))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/Bits$BitsState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Bits$BitsState*(*)($String*)>(&Bits$BitsState::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/util/Bits$BitsState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Bits$BitsStateArray*(*)()>(&Bits$BitsState::values))},
	{}
};

$InnerClassInfo _Bits$BitsState_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Bits$BitsState", "com.sun.tools.javac.util.Bits", "BitsState", $PROTECTED | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Bits$BitsState_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.util.Bits$BitsState",
	"java.lang.Enum",
	nullptr,
	_Bits$BitsState_FieldInfo_,
	_Bits$BitsState_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/util/Bits$BitsState;>;",
	nullptr,
	_Bits$BitsState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Bits"
};

$Object* allocate$Bits$BitsState($Class* clazz) {
	return $of($alloc(Bits$BitsState));
}

Bits$BitsState* Bits$BitsState::UNKNOWN = nullptr;
Bits$BitsState* Bits$BitsState::UNINIT = nullptr;
Bits$BitsState* Bits$BitsState::NORMAL = nullptr;
$Bits$BitsStateArray* Bits$BitsState::$VALUES = nullptr;

$Bits$BitsStateArray* Bits$BitsState::$values() {
	$init(Bits$BitsState);
	return $new($Bits$BitsStateArray, {
		Bits$BitsState::UNKNOWN,
		Bits$BitsState::UNINIT,
		Bits$BitsState::NORMAL
	});
}

$Bits$BitsStateArray* Bits$BitsState::values() {
	$init(Bits$BitsState);
	return $cast($Bits$BitsStateArray, Bits$BitsState::$VALUES->clone());
}

Bits$BitsState* Bits$BitsState::valueOf($String* name) {
	$init(Bits$BitsState);
	return $cast(Bits$BitsState, $Enum::valueOf(Bits$BitsState::class$, name));
}

void Bits$BitsState::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

Bits$BitsState* Bits$BitsState::getState($ints* someBits, bool reset) {
	$init(Bits$BitsState);
	if (reset) {
		return Bits$BitsState::UNKNOWN;
	} else {
		$init($Bits);
		if (someBits != $Bits::unassignedBits) {
			return Bits$BitsState::NORMAL;
		} else {
			return Bits$BitsState::UNINIT;
		}
	}
}

void clinit$Bits$BitsState($Class* class$) {
	$assignStatic(Bits$BitsState::UNKNOWN, $new(Bits$BitsState, "UNKNOWN"_s, 0));
	$assignStatic(Bits$BitsState::UNINIT, $new(Bits$BitsState, "UNINIT"_s, 1));
	$assignStatic(Bits$BitsState::NORMAL, $new(Bits$BitsState, "NORMAL"_s, 2));
	$assignStatic(Bits$BitsState::$VALUES, Bits$BitsState::$values());
}

Bits$BitsState::Bits$BitsState() {
}

$Class* Bits$BitsState::load$($String* name, bool initialize) {
	$loadClass(Bits$BitsState, name, initialize, &_Bits$BitsState_ClassInfo_, clinit$Bits$BitsState, allocate$Bits$BitsState);
	return class$;
}

$Class* Bits$BitsState::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com