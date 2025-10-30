#include <com/sun/tools/javac/code/Types$23$1.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$23.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Types$23 = ::com::sun::tools::javac::code::Types$23;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$23$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/code/Types$23;", nullptr, $FINAL | $SYNTHETIC, $field(Types$23$1, this$1)},
	{"val$t", "Lcom/sun/tools/javac/code/Type$MethodType;", nullptr, $FINAL | $SYNTHETIC, $field(Types$23$1, val$t)},
	{}
};

$MethodInfo _Types$23$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$23;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type$MethodType;)V", nullptr, 0, $method(static_cast<void(Types$23$1::*)($Types$23*,$List*,$Type*,$List*,$Symbol$TypeSymbol*,$Type$MethodType*)>(&Types$23$1::init$))},
	{"baseType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Types$23$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types$23",
	"visitMethodType",
	"(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;"
};

$InnerClassInfo _Types$23$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$23", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$23$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$MethodType", "com.sun.tools.javac.code.Type", "MethodType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Types$23$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$23$1",
	"com.sun.tools.javac.code.Type$MethodType",
	nullptr,
	_Types$23$1_FieldInfo_,
	_Types$23$1_MethodInfo_,
	nullptr,
	&_Types$23$1_EnclosingMethodInfo_,
	_Types$23$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$23$1($Class* clazz) {
	return $of($alloc(Types$23$1));
}

void Types$23$1::init$($Types$23* this$1, $List* argtypes, $Type* restype, $List* thrown, $Symbol$TypeSymbol* methodClass, $Type$MethodType* val$t) {
	$set(this, this$1, this$1);
	$set(this, val$t, val$t);
	$Type$MethodType::init$(argtypes, restype, thrown, methodClass);
}

$Type* Types$23$1::baseType() {
	return this->val$t;
}

Types$23$1::Types$23$1() {
}

$Class* Types$23$1::load$($String* name, bool initialize) {
	$loadClass(Types$23$1, name, initialize, &_Types$23$1_ClassInfo_, allocate$Types$23$1);
	return class$;
}

$Class* Types$23$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com