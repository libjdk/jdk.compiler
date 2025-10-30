#include <com/sun/tools/javac/util/Bits$1.h>

#include <com/sun/tools/javac/util/Bits$BitsState.h>
#include <com/sun/tools/javac/util/Bits.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef NORMAL
#undef UNKNOWN

using $Bits$BitsStateArray = $Array<::com::sun::tools::javac::util::Bits$BitsState>;
using $Bits = ::com::sun::tools::javac::util::Bits;
using $Bits$BitsState = ::com::sun::tools::javac::util::Bits$BitsState;
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
				namespace util {

$FieldInfo _Bits$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$util$Bits$BitsState", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Bits$1, $SwitchMap$com$sun$tools$javac$util$Bits$BitsState)},
	{}
};

$EnclosingMethodInfo _Bits$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.util.Bits",
	nullptr,
	nullptr
};

$InnerClassInfo _Bits$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Bits$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Bits$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.util.Bits$1",
	"java.lang.Object",
	nullptr,
	_Bits$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Bits$1_EnclosingMethodInfo_,
	_Bits$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Bits"
};

$Object* allocate$Bits$1($Class* clazz) {
	return $of($alloc(Bits$1));
}

$ints* Bits$1::$SwitchMap$com$sun$tools$javac$util$Bits$BitsState = nullptr;

void clinit$Bits$1($Class* class$) {
	$assignStatic(Bits$1::$SwitchMap$com$sun$tools$javac$util$Bits$BitsState, $new($ints, $($Bits$BitsState::values())->length));
	{
		try {
			$nc(Bits$1::$SwitchMap$com$sun$tools$javac$util$Bits$BitsState)->set($Bits$BitsState::UNKNOWN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Bits$1::$SwitchMap$com$sun$tools$javac$util$Bits$BitsState)->set($Bits$BitsState::NORMAL->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Bits$1::Bits$1() {
}

$Class* Bits$1::load$($String* name, bool initialize) {
	$loadClass(Bits$1, name, initialize, &_Bits$1_ClassInfo_, clinit$Bits$1, allocate$Bits$1);
	return class$;
}

$Class* Bits$1::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com