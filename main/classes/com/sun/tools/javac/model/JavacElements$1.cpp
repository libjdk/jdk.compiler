#include <com/sun/tools/javac/model/JavacElements$1.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/model/JavacElements.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/lang/model/element/ModuleElement$DirectiveKind.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <jcpp.h>

#undef EXPORTS
#undef MDL
#undef OPENS
#undef PCK
#undef REQUIRES

using $Kinds$KindArray = $Array<::com::sun::tools::javac::code::Kinds$Kind>;
using $ModuleElement$DirectiveKindArray = $Array<::javax::lang::model::element::ModuleElement$DirectiveKind>;
using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $JavacElements = ::com::sun::tools::javac::model::JavacElements;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $ModuleElement$DirectiveKind = ::javax::lang::model::element::ModuleElement$DirectiveKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

$FieldInfo _JavacElements$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$code$Kinds$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacElements$1, $SwitchMap$com$sun$tools$javac$code$Kinds$Kind)},
	{"$SwitchMap$javax$lang$model$element$ModuleElement$DirectiveKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacElements$1, $SwitchMap$javax$lang$model$element$ModuleElement$DirectiveKind)},
	{}
};

$EnclosingMethodInfo _JavacElements$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.model.JavacElements",
	nullptr,
	nullptr
};

$InnerClassInfo _JavacElements$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.model.JavacElements$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JavacElements$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.model.JavacElements$1",
	"java.lang.Object",
	nullptr,
	_JavacElements$1_FieldInfo_,
	nullptr,
	nullptr,
	&_JavacElements$1_EnclosingMethodInfo_,
	_JavacElements$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.model.JavacElements"
};

$Object* allocate$JavacElements$1($Class* clazz) {
	return $of($alloc(JavacElements$1));
}

$ints* JavacElements$1::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind = nullptr;
$ints* JavacElements$1::$SwitchMap$javax$lang$model$element$ModuleElement$DirectiveKind = nullptr;

void clinit$JavacElements$1($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JavacElements$1::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind, $new($ints, $($Kinds$Kind::values())->length));
	{
		try {
			$nc(JavacElements$1::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::PCK->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacElements$1::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::MDL->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(JavacElements$1::$SwitchMap$javax$lang$model$element$ModuleElement$DirectiveKind, $new($ints, $($ModuleElement$DirectiveKind::values())->length));
	{
		try {
			$nc(JavacElements$1::$SwitchMap$javax$lang$model$element$ModuleElement$DirectiveKind)->set($ModuleElement$DirectiveKind::REQUIRES->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacElements$1::$SwitchMap$javax$lang$model$element$ModuleElement$DirectiveKind)->set($ModuleElement$DirectiveKind::EXPORTS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacElements$1::$SwitchMap$javax$lang$model$element$ModuleElement$DirectiveKind)->set($ModuleElement$DirectiveKind::OPENS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JavacElements$1::JavacElements$1() {
}

$Class* JavacElements$1::load$($String* name, bool initialize) {
	$loadClass(JavacElements$1, name, initialize, &_JavacElements$1_ClassInfo_, clinit$JavacElements$1, allocate$JavacElements$1);
	return class$;
}

$Class* JavacElements$1::class$ = nullptr;

				} // model
			} // javac
		} // tools
	} // sun
} // com