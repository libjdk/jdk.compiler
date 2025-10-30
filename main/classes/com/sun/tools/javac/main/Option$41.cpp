#include <com/sun/tools/javac/main/Option$41.h>

#include <com/sun/tools/javac/main/Option.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ADD_MODULES

using $OptionArray = $Array<::com::sun::tools::javac::main::Option>;
using $Option = ::com::sun::tools::javac::main::Option;
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

$FieldInfo _Option$41_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$main$Option", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Option$41, $SwitchMap$com$sun$tools$javac$main$Option)},
	{}
};

$EnclosingMethodInfo _Option$41_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$41_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$41", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Option$41_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.main.Option$41",
	"java.lang.Object",
	nullptr,
	_Option$41_FieldInfo_,
	nullptr,
	nullptr,
	&_Option$41_EnclosingMethodInfo_,
	_Option$41_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$41($Class* clazz) {
	return $of($alloc(Option$41));
}

$ints* Option$41::$SwitchMap$com$sun$tools$javac$main$Option = nullptr;

void clinit$Option$41($Class* class$) {
	$assignStatic(Option$41::$SwitchMap$com$sun$tools$javac$main$Option, $new($ints, $($Option::values())->length));
	{
		try {
			$nc(Option$41::$SwitchMap$com$sun$tools$javac$main$Option)->set($Option::ADD_MODULES->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Option$41::Option$41() {
}

$Class* Option$41::load$($String* name, bool initialize) {
	$loadClass(Option$41, name, initialize, &_Option$41_ClassInfo_, clinit$Option$41, allocate$Option$41);
	return class$;
}

$Class* Option$41::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com