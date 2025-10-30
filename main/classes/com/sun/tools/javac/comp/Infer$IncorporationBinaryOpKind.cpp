#include <com/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind$1.h>
#include <com/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind$2.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef IS_SAME_TYPE
#undef IS_SUBTYPE

using $Infer$IncorporationBinaryOpKindArray = $Array<::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$IncorporationBinaryOpKind$1 = ::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind$1;
using $Infer$IncorporationBinaryOpKind$2 = ::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind$2;
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

$FieldInfo _Infer$IncorporationBinaryOpKind_FieldInfo_[] = {
	{"IS_SUBTYPE", "Lcom/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Infer$IncorporationBinaryOpKind, IS_SUBTYPE)},
	{"IS_SAME_TYPE", "Lcom/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Infer$IncorporationBinaryOpKind, IS_SAME_TYPE)},
	{"$VALUES", "[Lcom/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Infer$IncorporationBinaryOpKind, $VALUES)},
	{}
};

$MethodInfo _Infer$IncorporationBinaryOpKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Infer$IncorporationBinaryOpKindArray*(*)()>(&Infer$IncorporationBinaryOpKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Infer$IncorporationBinaryOpKind::*)($String*,int32_t)>(&Infer$IncorporationBinaryOpKind::init$))},
	{"apply", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;Lcom/sun/tools/javac/code/Types;)Z", nullptr, $ABSTRACT},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Infer$IncorporationBinaryOpKind*(*)($String*)>(&Infer$IncorporationBinaryOpKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Infer$IncorporationBinaryOpKindArray*(*)()>(&Infer$IncorporationBinaryOpKind::values))},
	{}
};

$InnerClassInfo _Infer$IncorporationBinaryOpKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind", "com.sun.tools.javac.comp.Infer", "IncorporationBinaryOpKind", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind$2", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Infer$IncorporationBinaryOpKind_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT | $ENUM,
	"com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind",
	"java.lang.Enum",
	nullptr,
	_Infer$IncorporationBinaryOpKind_FieldInfo_,
	_Infer$IncorporationBinaryOpKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind;>;",
	nullptr,
	_Infer$IncorporationBinaryOpKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$IncorporationBinaryOpKind($Class* clazz) {
	return $of($alloc(Infer$IncorporationBinaryOpKind));
}

Infer$IncorporationBinaryOpKind* Infer$IncorporationBinaryOpKind::IS_SUBTYPE = nullptr;
Infer$IncorporationBinaryOpKind* Infer$IncorporationBinaryOpKind::IS_SAME_TYPE = nullptr;
$Infer$IncorporationBinaryOpKindArray* Infer$IncorporationBinaryOpKind::$VALUES = nullptr;

$Infer$IncorporationBinaryOpKindArray* Infer$IncorporationBinaryOpKind::$values() {
	$init(Infer$IncorporationBinaryOpKind);
	return $new($Infer$IncorporationBinaryOpKindArray, {
		Infer$IncorporationBinaryOpKind::IS_SUBTYPE,
		Infer$IncorporationBinaryOpKind::IS_SAME_TYPE
	});
}

$Infer$IncorporationBinaryOpKindArray* Infer$IncorporationBinaryOpKind::values() {
	$init(Infer$IncorporationBinaryOpKind);
	return $cast($Infer$IncorporationBinaryOpKindArray, Infer$IncorporationBinaryOpKind::$VALUES->clone());
}

Infer$IncorporationBinaryOpKind* Infer$IncorporationBinaryOpKind::valueOf($String* name) {
	$init(Infer$IncorporationBinaryOpKind);
	return $cast(Infer$IncorporationBinaryOpKind, $Enum::valueOf(Infer$IncorporationBinaryOpKind::class$, name));
}

void Infer$IncorporationBinaryOpKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Infer$IncorporationBinaryOpKind($Class* class$) {
	$assignStatic(Infer$IncorporationBinaryOpKind::IS_SUBTYPE, $new($Infer$IncorporationBinaryOpKind$1, "IS_SUBTYPE"_s, 0));
	$assignStatic(Infer$IncorporationBinaryOpKind::IS_SAME_TYPE, $new($Infer$IncorporationBinaryOpKind$2, "IS_SAME_TYPE"_s, 1));
	$assignStatic(Infer$IncorporationBinaryOpKind::$VALUES, Infer$IncorporationBinaryOpKind::$values());
}

Infer$IncorporationBinaryOpKind::Infer$IncorporationBinaryOpKind() {
}

$Class* Infer$IncorporationBinaryOpKind::load$($String* name, bool initialize) {
	$loadClass(Infer$IncorporationBinaryOpKind, name, initialize, &_Infer$IncorporationBinaryOpKind_ClassInfo_, clinit$Infer$IncorporationBinaryOpKind, allocate$Infer$IncorporationBinaryOpKind);
	return class$;
}

$Class* Infer$IncorporationBinaryOpKind::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com