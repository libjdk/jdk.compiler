#include <com/sun/tools/javac/jvm/PoolWriter$1.h>

#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/jvm/PoolWriter.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef UNINITIALIZED_OBJECT
#undef UNINITIALIZED_THIS

using $TypeTagArray = $Array<::com::sun::tools::javac::code::TypeTag>;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $PoolWriter = ::com::sun::tools::javac::jvm::PoolWriter;
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
				namespace jvm {

$FieldInfo _PoolWriter$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PoolWriter$1, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
	{}
};

$EnclosingMethodInfo _PoolWriter$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.jvm.PoolWriter",
	nullptr,
	nullptr
};

$InnerClassInfo _PoolWriter$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.PoolWriter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _PoolWriter$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.jvm.PoolWriter$1",
	"java.lang.Object",
	nullptr,
	_PoolWriter$1_FieldInfo_,
	nullptr,
	nullptr,
	&_PoolWriter$1_EnclosingMethodInfo_,
	_PoolWriter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.PoolWriter"
};

$Object* allocate$PoolWriter$1($Class* clazz) {
	return $of($alloc(PoolWriter$1));
}

$ints* PoolWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;

void clinit$PoolWriter$1($Class* class$) {
	$assignStatic(PoolWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			$nc(PoolWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::UNINITIALIZED_THIS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(PoolWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::UNINITIALIZED_OBJECT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

PoolWriter$1::PoolWriter$1() {
}

$Class* PoolWriter$1::load$($String* name, bool initialize) {
	$loadClass(PoolWriter$1, name, initialize, &_PoolWriter$1_ClassInfo_, clinit$PoolWriter$1, allocate$PoolWriter$1);
	return class$;
}

$Class* PoolWriter$1::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com