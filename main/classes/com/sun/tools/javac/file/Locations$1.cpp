#include <com/sun/tools/javac/file/Locations$1.h>

#include <com/sun/tools/javac/file/Locations.h>
#include <com/sun/tools/javac/main/Option.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef DJAVA_ENDORSED_DIRS
#undef DJAVA_EXT_DIRS
#undef XBOOTCLASSPATH

using $OptionArray = $Array<::com::sun::tools::javac::main::Option>;
using $Locations = ::com::sun::tools::javac::file::Locations;
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
				namespace file {

$FieldInfo _Locations$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$main$Option", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Locations$1, $SwitchMap$com$sun$tools$javac$main$Option)},
	{}
};

$EnclosingMethodInfo _Locations$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.file.Locations",
	nullptr,
	nullptr
};

$InnerClassInfo _Locations$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.Locations$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Locations$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.file.Locations$1",
	"java.lang.Object",
	nullptr,
	_Locations$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Locations$1_EnclosingMethodInfo_,
	_Locations$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.Locations"
};

$Object* allocate$Locations$1($Class* clazz) {
	return $of($alloc(Locations$1));
}

$ints* Locations$1::$SwitchMap$com$sun$tools$javac$main$Option = nullptr;

void clinit$Locations$1($Class* class$) {
	$assignStatic(Locations$1::$SwitchMap$com$sun$tools$javac$main$Option, $new($ints, $($Option::values())->length));
	{
		try {
			$nc(Locations$1::$SwitchMap$com$sun$tools$javac$main$Option)->set($Option::XBOOTCLASSPATH->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Locations$1::$SwitchMap$com$sun$tools$javac$main$Option)->set($Option::DJAVA_ENDORSED_DIRS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Locations$1::$SwitchMap$com$sun$tools$javac$main$Option)->set($Option::DJAVA_EXT_DIRS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Locations$1::Locations$1() {
}

$Class* Locations$1::load$($String* name, bool initialize) {
	$loadClass(Locations$1, name, initialize, &_Locations$1_ClassInfo_, clinit$Locations$1, allocate$Locations$1);
	return class$;
}

$Class* Locations$1::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com