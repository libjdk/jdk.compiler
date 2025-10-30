#include <com/sun/tools/javac/code/Kinds$1.h>

#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <com/sun/source/tree/MemberReferenceTree.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/lang/model/element/ElementKind.h>
#include <jcpp.h>

#undef ANNOTATION_TYPE
#undef BINDING_VARIABLE
#undef CLASS
#undef CONSTRUCTOR
#undef ENUM
#undef ENUM_CONSTANT
#undef EXCEPTION_PARAMETER
#undef FIELD
#undef INSTANCE_INIT
#undef INTERFACE
#undef INVOKE
#undef LOCAL_VARIABLE
#undef METHOD
#undef NEW
#undef PACKAGE
#undef PARAMETER
#undef RECORD
#undef RESOURCE_VARIABLE
#undef STATIC_INIT
#undef TYPE_PARAMETER

using $MemberReferenceTree$ReferenceModeArray = $Array<::com::sun::source::tree::MemberReferenceTree$ReferenceMode>;
using $ElementKindArray = $Array<::javax::lang::model::element::ElementKind>;
using $MemberReferenceTree = ::com::sun::source::tree::MemberReferenceTree;
using $MemberReferenceTree$ReferenceMode = ::com::sun::source::tree::MemberReferenceTree$ReferenceMode;
using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ElementKind = ::javax::lang::model::element::ElementKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Kinds$1_FieldInfo_[] = {
	{"$SwitchMap$javax$lang$model$element$ElementKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Kinds$1, $SwitchMap$javax$lang$model$element$ElementKind)},
	{"$SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Kinds$1, $SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode)},
	{}
};

$EnclosingMethodInfo _Kinds$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Kinds",
	nullptr,
	nullptr
};

$InnerClassInfo _Kinds$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Kinds$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Kinds$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.code.Kinds$1",
	"java.lang.Object",
	nullptr,
	_Kinds$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Kinds$1_EnclosingMethodInfo_,
	_Kinds$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Kinds"
};

$Object* allocate$Kinds$1($Class* clazz) {
	return $of($alloc(Kinds$1));
}

$ints* Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind = nullptr;
$ints* Kinds$1::$SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode = nullptr;

void clinit$Kinds$1($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind, $new($ints, $($ElementKind::values())->length));
	{
		try {
			$nc(Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::PACKAGE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::ENUM->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::ANNOTATION_TYPE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::CLASS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::RECORD->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::INTERFACE->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::TYPE_PARAMETER->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::BINDING_VARIABLE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::ENUM_CONSTANT->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::PARAMETER->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::LOCAL_VARIABLE->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::EXCEPTION_PARAMETER->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::RESOURCE_VARIABLE->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::FIELD->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::CONSTRUCTOR->ordinal(), 15);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::METHOD->ordinal(), 16);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::STATIC_INIT->ordinal(), 17);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::INSTANCE_INIT->ordinal(), 18);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Kinds$1::$SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode, $new($ints, $($MemberReferenceTree$ReferenceMode::values())->length));
	{
		try {
			$nc(Kinds$1::$SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode)->set($MemberReferenceTree$ReferenceMode::INVOKE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Kinds$1::$SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode)->set($MemberReferenceTree$ReferenceMode::NEW->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Kinds$1::Kinds$1() {
}

$Class* Kinds$1::load$($String* name, bool initialize) {
	$loadClass(Kinds$1, name, initialize, &_Kinds$1_ClassInfo_, clinit$Kinds$1, allocate$Kinds$1);
	return class$;
}

$Class* Kinds$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com