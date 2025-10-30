#include <com/sun/tools/javac/comp/Infer$InferenceStep$1.h>

#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Infer$InferenceStep.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Infer$InferenceStep = ::com::sun::tools::javac::comp::Infer$InferenceStep;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Infer$InferenceStep$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", nullptr, $PRIVATE, $method(static_cast<void(Infer$InferenceStep$1::*)($String*,int32_t,$Type$UndetVar$InferenceBound*)>(&Infer$InferenceStep$1::init$))},
	{"solve", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _Infer$InferenceStep$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Infer$InferenceStep",
	nullptr,
	nullptr
};

$InnerClassInfo _Infer$InferenceStep$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$InferenceStep", "com.sun.tools.javac.comp.Infer", "InferenceStep", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.comp.Infer$InferenceStep$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Infer$InferenceStep$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Infer$InferenceStep$1",
	"com.sun.tools.javac.comp.Infer$InferenceStep",
	nullptr,
	nullptr,
	_Infer$InferenceStep$1_MethodInfo_,
	nullptr,
	&_Infer$InferenceStep$1_EnclosingMethodInfo_,
	_Infer$InferenceStep$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$InferenceStep$1($Class* clazz) {
	return $of($alloc(Infer$InferenceStep$1));
}

void Infer$InferenceStep$1::init$($String* $enum$name, int32_t $enum$ordinal, $Type$UndetVar$InferenceBound* ib) {
	$Infer$InferenceStep::init$($enum$name, $enum$ordinal, ib);
}

$Type* Infer$InferenceStep$1::solve($Type$UndetVar* uv, $InferenceContext* inferenceContext) {
	return $cast($Type, $nc($(filterBounds(uv, inferenceContext)))->head);
}

Infer$InferenceStep$1::Infer$InferenceStep$1() {
}

$Class* Infer$InferenceStep$1::load$($String* name, bool initialize) {
	$loadClass(Infer$InferenceStep$1, name, initialize, &_Infer$InferenceStep$1_ClassInfo_, allocate$Infer$InferenceStep$1);
	return class$;
}

$Class* Infer$InferenceStep$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com