#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupResult.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Resolve$18.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolsError.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheckDiag.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext$Candidate.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef ARITY_MISMATCH
#undef UNDEFINED

using $Resolve$MethodResolutionDiagHelper$TemplateArray = $Array<::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template>;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$18 = ::com::sun::tools::javac::comp::Resolve$18;
using $Resolve$InapplicableSymbolError = ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError;
using $Resolve$InapplicableSymbolsError = ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolsError;
using $Resolve$MethodCheckDiag = ::com::sun::tools::javac::comp::Resolve$MethodCheckDiag;
using $Resolve$MethodResolutionContext = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext;
using $Resolve$MethodResolutionContext$Candidate = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext$Candidate;
using $Resolve$MethodResolutionDiagHelper$Template = ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $Resolve$ReferenceLookupResult$StaticKind = ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind;
using $List = ::com::sun::tools::javac::util::List;
using $Pair = ::com::sun::tools::javac::util::Pair;
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
using $Collection = ::java::util::Collection;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0 : public $Predicate {
	$class(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Resolve$MethodResolutionContext* resolutionContext) {
		$set(this, resolutionContext, resolutionContext);
	}
	virtual bool test(Object$* c) override {
		 return Resolve$ReferenceLookupResult::lambda$staticKind$0(resolutionContext, $cast($Resolve$MethodResolutionContext$Candidate, c));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0>());
	}
	$Resolve$MethodResolutionContext* resolutionContext = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0::fieldInfos[2] = {
	{"resolutionContext", "Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;", nullptr, $PUBLIC, $field(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0, resolutionContext)},
	{}
};
$MethodInfo Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;)V", nullptr, $PUBLIC, $method(static_cast<void(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0::*)($Resolve$MethodResolutionContext*)>(&Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0::load$($String* name, bool initialize) {
	$loadClass(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0::class$ = nullptr;

class Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1 : public $Function {
	$class(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* c) override {
		 return $of(Resolve$ReferenceLookupResult::lambda$staticKind$1($cast($Resolve$MethodResolutionContext$Candidate, c)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1::*)()>(&Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1::load$($String* name, bool initialize) {
	$loadClass(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1::class$ = nullptr;

class Resolve$ReferenceLookupResult$$Lambda$reduce$2 : public $BinaryOperator {
	$class(Resolve$ReferenceLookupResult$$Lambda$reduce$2, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* sk1, Object$* sk2) override {
		 return $of($Resolve$ReferenceLookupResult$StaticKind::reduce($cast($Resolve$ReferenceLookupResult$StaticKind, sk1), $cast($Resolve$ReferenceLookupResult$StaticKind, sk2)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Resolve$ReferenceLookupResult$$Lambda$reduce$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Resolve$ReferenceLookupResult$$Lambda$reduce$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resolve$ReferenceLookupResult$$Lambda$reduce$2::*)()>(&Resolve$ReferenceLookupResult$$Lambda$reduce$2::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Resolve$ReferenceLookupResult$$Lambda$reduce$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Resolve$ReferenceLookupResult$$Lambda$reduce$2",
	"java.lang.Object",
	"java.util.function.BinaryOperator",
	nullptr,
	methodInfos
};
$Class* Resolve$ReferenceLookupResult$$Lambda$reduce$2::load$($String* name, bool initialize) {
	$loadClass(Resolve$ReferenceLookupResult$$Lambda$reduce$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Resolve$ReferenceLookupResult$$Lambda$reduce$2::class$ = nullptr;

$FieldInfo _Resolve$ReferenceLookupResult_FieldInfo_[] = {
	{"staticKind", "Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;", nullptr, 0, $field(Resolve$ReferenceLookupResult, staticKind$)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $field(Resolve$ReferenceLookupResult, sym)},
	{}
};

$MethodInfo _Resolve$ReferenceLookupResult_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;)V", nullptr, 0, $method(static_cast<void(Resolve$ReferenceLookupResult::*)($Symbol*,$Resolve$MethodResolutionContext*)>(&Resolve$ReferenceLookupResult::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;)V", nullptr, $PRIVATE, $method(static_cast<void(Resolve$ReferenceLookupResult::*)($Symbol*,$Resolve$ReferenceLookupResult$StaticKind*)>(&Resolve$ReferenceLookupResult::init$))},
	{"canIgnore", "()Z", nullptr, 0},
	{"error", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;", nullptr, $STATIC, $method(static_cast<Resolve$ReferenceLookupResult*(*)($Symbol*)>(&Resolve$ReferenceLookupResult::error))},
	{"hasKind", "(Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;)Z", nullptr, 0},
	{"isSuccess", "()Z", nullptr, 0},
	{"lambda$staticKind$0", "(Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext$Candidate;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Resolve$MethodResolutionContext*,$Resolve$MethodResolutionContext$Candidate*)>(&Resolve$ReferenceLookupResult::lambda$staticKind$0))},
	{"lambda$staticKind$1", "(Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext$Candidate;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Resolve$ReferenceLookupResult$StaticKind*(*)($Resolve$MethodResolutionContext$Candidate*)>(&Resolve$ReferenceLookupResult::lambda$staticKind$1))},
	{"staticKind", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Resolve$ReferenceLookupResult$StaticKind*(*)($Symbol*,$Resolve$MethodResolutionContext*)>(&Resolve$ReferenceLookupResult::staticKind))},
	{}
};

$InnerClassInfo _Resolve$ReferenceLookupResult_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$ReferenceLookupResult", "com.sun.tools.javac.comp.Resolve", "ReferenceLookupResult", $STATIC},
	{"com.sun.tools.javac.comp.Resolve$ReferenceLookupResult$StaticKind", "com.sun.tools.javac.comp.Resolve$ReferenceLookupResult", "StaticKind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Resolve$ReferenceLookupResult_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$ReferenceLookupResult",
	"java.lang.Object",
	nullptr,
	_Resolve$ReferenceLookupResult_FieldInfo_,
	_Resolve$ReferenceLookupResult_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$ReferenceLookupResult_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$ReferenceLookupResult($Class* clazz) {
	return $of($alloc(Resolve$ReferenceLookupResult));
}

void Resolve$ReferenceLookupResult::init$($Symbol* sym, $Resolve$MethodResolutionContext* resolutionContext) {
	Resolve$ReferenceLookupResult::init$(sym, $(staticKind(sym, resolutionContext)));
}

void Resolve$ReferenceLookupResult::init$($Symbol* sym, $Resolve$ReferenceLookupResult$StaticKind* staticKind) {
	$set(this, staticKind$, staticKind);
	$set(this, sym, sym);
}

$Resolve$ReferenceLookupResult$StaticKind* Resolve$ReferenceLookupResult::staticKind($Symbol* sym, $Resolve$MethodResolutionContext* resolutionContext) {
	$useLocalCurrentObjectStackCache();
	$init($Resolve$18);
	switch ($nc($Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->get($nc(($nc(sym)->kind))->ordinal())) {
	case 4:
		{}
	case 5:
		{
			$init($Resolve$ReferenceLookupResult$StaticKind);
			return $cast($Resolve$ReferenceLookupResult$StaticKind, $nc($($nc($($nc($($nc($($nc($nc(resolutionContext)->candidates)->stream()))->filter(static_cast<$Predicate*>($$new(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0, resolutionContext)))))->map(static_cast<$Function*>($$new(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1)))))->reduce(static_cast<$BinaryOperator*>($$new(Resolve$ReferenceLookupResult$$Lambda$reduce$2)))))->orElse($Resolve$ReferenceLookupResult$StaticKind::UNDEFINED));
		}
	default:
		{
			$init($Resolve$ReferenceLookupResult$StaticKind);
			return $Resolve$ReferenceLookupResult$StaticKind::UNDEFINED;
		}
	}
}

bool Resolve$ReferenceLookupResult::isSuccess() {
	$init($Resolve$ReferenceLookupResult$StaticKind);
	return this->staticKind$ != $Resolve$ReferenceLookupResult$StaticKind::UNDEFINED;
}

bool Resolve$ReferenceLookupResult::hasKind($Resolve$ReferenceLookupResult$StaticKind* sk) {
	return this->staticKind$ == sk;
}

bool Resolve$ReferenceLookupResult::canIgnore() {
	$useLocalCurrentObjectStackCache();
	$init($Resolve$18);
	{
		$var($Resolve$InapplicableSymbolError, errSym, nullptr)
		$var($Resolve$InapplicableSymbolsError, errSyms, nullptr)
		switch ($nc($Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->get($nc(($nc(this->sym)->kind))->ordinal())) {
		case 1:
			{
				return true;
			}
		case 3:
			{
				$assign(errSym, $cast($Resolve$InapplicableSymbolError, $nc(this->sym)->baseSymbol()));
				$init($Resolve$MethodCheckDiag);
				return $$new($Resolve$MethodResolutionDiagHelper$Template, $($Resolve$MethodCheckDiag::ARITY_MISMATCH->regex()), $$new($Resolve$MethodResolutionDiagHelper$TemplateArray, 0))->matches($nc($($nc(errSym)->errCandidate()))->snd);
			}
		case 6:
			{
				$assign(errSyms, $cast($Resolve$InapplicableSymbolsError, $nc(this->sym)->baseSymbol()));
				return $nc($($nc(errSyms)->filterCandidates($(errSyms->mapCandidates()))))->isEmpty();
			}
		default:
			{
				return false;
			}
		}
	}
}

Resolve$ReferenceLookupResult* Resolve$ReferenceLookupResult::error($Symbol* sym) {
	$init($Resolve$ReferenceLookupResult$StaticKind);
	return $new(Resolve$ReferenceLookupResult, sym, $Resolve$ReferenceLookupResult$StaticKind::UNDEFINED);
}

$Resolve$ReferenceLookupResult$StaticKind* Resolve$ReferenceLookupResult::lambda$staticKind$1($Resolve$MethodResolutionContext$Candidate* c) {
	return $Resolve$ReferenceLookupResult$StaticKind::from($nc(c)->sym);
}

bool Resolve$ReferenceLookupResult::lambda$staticKind$0($Resolve$MethodResolutionContext* resolutionContext, $Resolve$MethodResolutionContext$Candidate* c) {
	return $nc(c)->isApplicable() && c->step == $nc(resolutionContext)->step;
}

Resolve$ReferenceLookupResult::Resolve$ReferenceLookupResult() {
}

$Class* Resolve$ReferenceLookupResult::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0::classInfo$.name)) {
			return Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0::load$(name, initialize);
		}
		if (name->equals(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1::classInfo$.name)) {
			return Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1::load$(name, initialize);
		}
		if (name->equals(Resolve$ReferenceLookupResult$$Lambda$reduce$2::classInfo$.name)) {
			return Resolve$ReferenceLookupResult$$Lambda$reduce$2::load$(name, initialize);
		}
	}
	$loadClass(Resolve$ReferenceLookupResult, name, initialize, &_Resolve$ReferenceLookupResult_ClassInfo_, allocate$Resolve$ReferenceLookupResult);
	return class$;
}

$Class* Resolve$ReferenceLookupResult::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com