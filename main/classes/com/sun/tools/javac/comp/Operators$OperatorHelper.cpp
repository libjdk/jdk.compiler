#include <com/sun/tools/javac/comp/Operators$OperatorHelper.h>

#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/Optional.h>
#include <java/util/function/Function.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $Symbol$OperatorSymbolArray = $Array<::com::sun::tools::javac::code::Symbol$OperatorSymbol>;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Operators = ::com::sun::tools::javac::comp::Operators;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Collection = ::java::util::Collection;
using $Optional = ::java::util::Optional;
using $Function = ::java::util::function::Function;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Operators$OperatorHelper$$Lambda$initOperators : public $Supplier {
	$class(Operators$OperatorHelper$$Lambda$initOperators, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Operators$OperatorHelper* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->initOperators());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$OperatorHelper$$Lambda$initOperators>());
	}
	Operators$OperatorHelper* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Operators$OperatorHelper$$Lambda$initOperators::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Operators$OperatorHelper$$Lambda$initOperators, inst$)},
	{}
};
$MethodInfo Operators$OperatorHelper$$Lambda$initOperators::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Operators$OperatorHelper;)V", nullptr, $PUBLIC, $method(static_cast<void(Operators$OperatorHelper$$Lambda$initOperators::*)(Operators$OperatorHelper*)>(&Operators$OperatorHelper$$Lambda$initOperators::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$OperatorHelper$$Lambda$initOperators::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$OperatorHelper$$Lambda$initOperators",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* Operators$OperatorHelper$$Lambda$initOperators::load$($String* name, bool initialize) {
	$loadClass(Operators$OperatorHelper$$Lambda$initOperators, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$OperatorHelper$$Lambda$initOperators::class$ = nullptr;

class Operators$OperatorHelper$$Lambda$get$1 : public $Function {
	$class(Operators$OperatorHelper$$Lambda$get$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $sure($Supplier, inst$)->get();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$OperatorHelper$$Lambda$get$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Operators$OperatorHelper$$Lambda$get$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Operators$OperatorHelper$$Lambda$get$1::*)()>(&Operators$OperatorHelper$$Lambda$get$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$OperatorHelper$$Lambda$get$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$OperatorHelper$$Lambda$get$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Operators$OperatorHelper$$Lambda$get$1::load$($String* name, bool initialize) {
	$loadClass(Operators$OperatorHelper$$Lambda$get$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$OperatorHelper$$Lambda$get$1::class$ = nullptr;

class Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2 : public $IntFunction {
	$class(Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return $of(Operators$OperatorHelper::lambda$initOperators$0(x$0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2::*)()>(&Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2::load$($String* name, bool initialize) {
	$loadClass(Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2::class$ = nullptr;

$FieldInfo _Operators$OperatorHelper_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Operators;", nullptr, $FINAL | $SYNTHETIC, $field(Operators$OperatorHelper, this$0)},
	{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $FINAL, $field(Operators$OperatorHelper, name)},
	{"alternatives", "Ljava/util/Optional;", "Ljava/util/Optional<[Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;>;", 0, $field(Operators$OperatorHelper, alternatives)},
	{"operatorSuppliers", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Ljava/util/function/Supplier<Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;>;>;", 0, $field(Operators$OperatorHelper, operatorSuppliers)},
	{}
};

$MethodInfo _Operators$OperatorHelper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Operators;Lcom/sun/tools/javac/tree/JCTree$Tag;)V", nullptr, 0, $method(static_cast<void(Operators$OperatorHelper::*)($Operators*,$JCTree$Tag*)>(&Operators$OperatorHelper::init$))},
	{"doLookup", "(Ljava/util/function/Predicate;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;>;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", $FINAL, $method(static_cast<$Symbol$OperatorSymbol*(Operators$OperatorHelper::*)($Predicate*)>(&Operators$OperatorHelper::doLookup))},
	{"initOperators", "()[Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol$OperatorSymbolArray*(Operators$OperatorHelper::*)()>(&Operators$OperatorHelper::initOperators))},
	{"lambda$initOperators$0", "(I)[Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Symbol$OperatorSymbolArray*(*)(int32_t)>(&Operators$OperatorHelper::lambda$initOperators$0))},
	{}
};

$InnerClassInfo _Operators$OperatorHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Operators$OperatorHelper", "com.sun.tools.javac.comp.Operators", "OperatorHelper", $ABSTRACT},
	{}
};

$ClassInfo _Operators$OperatorHelper_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.Operators$OperatorHelper",
	"java.lang.Object",
	nullptr,
	_Operators$OperatorHelper_FieldInfo_,
	_Operators$OperatorHelper_MethodInfo_,
	nullptr,
	nullptr,
	_Operators$OperatorHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Operators"
};

$Object* allocate$Operators$OperatorHelper($Class* clazz) {
	return $of($alloc(Operators$OperatorHelper));
}

void Operators$OperatorHelper::init$($Operators* this$0, $JCTree$Tag* tag) {
	$set(this, this$0, this$0);
	$set(this, alternatives, $Optional::empty());
	$set(this, operatorSuppliers, $List::nil());
	$set(this, name, this$0->operatorName(tag));
}

$Symbol$OperatorSymbol* Operators$OperatorHelper::doLookup($Predicate* applicabilityTest) {
	$useLocalCurrentObjectStackCache();
	return $cast($Symbol$OperatorSymbol, $nc($($nc($($nc($($Stream::of($cast($Symbol$OperatorSymbolArray, $($nc(this->alternatives)->orElseGet(static_cast<$Supplier*>($$new(Operators$OperatorHelper$$Lambda$initOperators, this))))))))->filter(applicabilityTest)))->findFirst()))->orElse(this->this$0->noOpSymbol));
}

$Symbol$OperatorSymbolArray* Operators$OperatorHelper::initOperators() {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$OperatorSymbolArray, operators, $fcast($Symbol$OperatorSymbolArray, $nc($($nc($($nc(this->operatorSuppliers)->stream()))->map(static_cast<$Function*>($$new(Operators$OperatorHelper$$Lambda$get$1)))))->toArray(static_cast<$IntFunction*>($$new(Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2)))));
	$set(this, alternatives, $Optional::of(operators));
	$set(this, operatorSuppliers, nullptr);
	return operators;
}

$Symbol$OperatorSymbolArray* Operators$OperatorHelper::lambda$initOperators$0(int32_t x$0) {
	return $new($Symbol$OperatorSymbolArray, x$0);
}

Operators$OperatorHelper::Operators$OperatorHelper() {
}

$Class* Operators$OperatorHelper::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Operators$OperatorHelper$$Lambda$initOperators::classInfo$.name)) {
			return Operators$OperatorHelper$$Lambda$initOperators::load$(name, initialize);
		}
		if (name->equals(Operators$OperatorHelper$$Lambda$get$1::classInfo$.name)) {
			return Operators$OperatorHelper$$Lambda$get$1::load$(name, initialize);
		}
		if (name->equals(Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2::classInfo$.name)) {
			return Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2::load$(name, initialize);
		}
	}
	$loadClass(Operators$OperatorHelper, name, initialize, &_Operators$OperatorHelper_ClassInfo_, allocate$Operators$OperatorHelper);
	return class$;
}

$Class* Operators$OperatorHelper::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com