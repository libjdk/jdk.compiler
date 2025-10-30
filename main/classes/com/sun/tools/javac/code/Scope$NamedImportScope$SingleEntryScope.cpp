#include <com/sun/tools/javac/code/Scope$NamedImportScope$SingleEntryScope.h>

#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$NamedImportScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$NamedImportScope = ::com::sun::tools::javac::code::Scope$NamedImportScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $1List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Scope$NamedImportScope$SingleEntryScope_FieldInfo_[] = {
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE | $FINAL, $field(Scope$NamedImportScope$SingleEntryScope, sym)},
	{"content", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE | $FINAL, $field(Scope$NamedImportScope$SingleEntryScope, content)},
	{"origin", "Lcom/sun/tools/javac/code/Scope;", nullptr, $PRIVATE | $FINAL, $field(Scope$NamedImportScope$SingleEntryScope, origin)},
	{}
};

$MethodInfo _Scope$NamedImportScope$SingleEntryScope_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope;)V", nullptr, $PUBLIC, $method(static_cast<void(Scope$NamedImportScope$SingleEntryScope::*)($Symbol*,$Symbol*,$Scope*)>(&Scope$NamedImportScope$SingleEntryScope::init$))},
	{"getOrigin", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope;", nullptr, $PUBLIC},
	{"getSymbols", "(Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC},
	{"getSymbolsByName", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC},
	{"isStaticallyImported", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Scope$NamedImportScope$SingleEntryScope_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$NamedImportScope", "com.sun.tools.javac.code.Scope", "NamedImportScope", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Scope$NamedImportScope$SingleEntryScope", "com.sun.tools.javac.code.Scope$NamedImportScope", "SingleEntryScope", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Scope$NamedImportScope$SingleEntryScope_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Scope$NamedImportScope$SingleEntryScope",
	"com.sun.tools.javac.code.Scope",
	nullptr,
	_Scope$NamedImportScope$SingleEntryScope_FieldInfo_,
	_Scope$NamedImportScope$SingleEntryScope_MethodInfo_,
	nullptr,
	nullptr,
	_Scope$NamedImportScope$SingleEntryScope_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope"
};

$Object* allocate$Scope$NamedImportScope$SingleEntryScope($Class* clazz) {
	return $of($alloc(Scope$NamedImportScope$SingleEntryScope));
}

void Scope$NamedImportScope$SingleEntryScope::init$($Symbol* owner, $Symbol* sym, $Scope* origin) {
	$Scope::init$(owner);
	$set(this, sym, sym);
	$set(this, content, $1List::of(sym));
	$set(this, origin, origin);
}

$Iterable* Scope$NamedImportScope$SingleEntryScope::getSymbols($Predicate* sf, $Scope$LookupKind* lookupKind) {
	return sf == nullptr || $nc(sf)->test(this->sym) ? static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(this->content))) : static_cast<$Iterable*>($Collections::emptyList());
}

$Iterable* Scope$NamedImportScope$SingleEntryScope::getSymbolsByName($Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
	return $nc(this->sym)->name == name && (sf == nullptr || $nc(sf)->test(this->sym)) ? static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(this->content))) : static_cast<$Iterable*>($Collections::emptyList());
}

$Scope* Scope$NamedImportScope$SingleEntryScope::getOrigin($Symbol* byName) {
	return this->sym == byName ? this->origin : ($Scope*)nullptr;
}

bool Scope$NamedImportScope$SingleEntryScope::isStaticallyImported($Symbol* byName) {
	return false;
}

Scope$NamedImportScope$SingleEntryScope::Scope$NamedImportScope$SingleEntryScope() {
}

$Class* Scope$NamedImportScope$SingleEntryScope::load$($String* name, bool initialize) {
	$loadClass(Scope$NamedImportScope$SingleEntryScope, name, initialize, &_Scope$NamedImportScope$SingleEntryScope_ClassInfo_, allocate$Scope$NamedImportScope$SingleEntryScope);
	return class$;
}

$Class* Scope$NamedImportScope$SingleEntryScope::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com