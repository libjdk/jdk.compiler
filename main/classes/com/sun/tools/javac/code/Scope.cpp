#include <com/sun/tools/javac/code/Scope.h>

#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$ScopeListenerList.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Iterator.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef NON_RECURSIVE
#undef RECURSIVE

using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$ScopeListenerList = ::com::sun::tools::javac::code::Scope$ScopeListenerList;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
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
using $Iterator = ::java::util::Iterator;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Scope$$Lambda$lambda$includes$0 : public $Predicate {
	$class(Scope$$Lambda$lambda$includes$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Symbol* sym) {
		$set(this, sym, sym);
	}
	virtual bool test(Object$* t) override {
		 return Scope::lambda$includes$0(sym, $cast($Symbol, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Scope$$Lambda$lambda$includes$0>());
	}
	$Symbol* sym = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Scope$$Lambda$lambda$includes$0::fieldInfos[2] = {
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Scope$$Lambda$lambda$includes$0, sym)},
	{}
};
$MethodInfo Scope$$Lambda$lambda$includes$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Scope$$Lambda$lambda$includes$0::*)($Symbol*)>(&Scope$$Lambda$lambda$includes$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Scope$$Lambda$lambda$includes$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Scope$$Lambda$lambda$includes$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Scope$$Lambda$lambda$includes$0::load$($String* name, bool initialize) {
	$loadClass(Scope$$Lambda$lambda$includes$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Scope$$Lambda$lambda$includes$0::class$ = nullptr;

$FieldInfo _Scope_FieldInfo_[] = {
	{"owner", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC | $FINAL, $field(Scope, owner)},
	{"noFilter", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Scope, noFilter)},
	{"listeners", "Lcom/sun/tools/javac/code/Scope$ScopeListenerList;", nullptr, 0, $field(Scope, listeners)},
	{}
};

$MethodInfo _Scope_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PROTECTED, $method(static_cast<void(Scope::*)($Symbol*)>(&Scope::init$))},
	{"anyMatch", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;)Z", $PUBLIC},
	{"findFirst", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Symbol*(Scope::*)($Name*)>(&Scope::findFirst))},
	{"findFirst", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;)Lcom/sun/tools/javac/code/Symbol;", $PUBLIC},
	{"getOrigin", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSymbols", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC | $FINAL, $method(static_cast<$Iterable*(Scope::*)()>(&Scope::getSymbols))},
	{"getSymbols", "(Ljava/util/function/Predicate;)Ljava/lang/Iterable;", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC | $FINAL, $method(static_cast<$Iterable*(Scope::*)($Predicate*)>(&Scope::getSymbols))},
	{"getSymbols", "(Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC | $FINAL, $method(static_cast<$Iterable*(Scope::*)($Scope$LookupKind*)>(&Scope::getSymbols))},
	{"getSymbols", "(Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC | $ABSTRACT},
	{"getSymbolsByName", "(Lcom/sun/tools/javac/util/Name;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/util/Name;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC | $FINAL, $method(static_cast<$Iterable*(Scope::*)($Name*)>(&Scope::getSymbolsByName))},
	{"getSymbolsByName", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC | $FINAL, $method(static_cast<$Iterable*(Scope::*)($Name*,$Predicate*)>(&Scope::getSymbolsByName))},
	{"getSymbolsByName", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC | $FINAL, $method(static_cast<$Iterable*(Scope::*)($Name*,$Scope$LookupKind*)>(&Scope::getSymbolsByName))},
	{"getSymbolsByName", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC | $ABSTRACT},
	{"includes", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC},
	{"includes", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope$LookupKind;)Z", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"isStaticallyImported", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"lambda$includes$0", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol*,$Symbol*)>(&Scope::lambda$includes$0))},
	{}
};

$InnerClassInfo _Scope_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$ErrorScope", "com.sun.tools.javac.code.Scope", "ErrorScope", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Scope$CompoundScope", "com.sun.tools.javac.code.Scope", "CompoundScope", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Scope$FilterImportScope", "com.sun.tools.javac.code.Scope", "FilterImportScope", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.code.Scope$ImportFilter", "com.sun.tools.javac.code.Scope", "ImportFilter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.Scope$StarImportScope", "com.sun.tools.javac.code.Scope", "StarImportScope", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Scope$NamedImportScope", "com.sun.tools.javac.code.Scope", "NamedImportScope", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Scope$ImportScope", "com.sun.tools.javac.code.Scope", "ImportScope", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Scope$Entry", "com.sun.tools.javac.code.Scope", "Entry", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.code.Scope$ScopeImpl", "com.sun.tools.javac.code.Scope", "ScopeImpl", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.code.Scope$WriteableScope", "com.sun.tools.javac.code.Scope", "WriteableScope", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Scope$LookupKind", "com.sun.tools.javac.code.Scope", "LookupKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.code.Scope$ScopeListenerList", "com.sun.tools.javac.code.Scope", "ScopeListenerList", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Scope$ScopeListener", "com.sun.tools.javac.code.Scope", "ScopeListener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Scope_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.code.Scope",
	"java.lang.Object",
	nullptr,
	_Scope_FieldInfo_,
	_Scope_MethodInfo_,
	nullptr,
	nullptr,
	_Scope_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope$ErrorScope,com.sun.tools.javac.code.Scope$CompoundScope,com.sun.tools.javac.code.Scope$FilterImportScope,com.sun.tools.javac.code.Scope$FilterImportScope$SymbolImporter,com.sun.tools.javac.code.Scope$FilterImportScope$2,com.sun.tools.javac.code.Scope$FilterImportScope$1,com.sun.tools.javac.code.Scope$ImportFilter,com.sun.tools.javac.code.Scope$StarImportScope,com.sun.tools.javac.code.Scope$NamedImportScope,com.sun.tools.javac.code.Scope$NamedImportScope$SingleEntryScope,com.sun.tools.javac.code.Scope$ImportScope,com.sun.tools.javac.code.Scope$ImportScope$1,com.sun.tools.javac.code.Scope$Entry,com.sun.tools.javac.code.Scope$ScopeImpl,com.sun.tools.javac.code.Scope$ScopeImpl$1,com.sun.tools.javac.code.Scope$ScopeImpl$2,com.sun.tools.javac.code.Scope$WriteableScope,com.sun.tools.javac.code.Scope$LookupKind,com.sun.tools.javac.code.Scope$ScopeListenerList,com.sun.tools.javac.code.Scope$ScopeListener"
};

$Object* allocate$Scope($Class* clazz) {
	return $of($alloc(Scope));
}

$Predicate* Scope::noFilter = nullptr;

void Scope::init$($Symbol* owner) {
	$set(this, listeners, $new($Scope$ScopeListenerList));
	$set(this, owner, owner);
}

$Iterable* Scope::getSymbols() {
	return getSymbols(Scope::noFilter);
}

$Iterable* Scope::getSymbols($Predicate* sf) {
	$init($Scope$LookupKind);
	return getSymbols(sf, $Scope$LookupKind::RECURSIVE);
}

$Iterable* Scope::getSymbols($Scope$LookupKind* lookupKind) {
	return getSymbols(Scope::noFilter, lookupKind);
}

$Iterable* Scope::getSymbolsByName($Name* name) {
	$init($Scope$LookupKind);
	return getSymbolsByName(name, $Scope$LookupKind::RECURSIVE);
}

$Iterable* Scope::getSymbolsByName($Name* name, $Predicate* sf) {
	$init($Scope$LookupKind);
	return getSymbolsByName(name, sf, $Scope$LookupKind::RECURSIVE);
}

$Iterable* Scope::getSymbolsByName($Name* name, $Scope$LookupKind* lookupKind) {
	return getSymbolsByName(name, Scope::noFilter, lookupKind);
}

$Symbol* Scope::findFirst($Name* name) {
	return findFirst(name, Scope::noFilter);
}

$Symbol* Scope::findFirst($Name* name, $Predicate* sf) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, it, $nc($(getSymbolsByName(name, sf)))->iterator());
	return $nc(it)->hasNext() ? $cast($Symbol, $nc(it)->next()) : ($Symbol*)nullptr;
}

bool Scope::anyMatch($Predicate* filter) {
	$useLocalCurrentObjectStackCache();
	$init($Scope$LookupKind);
	return $nc($($nc($(getSymbols(filter, $Scope$LookupKind::NON_RECURSIVE)))->iterator()))->hasNext();
}

bool Scope::includes($Symbol* sym) {
	$init($Scope$LookupKind);
	return includes(sym, $Scope$LookupKind::RECURSIVE);
}

bool Scope::includes($Symbol* sym, $Scope$LookupKind* lookupKind) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($(getSymbolsByName($nc(sym)->name, static_cast<$Predicate*>($$new(Scope$$Lambda$lambda$includes$0, sym)), lookupKind)))->iterator()))->hasNext();
}

bool Scope::isEmpty() {
	$useLocalCurrentObjectStackCache();
	$init($Scope$LookupKind);
	return !$nc($($nc($(getSymbols($Scope$LookupKind::NON_RECURSIVE)))->iterator()))->hasNext();
}

bool Scope::lambda$includes$0($Symbol* sym, $Symbol* t) {
	$init(Scope);
	return t == sym;
}

void clinit$Scope($Class* class$) {
	$assignStatic(Scope::noFilter, nullptr);
}

Scope::Scope() {
}

$Class* Scope::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Scope$$Lambda$lambda$includes$0::classInfo$.name)) {
			return Scope$$Lambda$lambda$includes$0::load$(name, initialize);
		}
	}
	$loadClass(Scope, name, initialize, &_Scope_ClassInfo_, clinit$Scope, allocate$Scope);
	return class$;
}

$Class* Scope::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com