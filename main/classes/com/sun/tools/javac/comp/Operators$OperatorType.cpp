#include <com/sun/tools/javac/comp/Operators$OperatorType.h>

#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <java/io/Serializable.h>
#include <java/lang/Enum.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BOT
#undef BYTE
#undef CHAR
#undef DOUBLE
#undef FLOAT
#undef INT
#undef LONG
#undef OBJECT
#undef SHORT
#undef STRING

using $Operators$OperatorTypeArray = $Array<::com::sun::tools::javac::comp::Operators$OperatorType>;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $Operators = ::com::sun::tools::javac::comp::Operators;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Function = ::java::util::function::Function;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Operators$OperatorType$$Lambda$lambda$static$0 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		 return $of(Operators$OperatorType::lambda$static$0($cast($Symtab, syms)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$OperatorType$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Operators$OperatorType$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Operators$OperatorType$$Lambda$lambda$static$0::*)()>(&Operators$OperatorType$$Lambda$lambda$static$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$OperatorType$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Operators$OperatorType$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$0::class$ = nullptr;

class Operators$OperatorType$$Lambda$lambda$static$1$1 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		 return $of(Operators$OperatorType::lambda$static$1($cast($Symtab, syms)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$OperatorType$$Lambda$lambda$static$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Operators$OperatorType$$Lambda$lambda$static$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Operators$OperatorType$$Lambda$lambda$static$1$1::*)()>(&Operators$OperatorType$$Lambda$lambda$static$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$OperatorType$$Lambda$lambda$static$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Operators$OperatorType$$Lambda$lambda$static$1$1::load$($String* name, bool initialize) {
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$1$1::class$ = nullptr;

class Operators$OperatorType$$Lambda$lambda$static$2$2 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$2$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		 return $of(Operators$OperatorType::lambda$static$2($cast($Symtab, syms)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$OperatorType$$Lambda$lambda$static$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Operators$OperatorType$$Lambda$lambda$static$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Operators$OperatorType$$Lambda$lambda$static$2$2::*)()>(&Operators$OperatorType$$Lambda$lambda$static$2$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$OperatorType$$Lambda$lambda$static$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$2$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Operators$OperatorType$$Lambda$lambda$static$2$2::load$($String* name, bool initialize) {
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$2$2::class$ = nullptr;

class Operators$OperatorType$$Lambda$lambda$static$3$3 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$3$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		 return $of(Operators$OperatorType::lambda$static$3($cast($Symtab, syms)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$OperatorType$$Lambda$lambda$static$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Operators$OperatorType$$Lambda$lambda$static$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Operators$OperatorType$$Lambda$lambda$static$3$3::*)()>(&Operators$OperatorType$$Lambda$lambda$static$3$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$OperatorType$$Lambda$lambda$static$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$3$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Operators$OperatorType$$Lambda$lambda$static$3$3::load$($String* name, bool initialize) {
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$3$3::class$ = nullptr;

class Operators$OperatorType$$Lambda$lambda$static$4$4 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$4$4, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		 return $of(Operators$OperatorType::lambda$static$4($cast($Symtab, syms)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$OperatorType$$Lambda$lambda$static$4$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Operators$OperatorType$$Lambda$lambda$static$4$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Operators$OperatorType$$Lambda$lambda$static$4$4::*)()>(&Operators$OperatorType$$Lambda$lambda$static$4$4::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$OperatorType$$Lambda$lambda$static$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$4$4",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Operators$OperatorType$$Lambda$lambda$static$4$4::load$($String* name, bool initialize) {
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$4$4::class$ = nullptr;

class Operators$OperatorType$$Lambda$lambda$static$5$5 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$5$5, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		 return $of(Operators$OperatorType::lambda$static$5($cast($Symtab, syms)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$OperatorType$$Lambda$lambda$static$5$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Operators$OperatorType$$Lambda$lambda$static$5$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Operators$OperatorType$$Lambda$lambda$static$5$5::*)()>(&Operators$OperatorType$$Lambda$lambda$static$5$5::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$OperatorType$$Lambda$lambda$static$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$5$5",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Operators$OperatorType$$Lambda$lambda$static$5$5::load$($String* name, bool initialize) {
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$5$5::class$ = nullptr;

class Operators$OperatorType$$Lambda$lambda$static$6$6 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$6$6, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		 return $of(Operators$OperatorType::lambda$static$6($cast($Symtab, syms)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$OperatorType$$Lambda$lambda$static$6$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Operators$OperatorType$$Lambda$lambda$static$6$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Operators$OperatorType$$Lambda$lambda$static$6$6::*)()>(&Operators$OperatorType$$Lambda$lambda$static$6$6::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$OperatorType$$Lambda$lambda$static$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$6$6",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Operators$OperatorType$$Lambda$lambda$static$6$6::load$($String* name, bool initialize) {
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$6$6::class$ = nullptr;

class Operators$OperatorType$$Lambda$lambda$static$7$7 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$7$7, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		 return $of(Operators$OperatorType::lambda$static$7($cast($Symtab, syms)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$OperatorType$$Lambda$lambda$static$7$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Operators$OperatorType$$Lambda$lambda$static$7$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Operators$OperatorType$$Lambda$lambda$static$7$7::*)()>(&Operators$OperatorType$$Lambda$lambda$static$7$7::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$OperatorType$$Lambda$lambda$static$7$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$7$7",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Operators$OperatorType$$Lambda$lambda$static$7$7::load$($String* name, bool initialize) {
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$7$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$7$7::class$ = nullptr;

class Operators$OperatorType$$Lambda$lambda$static$8$8 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$8$8, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		 return $of(Operators$OperatorType::lambda$static$8($cast($Symtab, syms)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$OperatorType$$Lambda$lambda$static$8$8>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Operators$OperatorType$$Lambda$lambda$static$8$8::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Operators$OperatorType$$Lambda$lambda$static$8$8::*)()>(&Operators$OperatorType$$Lambda$lambda$static$8$8::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$OperatorType$$Lambda$lambda$static$8$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$8$8",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Operators$OperatorType$$Lambda$lambda$static$8$8::load$($String* name, bool initialize) {
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$8$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$8$8::class$ = nullptr;

class Operators$OperatorType$$Lambda$lambda$static$9$9 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$9$9, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		 return $of(Operators$OperatorType::lambda$static$9($cast($Symtab, syms)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$OperatorType$$Lambda$lambda$static$9$9>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Operators$OperatorType$$Lambda$lambda$static$9$9::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Operators$OperatorType$$Lambda$lambda$static$9$9::*)()>(&Operators$OperatorType$$Lambda$lambda$static$9$9::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$OperatorType$$Lambda$lambda$static$9$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$9$9",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Operators$OperatorType$$Lambda$lambda$static$9$9::load$($String* name, bool initialize) {
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$9$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$9$9::class$ = nullptr;

class Operators$OperatorType$$Lambda$lambda$static$10$10 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$10$10, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		 return $of(Operators$OperatorType::lambda$static$10($cast($Symtab, syms)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$OperatorType$$Lambda$lambda$static$10$10>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Operators$OperatorType$$Lambda$lambda$static$10$10::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Operators$OperatorType$$Lambda$lambda$static$10$10::*)()>(&Operators$OperatorType$$Lambda$lambda$static$10$10::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Operators$OperatorType$$Lambda$lambda$static$10$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$10$10",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Operators$OperatorType$$Lambda$lambda$static$10$10::load$($String* name, bool initialize) {
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$10$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$10$10::class$ = nullptr;

$FieldInfo _Operators$OperatorType_FieldInfo_[] = {
	{"BYTE", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, BYTE)},
	{"SHORT", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, SHORT)},
	{"INT", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, INT)},
	{"LONG", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, LONG)},
	{"FLOAT", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, FLOAT)},
	{"DOUBLE", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, DOUBLE)},
	{"CHAR", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, CHAR)},
	{"BOOLEAN", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, BOOLEAN)},
	{"OBJECT", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, OBJECT)},
	{"STRING", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, STRING)},
	{"BOT", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, BOT)},
	{"$VALUES", "[Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Operators$OperatorType, $VALUES)},
	{"asTypeFunc", "Ljava/util/function/Function;", "Ljava/util/function/Function<Lcom/sun/tools/javac/code/Symtab;Lcom/sun/tools/javac/code/Type;>;", $FINAL, $field(Operators$OperatorType, asTypeFunc)},
	{}
};

$MethodInfo _Operators$OperatorType_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Operators$OperatorTypeArray*(*)()>(&Operators$OperatorType::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/util/function/Function;)V", "(Ljava/util/function/Function<Lcom/sun/tools/javac/code/Symtab;Lcom/sun/tools/javac/code/Type;>;)V", $PRIVATE, $method(static_cast<void(Operators$OperatorType::*)($String*,int32_t,$Function*)>(&Operators$OperatorType::init$))},
	{"asType", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $method(static_cast<$Type*(Operators$OperatorType::*)($Symtab*)>(&Operators$OperatorType::asType))},
	{"lambda$static$0", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Type*(*)($Symtab*)>(&Operators$OperatorType::lambda$static$0))},
	{"lambda$static$1", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Type*(*)($Symtab*)>(&Operators$OperatorType::lambda$static$1))},
	{"lambda$static$10", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Type*(*)($Symtab*)>(&Operators$OperatorType::lambda$static$10))},
	{"lambda$static$2", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Type*(*)($Symtab*)>(&Operators$OperatorType::lambda$static$2))},
	{"lambda$static$3", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Type*(*)($Symtab*)>(&Operators$OperatorType::lambda$static$3))},
	{"lambda$static$4", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Type*(*)($Symtab*)>(&Operators$OperatorType::lambda$static$4))},
	{"lambda$static$5", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Type*(*)($Symtab*)>(&Operators$OperatorType::lambda$static$5))},
	{"lambda$static$6", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Type*(*)($Symtab*)>(&Operators$OperatorType::lambda$static$6))},
	{"lambda$static$7", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Type*(*)($Symtab*)>(&Operators$OperatorType::lambda$static$7))},
	{"lambda$static$8", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Type*(*)($Symtab*)>(&Operators$OperatorType::lambda$static$8))},
	{"lambda$static$9", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Type*(*)($Symtab*)>(&Operators$OperatorType::lambda$static$9))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Operators$OperatorType*(*)($String*)>(&Operators$OperatorType::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Operators$OperatorTypeArray*(*)()>(&Operators$OperatorType::values))},
	{}
};

$InnerClassInfo _Operators$OperatorType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Operators$OperatorType", "com.sun.tools.javac.comp.Operators", "OperatorType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Operators$OperatorType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Operators$OperatorType",
	"java.lang.Enum",
	nullptr,
	_Operators$OperatorType_FieldInfo_,
	_Operators$OperatorType_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Operators$OperatorType;>;",
	nullptr,
	_Operators$OperatorType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Operators"
};

$Object* allocate$Operators$OperatorType($Class* clazz) {
	return $of($alloc(Operators$OperatorType));
}

Operators$OperatorType* Operators$OperatorType::BYTE = nullptr;
Operators$OperatorType* Operators$OperatorType::SHORT = nullptr;
Operators$OperatorType* Operators$OperatorType::INT = nullptr;
Operators$OperatorType* Operators$OperatorType::LONG = nullptr;
Operators$OperatorType* Operators$OperatorType::FLOAT = nullptr;
Operators$OperatorType* Operators$OperatorType::DOUBLE = nullptr;
Operators$OperatorType* Operators$OperatorType::CHAR = nullptr;
Operators$OperatorType* Operators$OperatorType::BOOLEAN = nullptr;
Operators$OperatorType* Operators$OperatorType::OBJECT = nullptr;
Operators$OperatorType* Operators$OperatorType::STRING = nullptr;
Operators$OperatorType* Operators$OperatorType::BOT = nullptr;
$Operators$OperatorTypeArray* Operators$OperatorType::$VALUES = nullptr;

$Operators$OperatorTypeArray* Operators$OperatorType::$values() {
	$init(Operators$OperatorType);
	return $new($Operators$OperatorTypeArray, {
		Operators$OperatorType::BYTE,
		Operators$OperatorType::SHORT,
		Operators$OperatorType::INT,
		Operators$OperatorType::LONG,
		Operators$OperatorType::FLOAT,
		Operators$OperatorType::DOUBLE,
		Operators$OperatorType::CHAR,
		Operators$OperatorType::BOOLEAN,
		Operators$OperatorType::OBJECT,
		Operators$OperatorType::STRING,
		Operators$OperatorType::BOT
	});
}

$Operators$OperatorTypeArray* Operators$OperatorType::values() {
	$init(Operators$OperatorType);
	return $cast($Operators$OperatorTypeArray, Operators$OperatorType::$VALUES->clone());
}

Operators$OperatorType* Operators$OperatorType::valueOf($String* name) {
	$init(Operators$OperatorType);
	return $cast(Operators$OperatorType, $Enum::valueOf(Operators$OperatorType::class$, name));
}

void Operators$OperatorType::init$($String* $enum$name, int32_t $enum$ordinal, $Function* asTypeFunc) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, asTypeFunc, asTypeFunc);
}

$Type* Operators$OperatorType::asType($Symtab* syms) {
	return $cast($Type, $nc(this->asTypeFunc)->apply(syms));
}

$Type* Operators$OperatorType::lambda$static$10($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->botType;
}

$Type* Operators$OperatorType::lambda$static$9($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->stringType;
}

$Type* Operators$OperatorType::lambda$static$8($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->objectType;
}

$Type* Operators$OperatorType::lambda$static$7($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->booleanType;
}

$Type* Operators$OperatorType::lambda$static$6($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->charType;
}

$Type* Operators$OperatorType::lambda$static$5($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->doubleType;
}

$Type* Operators$OperatorType::lambda$static$4($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->floatType;
}

$Type* Operators$OperatorType::lambda$static$3($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->longType;
}

$Type* Operators$OperatorType::lambda$static$2($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->intType;
}

$Type* Operators$OperatorType::lambda$static$1($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->shortType;
}

$Type* Operators$OperatorType::lambda$static$0($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->byteType;
}

void clinit$Operators$OperatorType($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Operators$OperatorType::BYTE, $new(Operators$OperatorType, "BYTE"_s, 0, static_cast<$Function*>($$new(Operators$OperatorType$$Lambda$lambda$static$0))));
	$assignStatic(Operators$OperatorType::SHORT, $new(Operators$OperatorType, "SHORT"_s, 1, static_cast<$Function*>($$new(Operators$OperatorType$$Lambda$lambda$static$1$1))));
	$assignStatic(Operators$OperatorType::INT, $new(Operators$OperatorType, "INT"_s, 2, static_cast<$Function*>($$new(Operators$OperatorType$$Lambda$lambda$static$2$2))));
	$assignStatic(Operators$OperatorType::LONG, $new(Operators$OperatorType, "LONG"_s, 3, static_cast<$Function*>($$new(Operators$OperatorType$$Lambda$lambda$static$3$3))));
	$assignStatic(Operators$OperatorType::FLOAT, $new(Operators$OperatorType, "FLOAT"_s, 4, static_cast<$Function*>($$new(Operators$OperatorType$$Lambda$lambda$static$4$4))));
	$assignStatic(Operators$OperatorType::DOUBLE, $new(Operators$OperatorType, "DOUBLE"_s, 5, static_cast<$Function*>($$new(Operators$OperatorType$$Lambda$lambda$static$5$5))));
	$assignStatic(Operators$OperatorType::CHAR, $new(Operators$OperatorType, "CHAR"_s, 6, static_cast<$Function*>($$new(Operators$OperatorType$$Lambda$lambda$static$6$6))));
	$assignStatic(Operators$OperatorType::BOOLEAN, $new(Operators$OperatorType, "BOOLEAN"_s, 7, static_cast<$Function*>($$new(Operators$OperatorType$$Lambda$lambda$static$7$7))));
	$assignStatic(Operators$OperatorType::OBJECT, $new(Operators$OperatorType, "OBJECT"_s, 8, static_cast<$Function*>($$new(Operators$OperatorType$$Lambda$lambda$static$8$8))));
	$assignStatic(Operators$OperatorType::STRING, $new(Operators$OperatorType, "STRING"_s, 9, static_cast<$Function*>($$new(Operators$OperatorType$$Lambda$lambda$static$9$9))));
	$assignStatic(Operators$OperatorType::BOT, $new(Operators$OperatorType, "BOT"_s, 10, static_cast<$Function*>($$new(Operators$OperatorType$$Lambda$lambda$static$10$10))));
	$assignStatic(Operators$OperatorType::$VALUES, Operators$OperatorType::$values());
}

Operators$OperatorType::Operators$OperatorType() {
}

$Class* Operators$OperatorType::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Operators$OperatorType$$Lambda$lambda$static$0::classInfo$.name)) {
			return Operators$OperatorType$$Lambda$lambda$static$0::load$(name, initialize);
		}
		if (name->equals(Operators$OperatorType$$Lambda$lambda$static$1$1::classInfo$.name)) {
			return Operators$OperatorType$$Lambda$lambda$static$1$1::load$(name, initialize);
		}
		if (name->equals(Operators$OperatorType$$Lambda$lambda$static$2$2::classInfo$.name)) {
			return Operators$OperatorType$$Lambda$lambda$static$2$2::load$(name, initialize);
		}
		if (name->equals(Operators$OperatorType$$Lambda$lambda$static$3$3::classInfo$.name)) {
			return Operators$OperatorType$$Lambda$lambda$static$3$3::load$(name, initialize);
		}
		if (name->equals(Operators$OperatorType$$Lambda$lambda$static$4$4::classInfo$.name)) {
			return Operators$OperatorType$$Lambda$lambda$static$4$4::load$(name, initialize);
		}
		if (name->equals(Operators$OperatorType$$Lambda$lambda$static$5$5::classInfo$.name)) {
			return Operators$OperatorType$$Lambda$lambda$static$5$5::load$(name, initialize);
		}
		if (name->equals(Operators$OperatorType$$Lambda$lambda$static$6$6::classInfo$.name)) {
			return Operators$OperatorType$$Lambda$lambda$static$6$6::load$(name, initialize);
		}
		if (name->equals(Operators$OperatorType$$Lambda$lambda$static$7$7::classInfo$.name)) {
			return Operators$OperatorType$$Lambda$lambda$static$7$7::load$(name, initialize);
		}
		if (name->equals(Operators$OperatorType$$Lambda$lambda$static$8$8::classInfo$.name)) {
			return Operators$OperatorType$$Lambda$lambda$static$8$8::load$(name, initialize);
		}
		if (name->equals(Operators$OperatorType$$Lambda$lambda$static$9$9::classInfo$.name)) {
			return Operators$OperatorType$$Lambda$lambda$static$9$9::load$(name, initialize);
		}
		if (name->equals(Operators$OperatorType$$Lambda$lambda$static$10$10::classInfo$.name)) {
			return Operators$OperatorType$$Lambda$lambda$static$10$10::load$(name, initialize);
		}
	}
	$loadClass(Operators$OperatorType, name, initialize, &_Operators$OperatorType_ClassInfo_, clinit$Operators$OperatorType, allocate$Operators$OperatorType);
	return class$;
}

$Class* Operators$OperatorType::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com