#include <com/sun/tools/javac/code/Types$ImplementationCache.h>

#include <com/sun/tools/javac/code/Scope$CompoundScope.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$ImplementationCache$Entry.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/Iterable.h>
#include <java/lang/ref/SoftReference.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef CLASS
#undef TYPEVAR

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$CompoundScope = ::com::sun::tools::javac::code::Scope$CompoundScope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$ImplementationCache$Entry = ::com::sun::tools::javac::code::Types$ImplementationCache$Entry;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$ImplementationCache_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$ImplementationCache, this$0)},
	{"_map", "Ljava/util/WeakHashMap;", "Ljava/util/WeakHashMap<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Ljava/lang/ref/SoftReference<Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Types$ImplementationCache$Entry;>;>;>;", $PRIVATE, $field(Types$ImplementationCache, _map)},
	{}
};

$MethodInfo _Types$ImplementationCache_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$ImplementationCache::*)($Types*)>(&Types$ImplementationCache::init$))},
	{"get", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;ZLjava/util/function/Predicate;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;ZLjava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", 0},
	{"implementationInternal", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;ZLjava/util/function/Predicate;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;ZLjava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", $PRIVATE, $method(static_cast<$Symbol$MethodSymbol*(Types$ImplementationCache::*)($Symbol$MethodSymbol*,$Symbol$TypeSymbol*,bool,$Predicate*)>(&Types$ImplementationCache::implementationInternal))},
	{}
};

$InnerClassInfo _Types$ImplementationCache_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$ImplementationCache", "com.sun.tools.javac.code.Types", "ImplementationCache", 0},
	{"com.sun.tools.javac.code.Types$ImplementationCache$Entry", "com.sun.tools.javac.code.Types$ImplementationCache", "Entry", 0},
	{}
};

$ClassInfo _Types$ImplementationCache_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$ImplementationCache",
	"java.lang.Object",
	nullptr,
	_Types$ImplementationCache_FieldInfo_,
	_Types$ImplementationCache_MethodInfo_,
	nullptr,
	nullptr,
	_Types$ImplementationCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$ImplementationCache($Class* clazz) {
	return $of($alloc(Types$ImplementationCache));
}

void Types$ImplementationCache::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$set(this, _map, $new($WeakHashMap));
}

$Symbol$MethodSymbol* Types$ImplementationCache::get($Symbol$MethodSymbol* ms, $Symbol$TypeSymbol* origin, bool checkResult, $Predicate* implFilter) {
	$useLocalCurrentObjectStackCache();
	$var($SoftReference, ref_cache, $cast($SoftReference, $nc(this->_map)->get(ms)));
	$var($Map, cache, ref_cache != nullptr ? $cast($Map, $nc(ref_cache)->get()) : ($Map*)nullptr);
	if (cache == nullptr) {
		$assign(cache, $new($HashMap));
		$nc(this->_map)->put(ms, $$new($SoftReference, cache));
	}
	$var($Types$ImplementationCache$Entry, e, $cast($Types$ImplementationCache$Entry, $nc(cache)->get(origin)));
	$var($Scope$CompoundScope, members, this->this$0->membersClosure($nc(origin)->type, true));
	if (e == nullptr || !$nc(e)->matches(implFilter, checkResult, $nc(members)->getMark())) {
		$var($Symbol$MethodSymbol, impl, implementationInternal(ms, origin, checkResult, implFilter));
		cache->put(origin, $$new($Types$ImplementationCache$Entry, this, impl, implFilter, checkResult, $nc(members)->getMark()));
		return impl;
	} else {
		return e->cachedImpl;
	}
}

$Symbol$MethodSymbol* Types$ImplementationCache::implementationInternal($Symbol$MethodSymbol* ms, $Symbol$TypeSymbol* origin, bool checkResult, $Predicate* implFilter) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Type, t, $nc(origin)->type);
		for (;; $assign(t, this->this$0->supertype(t))) {
			$init($TypeTag);
			bool var$0 = $nc(t)->hasTag($TypeTag::CLASS);
			if (!(var$0 || $nc(t)->hasTag($TypeTag::TYPEVAR))) {
				break;
			}
			{
				$assign(t, this->this$0->skipTypeVars(t, false));
				$var($Symbol$TypeSymbol, c, $nc(t)->tsym);
				$var($Symbol, bestSoFar, nullptr);
				{
					$var($Iterator, i$, $nc($($nc($($nc(c)->members()))->getSymbolsByName($nc(ms)->name, implFilter)))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol, sym, $cast($Symbol, i$->next()));
						{
							if (sym != nullptr && sym->overrides(ms, origin, this->this$0, checkResult)) {
								$assign(bestSoFar, sym);
								if (((int64_t)(sym->flags() & (uint64_t)(int64_t)1024)) == 0) {
									break;
								}
							}
						}
					}
				}
				if (bestSoFar != nullptr) {
					return $cast($Symbol$MethodSymbol, bestSoFar);
				}
			}
		}
	}
	return nullptr;
}

Types$ImplementationCache::Types$ImplementationCache() {
}

$Class* Types$ImplementationCache::load$($String* name, bool initialize) {
	$loadClass(Types$ImplementationCache, name, initialize, &_Types$ImplementationCache_ClassInfo_, allocate$Types$ImplementationCache);
	return class$;
}

$Class* Types$ImplementationCache::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com