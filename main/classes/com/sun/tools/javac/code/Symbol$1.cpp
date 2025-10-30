#include <com/sun/tools/javac/code/Symbol$1.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/lang/model/element/ElementKind.h>
#include <jcpp.h>

#undef EXCEPTION_PARAMETER
#undef LOCAL_VARIABLE
#undef PACKAGE
#undef PARAMETER
#undef POSTDEC
#undef POSTINC
#undef PREDEC
#undef PREINC
#undef RESOURCE_VARIABLE

using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $ElementKindArray = $Array<::javax::lang::model::element::ElementKind>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
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

$FieldInfo _Symbol$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Symbol$1, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
	{"$SwitchMap$javax$lang$model$element$ElementKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Symbol$1, $SwitchMap$javax$lang$model$element$ElementKind)},
	{}
};

$EnclosingMethodInfo _Symbol$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Symbol",
	nullptr,
	nullptr
};

$InnerClassInfo _Symbol$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Symbol$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.code.Symbol$1",
	"java.lang.Object",
	nullptr,
	_Symbol$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Symbol$1_EnclosingMethodInfo_,
	_Symbol$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$1($Class* clazz) {
	return $of($alloc(Symbol$1));
}

$ints* Symbol$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;
$ints* Symbol$1::$SwitchMap$javax$lang$model$element$ElementKind = nullptr;

void clinit$Symbol$1($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Symbol$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			$nc(Symbol$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PREINC->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Symbol$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PREDEC->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Symbol$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::POSTINC->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Symbol$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::POSTDEC->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Symbol$1::$SwitchMap$javax$lang$model$element$ElementKind, $new($ints, $($ElementKind::values())->length));
	{
		try {
			$nc(Symbol$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::LOCAL_VARIABLE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Symbol$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::PACKAGE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Symbol$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::PARAMETER->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Symbol$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::RESOURCE_VARIABLE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Symbol$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::EXCEPTION_PARAMETER->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Symbol$1::Symbol$1() {
}

$Class* Symbol$1::load$($String* name, bool initialize) {
	$loadClass(Symbol$1, name, initialize, &_Symbol$1_ClassInfo_, clinit$Symbol$1, allocate$Symbol$1);
	return class$;
}

$Class* Symbol$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com