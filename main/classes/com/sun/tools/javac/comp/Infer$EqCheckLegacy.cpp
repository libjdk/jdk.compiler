#include <com/sun/tools/javac/comp/Infer$EqCheckLegacy.h>

#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Infer$CheckBounds.h>
#include <com/sun/tools/javac/comp/Infer$IncorporationAction.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <java/io/Serializable.h>
#include <java/lang/Enum.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/EnumSet.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/BiPredicate.h>
#include <jcpp.h>

#undef EQ

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$CheckBounds = ::com::sun::tools::javac::comp::Infer$CheckBounds;
using $Infer$IncorporationAction = ::com::sun::tools::javac::comp::Infer$IncorporationAction;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
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
using $BiFunction = ::java::util::function::BiFunction;
using $BiPredicate = ::java::util::function::BiPredicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Infer$EqCheckLegacy$$Lambda$asInstType : public $BiFunction {
	$class(Infer$EqCheckLegacy$$Lambda$asInstType, $NO_CLASS_INIT, $BiFunction)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$, Object$* t) override {
		 return $of($sure($InferenceContext, inst$)->asInstType($cast($Type, t)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Infer$EqCheckLegacy$$Lambda$asInstType>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Infer$EqCheckLegacy$$Lambda$asInstType::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Infer$EqCheckLegacy$$Lambda$asInstType::*)()>(&Infer$EqCheckLegacy$$Lambda$asInstType::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Infer$EqCheckLegacy$$Lambda$asInstType::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Infer$EqCheckLegacy$$Lambda$asInstType",
	"java.lang.Object",
	"java.util.function.BiFunction",
	nullptr,
	methodInfos
};
$Class* Infer$EqCheckLegacy$$Lambda$asInstType::load$($String* name, bool initialize) {
	$loadClass(Infer$EqCheckLegacy$$Lambda$asInstType, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Infer$EqCheckLegacy$$Lambda$asInstType::class$ = nullptr;

class Infer$EqCheckLegacy$$Lambda$free$1 : public $BiPredicate {
	$class(Infer$EqCheckLegacy$$Lambda$free$1, $NO_CLASS_INIT, $BiPredicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$, Object$* t) override {
		 return $sure($InferenceContext, inst$)->free($cast($Type, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Infer$EqCheckLegacy$$Lambda$free$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Infer$EqCheckLegacy$$Lambda$free$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Infer$EqCheckLegacy$$Lambda$free$1::*)()>(&Infer$EqCheckLegacy$$Lambda$free$1::init$))},
	{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Infer$EqCheckLegacy$$Lambda$free$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Infer$EqCheckLegacy$$Lambda$free$1",
	"java.lang.Object",
	"java.util.function.BiPredicate",
	nullptr,
	methodInfos
};
$Class* Infer$EqCheckLegacy$$Lambda$free$1::load$($String* name, bool initialize) {
	$loadClass(Infer$EqCheckLegacy$$Lambda$free$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Infer$EqCheckLegacy$$Lambda$free$1::class$ = nullptr;

$FieldInfo _Infer$EqCheckLegacy_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$EqCheckLegacy, this$0)},
	{}
};

$MethodInfo _Infer$EqCheckLegacy_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", nullptr, 0, $method(static_cast<void(Infer$EqCheckLegacy::*)($Infer*,$Type$UndetVar*,$Type*,$Type$UndetVar$InferenceBound*)>(&Infer$EqCheckLegacy::init$))},
	{"boundsToCheck", "()Ljava/util/EnumSet;", "()Ljava/util/EnumSet<Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;>;", 0},
	{"dup", "(Lcom/sun/tools/javac/code/Type$UndetVar;)Lcom/sun/tools/javac/comp/Infer$IncorporationAction;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Infer$EqCheckLegacy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$EqCheckLegacy", "com.sun.tools.javac.comp.Infer", "EqCheckLegacy", 0},
	{"com.sun.tools.javac.comp.Infer$CheckBounds", "com.sun.tools.javac.comp.Infer", "CheckBounds", 0},
	{}
};

$ClassInfo _Infer$EqCheckLegacy_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Infer$EqCheckLegacy",
	"com.sun.tools.javac.comp.Infer$CheckBounds",
	nullptr,
	_Infer$EqCheckLegacy_FieldInfo_,
	_Infer$EqCheckLegacy_MethodInfo_,
	nullptr,
	nullptr,
	_Infer$EqCheckLegacy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$EqCheckLegacy($Class* clazz) {
	return $of($alloc(Infer$EqCheckLegacy));
}

void Infer$EqCheckLegacy::init$($Infer* this$0, $Type$UndetVar* uv, $Type* t, $Type$UndetVar$InferenceBound* from) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$var($Infer, var$0, this$0);
	$var($Type$UndetVar, var$1, uv);
	$var($Type, var$2, t);
	$var($BiFunction, var$3, static_cast<$BiFunction*>($new(Infer$EqCheckLegacy$$Lambda$asInstType)));
	$Infer$CheckBounds::init$(var$0, var$1, var$2, var$3, static_cast<$BiPredicate*>($$new(Infer$EqCheckLegacy$$Lambda$free$1)), from);
}

$Infer$IncorporationAction* Infer$EqCheckLegacy::dup($Type$UndetVar* that) {
	return $new(Infer$EqCheckLegacy, this->this$0, that, this->t, this->from);
}

$EnumSet* Infer$EqCheckLegacy::boundsToCheck() {
	$init($Type$UndetVar$InferenceBound);
	return (this->from == $Type$UndetVar$InferenceBound::EQ) ? $EnumSet::allOf($Type$UndetVar$InferenceBound::class$) : $EnumSet::of($Type$UndetVar$InferenceBound::EQ);
}

Infer$EqCheckLegacy::Infer$EqCheckLegacy() {
}

$Class* Infer$EqCheckLegacy::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Infer$EqCheckLegacy$$Lambda$asInstType::classInfo$.name)) {
			return Infer$EqCheckLegacy$$Lambda$asInstType::load$(name, initialize);
		}
		if (name->equals(Infer$EqCheckLegacy$$Lambda$free$1::classInfo$.name)) {
			return Infer$EqCheckLegacy$$Lambda$free$1::load$(name, initialize);
		}
	}
	$loadClass(Infer$EqCheckLegacy, name, initialize, &_Infer$EqCheckLegacy_ClassInfo_, allocate$Infer$EqCheckLegacy);
	return class$;
}

$Class* Infer$EqCheckLegacy::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com