#include <com/sun/tools/javac/code/Scope$ScopeImpl.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$Entry.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$ScopeImpl$1.h>
#include <com/sun/tools/javac/code/Scope$ScopeImpl$2.h>
#include <com/sun/tools/javac/code/Scope$ScopeListenerList.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef INITIAL_SIZE
#undef NON_RECURSIVE

using $Scope$EntryArray = $Array<::com::sun::tools::javac::code::Scope$Entry>;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$Entry = ::com::sun::tools::javac::code::Scope$Entry;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$ScopeImpl$1 = ::com::sun::tools::javac::code::Scope$ScopeImpl$1;
using $Scope$ScopeImpl$2 = ::com::sun::tools::javac::code::Scope$ScopeImpl$2;
using $Scope$ScopeListenerList = ::com::sun::tools::javac::code::Scope$ScopeListenerList;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Assert = ::com::sun::tools::javac::util::Assert;
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
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Scope$ScopeImpl$$Lambda$lambda$remove$0 : public $Predicate {
	$class(Scope$ScopeImpl$$Lambda$lambda$remove$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Symbol* sym) {
		$set(this, sym, sym);
	}
	virtual bool test(Object$* candidate) override {
		 return Scope$ScopeImpl::lambda$remove$0(sym, $cast($Symbol, candidate));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Scope$ScopeImpl$$Lambda$lambda$remove$0>());
	}
	$Symbol* sym = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Scope$ScopeImpl$$Lambda$lambda$remove$0::fieldInfos[2] = {
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Scope$ScopeImpl$$Lambda$lambda$remove$0, sym)},
	{}
};
$MethodInfo Scope$ScopeImpl$$Lambda$lambda$remove$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Scope$ScopeImpl$$Lambda$lambda$remove$0::*)($Symbol*)>(&Scope$ScopeImpl$$Lambda$lambda$remove$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Scope$ScopeImpl$$Lambda$lambda$remove$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Scope$ScopeImpl$$Lambda$lambda$remove$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Scope$ScopeImpl$$Lambda$lambda$remove$0::load$($String* name, bool initialize) {
	$loadClass(Scope$ScopeImpl$$Lambda$lambda$remove$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Scope$ScopeImpl$$Lambda$lambda$remove$0::class$ = nullptr;

class Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1 : public $Iterable {
	$class(Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1, $NO_CLASS_INIT, $Iterable)
public:
	void init$(Scope$ScopeImpl* inst, $Scope$LookupKind* lookupKind, $Predicate* sf) {
		$set(this, inst$, inst);
		$set(this, lookupKind, lookupKind);
		$set(this, sf, sf);
	}
	virtual $Iterator* iterator() override {
		 return $nc(inst$)->lambda$getSymbols$1(lookupKind, sf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1>());
	}
	Scope$ScopeImpl* inst$ = nullptr;
	$Scope$LookupKind* lookupKind = nullptr;
	$Predicate* sf = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1, inst$)},
	{"lookupKind", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC, $field(Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1, lookupKind)},
	{"sf", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1, sf)},
	{}
};
$MethodInfo Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Scope$ScopeImpl;Lcom/sun/tools/javac/code/Scope$LookupKind;Ljava/util/function/Predicate;)V", nullptr, $PUBLIC, $method(static_cast<void(Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1::*)(Scope$ScopeImpl*,$Scope$LookupKind*,$Predicate*)>(&Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1::load$($String* name, bool initialize) {
	$loadClass(Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1::class$ = nullptr;

class Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2 : public $Iterable {
	$class(Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2, $NO_CLASS_INIT, $Iterable)
public:
	void init$(Scope$ScopeImpl* inst, $Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
		$set(this, inst$, inst);
		$set(this, name, name);
		$set(this, sf, sf);
		$set(this, lookupKind, lookupKind);
	}
	virtual $Iterator* iterator() override {
		 return $nc(inst$)->lambda$getSymbolsByName$2(name, sf, lookupKind);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2>());
	}
	Scope$ScopeImpl* inst$ = nullptr;
	$Name* name = nullptr;
	$Predicate* sf = nullptr;
	$Scope$LookupKind* lookupKind = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2::fieldInfos[5] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2, inst$)},
	{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2, name)},
	{"sf", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2, sf)},
	{"lookupKind", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC, $field(Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2, lookupKind)},
	{}
};
$MethodInfo Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Scope$ScopeImpl;Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)V", nullptr, $PUBLIC, $method(static_cast<void(Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2::*)(Scope$ScopeImpl*,$Name*,$Predicate*,$Scope$LookupKind*)>(&Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2::load$($String* name, bool initialize) {
	$loadClass(Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2::class$ = nullptr;

$FieldInfo _Scope$ScopeImpl_FieldInfo_[] = {
	{"shared", "I", nullptr, $PRIVATE, $field(Scope$ScopeImpl, shared)},
	{"next", "Lcom/sun/tools/javac/code/Scope$ScopeImpl;", nullptr, $PUBLIC, $field(Scope$ScopeImpl, next)},
	{"table", "[Lcom/sun/tools/javac/code/Scope$Entry;", nullptr, 0, $field(Scope$ScopeImpl, table)},
	{"hashMask", "I", nullptr, 0, $field(Scope$ScopeImpl, hashMask)},
	{"elems", "Lcom/sun/tools/javac/code/Scope$Entry;", nullptr, $PUBLIC, $field(Scope$ScopeImpl, elems)},
	{"nelems", "I", nullptr, 0, $field(Scope$ScopeImpl, nelems)},
	{"removeCount", "I", nullptr, 0, $field(Scope$ScopeImpl, removeCount)},
	{"sentinel", "Lcom/sun/tools/javac/code/Scope$Entry;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Scope$ScopeImpl, sentinel)},
	{"INITIAL_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Scope$ScopeImpl, INITIAL_SIZE)},
	{}
};

$MethodInfo _Scope$ScopeImpl_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Scope$ScopeImpl;Lcom/sun/tools/javac/code/Symbol;[Lcom/sun/tools/javac/code/Scope$Entry;)V", nullptr, $PRIVATE, $method(static_cast<void(Scope$ScopeImpl::*)(Scope$ScopeImpl*,$Symbol*,$Scope$EntryArray*)>(&Scope$ScopeImpl::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/Scope$ScopeImpl;Lcom/sun/tools/javac/code/Symbol;[Lcom/sun/tools/javac/code/Scope$Entry;I)V", nullptr, $PRIVATE, $method(static_cast<void(Scope$ScopeImpl::*)(Scope$ScopeImpl*,$Symbol*,$Scope$EntryArray*,int32_t)>(&Scope$ScopeImpl::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Scope$ScopeImpl::*)($Symbol*)>(&Scope$ScopeImpl::init$))},
	{"anyMatch", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;)Z", $PUBLIC},
	{"dble", "()V", nullptr, $PRIVATE, $method(static_cast<void(Scope$ScopeImpl::*)()>(&Scope$ScopeImpl::dble))},
	{"dup", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC},
	{"dupUnshared", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC},
	{"enter", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC},
	{"enterIfAbsent", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC},
	{"findFirst", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;)Lcom/sun/tools/javac/code/Symbol;", $PUBLIC},
	{"getIndex", "(Lcom/sun/tools/javac/util/Name;)I", nullptr, 0},
	{"getOrigin", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope;", nullptr, $PUBLIC},
	{"getSymbols", "(Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC},
	{"getSymbolsByName", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC},
	{"includes", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC},
	{"isStaticallyImported", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC},
	{"lambda$getSymbols$1", "(Lcom/sun/tools/javac/code/Scope$LookupKind;Ljava/util/function/Predicate;)Ljava/util/Iterator;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Iterator*(Scope$ScopeImpl::*)($Scope$LookupKind*,$Predicate*)>(&Scope$ScopeImpl::lambda$getSymbols$1))},
	{"lambda$getSymbolsByName$2", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/util/Iterator;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Iterator*(Scope$ScopeImpl::*)($Name*,$Predicate*,$Scope$LookupKind*)>(&Scope$ScopeImpl::lambda$getSymbolsByName$2))},
	{"lambda$remove$0", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol*,$Symbol*)>(&Scope$ScopeImpl::lambda$remove$0))},
	{"leave", "()Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC},
	{"lookup", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Scope$Entry;", nullptr, $PROTECTED},
	{"lookup", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;)Lcom/sun/tools/javac/code/Scope$Entry;", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;)Lcom/sun/tools/javac/code/Scope$Entry;", $PROTECTED},
	{"remove", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Scope$ScopeImpl_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$ScopeImpl", "com.sun.tools.javac.code.Scope", "ScopeImpl", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.code.Scope$WriteableScope", "com.sun.tools.javac.code.Scope", "WriteableScope", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Scope$ScopeImpl$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Scope$ScopeImpl$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Scope$ScopeImpl_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Scope$ScopeImpl",
	"com.sun.tools.javac.code.Scope$WriteableScope",
	nullptr,
	_Scope$ScopeImpl_FieldInfo_,
	_Scope$ScopeImpl_MethodInfo_,
	nullptr,
	nullptr,
	_Scope$ScopeImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope"
};

$Object* allocate$Scope$ScopeImpl($Class* clazz) {
	return $of($alloc(Scope$ScopeImpl));
}

$Scope$Entry* Scope$ScopeImpl::sentinel = nullptr;

void Scope$ScopeImpl::init$(Scope$ScopeImpl* next, $Symbol* owner, $Scope$EntryArray* table) {
	$Scope$WriteableScope::init$(owner);
	this->nelems = 0;
	this->removeCount = 0;
	$set(this, next, next);
	$Assert::check(owner != nullptr);
	$set(this, table, table);
	this->hashMask = $nc(table)->length - 1;
}

void Scope$ScopeImpl::init$(Scope$ScopeImpl* next, $Symbol* owner, $Scope$EntryArray* table, int32_t nelems) {
	Scope$ScopeImpl::init$(next, owner, table);
	this->nelems = nelems;
}

void Scope$ScopeImpl::init$($Symbol* owner) {
	Scope$ScopeImpl::init$(nullptr, owner, $$new($Scope$EntryArray, Scope$ScopeImpl::INITIAL_SIZE));
}

$Scope$WriteableScope* Scope$ScopeImpl::dup($Symbol* newOwner) {
	$var(Scope$ScopeImpl, result, $new(Scope$ScopeImpl, this, newOwner, this->table, this->nelems));
	++this->shared;
	return result;
}

$Scope$WriteableScope* Scope$ScopeImpl::dupUnshared($Symbol* newOwner) {
	$useLocalCurrentObjectStackCache();
	if (this->shared > 0) {
		$var($Set, acceptScopes, $Collections::newSetFromMap($$new($IdentityHashMap)));
		$var(Scope$ScopeImpl, c, this);
		while (c != nullptr) {
			$nc(acceptScopes)->add(c);
			$assign(c, c->next);
		}
		int32_t n = 0;
		$var($Scope$EntryArray, oldTable, this->table);
		$var($Scope$EntryArray, newTable, $new($Scope$EntryArray, $nc(this->table)->length));
		for (int32_t i = 0; i < $nc(oldTable)->length; ++i) {
			$var($Scope$Entry, e, oldTable->get(i));
			while (e != nullptr && e != Scope$ScopeImpl::sentinel && !$nc(acceptScopes)->contains(e->scope)) {
				$assign(e, e->shadowed);
			}
			if (e != nullptr) {
				++n;
				newTable->set(i, e);
			}
		}
		return $new(Scope$ScopeImpl, this, newOwner, newTable, n);
	} else {
		return $new(Scope$ScopeImpl, this, newOwner, $cast($Scope$EntryArray, $($nc(this->table)->clone())), this->nelems);
	}
}

$Scope$WriteableScope* Scope$ScopeImpl::leave() {
	$useLocalCurrentObjectStackCache();
	$Assert::check(this->shared == 0);
	if (this->table != $nc(this->next)->table) {
		return this->next;
	}
	while (this->elems != nullptr) {
		int32_t hash = getIndex($nc($nc(this->elems)->sym)->name);
		$var($Scope$Entry, e, $nc(this->table)->get(hash));
		$Assert::check(e == this->elems, $of($nc(this->elems)->sym));
		$nc(this->table)->set(hash, $nc(this->elems)->shadowed);
		$set(this, elems, $nc(this->elems)->nextSibling);
	}
	$Assert::check($nc(this->next)->shared > 0);
	--$nc(this->next)->shared;
	$nc(this->next)->nelems = this->nelems;
	return this->next;
}

void Scope$ScopeImpl::dble() {
	$useLocalCurrentObjectStackCache();
	$Assert::check(this->shared == 0);
	$var($Scope$EntryArray, oldtable, this->table);
	$var($Scope$EntryArray, newtable, $new($Scope$EntryArray, $nc(oldtable)->length * 2));
	{
		$var(Scope$ScopeImpl, s, this);
		for (; s != nullptr; $assign(s, s->next)) {
			if ($nc(s)->table == oldtable) {
				$Assert::check(s == this || s->shared != 0);
				$set(s, table, newtable);
				s->hashMask = newtable->length - 1;
			}
		}
	}
	int32_t n = 0;
	for (int32_t i = oldtable->length; --i >= 0;) {
		$var($Scope$Entry, e, oldtable->get(i));
		if (e != nullptr && e != Scope$ScopeImpl::sentinel) {
			$nc(this->table)->set(getIndex($nc(e->sym)->name), e);
			++n;
		}
	}
	this->nelems = n;
}

void Scope$ScopeImpl::enter($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$Assert::check(this->shared == 0);
	if (this->nelems * 3 >= this->hashMask * 2) {
		dble();
	}
	int32_t hash = getIndex($nc(sym)->name);
	$var($Scope$Entry, old, $nc(this->table)->get(hash));
	if (old == nullptr) {
		$assign(old, Scope$ScopeImpl::sentinel);
		++this->nelems;
	}
	$var($Scope$Entry, e, $new($Scope$Entry, sym, old, this->elems, this));
	$nc(this->table)->set(hash, e);
	$set(this, elems, e);
	$nc(this->listeners)->symbolAdded(sym, this);
}

void Scope$ScopeImpl::remove($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$Assert::check(this->shared == 0);
	$var($Scope$Entry, e, lookup($nc(sym)->name, static_cast<$Predicate*>($$new(Scope$ScopeImpl$$Lambda$lambda$remove$0, sym))));
	if ($nc(e)->scope == nullptr) {
		return;
	}
	int32_t i = getIndex($nc(sym)->name);
	$var($Scope$Entry, te, $nc(this->table)->get(i));
	if (te == e) {
		$nc(this->table)->set(i, $nc(e)->shadowed);
	} else {
		while (true) {
			if ($nc(te)->shadowed == e) {
				$set(te, shadowed, $nc(e)->shadowed);
				break;
			}
			$assign(te, $nc(te)->shadowed);
		}
	}
	if (this->elems == e) {
		$set(this, elems, $nc(e)->nextSibling);
		if (this->elems != nullptr) {
			$set($nc(this->elems), prevSibling, nullptr);
		}
	} else {
		$Assert::check($nc(e)->prevSibling != nullptr, $of(e->sym));
		$set($nc($nc(e)->prevSibling), nextSibling, e->nextSibling);
		if (e->nextSibling != nullptr) {
			$set($nc(e->nextSibling), prevSibling, e->prevSibling);
		}
	}
	++this->removeCount;
	$nc(this->listeners)->symbolRemoved(sym, this);
}

void Scope$ScopeImpl::enterIfAbsent($Symbol* sym) {
	$Assert::check(this->shared == 0);
	$var($Scope$Entry, e, lookup($nc(sym)->name));
	while ($nc(e)->scope == this && $nc(e->sym)->kind != $nc(sym)->kind) {
		$assign(e, e->next());
	}
	if ($nc(e)->scope != this) {
		enter(sym);
	}
}

bool Scope$ScopeImpl::includes($Symbol* c) {
	{
		$var($Scope$Entry, e, lookup($nc(c)->name));
		for (; $nc(e)->scope == this; $assign(e, $nc(e)->next())) {
			if (e->sym == c) {
				return true;
			}
		}
	}
	return false;
}

$Scope$Entry* Scope$ScopeImpl::lookup($Name* name) {
	$init($Scope);
	return lookup(name, $Scope::noFilter);
}

$Scope$Entry* Scope$ScopeImpl::lookup($Name* name, $Predicate* sf) {
	$var($Scope$Entry, e, $nc(this->table)->get(getIndex(name)));
	if (e == nullptr || e == Scope$ScopeImpl::sentinel) {
		return Scope$ScopeImpl::sentinel;
	}
	while ($nc(e)->scope != nullptr && ($nc(e->sym)->name != name || (sf != nullptr && !sf->test($nc(e)->sym)))) {
		$assign(e, $nc(e)->shadowed);
	}
	return e;
}

$Symbol* Scope$ScopeImpl::findFirst($Name* name, $Predicate* sf) {
	return $nc($(lookup(name, sf)))->sym;
}

int32_t Scope$ScopeImpl::getIndex($Name* name) {
	$useLocalCurrentObjectStackCache();
	int32_t h = $nc($of(name))->hashCode();
	int32_t i = (int32_t)(h & (uint32_t)this->hashMask);
	int32_t x = this->hashMask - ((h + (h >> 16)) << 1);
	int32_t d = -1;
	for (;;) {
		$var($Scope$Entry, e, $nc(this->table)->get(i));
		if (e == nullptr) {
			return d >= 0 ? d : i;
		}
		if (e == Scope$ScopeImpl::sentinel) {
			if (d < 0) {
				d = i;
			}
		} else if ($nc($nc(e)->sym)->name == name) {
			return i;
		}
		i = (int32_t)((i + x) & (uint32_t)this->hashMask);
	}
}

bool Scope$ScopeImpl::anyMatch($Predicate* sf) {
	$useLocalCurrentObjectStackCache();
	$init($Scope$LookupKind);
	return $nc($($nc($(getSymbols(sf, $Scope$LookupKind::NON_RECURSIVE)))->iterator()))->hasNext();
}

$Iterable* Scope$ScopeImpl::getSymbols($Predicate* sf, $Scope$LookupKind* lookupKind) {
	return static_cast<$Iterable*>($new(Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1, this, lookupKind, sf));
}

$Iterable* Scope$ScopeImpl::getSymbolsByName($Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
	return static_cast<$Iterable*>($new(Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2, this, name, sf, lookupKind));
}

$Scope* Scope$ScopeImpl::getOrigin($Symbol* s) {
	{
		$var($Scope$Entry, e, lookup($nc(s)->name));
		for (; $nc(e)->scope != nullptr; $assign(e, $nc(e)->next())) {
			if (e->sym == s) {
				return this;
			}
		}
	}
	return nullptr;
}

bool Scope$ScopeImpl::isStaticallyImported($Symbol* s) {
	return false;
}

$String* Scope$ScopeImpl::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, result, $new($StringBuilder));
	result->append("Scope["_s);
	{
		$var(Scope$ScopeImpl, s, this);
		for (; s != nullptr; $assign(s, s->next)) {
			if (s != this) {
				result->append(" | "_s);
			}
			{
				$var($Scope$Entry, e, $nc(s)->elems);
				for (; e != nullptr; $assign(e, $nc(e)->nextSibling)) {
					if (e != s->elems) {
						result->append(", "_s);
					}
					result->append($of(e->sym));
				}
			}
		}
	}
	result->append("]"_s);
	return result->toString();
}

$Iterator* Scope$ScopeImpl::lambda$getSymbolsByName$2($Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
	return $new($Scope$ScopeImpl$2, this, name, sf, lookupKind);
}

$Iterator* Scope$ScopeImpl::lambda$getSymbols$1($Scope$LookupKind* lookupKind, $Predicate* sf) {
	return $new($Scope$ScopeImpl$1, this, lookupKind, sf);
}

bool Scope$ScopeImpl::lambda$remove$0($Symbol* sym, $Symbol* candidate) {
	$init(Scope$ScopeImpl);
	return candidate == sym;
}

void clinit$Scope$ScopeImpl($Class* class$) {
	$assignStatic(Scope$ScopeImpl::sentinel, $new($Scope$Entry, nullptr, nullptr, nullptr, nullptr));
}

Scope$ScopeImpl::Scope$ScopeImpl() {
}

$Class* Scope$ScopeImpl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Scope$ScopeImpl$$Lambda$lambda$remove$0::classInfo$.name)) {
			return Scope$ScopeImpl$$Lambda$lambda$remove$0::load$(name, initialize);
		}
		if (name->equals(Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1::classInfo$.name)) {
			return Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1::load$(name, initialize);
		}
		if (name->equals(Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2::classInfo$.name)) {
			return Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2::load$(name, initialize);
		}
	}
	$loadClass(Scope$ScopeImpl, name, initialize, &_Scope$ScopeImpl_ClassInfo_, clinit$Scope$ScopeImpl, allocate$Scope$ScopeImpl);
	return class$;
}

$Class* Scope$ScopeImpl::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com