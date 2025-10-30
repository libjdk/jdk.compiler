#include <com/sun/tools/javac/code/Type$UndetVar$1.h>

#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
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

$FieldInfo _Type$UndetVar$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Type$UndetVar;", nullptr, $FINAL | $SYNTHETIC, $field(Type$UndetVar$1, this$0)},
	{}
};

$MethodInfo _Type$UndetVar$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type$UndetVar;)V", nullptr, 0, $method(static_cast<void(Type$UndetVar$1::*)($Type$UndetVar*)>(&Type$UndetVar$1::init$))},
	{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Type$UndetVar$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Type$UndetVar",
	nullptr,
	nullptr
};

$InnerClassInfo _Type$UndetVar$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$UndetVar", "com.sun.tools.javac.code.Type", "UndetVar", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$UndetVar$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$StructuralTypeMapping", "com.sun.tools.javac.code.Type", "StructuralTypeMapping", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Type$UndetVar$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Type$UndetVar$1",
	"com.sun.tools.javac.code.Type$StructuralTypeMapping",
	nullptr,
	_Type$UndetVar$1_FieldInfo_,
	_Type$UndetVar$1_MethodInfo_,
	"Lcom/sun/tools/javac/code/Type$StructuralTypeMapping<Ljava/lang/Void;>;",
	&_Type$UndetVar$1_EnclosingMethodInfo_,
	_Type$UndetVar$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$UndetVar$1($Class* clazz) {
	return $of($alloc(Type$UndetVar$1));
}

void Type$UndetVar$1::init$($Type$UndetVar* this$0) {
	$set(this, this$0, this$0);
	$Type$StructuralTypeMapping::init$();
}

$Type* Type$UndetVar$1::visitUndetVar($Type$UndetVar* uv, $Void* _unused) {
	return $nc(uv)->inst != nullptr ? $nc(uv)->inst : uv->qtype;
}

$Object* Type$UndetVar$1::visitUndetVar($Type$UndetVar* uv, Object$* _unused) {
	return $of(this->visitUndetVar(uv, $cast($Void, _unused)));
}

Type$UndetVar$1::Type$UndetVar$1() {
}

$Class* Type$UndetVar$1::load$($String* name, bool initialize) {
	$loadClass(Type$UndetVar$1, name, initialize, &_Type$UndetVar$1_ClassInfo_, allocate$Type$UndetVar$1);
	return class$;
}

$Class* Type$UndetVar$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com