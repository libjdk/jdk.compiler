#include <com/sun/tools/javac/comp/Operators$1.h>

#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BYTE
#undef CHAR
#undef SHORT

using $TypeTagArray = $Array<::com::sun::tools::javac::code::TypeTag>;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Operators = ::com::sun::tools::javac::comp::Operators;
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

$FieldInfo _Operators$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Operators$1, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
	{}
};

$EnclosingMethodInfo _Operators$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Operators",
	nullptr,
	nullptr
};

$InnerClassInfo _Operators$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Operators$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Operators$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.comp.Operators$1",
	"java.lang.Object",
	nullptr,
	_Operators$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Operators$1_EnclosingMethodInfo_,
	_Operators$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Operators"
};

$Object* allocate$Operators$1($Class* clazz) {
	return $of($alloc(Operators$1));
}

$ints* Operators$1::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;

void clinit$Operators$1($Class* class$) {
	$assignStatic(Operators$1::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			$nc(Operators$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BYTE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Operators$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::SHORT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Operators$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::CHAR->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Operators$1::Operators$1() {
}

$Class* Operators$1::load$($String* name, bool initialize) {
	$loadClass(Operators$1, name, initialize, &_Operators$1_ClassInfo_, clinit$Operators$1, allocate$Operators$1);
	return class$;
}

$Class* Operators$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com