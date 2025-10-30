#include <com/sun/tools/javac/code/Types$21.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$DelegatedType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type.h>
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

$FieldInfo _Types$21_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$21, this$0)},
	{}
};

$MethodInfo _Types$21_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$21::*)($Types*)>(&Types$21::init$))},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$ForAll;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Types$21_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$21_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$21", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$MapVisitor", "com.sun.tools.javac.code.Types", "MapVisitor", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Types$21_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$21",
	"com.sun.tools.javac.code.Types$MapVisitor",
	nullptr,
	_Types$21_FieldInfo_,
	_Types$21_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$MapVisitor<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;>;",
	&_Types$21_EnclosingMethodInfo_,
	_Types$21_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$21($Class* clazz) {
	return $of($alloc(Types$21));
}

void Types$21::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$MapVisitor::init$();
}

$Type* Types$21::visitType($Type* t, $List* newParams) {
	$throwNew($IllegalArgumentException, $$str({"Not a method type: "_s, t}));
	$shouldNotReachHere();
}

$Type* Types$21::visitMethodType($Type$MethodType* t, $List* newParams) {
	return $new($Type$MethodType, newParams, $nc(t)->restype, t->thrown, t->tsym);
}

$Type* Types$21::visitForAll($Type$ForAll* t, $List* newParams) {
	return $new($Type$ForAll, $nc(t)->tvars, $cast($Type, $($nc(t->qtype)->accept(static_cast<$Type$Visitor*>(this), $of(newParams)))));
}

$Object* Types$21::visitType($Type* t, Object$* newParams) {
	return $of(this->visitType(t, $cast($List, newParams)));
}

$Object* Types$21::visitForAll($Type$ForAll* t, Object$* newParams) {
	return $of(this->visitForAll(t, $cast($List, newParams)));
}

$Object* Types$21::visitMethodType($Type$MethodType* t, Object$* newParams) {
	return $of(this->visitMethodType(t, $cast($List, newParams)));
}

Types$21::Types$21() {
}

$Class* Types$21::load$($String* name, bool initialize) {
	$loadClass(Types$21, name, initialize, &_Types$21_ClassInfo_, allocate$Types$21);
	return class$;
}

$Class* Types$21::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com