#include <com/sun/tools/javac/code/Attribute$1.h>

#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef DOUBLE
#undef FLOAT
#undef INT
#undef LONG
#undef SHORT

using $TypeTagArray = $Array<::com::sun::tools::javac::code::TypeTag>;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
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

$FieldInfo _Attribute$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Attribute$1, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
	{}
};

$EnclosingMethodInfo _Attribute$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Attribute",
	nullptr,
	nullptr
};

$InnerClassInfo _Attribute$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Attribute$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Attribute$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.code.Attribute$1",
	"java.lang.Object",
	nullptr,
	_Attribute$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Attribute$1_EnclosingMethodInfo_,
	_Attribute$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Attribute"
};

$Object* allocate$Attribute$1($Class* clazz) {
	return $of($alloc(Attribute$1));
}

$ints* Attribute$1::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;

void clinit$Attribute$1($Class* class$) {
	$assignStatic(Attribute$1::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			$nc(Attribute$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BOOLEAN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attribute$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::CHAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attribute$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BYTE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attribute$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::SHORT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attribute$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::INT->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attribute$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::LONG->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attribute$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::FLOAT->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attribute$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::DOUBLE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Attribute$1::Attribute$1() {
}

$Class* Attribute$1::load$($String* name, bool initialize) {
	$loadClass(Attribute$1, name, initialize, &_Attribute$1_ClassInfo_, clinit$Attribute$1, allocate$Attribute$1);
	return class$;
}

$Class* Attribute$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com