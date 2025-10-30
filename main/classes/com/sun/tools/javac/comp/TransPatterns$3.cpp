#include <com/sun/tools/javac/comp/TransPatterns$3.h>

#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/TransPatterns.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BYTE
#undef CHAR
#undef CLASS
#undef INT
#undef SHORT

using $TypeTagArray = $Array<::com::sun::tools::javac::code::TypeTag>;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $TransPatterns = ::com::sun::tools::javac::comp::TransPatterns;
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

$FieldInfo _TransPatterns$3_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TransPatterns$3, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
	{}
};

$EnclosingMethodInfo _TransPatterns$3_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.TransPatterns",
	nullptr,
	nullptr
};

$InnerClassInfo _TransPatterns$3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TransPatterns$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _TransPatterns$3_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.comp.TransPatterns$3",
	"java.lang.Object",
	nullptr,
	_TransPatterns$3_FieldInfo_,
	nullptr,
	nullptr,
	&_TransPatterns$3_EnclosingMethodInfo_,
	_TransPatterns$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TransPatterns"
};

$Object* allocate$TransPatterns$3($Class* clazz) {
	return $of($alloc(TransPatterns$3));
}

$ints* TransPatterns$3::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;

void clinit$TransPatterns$3($Class* class$) {
	$assignStatic(TransPatterns$3::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			$nc(TransPatterns$3::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BYTE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TransPatterns$3::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::CHAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TransPatterns$3::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::SHORT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TransPatterns$3::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::INT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TransPatterns$3::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::CLASS->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TransPatterns$3::TransPatterns$3() {
}

$Class* TransPatterns$3::load$($String* name, bool initialize) {
	$loadClass(TransPatterns$3, name, initialize, &_TransPatterns$3_ClassInfo_, clinit$TransPatterns$3, allocate$TransPatterns$3);
	return class$;
}

$Class* TransPatterns$3::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com