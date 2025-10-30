#include <com/sun/tools/javac/code/Types$23$2.h>

#include <com/sun/tools/javac/code/Type$DelegatedType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$23.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
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

$FieldInfo _Types$23$2_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/code/Types$23;", nullptr, $FINAL | $SYNTHETIC, $field(Types$23$2, this$1)},
	{"val$t", "Lcom/sun/tools/javac/code/Type$ForAll;", nullptr, $FINAL | $SYNTHETIC, $field(Types$23$2, val$t)},
	{}
};

$MethodInfo _Types$23$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$23;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type$ForAll;)V", nullptr, 0, $method(static_cast<void(Types$23$2::*)($Types$23*,$List*,$Type*,$Type$ForAll*)>(&Types$23$2::init$))},
	{"baseType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Types$23$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types$23",
	"visitForAll",
	"(Lcom/sun/tools/javac/code/Type$ForAll;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;"
};

$InnerClassInfo _Types$23$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$23", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$23$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$ForAll", "com.sun.tools.javac.code.Type", "ForAll", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Types$23$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$23$2",
	"com.sun.tools.javac.code.Type$ForAll",
	nullptr,
	_Types$23$2_FieldInfo_,
	_Types$23$2_MethodInfo_,
	nullptr,
	&_Types$23$2_EnclosingMethodInfo_,
	_Types$23$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$23$2($Class* clazz) {
	return $of($alloc(Types$23$2));
}

void Types$23$2::init$($Types$23* this$1, $List* tvars, $Type* qtype, $Type$ForAll* val$t) {
	$set(this, this$1, this$1);
	$set(this, val$t, val$t);
	$Type$ForAll::init$(tvars, qtype);
}

$Type* Types$23$2::baseType() {
	return this->val$t;
}

Types$23$2::Types$23$2() {
}

$Class* Types$23$2::load$($String* name, bool initialize) {
	$loadClass(Types$23$2, name, initialize, &_Types$23$2_ClassInfo_, allocate$Types$23$2);
	return class$;
}

$Class* Types$23$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com