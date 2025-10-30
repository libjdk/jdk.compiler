#include <com/sun/tools/javac/processing/PrintingProcessor$1.h>

#include <com/sun/tools/javac/processing/PrintingProcessor.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/lang/model/element/ElementKind.h>
#include <jcpp.h>

#undef ANNOTATION_TYPE
#undef CONSTRUCTOR
#undef ENUM
#undef FIELD
#undef INTERFACE
#undef METHOD
#undef RECORD

using $ElementKindArray = $Array<::javax::lang::model::element::ElementKind>;
using $PrintingProcessor = ::com::sun::tools::javac::processing::PrintingProcessor;
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
				namespace processing {

$FieldInfo _PrintingProcessor$1_FieldInfo_[] = {
	{"$SwitchMap$javax$lang$model$element$ElementKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PrintingProcessor$1, $SwitchMap$javax$lang$model$element$ElementKind)},
	{}
};

$EnclosingMethodInfo _PrintingProcessor$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.processing.PrintingProcessor",
	nullptr,
	nullptr
};

$InnerClassInfo _PrintingProcessor$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.PrintingProcessor$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _PrintingProcessor$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.processing.PrintingProcessor$1",
	"java.lang.Object",
	nullptr,
	_PrintingProcessor$1_FieldInfo_,
	nullptr,
	nullptr,
	&_PrintingProcessor$1_EnclosingMethodInfo_,
	_PrintingProcessor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.PrintingProcessor"
};

$Object* allocate$PrintingProcessor$1($Class* clazz) {
	return $of($alloc(PrintingProcessor$1));
}

$ints* PrintingProcessor$1::$SwitchMap$javax$lang$model$element$ElementKind = nullptr;

void clinit$PrintingProcessor$1($Class* class$) {
	$assignStatic(PrintingProcessor$1::$SwitchMap$javax$lang$model$element$ElementKind, $new($ints, $($ElementKind::values())->length));
	{
		try {
			$nc(PrintingProcessor$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::CONSTRUCTOR->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(PrintingProcessor$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::METHOD->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(PrintingProcessor$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::ANNOTATION_TYPE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(PrintingProcessor$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::INTERFACE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(PrintingProcessor$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::ENUM->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(PrintingProcessor$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::RECORD->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(PrintingProcessor$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::FIELD->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

PrintingProcessor$1::PrintingProcessor$1() {
}

$Class* PrintingProcessor$1::load$($String* name, bool initialize) {
	$loadClass(PrintingProcessor$1, name, initialize, &_PrintingProcessor$1_ClassInfo_, clinit$PrintingProcessor$1, allocate$PrintingProcessor$1);
	return class$;
}

$Class* PrintingProcessor$1::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com