#include <com/sun/tools/javac/main/Arguments$ErrorMode.h>

#include <com/sun/tools/javac/main/Arguments.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ILLEGAL_ARGUMENT
#undef ILLEGAL_STATE
#undef LOG

using $Arguments$ErrorModeArray = $Array<::com::sun::tools::javac::main::Arguments$ErrorMode>;
using $Arguments = ::com::sun::tools::javac::main::Arguments;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$FieldInfo _Arguments$ErrorMode_FieldInfo_[] = {
	{"ILLEGAL_ARGUMENT", "Lcom/sun/tools/javac/main/Arguments$ErrorMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Arguments$ErrorMode, ILLEGAL_ARGUMENT)},
	{"ILLEGAL_STATE", "Lcom/sun/tools/javac/main/Arguments$ErrorMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Arguments$ErrorMode, ILLEGAL_STATE)},
	{"LOG", "Lcom/sun/tools/javac/main/Arguments$ErrorMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Arguments$ErrorMode, LOG)},
	{"$VALUES", "[Lcom/sun/tools/javac/main/Arguments$ErrorMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Arguments$ErrorMode, $VALUES)},
	{}
};

$MethodInfo _Arguments$ErrorMode_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/main/Arguments$ErrorMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Arguments$ErrorModeArray*(*)()>(&Arguments$ErrorMode::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Arguments$ErrorMode::*)($String*,int32_t)>(&Arguments$ErrorMode::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/main/Arguments$ErrorMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Arguments$ErrorMode*(*)($String*)>(&Arguments$ErrorMode::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/main/Arguments$ErrorMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Arguments$ErrorModeArray*(*)()>(&Arguments$ErrorMode::values))},
	{}
};

$InnerClassInfo _Arguments$ErrorMode_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Arguments$ErrorMode", "com.sun.tools.javac.main.Arguments", "ErrorMode", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Arguments$ErrorMode_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Arguments$ErrorMode",
	"java.lang.Enum",
	nullptr,
	_Arguments$ErrorMode_FieldInfo_,
	_Arguments$ErrorMode_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/main/Arguments$ErrorMode;>;",
	nullptr,
	_Arguments$ErrorMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Arguments"
};

$Object* allocate$Arguments$ErrorMode($Class* clazz) {
	return $of($alloc(Arguments$ErrorMode));
}

Arguments$ErrorMode* Arguments$ErrorMode::ILLEGAL_ARGUMENT = nullptr;
Arguments$ErrorMode* Arguments$ErrorMode::ILLEGAL_STATE = nullptr;
Arguments$ErrorMode* Arguments$ErrorMode::LOG = nullptr;
$Arguments$ErrorModeArray* Arguments$ErrorMode::$VALUES = nullptr;

$Arguments$ErrorModeArray* Arguments$ErrorMode::$values() {
	$init(Arguments$ErrorMode);
	return $new($Arguments$ErrorModeArray, {
		Arguments$ErrorMode::ILLEGAL_ARGUMENT,
		Arguments$ErrorMode::ILLEGAL_STATE,
		Arguments$ErrorMode::LOG
	});
}

$Arguments$ErrorModeArray* Arguments$ErrorMode::values() {
	$init(Arguments$ErrorMode);
	return $cast($Arguments$ErrorModeArray, Arguments$ErrorMode::$VALUES->clone());
}

Arguments$ErrorMode* Arguments$ErrorMode::valueOf($String* name) {
	$init(Arguments$ErrorMode);
	return $cast(Arguments$ErrorMode, $Enum::valueOf(Arguments$ErrorMode::class$, name));
}

void Arguments$ErrorMode::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Arguments$ErrorMode($Class* class$) {
	$assignStatic(Arguments$ErrorMode::ILLEGAL_ARGUMENT, $new(Arguments$ErrorMode, "ILLEGAL_ARGUMENT"_s, 0));
	$assignStatic(Arguments$ErrorMode::ILLEGAL_STATE, $new(Arguments$ErrorMode, "ILLEGAL_STATE"_s, 1));
	$assignStatic(Arguments$ErrorMode::LOG, $new(Arguments$ErrorMode, "LOG"_s, 2));
	$assignStatic(Arguments$ErrorMode::$VALUES, Arguments$ErrorMode::$values());
}

Arguments$ErrorMode::Arguments$ErrorMode() {
}

$Class* Arguments$ErrorMode::load$($String* name, bool initialize) {
	$loadClass(Arguments$ErrorMode, name, initialize, &_Arguments$ErrorMode_ClassInfo_, clinit$Arguments$ErrorMode, allocate$Arguments$ErrorMode);
	return class$;
}

$Class* Arguments$ErrorMode::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com