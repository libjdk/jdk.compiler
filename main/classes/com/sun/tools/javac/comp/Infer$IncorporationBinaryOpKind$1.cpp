#include <com/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind$1.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Infer$IncorporationBinaryOpKind = ::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Infer$IncorporationBinaryOpKind$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(Infer$IncorporationBinaryOpKind$1::*)($String*,int32_t)>(&Infer$IncorporationBinaryOpKind$1::init$))},
	{"apply", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;Lcom/sun/tools/javac/code/Types;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _Infer$IncorporationBinaryOpKind$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind",
	nullptr,
	nullptr
};

$InnerClassInfo _Infer$IncorporationBinaryOpKind$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind", "com.sun.tools.javac.comp.Infer", "IncorporationBinaryOpKind", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Infer$IncorporationBinaryOpKind$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind$1",
	"com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind",
	nullptr,
	nullptr,
	_Infer$IncorporationBinaryOpKind$1_MethodInfo_,
	nullptr,
	&_Infer$IncorporationBinaryOpKind$1_EnclosingMethodInfo_,
	_Infer$IncorporationBinaryOpKind$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$IncorporationBinaryOpKind$1($Class* clazz) {
	return $of($alloc(Infer$IncorporationBinaryOpKind$1));
}

void Infer$IncorporationBinaryOpKind$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Infer$IncorporationBinaryOpKind::init$($enum$name, $enum$ordinal);
}

bool Infer$IncorporationBinaryOpKind$1::apply($Type* op1, $Type* op2, $Warner* warn, $Types* types) {
	return $nc(types)->isSubtypeUnchecked(op1, op2, warn);
}

Infer$IncorporationBinaryOpKind$1::Infer$IncorporationBinaryOpKind$1() {
}

$Class* Infer$IncorporationBinaryOpKind$1::load$($String* name, bool initialize) {
	$loadClass(Infer$IncorporationBinaryOpKind$1, name, initialize, &_Infer$IncorporationBinaryOpKind$1_ClassInfo_, allocate$Infer$IncorporationBinaryOpKind$1);
	return class$;
}

$Class* Infer$IncorporationBinaryOpKind$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com