#include <com/sun/tools/javac/tree/TreeMaker$2.h>

#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

#undef ARRAY
#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef CLASS
#undef DOUBLE
#undef ERROR
#undef FLOAT
#undef INT
#undef INTERSECTION
#undef LONG
#undef SHORT
#undef TYPEVAR
#undef UNION
#undef VOID
#undef WILDCARD

using $TypeTagArray = $Array<::com::sun::tools::javac::code::TypeTag>;
using $TypeKindArray = $Array<::javax::lang::model::type::TypeKind>;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
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
				namespace tree {

$FieldInfo _TreeMaker$2_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TreeMaker$2, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
	{"$SwitchMap$javax$lang$model$type$TypeKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TreeMaker$2, $SwitchMap$javax$lang$model$type$TypeKind)},
	{}
};

$EnclosingMethodInfo _TreeMaker$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.tree.TreeMaker",
	nullptr,
	nullptr
};

$InnerClassInfo _TreeMaker$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.TreeMaker$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _TreeMaker$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.tree.TreeMaker$2",
	"java.lang.Object",
	nullptr,
	_TreeMaker$2_FieldInfo_,
	nullptr,
	nullptr,
	&_TreeMaker$2_EnclosingMethodInfo_,
	_TreeMaker$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.TreeMaker"
};

$Object* allocate$TreeMaker$2($Class* clazz) {
	return $of($alloc(TreeMaker$2));
}

$ints* TreeMaker$2::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;
$ints* TreeMaker$2::$SwitchMap$javax$lang$model$type$TypeKind = nullptr;

void clinit$TreeMaker$2($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(TreeMaker$2::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			$nc(TreeMaker$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BYTE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeMaker$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::CHAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeMaker$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::SHORT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeMaker$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::INT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeMaker$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::LONG->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeMaker$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::FLOAT->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeMaker$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::DOUBLE->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeMaker$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BOOLEAN->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeMaker$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::VOID->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeMaker$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::TYPEVAR->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeMaker$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::WILDCARD->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeMaker$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::CLASS->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeMaker$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::ARRAY->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeMaker$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::ERROR->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(TreeMaker$2::$SwitchMap$javax$lang$model$type$TypeKind, $new($ints, $($TypeKind::values())->length));
	{
		try {
			$nc(TreeMaker$2::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::UNION->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeMaker$2::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::INTERSECTION->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TreeMaker$2::TreeMaker$2() {
}

$Class* TreeMaker$2::load$($String* name, bool initialize) {
	$loadClass(TreeMaker$2, name, initialize, &_TreeMaker$2_ClassInfo_, clinit$TreeMaker$2, allocate$TreeMaker$2);
	return class$;
}

$Class* TreeMaker$2::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com