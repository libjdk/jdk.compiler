#include <com/sun/tools/javac/code/Types$25.h>

#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$ProjectionKind.h>
#include <com/sun/tools/javac/code/Types.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

#undef ARRAY
#undef BOOLEAN
#undef BOT
#undef BYTE
#undef CHAR
#undef CLASS
#undef DOUBLE
#undef DOWNWARDS
#undef ERROR
#undef EXECUTABLE
#undef EXTENDS
#undef FLOAT
#undef FORALL
#undef INT
#undef INTERSECTION
#undef LONG
#undef METHOD
#undef NONE
#undef OTHER
#undef PACKAGE
#undef SHORT
#undef SUPER
#undef TYPEVAR
#undef UNBOUND
#undef UNDETVAR
#undef UNION
#undef UPWARDS
#undef VOID
#undef WILDCARD

using $BoundKindArray = $Array<::com::sun::tools::javac::code::BoundKind>;
using $TypeTagArray = $Array<::com::sun::tools::javac::code::TypeTag>;
using $Types$ProjectionKindArray = $Array<::com::sun::tools::javac::code::Types$ProjectionKind>;
using $TypeKindArray = $Array<::javax::lang::model::type::TypeKind>;
using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$ProjectionKind = ::com::sun::tools::javac::code::Types$ProjectionKind;
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
				namespace code {

$FieldInfo _Types$25_FieldInfo_[] = {
	{"$SwitchMap$javax$lang$model$type$TypeKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Types$25, $SwitchMap$javax$lang$model$type$TypeKind)},
	{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Types$25, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
	{"$SwitchMap$com$sun$tools$javac$code$BoundKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Types$25, $SwitchMap$com$sun$tools$javac$code$BoundKind)},
	{"$SwitchMap$com$sun$tools$javac$code$Types$ProjectionKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Types$25, $SwitchMap$com$sun$tools$javac$code$Types$ProjectionKind)},
	{}
};

$EnclosingMethodInfo _Types$25_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$25_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$25", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Types$25_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.code.Types$25",
	"java.lang.Object",
	nullptr,
	_Types$25_FieldInfo_,
	nullptr,
	nullptr,
	&_Types$25_EnclosingMethodInfo_,
	_Types$25_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$25($Class* clazz) {
	return $of($alloc(Types$25));
}

$ints* Types$25::$SwitchMap$javax$lang$model$type$TypeKind = nullptr;
$ints* Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;
$ints* Types$25::$SwitchMap$com$sun$tools$javac$code$BoundKind = nullptr;
$ints* Types$25::$SwitchMap$com$sun$tools$javac$code$Types$ProjectionKind = nullptr;

void clinit$Types$25($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Types$25::$SwitchMap$javax$lang$model$type$TypeKind, $new($ints, $($TypeKind::values())->length));
	{
		try {
			$nc(Types$25::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::OTHER->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::UNION->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::INTERSECTION->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::PACKAGE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::EXECUTABLE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::NONE->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::VOID->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::ERROR->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::ARRAY->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::CLASS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BYTE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::CHAR->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::SHORT->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::INT->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::LONG->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::FLOAT->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::DOUBLE->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BOOLEAN->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::VOID->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::TYPEVAR->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BOT->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::WILDCARD->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::NONE->ordinal(), 15);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::ERROR->ordinal(), 16);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::UNDETVAR->ordinal(), 17);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::FORALL->ordinal(), 18);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::METHOD->ordinal(), 19);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Types$25::$SwitchMap$com$sun$tools$javac$code$BoundKind, $new($ints, $($BoundKind::values())->length));
	{
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$BoundKind)->set($BoundKind::EXTENDS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$BoundKind)->set($BoundKind::SUPER->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$BoundKind)->set($BoundKind::UNBOUND->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Types$25::$SwitchMap$com$sun$tools$javac$code$Types$ProjectionKind, $new($ints, $($Types$ProjectionKind::values())->length));
	{
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$Types$ProjectionKind)->set($Types$ProjectionKind::UPWARDS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Types$25::$SwitchMap$com$sun$tools$javac$code$Types$ProjectionKind)->set($Types$ProjectionKind::DOWNWARDS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Types$25::Types$25() {
}

$Class* Types$25::load$($String* name, bool initialize) {
	$loadClass(Types$25, name, initialize, &_Types$25_ClassInfo_, clinit$Types$25, allocate$Types$25);
	return class$;
}

$Class* Types$25::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com