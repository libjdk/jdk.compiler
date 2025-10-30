#include <com/sun/tools/javac/comp/Infer$SubstBounds.h>

#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Infer$BoundFilter.h>
#include <com/sun/tools/javac/comp/Infer$CheckBounds.h>
#include <com/sun/tools/javac/comp/Infer$CheckInst.h>
#include <com/sun/tools/javac/comp/Infer$IncorporationAction.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/util/Iterator.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef EQ
#undef LOWER
#undef UPPER

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Types = ::com::sun::tools::javac::code::Types;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$BoundFilter = ::com::sun::tools::javac::comp::Infer$BoundFilter;
using $Infer$CheckBounds = ::com::sun::tools::javac::comp::Infer$CheckBounds;
using $Infer$CheckInst = ::com::sun::tools::javac::comp::Infer$CheckInst;
using $Infer$IncorporationAction = ::com::sun::tools::javac::comp::Infer$IncorporationAction;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $List = ::com::sun::tools::javac::util::List;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Infer$SubstBounds_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$SubstBounds, this$0)},
	{}
};

$MethodInfo _Infer$SubstBounds_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/code/Type$UndetVar;)V", nullptr, 0, $method(static_cast<void(Infer$SubstBounds::*)($Infer*,$Type$UndetVar*)>(&Infer$SubstBounds::init$))},
	{"apply", "(Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/util/Warner;)V", nullptr, 0},
	{"checkCompatibleUpperBounds", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, 0},
	{"dup", "(Lcom/sun/tools/javac/code/Type$UndetVar;)Lcom/sun/tools/javac/comp/Infer$IncorporationAction;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Infer$SubstBounds_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$SubstBounds", "com.sun.tools.javac.comp.Infer", "SubstBounds", 0},
	{"com.sun.tools.javac.comp.Infer$CheckInst", "com.sun.tools.javac.comp.Infer", "CheckInst", 0},
	{}
};

$ClassInfo _Infer$SubstBounds_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Infer$SubstBounds",
	"com.sun.tools.javac.comp.Infer$CheckInst",
	nullptr,
	_Infer$SubstBounds_FieldInfo_,
	_Infer$SubstBounds_MethodInfo_,
	nullptr,
	nullptr,
	_Infer$SubstBounds_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$SubstBounds($Class* clazz) {
	return $of($alloc(Infer$SubstBounds));
}

void Infer$SubstBounds::init$($Infer* this$0, $Type$UndetVar* uv) {
	$set(this, this$0, this$0);
	$init($Type$UndetVar$InferenceBound);
	$Infer$CheckInst::init$(this$0, uv, $Type$UndetVar$InferenceBound::LOWER, $$new($Type$UndetVar$InferenceBoundArray, {
		$Type$UndetVar$InferenceBound::EQ,
		$Type$UndetVar$InferenceBound::UPPER
	}));
}

$Infer$IncorporationAction* Infer$SubstBounds::dup($Type$UndetVar* that) {
	return $new(Infer$SubstBounds, this->this$0, that);
}

void Infer$SubstBounds::apply($InferenceContext* inferenceContext, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($nc(inferenceContext)->undetvars)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, undet, $cast($Type, i$->next()));
			{
				$var($Type$UndetVar, uv2, $cast($Type$UndetVar, undet));
				$var($List, var$0, $List::of($nc(this->uv)->qtype));
				$nc(uv2)->substBounds(var$0, $($List::of($($nc(this->uv)->getInst()))), this->this$0->types);
				checkCompatibleUpperBounds(uv2, inferenceContext);
			}
		}
	}
	$Infer$CheckInst::apply(inferenceContext, warn);
}

void Infer$SubstBounds::checkCompatibleUpperBounds($Type$UndetVar* uv, $InferenceContext* inferenceContext) {
	$useLocalCurrentObjectStackCache();
	$init($Type$UndetVar$InferenceBound);
	$var($List, var$0, $nc(uv)->getBounds($$new($Type$UndetVar$InferenceBoundArray, {$Type$UndetVar$InferenceBound::UPPER})));
	$var($List, hibounds, $Type::filter(var$0, $$new($Infer$BoundFilter, inferenceContext)));
	$var($Type, hb, nullptr);
	if ($nc(hibounds)->isEmpty()) {
		$assign(hb, $nc(this->this$0->syms)->objectType);
	} else if ($nc(hibounds->tail)->isEmpty()) {
		$assign(hb, $cast($Type, hibounds->head));
	} else {
		$assign(hb, $nc(this->this$0->types)->glb(hibounds));
	}
	if (hb == nullptr || $nc(hb)->isErroneous()) {
		this->this$0->reportBoundError(uv, $Type$UndetVar$InferenceBound::UPPER);
	}
}

Infer$SubstBounds::Infer$SubstBounds() {
}

$Class* Infer$SubstBounds::load$($String* name, bool initialize) {
	$loadClass(Infer$SubstBounds, name, initialize, &_Infer$SubstBounds_ClassInfo_, allocate$Infer$SubstBounds);
	return class$;
}

$Class* Infer$SubstBounds::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com