#include <com/sun/tools/javac/code/Type$5.h>

#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef DOUBLE
#undef EQ
#undef FLOAT
#undef INT
#undef LONG
#undef LOWER
#undef SHORT
#undef UPPER

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $TypeTagArray = $Array<::com::sun::tools::javac::code::TypeTag>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
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

$FieldInfo _Type$5_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Type$5, $SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound)},
	{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Type$5, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
	{}
};

$EnclosingMethodInfo _Type$5_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Type",
	nullptr,
	nullptr
};

$InnerClassInfo _Type$5_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$5", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Type$5_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.code.Type$5",
	"java.lang.Object",
	nullptr,
	_Type$5_FieldInfo_,
	nullptr,
	nullptr,
	&_Type$5_EnclosingMethodInfo_,
	_Type$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$5($Class* clazz) {
	return $of($alloc(Type$5));
}

$ints* Type$5::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound = nullptr;
$ints* Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;

void clinit$Type$5($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Type$5::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound, $new($ints, $($Type$UndetVar$InferenceBound::values())->length));
	{
		try {
			$nc(Type$5::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound)->set($Type$UndetVar$InferenceBound::UPPER->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Type$5::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound)->set($Type$UndetVar$InferenceBound::LOWER->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Type$5::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound)->set($Type$UndetVar$InferenceBound::EQ->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			$nc(Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::CHAR->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BYTE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::SHORT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::INT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::LONG->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::FLOAT->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::DOUBLE->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BOOLEAN->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Type$5::Type$5() {
}

$Class* Type$5::load$($String* name, bool initialize) {
	$loadClass(Type$5, name, initialize, &_Type$5_ClassInfo_, clinit$Type$5, allocate$Type$5);
	return class$;
}

$Class* Type$5::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com