#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$2.h>

#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/tools/Diagnostic$Kind.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

#undef ERROR
#undef WARNING

using $Diagnostic$KindArray = $Array<::javax::tools::Diagnostic$Kind>;
using $JavacProcessingEnvironment = ::com::sun::tools::javac::processing::JavacProcessingEnvironment;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Diagnostic = ::javax::tools::Diagnostic;
using $Diagnostic$Kind = ::javax::tools::Diagnostic$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$FieldInfo _JavacProcessingEnvironment$2_FieldInfo_[] = {
	{"$SwitchMap$javax$tools$Diagnostic$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacProcessingEnvironment$2, $SwitchMap$javax$tools$Diagnostic$Kind)},
	{}
};

$EnclosingMethodInfo _JavacProcessingEnvironment$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.processing.JavacProcessingEnvironment",
	nullptr,
	nullptr
};

$InnerClassInfo _JavacProcessingEnvironment$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JavacProcessingEnvironment$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment$2",
	"java.lang.Object",
	nullptr,
	_JavacProcessingEnvironment$2_FieldInfo_,
	nullptr,
	nullptr,
	&_JavacProcessingEnvironment$2_EnclosingMethodInfo_,
	_JavacProcessingEnvironment$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment"
};

$Object* allocate$JavacProcessingEnvironment$2($Class* clazz) {
	return $of($alloc(JavacProcessingEnvironment$2));
}

$ints* JavacProcessingEnvironment$2::$SwitchMap$javax$tools$Diagnostic$Kind = nullptr;

void clinit$JavacProcessingEnvironment$2($Class* class$) {
	$assignStatic(JavacProcessingEnvironment$2::$SwitchMap$javax$tools$Diagnostic$Kind, $new($ints, $($Diagnostic$Kind::values())->length));
	{
		try {
			$nc(JavacProcessingEnvironment$2::$SwitchMap$javax$tools$Diagnostic$Kind)->set($Diagnostic$Kind::WARNING->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacProcessingEnvironment$2::$SwitchMap$javax$tools$Diagnostic$Kind)->set($Diagnostic$Kind::ERROR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JavacProcessingEnvironment$2::JavacProcessingEnvironment$2() {
}

$Class* JavacProcessingEnvironment$2::load$($String* name, bool initialize) {
	$loadClass(JavacProcessingEnvironment$2, name, initialize, &_JavacProcessingEnvironment$2_ClassInfo_, clinit$JavacProcessingEnvironment$2, allocate$JavacProcessingEnvironment$2);
	return class$;
}

$Class* JavacProcessingEnvironment$2::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com