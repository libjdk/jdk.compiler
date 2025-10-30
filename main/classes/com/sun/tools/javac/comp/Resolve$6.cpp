#include <com/sun/tools/javac/comp/Resolve$6.h>

#include <com/sun/tools/javac/code/ClassFinder.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve$SymbolNotFoundError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/Convert.h>
#include <com/sun/tools/javac/util/Iterators.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef TYP

using $ClassFinder = ::com::sun::tools::javac::code::ClassFinder;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$RecoveryLoadClass = ::com::sun::tools::javac::comp::Resolve$RecoveryLoadClass;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $Resolve$SymbolNotFoundError = ::com::sun::tools::javac::comp::Resolve$SymbolNotFoundError;
using $Convert = ::com::sun::tools::javac::util::Convert;
using $Iterators = ::com::sun::tools::javac::util::Iterators;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Resolve$6$$Lambda$lambda$loadClass$2 : public $Function {
	$class(Resolve$6$$Lambda$lambda$loadClass$2, $NO_CLASS_INIT, $Function)
public:
	void init$(Resolve$6* inst, $List* candidates) {
		$set(this, inst$, inst);
		$set(this, candidates, candidates);
	}
	virtual $Object* apply(Object$* n) override {
		 return $of($nc(inst$)->lambda$loadClass$2(candidates, $cast($Name, n)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Resolve$6$$Lambda$lambda$loadClass$2>());
	}
	Resolve$6* inst$ = nullptr;
	$List* candidates = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Resolve$6$$Lambda$lambda$loadClass$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Resolve$6$$Lambda$lambda$loadClass$2, inst$)},
	{"candidates", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(Resolve$6$$Lambda$lambda$loadClass$2, candidates)},
	{}
};
$MethodInfo Resolve$6$$Lambda$lambda$loadClass$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$6;Lcom/sun/tools/javac/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(Resolve$6$$Lambda$lambda$loadClass$2::*)(Resolve$6*,$List*)>(&Resolve$6$$Lambda$lambda$loadClass$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Resolve$6$$Lambda$lambda$loadClass$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Resolve$6$$Lambda$lambda$loadClass$2",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Resolve$6$$Lambda$lambda$loadClass$2::load$($String* name, bool initialize) {
	$loadClass(Resolve$6$$Lambda$lambda$loadClass$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Resolve$6$$Lambda$lambda$loadClass$2::class$ = nullptr;

class Resolve$6$$Lambda$lambda$loadClass$3$1 : public $BiFunction {
	$class(Resolve$6$$Lambda$lambda$loadClass$3$1, $NO_CLASS_INIT, $BiFunction)
public:
	void init$(Resolve$6* inst, $List* candidates) {
		$set(this, inst$, inst);
		$set(this, candidates, candidates);
	}
	virtual $Object* apply(Object$* ms, Object$* n) override {
		 return $of($nc(inst$)->lambda$loadClass$3(candidates, $cast($Symbol$ModuleSymbol, ms), $cast($Name, n)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Resolve$6$$Lambda$lambda$loadClass$3$1>());
	}
	Resolve$6* inst$ = nullptr;
	$List* candidates = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Resolve$6$$Lambda$lambda$loadClass$3$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Resolve$6$$Lambda$lambda$loadClass$3$1, inst$)},
	{"candidates", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(Resolve$6$$Lambda$lambda$loadClass$3$1, candidates)},
	{}
};
$MethodInfo Resolve$6$$Lambda$lambda$loadClass$3$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$6;Lcom/sun/tools/javac/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(Resolve$6$$Lambda$lambda$loadClass$3$1::*)(Resolve$6*,$List*)>(&Resolve$6$$Lambda$lambda$loadClass$3$1::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Resolve$6$$Lambda$lambda$loadClass$3$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Resolve$6$$Lambda$lambda$loadClass$3$1",
	"java.lang.Object",
	"java.util.function.BiFunction",
	fieldInfos,
	methodInfos
};
$Class* Resolve$6$$Lambda$lambda$loadClass$3$1::load$($String* name, bool initialize) {
	$loadClass(Resolve$6$$Lambda$lambda$loadClass$3$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Resolve$6$$Lambda$lambda$loadClass$3$1::class$ = nullptr;

class Resolve$6$$Lambda$lambda$loadClass$4$2 : public $Predicate {
	$class(Resolve$6$$Lambda$lambda$loadClass$4$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* sym) override {
		 return Resolve$6::lambda$loadClass$4($cast($Symbol$ClassSymbol, sym));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Resolve$6$$Lambda$lambda$loadClass$4$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Resolve$6$$Lambda$lambda$loadClass$4$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resolve$6$$Lambda$lambda$loadClass$4$2::*)()>(&Resolve$6$$Lambda$lambda$loadClass$4$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Resolve$6$$Lambda$lambda$loadClass$4$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Resolve$6$$Lambda$lambda$loadClass$4$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Resolve$6$$Lambda$lambda$loadClass$4$2::load$($String* name, bool initialize) {
	$loadClass(Resolve$6$$Lambda$lambda$loadClass$4$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Resolve$6$$Lambda$lambda$loadClass$4$2::class$ = nullptr;

class Resolve$6$$Lambda$lambda$loadClass$1$3 : public $Iterable {
	$class(Resolve$6$$Lambda$lambda$loadClass$1$3, $NO_CLASS_INIT, $Iterable)
public:
	void init$(Resolve$6* inst, $List* candidates) {
		$set(this, inst$, inst);
		$set(this, candidates, candidates);
	}
	virtual $Iterator* iterator() override {
		 return $nc(inst$)->lambda$loadClass$1(candidates);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Resolve$6$$Lambda$lambda$loadClass$1$3>());
	}
	Resolve$6* inst$ = nullptr;
	$List* candidates = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Resolve$6$$Lambda$lambda$loadClass$1$3::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Resolve$6$$Lambda$lambda$loadClass$1$3, inst$)},
	{"candidates", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(Resolve$6$$Lambda$lambda$loadClass$1$3, candidates)},
	{}
};
$MethodInfo Resolve$6$$Lambda$lambda$loadClass$1$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$6;Lcom/sun/tools/javac/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(Resolve$6$$Lambda$lambda$loadClass$1$3::*)(Resolve$6*,$List*)>(&Resolve$6$$Lambda$lambda$loadClass$1$3::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Resolve$6$$Lambda$lambda$loadClass$1$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Resolve$6$$Lambda$lambda$loadClass$1$3",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* Resolve$6$$Lambda$lambda$loadClass$1$3::load$($String* name, bool initialize) {
	$loadClass(Resolve$6$$Lambda$lambda$loadClass$1$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Resolve$6$$Lambda$lambda$loadClass$1$3::class$ = nullptr;

class Resolve$6$$Lambda$lambda$loadClass$0$4 : public $Function {
	$class(Resolve$6$$Lambda$lambda$loadClass$0$4, $NO_CLASS_INIT, $Function)
public:
	void init$(Resolve$6* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* c) override {
		 return $of($nc(inst$)->lambda$loadClass$0($cast($Name, c)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Resolve$6$$Lambda$lambda$loadClass$0$4>());
	}
	Resolve$6* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Resolve$6$$Lambda$lambda$loadClass$0$4::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Resolve$6$$Lambda$lambda$loadClass$0$4, inst$)},
	{}
};
$MethodInfo Resolve$6$$Lambda$lambda$loadClass$0$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$6;)V", nullptr, $PUBLIC, $method(static_cast<void(Resolve$6$$Lambda$lambda$loadClass$0$4::*)(Resolve$6*)>(&Resolve$6$$Lambda$lambda$loadClass$0$4::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Resolve$6$$Lambda$lambda$loadClass$0$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Resolve$6$$Lambda$lambda$loadClass$0$4",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Resolve$6$$Lambda$lambda$loadClass$0$4::load$($String* name, bool initialize) {
	$loadClass(Resolve$6$$Lambda$lambda$loadClass$0$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Resolve$6$$Lambda$lambda$loadClass$0$4::class$ = nullptr;

$FieldInfo _Resolve$6_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$6, this$0)},
	{}
};

$MethodInfo _Resolve$6_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;)V", nullptr, 0, $method(static_cast<void(Resolve$6::*)($Resolve*)>(&Resolve$6::init$))},
	{"lambda$loadClass$0", "(Lcom/sun/tools/javac/util/Name;)Ljava/util/Iterator;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Iterator*(Resolve$6::*)($Name*)>(&Resolve$6::lambda$loadClass$0))},
	{"lambda$loadClass$1", "(Lcom/sun/tools/javac/util/List;)Ljava/util/Iterator;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Iterator*(Resolve$6::*)($List*)>(&Resolve$6::lambda$loadClass$1))},
	{"lambda$loadClass$2", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Name;)Ljava/lang/Iterable;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Iterable*(Resolve$6::*)($List*,$Name*)>(&Resolve$6::lambda$loadClass$2))},
	{"lambda$loadClass$3", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Symbol$ClassSymbol*(Resolve$6::*)($List*,$Symbol$ModuleSymbol*,$Name*)>(&Resolve$6::lambda$loadClass$3))},
	{"lambda$loadClass$4", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol$ClassSymbol*)>(&Resolve$6::lambda$loadClass$4))},
	{"loadClass", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _Resolve$6_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Resolve",
	nullptr,
	nullptr
};

$InnerClassInfo _Resolve$6_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$6", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Resolve$RecoveryLoadClass", "com.sun.tools.javac.comp.Resolve", "RecoveryLoadClass", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Resolve$6_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$6",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Resolve$RecoveryLoadClass",
	_Resolve$6_FieldInfo_,
	_Resolve$6_MethodInfo_,
	nullptr,
	&_Resolve$6_EnclosingMethodInfo_,
	_Resolve$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$6($Class* clazz) {
	return $of($alloc(Resolve$6));
}

void Resolve$6::init$($Resolve* this$0) {
	$set(this, this$0, this$0);
}

$Symbol* Resolve$6::loadClass($Env* env, $Name* name) {
	$useLocalCurrentObjectStackCache();
	$var($List, candidates, $Convert::classCandidates(name));
	$var($Env, var$0, env);
	$var($Name, var$1, name);
	$var($Function, var$2, static_cast<$Function*>($new(Resolve$6$$Lambda$lambda$loadClass$2, this, candidates)));
	$var($BiFunction, var$3, static_cast<$BiFunction*>($new(Resolve$6$$Lambda$lambda$loadClass$3$1, this, candidates)));
	return this->this$0->lookupInvisibleSymbol(var$0, var$1, var$2, var$3, static_cast<$Predicate*>($$new(Resolve$6$$Lambda$lambda$loadClass$4$2)), this->this$0->typeNotFound);
}

bool Resolve$6::lambda$loadClass$4($Symbol$ClassSymbol* sym) {
	$init(Resolve$6);
	$init($Kinds$Kind);
	return $nc(sym)->kind == $Kinds$Kind::TYP;
}

$Symbol$ClassSymbol* Resolve$6::lambda$loadClass$3($List* candidates, $Symbol$ModuleSymbol* ms, $Name* n) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(candidates)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Name, candidate, $cast($Name, i$->next()));
			{
				try {
					return $nc(this->this$0->finder)->loadClass(ms, candidate);
				} catch ($Symbol$CompletionFailure& cf) {
				}
			}
		}
	}
	return nullptr;
}

$Iterable* Resolve$6::lambda$loadClass$2($List* candidates, $Name* n) {
	return static_cast<$Iterable*>($new(Resolve$6$$Lambda$lambda$loadClass$1$3, this, candidates));
}

$Iterator* Resolve$6::lambda$loadClass$1($List* candidates) {
	return $Iterators::createCompoundIterator(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(candidates))), static_cast<$Function*>($$new(Resolve$6$$Lambda$lambda$loadClass$0$4, this)));
}

$Iterator* Resolve$6::lambda$loadClass$0($Name* c) {
	return $nc($($nc(this->this$0->syms)->getClassesForName(c)))->iterator();
}

Resolve$6::Resolve$6() {
}

$Class* Resolve$6::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Resolve$6$$Lambda$lambda$loadClass$2::classInfo$.name)) {
			return Resolve$6$$Lambda$lambda$loadClass$2::load$(name, initialize);
		}
		if (name->equals(Resolve$6$$Lambda$lambda$loadClass$3$1::classInfo$.name)) {
			return Resolve$6$$Lambda$lambda$loadClass$3$1::load$(name, initialize);
		}
		if (name->equals(Resolve$6$$Lambda$lambda$loadClass$4$2::classInfo$.name)) {
			return Resolve$6$$Lambda$lambda$loadClass$4$2::load$(name, initialize);
		}
		if (name->equals(Resolve$6$$Lambda$lambda$loadClass$1$3::classInfo$.name)) {
			return Resolve$6$$Lambda$lambda$loadClass$1$3::load$(name, initialize);
		}
		if (name->equals(Resolve$6$$Lambda$lambda$loadClass$0$4::classInfo$.name)) {
			return Resolve$6$$Lambda$lambda$loadClass$0$4::load$(name, initialize);
		}
	}
	$loadClass(Resolve$6, name, initialize, &_Resolve$6_ClassInfo_, allocate$Resolve$6);
	return class$;
}

$Class* Resolve$6::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com