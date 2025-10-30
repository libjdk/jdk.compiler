#include <com/sun/tools/javac/code/Types$CaptureScanner.h>

#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef SYNTHETIC

using $Flags = ::com::sun::tools::javac::code::Flags;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $Types$SimpleVisitor = ::com::sun::tools::javac::code::Types$SimpleVisitor;
using $List = ::com::sun::tools::javac::util::List;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
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
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Types$CaptureScanner$$Lambda$lambda$visitClassType$0 : public $Consumer {
	$class(Types$CaptureScanner$$Lambda$lambda$visitClassType$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$(Types$CaptureScanner* inst, $Set* seen) {
		$set(this, inst$, inst);
		$set(this, seen, seen);
	}
	virtual void accept(Object$* s) override {
		$nc(inst$)->lambda$visitClassType$0(seen, $cast($Type, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Types$CaptureScanner$$Lambda$lambda$visitClassType$0>());
	}
	Types$CaptureScanner* inst$ = nullptr;
	$Set* seen = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Types$CaptureScanner$$Lambda$lambda$visitClassType$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Types$CaptureScanner$$Lambda$lambda$visitClassType$0, inst$)},
	{"seen", "Ljava/util/Set;", nullptr, $PUBLIC, $field(Types$CaptureScanner$$Lambda$lambda$visitClassType$0, seen)},
	{}
};
$MethodInfo Types$CaptureScanner$$Lambda$lambda$visitClassType$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$CaptureScanner;Ljava/util/Set;)V", nullptr, $PUBLIC, $method(static_cast<void(Types$CaptureScanner$$Lambda$lambda$visitClassType$0::*)(Types$CaptureScanner*,$Set*)>(&Types$CaptureScanner$$Lambda$lambda$visitClassType$0::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Types$CaptureScanner$$Lambda$lambda$visitClassType$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Types$CaptureScanner$$Lambda$lambda$visitClassType$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Types$CaptureScanner$$Lambda$lambda$visitClassType$0::load$($String* name, bool initialize) {
	$loadClass(Types$CaptureScanner$$Lambda$lambda$visitClassType$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Types$CaptureScanner$$Lambda$lambda$visitClassType$0::class$ = nullptr;

$FieldInfo _Types$CaptureScanner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$CaptureScanner, this$0)},
	{}
};

$MethodInfo _Types$CaptureScanner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$CaptureScanner::*)($Types*)>(&Types$CaptureScanner::init$))},
	{"lambda$visitClassType$0", "(Ljava/util/Set;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Types$CaptureScanner::*)($Set*,$Type*)>(&Types$CaptureScanner::lambda$visitClassType$0))},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/util/Set;)Ljava/lang/Void;", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;)Ljava/lang/Void;", $PUBLIC},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/util/Set;)Ljava/lang/Void;", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;)Ljava/lang/Void;", $PUBLIC},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/util/Set;)Ljava/lang/Void;", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;)Ljava/lang/Void;", $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/util/Set;)Ljava/lang/Void;", "(Lcom/sun/tools/javac/code/Type;Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;)Ljava/lang/Void;", $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/util/Set;)Ljava/lang/Void;", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;)Ljava/lang/Void;", $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/util/Set;)Ljava/lang/Void;", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;)Ljava/lang/Void;", $PUBLIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Types$CaptureScanner_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$CaptureScanner", "com.sun.tools.javac.code.Types", "CaptureScanner", 0},
	{"com.sun.tools.javac.code.Types$SimpleVisitor", "com.sun.tools.javac.code.Types", "SimpleVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$CaptureScanner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$CaptureScanner",
	"com.sun.tools.javac.code.Types$SimpleVisitor",
	nullptr,
	_Types$CaptureScanner_FieldInfo_,
	_Types$CaptureScanner_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$SimpleVisitor<Ljava/lang/Void;Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;>;",
	nullptr,
	_Types$CaptureScanner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$CaptureScanner($Class* clazz) {
	return $of($alloc(Types$CaptureScanner));
}

void Types$CaptureScanner::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$SimpleVisitor::init$();
}

$Void* Types$CaptureScanner::visitType($Type* t, $Set* types) {
	return nullptr;
}

$Void* Types$CaptureScanner::visitClassType($Type$ClassType* t, $Set* seen) {
	$useLocalCurrentObjectStackCache();
	if ($nc(t)->isCompound()) {
		$nc($(this->this$0->directSupertypes(t)))->forEach(static_cast<$Consumer*>($$new(Types$CaptureScanner$$Lambda$lambda$visitClassType$0, this, seen)));
	} else {
		$nc($(t->allparams()))->forEach(static_cast<$Consumer*>($$new(Types$CaptureScanner$$Lambda$lambda$visitClassType$0, this, seen)));
	}
	return nullptr;
}

$Void* Types$CaptureScanner::visitArrayType($Type$ArrayType* t, $Set* seen) {
	return $cast($Void, visit($nc(t)->elemtype, seen));
}

$Void* Types$CaptureScanner::visitWildcardType($Type$WildcardType* t, $Set* seen) {
	visit($nc(t)->type, seen);
	return nullptr;
}

$Void* Types$CaptureScanner::visitTypeVar($Type$TypeVar* t, $Set* seen) {
	bool var$0 = ((int64_t)($nc($nc(t)->tsym)->flags() & (uint64_t)(int64_t)$Flags::SYNTHETIC)) != 0;
	if (var$0 && $nc(seen)->add(t)) {
		visit($(t->getUpperBound()), seen);
	}
	return nullptr;
}

$Void* Types$CaptureScanner::visitCapturedType($Type$CapturedType* t, $Set* seen) {
	$useLocalCurrentObjectStackCache();
	if ($nc(seen)->add(t)) {
		visit($($nc(t)->getUpperBound()), seen);
		visit($($nc(t)->getLowerBound()), seen);
	}
	return nullptr;
}

$Object* Types$CaptureScanner::visitCapturedType($Type$CapturedType* t, Object$* seen) {
	return $of(this->visitCapturedType(t, $cast($Set, seen)));
}

$Object* Types$CaptureScanner::visitTypeVar($Type$TypeVar* t, Object$* seen) {
	return $of(this->visitTypeVar(t, $cast($Set, seen)));
}

$Object* Types$CaptureScanner::visitArrayType($Type$ArrayType* t, Object$* seen) {
	return $of(this->visitArrayType(t, $cast($Set, seen)));
}

$Object* Types$CaptureScanner::visitWildcardType($Type$WildcardType* t, Object$* seen) {
	return $of(this->visitWildcardType(t, $cast($Set, seen)));
}

$Object* Types$CaptureScanner::visitClassType($Type$ClassType* t, Object$* seen) {
	return $of(this->visitClassType(t, $cast($Set, seen)));
}

$Object* Types$CaptureScanner::visitType($Type* t, Object$* types) {
	return $of(this->visitType(t, $cast($Set, types)));
}

void Types$CaptureScanner::lambda$visitClassType$0($Set* seen, $Type* s) {
	visit(s, seen);
}

Types$CaptureScanner::Types$CaptureScanner() {
}

$Class* Types$CaptureScanner::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Types$CaptureScanner$$Lambda$lambda$visitClassType$0::classInfo$.name)) {
			return Types$CaptureScanner$$Lambda$lambda$visitClassType$0::load$(name, initialize);
		}
	}
	$loadClass(Types$CaptureScanner, name, initialize, &_Types$CaptureScanner_ClassInfo_, allocate$Types$CaptureScanner);
	return class$;
}

$Class* Types$CaptureScanner::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com