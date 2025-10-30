#include <com/sun/tools/javac/code/TypeTag$1.h>

#include <com/sun/tools/javac/code/TypeTag.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BOT
#undef BYTE
#undef CHAR
#undef CLASS
#undef DOUBLE
#undef FLOAT
#undef INT
#undef LONG
#undef SHORT
#undef VOID

using $TypeTagArray = $Array<::com::sun::tools::javac::code::TypeTag>;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
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
				namespace code {

$FieldInfo _TypeTag$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeTag$1, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
	{}
};

$EnclosingMethodInfo _TypeTag$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.TypeTag",
	nullptr,
	nullptr
};

$InnerClassInfo _TypeTag$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.TypeTag$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _TypeTag$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.code.TypeTag$1",
	"java.lang.Object",
	nullptr,
	_TypeTag$1_FieldInfo_,
	nullptr,
	nullptr,
	&_TypeTag$1_EnclosingMethodInfo_,
	_TypeTag$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.TypeTag"
};

$Object* allocate$TypeTag$1($Class* clazz) {
	return $of($alloc(TypeTag$1));
}

$ints* TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;

void clinit$TypeTag$1($Class* class$) {
	$assignStatic(TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			$nc(TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::INT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::LONG->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::FLOAT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::DOUBLE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BOOLEAN->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::CHAR->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::CLASS->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BOT->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BYTE->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::SHORT->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::VOID->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TypeTag$1::TypeTag$1() {
}

$Class* TypeTag$1::load$($String* name, bool initialize) {
	$loadClass(TypeTag$1, name, initialize, &_TypeTag$1_ClassInfo_, clinit$TypeTag$1, allocate$TypeTag$1);
	return class$;
}

$Class* TypeTag$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com