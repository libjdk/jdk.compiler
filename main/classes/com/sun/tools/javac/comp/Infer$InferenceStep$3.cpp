#include <com/sun/tools/javac/comp/Infer$InferenceStep$3.h>

#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Infer$InferenceStep.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef UPPER

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Types = ::com::sun::tools::javac::code::Types;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$InferenceStep = ::com::sun::tools::javac::comp::Infer$InferenceStep;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $List = ::com::sun::tools::javac::util::List;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Collection = ::java::util::Collection;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Infer$InferenceStep$3$$Lambda$lambda$accepts$0 : public $Predicate {
	$class(Infer$InferenceStep$3$$Lambda$lambda$accepts$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($InferenceContext* inferenceContext) {
		$set(this, inferenceContext, inferenceContext);
	}
	virtual bool test(Object$* b) override {
		 return Infer$InferenceStep$3::lambda$accepts$0(inferenceContext, $cast($Type, b));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Infer$InferenceStep$3$$Lambda$lambda$accepts$0>());
	}
	$InferenceContext* inferenceContext = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Infer$InferenceStep$3$$Lambda$lambda$accepts$0::fieldInfos[2] = {
	{"inferenceContext", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, $PUBLIC, $field(Infer$InferenceStep$3$$Lambda$lambda$accepts$0, inferenceContext)},
	{}
};
$MethodInfo Infer$InferenceStep$3$$Lambda$lambda$accepts$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC, $method(static_cast<void(Infer$InferenceStep$3$$Lambda$lambda$accepts$0::*)($InferenceContext*)>(&Infer$InferenceStep$3$$Lambda$lambda$accepts$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Infer$InferenceStep$3$$Lambda$lambda$accepts$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Infer$InferenceStep$3$$Lambda$lambda$accepts$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Infer$InferenceStep$3$$Lambda$lambda$accepts$0::load$($String* name, bool initialize) {
	$loadClass(Infer$InferenceStep$3$$Lambda$lambda$accepts$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Infer$InferenceStep$3$$Lambda$lambda$accepts$0::class$ = nullptr;

class Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1 : public $Predicate {
	$class(Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Types* types, $Symtab* syms) {
		$set(this, types, types);
		$set(this, syms, syms);
	}
	virtual bool test(Object$* u) override {
		 return Infer$InferenceStep$3::lambda$accepts$1(types, syms, $cast($Type, u));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1>());
	}
	$Types* types = nullptr;
	$Symtab* syms = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1::fieldInfos[3] = {
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PUBLIC, $field(Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1, types)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PUBLIC, $field(Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1, syms)},
	{}
};
$MethodInfo Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Symtab;)V", nullptr, $PUBLIC, $method(static_cast<void(Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1::*)($Types*,$Symtab*)>(&Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1::load$($String* name, bool initialize) {
	$loadClass(Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1::class$ = nullptr;

$MethodInfo _Infer$InferenceStep$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", nullptr, $PRIVATE, $method(static_cast<void(Infer$InferenceStep$3::*)($String*,int32_t,$Type$UndetVar$InferenceBound*)>(&Infer$InferenceStep$3::init$))},
	{"accepts", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/comp/InferenceContext;)Z", nullptr, $PUBLIC},
	{"lambda$accepts$0", "(Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($InferenceContext*,$Type*)>(&Infer$InferenceStep$3::lambda$accepts$0))},
	{"lambda$accepts$1", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Symtab;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Types*,$Symtab*,$Type*)>(&Infer$InferenceStep$3::lambda$accepts$1))},
	{"solve", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _Infer$InferenceStep$3_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Infer$InferenceStep",
	nullptr,
	nullptr
};

$InnerClassInfo _Infer$InferenceStep$3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$InferenceStep", "com.sun.tools.javac.comp.Infer", "InferenceStep", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.comp.Infer$InferenceStep$3", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Infer$InferenceStep$3_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Infer$InferenceStep$3",
	"com.sun.tools.javac.comp.Infer$InferenceStep",
	nullptr,
	nullptr,
	_Infer$InferenceStep$3_MethodInfo_,
	nullptr,
	&_Infer$InferenceStep$3_EnclosingMethodInfo_,
	_Infer$InferenceStep$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$InferenceStep$3($Class* clazz) {
	return $of($alloc(Infer$InferenceStep$3));
}

void Infer$InferenceStep$3::init$($String* $enum$name, int32_t $enum$ordinal, $Type$UndetVar$InferenceBound* ib) {
	$Infer$InferenceStep::init$($enum$name, $enum$ordinal, ib);
}

bool Infer$InferenceStep$3::accepts($Type$UndetVar* t, $InferenceContext* inferenceContext) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(t)->isThrows()) {
		return false;
	}
	$var($Types, types, $nc(inferenceContext)->types);
	$var($Symtab, syms, $nc(inferenceContext->infer)->syms);
	$init($Type$UndetVar$InferenceBound);
	return $nc($($nc($($nc($($nc(t)->getBounds($$new($Type$UndetVar$InferenceBoundArray, {$Type$UndetVar$InferenceBound::UPPER}))))->stream()))->filter(static_cast<$Predicate*>($$new(Infer$InferenceStep$3$$Lambda$lambda$accepts$0, inferenceContext)))))->allMatch(static_cast<$Predicate*>($$new(Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1, types, syms)));
}

$Type* Infer$InferenceStep$3::solve($Type$UndetVar* uv, $InferenceContext* inferenceContext) {
	return $nc($nc($nc(inferenceContext)->infer)->syms)->runtimeExceptionType;
}

bool Infer$InferenceStep$3::lambda$accepts$1($Types* types, $Symtab* syms, $Type* u) {
	$init(Infer$InferenceStep$3);
	return $nc(types)->isSubtype($nc(syms)->runtimeExceptionType, u);
}

bool Infer$InferenceStep$3::lambda$accepts$0($InferenceContext* inferenceContext, $Type* b) {
	$init(Infer$InferenceStep$3);
	return !$nc(inferenceContext)->free(b);
}

Infer$InferenceStep$3::Infer$InferenceStep$3() {
}

$Class* Infer$InferenceStep$3::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Infer$InferenceStep$3$$Lambda$lambda$accepts$0::classInfo$.name)) {
			return Infer$InferenceStep$3$$Lambda$lambda$accepts$0::load$(name, initialize);
		}
		if (name->equals(Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1::classInfo$.name)) {
			return Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1::load$(name, initialize);
		}
	}
	$loadClass(Infer$InferenceStep$3, name, initialize, &_Infer$InferenceStep$3_ClassInfo_, allocate$Infer$InferenceStep$3);
	return class$;
}

$Class* Infer$InferenceStep$3::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com