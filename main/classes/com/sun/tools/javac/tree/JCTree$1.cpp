#include <com/sun/tools/javac/tree/JCTree$1.h>

#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BOOLEAN
#undef CHAR
#undef EXTENDS
#undef SUPER
#undef UNBOUND

using $BoundKindArray = $Array<::com::sun::tools::javac::code::BoundKind>;
using $TypeTagArray = $Array<::com::sun::tools::javac::code::TypeTag>;
using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$code$BoundKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JCTree$1, $SwitchMap$com$sun$tools$javac$code$BoundKind)},
	{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JCTree$1, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
	{}
};

$EnclosingMethodInfo _JCTree$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.tree.JCTree",
	nullptr,
	nullptr
};

$InnerClassInfo _JCTree$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JCTree$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.tree.JCTree$1",
	"java.lang.Object",
	nullptr,
	_JCTree$1_FieldInfo_,
	nullptr,
	nullptr,
	&_JCTree$1_EnclosingMethodInfo_,
	_JCTree$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$1($Class* clazz) {
	return $of($alloc(JCTree$1));
}

$ints* JCTree$1::$SwitchMap$com$sun$tools$javac$code$BoundKind = nullptr;
$ints* JCTree$1::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;

void clinit$JCTree$1($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JCTree$1::$SwitchMap$com$sun$tools$javac$code$BoundKind, $new($ints, $($BoundKind::values())->length));
	{
		try {
			$nc(JCTree$1::$SwitchMap$com$sun$tools$javac$code$BoundKind)->set($BoundKind::UNBOUND->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JCTree$1::$SwitchMap$com$sun$tools$javac$code$BoundKind)->set($BoundKind::EXTENDS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JCTree$1::$SwitchMap$com$sun$tools$javac$code$BoundKind)->set($BoundKind::SUPER->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(JCTree$1::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			$nc(JCTree$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BOOLEAN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JCTree$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::CHAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JCTree$1::JCTree$1() {
}

$Class* JCTree$1::load$($String* name, bool initialize) {
	$loadClass(JCTree$1, name, initialize, &_JCTree$1_ClassInfo_, clinit$JCTree$1, allocate$JCTree$1);
	return class$;
}

$Class* JCTree$1::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com