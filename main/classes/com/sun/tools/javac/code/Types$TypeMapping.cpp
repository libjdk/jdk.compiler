#include <com/sun/tools/javac/code/Types$TypeMapping.h>

#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types$MapVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $Types$MapVisitor = ::com::sun::tools::javac::code::Types$MapVisitor;
using $List = ::com::sun::tools::javac::util::List;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
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
				namespace code {

class Types$TypeMapping$$Lambda$lambda$visit$0 : public $Function {
	$class(Types$TypeMapping$$Lambda$lambda$visit$0, $NO_CLASS_INIT, $Function)
public:
	void init$(Types$TypeMapping* inst, Object$* s) {
		$set(this, inst$, inst);
		$set(this, s, s);
	}
	virtual $Object* apply(Object$* t) override {
		 return $of($nc(inst$)->lambda$visit$0(s, $cast($Type, t)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Types$TypeMapping$$Lambda$lambda$visit$0>());
	}
	Types$TypeMapping* inst$ = nullptr;
	$Object* s = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Types$TypeMapping$$Lambda$lambda$visit$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Types$TypeMapping$$Lambda$lambda$visit$0, inst$)},
	{"s", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Types$TypeMapping$$Lambda$lambda$visit$0, s)},
	{}
};
$MethodInfo Types$TypeMapping$$Lambda$lambda$visit$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$TypeMapping;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(Types$TypeMapping$$Lambda$lambda$visit$0::*)(Types$TypeMapping*,Object$*)>(&Types$TypeMapping$$Lambda$lambda$visit$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Types$TypeMapping$$Lambda$lambda$visit$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Types$TypeMapping$$Lambda$lambda$visit$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Types$TypeMapping$$Lambda$lambda$visit$0::load$($String* name, bool initialize) {
	$loadClass(Types$TypeMapping$$Lambda$lambda$visit$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Types$TypeMapping$$Lambda$lambda$visit$0::class$ = nullptr;

$MethodInfo _Types$TypeMapping_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Types$TypeMapping::*)()>(&Types$TypeMapping::init$))},
	{"apply", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"lambda$visit$0", "(Ljava/lang/Object;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Type*(Types$TypeMapping::*)(Object$*,$Type*)>(&Types$TypeMapping::lambda$visit$0))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"visit", "(Lcom/sun/tools/javac/util/List;Ljava/lang/Object;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;TS;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$CapturedType;TS;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{}
};

$InnerClassInfo _Types$TypeMapping_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$TypeMapping", "com.sun.tools.javac.code.Types", "TypeMapping", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Types$MapVisitor", "com.sun.tools.javac.code.Types", "MapVisitor", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Types$TypeMapping_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Types$TypeMapping",
	"com.sun.tools.javac.code.Types$MapVisitor",
	"java.util.function.Function",
	nullptr,
	_Types$TypeMapping_MethodInfo_,
	"<S:Ljava/lang/Object;>Lcom/sun/tools/javac/code/Types$MapVisitor<TS;>;Ljava/util/function/Function<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;>;",
	nullptr,
	_Types$TypeMapping_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$TypeMapping($Class* clazz) {
	return $of($alloc(Types$TypeMapping));
}

int32_t Types$TypeMapping::hashCode() {
	 return this->$Types$MapVisitor::hashCode();
}

bool Types$TypeMapping::equals(Object$* arg0) {
	 return this->$Types$MapVisitor::equals(arg0);
}

$Object* Types$TypeMapping::clone() {
	 return this->$Types$MapVisitor::clone();
}

$String* Types$TypeMapping::toString() {
	 return this->$Types$MapVisitor::toString();
}

void Types$TypeMapping::finalize() {
	this->$Types$MapVisitor::finalize();
}

void Types$TypeMapping::init$() {
	$Types$MapVisitor::init$();
}

$Type* Types$TypeMapping::apply($Type* type) {
	return visit(type);
}

$List* Types$TypeMapping::visit($List* ts, Object$* s) {
	return $nc(ts)->map(static_cast<$Function*>($$new(Types$TypeMapping$$Lambda$lambda$visit$0, this, s)));
}

$Object* Types$TypeMapping::visitCapturedType($Type$CapturedType* t, Object$* s) {
	return $of($cast($Type, visitTypeVar(t, s)));
}

$Object* Types$TypeMapping::apply(Object$* type) {
	return $of(this->apply($cast($Type, type)));
}

$Type* Types$TypeMapping::lambda$visit$0(Object$* s, $Type* t) {
	return $cast($Type, visit(t, s));
}

Types$TypeMapping::Types$TypeMapping() {
}

$Class* Types$TypeMapping::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Types$TypeMapping$$Lambda$lambda$visit$0::classInfo$.name)) {
			return Types$TypeMapping$$Lambda$lambda$visit$0::load$(name, initialize);
		}
	}
	$loadClass(Types$TypeMapping, name, initialize, &_Types$TypeMapping_ClassInfo_, allocate$Types$TypeMapping);
	return class$;
}

$Class* Types$TypeMapping::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com