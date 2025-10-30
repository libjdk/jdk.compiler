#include <com/sun/tools/javac/code/ModuleFinder$2.h>

#include <com/sun/tools/javac/code/ModuleFinder.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef CLASS
#undef MODULE_PATH
#undef MODULE_SOURCE_PATH
#undef SOURCE
#undef SYSTEM_MODULES
#undef UPGRADE_MODULE_PATH

using $JavaFileObject$KindArray = $Array<::javax::tools::JavaFileObject$Kind>;
using $StandardLocationArray = $Array<::javax::tools::StandardLocation>;
using $ModuleFinder = ::com::sun::tools::javac::code::ModuleFinder;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _ModuleFinder$2_FieldInfo_[] = {
	{"$SwitchMap$javax$tools$StandardLocation", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ModuleFinder$2, $SwitchMap$javax$tools$StandardLocation)},
	{"$SwitchMap$javax$tools$JavaFileObject$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ModuleFinder$2, $SwitchMap$javax$tools$JavaFileObject$Kind)},
	{}
};

$EnclosingMethodInfo _ModuleFinder$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.ModuleFinder",
	nullptr,
	nullptr
};

$InnerClassInfo _ModuleFinder$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.ModuleFinder$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ModuleFinder$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.code.ModuleFinder$2",
	"java.lang.Object",
	nullptr,
	_ModuleFinder$2_FieldInfo_,
	nullptr,
	nullptr,
	&_ModuleFinder$2_EnclosingMethodInfo_,
	_ModuleFinder$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.ModuleFinder"
};

$Object* allocate$ModuleFinder$2($Class* clazz) {
	return $of($alloc(ModuleFinder$2));
}

$ints* ModuleFinder$2::$SwitchMap$javax$tools$StandardLocation = nullptr;
$ints* ModuleFinder$2::$SwitchMap$javax$tools$JavaFileObject$Kind = nullptr;

void clinit$ModuleFinder$2($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ModuleFinder$2::$SwitchMap$javax$tools$StandardLocation, $new($ints, $($StandardLocation::values())->length));
	{
		try {
			$nc(ModuleFinder$2::$SwitchMap$javax$tools$StandardLocation)->set($StandardLocation::MODULE_PATH->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ModuleFinder$2::$SwitchMap$javax$tools$StandardLocation)->set($StandardLocation::MODULE_SOURCE_PATH->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ModuleFinder$2::$SwitchMap$javax$tools$StandardLocation)->set($StandardLocation::SYSTEM_MODULES->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ModuleFinder$2::$SwitchMap$javax$tools$StandardLocation)->set($StandardLocation::UPGRADE_MODULE_PATH->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(ModuleFinder$2::$SwitchMap$javax$tools$JavaFileObject$Kind, $new($ints, $($JavaFileObject$Kind::values())->length));
	{
		try {
			$nc(ModuleFinder$2::$SwitchMap$javax$tools$JavaFileObject$Kind)->set($JavaFileObject$Kind::SOURCE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ModuleFinder$2::$SwitchMap$javax$tools$JavaFileObject$Kind)->set($JavaFileObject$Kind::CLASS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ModuleFinder$2::ModuleFinder$2() {
}

$Class* ModuleFinder$2::load$($String* name, bool initialize) {
	$loadClass(ModuleFinder$2, name, initialize, &_ModuleFinder$2_ClassInfo_, clinit$ModuleFinder$2, allocate$ModuleFinder$2);
	return class$;
}

$Class* ModuleFinder$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com