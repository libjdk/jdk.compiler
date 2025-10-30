#include <com/sun/tools/javac/jvm/ClassWriter$1.h>

#include <com/sun/tools/javac/code/Attribute$RetentionPolicy.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/TargetType.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/jvm/ClassWriter.h>
#include <com/sun/tools/javac/jvm/Code$StackMapFormat.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ARRAY
#undef BOOLEAN
#undef BOT
#undef BYTE
#undef CAST
#undef CHAR
#undef CLASS
#undef CLASS_EXTENDS
#undef CLASS_TYPE_PARAMETER
#undef CLASS_TYPE_PARAMETER_BOUND
#undef CLDC
#undef CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT
#undef CONSTRUCTOR_REFERENCE
#undef CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT
#undef DOUBLE
#undef EXCEPTION_PARAMETER
#undef FIELD
#undef FLOAT
#undef INSTANCEOF
#undef INT
#undef LOCAL_VARIABLE
#undef LONG
#undef METHOD_FORMAL_PARAMETER
#undef METHOD_INVOCATION_TYPE_ARGUMENT
#undef METHOD_RECEIVER
#undef METHOD_REFERENCE
#undef METHOD_REFERENCE_TYPE_ARGUMENT
#undef METHOD_RETURN
#undef METHOD_TYPE_PARAMETER
#undef METHOD_TYPE_PARAMETER_BOUND
#undef MTH
#undef NEW
#undef RESOURCE_VARIABLE
#undef RUNTIME
#undef SHORT
#undef SOURCE
#undef THROWS
#undef TYP
#undef TYPEVAR
#undef UNINITIALIZED_OBJECT
#undef UNINITIALIZED_THIS
#undef UNKNOWN
#undef VAR

using $Attribute$RetentionPolicyArray = $Array<::com::sun::tools::javac::code::Attribute$RetentionPolicy>;
using $Kinds$KindArray = $Array<::com::sun::tools::javac::code::Kinds$Kind>;
using $TargetTypeArray = $Array<::com::sun::tools::javac::code::TargetType>;
using $TypeTagArray = $Array<::com::sun::tools::javac::code::TypeTag>;
using $Code$StackMapFormatArray = $Array<::com::sun::tools::javac::jvm::Code$StackMapFormat>;
using $Attribute$RetentionPolicy = ::com::sun::tools::javac::code::Attribute$RetentionPolicy;
using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $TargetType = ::com::sun::tools::javac::code::TargetType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $ClassWriter = ::com::sun::tools::javac::jvm::ClassWriter;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $Code$StackMapFormat = ::com::sun::tools::javac::jvm::Code$StackMapFormat;
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

$FieldInfo _ClassWriter$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$code$Kinds$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ClassWriter$1, $SwitchMap$com$sun$tools$javac$code$Kinds$Kind)},
	{"$SwitchMap$com$sun$tools$javac$jvm$Code$StackMapFormat", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ClassWriter$1, $SwitchMap$com$sun$tools$javac$jvm$Code$StackMapFormat)},
	{"$SwitchMap$com$sun$tools$javac$code$TargetType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ClassWriter$1, $SwitchMap$com$sun$tools$javac$code$TargetType)},
	{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ClassWriter$1, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
	{"$SwitchMap$com$sun$tools$javac$code$Attribute$RetentionPolicy", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ClassWriter$1, $SwitchMap$com$sun$tools$javac$code$Attribute$RetentionPolicy)},
	{}
};

$EnclosingMethodInfo _ClassWriter$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.jvm.ClassWriter",
	nullptr,
	nullptr
};

$InnerClassInfo _ClassWriter$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassWriter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ClassWriter$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.jvm.ClassWriter$1",
	"java.lang.Object",
	nullptr,
	_ClassWriter$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ClassWriter$1_EnclosingMethodInfo_,
	_ClassWriter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassWriter"
};

$Object* allocate$ClassWriter$1($Class* clazz) {
	return $of($alloc(ClassWriter$1));
}

$ints* ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind = nullptr;
$ints* ClassWriter$1::$SwitchMap$com$sun$tools$javac$jvm$Code$StackMapFormat = nullptr;
$ints* ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType = nullptr;
$ints* ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;
$ints* ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$Attribute$RetentionPolicy = nullptr;

void clinit$ClassWriter$1($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind, $new($ints, $($Kinds$Kind::values())->length));
	{
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::VAR->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::MTH->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::TYP->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(ClassWriter$1::$SwitchMap$com$sun$tools$javac$jvm$Code$StackMapFormat, $new($ints, $($Code$StackMapFormat::values())->length));
	{
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$jvm$Code$StackMapFormat)->set($Code$StackMapFormat::CLDC->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$jvm$Code$StackMapFormat)->set($Code$StackMapFormat::JSR202->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType, $new($ints, $($TargetType::values())->length));
	{
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::INSTANCEOF->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::NEW->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::CONSTRUCTOR_REFERENCE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::METHOD_REFERENCE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::LOCAL_VARIABLE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::RESOURCE_VARIABLE->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::EXCEPTION_PARAMETER->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::METHOD_RECEIVER->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::CLASS_TYPE_PARAMETER->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::METHOD_TYPE_PARAMETER->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::CLASS_TYPE_PARAMETER_BOUND->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::METHOD_TYPE_PARAMETER_BOUND->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::CLASS_EXTENDS->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::THROWS->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::METHOD_FORMAL_PARAMETER->ordinal(), 15);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::CAST->ordinal(), 16);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT->ordinal(), 17);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::METHOD_INVOCATION_TYPE_ARGUMENT->ordinal(), 18);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT->ordinal(), 19);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::METHOD_REFERENCE_TYPE_ARGUMENT->ordinal(), 20);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::METHOD_RETURN->ordinal(), 21);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::FIELD->ordinal(), 22);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->set($TargetType::UNKNOWN->ordinal(), 23);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BYTE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::CHAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::SHORT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::INT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::LONG->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::FLOAT->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::DOUBLE->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BOOLEAN->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BOT->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::CLASS->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::ARRAY->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::TYPEVAR->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::UNINITIALIZED_THIS->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::UNINITIALIZED_OBJECT->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$Attribute$RetentionPolicy, $new($ints, $($Attribute$RetentionPolicy::values())->length));
	{
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$Attribute$RetentionPolicy)->set($Attribute$RetentionPolicy::SOURCE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$Attribute$RetentionPolicy)->set($Attribute$RetentionPolicy::CLASS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$Attribute$RetentionPolicy)->set($Attribute$RetentionPolicy::RUNTIME->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ClassWriter$1::ClassWriter$1() {
}

$Class* ClassWriter$1::load$($String* name, bool initialize) {
	$loadClass(ClassWriter$1, name, initialize, &_ClassWriter$1_ClassInfo_, clinit$ClassWriter$1, allocate$ClassWriter$1);
	return class$;
}

$Class* ClassWriter$1::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com