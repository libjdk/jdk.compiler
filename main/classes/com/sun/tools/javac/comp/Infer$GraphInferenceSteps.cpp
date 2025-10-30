#include <com/sun/tools/javac/comp/Infer$GraphInferenceSteps.h>

#include <com/sun/tools/javac/comp/Infer$InferenceStep.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <java/lang/Enum.h>
#include <java/util/EnumSet.h>
#include <jcpp.h>

#undef CAPTURED
#undef EQ
#undef EQ_LOWER
#undef EQ_LOWER_THROWS_UPPER_CAPTURED
#undef LOWER
#undef THROWS
#undef UPPER

using $Infer$GraphInferenceStepsArray = $Array<::com::sun::tools::javac::comp::Infer$GraphInferenceSteps>;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$InferenceStep = ::com::sun::tools::javac::comp::Infer$InferenceStep;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSet = ::java::util::EnumSet;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Infer$GraphInferenceSteps_FieldInfo_[] = {
	{"EQ", "Lcom/sun/tools/javac/comp/Infer$GraphInferenceSteps;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Infer$GraphInferenceSteps, EQ)},
	{"EQ_LOWER", "Lcom/sun/tools/javac/comp/Infer$GraphInferenceSteps;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Infer$GraphInferenceSteps, EQ_LOWER)},
	{"EQ_LOWER_THROWS_UPPER_CAPTURED", "Lcom/sun/tools/javac/comp/Infer$GraphInferenceSteps;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Infer$GraphInferenceSteps, EQ_LOWER_THROWS_UPPER_CAPTURED)},
	{"$VALUES", "[Lcom/sun/tools/javac/comp/Infer$GraphInferenceSteps;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Infer$GraphInferenceSteps, $VALUES)},
	{"steps", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Lcom/sun/tools/javac/comp/Infer$InferenceStep;>;", $FINAL, $field(Infer$GraphInferenceSteps, steps)},
	{}
};

$MethodInfo _Infer$GraphInferenceSteps_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/comp/Infer$GraphInferenceSteps;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Infer$GraphInferenceStepsArray*(*)()>(&Infer$GraphInferenceSteps::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/util/EnumSet;)V", "(Ljava/util/EnumSet<Lcom/sun/tools/javac/comp/Infer$InferenceStep;>;)V", $PRIVATE, $method(static_cast<void(Infer$GraphInferenceSteps::*)($String*,int32_t,$EnumSet*)>(&Infer$GraphInferenceSteps::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Infer$GraphInferenceSteps;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Infer$GraphInferenceSteps*(*)($String*)>(&Infer$GraphInferenceSteps::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/comp/Infer$GraphInferenceSteps;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Infer$GraphInferenceStepsArray*(*)()>(&Infer$GraphInferenceSteps::values))},
	{}
};

$InnerClassInfo _Infer$GraphInferenceSteps_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$GraphInferenceSteps", "com.sun.tools.javac.comp.Infer", "GraphInferenceSteps", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Infer$GraphInferenceSteps_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Infer$GraphInferenceSteps",
	"java.lang.Enum",
	nullptr,
	_Infer$GraphInferenceSteps_FieldInfo_,
	_Infer$GraphInferenceSteps_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Infer$GraphInferenceSteps;>;",
	nullptr,
	_Infer$GraphInferenceSteps_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$GraphInferenceSteps($Class* clazz) {
	return $of($alloc(Infer$GraphInferenceSteps));
}

Infer$GraphInferenceSteps* Infer$GraphInferenceSteps::EQ = nullptr;
Infer$GraphInferenceSteps* Infer$GraphInferenceSteps::EQ_LOWER = nullptr;
Infer$GraphInferenceSteps* Infer$GraphInferenceSteps::EQ_LOWER_THROWS_UPPER_CAPTURED = nullptr;
$Infer$GraphInferenceStepsArray* Infer$GraphInferenceSteps::$VALUES = nullptr;

$Infer$GraphInferenceStepsArray* Infer$GraphInferenceSteps::$values() {
	$init(Infer$GraphInferenceSteps);
	return $new($Infer$GraphInferenceStepsArray, {
		Infer$GraphInferenceSteps::EQ,
		Infer$GraphInferenceSteps::EQ_LOWER,
		Infer$GraphInferenceSteps::EQ_LOWER_THROWS_UPPER_CAPTURED
	});
}

$Infer$GraphInferenceStepsArray* Infer$GraphInferenceSteps::values() {
	$init(Infer$GraphInferenceSteps);
	return $cast($Infer$GraphInferenceStepsArray, Infer$GraphInferenceSteps::$VALUES->clone());
}

Infer$GraphInferenceSteps* Infer$GraphInferenceSteps::valueOf($String* name) {
	$init(Infer$GraphInferenceSteps);
	return $cast(Infer$GraphInferenceSteps, $Enum::valueOf(Infer$GraphInferenceSteps::class$, name));
}

void Infer$GraphInferenceSteps::init$($String* $enum$name, int32_t $enum$ordinal, $EnumSet* steps) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, steps, steps);
}

void clinit$Infer$GraphInferenceSteps($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($Infer$InferenceStep);
	$assignStatic(Infer$GraphInferenceSteps::EQ, $new(Infer$GraphInferenceSteps, "EQ"_s, 0, $($EnumSet::of($Infer$InferenceStep::EQ))));
	$assignStatic(Infer$GraphInferenceSteps::EQ_LOWER, $new(Infer$GraphInferenceSteps, "EQ_LOWER"_s, 1, $($EnumSet::of(static_cast<$Enum*>($Infer$InferenceStep::EQ), static_cast<$Enum*>($Infer$InferenceStep::LOWER)))));
	$assignStatic(Infer$GraphInferenceSteps::EQ_LOWER_THROWS_UPPER_CAPTURED, $new(Infer$GraphInferenceSteps, "EQ_LOWER_THROWS_UPPER_CAPTURED"_s, 2, $($EnumSet::of($Infer$InferenceStep::EQ, $Infer$InferenceStep::LOWER, $Infer$InferenceStep::UPPER, $Infer$InferenceStep::THROWS, $Infer$InferenceStep::CAPTURED))));
	$assignStatic(Infer$GraphInferenceSteps::$VALUES, Infer$GraphInferenceSteps::$values());
}

Infer$GraphInferenceSteps::Infer$GraphInferenceSteps() {
}

$Class* Infer$GraphInferenceSteps::load$($String* name, bool initialize) {
	$loadClass(Infer$GraphInferenceSteps, name, initialize, &_Infer$GraphInferenceSteps_ClassInfo_, clinit$Infer$GraphInferenceSteps, allocate$Infer$GraphInferenceSteps);
	return class$;
}

$Class* Infer$GraphInferenceSteps::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com