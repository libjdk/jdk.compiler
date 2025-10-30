#include <com/sun/tools/javac/comp/Operators$BinaryOperatorHelper.h>

#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Operators$OperatorHelper.h>
#include <com/sun/tools/javac/comp/Operators$OperatorType.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Operators = ::com::sun::tools::javac::comp::Operators;
using $Operators$OperatorHelper = ::com::sun::tools::javac::comp::Operators$OperatorHelper;
using $Operators$OperatorType = ::com::sun::tools::javac::comp::Operators$OperatorType;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $BiPredicate = ::java::util::function::BiPredicate;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Operators$BinaryOperatorHelper$$Lambda$lambda$doLookup$0 : public $Predicate {
	$class(Operators$BinaryOperatorHelper$$Lambda$lambda$doLookup$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Operators$BinaryOperatorHelper* inst, $Type* t1, $Type* t2) {
		$set(this, inst$, inst);
		$set(this, t1, t1);
		$set(this, t2, t2);
	}
	virtual bool test(Object$* op) override {
		 return $nc(inst$)->lambda$doLookup$0(t1, t2, $cast($Symbol$OperatorSymbol, op));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$BinaryOperatorHelper$$Lambda$lambda$doLookup$0>());
	}
	Operators$BinaryOperatorHelper* inst$ = nullptr;
	$Type* t1 = nullptr;
	$Type* t2 = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Operators$BinaryOperatorHelper$$Lambda$lambda$doLookup$0::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Operators$BinaryOperatorHelper$$Lambda$lambda$doLookup$0, inst$)},
	{"t1", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Operators$BinaryOperatorHelper$$Lambda$lambda$doLookup$0, t1)},
	{"t2", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Operators$BinaryOperatorHelper$$Lambda$lambda$doLookup$0, t2)},
	{}
};
$MethodInfo Operators$BinaryOperatorHelper$$Lambda$lambda$doLookup$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Operators$BinaryOperatorHelper;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Operators$BinaryOperatorHelper$$Lambda$lambda$doLookup$0::*)(Operators$BinaryOperatorHelper*,$Type*,$Type*)>(&Operators$BinaryOperatorHelper$$Lambda$lambda$doLookup$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$BinaryOperatorHelper$$Lambda$lambda$doLookup$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$BinaryOperatorHelper$$Lambda$lambda$doLookup$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Operators$BinaryOperatorHelper$$Lambda$lambda$doLookup$0::load$($String* name, bool initialize) {
	$loadClass(Operators$BinaryOperatorHelper$$Lambda$lambda$doLookup$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$BinaryOperatorHelper$$Lambda$lambda$doLookup$0::class$ = nullptr;

class Operators$BinaryOperatorHelper$$Lambda$lambda$addBinaryOperator$1$1 : public $Supplier {
	$class(Operators$BinaryOperatorHelper$$Lambda$lambda$addBinaryOperator$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Operators$BinaryOperatorHelper* inst, $Operators$OperatorType* arg1, $Operators$OperatorType* arg2, $Operators$OperatorType* res, $ints* opcode) {
		$set(this, inst$, inst);
		$set(this, arg1, arg1);
		$set(this, arg2, arg2);
		$set(this, res, res);
		$set(this, opcode, opcode);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$addBinaryOperator$1(arg1, arg2, res, opcode));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$BinaryOperatorHelper$$Lambda$lambda$addBinaryOperator$1$1>());
	}
	Operators$BinaryOperatorHelper* inst$ = nullptr;
	$Operators$OperatorType* arg1 = nullptr;
	$Operators$OperatorType* arg2 = nullptr;
	$Operators$OperatorType* res = nullptr;
	$ints* opcode = nullptr;
	static $FieldInfo fieldInfos[6];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Operators$BinaryOperatorHelper$$Lambda$lambda$addBinaryOperator$1$1::fieldInfos[6] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Operators$BinaryOperatorHelper$$Lambda$lambda$addBinaryOperator$1$1, inst$)},
	{"arg1", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC, $field(Operators$BinaryOperatorHelper$$Lambda$lambda$addBinaryOperator$1$1, arg1)},
	{"arg2", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC, $field(Operators$BinaryOperatorHelper$$Lambda$lambda$addBinaryOperator$1$1, arg2)},
	{"res", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC, $field(Operators$BinaryOperatorHelper$$Lambda$lambda$addBinaryOperator$1$1, res)},
	{"opcode", "[I", nullptr, $PUBLIC, $field(Operators$BinaryOperatorHelper$$Lambda$lambda$addBinaryOperator$1$1, opcode)},
	{}
};
$MethodInfo Operators$BinaryOperatorHelper$$Lambda$lambda$addBinaryOperator$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Operators$BinaryOperatorHelper;Lcom/sun/tools/javac/comp/Operators$OperatorType;Lcom/sun/tools/javac/comp/Operators$OperatorType;Lcom/sun/tools/javac/comp/Operators$OperatorType;[I)V", nullptr, $PUBLIC, $method(static_cast<void(Operators$BinaryOperatorHelper$$Lambda$lambda$addBinaryOperator$1$1::*)(Operators$BinaryOperatorHelper*,$Operators$OperatorType*,$Operators$OperatorType*,$Operators$OperatorType*,$ints*)>(&Operators$BinaryOperatorHelper$$Lambda$lambda$addBinaryOperator$1$1::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$BinaryOperatorHelper$$Lambda$lambda$addBinaryOperator$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$BinaryOperatorHelper$$Lambda$lambda$addBinaryOperator$1$1",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* Operators$BinaryOperatorHelper$$Lambda$lambda$addBinaryOperator$1$1::load$($String* name, bool initialize) {
	$loadClass(Operators$BinaryOperatorHelper$$Lambda$lambda$addBinaryOperator$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$BinaryOperatorHelper$$Lambda$lambda$addBinaryOperator$1$1::class$ = nullptr;

$FieldInfo _Operators$BinaryOperatorHelper_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Operators;", nullptr, $FINAL | $SYNTHETIC, $field(Operators$BinaryOperatorHelper, this$0)},
	{}
};

$MethodInfo _Operators$BinaryOperatorHelper_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/comp/Operators;Lcom/sun/tools/javac/tree/JCTree$Tag;)V", nullptr, 0, $method(static_cast<void(Operators$BinaryOperatorHelper::*)($Operators*,$JCTree$Tag*)>(&Operators$BinaryOperatorHelper::init$))},
	{"addBinaryOperator", "(Lcom/sun/tools/javac/comp/Operators$OperatorType;Lcom/sun/tools/javac/comp/Operators$OperatorType;Lcom/sun/tools/javac/comp/Operators$OperatorType;[I)Lcom/sun/tools/javac/comp/Operators$BinaryOperatorHelper;", nullptr, $FINAL | $TRANSIENT, $method(static_cast<Operators$BinaryOperatorHelper*(Operators$BinaryOperatorHelper::*)($Operators$OperatorType*,$Operators$OperatorType*,$Operators$OperatorType*,$ints*)>(&Operators$BinaryOperatorHelper::addBinaryOperator))},
	{"doLookup", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $FINAL, $method(static_cast<$Symbol$OperatorSymbol*(Operators$BinaryOperatorHelper::*)($Type*,$Type*)>(&Operators$BinaryOperatorHelper::doLookup))},
	{"isBinaryOperatorApplicable", "(Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, 0},
	{"lambda$addBinaryOperator$1", "(Lcom/sun/tools/javac/comp/Operators$OperatorType;Lcom/sun/tools/javac/comp/Operators$OperatorType;Lcom/sun/tools/javac/comp/Operators$OperatorType;[I)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Symbol$OperatorSymbol*(Operators$BinaryOperatorHelper::*)($Operators$OperatorType*,$Operators$OperatorType*,$Operators$OperatorType*,$ints*)>(&Operators$BinaryOperatorHelper::lambda$addBinaryOperator$1))},
	{"lambda$doLookup$0", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Operators$BinaryOperatorHelper::*)($Type*,$Type*,$Symbol$OperatorSymbol*)>(&Operators$BinaryOperatorHelper::lambda$doLookup$0))},
	{"resolve", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Operators$BinaryOperatorHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Operators$BinaryOperatorHelper", "com.sun.tools.javac.comp.Operators", "BinaryOperatorHelper", $ABSTRACT},
	{"com.sun.tools.javac.comp.Operators$OperatorHelper", "com.sun.tools.javac.comp.Operators", "OperatorHelper", $ABSTRACT},
	{}
};

$ClassInfo _Operators$BinaryOperatorHelper_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.Operators$BinaryOperatorHelper",
	"com.sun.tools.javac.comp.Operators$OperatorHelper",
	"java.util.function.BiPredicate",
	_Operators$BinaryOperatorHelper_FieldInfo_,
	_Operators$BinaryOperatorHelper_MethodInfo_,
	"Lcom/sun/tools/javac/comp/Operators$OperatorHelper;Ljava/util/function/BiPredicate<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;>;",
	nullptr,
	_Operators$BinaryOperatorHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Operators"
};

$Object* allocate$Operators$BinaryOperatorHelper($Class* clazz) {
	return $of($alloc(Operators$BinaryOperatorHelper));
}

int32_t Operators$BinaryOperatorHelper::hashCode() {
	 return this->$Operators$OperatorHelper::hashCode();
}

bool Operators$BinaryOperatorHelper::equals(Object$* arg0) {
	 return this->$Operators$OperatorHelper::equals(arg0);
}

$Object* Operators$BinaryOperatorHelper::clone() {
	 return this->$Operators$OperatorHelper::clone();
}

$String* Operators$BinaryOperatorHelper::toString() {
	 return this->$Operators$OperatorHelper::toString();
}

void Operators$BinaryOperatorHelper::finalize() {
	this->$Operators$OperatorHelper::finalize();
}

void Operators$BinaryOperatorHelper::init$($Operators* this$0, $JCTree$Tag* tag) {
	$set(this, this$0, this$0);
	$Operators$OperatorHelper::init$(this$0, tag);
}

$Symbol$OperatorSymbol* Operators$BinaryOperatorHelper::doLookup($Type* t1, $Type* t2) {
	return doLookup(static_cast<$Predicate*>($$new(Operators$BinaryOperatorHelper$$Lambda$lambda$doLookup$0, this, t1, t2)));
}

bool Operators$BinaryOperatorHelper::isBinaryOperatorApplicable($Symbol$OperatorSymbol* op, $Type* t1, $Type* t2) {
	$var($List, formals, $nc($nc(op)->type)->getParameterTypes());
	bool var$0 = $nc(this->this$0->types)->isSameType($cast($Type, $nc(formals)->head), t1);
	return var$0 && $nc(this->this$0->types)->isSameType($cast($Type, $nc($nc(formals)->tail)->head), t2);
}

Operators$BinaryOperatorHelper* Operators$BinaryOperatorHelper::addBinaryOperator($Operators$OperatorType* arg1, $Operators$OperatorType* arg2, $Operators$OperatorType* res, $ints* opcode) {
	$set(this, operatorSuppliers, $nc(this->operatorSuppliers)->prepend(static_cast<$Supplier*>($$new(Operators$BinaryOperatorHelper$$Lambda$lambda$addBinaryOperator$1$1, this, arg1, arg2, res, opcode))));
	return this;
}

$Symbol$OperatorSymbol* Operators$BinaryOperatorHelper::lambda$addBinaryOperator$1($Operators$OperatorType* arg1, $Operators$OperatorType* arg2, $Operators$OperatorType* res, $ints* opcode) {
	return this->this$0->makeOperator(this->name, $($List::of(arg1, arg2)), res, opcode);
}

bool Operators$BinaryOperatorHelper::lambda$doLookup$0($Type* t1, $Type* t2, $Symbol$OperatorSymbol* op) {
	return isBinaryOperatorApplicable(op, t1, t2);
}

Operators$BinaryOperatorHelper::Operators$BinaryOperatorHelper() {
}

$Class* Operators$BinaryOperatorHelper::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Operators$BinaryOperatorHelper$$Lambda$lambda$doLookup$0::classInfo$.name)) {
			return Operators$BinaryOperatorHelper$$Lambda$lambda$doLookup$0::load$(name, initialize);
		}
		if (name->equals(Operators$BinaryOperatorHelper$$Lambda$lambda$addBinaryOperator$1$1::classInfo$.name)) {
			return Operators$BinaryOperatorHelper$$Lambda$lambda$addBinaryOperator$1$1::load$(name, initialize);
		}
	}
	$loadClass(Operators$BinaryOperatorHelper, name, initialize, &_Operators$BinaryOperatorHelper_ClassInfo_, allocate$Operators$BinaryOperatorHelper);
	return class$;
}

$Class* Operators$BinaryOperatorHelper::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com