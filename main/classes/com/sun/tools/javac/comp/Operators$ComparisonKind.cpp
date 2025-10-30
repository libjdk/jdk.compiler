#include <com/sun/tools/javac/comp/Operators$ComparisonKind.h>

#include <com/sun/tools/javac/comp/Operators.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef INVALID
#undef NUMERIC_OR_BOOLEAN
#undef REFERENCE

using $Operators$ComparisonKindArray = $Array<::com::sun::tools::javac::comp::Operators$ComparisonKind>;
using $Operators = ::com::sun::tools::javac::comp::Operators;
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

$FieldInfo _Operators$ComparisonKind_FieldInfo_[] = {
	{"NUMERIC_OR_BOOLEAN", "Lcom/sun/tools/javac/comp/Operators$ComparisonKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$ComparisonKind, NUMERIC_OR_BOOLEAN)},
	{"REFERENCE", "Lcom/sun/tools/javac/comp/Operators$ComparisonKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$ComparisonKind, REFERENCE)},
	{"INVALID", "Lcom/sun/tools/javac/comp/Operators$ComparisonKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$ComparisonKind, INVALID)},
	{"$VALUES", "[Lcom/sun/tools/javac/comp/Operators$ComparisonKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Operators$ComparisonKind, $VALUES)},
	{}
};

$MethodInfo _Operators$ComparisonKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/comp/Operators$ComparisonKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Operators$ComparisonKindArray*(*)()>(&Operators$ComparisonKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Operators$ComparisonKind::*)($String*,int32_t)>(&Operators$ComparisonKind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Operators$ComparisonKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Operators$ComparisonKind*(*)($String*)>(&Operators$ComparisonKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/comp/Operators$ComparisonKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Operators$ComparisonKindArray*(*)()>(&Operators$ComparisonKind::values))},
	{}
};

$InnerClassInfo _Operators$ComparisonKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Operators$ComparisonKind", "com.sun.tools.javac.comp.Operators", "ComparisonKind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Operators$ComparisonKind_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Operators$ComparisonKind",
	"java.lang.Enum",
	nullptr,
	_Operators$ComparisonKind_FieldInfo_,
	_Operators$ComparisonKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Operators$ComparisonKind;>;",
	nullptr,
	_Operators$ComparisonKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Operators"
};

$Object* allocate$Operators$ComparisonKind($Class* clazz) {
	return $of($alloc(Operators$ComparisonKind));
}

Operators$ComparisonKind* Operators$ComparisonKind::NUMERIC_OR_BOOLEAN = nullptr;
Operators$ComparisonKind* Operators$ComparisonKind::REFERENCE = nullptr;
Operators$ComparisonKind* Operators$ComparisonKind::INVALID = nullptr;
$Operators$ComparisonKindArray* Operators$ComparisonKind::$VALUES = nullptr;

$Operators$ComparisonKindArray* Operators$ComparisonKind::$values() {
	$init(Operators$ComparisonKind);
	return $new($Operators$ComparisonKindArray, {
		Operators$ComparisonKind::NUMERIC_OR_BOOLEAN,
		Operators$ComparisonKind::REFERENCE,
		Operators$ComparisonKind::INVALID
	});
}

$Operators$ComparisonKindArray* Operators$ComparisonKind::values() {
	$init(Operators$ComparisonKind);
	return $cast($Operators$ComparisonKindArray, Operators$ComparisonKind::$VALUES->clone());
}

Operators$ComparisonKind* Operators$ComparisonKind::valueOf($String* name) {
	$init(Operators$ComparisonKind);
	return $cast(Operators$ComparisonKind, $Enum::valueOf(Operators$ComparisonKind::class$, name));
}

void Operators$ComparisonKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Operators$ComparisonKind($Class* class$) {
	$assignStatic(Operators$ComparisonKind::NUMERIC_OR_BOOLEAN, $new(Operators$ComparisonKind, "NUMERIC_OR_BOOLEAN"_s, 0));
	$assignStatic(Operators$ComparisonKind::REFERENCE, $new(Operators$ComparisonKind, "REFERENCE"_s, 1));
	$assignStatic(Operators$ComparisonKind::INVALID, $new(Operators$ComparisonKind, "INVALID"_s, 2));
	$assignStatic(Operators$ComparisonKind::$VALUES, Operators$ComparisonKind::$values());
}

Operators$ComparisonKind::Operators$ComparisonKind() {
}

$Class* Operators$ComparisonKind::load$($String* name, bool initialize) {
	$loadClass(Operators$ComparisonKind, name, initialize, &_Operators$ComparisonKind_ClassInfo_, clinit$Operators$ComparisonKind, allocate$Operators$ComparisonKind);
	return class$;
}

$Class* Operators$ComparisonKind::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com