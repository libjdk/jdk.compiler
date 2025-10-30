#include <com/sun/tools/javac/comp/Flow$Liveness.h>

#include <com/sun/tools/javac/comp/Flow$Liveness$1.h>
#include <com/sun/tools/javac/comp/Flow$Liveness$2.h>
#include <com/sun/tools/javac/comp/Flow$Liveness$3.h>
#include <com/sun/tools/javac/comp/Flow.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ALIVE
#undef DEAD
#undef RECOVERY

using $Flow$LivenessArray = $Array<::com::sun::tools::javac::comp::Flow$Liveness>;
using $Flow = ::com::sun::tools::javac::comp::Flow;
using $Flow$Liveness$1 = ::com::sun::tools::javac::comp::Flow$Liveness$1;
using $Flow$Liveness$2 = ::com::sun::tools::javac::comp::Flow$Liveness$2;
using $Flow$Liveness$3 = ::com::sun::tools::javac::comp::Flow$Liveness$3;
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

$FieldInfo _Flow$Liveness_FieldInfo_[] = {
	{"ALIVE", "Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flow$Liveness, ALIVE)},
	{"DEAD", "Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flow$Liveness, DEAD)},
	{"RECOVERY", "Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flow$Liveness, RECOVERY)},
	{"$VALUES", "[Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Flow$Liveness, $VALUES)},
	{}
};

$MethodInfo _Flow$Liveness_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Flow$LivenessArray*(*)()>(&Flow$Liveness::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Flow$Liveness::*)($String*,int32_t)>(&Flow$Liveness::init$))},
	{"and", "(Lcom/sun/tools/javac/comp/Flow$Liveness;)Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC | $ABSTRACT},
	{"and", "(Z)Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC},
	{"from", "(Z)Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Flow$Liveness*(*)(bool)>(&Flow$Liveness::from))},
	{"or", "(Lcom/sun/tools/javac/comp/Flow$Liveness;)Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC | $ABSTRACT},
	{"or", "(Z)Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Flow$Liveness*(*)($String*)>(&Flow$Liveness::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Flow$LivenessArray*(*)()>(&Flow$Liveness::values))},
	{}
};

$InnerClassInfo _Flow$Liveness_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Flow$Liveness", "com.sun.tools.javac.comp.Flow", "Liveness", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.comp.Flow$Liveness$3", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.comp.Flow$Liveness$2", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.comp.Flow$Liveness$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Flow$Liveness_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT | $ENUM,
	"com.sun.tools.javac.comp.Flow$Liveness",
	"java.lang.Enum",
	nullptr,
	_Flow$Liveness_FieldInfo_,
	_Flow$Liveness_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Flow$Liveness;>;",
	nullptr,
	_Flow$Liveness_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Flow"
};

$Object* allocate$Flow$Liveness($Class* clazz) {
	return $of($alloc(Flow$Liveness));
}

Flow$Liveness* Flow$Liveness::ALIVE = nullptr;
Flow$Liveness* Flow$Liveness::DEAD = nullptr;
Flow$Liveness* Flow$Liveness::RECOVERY = nullptr;
$Flow$LivenessArray* Flow$Liveness::$VALUES = nullptr;

$Flow$LivenessArray* Flow$Liveness::$values() {
	$init(Flow$Liveness);
	return $new($Flow$LivenessArray, {
		Flow$Liveness::ALIVE,
		Flow$Liveness::DEAD,
		Flow$Liveness::RECOVERY
	});
}

$Flow$LivenessArray* Flow$Liveness::values() {
	$init(Flow$Liveness);
	return $cast($Flow$LivenessArray, Flow$Liveness::$VALUES->clone());
}

Flow$Liveness* Flow$Liveness::valueOf($String* name) {
	$init(Flow$Liveness);
	return $cast(Flow$Liveness, $Enum::valueOf(Flow$Liveness::class$, name));
}

void Flow$Liveness::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

Flow$Liveness* Flow$Liveness::or$(bool value) {
	return or$($(from(value)));
}

Flow$Liveness* Flow$Liveness::and$(bool value) {
	return and$($(from(value)));
}

Flow$Liveness* Flow$Liveness::from(bool value) {
	$init(Flow$Liveness);
	return value ? Flow$Liveness::ALIVE : Flow$Liveness::DEAD;
}

void clinit$Flow$Liveness($Class* class$) {
	$assignStatic(Flow$Liveness::ALIVE, $new($Flow$Liveness$1, "ALIVE"_s, 0));
	$assignStatic(Flow$Liveness::DEAD, $new($Flow$Liveness$2, "DEAD"_s, 1));
	$assignStatic(Flow$Liveness::RECOVERY, $new($Flow$Liveness$3, "RECOVERY"_s, 2));
	$assignStatic(Flow$Liveness::$VALUES, Flow$Liveness::$values());
}

Flow$Liveness::Flow$Liveness() {
}

$Class* Flow$Liveness::load$($String* name, bool initialize) {
	$loadClass(Flow$Liveness, name, initialize, &_Flow$Liveness_ClassInfo_, clinit$Flow$Liveness, allocate$Flow$Liveness);
	return class$;
}

$Class* Flow$Liveness::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com