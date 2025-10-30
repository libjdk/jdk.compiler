#include <com/sun/tools/javac/code/Types$DescriptorCache.h>

#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/Scope$CompoundScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$DescriptorCache$1.h>
#include <com/sun/tools/javac/code/Types$DescriptorCache$Entry.h>
#include <com/sun/tools/javac/code/Types$DescriptorCache$FunctionDescriptor.h>
#include <com/sun/tools/javac/code/Types$DescriptorFilter.h>
#include <com/sun/tools/javac/code/Types$FunctionDescriptorLookupError.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic$MultilineDiagnostic.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Optional.h>
#include <java/util/WeakHashMap.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$CompoundScope = ::com::sun::tools::javac::code::Scope$CompoundScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$DescriptorCache$1 = ::com::sun::tools::javac::code::Types$DescriptorCache$1;
using $Types$DescriptorCache$Entry = ::com::sun::tools::javac::code::Types$DescriptorCache$Entry;
using $Types$DescriptorCache$FunctionDescriptor = ::com::sun::tools::javac::code::Types$DescriptorCache$FunctionDescriptor;
using $Types$DescriptorFilter = ::com::sun::tools::javac::code::Types$DescriptorFilter;
using $Types$FunctionDescriptorLookupError = ::com::sun::tools::javac::code::Types$FunctionDescriptorLookupError;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $JCDiagnostic$MultilineDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic$MultilineDiagnostic;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Optional = ::java::util::Optional;
using $WeakHashMap = ::java::util::WeakHashMap;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$0 : public $Predicate {
	$class(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Types$DescriptorCache* inst, $Symbol* sym) {
		$set(this, inst$, inst);
		$set(this, sym, sym);
	}
	virtual bool test(Object$* msym) override {
		 return $nc(inst$)->lambda$findDescriptorInternal$0(sym, $cast($Symbol, msym));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$0>());
	}
	Types$DescriptorCache* inst$ = nullptr;
	$Symbol* sym = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$0, inst$)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$0, sym)},
	{}
};
$MethodInfo Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$DescriptorCache;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$0::*)(Types$DescriptorCache*,$Symbol*)>(&Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$0::load$($String* name, bool initialize) {
	$loadClass(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$0::class$ = nullptr;

class Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$1$1 : public $Function {
	$class(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$(Types$DescriptorCache* inst, $Symbol$TypeSymbol* origin) {
		$set(this, inst$, inst);
		$set(this, origin, origin);
	}
	virtual $Object* apply(Object$* msym) override {
		 return $of($nc(inst$)->lambda$findDescriptorInternal$1(origin, $cast($Symbol, msym)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$1$1>());
	}
	Types$DescriptorCache* inst$ = nullptr;
	$Symbol$TypeSymbol* origin = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$1$1, inst$)},
	{"origin", "Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, $PUBLIC, $field(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$1$1, origin)},
	{}
};
$MethodInfo Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$DescriptorCache;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$1$1::*)(Types$DescriptorCache*,$Symbol$TypeSymbol*)>(&Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$1$1::load$($String* name, bool initialize) {
	$loadClass(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$1$1::class$ = nullptr;

class Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$2$2 : public $Predicate {
	$class(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$2$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Types$DescriptorCache* inst, $Type* mtype) {
		$set(this, inst$, inst);
		$set(this, mtype, mtype);
	}
	virtual bool test(Object$* abstractMType) override {
		 return $nc(inst$)->lambda$findDescriptorInternal$2(mtype, $cast($Type, abstractMType));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$2$2>());
	}
	Types$DescriptorCache* inst$ = nullptr;
	$Type* mtype = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$2$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$2$2, inst$)},
	{"mtype", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$2$2, mtype)},
	{}
};
$MethodInfo Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$2$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$DescriptorCache;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$2$2::*)(Types$DescriptorCache*,$Type*)>(&Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$2$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$2$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$2$2::load$($String* name, bool initialize) {
	$loadClass(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$2$2::class$ = nullptr;

class Types$DescriptorCache$$Lambda$lambda$mergeDescriptors$3$3 : public $Function {
	$class(Types$DescriptorCache$$Lambda$lambda$mergeDescriptors$3$3, $NO_CLASS_INIT, $Function)
public:
	void init$(Types$DescriptorCache* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* bestSoFar) override {
		 return $of($nc(inst$)->lambda$mergeDescriptors$3($cast($Symbol, bestSoFar)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Types$DescriptorCache$$Lambda$lambda$mergeDescriptors$3$3>());
	}
	Types$DescriptorCache* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Types$DescriptorCache$$Lambda$lambda$mergeDescriptors$3$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Types$DescriptorCache$$Lambda$lambda$mergeDescriptors$3$3, inst$)},
	{}
};
$MethodInfo Types$DescriptorCache$$Lambda$lambda$mergeDescriptors$3$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$DescriptorCache;)V", nullptr, $PUBLIC, $method(static_cast<void(Types$DescriptorCache$$Lambda$lambda$mergeDescriptors$3$3::*)(Types$DescriptorCache*)>(&Types$DescriptorCache$$Lambda$lambda$mergeDescriptors$3$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Types$DescriptorCache$$Lambda$lambda$mergeDescriptors$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Types$DescriptorCache$$Lambda$lambda$mergeDescriptors$3$3",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Types$DescriptorCache$$Lambda$lambda$mergeDescriptors$3$3::load$($String* name, bool initialize) {
	$loadClass(Types$DescriptorCache$$Lambda$lambda$mergeDescriptors$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Types$DescriptorCache$$Lambda$lambda$mergeDescriptors$3$3::class$ = nullptr;

$FieldInfo _Types$DescriptorCache_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$DescriptorCache, this$0)},
	{"_map", "Ljava/util/WeakHashMap;", "Ljava/util/WeakHashMap<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Types$DescriptorCache$Entry;>;", $PRIVATE, $field(Types$DescriptorCache, _map)},
	{}
};

$MethodInfo _Types$DescriptorCache_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$DescriptorCache::*)($Types*)>(&Types$DescriptorCache::init$))},
	{"failure", "(Ljava/lang/String;[Ljava/lang/Object;)Lcom/sun/tools/javac/code/Types$FunctionDescriptorLookupError;", nullptr, $TRANSIENT},
	{"failure", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/code/Types$FunctionDescriptorLookupError;", nullptr, 0},
	{"findDescriptorInternal", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Scope$CompoundScope;)Lcom/sun/tools/javac/code/Types$DescriptorCache$FunctionDescriptor;", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Types$FunctionDescriptorLookupError"},
	{"get", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Types$DescriptorCache$FunctionDescriptor;", nullptr, 0, nullptr, "com.sun.tools.javac.code.Types$FunctionDescriptorLookupError"},
	{"lambda$findDescriptorInternal$0", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Types$DescriptorCache::*)($Symbol*,$Symbol*)>(&Types$DescriptorCache::lambda$findDescriptorInternal$0))},
	{"lambda$findDescriptorInternal$1", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Type*(Types$DescriptorCache::*)($Symbol$TypeSymbol*,$Symbol*)>(&Types$DescriptorCache::lambda$findDescriptorInternal$1))},
	{"lambda$findDescriptorInternal$2", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Types$DescriptorCache::*)($Type*,$Type*)>(&Types$DescriptorCache::lambda$findDescriptorInternal$2))},
	{"lambda$mergeDescriptors$3", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Types$DescriptorCache$1;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Types$DescriptorCache$1*(Types$DescriptorCache::*)($Symbol*)>(&Types$DescriptorCache::lambda$mergeDescriptors$3))},
	{"mergeDescriptors", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Types$DescriptorCache$FunctionDescriptor;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol;>;)Lcom/sun/tools/javac/code/Types$DescriptorCache$FunctionDescriptor;", $PRIVATE, $method(static_cast<$Types$DescriptorCache$FunctionDescriptor*(Types$DescriptorCache::*)($Symbol$TypeSymbol*,$List*)>(&Types$DescriptorCache::mergeDescriptors))},
	{}
};

$InnerClassInfo _Types$DescriptorCache_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$DescriptorCache", "com.sun.tools.javac.code.Types", "DescriptorCache", 0},
	{"com.sun.tools.javac.code.Types$DescriptorCache$Entry", "com.sun.tools.javac.code.Types$DescriptorCache", "Entry", 0},
	{"com.sun.tools.javac.code.Types$DescriptorCache$FunctionDescriptor", "com.sun.tools.javac.code.Types$DescriptorCache", "FunctionDescriptor", 0},
	{"com.sun.tools.javac.code.Types$DescriptorCache$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Types$DescriptorCache_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$DescriptorCache",
	"java.lang.Object",
	nullptr,
	_Types$DescriptorCache_FieldInfo_,
	_Types$DescriptorCache_MethodInfo_,
	nullptr,
	nullptr,
	_Types$DescriptorCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$DescriptorCache($Class* clazz) {
	return $of($alloc(Types$DescriptorCache));
}

void Types$DescriptorCache::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$set(this, _map, $new($WeakHashMap));
}

$Types$DescriptorCache$FunctionDescriptor* Types$DescriptorCache::get($Symbol$TypeSymbol* origin) {
	$useLocalCurrentObjectStackCache();
	$var($Types$DescriptorCache$Entry, e, $cast($Types$DescriptorCache$Entry, $nc(this->_map)->get(origin)));
	$var($Scope$CompoundScope, members, this->this$0->membersClosure($nc(origin)->type, false));
	if (e == nullptr || !$nc(e)->matches($nc(members)->getMark())) {
		$var($Types$DescriptorCache$FunctionDescriptor, descRes, findDescriptorInternal(origin, members));
		$nc(this->_map)->put(origin, $$new($Types$DescriptorCache$Entry, this, descRes, $nc(members)->getMark()));
		return descRes;
	} else {
		return e->cachedDescRes;
	}
}

$Types$DescriptorCache$FunctionDescriptor* Types$DescriptorCache::findDescriptorInternal($Symbol$TypeSymbol* origin, $Scope$CompoundScope* membersCache) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = !$nc(origin)->isInterface();
	bool var$0 = var$1 || ((int64_t)($nc(origin)->flags() & (uint64_t)(int64_t)8192)) != 0;
	if (var$0 || $nc(origin)->isSealed()) {
		$throw($(failure("not.a.functional.intf"_s, $$new($ObjectArray, {$of(origin)}))));
	}
	$var($ListBuffer, abstracts, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc($($nc(membersCache)->getSymbols(static_cast<$Predicate*>($$new($Types$DescriptorFilter, this->this$0, origin)))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				$var($Type, mtype, this->this$0->memberType($nc(origin)->type, sym));
				if (abstracts->isEmpty()) {
					abstracts->append(sym);
				} else {
					bool var$3 = $nc(sym)->name == $nc(($cast($Symbol, $(abstracts->first()))))->name;
					if (var$3 && this->this$0->overrideEquivalent(mtype, $(this->this$0->memberType($nc(origin)->type, $cast($Symbol, $(abstracts->first())))))) {
						if (!$nc($($nc($($nc($(abstracts->stream()))->filter(static_cast<$Predicate*>($$new(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$0, this, sym)))))->map(static_cast<$Function*>($$new(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$1$1, this, origin)))))->anyMatch(static_cast<$Predicate*>($$new(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$2$2, this, mtype)))) {
							abstracts->append(sym);
						}
					} else {
						$throw($(failure("not.a.functional.intf.1"_s, $$new($ObjectArray, {
							$of(origin),
							$($of($nc(this->this$0->diags)->fragment($($CompilerProperties$Fragments::IncompatibleAbstracts($($Kinds::kindName(static_cast<$Symbol*>(origin))), origin)))))
						}))));
					}
				}
			}
		}
	}
	if (abstracts->isEmpty()) {
		$throw($(failure("not.a.functional.intf.1"_s, $$new($ObjectArray, {
			$of(origin),
			$($of($nc(this->this$0->diags)->fragment($($CompilerProperties$Fragments::NoAbstracts($($Kinds::kindName(static_cast<$Symbol*>(origin))), origin)))))
		}))));
	} else if (abstracts->size() == 1) {
		return $new($Types$DescriptorCache$FunctionDescriptor, this, $cast($Symbol, $(abstracts->first())));
	} else {
		$var($Types$DescriptorCache$FunctionDescriptor, descRes, mergeDescriptors(origin, $(abstracts->toList())));
		if (descRes == nullptr) {
			$var($ListBuffer, descriptors, $new($ListBuffer));
			{
				$var($Iterator, i$, abstracts->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Symbol, desc, $cast($Symbol, i$->next()));
					{
						$var($String, key, $nc($($nc($nc(desc)->type)->getThrownTypes()))->nonEmpty() ? "descriptor.throws"_s : "descriptor"_s);
						descriptors->append($($nc(this->this$0->diags)->fragment(key, $$new($ObjectArray, {
							$of($nc(desc)->name),
							$($of($nc(desc->type)->getParameterTypes())),
							$($of($nc(desc->type)->getReturnType())),
							$($of($nc(desc->type)->getThrownTypes()))
						}))));
					}
				}
			}
			$var($JCDiagnostic, msg, $nc(this->this$0->diags)->fragment($($CompilerProperties$Fragments::IncompatibleDescsInFunctionalIntf($($Kinds::kindName(static_cast<$Symbol*>(origin))), origin))));
			$var($JCDiagnostic$MultilineDiagnostic, incompatibleDescriptors, $new($JCDiagnostic$MultilineDiagnostic, msg, $(descriptors->toList())));
			$throw($(failure(incompatibleDescriptors)));
		}
		return descRes;
	}
}

$Types$DescriptorCache$FunctionDescriptor* Types$DescriptorCache::mergeDescriptors($Symbol$TypeSymbol* origin, $List* methodSyms) {
	$useLocalCurrentObjectStackCache();
	return $cast($Types$DescriptorCache$FunctionDescriptor, $nc($($nc($(this->this$0->mergeAbstracts(methodSyms, $nc(origin)->type, false)))->map(static_cast<$Function*>($$new(Types$DescriptorCache$$Lambda$lambda$mergeDescriptors$3$3, this)))))->orElse(nullptr));
}

$Types$FunctionDescriptorLookupError* Types$DescriptorCache::failure($String* msg, $ObjectArray* args) {
	return failure($($nc(this->this$0->diags)->fragment(msg, args)));
}

$Types$FunctionDescriptorLookupError* Types$DescriptorCache::failure($JCDiagnostic* diag) {
	return $$new($Types$FunctionDescriptorLookupError)->setMessage(diag);
}

$Types$DescriptorCache$1* Types$DescriptorCache::lambda$mergeDescriptors$3($Symbol* bestSoFar) {
	return $new($Types$DescriptorCache$1, this, $($nc(bestSoFar)->baseSymbol()), bestSoFar);
}

bool Types$DescriptorCache::lambda$findDescriptorInternal$2($Type* mtype, $Type* abstractMType) {
	return this->this$0->isSubSignature(abstractMType, mtype);
}

$Type* Types$DescriptorCache::lambda$findDescriptorInternal$1($Symbol$TypeSymbol* origin, $Symbol* msym) {
	return this->this$0->memberType($nc(origin)->type, msym);
}

bool Types$DescriptorCache::lambda$findDescriptorInternal$0($Symbol* sym, $Symbol* msym) {
	return $nc($nc(msym)->owner)->isSubClass($($nc(sym)->enclClass()), this->this$0);
}

Types$DescriptorCache::Types$DescriptorCache() {
}

$Class* Types$DescriptorCache::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$0::classInfo$.name)) {
			return Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$0::load$(name, initialize);
		}
		if (name->equals(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$1$1::classInfo$.name)) {
			return Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$1$1::load$(name, initialize);
		}
		if (name->equals(Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$2$2::classInfo$.name)) {
			return Types$DescriptorCache$$Lambda$lambda$findDescriptorInternal$2$2::load$(name, initialize);
		}
		if (name->equals(Types$DescriptorCache$$Lambda$lambda$mergeDescriptors$3$3::classInfo$.name)) {
			return Types$DescriptorCache$$Lambda$lambda$mergeDescriptors$3$3::load$(name, initialize);
		}
	}
	$loadClass(Types$DescriptorCache, name, initialize, &_Types$DescriptorCache_ClassInfo_, allocate$Types$DescriptorCache);
	return class$;
}

$Class* Types$DescriptorCache::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com