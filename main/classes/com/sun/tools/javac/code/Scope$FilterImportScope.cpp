#include <com/sun/tools/javac/code/Scope$FilterImportScope.h>

#include <com/sun/tools/javac/code/Scope$FilterImportScope$1.h>
#include <com/sun/tools/javac/code/Scope$FilterImportScope$2.h>
#include <com/sun/tools/javac/code/Scope$FilterImportScope$SymbolImporter.h>
#include <com/sun/tools/javac/code/Scope$ImportFilter.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/tree/JCTree$JCImport.h>
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
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$FilterImportScope$1 = ::com::sun::tools::javac::code::Scope$FilterImportScope$1;
using $Scope$FilterImportScope$2 = ::com::sun::tools::javac::code::Scope$FilterImportScope$2;
using $Scope$FilterImportScope$SymbolImporter = ::com::sun::tools::javac::code::Scope$FilterImportScope$SymbolImporter;
using $Scope$ImportFilter = ::com::sun::tools::javac::code::Scope$ImportFilter;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Types = ::com::sun::tools::javac::code::Types;
using $JCTree$JCImport = ::com::sun::tools::javac::tree::JCTree$JCImport;
using $Iterators = ::com::sun::tools::javac::util::Iterators;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
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
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $BiConsumer = ::java::util::function::BiConsumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Scope$FilterImportScope$$Lambda$lambda$getSymbols$1 : public $Iterable {
	$class(Scope$FilterImportScope$$Lambda$lambda$getSymbols$1, $NO_CLASS_INIT, $Iterable)
public:
	void init$(Scope$FilterImportScope* inst, $List* results) {
		$set(this, inst$, inst);
		$set(this, results, results);
	}
	virtual $Iterator* iterator() override {
		 return $nc(inst$)->lambda$getSymbols$1(results);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Scope$FilterImportScope$$Lambda$lambda$getSymbols$1>());
	}
	Scope$FilterImportScope* inst$ = nullptr;
	$List* results = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Scope$FilterImportScope$$Lambda$lambda$getSymbols$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Scope$FilterImportScope$$Lambda$lambda$getSymbols$1, inst$)},
	{"results", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(Scope$FilterImportScope$$Lambda$lambda$getSymbols$1, results)},
	{}
};
$MethodInfo Scope$FilterImportScope$$Lambda$lambda$getSymbols$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Scope$FilterImportScope;Lcom/sun/tools/javac/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(Scope$FilterImportScope$$Lambda$lambda$getSymbols$1::*)(Scope$FilterImportScope*,$List*)>(&Scope$FilterImportScope$$Lambda$lambda$getSymbols$1::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Scope$FilterImportScope$$Lambda$lambda$getSymbols$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Scope$FilterImportScope$$Lambda$lambda$getSymbols$1",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* Scope$FilterImportScope$$Lambda$lambda$getSymbols$1::load$($String* name, bool initialize) {
	$loadClass(Scope$FilterImportScope$$Lambda$lambda$getSymbols$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Scope$FilterImportScope$$Lambda$lambda$getSymbols$1::class$ = nullptr;

class Scope$FilterImportScope$$Lambda$lambda$getSymbolsByName$3$1 : public $Iterable {
	$class(Scope$FilterImportScope$$Lambda$lambda$getSymbolsByName$3$1, $NO_CLASS_INIT, $Iterable)
public:
	void init$(Scope$FilterImportScope* inst, $List* results) {
		$set(this, inst$, inst);
		$set(this, results, results);
	}
	virtual $Iterator* iterator() override {
		 return $nc(inst$)->lambda$getSymbolsByName$3(results);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Scope$FilterImportScope$$Lambda$lambda$getSymbolsByName$3$1>());
	}
	Scope$FilterImportScope* inst$ = nullptr;
	$List* results = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Scope$FilterImportScope$$Lambda$lambda$getSymbolsByName$3$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Scope$FilterImportScope$$Lambda$lambda$getSymbolsByName$3$1, inst$)},
	{"results", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(Scope$FilterImportScope$$Lambda$lambda$getSymbolsByName$3$1, results)},
	{}
};
$MethodInfo Scope$FilterImportScope$$Lambda$lambda$getSymbolsByName$3$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Scope$FilterImportScope;Lcom/sun/tools/javac/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(Scope$FilterImportScope$$Lambda$lambda$getSymbolsByName$3$1::*)(Scope$FilterImportScope*,$List*)>(&Scope$FilterImportScope$$Lambda$lambda$getSymbolsByName$3$1::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Scope$FilterImportScope$$Lambda$lambda$getSymbolsByName$3$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Scope$FilterImportScope$$Lambda$lambda$getSymbolsByName$3$1",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* Scope$FilterImportScope$$Lambda$lambda$getSymbolsByName$3$1::load$($String* name, bool initialize) {
	$loadClass(Scope$FilterImportScope$$Lambda$lambda$getSymbolsByName$3$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Scope$FilterImportScope$$Lambda$lambda$getSymbolsByName$3$1::class$ = nullptr;

class Scope$FilterImportScope$$Lambda$iterator$2 : public $Function {
	$class(Scope$FilterImportScope$$Lambda$iterator$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Iterable, inst$)->iterator());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Scope$FilterImportScope$$Lambda$iterator$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Scope$FilterImportScope$$Lambda$iterator$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Scope$FilterImportScope$$Lambda$iterator$2::*)()>(&Scope$FilterImportScope$$Lambda$iterator$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Scope$FilterImportScope$$Lambda$iterator$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Scope$FilterImportScope$$Lambda$iterator$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Scope$FilterImportScope$$Lambda$iterator$2::load$($String* name, bool initialize) {
	$loadClass(Scope$FilterImportScope$$Lambda$iterator$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Scope$FilterImportScope$$Lambda$iterator$2::class$ = nullptr;

class Scope$FilterImportScope$$Lambda$lambda$getSymbols$0$3 : public $Predicate {
	$class(Scope$FilterImportScope$$Lambda$lambda$getSymbols$0$3, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Scope$FilterImportScope* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* s) override {
		 return $nc(inst$)->lambda$getSymbols$0($cast($Symbol, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Scope$FilterImportScope$$Lambda$lambda$getSymbols$0$3>());
	}
	Scope$FilterImportScope* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Scope$FilterImportScope$$Lambda$lambda$getSymbols$0$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Scope$FilterImportScope$$Lambda$lambda$getSymbols$0$3, inst$)},
	{}
};
$MethodInfo Scope$FilterImportScope$$Lambda$lambda$getSymbols$0$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Scope$FilterImportScope;)V", nullptr, $PUBLIC, $method(static_cast<void(Scope$FilterImportScope$$Lambda$lambda$getSymbols$0$3::*)(Scope$FilterImportScope*)>(&Scope$FilterImportScope$$Lambda$lambda$getSymbols$0$3::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Scope$FilterImportScope$$Lambda$lambda$getSymbols$0$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Scope$FilterImportScope$$Lambda$lambda$getSymbols$0$3",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Scope$FilterImportScope$$Lambda$lambda$getSymbols$0$3::load$($String* name, bool initialize) {
	$loadClass(Scope$FilterImportScope$$Lambda$lambda$getSymbols$0$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Scope$FilterImportScope$$Lambda$lambda$getSymbols$0$3::class$ = nullptr;

$FieldInfo _Scope$FilterImportScope_FieldInfo_[] = {
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE | $FINAL, $field(Scope$FilterImportScope, types)},
	{"origin", "Lcom/sun/tools/javac/code/Scope;", nullptr, $PRIVATE | $FINAL, $field(Scope$FilterImportScope, origin)},
	{"filterName", "Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE | $FINAL, $field(Scope$FilterImportScope, filterName)},
	{"filter", "Lcom/sun/tools/javac/code/Scope$ImportFilter;", nullptr, $PRIVATE | $FINAL, $field(Scope$FilterImportScope, filter)},
	{"imp", "Lcom/sun/tools/javac/tree/JCTree$JCImport;", nullptr, $PRIVATE | $FINAL, $field(Scope$FilterImportScope, imp)},
	{"cfHandler", "Ljava/util/function/BiConsumer;", "Ljava/util/function/BiConsumer<Lcom/sun/tools/javac/tree/JCTree$JCImport;Lcom/sun/tools/javac/code/Symbol$CompletionFailure;>;", $PRIVATE | $FINAL, $field(Scope$FilterImportScope, cfHandler)},
	{}
};

$MethodInfo _Scope$FilterImportScope_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Scope$ImportFilter;Lcom/sun/tools/javac/tree/JCTree$JCImport;Ljava/util/function/BiConsumer;)V", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Scope$ImportFilter;Lcom/sun/tools/javac/tree/JCTree$JCImport;Ljava/util/function/BiConsumer<Lcom/sun/tools/javac/tree/JCTree$JCImport;Lcom/sun/tools/javac/code/Symbol$CompletionFailure;>;)V", $PUBLIC, $method(static_cast<void(Scope$FilterImportScope::*)($Types*,$Scope*,$Name*,$Scope$ImportFilter*,$JCTree$JCImport*,$BiConsumer*)>(&Scope$FilterImportScope::init$))},
	{"getOrigin", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope;", nullptr, $PUBLIC},
	{"getSymbols", "(Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC},
	{"getSymbolsByName", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC},
	{"isStaticallyImported", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC},
	{"isStaticallyImported", "()Z", nullptr, $PUBLIC},
	{"lambda$getSymbols$0", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Scope$FilterImportScope::*)($Symbol*)>(&Scope$FilterImportScope::lambda$getSymbols$0))},
	{"lambda$getSymbols$1", "(Lcom/sun/tools/javac/util/List;)Ljava/util/Iterator;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Iterator*(Scope$FilterImportScope::*)($List*)>(&Scope$FilterImportScope::lambda$getSymbols$1))},
	{"lambda$getSymbolsByName$3", "(Lcom/sun/tools/javac/util/List;)Ljava/util/Iterator;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Iterator*(Scope$FilterImportScope::*)($List*)>(&Scope$FilterImportScope::lambda$getSymbolsByName$3))},
	{}
};

$InnerClassInfo _Scope$FilterImportScope_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$FilterImportScope", "com.sun.tools.javac.code.Scope", "FilterImportScope", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.code.Scope$FilterImportScope$SymbolImporter", "com.sun.tools.javac.code.Scope$FilterImportScope", "SymbolImporter", $ABSTRACT},
	{"com.sun.tools.javac.code.Scope$FilterImportScope$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Scope$FilterImportScope$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Scope$FilterImportScope_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Scope$FilterImportScope",
	"com.sun.tools.javac.code.Scope",
	nullptr,
	_Scope$FilterImportScope_FieldInfo_,
	_Scope$FilterImportScope_MethodInfo_,
	nullptr,
	nullptr,
	_Scope$FilterImportScope_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope"
};

$Object* allocate$Scope$FilterImportScope($Class* clazz) {
	return $of($alloc(Scope$FilterImportScope));
}

void Scope$FilterImportScope::init$($Types* types, $Scope* origin, $Name* filterName, $Scope$ImportFilter* filter, $JCTree$JCImport* imp, $BiConsumer* cfHandler) {
	$Scope::init$($nc(origin)->owner);
	$set(this, types, types);
	$set(this, origin, origin);
	$set(this, filterName, filterName);
	$set(this, filter, filter);
	$set(this, imp, imp);
	$set(this, cfHandler, cfHandler);
}

$Iterable* Scope$FilterImportScope::getSymbols($Predicate* sf, $Scope$LookupKind* lookupKind) {
	$useLocalCurrentObjectStackCache();
	if (this->filterName != nullptr) {
		return getSymbolsByName(this->filterName, sf, lookupKind);
	}
	try {
		$var($Scope$FilterImportScope$SymbolImporter, si, $new($Scope$FilterImportScope$1, this, $nc(this->imp)->staticImport, sf, lookupKind));
		$var($List, results, si->importFrom($cast($Symbol$TypeSymbol, $nc(this->origin)->owner), $($List::nil())));
		return static_cast<$Iterable*>($new(Scope$FilterImportScope$$Lambda$lambda$getSymbols$1, this, results));
	} catch ($Symbol$CompletionFailure& cf) {
		$nc(this->cfHandler)->accept(this->imp, cf);
		return $Collections::emptyList();
	}
	$shouldNotReachHere();
}

$Iterable* Scope$FilterImportScope::getSymbolsByName($Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
	$useLocalCurrentObjectStackCache();
	if (this->filterName != nullptr && this->filterName != name) {
		return $Collections::emptyList();
	}
	try {
		$var($Scope$FilterImportScope$SymbolImporter, si, $new($Scope$FilterImportScope$2, this, $nc(this->imp)->staticImport, name, sf, lookupKind));
		$var($List, results, si->importFrom($cast($Symbol$TypeSymbol, $nc(this->origin)->owner), $($List::nil())));
		return static_cast<$Iterable*>($new(Scope$FilterImportScope$$Lambda$lambda$getSymbolsByName$3$1, this, results));
	} catch ($Symbol$CompletionFailure& cf) {
		$nc(this->cfHandler)->accept(this->imp, cf);
		return $Collections::emptyList();
	}
	$shouldNotReachHere();
}

$Scope* Scope$FilterImportScope::getOrigin($Symbol* byName) {
	return this->origin;
}

bool Scope$FilterImportScope::isStaticallyImported($Symbol* byName) {
	return isStaticallyImported();
}

bool Scope$FilterImportScope::isStaticallyImported() {
	return $nc(this->imp)->staticImport;
}

$Iterator* Scope$FilterImportScope::lambda$getSymbolsByName$3($List* results) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, var$0, $Iterators::createCompoundIterator(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(results))), static_cast<$Function*>($$new(Scope$FilterImportScope$$Lambda$iterator$2))));
	return $Iterators::createFilterIterator(var$0, static_cast<$Predicate*>($$new(Scope$FilterImportScope$$Lambda$lambda$getSymbols$0$3, this)));
}

$Iterator* Scope$FilterImportScope::lambda$getSymbols$1($List* results) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, var$0, $Iterators::createCompoundIterator(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(results))), static_cast<$Function*>($$new(Scope$FilterImportScope$$Lambda$iterator$2))));
	return $Iterators::createFilterIterator(var$0, static_cast<$Predicate*>($$new(Scope$FilterImportScope$$Lambda$lambda$getSymbols$0$3, this)));
}

bool Scope$FilterImportScope::lambda$getSymbols$0($Symbol* s) {
	return $nc(this->filter)->accepts(this->origin, s);
}

Scope$FilterImportScope::Scope$FilterImportScope() {
}

$Class* Scope$FilterImportScope::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Scope$FilterImportScope$$Lambda$lambda$getSymbols$1::classInfo$.name)) {
			return Scope$FilterImportScope$$Lambda$lambda$getSymbols$1::load$(name, initialize);
		}
		if (name->equals(Scope$FilterImportScope$$Lambda$lambda$getSymbolsByName$3$1::classInfo$.name)) {
			return Scope$FilterImportScope$$Lambda$lambda$getSymbolsByName$3$1::load$(name, initialize);
		}
		if (name->equals(Scope$FilterImportScope$$Lambda$iterator$2::classInfo$.name)) {
			return Scope$FilterImportScope$$Lambda$iterator$2::load$(name, initialize);
		}
		if (name->equals(Scope$FilterImportScope$$Lambda$lambda$getSymbols$0$3::classInfo$.name)) {
			return Scope$FilterImportScope$$Lambda$lambda$getSymbols$0$3::load$(name, initialize);
		}
	}
	$loadClass(Scope$FilterImportScope, name, initialize, &_Scope$FilterImportScope_ClassInfo_, allocate$Scope$FilterImportScope);
	return class$;
}

$Class* Scope$FilterImportScope::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com