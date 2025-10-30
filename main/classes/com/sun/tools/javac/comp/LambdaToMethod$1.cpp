#include <com/sun/tools/javac/comp/LambdaToMethod$1.h>

#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind.h>
#include <com/sun/tools/javac/comp/LambdaToMethod.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

#undef APPLY
#undef ARRAY_CTOR
#undef ASSIGN
#undef BLOCK
#undef BOUND
#undef CAPTURED_OUTER_THIS
#undef CAPTURED_THIS
#undef CAPTURED_VAR
#undef CLASSDEF
#undef IMPLICIT_INNER
#undef INTERSECTION
#undef LAMBDA
#undef LOCAL_VAR
#undef METHODDEF
#undef NEWCLASS
#undef PARAM
#undef STATIC
#undef SUPER
#undef TOPLEVEL
#undef TYPECAST
#undef TYPEVAR
#undef UNBOUND
#undef UNION
#undef VARDEF

using $LambdaToMethod$LambdaSymbolKindArray = $Array<::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind>;
using $JCTree$JCMemberReference$ReferenceKindArray = $Array<::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind>;
using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $TypeKindArray = $Array<::javax::lang::model::type::TypeKind>;
using $LambdaToMethod = ::com::sun::tools::javac::comp::LambdaToMethod;
using $LambdaToMethod$LambdaSymbolKind = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind;
using $JCTree$JCMemberReference$ReferenceKind = ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $TypeKind = ::javax::lang::model::type::TypeKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _LambdaToMethod$1_FieldInfo_[] = {
	{"$SwitchMap$javax$lang$model$type$TypeKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaToMethod$1, $SwitchMap$javax$lang$model$type$TypeKind)},
	{"$SwitchMap$com$sun$tools$javac$comp$LambdaToMethod$LambdaSymbolKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaToMethod$1, $SwitchMap$com$sun$tools$javac$comp$LambdaToMethod$LambdaSymbolKind)},
	{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaToMethod$1, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
	{"$SwitchMap$com$sun$tools$javac$tree$JCTree$JCMemberReference$ReferenceKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaToMethod$1, $SwitchMap$com$sun$tools$javac$tree$JCTree$JCMemberReference$ReferenceKind)},
	{}
};

$EnclosingMethodInfo _LambdaToMethod$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.LambdaToMethod",
	nullptr,
	nullptr
};

$InnerClassInfo _LambdaToMethod$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.LambdaToMethod$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _LambdaToMethod$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.comp.LambdaToMethod$1",
	"java.lang.Object",
	nullptr,
	_LambdaToMethod$1_FieldInfo_,
	nullptr,
	nullptr,
	&_LambdaToMethod$1_EnclosingMethodInfo_,
	_LambdaToMethod$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.LambdaToMethod"
};

$Object* allocate$LambdaToMethod$1($Class* clazz) {
	return $of($alloc(LambdaToMethod$1));
}

$ints* LambdaToMethod$1::$SwitchMap$javax$lang$model$type$TypeKind = nullptr;
$ints* LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$comp$LambdaToMethod$LambdaSymbolKind = nullptr;
$ints* LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;
$ints* LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$JCMemberReference$ReferenceKind = nullptr;

void clinit$LambdaToMethod$1($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(LambdaToMethod$1::$SwitchMap$javax$lang$model$type$TypeKind, $new($ints, $($TypeKind::values())->length));
	{
		try {
			$nc(LambdaToMethod$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::INTERSECTION->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaToMethod$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::UNION->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaToMethod$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::TYPEVAR->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$comp$LambdaToMethod$LambdaSymbolKind, $new($ints, $($LambdaToMethod$LambdaSymbolKind::values())->length));
	{
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$comp$LambdaToMethod$LambdaSymbolKind)->set($LambdaToMethod$LambdaSymbolKind::CAPTURED_THIS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$comp$LambdaToMethod$LambdaSymbolKind)->set($LambdaToMethod$LambdaSymbolKind::CAPTURED_VAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$comp$LambdaToMethod$LambdaSymbolKind)->set($LambdaToMethod$LambdaSymbolKind::CAPTURED_OUTER_THIS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$comp$LambdaToMethod$LambdaSymbolKind)->set($LambdaToMethod$LambdaSymbolKind::LOCAL_VAR->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$comp$LambdaToMethod$LambdaSymbolKind)->set($LambdaToMethod$LambdaSymbolKind::PARAM->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::APPLY->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::NEWCLASS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::TYPECAST->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::CLASSDEF->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::VARDEF->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::BLOCK->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::METHODDEF->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::LAMBDA->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::ASSIGN->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$JCMemberReference$ReferenceKind, $new($ints, $($JCTree$JCMemberReference$ReferenceKind::values())->length));
	{
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$JCMemberReference$ReferenceKind)->set($JCTree$JCMemberReference$ReferenceKind::IMPLICIT_INNER->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$JCMemberReference$ReferenceKind)->set($JCTree$JCMemberReference$ReferenceKind::SUPER->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$JCMemberReference$ReferenceKind)->set($JCTree$JCMemberReference$ReferenceKind::BOUND->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$JCMemberReference$ReferenceKind)->set($JCTree$JCMemberReference$ReferenceKind::UNBOUND->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$JCMemberReference$ReferenceKind)->set($JCTree$JCMemberReference$ReferenceKind::STATIC->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$JCMemberReference$ReferenceKind)->set($JCTree$JCMemberReference$ReferenceKind::TOPLEVEL->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$JCMemberReference$ReferenceKind)->set($JCTree$JCMemberReference$ReferenceKind::ARRAY_CTOR->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

LambdaToMethod$1::LambdaToMethod$1() {
}

$Class* LambdaToMethod$1::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$1, name, initialize, &_LambdaToMethod$1_ClassInfo_, clinit$LambdaToMethod$1, allocate$LambdaToMethod$1);
	return class$;
}

$Class* LambdaToMethod$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com