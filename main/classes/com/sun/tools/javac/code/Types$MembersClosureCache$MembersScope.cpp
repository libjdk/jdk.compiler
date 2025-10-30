#include <com/sun/tools/javac/code/Types$MembersClosureCache$MembersScope.h>

#include <com/sun/tools/javac/code/Scope$CompoundScope.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Types$MembersClosureCache.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$CompoundScope = ::com::sun::tools::javac::code::Scope$CompoundScope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Types$MembersClosureCache = ::com::sun::tools::javac::code::Types$MembersClosureCache;
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
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0 : public $Predicate {
	$class(Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Predicate* sf) {
		$set(this, sf, sf);
	}
	virtual bool test(Object$* s) override {
		 return Types$MembersClosureCache$MembersScope::lambda$combine$0(sf, $cast($Symbol, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0>());
	}
	$Predicate* sf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0::fieldInfos[2] = {
	{"sf", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0, sf)},
	{}
};
$MethodInfo Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Predicate;)V", nullptr, $PUBLIC, $method(static_cast<void(Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0::*)($Predicate*)>(&Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0::load$($String* name, bool initialize) {
	$loadClass(Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0::class$ = nullptr;

$FieldInfo _Types$MembersClosureCache$MembersScope_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/code/Types$MembersClosureCache;", nullptr, $FINAL | $SYNTHETIC, $field(Types$MembersClosureCache$MembersScope, this$1)},
	{"scope", "Lcom/sun/tools/javac/code/Scope$CompoundScope;", nullptr, 0, $field(Types$MembersClosureCache$MembersScope, scope)},
	{}
};

$MethodInfo _Types$MembersClosureCache$MembersScope_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$MembersClosureCache;Lcom/sun/tools/javac/code/Scope$CompoundScope;)V", nullptr, $PUBLIC, $method(static_cast<void(Types$MembersClosureCache$MembersScope::*)($Types$MembersClosureCache*,$Scope$CompoundScope*)>(&Types$MembersClosureCache$MembersScope::init$))},
	{"combine", "(Ljava/util/function/Predicate;)Ljava/util/function/Predicate;", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;)Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;", 0},
	{"getMark", "()I", nullptr, $PUBLIC},
	{"getSymbols", "(Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC},
	{"getSymbolsByName", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC},
	{"lambda$combine$0", "(Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Predicate*,$Symbol*)>(&Types$MembersClosureCache$MembersScope::lambda$combine$0))},
	{}
};

$InnerClassInfo _Types$MembersClosureCache$MembersScope_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$MembersClosureCache", "com.sun.tools.javac.code.Types", "MembersClosureCache", 0},
	{"com.sun.tools.javac.code.Types$MembersClosureCache$MembersScope", "com.sun.tools.javac.code.Types$MembersClosureCache", "MembersScope", 0},
	{"com.sun.tools.javac.code.Scope$CompoundScope", "com.sun.tools.javac.code.Scope", "CompoundScope", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Types$MembersClosureCache$MembersScope_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$MembersClosureCache$MembersScope",
	"com.sun.tools.javac.code.Scope$CompoundScope",
	nullptr,
	_Types$MembersClosureCache$MembersScope_FieldInfo_,
	_Types$MembersClosureCache$MembersScope_MethodInfo_,
	nullptr,
	nullptr,
	_Types$MembersClosureCache$MembersScope_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$MembersClosureCache$MembersScope($Class* clazz) {
	return $of($alloc(Types$MembersClosureCache$MembersScope));
}

void Types$MembersClosureCache$MembersScope::init$($Types$MembersClosureCache* this$1, $Scope$CompoundScope* scope) {
	$set(this, this$1, this$1);
	$Scope$CompoundScope::init$($nc(scope)->owner);
	$set(this, scope, scope);
}

$Predicate* Types$MembersClosureCache$MembersScope::combine($Predicate* sf) {
	return static_cast<$Predicate*>($new(Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0, sf));
}

$Iterable* Types$MembersClosureCache$MembersScope::getSymbols($Predicate* sf, $Scope$LookupKind* lookupKind) {
	return $nc(this->scope)->getSymbols($(combine(sf)), lookupKind);
}

$Iterable* Types$MembersClosureCache$MembersScope::getSymbolsByName($Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
	return $nc(this->scope)->getSymbolsByName(name, $(combine(sf)), lookupKind);
}

int32_t Types$MembersClosureCache$MembersScope::getMark() {
	return $nc(this->scope)->getMark();
}

bool Types$MembersClosureCache$MembersScope::lambda$combine$0($Predicate* sf, $Symbol* s) {
	$init(Types$MembersClosureCache$MembersScope);
	bool var$0 = !$nc($nc(s)->owner)->isInterface();
	return var$0 && (sf == nullptr || $nc(sf)->test(s));
}

Types$MembersClosureCache$MembersScope::Types$MembersClosureCache$MembersScope() {
}

$Class* Types$MembersClosureCache$MembersScope::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0::classInfo$.name)) {
			return Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0::load$(name, initialize);
		}
	}
	$loadClass(Types$MembersClosureCache$MembersScope, name, initialize, &_Types$MembersClosureCache$MembersScope_ClassInfo_, allocate$Types$MembersClosureCache$MembersScope);
	return class$;
}

$Class* Types$MembersClosureCache$MembersScope::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com