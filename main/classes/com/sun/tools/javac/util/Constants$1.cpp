#include <com/sun/tools/javac/util/Constants$1.h>

#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/util/Constants.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef DOUBLE
#undef FLOAT
#undef LONG
#undef SHORT

using $TypeTagArray = $Array<::com::sun::tools::javac::code::TypeTag>;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Constants = ::com::sun::tools::javac::util::Constants;
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

$FieldInfo _Constants$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Constants$1, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
	{}
};

$EnclosingMethodInfo _Constants$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.util.Constants",
	nullptr,
	nullptr
};

$InnerClassInfo _Constants$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Constants$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Constants$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.util.Constants$1",
	"java.lang.Object",
	nullptr,
	_Constants$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Constants$1_EnclosingMethodInfo_,
	_Constants$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Constants"
};

$Object* allocate$Constants$1($Class* clazz) {
	return $of($alloc(Constants$1));
}

$ints* Constants$1::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;

void clinit$Constants$1($Class* class$) {
	$assignStatic(Constants$1::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			$nc(Constants$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BOOLEAN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Constants$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::CHAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Constants$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BYTE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Constants$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::SHORT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Constants$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::LONG->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Constants$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::FLOAT->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Constants$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::DOUBLE->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Constants$1::Constants$1() {
}

$Class* Constants$1::load$($String* name, bool initialize) {
	$loadClass(Constants$1, name, initialize, &_Constants$1_ClassInfo_, clinit$Constants$1, allocate$Constants$1);
	return class$;
}

$Class* Constants$1::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com