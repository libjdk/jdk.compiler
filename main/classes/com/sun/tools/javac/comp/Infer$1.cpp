#include <com/sun/tools/javac/comp/Infer$1.h>

#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$DelegatedType.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$UndetVar$UndetVarListener.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Infer$AbstractIncorporationEngine.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <jcpp.h>

#undef THROWS

using $Flags = ::com::sun::tools::javac::code::Flags;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$UndetVarListener = ::com::sun::tools::javac::code::Type$UndetVar$UndetVarListener;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$TypeMapping = ::com::sun::tools::javac::code::Types$TypeMapping;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$AbstractIncorporationEngine = ::com::sun::tools::javac::comp::Infer$AbstractIncorporationEngine;
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
				namespace comp {

$FieldInfo _Infer$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$1, this$0)},
	{}
};

$MethodInfo _Infer$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer;)V", nullptr, 0, $method(static_cast<void(Infer$1::*)($Infer*)>(&Infer$1::init$))},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Infer$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Infer",
	nullptr,
	nullptr
};

$InnerClassInfo _Infer$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$StructuralTypeMapping", "com.sun.tools.javac.code.Type", "StructuralTypeMapping", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Infer$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Infer$1",
	"com.sun.tools.javac.code.Type$StructuralTypeMapping",
	nullptr,
	_Infer$1_FieldInfo_,
	_Infer$1_MethodInfo_,
	"Lcom/sun/tools/javac/code/Type$StructuralTypeMapping<Ljava/lang/Void;>;",
	&_Infer$1_EnclosingMethodInfo_,
	_Infer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$1($Class* clazz) {
	return $of($alloc(Infer$1));
}

void Infer$1::init$($Infer* this$0) {
	$set(this, this$0, this$0);
	$Type$StructuralTypeMapping::init$();
}

$Type* Infer$1::visitTypeVar($Type$TypeVar* tv, $Void* aVoid) {
	$useLocalCurrentObjectStackCache();
	$var($Type$UndetVar, uv, $new($Type$UndetVar, tv, $(this->this$0->incorporationEngine()), this->this$0->types));
	if (((int64_t)($nc($nc(tv)->tsym)->flags() & (uint64_t)$Flags::THROWS)) != 0) {
		uv->setThrow();
	}
	return uv;
}

$Object* Infer$1::visitTypeVar($Type$TypeVar* tv, Object$* aVoid) {
	return $of(this->visitTypeVar(tv, $cast($Void, aVoid)));
}

Infer$1::Infer$1() {
}

$Class* Infer$1::load$($String* name, bool initialize) {
	$loadClass(Infer$1, name, initialize, &_Infer$1_ClassInfo_, allocate$Infer$1);
	return class$;
}

$Class* Infer$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com