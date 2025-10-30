#include <com/sun/tools/javac/code/ClassFinder$2.h>

#include <com/sun/tools/javac/code/ClassFinder.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <jcpp.h>

#undef CLASS
#undef OTHER
#undef SOURCE

using $JavaFileObject$KindArray = $Array<::javax::tools::JavaFileObject$Kind>;
using $ClassFinder = ::com::sun::tools::javac::code::ClassFinder;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _ClassFinder$2_FieldInfo_[] = {
	{"$SwitchMap$javax$tools$JavaFileObject$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ClassFinder$2, $SwitchMap$javax$tools$JavaFileObject$Kind)},
	{}
};

$EnclosingMethodInfo _ClassFinder$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.ClassFinder",
	nullptr,
	nullptr
};

$InnerClassInfo _ClassFinder$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.ClassFinder$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ClassFinder$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.code.ClassFinder$2",
	"java.lang.Object",
	nullptr,
	_ClassFinder$2_FieldInfo_,
	nullptr,
	nullptr,
	&_ClassFinder$2_EnclosingMethodInfo_,
	_ClassFinder$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.ClassFinder"
};

$Object* allocate$ClassFinder$2($Class* clazz) {
	return $of($alloc(ClassFinder$2));
}

$ints* ClassFinder$2::$SwitchMap$javax$tools$JavaFileObject$Kind = nullptr;

void clinit$ClassFinder$2($Class* class$) {
	$assignStatic(ClassFinder$2::$SwitchMap$javax$tools$JavaFileObject$Kind, $new($ints, $($JavaFileObject$Kind::values())->length));
	{
		try {
			$nc(ClassFinder$2::$SwitchMap$javax$tools$JavaFileObject$Kind)->set($JavaFileObject$Kind::OTHER->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassFinder$2::$SwitchMap$javax$tools$JavaFileObject$Kind)->set($JavaFileObject$Kind::CLASS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClassFinder$2::$SwitchMap$javax$tools$JavaFileObject$Kind)->set($JavaFileObject$Kind::SOURCE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ClassFinder$2::ClassFinder$2() {
}

$Class* ClassFinder$2::load$($String* name, bool initialize) {
	$loadClass(ClassFinder$2, name, initialize, &_ClassFinder$2_ClassInfo_, clinit$ClassFinder$2, allocate$ClassFinder$2);
	return class$;
}

$Class* ClassFinder$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com