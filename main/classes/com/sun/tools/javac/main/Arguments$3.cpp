#include <com/sun/tools/javac/main/Arguments$3.h>

#include <com/sun/tools/javac/main/Arguments$ErrorMode.h>
#include <com/sun/tools/javac/main/Arguments.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ILLEGAL_ARGUMENT
#undef ILLEGAL_STATE
#undef LOG

using $Arguments$ErrorModeArray = $Array<::com::sun::tools::javac::main::Arguments$ErrorMode>;
using $Arguments = ::com::sun::tools::javac::main::Arguments;
using $Arguments$ErrorMode = ::com::sun::tools::javac::main::Arguments$ErrorMode;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$FieldInfo _Arguments$3_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$main$Arguments$ErrorMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Arguments$3, $SwitchMap$com$sun$tools$javac$main$Arguments$ErrorMode)},
	{}
};

$EnclosingMethodInfo _Arguments$3_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Arguments",
	nullptr,
	nullptr
};

$InnerClassInfo _Arguments$3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Arguments$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Arguments$3_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.main.Arguments$3",
	"java.lang.Object",
	nullptr,
	_Arguments$3_FieldInfo_,
	nullptr,
	nullptr,
	&_Arguments$3_EnclosingMethodInfo_,
	_Arguments$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Arguments"
};

$Object* allocate$Arguments$3($Class* clazz) {
	return $of($alloc(Arguments$3));
}

$ints* Arguments$3::$SwitchMap$com$sun$tools$javac$main$Arguments$ErrorMode = nullptr;

void clinit$Arguments$3($Class* class$) {
	$assignStatic(Arguments$3::$SwitchMap$com$sun$tools$javac$main$Arguments$ErrorMode, $new($ints, $($Arguments$ErrorMode::values())->length));
	{
		try {
			$nc(Arguments$3::$SwitchMap$com$sun$tools$javac$main$Arguments$ErrorMode)->set($Arguments$ErrorMode::ILLEGAL_ARGUMENT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Arguments$3::$SwitchMap$com$sun$tools$javac$main$Arguments$ErrorMode)->set($Arguments$ErrorMode::ILLEGAL_STATE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Arguments$3::$SwitchMap$com$sun$tools$javac$main$Arguments$ErrorMode)->set($Arguments$ErrorMode::LOG->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Arguments$3::Arguments$3() {
}

$Class* Arguments$3::load$($String* name, bool initialize) {
	$loadClass(Arguments$3, name, initialize, &_Arguments$3_ClassInfo_, clinit$Arguments$3, allocate$Arguments$3);
	return class$;
}

$Class* Arguments$3::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com