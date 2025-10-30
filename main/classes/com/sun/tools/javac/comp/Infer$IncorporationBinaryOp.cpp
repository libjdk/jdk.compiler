#include <com/sun/tools/javac/comp/Infer$IncorporationBinaryOp.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$IncorporationBinaryOpKind = ::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Infer$IncorporationBinaryOp_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$IncorporationBinaryOp, this$0)},
	{"opKind", "Lcom/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind;", nullptr, 0, $field(Infer$IncorporationBinaryOp, opKind)},
	{"op1", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Infer$IncorporationBinaryOp, op1)},
	{"op2", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Infer$IncorporationBinaryOp, op2)},
	{}
};

$MethodInfo _Infer$IncorporationBinaryOp_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(static_cast<void(Infer$IncorporationBinaryOp::*)($Infer*,$Infer$IncorporationBinaryOpKind*,$Type*,$Type*)>(&Infer$IncorporationBinaryOp::init$))},
	{"apply", "(Lcom/sun/tools/javac/util/Warner;)Z", nullptr, 0},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Infer$IncorporationBinaryOp_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$IncorporationBinaryOp", "com.sun.tools.javac.comp.Infer", "IncorporationBinaryOp", 0},
	{}
};

$ClassInfo _Infer$IncorporationBinaryOp_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Infer$IncorporationBinaryOp",
	"java.lang.Object",
	nullptr,
	_Infer$IncorporationBinaryOp_FieldInfo_,
	_Infer$IncorporationBinaryOp_MethodInfo_,
	nullptr,
	nullptr,
	_Infer$IncorporationBinaryOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$IncorporationBinaryOp($Class* clazz) {
	return $of($alloc(Infer$IncorporationBinaryOp));
}

void Infer$IncorporationBinaryOp::init$($Infer* this$0, $Infer$IncorporationBinaryOpKind* opKind, $Type* op1, $Type* op2) {
	$set(this, this$0, this$0);
	$set(this, opKind, opKind);
	$set(this, op1, op1);
	$set(this, op2, op2);
}

bool Infer$IncorporationBinaryOp::equals(Object$* o) {
	$var(Infer$IncorporationBinaryOp, incorporationBinaryOp, nullptr);
	bool var$3 = $instanceOf(Infer$IncorporationBinaryOp, o);
	if (var$3) {
		$assign(incorporationBinaryOp, $cast(Infer$IncorporationBinaryOp, o));
		var$3 = true;
	}
	bool var$2 = (var$3);
	bool var$1 = var$2 && this->opKind == $nc(incorporationBinaryOp)->opKind;
	bool var$0 = var$1 && $nc(this->this$0->types)->isSameType(this->op1, incorporationBinaryOp->op1);
	return var$0 && $nc(this->this$0->types)->isSameType(this->op2, incorporationBinaryOp->op2);
}

int32_t Infer$IncorporationBinaryOp::hashCode() {
	int32_t result = $nc(this->opKind)->hashCode();
	result *= 127;
	result += $nc(this->this$0->types)->hashCode(this->op1);
	result *= 127;
	result += $nc(this->this$0->types)->hashCode(this->op2);
	return result;
}

bool Infer$IncorporationBinaryOp::apply($Warner* warn) {
	return $nc(this->opKind)->apply(this->op1, this->op2, warn, this->this$0->types);
}

Infer$IncorporationBinaryOp::Infer$IncorporationBinaryOp() {
}

$Class* Infer$IncorporationBinaryOp::load$($String* name, bool initialize) {
	$loadClass(Infer$IncorporationBinaryOp, name, initialize, &_Infer$IncorporationBinaryOp_ClassInfo_, allocate$Infer$IncorporationBinaryOp);
	return class$;
}

$Class* Infer$IncorporationBinaryOp::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com