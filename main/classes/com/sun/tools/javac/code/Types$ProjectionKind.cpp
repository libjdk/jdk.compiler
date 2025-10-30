#include <com/sun/tools/javac/code/Types$ProjectionKind.h>

#include <com/sun/tools/javac/code/Types$ProjectionKind$1.h>
#include <com/sun/tools/javac/code/Types$ProjectionKind$2.h>
#include <com/sun/tools/javac/code/Types.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef DOWNWARDS
#undef UPWARDS

using $Types$ProjectionKindArray = $Array<::com::sun::tools::javac::code::Types$ProjectionKind>;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$ProjectionKind$1 = ::com::sun::tools::javac::code::Types$ProjectionKind$1;
using $Types$ProjectionKind$2 = ::com::sun::tools::javac::code::Types$ProjectionKind$2;
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

$FieldInfo _Types$ProjectionKind_FieldInfo_[] = {
	{"UPWARDS", "Lcom/sun/tools/javac/code/Types$ProjectionKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Types$ProjectionKind, UPWARDS)},
	{"DOWNWARDS", "Lcom/sun/tools/javac/code/Types$ProjectionKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Types$ProjectionKind, DOWNWARDS)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/Types$ProjectionKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Types$ProjectionKind, $VALUES)},
	{}
};

$MethodInfo _Types$ProjectionKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/Types$ProjectionKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Types$ProjectionKindArray*(*)()>(&Types$ProjectionKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Types$ProjectionKind::*)($String*,int32_t)>(&Types$ProjectionKind::init$))},
	{"complement", "()Lcom/sun/tools/javac/code/Types$ProjectionKind;", nullptr, $ABSTRACT},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Types$ProjectionKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Types$ProjectionKind*(*)($String*)>(&Types$ProjectionKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/Types$ProjectionKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Types$ProjectionKindArray*(*)()>(&Types$ProjectionKind::values))},
	{}
};

$InnerClassInfo _Types$ProjectionKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$ProjectionKind", "com.sun.tools.javac.code.Types", "ProjectionKind", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.code.Types$ProjectionKind$2", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.code.Types$ProjectionKind$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Types$ProjectionKind_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT | $ENUM,
	"com.sun.tools.javac.code.Types$ProjectionKind",
	"java.lang.Enum",
	nullptr,
	_Types$ProjectionKind_FieldInfo_,
	_Types$ProjectionKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Types$ProjectionKind;>;",
	nullptr,
	_Types$ProjectionKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$ProjectionKind($Class* clazz) {
	return $of($alloc(Types$ProjectionKind));
}

Types$ProjectionKind* Types$ProjectionKind::UPWARDS = nullptr;
Types$ProjectionKind* Types$ProjectionKind::DOWNWARDS = nullptr;
$Types$ProjectionKindArray* Types$ProjectionKind::$VALUES = nullptr;

$Types$ProjectionKindArray* Types$ProjectionKind::$values() {
	$init(Types$ProjectionKind);
	return $new($Types$ProjectionKindArray, {
		Types$ProjectionKind::UPWARDS,
		Types$ProjectionKind::DOWNWARDS
	});
}

$Types$ProjectionKindArray* Types$ProjectionKind::values() {
	$init(Types$ProjectionKind);
	return $cast($Types$ProjectionKindArray, Types$ProjectionKind::$VALUES->clone());
}

Types$ProjectionKind* Types$ProjectionKind::valueOf($String* name) {
	$init(Types$ProjectionKind);
	return $cast(Types$ProjectionKind, $Enum::valueOf(Types$ProjectionKind::class$, name));
}

void Types$ProjectionKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Types$ProjectionKind($Class* class$) {
	$assignStatic(Types$ProjectionKind::UPWARDS, $new($Types$ProjectionKind$1, "UPWARDS"_s, 0));
	$assignStatic(Types$ProjectionKind::DOWNWARDS, $new($Types$ProjectionKind$2, "DOWNWARDS"_s, 1));
	$assignStatic(Types$ProjectionKind::$VALUES, Types$ProjectionKind::$values());
}

Types$ProjectionKind::Types$ProjectionKind() {
}

$Class* Types$ProjectionKind::load$($String* name, bool initialize) {
	$loadClass(Types$ProjectionKind, name, initialize, &_Types$ProjectionKind_ClassInfo_, clinit$Types$ProjectionKind, allocate$Types$ProjectionKind);
	return class$;
}

$Class* Types$ProjectionKind::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com