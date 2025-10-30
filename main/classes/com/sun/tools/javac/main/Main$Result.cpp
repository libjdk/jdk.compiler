#include <com/sun/tools/javac/main/Main$Result.h>

#include <com/sun/tools/javac/main/Main.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ABNORMAL
#undef CMDERR
#undef ERROR
#undef OK
#undef SYSERR

using $Main$ResultArray = $Array<::com::sun::tools::javac::main::Main$Result>;
using $Main = ::com::sun::tools::javac::main::Main;
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

$FieldInfo _Main$Result_FieldInfo_[] = {
	{"OK", "Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Result, OK)},
	{"ERROR", "Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Result, ERROR)},
	{"CMDERR", "Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Result, CMDERR)},
	{"SYSERR", "Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Result, SYSERR)},
	{"ABNORMAL", "Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Result, ABNORMAL)},
	{"$VALUES", "[Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Main$Result, $VALUES)},
	{"exitCode", "I", nullptr, $PUBLIC | $FINAL, $field(Main$Result, exitCode)},
	{}
};

$MethodInfo _Main$Result_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Main$ResultArray*(*)()>(&Main$Result::$values))},
	{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(static_cast<void(Main$Result::*)($String*,int32_t,int32_t)>(&Main$Result::init$))},
	{"isOK", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Main$Result::*)()>(&Main$Result::isOK))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Main$Result*(*)($String*)>(&Main$Result::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Main$ResultArray*(*)()>(&Main$Result::values))},
	{}
};

$InnerClassInfo _Main$Result_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Main$Result", "com.sun.tools.javac.main.Main", "Result", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Main$Result_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Main$Result",
	"java.lang.Enum",
	nullptr,
	_Main$Result_FieldInfo_,
	_Main$Result_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/main/Main$Result;>;",
	nullptr,
	_Main$Result_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Main"
};

$Object* allocate$Main$Result($Class* clazz) {
	return $of($alloc(Main$Result));
}

Main$Result* Main$Result::OK = nullptr;
Main$Result* Main$Result::ERROR = nullptr;
Main$Result* Main$Result::CMDERR = nullptr;
Main$Result* Main$Result::SYSERR = nullptr;
Main$Result* Main$Result::ABNORMAL = nullptr;
$Main$ResultArray* Main$Result::$VALUES = nullptr;

$Main$ResultArray* Main$Result::$values() {
	$init(Main$Result);
	return $new($Main$ResultArray, {
		Main$Result::OK,
		Main$Result::ERROR,
		Main$Result::CMDERR,
		Main$Result::SYSERR,
		Main$Result::ABNORMAL
	});
}

$Main$ResultArray* Main$Result::values() {
	$init(Main$Result);
	return $cast($Main$ResultArray, Main$Result::$VALUES->clone());
}

Main$Result* Main$Result::valueOf($String* name) {
	$init(Main$Result);
	return $cast(Main$Result, $Enum::valueOf(Main$Result::class$, name));
}

void Main$Result::init$($String* $enum$name, int32_t $enum$ordinal, int32_t exitCode) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->exitCode = exitCode;
}

bool Main$Result::isOK() {
	return (this->exitCode == 0);
}

void clinit$Main$Result($Class* class$) {
	$assignStatic(Main$Result::OK, $new(Main$Result, "OK"_s, 0, 0));
	$assignStatic(Main$Result::ERROR, $new(Main$Result, "ERROR"_s, 1, 1));
	$assignStatic(Main$Result::CMDERR, $new(Main$Result, "CMDERR"_s, 2, 2));
	$assignStatic(Main$Result::SYSERR, $new(Main$Result, "SYSERR"_s, 3, 3));
	$assignStatic(Main$Result::ABNORMAL, $new(Main$Result, "ABNORMAL"_s, 4, 4));
	$assignStatic(Main$Result::$VALUES, Main$Result::$values());
}

Main$Result::Main$Result() {
}

$Class* Main$Result::load$($String* name, bool initialize) {
	$loadClass(Main$Result, name, initialize, &_Main$Result_ClassInfo_, clinit$Main$Result, allocate$Main$Result);
	return class$;
}

$Class* Main$Result::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com