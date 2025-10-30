#include <com/sun/tools/javac/code/Scope$NamedImportScope.h>

#include <com/sun/tools/javac/code/Scope$CompoundScope.h>
#include <com/sun/tools/javac/code/Scope$FilterImportScope.h>
#include <com/sun/tools/javac/code/Scope$ImportFilter.h>
#include <com/sun/tools/javac/code/Scope$ImportScope.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$NamedImportScope$SingleEntryScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/tree/JCTree$JCImport.h>
#include <com/sun/tools/javac/util/Iterators.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $ScopeArray = $Array<::com::sun::tools::javac::code::Scope>;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$CompoundScope = ::com::sun::tools::javac::code::Scope$CompoundScope;
using $Scope$FilterImportScope = ::com::sun::tools::javac::code::Scope$FilterImportScope;
using $Scope$ImportFilter = ::com::sun::tools::javac::code::Scope$ImportFilter;
using $Scope$ImportScope = ::com::sun::tools::javac::code::Scope$ImportScope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$NamedImportScope$SingleEntryScope = ::com::sun::tools::javac::code::Scope$NamedImportScope$SingleEntryScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Types = ::com::sun::tools::javac::code::Types;
using $JCTree$JCImport = ::com::sun::tools::javac::tree::JCTree$JCImport;
using $Iterators = ::com::sun::tools::javac::util::Iterators;
using $Name = ::com::sun::tools::javac::util::Name;
using $Serializable = ::java::io::Serializable;
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
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $BiConsumer = ::java::util::function::BiConsumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$1 : public $Iterable {
	$class(Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$1, $NO_CLASS_INIT, $Iterable)
public:
	void init$($ScopeArray* scopes, $Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
		$set(this, scopes, scopes);
		$set(this, name, name);
		$set(this, sf, sf);
		$set(this, lookupKind, lookupKind);
	}
	virtual $Iterator* iterator() override {
		 return Scope$NamedImportScope::lambda$getSymbolsByName$1(scopes, name, sf, lookupKind);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$1>());
	}
	$ScopeArray* scopes = nullptr;
	$Name* name = nullptr;
	$Predicate* sf = nullptr;
	$Scope$LookupKind* lookupKind = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$1::fieldInfos[5] = {
	{"scopes", "[Lcom/sun/tools/javac/code/Scope;", nullptr, $PUBLIC, $field(Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$1, scopes)},
	{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$1, name)},
	{"sf", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$1, sf)},
	{"lookupKind", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC, $field(Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$1, lookupKind)},
	{}
};
$MethodInfo Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$1::methodInfos[3] = {
	{"<init>", "([Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)V", nullptr, $PUBLIC, $method(static_cast<void(Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$1::*)($ScopeArray*,$Name*,$Predicate*,$Scope$LookupKind*)>(&Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$1::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$1",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$1::load$($String* name, bool initialize) {
	$loadClass(Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$1::class$ = nullptr;

class Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$0$1 : public $Function {
	$class(Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$0$1, $NO_CLASS_INIT, $Function)
public:
	void init$($Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
		$set(this, name, name);
		$set(this, sf, sf);
		$set(this, lookupKind, lookupKind);
	}
	virtual $Object* apply(Object$* scope) override {
		 return $of(Scope$NamedImportScope::lambda$getSymbolsByName$0(name, sf, lookupKind, $cast($Scope, scope)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$0$1>());
	}
	$Name* name = nullptr;
	$Predicate* sf = nullptr;
	$Scope$LookupKind* lookupKind = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$0$1::fieldInfos[4] = {
	{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$0$1, name)},
	{"sf", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$0$1, sf)},
	{"lookupKind", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC, $field(Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$0$1, lookupKind)},
	{}
};
$MethodInfo Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$0$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)V", nullptr, $PUBLIC, $method(static_cast<void(Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$0$1::*)($Name*,$Predicate*,$Scope$LookupKind*)>(&Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$0$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$0$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$0$1::load$($String* name, bool initialize) {
	$loadClass(Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$0$1::class$ = nullptr;

$FieldInfo _Scope$NamedImportScope_FieldInfo_[] = {
	{"name2Scopes", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/Name;[Lcom/sun/tools/javac/code/Scope;>;", $PRIVATE | $FINAL, $field(Scope$NamedImportScope, name2Scopes)},
	{}
};

$MethodInfo _Scope$NamedImportScope_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Scope$NamedImportScope::*)($Symbol*)>(&Scope$NamedImportScope::init$))},
	{"appendScope", "(Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Scope;", nullptr, $PRIVATE, $method(static_cast<$Scope*(Scope$NamedImportScope::*)($Scope*,$Name*)>(&Scope$NamedImportScope::appendScope))},
	{"finalizeScope", "()V", nullptr, $PUBLIC},
	{"getSymbolsByName", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC},
	{"importByName", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Scope$ImportFilter;Lcom/sun/tools/javac/tree/JCTree$JCImport;Ljava/util/function/BiConsumer;)Lcom/sun/tools/javac/code/Scope;", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Scope$ImportFilter;Lcom/sun/tools/javac/tree/JCTree$JCImport;Ljava/util/function/BiConsumer<Lcom/sun/tools/javac/tree/JCTree$JCImport;Lcom/sun/tools/javac/code/Symbol$CompletionFailure;>;)Lcom/sun/tools/javac/code/Scope;", $PUBLIC},
	{"importType", "(Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope;", nullptr, $PUBLIC},
	{"lambda$getSymbolsByName$0", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;Lcom/sun/tools/javac/code/Scope;)Ljava/util/Iterator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Iterator*(*)($Name*,$Predicate*,$Scope$LookupKind*,$Scope*)>(&Scope$NamedImportScope::lambda$getSymbolsByName$0))},
	{"lambda$getSymbolsByName$1", "([Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/util/Iterator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Iterator*(*)($ScopeArray*,$Name*,$Predicate*,$Scope$LookupKind*)>(&Scope$NamedImportScope::lambda$getSymbolsByName$1))},
	{}
};

$InnerClassInfo _Scope$NamedImportScope_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$NamedImportScope", "com.sun.tools.javac.code.Scope", "NamedImportScope", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Scope$ImportScope", "com.sun.tools.javac.code.Scope", "ImportScope", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Scope$NamedImportScope$SingleEntryScope", "com.sun.tools.javac.code.Scope$NamedImportScope", "SingleEntryScope", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Scope$NamedImportScope_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Scope$NamedImportScope",
	"com.sun.tools.javac.code.Scope$ImportScope",
	nullptr,
	_Scope$NamedImportScope_FieldInfo_,
	_Scope$NamedImportScope_MethodInfo_,
	nullptr,
	nullptr,
	_Scope$NamedImportScope_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope"
};

$Object* allocate$Scope$NamedImportScope($Class* clazz) {
	return $of($alloc(Scope$NamedImportScope));
}

void Scope$NamedImportScope::init$($Symbol* owner) {
	$Scope$ImportScope::init$(owner);
	$set(this, name2Scopes, $new($HashMap));
}

$Scope* Scope$NamedImportScope::importByName($Types* types, $Scope* origin, $Name* name, $Scope$ImportFilter* filter, $JCTree$JCImport* imp, $BiConsumer* cfHandler) {
	return appendScope($$new($Scope$FilterImportScope, types, origin, name, filter, imp, cfHandler), name);
}

$Scope* Scope$NamedImportScope::importType($Scope* delegate, $Scope* origin, $Symbol* sym) {
	return appendScope($$new($Scope$NamedImportScope$SingleEntryScope, $nc(delegate)->owner, sym, origin), $nc(sym)->name);
}

$Scope* Scope$NamedImportScope::appendScope($Scope* newScope, $Name* name) {
	appendSubScope(newScope);
	$var($ScopeArray, existing, $cast($ScopeArray, $nc(this->name2Scopes)->get(name)));
	if (existing != nullptr) {
		$assign(existing, $fcast($ScopeArray, $Arrays::copyOf(existing, existing->length + 1)));
	} else {
		$assign(existing, $new($ScopeArray, 1));
	}
	$nc(existing)->set(existing->length - 1, newScope);
	$nc(this->name2Scopes)->put(name, existing);
	return newScope;
}

$Iterable* Scope$NamedImportScope::getSymbolsByName($Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
	$var($ScopeArray, scopes, $cast($ScopeArray, $nc(this->name2Scopes)->get(name)));
	if (scopes == nullptr) {
		return $Collections::emptyList();
	}
	return static_cast<$Iterable*>($new(Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$1, scopes, name, sf, lookupKind));
}

void Scope$NamedImportScope::finalizeScope() {
	$useLocalCurrentObjectStackCache();
	$Scope$ImportScope::finalizeScope();
	{
		$var($Iterator, i$, $nc($($nc(this->name2Scopes)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ScopeArray, scopes, $cast($ScopeArray, i$->next()));
			{
				for (int32_t i = 0; i < $nc(scopes)->length; ++i) {
					scopes->set(i, $(finalizeSingleScope(scopes->get(i))));
				}
			}
		}
	}
}

$Iterator* Scope$NamedImportScope::lambda$getSymbolsByName$1($ScopeArray* scopes, $Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
	$init(Scope$NamedImportScope);
	$useLocalCurrentObjectStackCache();
	$var($Iterable, var$0, static_cast<$Iterable*>($Arrays::asList(scopes)));
	return $Iterators::createCompoundIterator(var$0, static_cast<$Function*>($$new(Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$0$1, name, sf, lookupKind)));
}

$Iterator* Scope$NamedImportScope::lambda$getSymbolsByName$0($Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind, $Scope* scope) {
	$init(Scope$NamedImportScope);
	return $nc($($nc(scope)->getSymbolsByName(name, sf, lookupKind)))->iterator();
}

Scope$NamedImportScope::Scope$NamedImportScope() {
}

$Class* Scope$NamedImportScope::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$1::classInfo$.name)) {
			return Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$1::load$(name, initialize);
		}
		if (name->equals(Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$0$1::classInfo$.name)) {
			return Scope$NamedImportScope$$Lambda$lambda$getSymbolsByName$0$1::load$(name, initialize);
		}
	}
	$loadClass(Scope$NamedImportScope, name, initialize, &_Scope$NamedImportScope_ClassInfo_, allocate$Scope$NamedImportScope);
	return class$;
}

$Class* Scope$NamedImportScope::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com