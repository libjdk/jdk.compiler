#include <com/sun/tools/javac/code/Type$UndetVar$Kind.h>

#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CAPTURED
#undef NORMAL
#undef THROWS

using $Type$UndetVar$KindArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$Kind>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Type$UndetVar$Kind_FieldInfo_[] = {
	{"NORMAL", "Lcom/sun/tools/javac/code/Type$UndetVar$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Type$UndetVar$Kind, NORMAL)},
	{"CAPTURED", "Lcom/sun/tools/javac/code/Type$UndetVar$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Type$UndetVar$Kind, CAPTURED)},
	{"THROWS", "Lcom/sun/tools/javac/code/Type$UndetVar$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Type$UndetVar$Kind, THROWS)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/Type$UndetVar$Kind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Type$UndetVar$Kind, $VALUES)},
	{}
};

$MethodInfo _Type$UndetVar$Kind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/Type$UndetVar$Kind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Type$UndetVar$KindArray*(*)()>(&Type$UndetVar$Kind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Type$UndetVar$Kind::*)($String*,int32_t)>(&Type$UndetVar$Kind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Type$UndetVar$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Type$UndetVar$Kind*(*)($String*)>(&Type$UndetVar$Kind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/Type$UndetVar$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Type$UndetVar$KindArray*(*)()>(&Type$UndetVar$Kind::values))},
	{}
};

$InnerClassInfo _Type$UndetVar$Kind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$UndetVar", "com.sun.tools.javac.code.Type", "UndetVar", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$UndetVar$Kind", "com.sun.tools.javac.code.Type$UndetVar", "Kind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Type$UndetVar$Kind_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Type$UndetVar$Kind",
	"java.lang.Enum",
	nullptr,
	_Type$UndetVar$Kind_FieldInfo_,
	_Type$UndetVar$Kind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Type$UndetVar$Kind;>;",
	nullptr,
	_Type$UndetVar$Kind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$UndetVar$Kind($Class* clazz) {
	return $of($alloc(Type$UndetVar$Kind));
}

Type$UndetVar$Kind* Type$UndetVar$Kind::NORMAL = nullptr;
Type$UndetVar$Kind* Type$UndetVar$Kind::CAPTURED = nullptr;
Type$UndetVar$Kind* Type$UndetVar$Kind::THROWS = nullptr;
$Type$UndetVar$KindArray* Type$UndetVar$Kind::$VALUES = nullptr;

$Type$UndetVar$KindArray* Type$UndetVar$Kind::$values() {
	$init(Type$UndetVar$Kind);
	return $new($Type$UndetVar$KindArray, {
		Type$UndetVar$Kind::NORMAL,
		Type$UndetVar$Kind::CAPTURED,
		Type$UndetVar$Kind::THROWS
	});
}

$Type$UndetVar$KindArray* Type$UndetVar$Kind::values() {
	$init(Type$UndetVar$Kind);
	return $cast($Type$UndetVar$KindArray, Type$UndetVar$Kind::$VALUES->clone());
}

Type$UndetVar$Kind* Type$UndetVar$Kind::valueOf($String* name) {
	$init(Type$UndetVar$Kind);
	return $cast(Type$UndetVar$Kind, $Enum::valueOf(Type$UndetVar$Kind::class$, name));
}

void Type$UndetVar$Kind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Type$UndetVar$Kind($Class* class$) {
	$assignStatic(Type$UndetVar$Kind::NORMAL, $new(Type$UndetVar$Kind, "NORMAL"_s, 0));
	$assignStatic(Type$UndetVar$Kind::CAPTURED, $new(Type$UndetVar$Kind, "CAPTURED"_s, 1));
	$assignStatic(Type$UndetVar$Kind::THROWS, $new(Type$UndetVar$Kind, "THROWS"_s, 2));
	$assignStatic(Type$UndetVar$Kind::$VALUES, Type$UndetVar$Kind::$values());
}

Type$UndetVar$Kind::Type$UndetVar$Kind() {
}

$Class* Type$UndetVar$Kind::load$($String* name, bool initialize) {
	$loadClass(Type$UndetVar$Kind, name, initialize, &_Type$UndetVar$Kind_ClassInfo_, clinit$Type$UndetVar$Kind, allocate$Type$UndetVar$Kind);
	return class$;
}

$Class* Type$UndetVar$Kind::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com