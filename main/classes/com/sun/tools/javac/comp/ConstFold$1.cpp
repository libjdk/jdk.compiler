#include <com/sun/tools/javac/comp/ConstFold$1.h>

#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/ConstFold.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BYTE
#undef CHAR
#undef DOUBLE
#undef FLOAT
#undef INT
#undef LONG
#undef SHORT

using $TypeTagArray = $Array<::com::sun::tools::javac::code::TypeTag>;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $ConstFold = ::com::sun::tools::javac::comp::ConstFold;
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
				namespace comp {

$FieldInfo _ConstFold$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ConstFold$1, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
	{}
};

$EnclosingMethodInfo _ConstFold$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.ConstFold",
	nullptr,
	nullptr
};

$InnerClassInfo _ConstFold$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.ConstFold$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ConstFold$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.comp.ConstFold$1",
	"java.lang.Object",
	nullptr,
	_ConstFold$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ConstFold$1_EnclosingMethodInfo_,
	_ConstFold$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.ConstFold"
};

$Object* allocate$ConstFold$1($Class* clazz) {
	return $of($alloc(ConstFold$1));
}

$ints* ConstFold$1::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;

void clinit$ConstFold$1($Class* class$) {
	$assignStatic(ConstFold$1::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			$nc(ConstFold$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BYTE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ConstFold$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::CHAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ConstFold$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::SHORT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ConstFold$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::INT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ConstFold$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::LONG->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ConstFold$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::FLOAT->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ConstFold$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::DOUBLE->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ConstFold$1::ConstFold$1() {
}

$Class* ConstFold$1::load$($String* name, bool initialize) {
	$loadClass(ConstFold$1, name, initialize, &_ConstFold$1_ClassInfo_, clinit$ConstFold$1, allocate$ConstFold$1);
	return class$;
}

$Class* ConstFold$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com