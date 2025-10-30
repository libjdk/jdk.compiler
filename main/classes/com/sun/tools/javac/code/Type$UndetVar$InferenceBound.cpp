#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>

#include <com/sun/tools/javac/code/Type$5.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound$1.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound$2.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound$3.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef EQ
#undef LOWER
#undef UPPER

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$5 = ::com::sun::tools::javac::code::Type$5;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound$1 = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound$1;
using $Type$UndetVar$InferenceBound$2 = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound$2;
using $Type$UndetVar$InferenceBound$3 = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound$3;
using $Assert = ::com::sun::tools::javac::util::Assert;
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

$FieldInfo _Type$UndetVar$InferenceBound_FieldInfo_[] = {
	{"LOWER", "Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Type$UndetVar$InferenceBound, LOWER)},
	{"EQ", "Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Type$UndetVar$InferenceBound, EQ)},
	{"UPPER", "Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Type$UndetVar$InferenceBound, UPPER)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Type$UndetVar$InferenceBound, $VALUES)},
	{}
};

$MethodInfo _Type$UndetVar$InferenceBound_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Type$UndetVar$InferenceBoundArray*(*)()>(&Type$UndetVar$InferenceBound::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Type$UndetVar$InferenceBound::*)($String*,int32_t)>(&Type$UndetVar$InferenceBound::init$))},
	{"complement", "()Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;", nullptr, $PUBLIC | $ABSTRACT},
	{"lessThan", "(Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)Z", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Type$UndetVar$InferenceBound*(*)($String*)>(&Type$UndetVar$InferenceBound::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Type$UndetVar$InferenceBoundArray*(*)()>(&Type$UndetVar$InferenceBound::values))},
	{}
};

$InnerClassInfo _Type$UndetVar$InferenceBound_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$UndetVar", "com.sun.tools.javac.code.Type", "UndetVar", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$UndetVar$InferenceBound", "com.sun.tools.javac.code.Type$UndetVar", "InferenceBound", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.code.Type$UndetVar$InferenceBound$3", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.code.Type$UndetVar$InferenceBound$2", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.code.Type$UndetVar$InferenceBound$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Type$UndetVar$InferenceBound_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT | $ENUM,
	"com.sun.tools.javac.code.Type$UndetVar$InferenceBound",
	"java.lang.Enum",
	nullptr,
	_Type$UndetVar$InferenceBound_FieldInfo_,
	_Type$UndetVar$InferenceBound_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;>;",
	nullptr,
	_Type$UndetVar$InferenceBound_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$UndetVar$InferenceBound($Class* clazz) {
	return $of($alloc(Type$UndetVar$InferenceBound));
}

Type$UndetVar$InferenceBound* Type$UndetVar$InferenceBound::LOWER = nullptr;
Type$UndetVar$InferenceBound* Type$UndetVar$InferenceBound::EQ = nullptr;
Type$UndetVar$InferenceBound* Type$UndetVar$InferenceBound::UPPER = nullptr;
$Type$UndetVar$InferenceBoundArray* Type$UndetVar$InferenceBound::$VALUES = nullptr;

$Type$UndetVar$InferenceBoundArray* Type$UndetVar$InferenceBound::$values() {
	$init(Type$UndetVar$InferenceBound);
	return $new($Type$UndetVar$InferenceBoundArray, {
		Type$UndetVar$InferenceBound::LOWER,
		Type$UndetVar$InferenceBound::EQ,
		Type$UndetVar$InferenceBound::UPPER
	});
}

$Type$UndetVar$InferenceBoundArray* Type$UndetVar$InferenceBound::values() {
	$init(Type$UndetVar$InferenceBound);
	return $cast($Type$UndetVar$InferenceBoundArray, Type$UndetVar$InferenceBound::$VALUES->clone());
}

Type$UndetVar$InferenceBound* Type$UndetVar$InferenceBound::valueOf($String* name) {
	$init(Type$UndetVar$InferenceBound);
	return $cast(Type$UndetVar$InferenceBound, $Enum::valueOf(Type$UndetVar$InferenceBound::class$, name));
}

void Type$UndetVar$InferenceBound::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

bool Type$UndetVar$InferenceBound::lessThan(Type$UndetVar$InferenceBound* that) {
	if (that == this) {
		return false;
	} else {
		$init($Type$5);
		switch ($nc($Type$5::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound)->get((that)->ordinal())) {
		case 1:
			{
				return true;
			}
		case 2:
			{
				return false;
			}
		case 3:
			{
				return (this != Type$UndetVar$InferenceBound::UPPER);
			}
		default:
			{
				$Assert::error("Cannot get here!"_s);
				return false;
			}
		}
	}
}

void clinit$Type$UndetVar$InferenceBound($Class* class$) {
	$assignStatic(Type$UndetVar$InferenceBound::LOWER, $new($Type$UndetVar$InferenceBound$1, "LOWER"_s, 0));
	$assignStatic(Type$UndetVar$InferenceBound::EQ, $new($Type$UndetVar$InferenceBound$2, "EQ"_s, 1));
	$assignStatic(Type$UndetVar$InferenceBound::UPPER, $new($Type$UndetVar$InferenceBound$3, "UPPER"_s, 2));
	$assignStatic(Type$UndetVar$InferenceBound::$VALUES, Type$UndetVar$InferenceBound::$values());
}

Type$UndetVar$InferenceBound::Type$UndetVar$InferenceBound() {
}

$Class* Type$UndetVar$InferenceBound::load$($String* name, bool initialize) {
	$loadClass(Type$UndetVar$InferenceBound, name, initialize, &_Type$UndetVar$InferenceBound_ClassInfo_, clinit$Type$UndetVar$InferenceBound, allocate$Type$UndetVar$InferenceBound);
	return class$;
}

$Class* Type$UndetVar$InferenceBound::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com