#include <com/sun/tools/javac/code/Scope$ErrorScope.h>

#include <com/sun/tools/javac/code/Scope$Entry.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$ScopeImpl.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/Iterable.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $Scope$EntryArray = $Array<::com::sun::tools::javac::code::Scope$Entry>;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$Entry = ::com::sun::tools::javac::code::Scope$Entry;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$ScopeImpl = ::com::sun::tools::javac::code::Scope$ScopeImpl;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Scope$ErrorScope_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Scope$ScopeImpl;Lcom/sun/tools/javac/code/Symbol;[Lcom/sun/tools/javac/code/Scope$Entry;)V", nullptr, 0, $method(static_cast<void(Scope$ErrorScope::*)($Scope$ScopeImpl*,$Symbol*,$Scope$EntryArray*)>(&Scope$ErrorScope::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Scope$ErrorScope::*)($Symbol*)>(&Scope$ErrorScope::init$))},
	{"anyMatch", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dup", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC},
	{"dupUnshared", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC},
	{"enter", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"enterIfAbsent", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"findFirst", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getOrigin", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getSymbols", "(Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getSymbolsByName", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"includes", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isStaticallyImported", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"leave", "()Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"lookup", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Scope$Entry;", nullptr, $PUBLIC},
	{"remove", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Scope$ErrorScope_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$ErrorScope", "com.sun.tools.javac.code.Scope", "ErrorScope", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Scope$ScopeImpl", "com.sun.tools.javac.code.Scope", "ScopeImpl", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Scope$ErrorScope_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Scope$ErrorScope",
	"com.sun.tools.javac.code.Scope$ScopeImpl",
	nullptr,
	nullptr,
	_Scope$ErrorScope_MethodInfo_,
	nullptr,
	nullptr,
	_Scope$ErrorScope_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope"
};

$Object* allocate$Scope$ErrorScope($Class* clazz) {
	return $of($alloc(Scope$ErrorScope));
}

void Scope$ErrorScope::init$($Scope$ScopeImpl* next, $Symbol* errSymbol, $Scope$EntryArray* table) {
	$Scope$ScopeImpl::init$(next, errSymbol, table);
}

void Scope$ErrorScope::init$($Symbol* errSymbol) {
	$Scope$ScopeImpl::init$(errSymbol);
}

$Scope$WriteableScope* Scope$ErrorScope::dup($Symbol* newOwner) {
	return $new(Scope$ErrorScope, this, newOwner, this->table);
}

$Scope$WriteableScope* Scope$ErrorScope::dupUnshared($Symbol* newOwner) {
	return $new(Scope$ErrorScope, this, newOwner, $cast($Scope$EntryArray, $($nc(this->table)->clone())));
}

$Scope$Entry* Scope$ErrorScope::lookup($Name* name) {
	$var($Scope$Entry, e, $Scope$ScopeImpl::lookup(name));
	if ($nc(e)->scope == nullptr) {
		return $new($Scope$Entry, this->owner, nullptr, nullptr, nullptr);
	} else {
		return e;
	}
}

$String* Scope$ErrorScope::toString() {
	return $Scope$ScopeImpl::toString();
}

bool Scope$ErrorScope::isStaticallyImported($Symbol* s) {
	return $Scope$ScopeImpl::isStaticallyImported(s);
}

$Scope* Scope$ErrorScope::getOrigin($Symbol* s) {
	return $Scope$ScopeImpl::getOrigin(s);
}

$Iterable* Scope$ErrorScope::getSymbolsByName($Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
	return $Scope$ScopeImpl::getSymbolsByName(name, sf, lookupKind);
}

$Iterable* Scope$ErrorScope::getSymbols($Predicate* sf, $Scope$LookupKind* lookupKind) {
	return $Scope$ScopeImpl::getSymbols(sf, lookupKind);
}

bool Scope$ErrorScope::anyMatch($Predicate* sf) {
	return $Scope$ScopeImpl::anyMatch(sf);
}

$Symbol* Scope$ErrorScope::findFirst($Name* name, $Predicate* sf) {
	return $Scope$ScopeImpl::findFirst(name, sf);
}

bool Scope$ErrorScope::includes($Symbol* c) {
	return $Scope$ScopeImpl::includes(c);
}

void Scope$ErrorScope::enterIfAbsent($Symbol* sym) {
	$Scope$ScopeImpl::enterIfAbsent(sym);
}

void Scope$ErrorScope::remove($Symbol* sym) {
	$Scope$ScopeImpl::remove(sym);
}

void Scope$ErrorScope::enter($Symbol* sym) {
	$Scope$ScopeImpl::enter(sym);
}

$Scope$WriteableScope* Scope$ErrorScope::leave() {
	return $Scope$ScopeImpl::leave();
}

Scope$ErrorScope::Scope$ErrorScope() {
}

$Class* Scope$ErrorScope::load$($String* name, bool initialize) {
	$loadClass(Scope$ErrorScope, name, initialize, &_Scope$ErrorScope_ClassInfo_, allocate$Scope$ErrorScope);
	return class$;
}

$Class* Scope$ErrorScope::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com