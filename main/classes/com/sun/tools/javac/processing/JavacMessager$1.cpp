#include <com/sun/tools/javac/processing/JavacMessager$1.h>

#include <com/sun/tools/javac/processing/JavacMessager.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/tools/Diagnostic$Kind.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

#undef ERROR
#undef MANDATORY_WARNING
#undef WARNING

using $Diagnostic$KindArray = $Array<::javax::tools::Diagnostic$Kind>;
using $JavacMessager = ::com::sun::tools::javac::processing::JavacMessager;
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

$FieldInfo _JavacMessager$1_FieldInfo_[] = {
	{"$SwitchMap$javax$tools$Diagnostic$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacMessager$1, $SwitchMap$javax$tools$Diagnostic$Kind)},
	{}
};

$EnclosingMethodInfo _JavacMessager$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.processing.JavacMessager",
	nullptr,
	nullptr
};

$InnerClassInfo _JavacMessager$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacMessager$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JavacMessager$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.processing.JavacMessager$1",
	"java.lang.Object",
	nullptr,
	_JavacMessager$1_FieldInfo_,
	nullptr,
	nullptr,
	&_JavacMessager$1_EnclosingMethodInfo_,
	_JavacMessager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacMessager"
};

$Object* allocate$JavacMessager$1($Class* clazz) {
	return $of($alloc(JavacMessager$1));
}

$ints* JavacMessager$1::$SwitchMap$javax$tools$Diagnostic$Kind = nullptr;

void clinit$JavacMessager$1($Class* class$) {
	$assignStatic(JavacMessager$1::$SwitchMap$javax$tools$Diagnostic$Kind, $new($ints, $($Diagnostic$Kind::values())->length));
	{
		try {
			$nc(JavacMessager$1::$SwitchMap$javax$tools$Diagnostic$Kind)->set($Diagnostic$Kind::ERROR->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacMessager$1::$SwitchMap$javax$tools$Diagnostic$Kind)->set($Diagnostic$Kind::WARNING->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacMessager$1::$SwitchMap$javax$tools$Diagnostic$Kind)->set($Diagnostic$Kind::MANDATORY_WARNING->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JavacMessager$1::JavacMessager$1() {
}

$Class* JavacMessager$1::load$($String* name, bool initialize) {
	$loadClass(JavacMessager$1, name, initialize, &_JavacMessager$1_ClassInfo_, clinit$JavacMessager$1, allocate$JavacMessager$1);
	return class$;
}

$Class* JavacMessager$1::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com