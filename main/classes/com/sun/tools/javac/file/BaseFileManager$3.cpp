#include <com/sun/tools/javac/file/BaseFileManager$3.h>

#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/main/Option.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ENCODING
#undef MULTIRELEASE

using $OptionArray = $Array<::com::sun::tools::javac::main::Option>;
using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
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

$FieldInfo _BaseFileManager$3_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$main$Option", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BaseFileManager$3, $SwitchMap$com$sun$tools$javac$main$Option)},
	{}
};

$EnclosingMethodInfo _BaseFileManager$3_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.file.BaseFileManager",
	nullptr,
	nullptr
};

$InnerClassInfo _BaseFileManager$3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.BaseFileManager$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _BaseFileManager$3_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.file.BaseFileManager$3",
	"java.lang.Object",
	nullptr,
	_BaseFileManager$3_FieldInfo_,
	nullptr,
	nullptr,
	&_BaseFileManager$3_EnclosingMethodInfo_,
	_BaseFileManager$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.BaseFileManager"
};

$Object* allocate$BaseFileManager$3($Class* clazz) {
	return $of($alloc(BaseFileManager$3));
}

$ints* BaseFileManager$3::$SwitchMap$com$sun$tools$javac$main$Option = nullptr;

void clinit$BaseFileManager$3($Class* class$) {
	$assignStatic(BaseFileManager$3::$SwitchMap$com$sun$tools$javac$main$Option, $new($ints, $($Option::values())->length));
	{
		try {
			$nc(BaseFileManager$3::$SwitchMap$com$sun$tools$javac$main$Option)->set($Option::ENCODING->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(BaseFileManager$3::$SwitchMap$com$sun$tools$javac$main$Option)->set($Option::MULTIRELEASE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

BaseFileManager$3::BaseFileManager$3() {
}

$Class* BaseFileManager$3::load$($String* name, bool initialize) {
	$loadClass(BaseFileManager$3, name, initialize, &_BaseFileManager$3_ClassInfo_, clinit$BaseFileManager$3, allocate$BaseFileManager$3);
	return class$;
}

$Class* BaseFileManager$3::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com