#include <com/sun/tools/javac/processing/JavacFiler$1.h>

#include <com/sun/tools/javac/processing/JavacFiler.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef CLASS
#undef SOURCE

using $JavaFileObject$KindArray = $Array<::javax::tools::JavaFileObject$Kind>;
using $JavacFiler = ::com::sun::tools::javac::processing::JavacFiler;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$FieldInfo _JavacFiler$1_FieldInfo_[] = {
	{"$SwitchMap$javax$tools$JavaFileObject$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacFiler$1, $SwitchMap$javax$tools$JavaFileObject$Kind)},
	{}
};

$EnclosingMethodInfo _JavacFiler$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.processing.JavacFiler",
	nullptr,
	nullptr
};

$InnerClassInfo _JavacFiler$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacFiler$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JavacFiler$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.processing.JavacFiler$1",
	"java.lang.Object",
	nullptr,
	_JavacFiler$1_FieldInfo_,
	nullptr,
	nullptr,
	&_JavacFiler$1_EnclosingMethodInfo_,
	_JavacFiler$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacFiler"
};

$Object* allocate$JavacFiler$1($Class* clazz) {
	return $of($alloc(JavacFiler$1));
}

$ints* JavacFiler$1::$SwitchMap$javax$tools$JavaFileObject$Kind = nullptr;

void clinit$JavacFiler$1($Class* class$) {
	$assignStatic(JavacFiler$1::$SwitchMap$javax$tools$JavaFileObject$Kind, $new($ints, $($JavaFileObject$Kind::values())->length));
	{
		try {
			$nc(JavacFiler$1::$SwitchMap$javax$tools$JavaFileObject$Kind)->set($JavaFileObject$Kind::SOURCE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacFiler$1::$SwitchMap$javax$tools$JavaFileObject$Kind)->set($JavaFileObject$Kind::CLASS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JavacFiler$1::JavacFiler$1() {
}

$Class* JavacFiler$1::load$($String* name, bool initialize) {
	$loadClass(JavacFiler$1, name, initialize, &_JavacFiler$1_ClassInfo_, clinit$JavacFiler$1, allocate$JavacFiler$1);
	return class$;
}

$Class* JavacFiler$1::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com