#include <com/sun/tools/javac/comp/Infer$CheckBounds.h>

#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Infer$IncorporationAction.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/io/Serializable.h>
#include <java/lang/Enum.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/BiPredicate.h>
#include <jcpp.h>

#undef EQ
#undef LOWER

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$IncorporationAction = ::com::sun::tools::javac::comp::Infer$IncorporationAction;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $List = ::com::sun::tools::javac::util::List;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $BiFunction = ::java::util::function::BiFunction;
using $BiPredicate = ::java::util::function::BiPredicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Infer$CheckBounds$$Lambda$asUndetVar : public $BiFunction {
	$class(Infer$CheckBounds$$Lambda$asUndetVar, $NO_CLASS_INIT, $BiFunction)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$, Object$* t) override {
		 return $of($sure($InferenceContext, inst$)->asUndetVar($cast($Type, t)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Infer$CheckBounds$$Lambda$asUndetVar>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Infer$CheckBounds$$Lambda$asUndetVar::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Infer$CheckBounds$$Lambda$asUndetVar::*)()>(&Infer$CheckBounds$$Lambda$asUndetVar::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Infer$CheckBounds$$Lambda$asUndetVar::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Infer$CheckBounds$$Lambda$asUndetVar",
	"java.lang.Object",
	"java.util.function.BiFunction",
	nullptr,
	methodInfos
};
$Class* Infer$CheckBounds$$Lambda$asUndetVar::load$($String* name, bool initialize) {
	$loadClass(Infer$CheckBounds$$Lambda$asUndetVar, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Infer$CheckBounds$$Lambda$asUndetVar::class$ = nullptr;

$FieldInfo _Infer$CheckBounds_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$CheckBounds, this$0)},
	{"from", "Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;", nullptr, 0, $field(Infer$CheckBounds, from)},
	{"typeFunc", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;>;", 0, $field(Infer$CheckBounds, typeFunc)},
	{"optFilter", "Ljava/util/function/BiPredicate;", "Ljava/util/function/BiPredicate<Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/code/Type;>;", 0, $field(Infer$CheckBounds, optFilter)},
	{}
};

$MethodInfo _Infer$CheckBounds_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", nullptr, 0, $method(static_cast<void(Infer$CheckBounds::*)($Infer*,$Type$UndetVar*,$Type*,$Type$UndetVar$InferenceBound*)>(&Infer$CheckBounds::init$))},
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type;Ljava/util/function/BiFunction;Ljava/util/function/BiPredicate;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type;Ljava/util/function/BiFunction<Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;>;Ljava/util/function/BiPredicate<Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", 0, $method(static_cast<void(Infer$CheckBounds::*)($Infer*,$Type$UndetVar*,$Type*,$BiFunction*,$BiPredicate*,$Type$UndetVar$InferenceBound*)>(&Infer$CheckBounds::init$))},
	{"apply", "(Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/util/Warner;)V", nullptr, 0},
	{"boundsToCheck", "()Ljava/util/EnumSet;", "()Ljava/util/EnumSet<Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;>;", 0},
	{"checkBound", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, 0},
	{"dup", "(Lcom/sun/tools/javac/code/Type$UndetVar;)Lcom/sun/tools/javac/comp/Infer$IncorporationAction;", nullptr, $PUBLIC},
	{"report", "(Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Infer$CheckBounds_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$CheckBounds", "com.sun.tools.javac.comp.Infer", "CheckBounds", 0},
	{"com.sun.tools.javac.comp.Infer$IncorporationAction", "com.sun.tools.javac.comp.Infer", "IncorporationAction", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Infer$CheckBounds_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Infer$CheckBounds",
	"com.sun.tools.javac.comp.Infer$IncorporationAction",
	nullptr,
	_Infer$CheckBounds_FieldInfo_,
	_Infer$CheckBounds_MethodInfo_,
	nullptr,
	nullptr,
	_Infer$CheckBounds_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$CheckBounds($Class* clazz) {
	return $of($alloc(Infer$CheckBounds));
}

void Infer$CheckBounds::init$($Infer* this$0, $Type$UndetVar* uv, $Type* t, $Type$UndetVar$InferenceBound* from) {
	Infer$CheckBounds::init$(this$0, uv, t, static_cast<$BiFunction*>($$new(Infer$CheckBounds$$Lambda$asUndetVar)), nullptr, from);
}

void Infer$CheckBounds::init$($Infer* this$0, $Type$UndetVar* uv, $Type* t, $BiFunction* typeFunc, $BiPredicate* typeFilter, $Type$UndetVar$InferenceBound* from) {
	$set(this, this$0, this$0);
	$Infer$IncorporationAction::init$(this$0, uv, t);
	$set(this, from, from);
	$set(this, typeFunc, typeFunc);
	$set(this, optFilter, typeFilter);
}

$Infer$IncorporationAction* Infer$CheckBounds::dup($Type$UndetVar* that) {
	return $new(Infer$CheckBounds, this->this$0, that, this->t, this->typeFunc, this->optFilter, this->from);
}

void Infer$CheckBounds::apply($InferenceContext* inferenceContext, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	$set(this, t, $cast($Type, $nc(this->typeFunc)->apply(inferenceContext, this->t)));
	if (this->optFilter != nullptr && $nc(this->optFilter)->test(inferenceContext, this->t)) {
		return;
	}
	{
		$var($Iterator, i$, $nc($(boundsToCheck()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$Type$UndetVar$InferenceBound* to = $cast($Type$UndetVar$InferenceBound, i$->next());
			{
				{
					$var($Iterator, i$, $nc($($nc(this->uv)->getBounds($$new($Type$UndetVar$InferenceBoundArray, {to}))))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Type, b, $cast($Type, i$->next()));
						{
							$assign(b, $cast($Type, $nc(this->typeFunc)->apply(inferenceContext, b)));
							if (this->optFilter != nullptr && $nc(this->optFilter)->test(inferenceContext, b)) {
								continue;
							}
							bool success = checkBound(this->t, b, this->from, to, warn);
							if (!success) {
								report(this->from, to);
							}
						}
					}
				}
			}
		}
	}
}

$EnumSet* Infer$CheckBounds::boundsToCheck() {
	$init($Type$UndetVar$InferenceBound);
	return (this->from == $Type$UndetVar$InferenceBound::EQ) ? $EnumSet::allOf($Type$UndetVar$InferenceBound::class$) : $EnumSet::complementOf($($EnumSet::of(this->from)));
}

bool Infer$CheckBounds::checkBound($Type* s, $Type* t, $Type$UndetVar$InferenceBound* ib_s, $Type$UndetVar$InferenceBound* ib_t, $Warner* warn) {
	if ($nc(ib_s)->lessThan(ib_t)) {
		return isSubtype(s, t, warn);
	} else if ($nc(ib_t)->lessThan(ib_s)) {
		return isSubtype(t, s, warn);
	} else {
		return isSameType(s, t);
	}
}

void Infer$CheckBounds::report($Type$UndetVar$InferenceBound* from, $Type$UndetVar$InferenceBound* to) {
	if (from == to) {
		this->this$0->reportBoundError(this->uv, from);
	} else {
		$init($Type$UndetVar$InferenceBound);
		if (from == $Type$UndetVar$InferenceBound::LOWER || to == $Type$UndetVar$InferenceBound::EQ) {
			this->this$0->reportBoundError(this->uv, to, from);
		} else {
			this->this$0->reportBoundError(this->uv, from, to);
		}
	}
}

$String* Infer$CheckBounds::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("%s[undet=%s,t=%s,bound=%s]"_s, $$new($ObjectArray, {
		$($of($of(this)->getClass()->getSimpleName())),
		$of($nc(this->uv)->qtype),
		$of(this->t),
		$of(this->from)
	}));
}

Infer$CheckBounds::Infer$CheckBounds() {
}

$Class* Infer$CheckBounds::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Infer$CheckBounds$$Lambda$asUndetVar::classInfo$.name)) {
			return Infer$CheckBounds$$Lambda$asUndetVar::load$(name, initialize);
		}
	}
	$loadClass(Infer$CheckBounds, name, initialize, &_Infer$CheckBounds_ClassInfo_, allocate$Infer$CheckBounds);
	return class$;
}

$Class* Infer$CheckBounds::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com