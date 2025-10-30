#include <com/sun/tools/javac/code/TypeAnnotationPosition$1.h>

#include <com/sun/tools/javac/code/TargetType.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef CAST
#undef CLASS_EXTENDS
#undef CLASS_TYPE_PARAMETER
#undef CLASS_TYPE_PARAMETER_BOUND
#undef CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT
#undef CONSTRUCTOR_REFERENCE
#undef CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT
#undef EXCEPTION_PARAMETER
#undef FIELD
#undef INSTANCEOF
#undef LOCAL_VARIABLE
#undef METHOD_FORMAL_PARAMETER
#undef METHOD_INVOCATION_TYPE_ARGUMENT
#undef METHOD_RECEIVER
#undef METHOD_REFERENCE
#undef METHOD_REFERENCE_TYPE_ARGUMENT
#undef METHOD_RETURN
#undef METHOD_TYPE_PARAMETER
#undef METHOD_TYPE_PARAMETER_BOUND
#undef NEW
#undef RESOURCE_VARIABLE
#undef THROWS
#undef UNKNOWN

using $TargetTypeArray = $Array<::com::sun::tools::javac::code::TargetType>;
using $TargetType = ::com::sun::tools::javac::code::TargetType;
using $TypeAnnotationPosition = ::com::sun::tools::javac::code::TypeAnnotationPosition;
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

$FieldInfo _TypeAnnotationPosition$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$code$TargetType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeAnnotationPosition$1, $SwitchMap$com$sun$tools$javac$code$TargetType)},
	{}
};

$EnclosingMethodInfo _TypeAnnotationPosition$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.TypeAnnotationPosition",
	nullptr,
	nullptr
};

$InnerClassInfo _TypeAnnotationPosition$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.TypeAnnotationPosition$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _TypeAnnotationPosition$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.code.TypeAnnotationPosition$1",
	"java.lang.Object",
	nullptr,
	_TypeAnnotationPosition$1_FieldInfo_,
	nullptr,
	nullptr,
	&_TypeAnnotationPosition$1_EnclosingMethodInfo_,
	_TypeAnnotationPosition$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.TypeAnnotationPosition"
};

$Object* allocate$TypeAnnotationPosition$1($Class* clazz) {
	return $of($alloc(TypeAnnotationPosition$1));
}

$ints* TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType = nullptr;

void clinit$TypeAnnotationPosition$1($Class* class$) {
	$assignStatic(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType, $new($ints, $($TargetType::values())->length));
	{
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::INSTANCEOF->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::NEW->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::CONSTRUCTOR_REFERENCE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::METHOD_REFERENCE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::LOCAL_VARIABLE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::RESOURCE_VARIABLE->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::METHOD_RECEIVER->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::CLASS_TYPE_PARAMETER->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::METHOD_TYPE_PARAMETER->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::CLASS_TYPE_PARAMETER_BOUND->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::METHOD_TYPE_PARAMETER_BOUND->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::CLASS_EXTENDS->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::THROWS->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::EXCEPTION_PARAMETER->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::METHOD_FORMAL_PARAMETER->ordinal(), 15);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::CAST->ordinal(), 16);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT->ordinal(), 17);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::METHOD_INVOCATION_TYPE_ARGUMENT->ordinal(), 18);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT->ordinal(), 19);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::METHOD_REFERENCE_TYPE_ARGUMENT->ordinal(), 20);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::METHOD_RETURN->ordinal(), 21);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::FIELD->ordinal(), 22);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::UNKNOWN->ordinal(), 23);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TypeAnnotationPosition$1::TypeAnnotationPosition$1() {
}

$Class* TypeAnnotationPosition$1::load$($String* name, bool initialize) {
	$loadClass(TypeAnnotationPosition$1, name, initialize, &_TypeAnnotationPosition$1_ClassInfo_, clinit$TypeAnnotationPosition$1, allocate$TypeAnnotationPosition$1);
	return class$;
}

$Class* TypeAnnotationPosition$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com