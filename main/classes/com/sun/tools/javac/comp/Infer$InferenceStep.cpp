#include <com/sun/tools/javac/comp/Infer$InferenceStep.h>

#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Infer$BoundFilter.h>
#include <com/sun/tools/javac/comp/Infer$InferenceStep$1.h>
#include <com/sun/tools/javac/comp/Infer$InferenceStep$2.h>
#include <com/sun/tools/javac/comp/Infer$InferenceStep$3.h>
#include <com/sun/tools/javac/comp/Infer$InferenceStep$4.h>
#include <com/sun/tools/javac/comp/Infer$InferenceStep$5.h>
#include <com/sun/tools/javac/comp/Infer$InferenceStep$6.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/Enum.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef CAPTURED
#undef EQ
#undef LOWER
#undef THROWS
#undef UPPER
#undef UPPER_LEGACY

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $Infer$InferenceStepArray = $Array<::com::sun::tools::javac::comp::Infer$InferenceStep>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$BoundFilter = ::com::sun::tools::javac::comp::Infer$BoundFilter;
using $Infer$InferenceStep$1 = ::com::sun::tools::javac::comp::Infer$InferenceStep$1;
using $Infer$InferenceStep$2 = ::com::sun::tools::javac::comp::Infer$InferenceStep$2;
using $Infer$InferenceStep$3 = ::com::sun::tools::javac::comp::Infer$InferenceStep$3;
using $Infer$InferenceStep$4 = ::com::sun::tools::javac::comp::Infer$InferenceStep$4;
using $Infer$InferenceStep$5 = ::com::sun::tools::javac::comp::Infer$InferenceStep$5;
using $Infer$InferenceStep$6 = ::com::sun::tools::javac::comp::Infer$InferenceStep$6;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Infer$InferenceStep_FieldInfo_[] = {
	{"EQ", "Lcom/sun/tools/javac/comp/Infer$InferenceStep;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Infer$InferenceStep, EQ)},
	{"LOWER", "Lcom/sun/tools/javac/comp/Infer$InferenceStep;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Infer$InferenceStep, LOWER)},
	{"THROWS", "Lcom/sun/tools/javac/comp/Infer$InferenceStep;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Infer$InferenceStep, THROWS)},
	{"UPPER", "Lcom/sun/tools/javac/comp/Infer$InferenceStep;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Infer$InferenceStep, UPPER)},
	{"UPPER_LEGACY", "Lcom/sun/tools/javac/comp/Infer$InferenceStep;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Infer$InferenceStep, UPPER_LEGACY)},
	{"CAPTURED", "Lcom/sun/tools/javac/comp/Infer$InferenceStep;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Infer$InferenceStep, CAPTURED)},
	{"$VALUES", "[Lcom/sun/tools/javac/comp/Infer$InferenceStep;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Infer$InferenceStep, $VALUES)},
	{"ib", "Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;", nullptr, $FINAL, $field(Infer$InferenceStep, ib)},
	{}
};

$MethodInfo _Infer$InferenceStep_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/comp/Infer$InferenceStep;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Infer$InferenceStepArray*(*)()>(&Infer$InferenceStep::$values))},
	{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", "(Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", $PRIVATE, $method(static_cast<void(Infer$InferenceStep::*)($String*,int32_t,$Type$UndetVar$InferenceBound*)>(&Infer$InferenceStep::init$))},
	{"accepts", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/comp/InferenceContext;)Z", nullptr, $PUBLIC},
	{"filterBounds", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"solve", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/code/Type;", nullptr, $ABSTRACT},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Infer$InferenceStep;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Infer$InferenceStep*(*)($String*)>(&Infer$InferenceStep::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/comp/Infer$InferenceStep;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Infer$InferenceStepArray*(*)()>(&Infer$InferenceStep::values))},
	{}
};

$InnerClassInfo _Infer$InferenceStep_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$InferenceStep", "com.sun.tools.javac.comp.Infer", "InferenceStep", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.comp.Infer$InferenceStep$6", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.comp.Infer$InferenceStep$5", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.comp.Infer$InferenceStep$4", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.comp.Infer$InferenceStep$3", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.comp.Infer$InferenceStep$2", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.comp.Infer$InferenceStep$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Infer$InferenceStep_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT | $ENUM,
	"com.sun.tools.javac.comp.Infer$InferenceStep",
	"java.lang.Enum",
	nullptr,
	_Infer$InferenceStep_FieldInfo_,
	_Infer$InferenceStep_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Infer$InferenceStep;>;",
	nullptr,
	_Infer$InferenceStep_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$InferenceStep($Class* clazz) {
	return $of($alloc(Infer$InferenceStep));
}

Infer$InferenceStep* Infer$InferenceStep::EQ = nullptr;
Infer$InferenceStep* Infer$InferenceStep::LOWER = nullptr;
Infer$InferenceStep* Infer$InferenceStep::THROWS = nullptr;
Infer$InferenceStep* Infer$InferenceStep::UPPER = nullptr;
Infer$InferenceStep* Infer$InferenceStep::UPPER_LEGACY = nullptr;
Infer$InferenceStep* Infer$InferenceStep::CAPTURED = nullptr;
$Infer$InferenceStepArray* Infer$InferenceStep::$VALUES = nullptr;

$Infer$InferenceStepArray* Infer$InferenceStep::$values() {
	$init(Infer$InferenceStep);
	return $new($Infer$InferenceStepArray, {
		Infer$InferenceStep::EQ,
		Infer$InferenceStep::LOWER,
		Infer$InferenceStep::THROWS,
		Infer$InferenceStep::UPPER,
		Infer$InferenceStep::UPPER_LEGACY,
		Infer$InferenceStep::CAPTURED
	});
}

$Infer$InferenceStepArray* Infer$InferenceStep::values() {
	$init(Infer$InferenceStep);
	return $cast($Infer$InferenceStepArray, Infer$InferenceStep::$VALUES->clone());
}

Infer$InferenceStep* Infer$InferenceStep::valueOf($String* name) {
	$init(Infer$InferenceStep);
	return $cast(Infer$InferenceStep, $Enum::valueOf(Infer$InferenceStep::class$, name));
}

void Infer$InferenceStep::init$($String* $enum$name, int32_t $enum$ordinal, $Type$UndetVar$InferenceBound* ib) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, ib, ib);
}

bool Infer$InferenceStep::accepts($Type$UndetVar* t, $InferenceContext* inferenceContext) {
	bool var$0 = $nc($(filterBounds(t, inferenceContext)))->nonEmpty();
	return var$0 && !$nc(t)->isCaptured();
}

$List* Infer$InferenceStep::filterBounds($Type$UndetVar* uv, $InferenceContext* inferenceContext) {
	$useLocalCurrentObjectStackCache();
	$var($List, var$0, $nc(uv)->getBounds($$new($Type$UndetVar$InferenceBoundArray, {this->ib})));
	return $Type::filter(var$0, $$new($Infer$BoundFilter, inferenceContext));
}

void clinit$Infer$InferenceStep($Class* class$) {
	$init($Type$UndetVar$InferenceBound);
	$assignStatic(Infer$InferenceStep::EQ, $new($Infer$InferenceStep$1, "EQ"_s, 0, $Type$UndetVar$InferenceBound::EQ));
	$assignStatic(Infer$InferenceStep::LOWER, $new($Infer$InferenceStep$2, "LOWER"_s, 1, $Type$UndetVar$InferenceBound::LOWER));
	$assignStatic(Infer$InferenceStep::THROWS, $new($Infer$InferenceStep$3, "THROWS"_s, 2, $Type$UndetVar$InferenceBound::UPPER));
	$assignStatic(Infer$InferenceStep::UPPER, $new($Infer$InferenceStep$4, "UPPER"_s, 3, $Type$UndetVar$InferenceBound::UPPER));
	$assignStatic(Infer$InferenceStep::UPPER_LEGACY, $new($Infer$InferenceStep$5, "UPPER_LEGACY"_s, 4, $Type$UndetVar$InferenceBound::UPPER));
	$assignStatic(Infer$InferenceStep::CAPTURED, $new($Infer$InferenceStep$6, "CAPTURED"_s, 5, $Type$UndetVar$InferenceBound::UPPER));
	$assignStatic(Infer$InferenceStep::$VALUES, Infer$InferenceStep::$values());
}

Infer$InferenceStep::Infer$InferenceStep() {
}

$Class* Infer$InferenceStep::load$($String* name, bool initialize) {
	$loadClass(Infer$InferenceStep, name, initialize, &_Infer$InferenceStep_ClassInfo_, clinit$Infer$InferenceStep, allocate$Infer$InferenceStep);
	return class$;
}

$Class* Infer$InferenceStep::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com