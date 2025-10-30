#include <com/sun/tools/javac/code/Types$23.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$DelegatedType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$23$1.h>
#include <com/sun/tools/javac/code/Types$23$2.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types$MapVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$Visitor = ::com::sun::tools::javac::code::Type$Visitor;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$23$1 = ::com::sun::tools::javac::code::Types$23$1;
using $Types$23$2 = ::com::sun::tools::javac::code::Types$23$2;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $Types$MapVisitor = ::com::sun::tools::javac::code::Types$MapVisitor;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$23_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$23, this$0)},
	{}
};

$MethodInfo _Types$23_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$23::*)($Types*)>(&Types$23::init$))},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Types$23_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$23_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$23", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$MapVisitor", "com.sun.tools.javac.code.Types", "MapVisitor", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Types$23$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$23$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Types$23_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$23",
	"com.sun.tools.javac.code.Types$MapVisitor",
	nullptr,
	_Types$23_FieldInfo_,
	_Types$23_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$MapVisitor<Lcom/sun/tools/javac/code/Type;>;",
	&_Types$23_EnclosingMethodInfo_,
	_Types$23_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$23($Class* clazz) {
	return $of($alloc(Types$23));
}

void Types$23::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$MapVisitor::init$();
}

$Type* Types$23::visitType($Type* t, $Type* newReturn) {
	$throwNew($IllegalArgumentException, $$str({"Not a method type: "_s, t}));
	$shouldNotReachHere();
}

$Type* Types$23::visitMethodType($Type$MethodType* t, $Type* newReturn) {
	return $new($Types$23$1, this, $nc(t)->argtypes$, newReturn, t->thrown, t->tsym, t);
}

$Type* Types$23::visitForAll($Type$ForAll* t, $Type* newReturn) {
	return $new($Types$23$2, this, $nc(t)->tvars, $cast($Type, $($nc(t->qtype)->accept(static_cast<$Type$Visitor*>(this), $of(newReturn)))), t);
}

$Object* Types$23::visitType($Type* t, Object$* newReturn) {
	return $of(this->visitType(t, $cast($Type, newReturn)));
}

$Object* Types$23::visitForAll($Type$ForAll* t, Object$* newReturn) {
	return $of(this->visitForAll(t, $cast($Type, newReturn)));
}

$Object* Types$23::visitMethodType($Type$MethodType* t, Object$* newReturn) {
	return $of(this->visitMethodType(t, $cast($Type, newReturn)));
}

Types$23::Types$23() {
}

$Class* Types$23::load$($String* name, bool initialize) {
	$loadClass(Types$23, name, initialize, &_Types$23_ClassInfo_, allocate$Types$23);
	return class$;
}

$Class* Types$23::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com