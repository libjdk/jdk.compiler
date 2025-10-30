#include <com/sun/tools/javac/comp/Infer$InferenceStep$4.h>

#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Infer$InferenceException.h>
#include <com/sun/tools/javac/comp/Infer$InferenceStep.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ERROR

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$InferenceException = ::com::sun::tools::javac::comp::Infer$InferenceException;
using $Infer$InferenceStep = ::com::sun::tools::javac::comp::Infer$InferenceStep;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $1List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Infer$InferenceStep$4_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", nullptr, $PRIVATE, $method(static_cast<void(Infer$InferenceStep$4::*)($String*,int32_t,$Type$UndetVar$InferenceBound*)>(&Infer$InferenceStep$4::init$))},
	{"solve", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _Infer$InferenceStep$4_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Infer$InferenceStep",
	nullptr,
	nullptr
};

$InnerClassInfo _Infer$InferenceStep$4_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$InferenceStep", "com.sun.tools.javac.comp.Infer", "InferenceStep", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.comp.Infer$InferenceStep$4", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Infer$InferenceStep$4_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Infer$InferenceStep$4",
	"com.sun.tools.javac.comp.Infer$InferenceStep",
	nullptr,
	nullptr,
	_Infer$InferenceStep$4_MethodInfo_,
	nullptr,
	&_Infer$InferenceStep$4_EnclosingMethodInfo_,
	_Infer$InferenceStep$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$InferenceStep$4($Class* clazz) {
	return $of($alloc(Infer$InferenceStep$4));
}

void Infer$InferenceStep$4::init$($String* $enum$name, int32_t $enum$ordinal, $Type$UndetVar$InferenceBound* ib) {
	$Infer$InferenceStep::init$($enum$name, $enum$ordinal, ib);
}

$Type* Infer$InferenceStep$4::solve($Type$UndetVar* uv, $InferenceContext* inferenceContext) {
	$useLocalCurrentObjectStackCache();
	$var($Infer, infer, $nc(inferenceContext)->infer);
	$var($List, hibounds, filterBounds(uv, inferenceContext));
	$var($Type, owntype, $nc($nc(hibounds)->tail)->tail == nullptr ? $cast($Type, $nc(hibounds)->head) : $nc($nc(infer)->types)->glb(hibounds));
	bool var$0 = $nc(owntype)->isPrimitive();
	$init($TypeTag);
	if (var$0 || $nc(owntype)->hasTag($TypeTag::ERROR)) {
		$throw($(infer->error($($nc(infer->diags)->fragment($($CompilerProperties$Fragments::NoUniqueMaximalInstanceExists($nc(uv)->qtype, hibounds)))))));
	} else {
		return owntype;
	}
}

Infer$InferenceStep$4::Infer$InferenceStep$4() {
}

$Class* Infer$InferenceStep$4::load$($String* name, bool initialize) {
	$loadClass(Infer$InferenceStep$4, name, initialize, &_Infer$InferenceStep$4_ClassInfo_, allocate$Infer$InferenceStep$4);
	return class$;
}

$Class* Infer$InferenceStep$4::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com