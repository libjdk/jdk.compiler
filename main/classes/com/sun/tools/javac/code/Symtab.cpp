#include <com/sun/tools/javac/code/Symtab.h>

#include <com/sun/tools/javac/code/ClassFinder.h>
#include <com/sun/tools/javac/code/Directive$RequiresDirective.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/MissingInfoHandler.h>
#include <com/sun/tools/javac/code/Scope$ErrorScope.h>
#include <com/sun/tools/javac/code/Scope$ScopeImpl.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$RootPackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab$1.h>
#include <com/sun/tools/javac/code/Symtab$2.h>
#include <com/sun/tools/javac/code/Symtab$3.h>
#include <com/sun/tools/javac/code/Symtab$4.h>
#include <com/sun/tools/javac/code/Symtab$5.h>
#include <com/sun/tools/javac/code/Symtab$6.h>
#include <com/sun/tools/javac/code/Symtab$7.h>
#include <com/sun/tools/javac/code/Type$BottomType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type$JCVoidType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$UnknownType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$UniqueType.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Modules.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Convert.h>
#include <com/sun/tools/javac/util/Iterators.h>
#include <com/sun/tools/javac/util/JavacMessages.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef ARRAY
#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef CLASS
#undef DOUBLE
#undef EMPTY
#undef FLOAT
#undef INT
#undef LONG
#undef MODULES
#undef NIL
#undef NULL_COMPLETER
#undef PCK
#undef SHORT
#undef TYP

using $TypeArray = $Array<::com::sun::tools::javac::code::Type>;
using $NameArray = $Array<::com::sun::tools::javac::util::Name>;
using $ClassFinder = ::com::sun::tools::javac::code::ClassFinder;
using $Directive$RequiresDirective = ::com::sun::tools::javac::code::Directive$RequiresDirective;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $MissingInfoHandler = ::com::sun::tools::javac::code::MissingInfoHandler;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$ErrorScope = ::com::sun::tools::javac::code::Scope$ErrorScope;
using $Scope$ScopeImpl = ::com::sun::tools::javac::code::Scope$ScopeImpl;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$RootPackageSymbol = ::com::sun::tools::javac::code::Symbol$RootPackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab$1 = ::com::sun::tools::javac::code::Symtab$1;
using $Symtab$2 = ::com::sun::tools::javac::code::Symtab$2;
using $Symtab$3 = ::com::sun::tools::javac::code::Symtab$3;
using $Symtab$4 = ::com::sun::tools::javac::code::Symtab$4;
using $Symtab$5 = ::com::sun::tools::javac::code::Symtab$5;
using $Symtab$6 = ::com::sun::tools::javac::code::Symtab$6;
using $Symtab$7 = ::com::sun::tools::javac::code::Symtab$7;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$BottomType = ::com::sun::tools::javac::code::Type$BottomType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $Type$JCVoidType = ::com::sun::tools::javac::code::Type$JCVoidType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$UnknownType = ::com::sun::tools::javac::code::Type$UnknownType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$UniqueType = ::com::sun::tools::javac::code::Types$UniqueType;
using $Modules = ::com::sun::tools::javac::comp::Modules;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Convert = ::com::sun::tools::javac::util::Convert;
using $Iterators = ::com::sun::tools::javac::util::Iterators;
using $JavacMessages = ::com::sun::tools::javac::util::JavacMessages;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Symtab$$Lambda$lambda$getClassField$0 : public $Function {
	$class(Symtab$$Lambda$lambda$getClassField$0, $NO_CLASS_INIT, $Function)
public:
	void init$(Symtab* inst, $Type* type, $Types* types) {
		$set(this, inst$, inst);
		$set(this, type, type);
		$set(this, types, types);
	}
	virtual $Object* apply(Object$* k) override {
		 return $of($nc(inst$)->lambda$getClassField$0(type, types, $cast($Types$UniqueType, k)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Symtab$$Lambda$lambda$getClassField$0>());
	}
	Symtab* inst$ = nullptr;
	$Type* type = nullptr;
	$Types* types = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Symtab$$Lambda$lambda$getClassField$0::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Symtab$$Lambda$lambda$getClassField$0, inst$)},
	{"type", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Symtab$$Lambda$lambda$getClassField$0, type)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PUBLIC, $field(Symtab$$Lambda$lambda$getClassField$0, types)},
	{}
};
$MethodInfo Symtab$$Lambda$lambda$getClassField$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symtab;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;)V", nullptr, $PUBLIC, $method(static_cast<void(Symtab$$Lambda$lambda$getClassField$0::*)(Symtab*,$Type*,$Types*)>(&Symtab$$Lambda$lambda$getClassField$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Symtab$$Lambda$lambda$getClassField$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Symtab$$Lambda$lambda$getClassField$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Symtab$$Lambda$lambda$getClassField$0::load$($String* name, bool initialize) {
	$loadClass(Symtab$$Lambda$lambda$getClassField$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Symtab$$Lambda$lambda$getClassField$0::class$ = nullptr;

class Symtab$$Lambda$complete$1 : public $Symbol$Completer {
	$class(Symtab$$Lambda$complete$1, $NO_CLASS_INIT, $Symbol$Completer)
public:
	void init$($Symbol$Completer* inst) {
		$set(this, inst$, inst);
	}
	virtual void complete($Symbol* sym) override {
		$nc(inst$)->complete(sym);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Symtab$$Lambda$complete$1>());
	}
	$Symbol$Completer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Symtab$$Lambda$complete$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Symtab$$Lambda$complete$1, inst$)},
	{}
};
$MethodInfo Symtab$$Lambda$complete$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$Completer;)V", nullptr, $PUBLIC, $method(static_cast<void(Symtab$$Lambda$complete$1::*)($Symbol$Completer*)>(&Symtab$$Lambda$complete$1::init$))},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Symtab$$Lambda$complete$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Symtab$$Lambda$complete$1",
	"java.lang.Object",
	"com.sun.tools.javac.code.Symbol$Completer",
	fieldInfos,
	methodInfos
};
$Class* Symtab$$Lambda$complete$1::load$($String* name, bool initialize) {
	$loadClass(Symtab$$Lambda$complete$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Symtab$$Lambda$complete$1::class$ = nullptr;

class Symtab$$Lambda$toString$2 : public $Supplier {
	$class(Symtab$$Lambda$toString$2, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Name* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->toString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Symtab$$Lambda$toString$2>());
	}
	$Name* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Symtab$$Lambda$toString$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Symtab$$Lambda$toString$2, inst$)},
	{}
};
$MethodInfo Symtab$$Lambda$toString$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Name;)V", nullptr, $PUBLIC, $method(static_cast<void(Symtab$$Lambda$toString$2::*)($Name*)>(&Symtab$$Lambda$toString$2::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Symtab$$Lambda$toString$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Symtab$$Lambda$toString$2",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* Symtab$$Lambda$toString$2::load$($String* name, bool initialize) {
	$loadClass(Symtab$$Lambda$toString$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Symtab$$Lambda$toString$2::class$ = nullptr;

class Symtab$$Lambda$lambda$lookupPackage$1$3 : public $Function {
	$class(Symtab$$Lambda$lambda$lookupPackage$1$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* rd) override {
		 return $of(Symtab::lambda$lookupPackage$1($cast($Directive$RequiresDirective, rd)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Symtab$$Lambda$lambda$lookupPackage$1$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Symtab$$Lambda$lambda$lookupPackage$1$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Symtab$$Lambda$lambda$lookupPackage$1$3::*)()>(&Symtab$$Lambda$lambda$lookupPackage$1$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Symtab$$Lambda$lambda$lookupPackage$1$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Symtab$$Lambda$lambda$lookupPackage$1$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Symtab$$Lambda$lambda$lookupPackage$1$3::load$($String* name, bool initialize) {
	$loadClass(Symtab$$Lambda$lambda$lookupPackage$1$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Symtab$$Lambda$lambda$lookupPackage$1$3::class$ = nullptr;

class Symtab$$Lambda$lambda$lookupPackage$2$4 : public $Predicate {
	$class(Symtab$$Lambda$lambda$lookupPackage$2$4, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Symtab* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* mod) override {
		 return $nc(inst$)->lambda$lookupPackage$2($cast($Symbol$ModuleSymbol, mod));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Symtab$$Lambda$lambda$lookupPackage$2$4>());
	}
	Symtab* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Symtab$$Lambda$lambda$lookupPackage$2$4::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Symtab$$Lambda$lambda$lookupPackage$2$4, inst$)},
	{}
};
$MethodInfo Symtab$$Lambda$lambda$lookupPackage$2$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symtab;)V", nullptr, $PUBLIC, $method(static_cast<void(Symtab$$Lambda$lambda$lookupPackage$2$4::*)(Symtab*)>(&Symtab$$Lambda$lambda$lookupPackage$2$4::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Symtab$$Lambda$lambda$lookupPackage$2$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Symtab$$Lambda$lambda$lookupPackage$2$4",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Symtab$$Lambda$lambda$lookupPackage$2$4::load$($String* name, bool initialize) {
	$loadClass(Symtab$$Lambda$lambda$lookupPackage$2$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Symtab$$Lambda$lambda$lookupPackage$2$4::class$ = nullptr;

class Symtab$$Lambda$lambda$getAllClasses$4$5 : public $Iterable {
	$class(Symtab$$Lambda$lambda$getAllClasses$4$5, $NO_CLASS_INIT, $Iterable)
public:
	void init$(Symtab* inst) {
		$set(this, inst$, inst);
	}
	virtual $Iterator* iterator() override {
		 return $nc(inst$)->lambda$getAllClasses$4();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Symtab$$Lambda$lambda$getAllClasses$4$5>());
	}
	Symtab* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Symtab$$Lambda$lambda$getAllClasses$4$5::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Symtab$$Lambda$lambda$getAllClasses$4$5, inst$)},
	{}
};
$MethodInfo Symtab$$Lambda$lambda$getAllClasses$4$5::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symtab;)V", nullptr, $PUBLIC, $method(static_cast<void(Symtab$$Lambda$lambda$getAllClasses$4$5::*)(Symtab*)>(&Symtab$$Lambda$lambda$getAllClasses$4$5::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Symtab$$Lambda$lambda$getAllClasses$4$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Symtab$$Lambda$lambda$getAllClasses$4$5",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* Symtab$$Lambda$lambda$getAllClasses$4$5::load$($String* name, bool initialize) {
	$loadClass(Symtab$$Lambda$lambda$getAllClasses$4$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Symtab$$Lambda$lambda$getAllClasses$4$5::class$ = nullptr;

class Symtab$$Lambda$lambda$doEnterClass$5$6 : public $Function {
	$class(Symtab$$Lambda$lambda$doEnterClass$5$6, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* n) override {
		 return $of(Symtab::lambda$doEnterClass$5($cast($Name, n)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Symtab$$Lambda$lambda$doEnterClass$5$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Symtab$$Lambda$lambda$doEnterClass$5$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Symtab$$Lambda$lambda$doEnterClass$5$6::*)()>(&Symtab$$Lambda$lambda$doEnterClass$5$6::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Symtab$$Lambda$lambda$doEnterClass$5$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Symtab$$Lambda$lambda$doEnterClass$5$6",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Symtab$$Lambda$lambda$doEnterClass$5$6::load$($String* name, bool initialize) {
	$loadClass(Symtab$$Lambda$lambda$doEnterClass$5$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Symtab$$Lambda$lambda$doEnterClass$5$6::class$ = nullptr;

class Symtab$$Lambda$lambda$enterPackage$6$7 : public $Supplier {
	$class(Symtab$$Lambda$lambda$enterPackage$6$7, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Symbol$ModuleSymbol* currModule) {
		$set(this, currModule, currModule);
	}
	virtual $Object* get() override {
		 return $of(Symtab::lambda$enterPackage$6(currModule));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Symtab$$Lambda$lambda$enterPackage$6$7>());
	}
	$Symbol$ModuleSymbol* currModule = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Symtab$$Lambda$lambda$enterPackage$6$7::fieldInfos[2] = {
	{"currModule", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC, $field(Symtab$$Lambda$lambda$enterPackage$6$7, currModule)},
	{}
};
$MethodInfo Symtab$$Lambda$lambda$enterPackage$6$7::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Symtab$$Lambda$lambda$enterPackage$6$7::*)($Symbol$ModuleSymbol*)>(&Symtab$$Lambda$lambda$enterPackage$6$7::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Symtab$$Lambda$lambda$enterPackage$6$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Symtab$$Lambda$lambda$enterPackage$6$7",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* Symtab$$Lambda$lambda$enterPackage$6$7::load$($String* name, bool initialize) {
	$loadClass(Symtab$$Lambda$lambda$enterPackage$6$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Symtab$$Lambda$lambda$enterPackage$6$7::class$ = nullptr;

class Symtab$$Lambda$lambda$addRootPackageFor$8$8 : public $Symbol$Completer {
	$class(Symtab$$Lambda$lambda$addRootPackageFor$8$8, $NO_CLASS_INIT, $Symbol$Completer)
public:
	void init$(Symtab* inst) {
		$set(this, inst$, inst);
	}
	virtual void complete($Symbol* s) override {
		$nc(inst$)->lambda$addRootPackageFor$8(s);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Symtab$$Lambda$lambda$addRootPackageFor$8$8>());
	}
	Symtab* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Symtab$$Lambda$lambda$addRootPackageFor$8$8::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Symtab$$Lambda$lambda$addRootPackageFor$8$8, inst$)},
	{}
};
$MethodInfo Symtab$$Lambda$lambda$addRootPackageFor$8$8::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symtab;)V", nullptr, $PUBLIC, $method(static_cast<void(Symtab$$Lambda$lambda$addRootPackageFor$8$8::*)(Symtab*)>(&Symtab$$Lambda$lambda$addRootPackageFor$8$8::init$))},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Symtab$$Lambda$lambda$addRootPackageFor$8$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Symtab$$Lambda$lambda$addRootPackageFor$8$8",
	"java.lang.Object",
	"com.sun.tools.javac.code.Symbol$Completer",
	fieldInfos,
	methodInfos
};
$Class* Symtab$$Lambda$lambda$addRootPackageFor$8$8::load$($String* name, bool initialize) {
	$loadClass(Symtab$$Lambda$lambda$addRootPackageFor$8$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Symtab$$Lambda$lambda$addRootPackageFor$8$8::class$ = nullptr;

class Symtab$$Lambda$lambda$enterModule$9$9 : public $Symbol$Completer {
	$class(Symtab$$Lambda$lambda$enterModule$9$9, $NO_CLASS_INIT, $Symbol$Completer)
public:
	void init$(Symtab* inst) {
		$set(this, inst$, inst);
	}
	virtual void complete($Symbol* s) override {
		$nc(inst$)->lambda$enterModule$9(s);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Symtab$$Lambda$lambda$enterModule$9$9>());
	}
	Symtab* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Symtab$$Lambda$lambda$enterModule$9$9::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Symtab$$Lambda$lambda$enterModule$9$9, inst$)},
	{}
};
$MethodInfo Symtab$$Lambda$lambda$enterModule$9$9::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symtab;)V", nullptr, $PUBLIC, $method(static_cast<void(Symtab$$Lambda$lambda$enterModule$9$9::*)(Symtab*)>(&Symtab$$Lambda$lambda$enterModule$9$9::init$))},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Symtab$$Lambda$lambda$enterModule$9$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Symtab$$Lambda$lambda$enterModule$9$9",
	"java.lang.Object",
	"com.sun.tools.javac.code.Symbol$Completer",
	fieldInfos,
	methodInfos
};
$Class* Symtab$$Lambda$lambda$enterModule$9$9::load$($String* name, bool initialize) {
	$loadClass(Symtab$$Lambda$lambda$enterModule$9$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Symtab$$Lambda$lambda$enterModule$9$9::class$ = nullptr;

class Symtab$$Lambda$lambda$getAllClasses$3$10 : public $Function {
	$class(Symtab$$Lambda$lambda$getAllClasses$3$10, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* v) override {
		 return $of(Symtab::lambda$getAllClasses$3($cast($Map, v)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Symtab$$Lambda$lambda$getAllClasses$3$10>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Symtab$$Lambda$lambda$getAllClasses$3$10::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Symtab$$Lambda$lambda$getAllClasses$3$10::*)()>(&Symtab$$Lambda$lambda$getAllClasses$3$10::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Symtab$$Lambda$lambda$getAllClasses$3$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Symtab$$Lambda$lambda$getAllClasses$3$10",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Symtab$$Lambda$lambda$getAllClasses$3$10::load$($String* name, bool initialize) {
	$loadClass(Symtab$$Lambda$lambda$getAllClasses$3$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Symtab$$Lambda$lambda$getAllClasses$3$10::class$ = nullptr;

$FieldInfo _Symtab_FieldInfo_[] = {
	{"symtabKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/code/Symtab;>;", $PROTECTED | $STATIC | $FINAL, $staticField(Symtab, symtabKey)},
	{"byteType", "Lcom/sun/tools/javac/code/Type$JCPrimitiveType;", nullptr, $PUBLIC | $FINAL, $field(Symtab, byteType)},
	{"charType", "Lcom/sun/tools/javac/code/Type$JCPrimitiveType;", nullptr, $PUBLIC | $FINAL, $field(Symtab, charType)},
	{"shortType", "Lcom/sun/tools/javac/code/Type$JCPrimitiveType;", nullptr, $PUBLIC | $FINAL, $field(Symtab, shortType)},
	{"intType", "Lcom/sun/tools/javac/code/Type$JCPrimitiveType;", nullptr, $PUBLIC | $FINAL, $field(Symtab, intType)},
	{"longType", "Lcom/sun/tools/javac/code/Type$JCPrimitiveType;", nullptr, $PUBLIC | $FINAL, $field(Symtab, longType)},
	{"floatType", "Lcom/sun/tools/javac/code/Type$JCPrimitiveType;", nullptr, $PUBLIC | $FINAL, $field(Symtab, floatType)},
	{"doubleType", "Lcom/sun/tools/javac/code/Type$JCPrimitiveType;", nullptr, $PUBLIC | $FINAL, $field(Symtab, doubleType)},
	{"booleanType", "Lcom/sun/tools/javac/code/Type$JCPrimitiveType;", nullptr, $PUBLIC | $FINAL, $field(Symtab, booleanType)},
	{"botType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, botType)},
	{"voidType", "Lcom/sun/tools/javac/code/Type$JCVoidType;", nullptr, $PUBLIC | $FINAL, $field(Symtab, voidType)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(Symtab, names)},
	{"messages", "Lcom/sun/tools/javac/util/JavacMessages;", nullptr, $PRIVATE | $FINAL, $field(Symtab, messages)},
	{"initialCompleter", "Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $PRIVATE | $FINAL, $field(Symtab, initialCompleter)},
	{"moduleCompleter", "Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $PRIVATE | $FINAL, $field(Symtab, moduleCompleter)},
	{"unnamedModule", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC | $FINAL, $field(Symtab, unnamedModule)},
	{"errModule", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC | $FINAL, $field(Symtab, errModule)},
	{"noModule", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC | $FINAL, $field(Symtab, noModule)},
	{"rootPackage", "Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC | $FINAL, $field(Symtab, rootPackage)},
	{"noSymbol", "Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, $PUBLIC | $FINAL, $field(Symtab, noSymbol)},
	{"errSymbol", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC | $FINAL, $field(Symtab, errSymbol)},
	{"unknownSymbol", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC | $FINAL, $field(Symtab, unknownSymbol)},
	{"errType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, errType)},
	{"unknownType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, unknownType)},
	{"arrayClass", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC | $FINAL, $field(Symtab, arrayClass)},
	{"arrayCloneMethod", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PUBLIC | $FINAL, $field(Symtab, arrayCloneMethod)},
	{"boundClass", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC | $FINAL, $field(Symtab, boundClass)},
	{"methodClass", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC | $FINAL, $field(Symtab, methodClass)},
	{"java_base", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC | $FINAL, $field(Symtab, java_base)},
	{"objectType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, objectType)},
	{"objectMethodsType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, objectMethodsType)},
	{"objectsType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, objectsType)},
	{"classType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, classType)},
	{"classLoaderType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, classLoaderType)},
	{"stringType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, stringType)},
	{"stringBufferType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, stringBufferType)},
	{"stringBuilderType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, stringBuilderType)},
	{"cloneableType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, cloneableType)},
	{"serializableType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, serializableType)},
	{"serializedLambdaType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, serializedLambdaType)},
	{"varHandleType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, varHandleType)},
	{"methodHandleType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, methodHandleType)},
	{"methodHandleLookupType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, methodHandleLookupType)},
	{"methodTypeType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, methodTypeType)},
	{"nativeHeaderType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, nativeHeaderType)},
	{"throwableType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, throwableType)},
	{"errorType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, errorType)},
	{"interruptedExceptionType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, interruptedExceptionType)},
	{"illegalArgumentExceptionType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, illegalArgumentExceptionType)},
	{"exceptionType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, exceptionType)},
	{"runtimeExceptionType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, runtimeExceptionType)},
	{"classNotFoundExceptionType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, classNotFoundExceptionType)},
	{"noClassDefFoundErrorType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, noClassDefFoundErrorType)},
	{"noSuchFieldErrorType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, noSuchFieldErrorType)},
	{"assertionErrorType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, assertionErrorType)},
	{"incompatibleClassChangeErrorType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, incompatibleClassChangeErrorType)},
	{"cloneNotSupportedExceptionType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, cloneNotSupportedExceptionType)},
	{"annotationType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, annotationType)},
	{"enumSym", "Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, $PUBLIC | $FINAL, $field(Symtab, enumSym)},
	{"listType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, listType)},
	{"collectionsType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, collectionsType)},
	{"comparableType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, comparableType)},
	{"comparatorType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, comparatorType)},
	{"arraysType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, arraysType)},
	{"iterableType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, iterableType)},
	{"iteratorType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, iteratorType)},
	{"annotationTargetType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, annotationTargetType)},
	{"overrideType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, overrideType)},
	{"retentionType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, retentionType)},
	{"deprecatedType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, deprecatedType)},
	{"suppressWarningsType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, suppressWarningsType)},
	{"supplierType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, supplierType)},
	{"inheritedType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, inheritedType)},
	{"profileType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, profileType)},
	{"proprietaryType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, proprietaryType)},
	{"systemType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, systemType)},
	{"autoCloseableType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, autoCloseableType)},
	{"trustMeType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, trustMeType)},
	{"lambdaMetafactory", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, lambdaMetafactory)},
	{"stringConcatFactory", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, stringConcatFactory)},
	{"repeatableType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, repeatableType)},
	{"documentedType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, documentedType)},
	{"elementTypeType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, elementTypeType)},
	{"functionalInterfaceType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, functionalInterfaceType)},
	{"previewFeatureType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, previewFeatureType)},
	{"previewFeatureInternalType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, previewFeatureInternalType)},
	{"typeDescriptorType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, typeDescriptorType)},
	{"recordType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, recordType)},
	{"switchBootstrapsType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, switchBootstrapsType)},
	{"valueBasedType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, valueBasedType)},
	{"valueBasedInternalType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, valueBasedInternalType)},
	{"lengthVar", "Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $PUBLIC | $FINAL, $field(Symtab, lengthVar)},
	{"enumFinalFinalize", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PUBLIC | $FINAL, $field(Symtab, enumFinalFinalize)},
	{"autoCloseableClose", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PUBLIC | $FINAL, $field(Symtab, autoCloseableClose)},
	{"typeOfTag", "[Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Symtab, typeOfTag)},
	{"boxedName", "[Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Symtab, boxedName)},
	{"classes", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/Name;Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;>;", $PRIVATE | $FINAL, $field(Symtab, classes)},
	{"packages", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/Name;Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;>;>;", $PRIVATE | $FINAL, $field(Symtab, packages)},
	{"modules", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PRIVATE | $FINAL, $field(Symtab, modules)},
	{"classFields", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Types$UniqueType;Lcom/sun/tools/javac/code/Symbol$VarSymbol;>;", $PRIVATE | $FINAL, $field(Symtab, classFields)},
	{"predefClass", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC | $FINAL, $field(Symtab, predefClass)},
	{"EMPTY", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Symtab, EMPTY)},
	{}
};

$MethodInfo _Symtab_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(Symtab::*)($Context*)>(&Symtab::init$)), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"addRootPackageFor", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(Symtab::*)($Symbol$ModuleSymbol*)>(&Symtab::addRootPackageFor))},
	{"defineClass", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC},
	{"doEnterClass", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(Symtab::*)($Symbol$ModuleSymbol*,$Symbol$ClassSymbol*)>(&Symtab::doEnterClass))},
	{"doEnterPackage", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(Symtab::*)($Symbol$ModuleSymbol*,$Symbol$PackageSymbol*)>(&Symtab::doEnterPackage))},
	{"enterClass", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Symtab::*)($String*)>(&Symtab::enterClass))},
	{"enterClass", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC},
	{"enterClass", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC},
	{"enterModule", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC},
	{"enterPackage", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC},
	{"enterSyntheticAnnotation", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Symtab::*)($String*)>(&Symtab::enterSyntheticAnnotation))},
	{"getAllClasses", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;", $PUBLIC},
	{"getAllModules", "()Ljava/util/Collection;", "()Ljava/util/Collection<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PUBLIC},
	{"getClass", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC},
	{"getClassField", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $PUBLIC},
	{"getClassesForName", "(Lcom/sun/tools/javac/util/Name;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/util/Name;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;", $PUBLIC},
	{"getModule", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC},
	{"getPackage", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC},
	{"getPackagesForName", "(Lcom/sun/tools/javac/util/Name;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/util/Name;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol$PackageSymbol;>;", $PUBLIC},
	{"inferModule", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC},
	{"initType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC},
	{"initType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"initType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/code/Symtab;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Symtab*(*)($Context*)>(&Symtab::instance))},
	{"lambda$addRootPackageFor$8", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Symtab::*)($Symbol*)>(&Symtab::lambda$addRootPackageFor$8)), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"lambda$doEnterClass$5", "(Lcom/sun/tools/javac/util/Name;)Ljava/util/Map;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Map*(*)($Name*)>(&Symtab::lambda$doEnterClass$5))},
	{"lambda$enterModule$9", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Symtab::*)($Symbol*)>(&Symtab::lambda$enterModule$9)), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"lambda$enterPackage$6", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($Symbol$ModuleSymbol*)>(&Symtab::lambda$enterPackage$6))},
	{"lambda$getAllClasses$3", "(Ljava/util/Map;)Ljava/util/Iterator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Iterator*(*)($Map*)>(&Symtab::lambda$getAllClasses$3))},
	{"lambda$getAllClasses$4", "()Ljava/util/Iterator;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Iterator*(Symtab::*)()>(&Symtab::lambda$getAllClasses$4))},
	{"lambda$getClassField$0", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Types$UniqueType;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Symbol$VarSymbol*(Symtab::*)($Type*,$Types*,$Types$UniqueType*)>(&Symtab::lambda$getClassField$0))},
	{"lambda$lookupPackage$1", "(Lcom/sun/tools/javac/code/Directive$RequiresDirective;)Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Symbol$ModuleSymbol*(*)($Directive$RequiresDirective*)>(&Symtab::lambda$lookupPackage$1))},
	{"lambda$lookupPackage$2", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Symtab::*)($Symbol$ModuleSymbol*)>(&Symtab::lambda$lookupPackage$2))},
	{"listPackageModules", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PUBLIC},
	{"lookupPackage", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC},
	{"lookupPackage", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/util/Name;Z)Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol$PackageSymbol*(Symtab::*)($Symbol$ModuleSymbol*,$Name*,bool)>(&Symtab::lookupPackage))},
	{"packageExists", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/util/Name;)Z", nullptr, $PUBLIC},
	{"removeClass", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/util/Name;)V", nullptr, $PUBLIC},
	{"synthesizeBoxTypeIfMissing", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC},
	{"synthesizeEmptyInterfaceIfMissing", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Symtab_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symtab$7", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Symtab$6", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Symtab$5", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Symtab$4", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Symtab$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Symtab$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Symtab$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Symtab_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Symtab",
	"java.lang.Object",
	nullptr,
	_Symtab_FieldInfo_,
	_Symtab_MethodInfo_,
	nullptr,
	nullptr,
	_Symtab_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symtab$7,com.sun.tools.javac.code.Symtab$6,com.sun.tools.javac.code.Symtab$5,com.sun.tools.javac.code.Symtab$4,com.sun.tools.javac.code.Symtab$3,com.sun.tools.javac.code.Symtab$2,com.sun.tools.javac.code.Symtab$1"
};

$Object* allocate$Symtab($Class* clazz) {
	return $of($alloc(Symtab));
}

$Context$Key* Symtab::symtabKey = nullptr;
$Map* Symtab::EMPTY = nullptr;

Symtab* Symtab::instance($Context* context) {
	$init(Symtab);
	$var(Symtab, instance, $cast(Symtab, $nc(context)->get(Symtab::symtabKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Symtab, context));
	}
	return instance;
}

$Symbol$VarSymbol* Symtab::getClassField($Type* type, $Types* types) {
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $of($new($Types$UniqueType, type, types)));
	return $cast($Symbol$VarSymbol, $nc(this->classFields)->computeIfAbsent(var$0, static_cast<$Function*>($$new(Symtab$$Lambda$lambda$getClassField$0, this, type, types))));
}

void Symtab::initType($Type* type, $Symbol$ClassSymbol* c) {
	$set($nc(type), tsym, c);
	$nc(this->typeOfTag)->set($nc($(type->getTag()))->ordinal(), type);
}

void Symtab::initType($Type* type, $String* name) {
	$useLocalCurrentObjectStackCache();
	initType(type, $$new($Symbol$ClassSymbol, 1, $($nc(this->names)->fromString(name)), type, this->rootPackage));
}

void Symtab::initType($Type* type, $String* name, $String* bname) {
	$useLocalCurrentObjectStackCache();
	initType(type, name);
	int32_t var$0 = $nc($($nc(type)->getTag()))->ordinal();
	$nc(this->boxedName)->set(var$0, $($nc(this->names)->fromString($$str({"java.lang."_s, bname}))));
}

$Type* Symtab::enterClass($String* s) {
	$useLocalCurrentObjectStackCache();
	return $nc($(enterClass(this->java_base, $($nc(this->names)->fromString(s)))))->type;
}

void Symtab::synthesizeEmptyInterfaceIfMissing($Type* type) {
	$var($Symbol$Completer, completer, $nc($nc(type)->tsym)->completer);
	$set($nc(type->tsym), completer, $new($Symtab$1, this, completer));
}

void Symtab::synthesizeBoxTypeIfMissing($Type* type) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ClassSymbol, sym, enterClass(this->java_base, $nc(this->boxedName)->get($nc($($nc(type)->getTag()))->ordinal())));
	$var($Symbol$Completer, completer, $nc(sym)->completer);
	$set(sym, completer, $new($Symtab$2, this, completer, type));
}

$Type* Symtab::enterSyntheticAnnotation($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($Type$ClassType, type, $cast($Type$ClassType, $nc($(enterClass(this->java_base, $($nc(this->names)->fromString(name)))))->type));
	$var($Symbol$ClassSymbol, sym, $cast($Symbol$ClassSymbol, $nc(type)->tsym));
	$init($Symbol$Completer);
	$set($nc(sym), completer, $Symbol$Completer::NULL_COMPLETER);
	sym->flags_field = ((1 | 0x40000000) | 8192) | 512;
	$set(sym, erasure_field, type);
	$set(sym, members_field, $Scope$WriteableScope::create(sym));
	$set(type, typarams_field, $List::nil());
	$set(type, allparams_field, $List::nil());
	$set(type, supertype_field, this->annotationType);
	$set(type, interfaces_field, $List::nil());
	return type;
}

void Symtab::init$($Context* context) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	$set(this, byteType, $new($Type$JCPrimitiveType, $TypeTag::BYTE, nullptr));
	$set(this, charType, $new($Type$JCPrimitiveType, $TypeTag::CHAR, nullptr));
	$set(this, shortType, $new($Type$JCPrimitiveType, $TypeTag::SHORT, nullptr));
	$set(this, intType, $new($Type$JCPrimitiveType, $TypeTag::INT, nullptr));
	$set(this, longType, $new($Type$JCPrimitiveType, $TypeTag::LONG, nullptr));
	$set(this, floatType, $new($Type$JCPrimitiveType, $TypeTag::FLOAT, nullptr));
	$set(this, doubleType, $new($Type$JCPrimitiveType, $TypeTag::DOUBLE, nullptr));
	$set(this, booleanType, $new($Type$JCPrimitiveType, $TypeTag::BOOLEAN, nullptr));
	$set(this, botType, $new($Type$BottomType));
	$set(this, voidType, $new($Type$JCVoidType));
	$set(this, typeOfTag, $new($TypeArray, $TypeTag::getTypeTagCount()));
	$set(this, boxedName, $new($NameArray, $TypeTag::getTypeTagCount()));
	$set(this, classes, $new($HashMap));
	$set(this, packages, $new($HashMap));
	$set(this, modules, $new($LinkedHashMap));
	$set(this, classFields, $new($HashMap));
	$nc(context)->put(Symtab::symtabKey, $of(this));
	$set(this, names, $Names::instance(context));
	$set(this, unknownType, $new($Type$UnknownType));
	$set(this, messages, $JavacMessages::instance(context));
	$var($MissingInfoHandler, missingInfoHandler, $MissingInfoHandler::instance(context));
	$Target* target = $Target::instance(context);
	$set(this, rootPackage, $new($Symbol$RootPackageSymbol, $nc(this->names)->empty, nullptr, missingInfoHandler, $nc(target)->runtimeUseNestAccess()));
	$set(this, unnamedModule, $new($Symtab$3, this, $nc(this->names)->empty, nullptr));
	addRootPackageFor(this->unnamedModule);
	$set($nc(this->unnamedModule), enclosedPackages, $nc($nc(this->unnamedModule)->enclosedPackages)->prepend($nc(this->unnamedModule)->unnamedPackage));
	$set(this, errModule, $new($Symtab$4, this, $nc(this->names)->empty, nullptr));
	addRootPackageFor(this->errModule);
	$set(this, noModule, $new($Symtab$5, this, $nc(this->names)->empty, nullptr));
	addRootPackageFor(this->noModule);
	$init($Kinds$Kind);
	$init($Type);
	$set(this, noSymbol, $new($Symtab$6, this, $Kinds$Kind::NIL, 0, $nc(this->names)->empty, $Type::noType, this->rootPackage));
	$set(this, errSymbol, $new($Symbol$ClassSymbol, (1 | 8) | 0x40000000, $nc(this->names)->any, nullptr, this->rootPackage));
	$set(this, errType, $new($Type$ErrorType, this->errSymbol, static_cast<$Type*>($Type::noType)));
	$set(this, unknownSymbol, $new($Symbol$ClassSymbol, (1 | 8) | 0x40000000, $($nc(this->names)->fromString("<any?>"_s)), nullptr, this->rootPackage));
	$set($nc(this->unknownSymbol), members_field, $new($Scope$ErrorScope, this->unknownSymbol));
	$set($nc(this->unknownSymbol), type, this->unknownType);
	initType(this->byteType, "byte"_s, "Byte"_s);
	initType(this->shortType, "short"_s, "Short"_s);
	initType(this->charType, "char"_s, "Character"_s);
	initType(this->intType, "int"_s, "Integer"_s);
	initType(this->longType, "long"_s, "Long"_s);
	initType(this->floatType, "float"_s, "Float"_s);
	initType(this->doubleType, "double"_s, "Double"_s);
	initType(this->booleanType, "boolean"_s, "Boolean"_s);
	initType(this->voidType, "void"_s, "Void"_s);
	initType(this->botType, "<nulltype>"_s);
	initType(this->errType, this->errSymbol);
	initType(this->unknownType, this->unknownSymbol);
	$set(this, arrayClass, $new($Symbol$ClassSymbol, 1 | 0x40000000, $nc(this->names)->Array, this->noSymbol));
	$set(this, boundClass, $new($Symbol$ClassSymbol, 1 | 0x40000000, $nc(this->names)->Bound, this->noSymbol));
	$set($nc(this->boundClass), members_field, $new($Scope$ErrorScope, this->boundClass));
	$set(this, methodClass, $new($Symbol$ClassSymbol, 1 | 0x40000000, $nc(this->names)->Method, this->noSymbol));
	$set($nc(this->methodClass), members_field, $new($Scope$ErrorScope, this->boundClass));
	$set(this, predefClass, $new($Symbol$ClassSymbol, 1 | 0x40000000, $nc(this->names)->empty, this->rootPackage));
	$var($Scope$WriteableScope, scope, $Scope$WriteableScope::create(this->predefClass));
	$set($nc(this->predefClass), members_field, scope);
	$set(this, initialCompleter, $nc($($ClassFinder::instance(context)))->getCompleter());
	$set($nc(this->rootPackage), members_field, $Scope$WriteableScope::create(this->rootPackage));
	$nc(scope)->enter($nc(this->byteType)->tsym);
	scope->enter($nc(this->shortType)->tsym);
	scope->enter($nc(this->charType)->tsym);
	scope->enter($nc(this->intType)->tsym);
	scope->enter($nc(this->longType)->tsym);
	scope->enter($nc(this->floatType)->tsym);
	scope->enter($nc(this->doubleType)->tsym);
	scope->enter($nc(this->booleanType)->tsym);
	scope->enter($nc(this->errType)->tsym);
	scope->enter(this->errSymbol);
	$Source* source = $Source::instance(context);
	$init($Source$Feature);
	if ($Source$Feature::MODULES->allowedInSource(source)) {
		$set(this, java_base, enterModule($nc(this->names)->java_base));
		$init($Symbol$Completer);
		$set($nc(this->java_base), completer, $Symbol$Completer::NULL_COMPLETER);
		$set($nc(this->java_base), visiblePackages, $Collections::emptyMap());
	} else {
		$set(this, java_base, this->noModule);
	}
	$set(this, moduleCompleter, $nc($($Modules::instance(context)))->getCompleter());
	$set(this, objectType, enterClass("java.lang.Object"_s));
	$set(this, objectMethodsType, enterClass("java.lang.runtime.ObjectMethods"_s));
	$set(this, objectsType, enterClass("java.util.Objects"_s));
	$set(this, classType, enterClass("java.lang.Class"_s));
	$set(this, stringType, enterClass("java.lang.String"_s));
	$set(this, stringBufferType, enterClass("java.lang.StringBuffer"_s));
	$set(this, stringBuilderType, enterClass("java.lang.StringBuilder"_s));
	$set(this, cloneableType, enterClass("java.lang.Cloneable"_s));
	$set(this, throwableType, enterClass("java.lang.Throwable"_s));
	$set(this, serializableType, enterClass("java.io.Serializable"_s));
	$set(this, serializedLambdaType, enterClass("java.lang.invoke.SerializedLambda"_s));
	$set(this, varHandleType, enterClass("java.lang.invoke.VarHandle"_s));
	$set(this, methodHandleType, enterClass("java.lang.invoke.MethodHandle"_s));
	$set(this, methodHandleLookupType, enterClass("java.lang.invoke.MethodHandles$Lookup"_s));
	$set(this, methodTypeType, enterClass("java.lang.invoke.MethodType"_s));
	$set(this, errorType, enterClass("java.lang.Error"_s));
	$set(this, illegalArgumentExceptionType, enterClass("java.lang.IllegalArgumentException"_s));
	$set(this, interruptedExceptionType, enterClass("java.lang.InterruptedException"_s));
	$set(this, exceptionType, enterClass("java.lang.Exception"_s));
	$set(this, runtimeExceptionType, enterClass("java.lang.RuntimeException"_s));
	$set(this, classNotFoundExceptionType, enterClass("java.lang.ClassNotFoundException"_s));
	$set(this, noClassDefFoundErrorType, enterClass("java.lang.NoClassDefFoundError"_s));
	$set(this, noSuchFieldErrorType, enterClass("java.lang.NoSuchFieldError"_s));
	$set(this, assertionErrorType, enterClass("java.lang.AssertionError"_s));
	$set(this, incompatibleClassChangeErrorType, enterClass("java.lang.IncompatibleClassChangeError"_s));
	$set(this, cloneNotSupportedExceptionType, enterClass("java.lang.CloneNotSupportedException"_s));
	$set(this, annotationType, enterClass("java.lang.annotation.Annotation"_s));
	$set(this, classLoaderType, enterClass("java.lang.ClassLoader"_s));
	$set(this, enumSym, enterClass(this->java_base, $nc(this->names)->java_lang_Enum));
	$var($List, var$0, $List::nil());
	$var($Type, var$1, static_cast<$Type*>(this->voidType));
	$set(this, enumFinalFinalize, $new($Symbol$MethodSymbol, (4 | 16) | (int64_t)0x0000002000000000, $nc(this->names)->finalize$, $$new($Type$MethodType, var$0, var$1, $($List::nil()), this->methodClass), this->enumSym));
	$set(this, listType, enterClass("java.util.List"_s));
	$set(this, collectionsType, enterClass("java.util.Collections"_s));
	$set(this, comparableType, enterClass("java.lang.Comparable"_s));
	$set(this, comparatorType, enterClass("java.util.Comparator"_s));
	$set(this, arraysType, enterClass("java.util.Arrays"_s));
	$set(this, iterableType, enterClass("java.lang.Iterable"_s));
	$set(this, iteratorType, enterClass("java.util.Iterator"_s));
	$set(this, annotationTargetType, enterClass("java.lang.annotation.Target"_s));
	$set(this, overrideType, enterClass("java.lang.Override"_s));
	$set(this, retentionType, enterClass("java.lang.annotation.Retention"_s));
	$set(this, deprecatedType, enterClass("java.lang.Deprecated"_s));
	$set(this, suppressWarningsType, enterClass("java.lang.SuppressWarnings"_s));
	$set(this, supplierType, enterClass("java.util.function.Supplier"_s));
	$set(this, inheritedType, enterClass("java.lang.annotation.Inherited"_s));
	$set(this, repeatableType, enterClass("java.lang.annotation.Repeatable"_s));
	$set(this, documentedType, enterClass("java.lang.annotation.Documented"_s));
	$set(this, elementTypeType, enterClass("java.lang.annotation.ElementType"_s));
	$set(this, systemType, enterClass("java.lang.System"_s));
	$set(this, autoCloseableType, enterClass("java.lang.AutoCloseable"_s));
	$var($List, var$2, $List::nil());
	$var($Type, var$3, static_cast<$Type*>(this->voidType));
	$set(this, autoCloseableClose, $new($Symbol$MethodSymbol, 1, $nc(this->names)->close, $$new($Type$MethodType, var$2, var$3, $($List::of(this->exceptionType)), this->methodClass), $nc(this->autoCloseableType)->tsym));
	$set(this, trustMeType, enterClass("java.lang.SafeVarargs"_s));
	$set(this, nativeHeaderType, enterClass("java.lang.annotation.Native"_s));
	$set(this, lambdaMetafactory, enterClass("java.lang.invoke.LambdaMetafactory"_s));
	$set(this, stringConcatFactory, enterClass("java.lang.invoke.StringConcatFactory"_s));
	$set(this, functionalInterfaceType, enterClass("java.lang.FunctionalInterface"_s));
	$set(this, previewFeatureType, enterClass("jdk.internal.javac.PreviewFeature"_s));
	$set(this, previewFeatureInternalType, enterSyntheticAnnotation("jdk.internal.PreviewFeature+Annotation"_s));
	$set(this, typeDescriptorType, enterClass("java.lang.invoke.TypeDescriptor"_s));
	$set(this, recordType, enterClass("java.lang.Record"_s));
	$set(this, switchBootstrapsType, enterClass("java.lang.runtime.SwitchBootstraps"_s));
	$set(this, valueBasedType, enterClass("jdk.internal.ValueBased"_s));
	$set(this, valueBasedInternalType, enterSyntheticAnnotation("jdk.internal.ValueBased+Annotation"_s));
	synthesizeEmptyInterfaceIfMissing(this->autoCloseableType);
	synthesizeEmptyInterfaceIfMissing(this->cloneableType);
	synthesizeEmptyInterfaceIfMissing(this->serializableType);
	synthesizeEmptyInterfaceIfMissing(this->lambdaMetafactory);
	synthesizeEmptyInterfaceIfMissing(this->serializedLambdaType);
	synthesizeEmptyInterfaceIfMissing(this->stringConcatFactory);
	synthesizeBoxTypeIfMissing(this->doubleType);
	synthesizeBoxTypeIfMissing(this->floatType);
	synthesizeBoxTypeIfMissing(this->voidType);
	$set(this, proprietaryType, enterSyntheticAnnotation("sun.Proprietary+Annotation"_s));
	$set(this, profileType, enterSyntheticAnnotation("jdk.Profile+Annotation"_s));
	$var($Symbol$MethodSymbol, m, $new($Symbol$MethodSymbol, 1 | 1024, $nc(this->names)->value, this->intType, $nc(this->profileType)->tsym));
	$nc($($nc($nc(this->profileType)->tsym)->members()))->enter(m);
	$var($Type$ClassType, arrayClassType, $cast($Type$ClassType, $nc(this->arrayClass)->type));
	$set($nc(arrayClassType), supertype_field, this->objectType);
	$set(arrayClassType, interfaces_field, $List::of(this->cloneableType, this->serializableType));
	$set($nc(this->arrayClass), members_field, $Scope$WriteableScope::create(this->arrayClass));
	$set(this, lengthVar, $new($Symbol$VarSymbol, 1 | 16, $nc(this->names)->length, this->intType, this->arrayClass));
	$nc($($nc(this->arrayClass)->members()))->enter(this->lengthVar);
	$var($List, var$4, $List::nil());
	$var($Type, var$5, this->objectType);
	$set(this, arrayCloneMethod, $new($Symbol$MethodSymbol, 1, $nc(this->names)->clone$, $$new($Type$MethodType, var$4, var$5, $($List::nil()), this->methodClass), this->arrayClass));
	$nc($($nc(this->arrayClass)->members()))->enter(this->arrayCloneMethod);
	if (this->java_base != this->noModule) {
		$set($nc(this->java_base), completer, static_cast<$Symbol$Completer*>($new(Symtab$$Lambda$complete$1, static_cast<$Symbol$Completer*>($nc(this->moduleCompleter)))));
	}
}

$Symbol$ClassSymbol* Symtab::defineClass($Name* name, $Symbol* owner) {
	$var($Symbol$ClassSymbol, c, $new($Symbol$ClassSymbol, 0, name, owner));
	$set(c, completer, this->initialCompleter);
	return c;
}

$Symbol$ClassSymbol* Symtab::enterClass($Symbol$ModuleSymbol* msym, $Name* name, $Symbol$TypeSymbol* owner) {
	$useLocalCurrentObjectStackCache();
	$Assert::checkNonNull(msym);
	$var($Name, flatname, $Symbol$TypeSymbol::formFlatName(name, owner));
	$var($Symbol$ClassSymbol, c, getClass(msym, flatname));
	if (c == nullptr) {
		$assign(c, defineClass(name, owner));
		doEnterClass(msym, c);
	} else {
		$init($Kinds$Kind);
		if ((c->name != name || !$equals(c->owner, owner)) && $nc(owner)->kind == $Kinds$Kind::TYP && $nc(c->owner)->kind == $Kinds$Kind::PCK) {
			$nc($($nc(c->owner)->members()))->remove(c);
			$set(c, name, name);
			$set(c, owner, owner);
			$set(c, fullname, $Symbol$ClassSymbol::formFullName(name, owner));
		}
	}
	return c;
}

$Symbol$ClassSymbol* Symtab::getClass($Symbol$ModuleSymbol* msym, $Name* flatName) {
	$useLocalCurrentObjectStackCache();
	$Assert::checkNonNull($of(msym), static_cast<$Supplier*>($$new(Symtab$$Lambda$toString$2, static_cast<$Name*>($nc(flatName)))));
	return $cast($Symbol$ClassSymbol, $nc(($cast($Map, $($nc(this->classes)->getOrDefault(flatName, $($Collections::emptyMap()))))))->get(msym));
}

$Symbol$PackageSymbol* Symtab::lookupPackage($Symbol$ModuleSymbol* msym, $Name* flatName) {
	return lookupPackage(msym, flatName, false);
}

$Symbol$PackageSymbol* Symtab::lookupPackage($Symbol$ModuleSymbol* msym, $Name* flatName, bool onlyExisting) {
	$useLocalCurrentObjectStackCache();
	$Assert::checkNonNull(msym);
	if ($nc(flatName)->isEmpty()) {
		return $nc(msym)->unnamedPackage;
	}
	if (msym == this->noModule) {
		return enterPackage(msym, flatName);
	}
	$nc(msym)->complete();
	$var($Symbol$PackageSymbol, pack, nullptr);
	$assign(pack, $cast($Symbol$PackageSymbol, $nc(msym->visiblePackages)->get(flatName)));
	if (pack != nullptr) {
		return pack;
	}
	$assign(pack, getPackage(msym, flatName));
	if ((pack != nullptr && pack->exists()) || onlyExisting) {
		return pack;
	}
	bool dependsOnUnnamed = msym->requires != nullptr && $nc($($nc($($nc(msym->requires)->stream()))->map(static_cast<$Function*>($$new(Symtab$$Lambda$lambda$lookupPackage$1$3)))))->anyMatch(static_cast<$Predicate*>($$new(Symtab$$Lambda$lambda$lookupPackage$2$4, this)));
	if (dependsOnUnnamed) {
		$var($Symbol$PackageSymbol, unnamedPack, getPackage(this->unnamedModule, flatName));
		if (unnamedPack != nullptr && unnamedPack->exists()) {
			$nc(msym->visiblePackages)->put(unnamedPack->fullname, unnamedPack);
			return unnamedPack;
		}
		$assign(pack, enterPackage(msym, flatName));
		$nc(pack)->complete();
		if (pack->exists()) {
			return pack;
		}
		$assign(unnamedPack, enterPackage(this->unnamedModule, flatName));
		$nc(unnamedPack)->complete();
		if (unnamedPack->exists()) {
			$nc(msym->visiblePackages)->put(unnamedPack->fullname, unnamedPack);
			return unnamedPack;
		}
		return pack;
	}
	return enterPackage(msym, flatName);
}

void Symtab::removeClass($Symbol$ModuleSymbol* msym, $Name* flatName) {
	$nc(($cast($Map, $($nc(this->classes)->getOrDefault(flatName, Symtab::EMPTY)))))->remove(msym);
}

$Iterable* Symtab::getAllClasses() {
	return static_cast<$Iterable*>($new(Symtab$$Lambda$lambda$getAllClasses$4$5, this));
}

void Symtab::doEnterClass($Symbol$ModuleSymbol* msym, $Symbol$ClassSymbol* cs) {
	$useLocalCurrentObjectStackCache();
	$nc(($cast($Map, $($nc(this->classes)->computeIfAbsent($nc(cs)->flatname, static_cast<$Function*>($$new(Symtab$$Lambda$lambda$doEnterClass$5$6)))))))->put(msym, cs);
}

$Symbol$ClassSymbol* Symtab::enterClass($Symbol$ModuleSymbol* msym, $Name* flatname) {
	$useLocalCurrentObjectStackCache();
	$Assert::checkNonNull(msym);
	$var($Symbol$PackageSymbol, ps, lookupPackage(msym, $($Convert::packagePart(flatname))));
	$Assert::checkNonNull(ps);
	$Assert::checkNonNull($nc(ps)->modle);
	$var($Symbol$ClassSymbol, c, getClass($nc(ps)->modle, flatname));
	if (c == nullptr) {
		$assign(c, defineClass($($Convert::shortName(flatname)), ps));
		doEnterClass($nc(ps)->modle, c);
		return c;
	} else {
		return c;
	}
}

bool Symtab::packageExists($Symbol$ModuleSymbol* msym, $Name* fullname) {
	$Assert::checkNonNull(msym);
	$var($Symbol$PackageSymbol, pack, lookupPackage(msym, fullname, true));
	return pack != nullptr && pack->exists();
}

$Symbol$PackageSymbol* Symtab::enterPackage($Symbol$ModuleSymbol* currModule, $Name* fullname) {
	$useLocalCurrentObjectStackCache();
	$Assert::checkNonNull(currModule);
	$var($Symbol$PackageSymbol, p, getPackage(currModule, fullname));
	if (p == nullptr) {
		bool var$0 = !$nc(fullname)->isEmpty();
		$Assert::check(var$0, static_cast<$Supplier*>($$new(Symtab$$Lambda$lambda$enterPackage$6$7, currModule)));
		$var($Name, var$1, $Convert::shortName(fullname));
		$assign(p, $new($Symbol$PackageSymbol, var$1, $(enterPackage(currModule, $($Convert::packagePart(fullname))))));
		$set(p, completer, this->initialCompleter);
		$set(p, modle, currModule);
		doEnterPackage(currModule, p);
	}
	return p;
}

void Symtab::doEnterPackage($Symbol$ModuleSymbol* msym, $Symbol$PackageSymbol* pack) {
	$useLocalCurrentObjectStackCache();
	$nc(($cast($Map, $($nc(this->packages)->computeIfAbsent($nc(pack)->fullname, static_cast<$Function*>($$new(Symtab$$Lambda$lambda$doEnterClass$5$6)))))))->put(msym, pack);
	$set($nc(msym), enclosedPackages, $nc(msym->enclosedPackages)->prepend(pack));
}

void Symtab::addRootPackageFor($Symbol$ModuleSymbol* module) {
	doEnterPackage(module, this->rootPackage);
	$var($Symbol$PackageSymbol, unnamedPackage, $new($Symtab$7, this, $nc(this->names)->empty, this->rootPackage));
	$set(unnamedPackage, modle, module);
	$set(unnamedPackage, completer, static_cast<$Symbol$Completer*>($new(Symtab$$Lambda$lambda$addRootPackageFor$8$8, this)));
	unnamedPackage->flags_field |= 0x00800000;
	$set($nc(module), unnamedPackage, unnamedPackage);
}

$Symbol$PackageSymbol* Symtab::getPackage($Symbol$ModuleSymbol* module, $Name* fullname) {
	$useLocalCurrentObjectStackCache();
	return $cast($Symbol$PackageSymbol, $nc(($cast($Map, $($nc(this->packages)->getOrDefault(fullname, $($Collections::emptyMap()))))))->get(module));
}

$Symbol$ModuleSymbol* Symtab::enterModule($Name* name) {
	$var($Symbol$ModuleSymbol, msym, $cast($Symbol$ModuleSymbol, $nc(this->modules)->get(name)));
	if (msym == nullptr) {
		$assign(msym, $Symbol$ModuleSymbol::create(name, $nc(this->names)->module_info));
		addRootPackageFor(msym);
		$set($nc(msym), completer, static_cast<$Symbol$Completer*>($new(Symtab$$Lambda$lambda$enterModule$9$9, this)));
		$nc(this->modules)->put(name, msym);
	}
	return msym;
}

$Symbol$ModuleSymbol* Symtab::getModule($Name* name) {
	return $cast($Symbol$ModuleSymbol, $nc(this->modules)->get(name));
}

$Symbol$ModuleSymbol* Symtab::inferModule($Name* packageName) {
	$useLocalCurrentObjectStackCache();
	if ($nc(packageName)->isEmpty()) {
		return this->java_base == this->noModule ? this->noModule : this->unnamedModule;
	}
	$var($Symbol$ModuleSymbol, msym, nullptr);
	$var($Map, map, $cast($Map, $nc(this->packages)->get(packageName)));
	if (map == nullptr) {
		return nullptr;
	}
	{
		$var($Iterator, i$, $nc($($nc(map)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				if (!$nc($($nc(($cast($Symbol$PackageSymbol, $($nc(e)->getValue()))))->members()))->isEmpty()) {
					if (msym == nullptr) {
						$assign(msym, $cast($Symbol$ModuleSymbol, e->getKey()));
					} else {
						return nullptr;
					}
				}
			}
		}
	}
	return msym;
}

$List* Symtab::listPackageModules($Name* packageName) {
	$useLocalCurrentObjectStackCache();
	if ($nc(packageName)->isEmpty()) {
		return $List::nil();
	}
	$var($List, result, $List::nil());
	$var($Map, map, $cast($Map, $nc(this->packages)->get(packageName)));
	if (map != nullptr) {
		{
			$var($Iterator, i$, $nc($(map->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
				{
					if (!$nc($($nc(($cast($Symbol$PackageSymbol, $($nc(e)->getValue()))))->members()))->isEmpty()) {
						$assign(result, $nc(result)->prepend($cast($Symbol$ModuleSymbol, $(e->getKey()))));
					}
				}
			}
		}
	}
	return result;
}

$Collection* Symtab::getAllModules() {
	return $nc(this->modules)->values();
}

$Iterable* Symtab::getClassesForName($Name* candidate) {
	$useLocalCurrentObjectStackCache();
	return $nc(($cast($Map, $($nc(this->classes)->getOrDefault(candidate, $($Collections::emptyMap()))))))->values();
}

$Iterable* Symtab::getPackagesForName($Name* candidate) {
	$useLocalCurrentObjectStackCache();
	return $nc(($cast($Map, $($nc(this->packages)->getOrDefault(candidate, $($Collections::emptyMap()))))))->values();
}

void Symtab::lambda$enterModule$9($Symbol* s) {
	$nc(this->moduleCompleter)->complete(s);
}

void Symtab::lambda$addRootPackageFor$8($Symbol* s) {
	$nc(this->initialCompleter)->complete(s);
}

$String* Symtab::lambda$enterPackage$6($Symbol$ModuleSymbol* currModule) {
	$init(Symtab);
	return $str({"rootPackage missing!; currModule: "_s, currModule});
}

$Map* Symtab::lambda$doEnterClass$5($Name* n) {
	$init(Symtab);
	return $new($HashMap);
}

$Iterator* Symtab::lambda$getAllClasses$4() {
	$useLocalCurrentObjectStackCache();
	$var($Iterable, var$0, static_cast<$Iterable*>($nc(this->classes)->values()));
	return $Iterators::createCompoundIterator(var$0, static_cast<$Function*>($$new(Symtab$$Lambda$lambda$getAllClasses$3$10)));
}

$Iterator* Symtab::lambda$getAllClasses$3($Map* v) {
	$init(Symtab);
	return $nc($($nc(v)->values()))->iterator();
}

bool Symtab::lambda$lookupPackage$2($Symbol$ModuleSymbol* mod) {
	return mod == this->unnamedModule;
}

$Symbol$ModuleSymbol* Symtab::lambda$lookupPackage$1($Directive$RequiresDirective* rd) {
	$init(Symtab);
	return $nc(rd)->module;
}

$Symbol$VarSymbol* Symtab::lambda$getClassField$0($Type* type, $Types* types, $Types$UniqueType* k) {
	$useLocalCurrentObjectStackCache();
	$var($Type, arg, nullptr);
	$init($TypeTag);
	bool var$0 = $nc(type)->getTag() == $TypeTag::ARRAY;
	if (var$0 || $nc(type)->getTag() == $TypeTag::CLASS) {
		$assign(arg, $nc(types)->erasure(type));
	} else if (type->isPrimitiveOrVoid()) {
		$assign(arg, $nc($($nc(types)->boxedClass(type)))->type);
	} else {
		$throwNew($AssertionError, $of(type));
	}
	$var($Type, var$1, $nc(this->classType)->getEnclosingType());
	$var($Type, t, $new($Type$ClassType, var$1, $($List::of(arg)), $nc(this->classType)->tsym));
	return $new($Symbol$VarSymbol, (8 | 1) | 16, $nc(this->names)->_class, t, $nc(type)->tsym);
}

void clinit$Symtab($Class* class$) {
	$assignStatic(Symtab::symtabKey, $new($Context$Key));
	$assignStatic(Symtab::EMPTY, $new($HashMap));
}

Symtab::Symtab() {
}

$Class* Symtab::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Symtab$$Lambda$lambda$getClassField$0::classInfo$.name)) {
			return Symtab$$Lambda$lambda$getClassField$0::load$(name, initialize);
		}
		if (name->equals(Symtab$$Lambda$complete$1::classInfo$.name)) {
			return Symtab$$Lambda$complete$1::load$(name, initialize);
		}
		if (name->equals(Symtab$$Lambda$toString$2::classInfo$.name)) {
			return Symtab$$Lambda$toString$2::load$(name, initialize);
		}
		if (name->equals(Symtab$$Lambda$lambda$lookupPackage$1$3::classInfo$.name)) {
			return Symtab$$Lambda$lambda$lookupPackage$1$3::load$(name, initialize);
		}
		if (name->equals(Symtab$$Lambda$lambda$lookupPackage$2$4::classInfo$.name)) {
			return Symtab$$Lambda$lambda$lookupPackage$2$4::load$(name, initialize);
		}
		if (name->equals(Symtab$$Lambda$lambda$getAllClasses$4$5::classInfo$.name)) {
			return Symtab$$Lambda$lambda$getAllClasses$4$5::load$(name, initialize);
		}
		if (name->equals(Symtab$$Lambda$lambda$doEnterClass$5$6::classInfo$.name)) {
			return Symtab$$Lambda$lambda$doEnterClass$5$6::load$(name, initialize);
		}
		if (name->equals(Symtab$$Lambda$lambda$enterPackage$6$7::classInfo$.name)) {
			return Symtab$$Lambda$lambda$enterPackage$6$7::load$(name, initialize);
		}
		if (name->equals(Symtab$$Lambda$lambda$addRootPackageFor$8$8::classInfo$.name)) {
			return Symtab$$Lambda$lambda$addRootPackageFor$8$8::load$(name, initialize);
		}
		if (name->equals(Symtab$$Lambda$lambda$enterModule$9$9::classInfo$.name)) {
			return Symtab$$Lambda$lambda$enterModule$9$9::load$(name, initialize);
		}
		if (name->equals(Symtab$$Lambda$lambda$getAllClasses$3$10::classInfo$.name)) {
			return Symtab$$Lambda$lambda$getAllClasses$3$10::load$(name, initialize);
		}
	}
	$loadClass(Symtab, name, initialize, &_Symtab_ClassInfo_, clinit$Symtab, allocate$Symtab);
	return class$;
}

$Class* Symtab::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com