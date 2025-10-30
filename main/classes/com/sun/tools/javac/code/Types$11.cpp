#include <com/sun/tools/javac/code/Types$11.h>

#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$MapVisitor.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$MapVisitor = ::com::sun::tools::javac::code::Types$MapVisitor;
using $Types$TypeMapping = ::com::sun::tools::javac::code::Types$TypeMapping;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$11_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$11, this$0)},
	{}
};

$MethodInfo _Types$11_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$11::*)($Types*)>(&Types$11::init$))},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Types$11_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$11_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$11", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$TypeMapping", "com.sun.tools.javac.code.Types", "TypeMapping", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Types$11_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$11",
	"com.sun.tools.javac.code.Types$TypeMapping",
	nullptr,
	_Types$11_FieldInfo_,
	_Types$11_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$TypeMapping<Ljava/lang/Void;>;",
	&_Types$11_EnclosingMethodInfo_,
	_Types$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$11($Class* clazz) {
	return $of($alloc(Types$11));
}

void Types$11::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$TypeMapping::init$();
}

$Type* Types$11::visitArrayType($Type$ArrayType* t, $Void* _unused) {
	return $nc(t)->elemtype;
}

$Type* Types$11::visitTypeVar($Type$TypeVar* t, $Void* _unused) {
	return visit($(this->this$0->skipTypeVars(t, false)));
}

$Object* Types$11::visitTypeVar($Type$TypeVar* t, Object$* _unused) {
	return $of(this->visitTypeVar(t, $cast($Void, _unused)));
}

$Object* Types$11::visitArrayType($Type$ArrayType* t, Object$* _unused) {
	return $of(this->visitArrayType(t, $cast($Void, _unused)));
}

Types$11::Types$11() {
}

$Class* Types$11::load$($String* name, bool initialize) {
	$loadClass(Types$11, name, initialize, &_Types$11_ClassInfo_, allocate$Types$11);
	return class$;
}

$Class* Types$11::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com