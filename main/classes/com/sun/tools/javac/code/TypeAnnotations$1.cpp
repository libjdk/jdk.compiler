#include <com/sun/tools/javac/code/TypeAnnotations$1.h>

#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <com/sun/source/tree/MemberReferenceTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/Tree.h>
#include <com/sun/tools/javac/code/TypeAnnotations$AnnotationType.h>
#include <com/sun/tools/javac/code/TypeAnnotations.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/lang/model/element/ElementKind.h>
#include <jcpp.h>

#undef ANNOTATED_TYPE
#undef ANNOTATION_TYPE
#undef ARRAY_TYPE
#undef BINDING_VARIABLE
#undef BOTH
#undef CLASS
#undef DECLARATION
#undef ENUM
#undef EXCEPTION_PARAMETER
#undef EXTENDS_WILDCARD
#undef FIELD
#undef INSTANCE_OF
#undef INTERFACE
#undef INTERSECTION_TYPE
#undef INVOKE
#undef LOCAL_VARIABLE
#undef MEMBER_REFERENCE
#undef MEMBER_SELECT
#undef METHOD
#undef METHOD_INVOCATION
#undef NEW
#undef NEW_ARRAY
#undef NEW_CLASS
#undef NONE
#undef PARAMETER
#undef PARAMETERIZED_TYPE
#undef RECORD
#undef RESOURCE_VARIABLE
#undef SUPER_WILDCARD
#undef TYPE
#undef TYPE_CAST
#undef TYPE_PARAMETER
#undef UNION_TYPE
#undef VARIABLE

using $MemberReferenceTree$ReferenceModeArray = $Array<::com::sun::source::tree::MemberReferenceTree$ReferenceMode>;
using $Tree$KindArray = $Array<::com::sun::source::tree::Tree$Kind>;
using $TypeAnnotations$AnnotationTypeArray = $Array<::com::sun::tools::javac::code::TypeAnnotations$AnnotationType>;
using $ElementKindArray = $Array<::javax::lang::model::element::ElementKind>;
using $MemberReferenceTree = ::com::sun::source::tree::MemberReferenceTree;
using $MemberReferenceTree$ReferenceMode = ::com::sun::source::tree::MemberReferenceTree$ReferenceMode;
using $Tree = ::com::sun::source::tree::Tree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TypeAnnotations = ::com::sun::tools::javac::code::TypeAnnotations;
using $TypeAnnotations$AnnotationType = ::com::sun::tools::javac::code::TypeAnnotations$AnnotationType;
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

$FieldInfo _TypeAnnotations$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$source$tree$Tree$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeAnnotations$1, $SwitchMap$com$sun$source$tree$Tree$Kind)},
	{"$SwitchMap$javax$lang$model$element$ElementKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeAnnotations$1, $SwitchMap$javax$lang$model$element$ElementKind)},
	{"$SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeAnnotations$1, $SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode)},
	{"$SwitchMap$com$sun$tools$javac$code$TypeAnnotations$AnnotationType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeAnnotations$1, $SwitchMap$com$sun$tools$javac$code$TypeAnnotations$AnnotationType)},
	{}
};

$EnclosingMethodInfo _TypeAnnotations$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.TypeAnnotations",
	nullptr,
	nullptr
};

$InnerClassInfo _TypeAnnotations$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.TypeAnnotations$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _TypeAnnotations$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.code.TypeAnnotations$1",
	"java.lang.Object",
	nullptr,
	_TypeAnnotations$1_FieldInfo_,
	nullptr,
	nullptr,
	&_TypeAnnotations$1_EnclosingMethodInfo_,
	_TypeAnnotations$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.TypeAnnotations"
};

$Object* allocate$TypeAnnotations$1($Class* clazz) {
	return $of($alloc(TypeAnnotations$1));
}

$ints* TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind = nullptr;
$ints* TypeAnnotations$1::$SwitchMap$javax$lang$model$element$ElementKind = nullptr;
$ints* TypeAnnotations$1::$SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode = nullptr;
$ints* TypeAnnotations$1::$SwitchMap$com$sun$tools$javac$code$TypeAnnotations$AnnotationType = nullptr;

void clinit$TypeAnnotations$1($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind, $new($ints, $($Tree$Kind::values())->length));
	{
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::TYPE_CAST->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::INSTANCE_OF->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::NEW_CLASS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::NEW_ARRAY->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::ANNOTATION_TYPE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::CLASS->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::ENUM->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::INTERFACE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::RECORD->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::METHOD->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::PARAMETERIZED_TYPE->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::MEMBER_REFERENCE->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::ARRAY_TYPE->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::TYPE_PARAMETER->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::VARIABLE->ordinal(), 15);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::ANNOTATED_TYPE->ordinal(), 16);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::UNION_TYPE->ordinal(), 17);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::INTERSECTION_TYPE->ordinal(), 18);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::METHOD_INVOCATION->ordinal(), 19);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::EXTENDS_WILDCARD->ordinal(), 20);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::SUPER_WILDCARD->ordinal(), 21);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::MEMBER_SELECT->ordinal(), 22);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(TypeAnnotations$1::$SwitchMap$javax$lang$model$element$ElementKind, $new($ints, $($ElementKind::values())->length));
	{
		try {
			$nc(TypeAnnotations$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::BINDING_VARIABLE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::LOCAL_VARIABLE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::FIELD->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::PARAMETER->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::EXCEPTION_PARAMETER->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::RESOURCE_VARIABLE->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode, $new($ints, $($MemberReferenceTree$ReferenceMode::values())->length));
	{
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode)->set($MemberReferenceTree$ReferenceMode::INVOKE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode)->set($MemberReferenceTree$ReferenceMode::NEW->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(TypeAnnotations$1::$SwitchMap$com$sun$tools$javac$code$TypeAnnotations$AnnotationType, $new($ints, $($TypeAnnotations$AnnotationType::values())->length));
	{
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$tools$javac$code$TypeAnnotations$AnnotationType)->set($TypeAnnotations$AnnotationType::DECLARATION->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$tools$javac$code$TypeAnnotations$AnnotationType)->set($TypeAnnotations$AnnotationType::BOTH->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$tools$javac$code$TypeAnnotations$AnnotationType)->set($TypeAnnotations$AnnotationType::TYPE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeAnnotations$1::$SwitchMap$com$sun$tools$javac$code$TypeAnnotations$AnnotationType)->set($TypeAnnotations$AnnotationType::NONE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TypeAnnotations$1::TypeAnnotations$1() {
}

$Class* TypeAnnotations$1::load$($String* name, bool initialize) {
	$loadClass(TypeAnnotations$1, name, initialize, &_TypeAnnotations$1_ClassInfo_, clinit$TypeAnnotations$1, allocate$TypeAnnotations$1);
	return class$;
}

$Class* TypeAnnotations$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com