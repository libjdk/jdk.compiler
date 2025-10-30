#include <com/sun/tools/javac/code/Types$MostSpecificReturnCheck.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$MostSpecificReturnCheck$1.h>
#include <com/sun/tools/javac/code/Types$MostSpecificReturnCheck$2.h>
#include <com/sun/tools/javac/code/Types.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BASIC
#undef RTS

using $Types$MostSpecificReturnCheckArray = $Array<::com::sun::tools::javac::code::Types$MostSpecificReturnCheck>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$MostSpecificReturnCheck$1 = ::com::sun::tools::javac::code::Types$MostSpecificReturnCheck$1;
using $Types$MostSpecificReturnCheck$2 = ::com::sun::tools::javac::code::Types$MostSpecificReturnCheck$2;
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

$FieldInfo _Types$MostSpecificReturnCheck_FieldInfo_[] = {
	{"BASIC", "Lcom/sun/tools/javac/code/Types$MostSpecificReturnCheck;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Types$MostSpecificReturnCheck, BASIC)},
	{"RTS", "Lcom/sun/tools/javac/code/Types$MostSpecificReturnCheck;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Types$MostSpecificReturnCheck, RTS)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/Types$MostSpecificReturnCheck;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Types$MostSpecificReturnCheck, $VALUES)},
	{}
};

$MethodInfo _Types$MostSpecificReturnCheck_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/Types$MostSpecificReturnCheck;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Types$MostSpecificReturnCheckArray*(*)()>(&Types$MostSpecificReturnCheck::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Types$MostSpecificReturnCheck::*)($String*,int32_t)>(&Types$MostSpecificReturnCheck::init$))},
	{"test", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Types$MostSpecificReturnCheck;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Types$MostSpecificReturnCheck*(*)($String*)>(&Types$MostSpecificReturnCheck::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/Types$MostSpecificReturnCheck;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Types$MostSpecificReturnCheckArray*(*)()>(&Types$MostSpecificReturnCheck::values))},
	{}
};

$InnerClassInfo _Types$MostSpecificReturnCheck_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$MostSpecificReturnCheck", "com.sun.tools.javac.code.Types", "MostSpecificReturnCheck", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.code.Types$MostSpecificReturnCheck$2", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.code.Types$MostSpecificReturnCheck$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Types$MostSpecificReturnCheck_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT | $ENUM,
	"com.sun.tools.javac.code.Types$MostSpecificReturnCheck",
	"java.lang.Enum",
	nullptr,
	_Types$MostSpecificReturnCheck_FieldInfo_,
	_Types$MostSpecificReturnCheck_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Types$MostSpecificReturnCheck;>;",
	nullptr,
	_Types$MostSpecificReturnCheck_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$MostSpecificReturnCheck($Class* clazz) {
	return $of($alloc(Types$MostSpecificReturnCheck));
}

Types$MostSpecificReturnCheck* Types$MostSpecificReturnCheck::BASIC = nullptr;
Types$MostSpecificReturnCheck* Types$MostSpecificReturnCheck::RTS = nullptr;
$Types$MostSpecificReturnCheckArray* Types$MostSpecificReturnCheck::$VALUES = nullptr;

$Types$MostSpecificReturnCheckArray* Types$MostSpecificReturnCheck::$values() {
	$init(Types$MostSpecificReturnCheck);
	return $new($Types$MostSpecificReturnCheckArray, {
		Types$MostSpecificReturnCheck::BASIC,
		Types$MostSpecificReturnCheck::RTS
	});
}

$Types$MostSpecificReturnCheckArray* Types$MostSpecificReturnCheck::values() {
	$init(Types$MostSpecificReturnCheck);
	return $cast($Types$MostSpecificReturnCheckArray, Types$MostSpecificReturnCheck::$VALUES->clone());
}

Types$MostSpecificReturnCheck* Types$MostSpecificReturnCheck::valueOf($String* name) {
	$init(Types$MostSpecificReturnCheck);
	return $cast(Types$MostSpecificReturnCheck, $Enum::valueOf(Types$MostSpecificReturnCheck::class$, name));
}

void Types$MostSpecificReturnCheck::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Types$MostSpecificReturnCheck($Class* class$) {
	$assignStatic(Types$MostSpecificReturnCheck::BASIC, $new($Types$MostSpecificReturnCheck$1, "BASIC"_s, 0));
	$assignStatic(Types$MostSpecificReturnCheck::RTS, $new($Types$MostSpecificReturnCheck$2, "RTS"_s, 1));
	$assignStatic(Types$MostSpecificReturnCheck::$VALUES, Types$MostSpecificReturnCheck::$values());
}

Types$MostSpecificReturnCheck::Types$MostSpecificReturnCheck() {
}

$Class* Types$MostSpecificReturnCheck::load$($String* name, bool initialize) {
	$loadClass(Types$MostSpecificReturnCheck, name, initialize, &_Types$MostSpecificReturnCheck_ClassInfo_, clinit$Types$MostSpecificReturnCheck, allocate$Types$MostSpecificReturnCheck);
	return class$;
}

$Class* Types$MostSpecificReturnCheck::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com