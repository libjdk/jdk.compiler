#include <com/sun/tools/javac/comp/Infer$CheckUpperBounds.h>

#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Infer$IncorporationAction.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/function/BiPredicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef UPPER
#undef WILDCARD

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$IncorporationAction = ::com::sun::tools::javac::comp::Infer$IncorporationAction;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $BiPredicate = ::java::util::function::BiPredicate;
using $Collector = ::java::util::stream::Collector;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Infer$CheckUpperBounds$$Lambda$isSameType : public $BiPredicate {
	$class(Infer$CheckUpperBounds$$Lambda$isSameType, $NO_CLASS_INIT, $BiPredicate)
public:
	void init$($Types* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* t, Object$* s) override {
		 return $nc(inst$)->isSameType($cast($Type, t), $cast($Type, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Infer$CheckUpperBounds$$Lambda$isSameType>());
	}
	$Types* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Infer$CheckUpperBounds$$Lambda$isSameType::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Infer$CheckUpperBounds$$Lambda$isSameType, inst$)},
	{}
};
$MethodInfo Infer$CheckUpperBounds$$Lambda$isSameType::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, $PUBLIC, $method(static_cast<void(Infer$CheckUpperBounds$$Lambda$isSameType::*)($Types*)>(&Infer$CheckUpperBounds$$Lambda$isSameType::init$))},
	{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Infer$CheckUpperBounds$$Lambda$isSameType::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Infer$CheckUpperBounds$$Lambda$isSameType",
	"java.lang.Object",
	"java.util.function.BiPredicate",
	fieldInfos,
	methodInfos
};
$Class* Infer$CheckUpperBounds$$Lambda$isSameType::load$($String* name, bool initialize) {
	$loadClass(Infer$CheckUpperBounds$$Lambda$isSameType, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Infer$CheckUpperBounds$$Lambda$isSameType::class$ = nullptr;

$FieldInfo _Infer$CheckUpperBounds_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$CheckUpperBounds, this$0)},
	{}
};

$MethodInfo _Infer$CheckUpperBounds_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Infer$CheckUpperBounds::*)($Infer*,$Type$UndetVar*,$Type*)>(&Infer$CheckUpperBounds::init$))},
	{"apply", "(Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/util/Warner;)V", nullptr, 0},
	{"dup", "(Lcom/sun/tools/javac/code/Type$UndetVar;)Lcom/sun/tools/javac/comp/Infer$IncorporationAction;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Infer$CheckUpperBounds_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$CheckUpperBounds", "com.sun.tools.javac.comp.Infer", "CheckUpperBounds", 0},
	{"com.sun.tools.javac.comp.Infer$IncorporationAction", "com.sun.tools.javac.comp.Infer", "IncorporationAction", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Infer$CheckUpperBounds_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Infer$CheckUpperBounds",
	"com.sun.tools.javac.comp.Infer$IncorporationAction",
	nullptr,
	_Infer$CheckUpperBounds_FieldInfo_,
	_Infer$CheckUpperBounds_MethodInfo_,
	nullptr,
	nullptr,
	_Infer$CheckUpperBounds_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$CheckUpperBounds($Class* clazz) {
	return $of($alloc(Infer$CheckUpperBounds));
}

void Infer$CheckUpperBounds::init$($Infer* this$0, $Type$UndetVar* uv, $Type* t) {
	$set(this, this$0, this$0);
	$Infer$IncorporationAction::init$(this$0, uv, t);
}

$Infer$IncorporationAction* Infer$CheckUpperBounds::dup($Type$UndetVar* that) {
	return $new(Infer$CheckUpperBounds, this->this$0, that, this->t);
}

void Infer$CheckUpperBounds::apply($InferenceContext* inferenceContext, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	$init($Type$UndetVar$InferenceBound);
	$var($List, boundList, $cast($List, $nc($($nc($($nc(this->uv)->getBounds($$new($Type$UndetVar$InferenceBoundArray, {$Type$UndetVar$InferenceBound::UPPER}))))->stream()))->collect($($nc(this->this$0->types)->closureCollector(true, static_cast<$BiPredicate*>($$new(Infer$CheckUpperBounds$$Lambda$isSameType, static_cast<$Types*>($nc(this->this$0->types)))))))));
	{
		$var($Iterator, i$, $nc(boundList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, b2, $cast($Type, i$->next()));
			{
				if (this->t == b2) {
					continue;
				}
				$init($TypeTag);
				bool var$0 = this->t != b2 && !$nc(this->t)->hasTag($TypeTag::WILDCARD);
				if (var$0 && !$nc(b2)->hasTag($TypeTag::WILDCARD)) {
					{
						$var($Iterator, i$, $nc($(this->this$0->getParameterizedSupers(this->t, b2)))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Pair, commonSupers, $cast($Pair, i$->next()));
							{
								$var($List, allParamsSuperBound1, $nc(($cast($Type, $nc(commonSupers)->fst)))->allparams());
								$var($List, allParamsSuperBound2, $nc(($cast($Type, commonSupers->snd)))->allparams());
								while (true) {
									bool var$1 = $nc(allParamsSuperBound1)->nonEmpty();
									if (!(var$1 && $nc(allParamsSuperBound2)->nonEmpty())) {
										break;
									}
									{
										bool var$2 = !$nc(($cast($Type, allParamsSuperBound1->head)))->hasTag($TypeTag::WILDCARD);
										if (var$2 && !$nc(($cast($Type, allParamsSuperBound2->head)))->hasTag($TypeTag::WILDCARD)) {
											$var($Type, var$3, $nc(inferenceContext)->asUndetVar($cast($Type, allParamsSuperBound1->head)));
											if (!isSameType(var$3, $(inferenceContext->asUndetVar($cast($Type, allParamsSuperBound2->head))))) {
												this->this$0->reportBoundError(this->uv, $Type$UndetVar$InferenceBound::UPPER);
											}
										}
										$assign(allParamsSuperBound1, allParamsSuperBound1->tail);
										$assign(allParamsSuperBound2, allParamsSuperBound2->tail);
									}
								}
								bool var$4 = $nc(allParamsSuperBound1)->isEmpty();
								$Assert::check(var$4 && $nc(allParamsSuperBound2)->isEmpty());
							}
						}
					}
				}
			}
		}
	}
}

Infer$CheckUpperBounds::Infer$CheckUpperBounds() {
}

$Class* Infer$CheckUpperBounds::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Infer$CheckUpperBounds$$Lambda$isSameType::classInfo$.name)) {
			return Infer$CheckUpperBounds$$Lambda$isSameType::load$(name, initialize);
		}
	}
	$loadClass(Infer$CheckUpperBounds, name, initialize, &_Infer$CheckUpperBounds_ClassInfo_, allocate$Infer$CheckUpperBounds);
	return class$;
}

$Class* Infer$CheckUpperBounds::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com