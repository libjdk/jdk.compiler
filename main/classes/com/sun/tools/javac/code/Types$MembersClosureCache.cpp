#include <com/sun/tools/javac/code/Types$MembersClosureCache.h>

#include <com/sun/tools/javac/code/Scope$CompoundScope.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$CompoundScope = ::com::sun::tools::javac::code::Scope$CompoundScope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $Types$SimpleVisitor = ::com::sun::tools::javac::code::Types$SimpleVisitor;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$MembersClosureCache_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$MembersClosureCache, this$0)},
	{"_map", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Scope$CompoundScope;>;", $PRIVATE, $field(Types$MembersClosureCache, _map)},
	{"seenTypes", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;>;", 0, $field(Types$MembersClosureCache, seenTypes)},
	{"nilScope", "Lcom/sun/tools/javac/code/Scope$CompoundScope;", nullptr, 0, $field(Types$MembersClosureCache, nilScope)},
	{}
};

$MethodInfo _Types$MembersClosureCache_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$MembersClosureCache::*)($Types*)>(&Types$MembersClosureCache::init$))},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Scope$CompoundScope;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Scope$CompoundScope;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Scope$CompoundScope;", nullptr, $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Types$MembersClosureCache_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$MembersClosureCache", "com.sun.tools.javac.code.Types", "MembersClosureCache", 0},
	{"com.sun.tools.javac.code.Types$SimpleVisitor", "com.sun.tools.javac.code.Types", "SimpleVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Types$MembersClosureCache$MembersScope", "com.sun.tools.javac.code.Types$MembersClosureCache", "MembersScope", 0},
	{"com.sun.tools.javac.code.Scope$CompoundScope", "com.sun.tools.javac.code.Scope", "CompoundScope", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Types$MembersClosureCache_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$MembersClosureCache",
	"com.sun.tools.javac.code.Types$SimpleVisitor",
	nullptr,
	_Types$MembersClosureCache_FieldInfo_,
	_Types$MembersClosureCache_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$SimpleVisitor<Lcom/sun/tools/javac/code/Scope$CompoundScope;Ljava/lang/Void;>;",
	nullptr,
	_Types$MembersClosureCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$MembersClosureCache($Class* clazz) {
	return $of($alloc(Types$MembersClosureCache));
}

void Types$MembersClosureCache::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$SimpleVisitor::init$();
	$set(this, _map, $new($HashMap));
	$set(this, seenTypes, $new($HashSet));
}

$Scope$CompoundScope* Types$MembersClosureCache::visitType($Type* t, $Void* _unused) {
	if (this->nilScope == nullptr) {
		$set(this, nilScope, $new($Scope$CompoundScope, $nc(this->this$0->syms)->noSymbol));
	}
	return this->nilScope;
}

$Scope$CompoundScope* Types$MembersClosureCache::visitClassType($Type$ClassType* t, $Void* _unused) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->seenTypes)->add($nc(t)->tsym)) {
		return $new($Scope$CompoundScope, $nc(t)->tsym);
	}
	{
		$var($Throwable, var$0, nullptr);
		$var($Scope$CompoundScope, var$2, nullptr);
		bool return$1 = false;
		try {
			$nc(this->seenTypes)->add($nc(t)->tsym);
			$var($Symbol$ClassSymbol, csym, $cast($Symbol$ClassSymbol, $nc(t)->tsym));
			$var($Scope$CompoundScope, membersClosure, $cast($Scope$CompoundScope, $nc(this->_map)->get(csym)));
			if (membersClosure == nullptr) {
				$assign(membersClosure, $new($Scope$CompoundScope, csym));
				{
					$var($Iterator, i$, $nc($(this->this$0->interfaces(t)))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Type, i, $cast($Type, i$->next()));
						{
							membersClosure->prependSubScope($cast($Scope, $(visit(i, nullptr))));
						}
					}
				}
				membersClosure->prependSubScope($cast($Scope, $(visit($(this->this$0->supertype(t)), nullptr))));
				membersClosure->prependSubScope($($nc(csym)->members()));
				$nc(this->_map)->put(csym, membersClosure);
			}
			$assign(var$2, membersClosure);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->seenTypes)->remove($nc(t)->tsym);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Scope$CompoundScope* Types$MembersClosureCache::visitTypeVar($Type$TypeVar* t, $Void* _unused) {
	return $cast($Scope$CompoundScope, visit($($nc(t)->getUpperBound()), nullptr));
}

$Object* Types$MembersClosureCache::visitTypeVar($Type$TypeVar* t, Object$* _unused) {
	return $of(this->visitTypeVar(t, $cast($Void, _unused)));
}

$Object* Types$MembersClosureCache::visitClassType($Type$ClassType* t, Object$* _unused) {
	return $of(this->visitClassType(t, $cast($Void, _unused)));
}

$Object* Types$MembersClosureCache::visitType($Type* t, Object$* _unused) {
	return $of(this->visitType(t, $cast($Void, _unused)));
}

Types$MembersClosureCache::Types$MembersClosureCache() {
}

$Class* Types$MembersClosureCache::load$($String* name, bool initialize) {
	$loadClass(Types$MembersClosureCache, name, initialize, &_Types$MembersClosureCache_ClassInfo_, allocate$Types$MembersClosureCache);
	return class$;
}

$Class* Types$MembersClosureCache::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com