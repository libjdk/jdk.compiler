#include <com/sun/tools/javac/comp/Operators.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Operators$1.h>
#include <com/sun/tools/javac/comp/Operators$BinaryBooleanOperator.h>
#include <com/sun/tools/javac/comp/Operators$BinaryEqualityOperator.h>
#include <com/sun/tools/javac/comp/Operators$BinaryNumericOperator.h>
#include <com/sun/tools/javac/comp/Operators$BinaryOperatorHelper.h>
#include <com/sun/tools/javac/comp/Operators$BinaryShiftOperator.h>
#include <com/sun/tools/javac/comp/Operators$BinaryStringOperator.h>
#include <com/sun/tools/javac/comp/Operators$OperatorHelper.h>
#include <com/sun/tools/javac/comp/Operators$OperatorType.h>
#include <com/sun/tools/javac/comp/Operators$UnaryBooleanOperator.h>
#include <com/sun/tools/javac/comp/Operators$UnaryNumericOperator.h>
#include <com/sun/tools/javac/comp/Operators$UnaryOperatorHelper.h>
#include <com/sun/tools/javac/comp/Operators$UnaryPrefixPostfixOperator.h>
#include <com/sun/tools/javac/comp/Operators$UnaryReferenceOperator.h>
#include <com/sun/tools/javac/jvm/ByteCodes.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef AND
#undef BITAND
#undef BITOR
#undef BITXOR
#undef BOOLEAN
#undef BOT
#undef BYTE
#undef CHAR
#undef COMPL
#undef DIV
#undef DOUBLE
#undef EQ
#undef FLOAT
#undef GE
#undef GT
#undef INT
#undef LE
#undef LONG
#undef LT
#undef MINUS
#undef MOD
#undef MUL
#undef NE
#undef NEG
#undef NONE
#undef NOT
#undef NULLCHK
#undef OBJECT
#undef OR
#undef PLUS
#undef POS
#undef POSTDEC
#undef POSTINC
#undef PREDEC
#undef PREINC
#undef SHORT
#undef SL
#undef SR
#undef STRING
#undef USR

using $TypeArray = $Array<::com::sun::tools::javac::code::Type>;
using $Operators$BinaryOperatorHelperArray = $Array<::com::sun::tools::javac::comp::Operators$BinaryOperatorHelper>;
using $Operators$OperatorHelperArray = $Array<::com::sun::tools::javac::comp::Operators$OperatorHelper>;
using $Operators$UnaryOperatorHelperArray = $Array<::com::sun::tools::javac::comp::Operators$UnaryOperatorHelper>;
using $NameArray = $Array<::com::sun::tools::javac::util::Name>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Operators$1 = ::com::sun::tools::javac::comp::Operators$1;
using $Operators$BinaryBooleanOperator = ::com::sun::tools::javac::comp::Operators$BinaryBooleanOperator;
using $Operators$BinaryEqualityOperator = ::com::sun::tools::javac::comp::Operators$BinaryEqualityOperator;
using $Operators$BinaryNumericOperator = ::com::sun::tools::javac::comp::Operators$BinaryNumericOperator;
using $Operators$BinaryOperatorHelper = ::com::sun::tools::javac::comp::Operators$BinaryOperatorHelper;
using $Operators$BinaryShiftOperator = ::com::sun::tools::javac::comp::Operators$BinaryShiftOperator;
using $Operators$BinaryStringOperator = ::com::sun::tools::javac::comp::Operators$BinaryStringOperator;
using $Operators$OperatorHelper = ::com::sun::tools::javac::comp::Operators$OperatorHelper;
using $Operators$OperatorType = ::com::sun::tools::javac::comp::Operators$OperatorType;
using $Operators$UnaryBooleanOperator = ::com::sun::tools::javac::comp::Operators$UnaryBooleanOperator;
using $Operators$UnaryNumericOperator = ::com::sun::tools::javac::comp::Operators$UnaryNumericOperator;
using $Operators$UnaryOperatorHelper = ::com::sun::tools::javac::comp::Operators$UnaryOperatorHelper;
using $Operators$UnaryPrefixPostfixOperator = ::com::sun::tools::javac::comp::Operators$UnaryPrefixPostfixOperator;
using $Operators$UnaryReferenceOperator = ::com::sun::tools::javac::comp::Operators$UnaryReferenceOperator;
using $ByteCodes = ::com::sun::tools::javac::jvm::ByteCodes;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $BiPredicate = ::java::util::function::BiPredicate;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Collector = ::java::util::stream::Collector;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Operators$$Lambda$lambda$resolveUnary$0 : public $Predicate {
	$class(Operators$$Lambda$lambda$resolveUnary$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Type* op) {
		$set(this, op, op);
	}
	virtual bool test(Object$* unop) override {
		 return Operators::lambda$resolveUnary$0(op, $cast($Operators$UnaryOperatorHelper, unop));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$$Lambda$lambda$resolveUnary$0>());
	}
	$Type* op = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Operators$$Lambda$lambda$resolveUnary$0::fieldInfos[2] = {
	{"op", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Operators$$Lambda$lambda$resolveUnary$0, op)},
	{}
};
$MethodInfo Operators$$Lambda$lambda$resolveUnary$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Operators$$Lambda$lambda$resolveUnary$0::*)($Type*)>(&Operators$$Lambda$lambda$resolveUnary$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$$Lambda$lambda$resolveUnary$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$$Lambda$lambda$resolveUnary$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Operators$$Lambda$lambda$resolveUnary$0::load$($String* name, bool initialize) {
	$loadClass(Operators$$Lambda$lambda$resolveUnary$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$$Lambda$lambda$resolveUnary$0::class$ = nullptr;

class Operators$$Lambda$lambda$resolveUnary$1$1 : public $Function {
	$class(Operators$$Lambda$lambda$resolveUnary$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$($Type* op) {
		$set(this, op, op);
	}
	virtual $Object* apply(Object$* unop) override {
		 return $of(Operators::lambda$resolveUnary$1(op, $cast($Operators$UnaryOperatorHelper, unop)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$$Lambda$lambda$resolveUnary$1$1>());
	}
	$Type* op = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Operators$$Lambda$lambda$resolveUnary$1$1::fieldInfos[2] = {
	{"op", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Operators$$Lambda$lambda$resolveUnary$1$1, op)},
	{}
};
$MethodInfo Operators$$Lambda$lambda$resolveUnary$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Operators$$Lambda$lambda$resolveUnary$1$1::*)($Type*)>(&Operators$$Lambda$lambda$resolveUnary$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$$Lambda$lambda$resolveUnary$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$$Lambda$lambda$resolveUnary$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Operators$$Lambda$lambda$resolveUnary$1$1::load$($String* name, bool initialize) {
	$loadClass(Operators$$Lambda$lambda$resolveUnary$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$$Lambda$lambda$resolveUnary$1$1::class$ = nullptr;

class Operators$$Lambda$lambda$resolveUnary$2$2 : public $Supplier {
	$class(Operators$$Lambda$lambda$resolveUnary$2$2, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Operators* inst, $JCDiagnostic$DiagnosticPosition* pos, $JCTree$Tag* tag, $Type* op) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, tag, tag);
		$set(this, op, op);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$resolveUnary$2(pos, tag, op));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$$Lambda$lambda$resolveUnary$2$2>());
	}
	Operators* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	$JCTree$Tag* tag = nullptr;
	$Type* op = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Operators$$Lambda$lambda$resolveUnary$2$2::fieldInfos[5] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Operators$$Lambda$lambda$resolveUnary$2$2, inst$)},
	{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Operators$$Lambda$lambda$resolveUnary$2$2, pos)},
	{"tag", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC, $field(Operators$$Lambda$lambda$resolveUnary$2$2, tag)},
	{"op", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Operators$$Lambda$lambda$resolveUnary$2$2, op)},
	{}
};
$MethodInfo Operators$$Lambda$lambda$resolveUnary$2$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Operators;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Operators$$Lambda$lambda$resolveUnary$2$2::*)(Operators*,$JCDiagnostic$DiagnosticPosition*,$JCTree$Tag*,$Type*)>(&Operators$$Lambda$lambda$resolveUnary$2$2::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$$Lambda$lambda$resolveUnary$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$$Lambda$lambda$resolveUnary$2$2",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* Operators$$Lambda$lambda$resolveUnary$2$2::load$($String* name, bool initialize) {
	$loadClass(Operators$$Lambda$lambda$resolveUnary$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$$Lambda$lambda$resolveUnary$2$2::class$ = nullptr;

class Operators$$Lambda$lambda$resolveBinary$3$3 : public $Predicate {
	$class(Operators$$Lambda$lambda$resolveBinary$3$3, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Type* op1, $Type* op2) {
		$set(this, op1, op1);
		$set(this, op2, op2);
	}
	virtual bool test(Object$* binop) override {
		 return Operators::lambda$resolveBinary$3(op1, op2, $cast($Operators$BinaryOperatorHelper, binop));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$$Lambda$lambda$resolveBinary$3$3>());
	}
	$Type* op1 = nullptr;
	$Type* op2 = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Operators$$Lambda$lambda$resolveBinary$3$3::fieldInfos[3] = {
	{"op1", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Operators$$Lambda$lambda$resolveBinary$3$3, op1)},
	{"op2", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Operators$$Lambda$lambda$resolveBinary$3$3, op2)},
	{}
};
$MethodInfo Operators$$Lambda$lambda$resolveBinary$3$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Operators$$Lambda$lambda$resolveBinary$3$3::*)($Type*,$Type*)>(&Operators$$Lambda$lambda$resolveBinary$3$3::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$$Lambda$lambda$resolveBinary$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$$Lambda$lambda$resolveBinary$3$3",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Operators$$Lambda$lambda$resolveBinary$3$3::load$($String* name, bool initialize) {
	$loadClass(Operators$$Lambda$lambda$resolveBinary$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$$Lambda$lambda$resolveBinary$3$3::class$ = nullptr;

class Operators$$Lambda$lambda$resolveBinary$4$4 : public $Function {
	$class(Operators$$Lambda$lambda$resolveBinary$4$4, $NO_CLASS_INIT, $Function)
public:
	void init$($Type* op1, $Type* op2) {
		$set(this, op1, op1);
		$set(this, op2, op2);
	}
	virtual $Object* apply(Object$* binop) override {
		 return $of(Operators::lambda$resolveBinary$4(op1, op2, $cast($Operators$BinaryOperatorHelper, binop)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$$Lambda$lambda$resolveBinary$4$4>());
	}
	$Type* op1 = nullptr;
	$Type* op2 = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Operators$$Lambda$lambda$resolveBinary$4$4::fieldInfos[3] = {
	{"op1", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Operators$$Lambda$lambda$resolveBinary$4$4, op1)},
	{"op2", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Operators$$Lambda$lambda$resolveBinary$4$4, op2)},
	{}
};
$MethodInfo Operators$$Lambda$lambda$resolveBinary$4$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Operators$$Lambda$lambda$resolveBinary$4$4::*)($Type*,$Type*)>(&Operators$$Lambda$lambda$resolveBinary$4$4::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$$Lambda$lambda$resolveBinary$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$$Lambda$lambda$resolveBinary$4$4",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Operators$$Lambda$lambda$resolveBinary$4$4::load$($String* name, bool initialize) {
	$loadClass(Operators$$Lambda$lambda$resolveBinary$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$$Lambda$lambda$resolveBinary$4$4::class$ = nullptr;

class Operators$$Lambda$lambda$resolveBinary$5$5 : public $Supplier {
	$class(Operators$$Lambda$lambda$resolveBinary$5$5, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Operators* inst, $JCDiagnostic$DiagnosticPosition* pos, $JCTree$Tag* tag, $Type* op1, $Type* op2) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, tag, tag);
		$set(this, op1, op1);
		$set(this, op2, op2);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$resolveBinary$5(pos, tag, op1, op2));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$$Lambda$lambda$resolveBinary$5$5>());
	}
	Operators* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	$JCTree$Tag* tag = nullptr;
	$Type* op1 = nullptr;
	$Type* op2 = nullptr;
	static $FieldInfo fieldInfos[6];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Operators$$Lambda$lambda$resolveBinary$5$5::fieldInfos[6] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Operators$$Lambda$lambda$resolveBinary$5$5, inst$)},
	{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Operators$$Lambda$lambda$resolveBinary$5$5, pos)},
	{"tag", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC, $field(Operators$$Lambda$lambda$resolveBinary$5$5, tag)},
	{"op1", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Operators$$Lambda$lambda$resolveBinary$5$5, op1)},
	{"op2", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Operators$$Lambda$lambda$resolveBinary$5$5, op2)},
	{}
};
$MethodInfo Operators$$Lambda$lambda$resolveBinary$5$5::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Operators;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Operators$$Lambda$lambda$resolveBinary$5$5::*)(Operators*,$JCDiagnostic$DiagnosticPosition*,$JCTree$Tag*,$Type*,$Type*)>(&Operators$$Lambda$lambda$resolveBinary$5$5::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$$Lambda$lambda$resolveBinary$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$$Lambda$lambda$resolveBinary$5$5",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* Operators$$Lambda$lambda$resolveBinary$5$5::load$($String* name, bool initialize) {
	$loadClass(Operators$$Lambda$lambda$resolveBinary$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$$Lambda$lambda$resolveBinary$5$5::class$ = nullptr;

class Operators$$Lambda$lambda$makeOperator$6$6 : public $Function {
	$class(Operators$$Lambda$lambda$makeOperator$6$6, $NO_CLASS_INIT, $Function)
public:
	void init$(Operators* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* o) override {
		 return $of($nc(inst$)->lambda$makeOperator$6($cast($Operators$OperatorType, o)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$$Lambda$lambda$makeOperator$6$6>());
	}
	Operators* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Operators$$Lambda$lambda$makeOperator$6$6::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Operators$$Lambda$lambda$makeOperator$6$6, inst$)},
	{}
};
$MethodInfo Operators$$Lambda$lambda$makeOperator$6$6::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Operators;)V", nullptr, $PUBLIC, $method(static_cast<void(Operators$$Lambda$lambda$makeOperator$6$6::*)(Operators*)>(&Operators$$Lambda$lambda$makeOperator$6$6::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$$Lambda$lambda$makeOperator$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$$Lambda$lambda$makeOperator$6$6",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Operators$$Lambda$lambda$makeOperator$6$6::load$($String* name, bool initialize) {
	$loadClass(Operators$$Lambda$lambda$makeOperator$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$$Lambda$lambda$makeOperator$6$6::class$ = nullptr;

class Operators$$Lambda$lambda$reportErrorIfNeeded$7$7 : public $Predicate {
	$class(Operators$$Lambda$lambda$reportErrorIfNeeded$7$7, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* t) override {
		 return Operators::lambda$reportErrorIfNeeded$7($cast($Type, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$$Lambda$lambda$reportErrorIfNeeded$7$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Operators$$Lambda$lambda$reportErrorIfNeeded$7$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Operators$$Lambda$lambda$reportErrorIfNeeded$7$7::*)()>(&Operators$$Lambda$lambda$reportErrorIfNeeded$7$7::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$$Lambda$lambda$reportErrorIfNeeded$7$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$$Lambda$lambda$reportErrorIfNeeded$7$7",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Operators$$Lambda$lambda$reportErrorIfNeeded$7$7::load$($String* name, bool initialize) {
	$loadClass(Operators$$Lambda$lambda$reportErrorIfNeeded$7$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$$Lambda$lambda$reportErrorIfNeeded$7$7::class$ = nullptr;

class Operators$$Lambda$isIntegral$8 : public $Predicate {
	$class(Operators$$Lambda$isIntegral$8, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$) override {
		 return $sure($Type, inst$)->isIntegral();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$$Lambda$isIntegral$8>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Operators$$Lambda$isIntegral$8::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Operators$$Lambda$isIntegral$8::*)()>(&Operators$$Lambda$isIntegral$8::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$$Lambda$isIntegral$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$$Lambda$isIntegral$8",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Operators$$Lambda$isIntegral$8::load$($String* name, bool initialize) {
	$loadClass(Operators$$Lambda$isIntegral$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$$Lambda$isIntegral$8::class$ = nullptr;

class Operators$$Lambda$stream$9 : public $Function {
	$class(Operators$$Lambda$stream$9, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Collection, inst$)->stream());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$$Lambda$stream$9>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Operators$$Lambda$stream$9::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Operators$$Lambda$stream$9::*)()>(&Operators$$Lambda$stream$9::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$$Lambda$stream$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$$Lambda$stream$9",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Operators$$Lambda$stream$9::load$($String* name, bool initialize) {
	$loadClass(Operators$$Lambda$stream$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$$Lambda$stream$9::class$ = nullptr;

class Operators$$Lambda$lambda$lookupBinaryOp$8$10 : public $Function {
	$class(Operators$$Lambda$lambda$lookupBinaryOp$8$10, $NO_CLASS_INIT, $Function)
public:
	void init$($Predicate* applicabilityTest) {
		$set(this, applicabilityTest, applicabilityTest);
	}
	virtual $Object* apply(Object$* helper) override {
		 return $of(Operators::lambda$lookupBinaryOp$8(applicabilityTest, $cast($Operators$BinaryOperatorHelper, helper)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$$Lambda$lambda$lookupBinaryOp$8$10>());
	}
	$Predicate* applicabilityTest = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Operators$$Lambda$lambda$lookupBinaryOp$8$10::fieldInfos[2] = {
	{"applicabilityTest", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Operators$$Lambda$lambda$lookupBinaryOp$8$10, applicabilityTest)},
	{}
};
$MethodInfo Operators$$Lambda$lambda$lookupBinaryOp$8$10::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Predicate;)V", nullptr, $PUBLIC, $method(static_cast<void(Operators$$Lambda$lambda$lookupBinaryOp$8$10::*)($Predicate*)>(&Operators$$Lambda$lambda$lookupBinaryOp$8$10::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$$Lambda$lambda$lookupBinaryOp$8$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$$Lambda$lambda$lookupBinaryOp$8$10",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Operators$$Lambda$lambda$lookupBinaryOp$8$10::load$($String* name, bool initialize) {
	$loadClass(Operators$$Lambda$lambda$lookupBinaryOp$8$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$$Lambda$lambda$lookupBinaryOp$8$10::class$ = nullptr;

class Operators$$Lambda$lambda$lookupBinaryOp$9$11 : public $Predicate {
	$class(Operators$$Lambda$lambda$lookupBinaryOp$9$11, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Operators* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* sym) override {
		 return $nc(inst$)->lambda$lookupBinaryOp$9($cast($Symbol$OperatorSymbol, sym));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$$Lambda$lambda$lookupBinaryOp$9$11>());
	}
	Operators* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Operators$$Lambda$lambda$lookupBinaryOp$9$11::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Operators$$Lambda$lambda$lookupBinaryOp$9$11, inst$)},
	{}
};
$MethodInfo Operators$$Lambda$lambda$lookupBinaryOp$9$11::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Operators;)V", nullptr, $PUBLIC, $method(static_cast<void(Operators$$Lambda$lambda$lookupBinaryOp$9$11::*)(Operators*)>(&Operators$$Lambda$lambda$lookupBinaryOp$9$11::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$$Lambda$lambda$lookupBinaryOp$9$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$$Lambda$lambda$lookupBinaryOp$9$11",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Operators$$Lambda$lambda$lookupBinaryOp$9$11::load$($String* name, bool initialize) {
	$loadClass(Operators$$Lambda$lambda$lookupBinaryOp$9$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$$Lambda$lambda$lookupBinaryOp$9$11::class$ = nullptr;

$CompoundAttribute _Operators_MethodAnnotations_initOperators4[] = {
	{"Ljava/lang/SafeVarargs;", nullptr},
	{}
};

$FieldInfo _Operators_FieldInfo_[] = {
	{"operatorsKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/Operators;>;", $PROTECTED | $STATIC | $FINAL, $staticField(Operators, operatorsKey)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(Operators, names)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(Operators, log)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE | $FINAL, $field(Operators, syms)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE | $FINAL, $field(Operators, types)},
	{"unaryOperators", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Operators$UnaryOperatorHelper;>;>;", $PRIVATE, $field(Operators, unaryOperators)},
	{"binaryOperators", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Operators$BinaryOperatorHelper;>;>;", $PRIVATE, $field(Operators, binaryOperators)},
	{"opname", "[Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE, $field(Operators, opname)},
	{"noOpSymbol", "Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PUBLIC | $FINAL, $field(Operators, noOpSymbol)},
	{}
};

$MethodInfo _Operators_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(Operators::*)($Context*)>(&Operators::init$))},
	{"binaryPromotion", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"initBinaryOperators", "()V", nullptr, $PRIVATE, $method(static_cast<void(Operators::*)()>(&Operators::initBinaryOperators))},
	{"initOperatorNames", "()V", nullptr, $PRIVATE, $method(static_cast<void(Operators::*)()>(&Operators::initOperatorNames))},
	{"initOperators", "(Ljava/util/Map;[Lcom/sun/tools/javac/comp/Operators$OperatorHelper;)V", "<O:Lcom/sun/tools/javac/comp/Operators$OperatorHelper;>(Ljava/util/Map<Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<TO;>;>;[TO;)V", $PRIVATE | $FINAL | $TRANSIENT, $method(static_cast<void(Operators::*)($Map*,$Operators$OperatorHelperArray*)>(&Operators::initOperators)), nullptr, nullptr, _Operators_MethodAnnotations_initOperators4},
	{"initUnaryOperators", "()V", nullptr, $PRIVATE, $method(static_cast<void(Operators::*)()>(&Operators::initUnaryOperators))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/Operators;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Operators*(*)($Context*)>(&Operators::instance))},
	{"lambda$lookupBinaryOp$8", "(Ljava/util/function/Predicate;Lcom/sun/tools/javac/comp/Operators$BinaryOperatorHelper;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Symbol$OperatorSymbol*(*)($Predicate*,$Operators$BinaryOperatorHelper*)>(&Operators::lambda$lookupBinaryOp$8))},
	{"lambda$lookupBinaryOp$9", "(Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Operators::*)($Symbol$OperatorSymbol*)>(&Operators::lambda$lookupBinaryOp$9))},
	{"lambda$makeOperator$6", "(Lcom/sun/tools/javac/comp/Operators$OperatorType;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Type*(Operators::*)($Operators$OperatorType*)>(&Operators::lambda$makeOperator$6))},
	{"lambda$reportErrorIfNeeded$7", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Type*)>(&Operators::lambda$reportErrorIfNeeded$7))},
	{"lambda$resolveBinary$3", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Operators$BinaryOperatorHelper;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Type*,$Type*,$Operators$BinaryOperatorHelper*)>(&Operators::lambda$resolveBinary$3))},
	{"lambda$resolveBinary$4", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Operators$BinaryOperatorHelper;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Symbol$OperatorSymbol*(*)($Type*,$Type*,$Operators$BinaryOperatorHelper*)>(&Operators::lambda$resolveBinary$4))},
	{"lambda$resolveBinary$5", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Symbol$OperatorSymbol*(Operators::*)($JCDiagnostic$DiagnosticPosition*,$JCTree$Tag*,$Type*,$Type*)>(&Operators::lambda$resolveBinary$5))},
	{"lambda$resolveUnary$0", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Operators$UnaryOperatorHelper;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Type*,$Operators$UnaryOperatorHelper*)>(&Operators::lambda$resolveUnary$0))},
	{"lambda$resolveUnary$1", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Operators$UnaryOperatorHelper;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Symbol$OperatorSymbol*(*)($Type*,$Operators$UnaryOperatorHelper*)>(&Operators::lambda$resolveUnary$1))},
	{"lambda$resolveUnary$2", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Symbol$OperatorSymbol*(Operators::*)($JCDiagnostic$DiagnosticPosition*,$JCTree$Tag*,$Type*)>(&Operators::lambda$resolveUnary$2))},
	{"lookupBinaryOp", "(Ljava/util/function/Predicate;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;>;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", 0},
	{"makeOperator", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Operators$OperatorType;[I)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Operators$OperatorType;>;Lcom/sun/tools/javac/comp/Operators$OperatorType;[I)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", $PRIVATE | $TRANSIENT, $method(static_cast<$Symbol$OperatorSymbol*(Operators::*)($Name*,$List*,$Operators$OperatorType*,$ints*)>(&Operators::makeOperator))},
	{"mergeOpcodes", "([I)I", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<int32_t(Operators::*)($ints*)>(&Operators::mergeOpcodes))},
	{"operatorName", "(Lcom/sun/tools/javac/tree/JCTree$Tag;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"reportErrorIfNeeded", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/tree/JCTree$Tag;[Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<$Symbol$OperatorSymbol*(Operators::*)($JCDiagnostic$DiagnosticPosition*,$JCTree$Tag*,$TypeArray*)>(&Operators::reportErrorIfNeeded))},
	{"resolve", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Ljava/util/Map;Ljava/util/function/Predicate;Ljava/util/function/Function;Ljava/util/function/Supplier;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", "<O:Ljava/lang/Object;>(Lcom/sun/tools/javac/tree/JCTree$Tag;Ljava/util/Map<Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<TO;>;>;Ljava/util/function/Predicate<TO;>;Ljava/util/function/Function<TO;Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;>;Ljava/util/function/Supplier<Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;>;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", $PRIVATE, $method(static_cast<$Symbol$OperatorSymbol*(Operators::*)($JCTree$Tag*,$Map*,$Predicate*,$Function*,$Supplier*)>(&Operators::resolve))},
	{"resolveBinary", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, 0},
	{"resolveUnary", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, 0},
	{"setOperatorName", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Operators::*)($JCTree$Tag*,$String*)>(&Operators::setOperatorName))},
	{"setOperatorName", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/util/Name;)V", nullptr, $PRIVATE, $method(static_cast<void(Operators::*)($JCTree$Tag*,$Name*)>(&Operators::setOperatorName))},
	{"unaryPromotion", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{}
};

$InnerClassInfo _Operators_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Operators$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.comp.Operators$BinaryEqualityOperator", "com.sun.tools.javac.comp.Operators", "BinaryEqualityOperator", 0},
	{"com.sun.tools.javac.comp.Operators$ComparisonKind", "com.sun.tools.javac.comp.Operators", "ComparisonKind", $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.comp.Operators$BinaryShiftOperator", "com.sun.tools.javac.comp.Operators", "BinaryShiftOperator", 0},
	{"com.sun.tools.javac.comp.Operators$BinaryStringOperator", "com.sun.tools.javac.comp.Operators", "BinaryStringOperator", 0},
	{"com.sun.tools.javac.comp.Operators$BinaryBooleanOperator", "com.sun.tools.javac.comp.Operators", "BinaryBooleanOperator", 0},
	{"com.sun.tools.javac.comp.Operators$BinaryNumericOperator", "com.sun.tools.javac.comp.Operators", "BinaryNumericOperator", 0},
	{"com.sun.tools.javac.comp.Operators$UnaryPrefixPostfixOperator", "com.sun.tools.javac.comp.Operators", "UnaryPrefixPostfixOperator", 0},
	{"com.sun.tools.javac.comp.Operators$UnaryBooleanOperator", "com.sun.tools.javac.comp.Operators", "UnaryBooleanOperator", 0},
	{"com.sun.tools.javac.comp.Operators$UnaryNumericOperator", "com.sun.tools.javac.comp.Operators", "UnaryNumericOperator", 0},
	{"com.sun.tools.javac.comp.Operators$UnaryReferenceOperator", "com.sun.tools.javac.comp.Operators", "UnaryReferenceOperator", 0},
	{"com.sun.tools.javac.comp.Operators$BinaryOperatorHelper", "com.sun.tools.javac.comp.Operators", "BinaryOperatorHelper", $ABSTRACT},
	{"com.sun.tools.javac.comp.Operators$UnaryOperatorHelper", "com.sun.tools.javac.comp.Operators", "UnaryOperatorHelper", $ABSTRACT},
	{"com.sun.tools.javac.comp.Operators$OperatorHelper", "com.sun.tools.javac.comp.Operators", "OperatorHelper", $ABSTRACT},
	{"com.sun.tools.javac.comp.Operators$OperatorType", "com.sun.tools.javac.comp.Operators", "OperatorType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Operators_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Operators",
	"java.lang.Object",
	nullptr,
	_Operators_FieldInfo_,
	_Operators_MethodInfo_,
	nullptr,
	nullptr,
	_Operators_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Operators$1,com.sun.tools.javac.comp.Operators$BinaryEqualityOperator,com.sun.tools.javac.comp.Operators$ComparisonKind,com.sun.tools.javac.comp.Operators$BinaryShiftOperator,com.sun.tools.javac.comp.Operators$BinaryStringOperator,com.sun.tools.javac.comp.Operators$BinaryBooleanOperator,com.sun.tools.javac.comp.Operators$BinaryNumericOperator,com.sun.tools.javac.comp.Operators$UnaryPrefixPostfixOperator,com.sun.tools.javac.comp.Operators$UnaryBooleanOperator,com.sun.tools.javac.comp.Operators$UnaryNumericOperator,com.sun.tools.javac.comp.Operators$UnaryReferenceOperator,com.sun.tools.javac.comp.Operators$BinaryOperatorHelper,com.sun.tools.javac.comp.Operators$UnaryOperatorHelper,com.sun.tools.javac.comp.Operators$OperatorHelper,com.sun.tools.javac.comp.Operators$OperatorType"
};

$Object* allocate$Operators($Class* clazz) {
	return $of($alloc(Operators));
}

$Context$Key* Operators::operatorsKey = nullptr;

Operators* Operators::instance($Context* context) {
	$init(Operators);
	$var(Operators, instance, $cast(Operators, $nc(context)->get(Operators::operatorsKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Operators, context));
	}
	return instance;
}

void Operators::init$($Context* context) {
	$set(this, unaryOperators, $new($HashMap, $JCTree$Tag::getNumberOfOperators()));
	$set(this, binaryOperators, $new($HashMap, $JCTree$Tag::getNumberOfOperators()));
	$set(this, opname, $new($NameArray, $JCTree$Tag::getNumberOfOperators()));
	$nc(context)->put(Operators::operatorsKey, $of(this));
	$set(this, syms, $Symtab::instance(context));
	$set(this, names, $Names::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, types, $Types::instance(context));
	$init($Type);
	$set(this, noOpSymbol, $new($Symbol$OperatorSymbol, $nc(this->names)->empty, $Type::noType, -1, $nc(this->syms)->noSymbol));
	initOperatorNames();
	initUnaryOperators();
	initBinaryOperators();
}

$Type* Operators::unaryPromotion($Type* t) {
	$useLocalCurrentObjectStackCache();
	$var($Type, unboxed, $nc(this->types)->unboxedTypeOrType(t));
	$init($Operators$1);
	switch ($nc($Operators$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(unboxed)->getTag())))->ordinal())) {
	case 1:
		{}
	case 2:
		{}
	case 3:
		{
			return $nc(this->syms)->intType;
		}
	default:
		{
			return unboxed;
		}
	}
}

$Type* Operators::binaryPromotion($Type* t1, $Type* t2) {
	$useLocalCurrentObjectStackCache();
	$var($Type, unboxedT1, $nc(this->types)->unboxedTypeOrType(t1));
	$var($Type, unboxedT2, $nc(this->types)->unboxedTypeOrType(t2));
	bool var$0 = $nc(unboxedT1)->isNumeric();
	if (var$0 && $nc(unboxedT2)->isNumeric()) {
		$init($TypeTag);
		bool var$1 = unboxedT1->hasTag($TypeTag::DOUBLE);
		if (var$1 || unboxedT2->hasTag($TypeTag::DOUBLE)) {
			return $nc(this->syms)->doubleType;
		} else {
			bool var$3 = unboxedT1->hasTag($TypeTag::FLOAT);
			if (var$3 || unboxedT2->hasTag($TypeTag::FLOAT)) {
				return $nc(this->syms)->floatType;
			} else {
				bool var$5 = unboxedT1->hasTag($TypeTag::LONG);
				if (var$5 || unboxedT2->hasTag($TypeTag::LONG)) {
					return $nc(this->syms)->longType;
				} else {
					return $nc(this->syms)->intType;
				}
			}
		}
	} else if ($nc(this->types)->isSameType(unboxedT1, unboxedT2)) {
		return unboxedT1;
	} else {
		return $nc(this->syms)->objectType;
	}
}

$Symbol$OperatorSymbol* Operators::resolveUnary($JCDiagnostic$DiagnosticPosition* pos, $JCTree$Tag* tag, $Type* op) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$Tag, var$0, tag);
	$var($Map, var$1, this->unaryOperators);
	$var($Predicate, var$2, static_cast<$Predicate*>($new(Operators$$Lambda$lambda$resolveUnary$0, op)));
	$var($Function, var$3, static_cast<$Function*>($new(Operators$$Lambda$lambda$resolveUnary$1$1, op)));
	return resolve(var$0, var$1, var$2, var$3, static_cast<$Supplier*>($$new(Operators$$Lambda$lambda$resolveUnary$2$2, this, pos, tag, op)));
}

$Symbol$OperatorSymbol* Operators::resolveBinary($JCDiagnostic$DiagnosticPosition* pos, $JCTree$Tag* tag, $Type* op1, $Type* op2) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$Tag, var$0, tag);
	$var($Map, var$1, this->binaryOperators);
	$var($Predicate, var$2, static_cast<$Predicate*>($new(Operators$$Lambda$lambda$resolveBinary$3$3, op1, op2)));
	$var($Function, var$3, static_cast<$Function*>($new(Operators$$Lambda$lambda$resolveBinary$4$4, op1, op2)));
	return resolve(var$0, var$1, var$2, var$3, static_cast<$Supplier*>($$new(Operators$$Lambda$lambda$resolveBinary$5$5, this, pos, tag, op1, op2)));
}

$Symbol$OperatorSymbol* Operators::resolve($JCTree$Tag* tag, $Map* opMap, $Predicate* opTestFunc, $Function* resolveFunc, $Supplier* noResultFunc) {
	$useLocalCurrentObjectStackCache();
	return $cast($Symbol$OperatorSymbol, $nc($($nc($($nc($($nc($($nc(($cast($List, $($nc(opMap)->get($(operatorName(tag)))))))->stream()))->filter(opTestFunc)))->map(resolveFunc)))->findFirst()))->orElseGet(noResultFunc));
}

$Symbol$OperatorSymbol* Operators::makeOperator($Name* name, $List* formals, $Operators$OperatorType* res, $ints* opcodes) {
	$useLocalCurrentObjectStackCache();
	$var($List, var$0, $cast($List, $nc($($nc($($nc(formals)->stream()))->map(static_cast<$Function*>($$new(Operators$$Lambda$lambda$makeOperator$6$6, this)))))->collect($($List::collector()))));
	$var($Type, var$1, $nc(res)->asType(this->syms));
	$var($Type$MethodType, opType, $new($Type$MethodType, var$0, var$1, $($List::nil()), $nc(this->syms)->methodClass));
	return $new($Symbol$OperatorSymbol, name, opType, mergeOpcodes(opcodes), $nc(this->syms)->noSymbol);
}

int32_t Operators::mergeOpcodes($ints* opcodes) {
	int32_t opcodesLen = $nc(opcodes)->length;
	$Assert::check(opcodesLen == 1 || opcodesLen == 2);
	return (opcodesLen == 1) ? opcodes->get(0) : (($sl(opcodes->get(0), $ByteCodes::preShift)) | opcodes->get(1));
}

$Symbol$OperatorSymbol* Operators::reportErrorIfNeeded($JCDiagnostic$DiagnosticPosition* pos, $JCTree$Tag* tag, $TypeArray* args) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($Stream::of(args)))->noneMatch(static_cast<$Predicate*>($$new(Operators$$Lambda$lambda$reportErrorIfNeeded$7$7)))) {
		$var($Name, opName, operatorName(tag));
		$var($JCDiagnostic$Error, opError, ($nc(args)->length) == 1 ? $CompilerProperties$Errors::OperatorCantBeApplied(opName, $nc(args)->get(0)) : $CompilerProperties$Errors::OperatorCantBeApplied1(opName, $nc(args)->get(0), args->get(1)));
		$nc(this->log)->error(pos, opError);
	}
	return this->noOpSymbol;
}

$Name* Operators::operatorName($JCTree$Tag* tag) {
	return $nc(this->opname)->get($nc(tag)->operatorIndex());
}

void Operators::initUnaryOperators() {
	$useLocalCurrentObjectStackCache();
	$init($JCTree$Tag);
	$init($Operators$OperatorType);
	initOperators(this->unaryOperators, $fcast($Operators$OperatorHelperArray, $$new($Operators$UnaryOperatorHelperArray, {
		$($nc($($nc($($nc($($$new($Operators$UnaryNumericOperator, this, $JCTree$Tag::POS)->addUnaryOperator($Operators$OperatorType::DOUBLE, $Operators$OperatorType::DOUBLE, $$new($ints, {0}))))->addUnaryOperator($Operators$OperatorType::FLOAT, $Operators$OperatorType::FLOAT, $$new($ints, {0}))))->addUnaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $$new($ints, {0}))))->addUnaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $$new($ints, {0}))),
		$($nc($($nc($($nc($($$new($Operators$UnaryNumericOperator, this, $JCTree$Tag::NEG)->addUnaryOperator($Operators$OperatorType::DOUBLE, $Operators$OperatorType::DOUBLE, $$new($ints, {119}))))->addUnaryOperator($Operators$OperatorType::FLOAT, $Operators$OperatorType::FLOAT, $$new($ints, {118}))))->addUnaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $$new($ints, {117}))))->addUnaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $$new($ints, {116}))),
		$($nc($($$new($Operators$UnaryNumericOperator, this, $JCTree$Tag::COMPL, static_cast<$Predicate*>($$new(Operators$$Lambda$isIntegral$8)))->addUnaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $$new($ints, {131}))))->addUnaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $$new($ints, {130}))),
		$($nc($($nc($($nc($($nc($($nc($($nc($($$new($Operators$UnaryPrefixPostfixOperator, this, $JCTree$Tag::POSTINC)->addUnaryOperator($Operators$OperatorType::DOUBLE, $Operators$OperatorType::DOUBLE, $$new($ints, {99}))))->addUnaryOperator($Operators$OperatorType::FLOAT, $Operators$OperatorType::FLOAT, $$new($ints, {98}))))->addUnaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $$new($ints, {97}))))->addUnaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $$new($ints, {96}))))->addUnaryOperator($Operators$OperatorType::CHAR, $Operators$OperatorType::CHAR, $$new($ints, {96}))))->addUnaryOperator($Operators$OperatorType::SHORT, $Operators$OperatorType::SHORT, $$new($ints, {96}))))->addUnaryOperator($Operators$OperatorType::BYTE, $Operators$OperatorType::BYTE, $$new($ints, {96}))),
		$($nc($($nc($($nc($($nc($($nc($($nc($($$new($Operators$UnaryPrefixPostfixOperator, this, $JCTree$Tag::POSTDEC)->addUnaryOperator($Operators$OperatorType::DOUBLE, $Operators$OperatorType::DOUBLE, $$new($ints, {103}))))->addUnaryOperator($Operators$OperatorType::FLOAT, $Operators$OperatorType::FLOAT, $$new($ints, {102}))))->addUnaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $$new($ints, {101}))))->addUnaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $$new($ints, {100}))))->addUnaryOperator($Operators$OperatorType::CHAR, $Operators$OperatorType::CHAR, $$new($ints, {100}))))->addUnaryOperator($Operators$OperatorType::SHORT, $Operators$OperatorType::SHORT, $$new($ints, {100}))))->addUnaryOperator($Operators$OperatorType::BYTE, $Operators$OperatorType::BYTE, $$new($ints, {100}))),
		$($$new($Operators$UnaryBooleanOperator, this, $JCTree$Tag::NOT)->addUnaryOperator($Operators$OperatorType::BOOLEAN, $Operators$OperatorType::BOOLEAN, $$new($ints, {257}))),
		$($$new($Operators$UnaryReferenceOperator, this, $JCTree$Tag::NULLCHK)->addUnaryOperator($Operators$OperatorType::OBJECT, $Operators$OperatorType::OBJECT, $$new($ints, {276})))
	})));
}

void Operators::initBinaryOperators() {
	$useLocalCurrentObjectStackCache();
	$init($JCTree$Tag);
	$init($Operators$OperatorType);
	initOperators(this->binaryOperators, $fcast($Operators$OperatorHelperArray, $$new($Operators$BinaryOperatorHelperArray, {
		$($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($$new($Operators$BinaryStringOperator, this, $JCTree$Tag::PLUS)->addBinaryOperator($Operators$OperatorType::STRING, $Operators$OperatorType::OBJECT, $Operators$OperatorType::STRING, $$new($ints, {256}))))->addBinaryOperator($Operators$OperatorType::OBJECT, $Operators$OperatorType::STRING, $Operators$OperatorType::STRING, $$new($ints, {256}))))->addBinaryOperator($Operators$OperatorType::STRING, $Operators$OperatorType::STRING, $Operators$OperatorType::STRING, $$new($ints, {256}))))->addBinaryOperator($Operators$OperatorType::STRING, $Operators$OperatorType::INT, $Operators$OperatorType::STRING, $$new($ints, {256}))))->addBinaryOperator($Operators$OperatorType::STRING, $Operators$OperatorType::LONG, $Operators$OperatorType::STRING, $$new($ints, {256}))))->addBinaryOperator($Operators$OperatorType::STRING, $Operators$OperatorType::FLOAT, $Operators$OperatorType::STRING, $$new($ints, {256}))))->addBinaryOperator($Operators$OperatorType::STRING, $Operators$OperatorType::DOUBLE, $Operators$OperatorType::STRING, $$new($ints, {256}))))->addBinaryOperator($Operators$OperatorType::STRING, $Operators$OperatorType::BOOLEAN, $Operators$OperatorType::STRING, $$new($ints, {256}))))->addBinaryOperator($Operators$OperatorType::STRING, $Operators$OperatorType::BOT, $Operators$OperatorType::STRING, $$new($ints, {256}))))->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::STRING, $Operators$OperatorType::STRING, $$new($ints, {256}))))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::STRING, $Operators$OperatorType::STRING, $$new($ints, {256}))))->addBinaryOperator($Operators$OperatorType::FLOAT, $Operators$OperatorType::STRING, $Operators$OperatorType::STRING, $$new($ints, {256}))))->addBinaryOperator($Operators$OperatorType::DOUBLE, $Operators$OperatorType::STRING, $Operators$OperatorType::STRING, $$new($ints, {256}))))->addBinaryOperator($Operators$OperatorType::BOOLEAN, $Operators$OperatorType::STRING, $Operators$OperatorType::STRING, $$new($ints, {256}))))->addBinaryOperator($Operators$OperatorType::BOT, $Operators$OperatorType::STRING, $Operators$OperatorType::STRING, $$new($ints, {256}))),
		$($nc($($nc($($nc($($$new($Operators$BinaryNumericOperator, this, $JCTree$Tag::PLUS)->addBinaryOperator($Operators$OperatorType::DOUBLE, $Operators$OperatorType::DOUBLE, $Operators$OperatorType::DOUBLE, $$new($ints, {99}))))->addBinaryOperator($Operators$OperatorType::FLOAT, $Operators$OperatorType::FLOAT, $Operators$OperatorType::FLOAT, $$new($ints, {98}))))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $$new($ints, {97}))))->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $Operators$OperatorType::INT, $$new($ints, {96}))),
		$($nc($($nc($($nc($($$new($Operators$BinaryNumericOperator, this, $JCTree$Tag::MINUS)->addBinaryOperator($Operators$OperatorType::DOUBLE, $Operators$OperatorType::DOUBLE, $Operators$OperatorType::DOUBLE, $$new($ints, {103}))))->addBinaryOperator($Operators$OperatorType::FLOAT, $Operators$OperatorType::FLOAT, $Operators$OperatorType::FLOAT, $$new($ints, {102}))))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $$new($ints, {101}))))->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $Operators$OperatorType::INT, $$new($ints, {100}))),
		$($nc($($nc($($nc($($$new($Operators$BinaryNumericOperator, this, $JCTree$Tag::MUL)->addBinaryOperator($Operators$OperatorType::DOUBLE, $Operators$OperatorType::DOUBLE, $Operators$OperatorType::DOUBLE, $$new($ints, {107}))))->addBinaryOperator($Operators$OperatorType::FLOAT, $Operators$OperatorType::FLOAT, $Operators$OperatorType::FLOAT, $$new($ints, {106}))))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $$new($ints, {105}))))->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $Operators$OperatorType::INT, $$new($ints, {104}))),
		$($nc($($nc($($nc($($$new($Operators$BinaryNumericOperator, this, $JCTree$Tag::DIV)->addBinaryOperator($Operators$OperatorType::DOUBLE, $Operators$OperatorType::DOUBLE, $Operators$OperatorType::DOUBLE, $$new($ints, {111}))))->addBinaryOperator($Operators$OperatorType::FLOAT, $Operators$OperatorType::FLOAT, $Operators$OperatorType::FLOAT, $$new($ints, {110}))))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $$new($ints, {109}))))->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $Operators$OperatorType::INT, $$new($ints, {108}))),
		$($nc($($nc($($nc($($$new($Operators$BinaryNumericOperator, this, $JCTree$Tag::MOD)->addBinaryOperator($Operators$OperatorType::DOUBLE, $Operators$OperatorType::DOUBLE, $Operators$OperatorType::DOUBLE, $$new($ints, {115}))))->addBinaryOperator($Operators$OperatorType::FLOAT, $Operators$OperatorType::FLOAT, $Operators$OperatorType::FLOAT, $$new($ints, {114}))))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $$new($ints, {113}))))->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $Operators$OperatorType::INT, $$new($ints, {112}))),
		$($$new($Operators$BinaryBooleanOperator, this, $JCTree$Tag::BITAND)->addBinaryOperator($Operators$OperatorType::BOOLEAN, $Operators$OperatorType::BOOLEAN, $Operators$OperatorType::BOOLEAN, $$new($ints, {126}))),
		$($nc($($$new($Operators$BinaryNumericOperator, this, $JCTree$Tag::BITAND, static_cast<$Predicate*>($$new(Operators$$Lambda$isIntegral$8)))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $$new($ints, {127}))))->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $Operators$OperatorType::INT, $$new($ints, {126}))),
		$($$new($Operators$BinaryBooleanOperator, this, $JCTree$Tag::BITOR)->addBinaryOperator($Operators$OperatorType::BOOLEAN, $Operators$OperatorType::BOOLEAN, $Operators$OperatorType::BOOLEAN, $$new($ints, {128}))),
		$($nc($($$new($Operators$BinaryNumericOperator, this, $JCTree$Tag::BITOR, static_cast<$Predicate*>($$new(Operators$$Lambda$isIntegral$8)))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $$new($ints, {129}))))->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $Operators$OperatorType::INT, $$new($ints, {128}))),
		$($$new($Operators$BinaryBooleanOperator, this, $JCTree$Tag::BITXOR)->addBinaryOperator($Operators$OperatorType::BOOLEAN, $Operators$OperatorType::BOOLEAN, $Operators$OperatorType::BOOLEAN, $$new($ints, {130}))),
		$($nc($($$new($Operators$BinaryNumericOperator, this, $JCTree$Tag::BITXOR, static_cast<$Predicate*>($$new(Operators$$Lambda$isIntegral$8)))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $$new($ints, {131}))))->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $Operators$OperatorType::INT, $$new($ints, {130}))),
		$($nc($($nc($($nc($($$new($Operators$BinaryShiftOperator, this, $JCTree$Tag::SL)->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $Operators$OperatorType::INT, $$new($ints, {120}))))->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::LONG, $Operators$OperatorType::INT, $$new($ints, {270}))))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::INT, $Operators$OperatorType::LONG, $$new($ints, {121}))))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $$new($ints, {271}))),
		$($nc($($nc($($nc($($$new($Operators$BinaryShiftOperator, this, $JCTree$Tag::SR)->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $Operators$OperatorType::INT, $$new($ints, {122}))))->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::LONG, $Operators$OperatorType::INT, $$new($ints, {272}))))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::INT, $Operators$OperatorType::LONG, $$new($ints, {123}))))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $$new($ints, {273}))),
		$($nc($($nc($($nc($($$new($Operators$BinaryShiftOperator, this, $JCTree$Tag::USR)->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $Operators$OperatorType::INT, $$new($ints, {124}))))->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::LONG, $Operators$OperatorType::INT, $$new($ints, {274}))))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::INT, $Operators$OperatorType::LONG, $$new($ints, {125}))))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $$new($ints, {275}))),
		$($nc($($nc($($nc($($$new($Operators$BinaryNumericOperator, this, $JCTree$Tag::LT)->addBinaryOperator($Operators$OperatorType::DOUBLE, $Operators$OperatorType::DOUBLE, $Operators$OperatorType::BOOLEAN, $$new($ints, {
			152,
			155
		}))))->addBinaryOperator($Operators$OperatorType::FLOAT, $Operators$OperatorType::FLOAT, $Operators$OperatorType::BOOLEAN, $$new($ints, {
			150,
			155
		}))))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $Operators$OperatorType::BOOLEAN, $$new($ints, {
			148,
			155
		}))))->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $Operators$OperatorType::BOOLEAN, $$new($ints, {161}))),
		$($nc($($nc($($nc($($$new($Operators$BinaryNumericOperator, this, $JCTree$Tag::GT)->addBinaryOperator($Operators$OperatorType::DOUBLE, $Operators$OperatorType::DOUBLE, $Operators$OperatorType::BOOLEAN, $$new($ints, {
			151,
			157
		}))))->addBinaryOperator($Operators$OperatorType::FLOAT, $Operators$OperatorType::FLOAT, $Operators$OperatorType::BOOLEAN, $$new($ints, {
			149,
			157
		}))))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $Operators$OperatorType::BOOLEAN, $$new($ints, {
			148,
			157
		}))))->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $Operators$OperatorType::BOOLEAN, $$new($ints, {163}))),
		$($nc($($nc($($nc($($$new($Operators$BinaryNumericOperator, this, $JCTree$Tag::LE)->addBinaryOperator($Operators$OperatorType::DOUBLE, $Operators$OperatorType::DOUBLE, $Operators$OperatorType::BOOLEAN, $$new($ints, {
			152,
			158
		}))))->addBinaryOperator($Operators$OperatorType::FLOAT, $Operators$OperatorType::FLOAT, $Operators$OperatorType::BOOLEAN, $$new($ints, {
			150,
			158
		}))))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $Operators$OperatorType::BOOLEAN, $$new($ints, {
			148,
			158
		}))))->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $Operators$OperatorType::BOOLEAN, $$new($ints, {164}))),
		$($nc($($nc($($nc($($$new($Operators$BinaryNumericOperator, this, $JCTree$Tag::GE)->addBinaryOperator($Operators$OperatorType::DOUBLE, $Operators$OperatorType::DOUBLE, $Operators$OperatorType::BOOLEAN, $$new($ints, {
			151,
			156
		}))))->addBinaryOperator($Operators$OperatorType::FLOAT, $Operators$OperatorType::FLOAT, $Operators$OperatorType::BOOLEAN, $$new($ints, {
			149,
			156
		}))))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $Operators$OperatorType::BOOLEAN, $$new($ints, {
			148,
			156
		}))))->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $Operators$OperatorType::BOOLEAN, $$new($ints, {162}))),
		$($nc($($nc($($nc($($nc($($nc($($$new($Operators$BinaryEqualityOperator, this, $JCTree$Tag::EQ)->addBinaryOperator($Operators$OperatorType::OBJECT, $Operators$OperatorType::OBJECT, $Operators$OperatorType::BOOLEAN, $$new($ints, {165}))))->addBinaryOperator($Operators$OperatorType::BOOLEAN, $Operators$OperatorType::BOOLEAN, $Operators$OperatorType::BOOLEAN, $$new($ints, {159}))))->addBinaryOperator($Operators$OperatorType::DOUBLE, $Operators$OperatorType::DOUBLE, $Operators$OperatorType::BOOLEAN, $$new($ints, {
			151,
			153
		}))))->addBinaryOperator($Operators$OperatorType::FLOAT, $Operators$OperatorType::FLOAT, $Operators$OperatorType::BOOLEAN, $$new($ints, {
			149,
			153
		}))))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $Operators$OperatorType::BOOLEAN, $$new($ints, {
			148,
			153
		}))))->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $Operators$OperatorType::BOOLEAN, $$new($ints, {159}))),
		$($nc($($nc($($nc($($nc($($nc($($$new($Operators$BinaryEqualityOperator, this, $JCTree$Tag::NE)->addBinaryOperator($Operators$OperatorType::OBJECT, $Operators$OperatorType::OBJECT, $Operators$OperatorType::BOOLEAN, $$new($ints, {166}))))->addBinaryOperator($Operators$OperatorType::BOOLEAN, $Operators$OperatorType::BOOLEAN, $Operators$OperatorType::BOOLEAN, $$new($ints, {160}))))->addBinaryOperator($Operators$OperatorType::DOUBLE, $Operators$OperatorType::DOUBLE, $Operators$OperatorType::BOOLEAN, $$new($ints, {
			151,
			154
		}))))->addBinaryOperator($Operators$OperatorType::FLOAT, $Operators$OperatorType::FLOAT, $Operators$OperatorType::BOOLEAN, $$new($ints, {
			149,
			154
		}))))->addBinaryOperator($Operators$OperatorType::LONG, $Operators$OperatorType::LONG, $Operators$OperatorType::BOOLEAN, $$new($ints, {
			148,
			154
		}))))->addBinaryOperator($Operators$OperatorType::INT, $Operators$OperatorType::INT, $Operators$OperatorType::BOOLEAN, $$new($ints, {160}))),
		$($$new($Operators$BinaryBooleanOperator, this, $JCTree$Tag::AND)->addBinaryOperator($Operators$OperatorType::BOOLEAN, $Operators$OperatorType::BOOLEAN, $Operators$OperatorType::BOOLEAN, $$new($ints, {258}))),
		$($$new($Operators$BinaryBooleanOperator, this, $JCTree$Tag::OR)->addBinaryOperator($Operators$OperatorType::BOOLEAN, $Operators$OperatorType::BOOLEAN, $Operators$OperatorType::BOOLEAN, $$new($ints, {259})))
	})));
}

$Symbol$OperatorSymbol* Operators::lookupBinaryOp($Predicate* applicabilityTest) {
	$useLocalCurrentObjectStackCache();
	return $cast($Symbol$OperatorSymbol, $nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc(this->binaryOperators)->values()))->stream()))->flatMap(static_cast<$Function*>($$new(Operators$$Lambda$stream$9)))))->map(static_cast<$Function*>($$new(Operators$$Lambda$lambda$lookupBinaryOp$8$10, applicabilityTest)))))->distinct()))->filter(static_cast<$Predicate*>($$new(Operators$$Lambda$lambda$lookupBinaryOp$9$11, this)))))->findFirst()))->get());
}

void Operators::initOperators($Map* opsMap, $Operators$OperatorHelperArray* ops) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Operators$OperatorHelperArray, arr$, ops);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Operators$OperatorHelper, o, arr$->get(i$));
			{
				$var($Name, opName, $nc(o)->name);
				$var($List, helpers, $cast($List, $nc(opsMap)->getOrDefault(opName, $($List::nil()))));
				opsMap->put(opName, $($nc(helpers)->prepend(o)));
			}
		}
	}
}

void Operators::initOperatorNames() {
	$init($JCTree$Tag);
	setOperatorName($JCTree$Tag::POS, "+"_s);
	setOperatorName($JCTree$Tag::NEG, "-"_s);
	setOperatorName($JCTree$Tag::NOT, "!"_s);
	setOperatorName($JCTree$Tag::COMPL, "~"_s);
	setOperatorName($JCTree$Tag::PREINC, "++"_s);
	setOperatorName($JCTree$Tag::PREDEC, "--"_s);
	setOperatorName($JCTree$Tag::POSTINC, "++"_s);
	setOperatorName($JCTree$Tag::POSTDEC, "--"_s);
	setOperatorName($JCTree$Tag::NULLCHK, "<*nullchk*>"_s);
	setOperatorName($JCTree$Tag::OR, "||"_s);
	setOperatorName($JCTree$Tag::AND, "&&"_s);
	setOperatorName($JCTree$Tag::EQ, "=="_s);
	setOperatorName($JCTree$Tag::NE, "!="_s);
	setOperatorName($JCTree$Tag::LT, "<"_s);
	setOperatorName($JCTree$Tag::GT, ">"_s);
	setOperatorName($JCTree$Tag::LE, "<="_s);
	setOperatorName($JCTree$Tag::GE, ">="_s);
	setOperatorName($JCTree$Tag::BITOR, "|"_s);
	setOperatorName($JCTree$Tag::BITXOR, "^"_s);
	setOperatorName($JCTree$Tag::BITAND, "&"_s);
	setOperatorName($JCTree$Tag::SL, "<<"_s);
	setOperatorName($JCTree$Tag::SR, ">>"_s);
	setOperatorName($JCTree$Tag::USR, ">>>"_s);
	setOperatorName($JCTree$Tag::PLUS, "+"_s);
	setOperatorName($JCTree$Tag::MINUS, $nc(this->names)->hyphen);
	setOperatorName($JCTree$Tag::MUL, $nc(this->names)->asterisk);
	setOperatorName($JCTree$Tag::DIV, $nc(this->names)->slash);
	setOperatorName($JCTree$Tag::MOD, "%"_s);
}

void Operators::setOperatorName($JCTree$Tag* tag, $String* name) {
	setOperatorName(tag, $($nc(this->names)->fromString(name)));
}

void Operators::setOperatorName($JCTree$Tag* tag, $Name* name) {
	$nc(this->opname)->set($nc(tag)->operatorIndex(), name);
}

bool Operators::lambda$lookupBinaryOp$9($Symbol$OperatorSymbol* sym) {
	return sym != this->noOpSymbol;
}

$Symbol$OperatorSymbol* Operators::lambda$lookupBinaryOp$8($Predicate* applicabilityTest, $Operators$BinaryOperatorHelper* helper) {
	$init(Operators);
	return $nc(helper)->doLookup(applicabilityTest);
}

bool Operators::lambda$reportErrorIfNeeded$7($Type* t) {
	$init(Operators);
	bool var$0 = $nc(t)->isErroneous();
	$init($TypeTag);
	return var$0 || $nc(t)->hasTag($TypeTag::NONE);
}

$Type* Operators::lambda$makeOperator$6($Operators$OperatorType* o) {
	return $nc(o)->asType(this->syms);
}

$Symbol$OperatorSymbol* Operators::lambda$resolveBinary$5($JCDiagnostic$DiagnosticPosition* pos, $JCTree$Tag* tag, $Type* op1, $Type* op2) {
	return reportErrorIfNeeded(pos, tag, $$new($TypeArray, {
		op1,
		op2
	}));
}

$Symbol$OperatorSymbol* Operators::lambda$resolveBinary$4($Type* op1, $Type* op2, $Operators$BinaryOperatorHelper* binop) {
	$init(Operators);
	return $nc(binop)->resolve(op1, op2);
}

bool Operators::lambda$resolveBinary$3($Type* op1, $Type* op2, $Operators$BinaryOperatorHelper* binop) {
	$init(Operators);
	return $nc(binop)->test(op1, op2);
}

$Symbol$OperatorSymbol* Operators::lambda$resolveUnary$2($JCDiagnostic$DiagnosticPosition* pos, $JCTree$Tag* tag, $Type* op) {
	return reportErrorIfNeeded(pos, tag, $$new($TypeArray, {op}));
}

$Symbol$OperatorSymbol* Operators::lambda$resolveUnary$1($Type* op, $Operators$UnaryOperatorHelper* unop) {
	$init(Operators);
	return $nc(unop)->resolve(op);
}

bool Operators::lambda$resolveUnary$0($Type* op, $Operators$UnaryOperatorHelper* unop) {
	$init(Operators);
	return $nc(unop)->test(op);
}

void clinit$Operators($Class* class$) {
	$assignStatic(Operators::operatorsKey, $new($Context$Key));
}

Operators::Operators() {
}

$Class* Operators::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Operators$$Lambda$lambda$resolveUnary$0::classInfo$.name)) {
			return Operators$$Lambda$lambda$resolveUnary$0::load$(name, initialize);
		}
		if (name->equals(Operators$$Lambda$lambda$resolveUnary$1$1::classInfo$.name)) {
			return Operators$$Lambda$lambda$resolveUnary$1$1::load$(name, initialize);
		}
		if (name->equals(Operators$$Lambda$lambda$resolveUnary$2$2::classInfo$.name)) {
			return Operators$$Lambda$lambda$resolveUnary$2$2::load$(name, initialize);
		}
		if (name->equals(Operators$$Lambda$lambda$resolveBinary$3$3::classInfo$.name)) {
			return Operators$$Lambda$lambda$resolveBinary$3$3::load$(name, initialize);
		}
		if (name->equals(Operators$$Lambda$lambda$resolveBinary$4$4::classInfo$.name)) {
			return Operators$$Lambda$lambda$resolveBinary$4$4::load$(name, initialize);
		}
		if (name->equals(Operators$$Lambda$lambda$resolveBinary$5$5::classInfo$.name)) {
			return Operators$$Lambda$lambda$resolveBinary$5$5::load$(name, initialize);
		}
		if (name->equals(Operators$$Lambda$lambda$makeOperator$6$6::classInfo$.name)) {
			return Operators$$Lambda$lambda$makeOperator$6$6::load$(name, initialize);
		}
		if (name->equals(Operators$$Lambda$lambda$reportErrorIfNeeded$7$7::classInfo$.name)) {
			return Operators$$Lambda$lambda$reportErrorIfNeeded$7$7::load$(name, initialize);
		}
		if (name->equals(Operators$$Lambda$isIntegral$8::classInfo$.name)) {
			return Operators$$Lambda$isIntegral$8::load$(name, initialize);
		}
		if (name->equals(Operators$$Lambda$stream$9::classInfo$.name)) {
			return Operators$$Lambda$stream$9::load$(name, initialize);
		}
		if (name->equals(Operators$$Lambda$lambda$lookupBinaryOp$8$10::classInfo$.name)) {
			return Operators$$Lambda$lambda$lookupBinaryOp$8$10::load$(name, initialize);
		}
		if (name->equals(Operators$$Lambda$lambda$lookupBinaryOp$9$11::classInfo$.name)) {
			return Operators$$Lambda$lambda$lookupBinaryOp$9$11::load$(name, initialize);
		}
	}
	$loadClass(Operators, name, initialize, &_Operators_ClassInfo_, clinit$Operators, allocate$Operators);
	return class$;
}

$Class* Operators::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com