#include <com/sun/tools/javac/comp/Infer$InferenceStep$6.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Infer$InferenceStep.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

#undef LOWER
#undef UPPER

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$InferenceStep = ::com::sun::tools::javac::comp::Infer$InferenceStep;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Infer$InferenceStep$6_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", nullptr, $PRIVATE, $method(static_cast<void(Infer$InferenceStep$6::*)($String*,int32_t,$Type$UndetVar$InferenceBound*)>(&Infer$InferenceStep$6::init$))},
	{"accepts", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/comp/InferenceContext;)Z", nullptr, $PUBLIC},
	{"solve", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _Infer$InferenceStep$6_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Infer$InferenceStep",
	nullptr,
	nullptr
};

$InnerClassInfo _Infer$InferenceStep$6_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$InferenceStep", "com.sun.tools.javac.comp.Infer", "InferenceStep", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.comp.Infer$InferenceStep$6", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Infer$InferenceStep$6_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Infer$InferenceStep$6",
	"com.sun.tools.javac.comp.Infer$InferenceStep",
	nullptr,
	nullptr,
	_Infer$InferenceStep$6_MethodInfo_,
	nullptr,
	&_Infer$InferenceStep$6_EnclosingMethodInfo_,
	_Infer$InferenceStep$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$InferenceStep$6($Class* clazz) {
	return $of($alloc(Infer$InferenceStep$6));
}

void Infer$InferenceStep$6::init$($String* $enum$name, int32_t $enum$ordinal, $Type$UndetVar$InferenceBound* ib) {
	$Infer$InferenceStep::init$($enum$name, $enum$ordinal, ib);
}

bool Infer$InferenceStep$6::accepts($Type$UndetVar* t, $InferenceContext* inferenceContext) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(t)->isCaptured();
	$init($Type$UndetVar$InferenceBound);
	return var$0 && !$nc(inferenceContext)->free($(t->getBounds($$new($Type$UndetVar$InferenceBoundArray, {
		$Type$UndetVar$InferenceBound::UPPER,
		$Type$UndetVar$InferenceBound::LOWER
	}))));
}

$Type* Infer$InferenceStep$6::solve($Type$UndetVar* uv, $InferenceContext* inferenceContext) {
	$useLocalCurrentObjectStackCache();
	$var($Infer, infer, $nc(inferenceContext)->infer);
	$init($Infer$InferenceStep);
	$var($Type, upper, $nc($($Infer$InferenceStep::UPPER->filterBounds(uv, inferenceContext)))->nonEmpty() ? $Infer$InferenceStep::UPPER->solve(uv, inferenceContext) : $nc($nc(infer)->syms)->objectType);
	$var($Type, lower, $nc($($Infer$InferenceStep::LOWER->filterBounds(uv, inferenceContext)))->nonEmpty() ? $Infer$InferenceStep::LOWER->solve(uv, inferenceContext) : $nc(infer->syms)->botType);
	$var($Type$CapturedType, prevCaptured, $cast($Type$CapturedType, $nc(uv)->qtype));
	return $new($Type$CapturedType, $nc($nc(prevCaptured)->tsym)->name, $nc(prevCaptured->tsym)->owner, upper, lower, prevCaptured->wildcard);
}

Infer$InferenceStep$6::Infer$InferenceStep$6() {
}

$Class* Infer$InferenceStep$6::load$($String* name, bool initialize) {
	$loadClass(Infer$InferenceStep$6, name, initialize, &_Infer$InferenceStep$6_ClassInfo_, allocate$Infer$InferenceStep$6);
	return class$;
}

$Class* Infer$InferenceStep$6::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com