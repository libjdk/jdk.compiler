#include <com/sun/tools/javac/model/JavacTypes$1.h>

#include <com/sun/tools/javac/model/JavacTypes.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

#undef ARRAY
#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef DECLARED
#undef DOUBLE
#undef ERROR
#undef EXECUTABLE
#undef FLOAT
#undef INT
#undef INTERSECTION
#undef LONG
#undef MODULE
#undef NONE
#undef PACKAGE
#undef SHORT
#undef TYPEVAR
#undef VOID
#undef WILDCARD

using $TypeKindArray = $Array<::javax::lang::model::type::TypeKind>;
using $JavacTypes = ::com::sun::tools::javac::model::JavacTypes;
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
				namespace model {

$FieldInfo _JavacTypes$1_FieldInfo_[] = {
	{"$SwitchMap$javax$lang$model$type$TypeKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacTypes$1, $SwitchMap$javax$lang$model$type$TypeKind)},
	{}
};

$EnclosingMethodInfo _JavacTypes$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.model.JavacTypes",
	nullptr,
	nullptr
};

$InnerClassInfo _JavacTypes$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.model.JavacTypes$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JavacTypes$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.model.JavacTypes$1",
	"java.lang.Object",
	nullptr,
	_JavacTypes$1_FieldInfo_,
	nullptr,
	nullptr,
	&_JavacTypes$1_EnclosingMethodInfo_,
	_JavacTypes$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.model.JavacTypes"
};

$Object* allocate$JavacTypes$1($Class* clazz) {
	return $of($alloc(JavacTypes$1));
}

$ints* JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind = nullptr;

void clinit$JavacTypes$1($Class* class$) {
	$assignStatic(JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind, $new($ints, $($TypeKind::values())->length));
	{
		try {
			$nc(JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::DECLARED->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::INTERSECTION->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::ERROR->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::TYPEVAR->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::BOOLEAN->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::BYTE->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::SHORT->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::INT->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::LONG->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::CHAR->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::FLOAT->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::DOUBLE->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::VOID->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::NONE->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::EXECUTABLE->ordinal(), 15);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::WILDCARD->ordinal(), 16);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::PACKAGE->ordinal(), 17);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::MODULE->ordinal(), 18);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::ARRAY->ordinal(), 19);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JavacTypes$1::JavacTypes$1() {
}

$Class* JavacTypes$1::load$($String* name, bool initialize) {
	$loadClass(JavacTypes$1, name, initialize, &_JavacTypes$1_ClassInfo_, clinit$JavacTypes$1, allocate$JavacTypes$1);
	return class$;
}

$Class* JavacTypes$1::class$ = nullptr;

				} // model
			} // javac
		} // tools
	} // sun
} // com