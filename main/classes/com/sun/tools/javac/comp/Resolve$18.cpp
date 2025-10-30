#include <com/sun/tools/javac/comp/Resolve$18.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ABSENT_MTH
#undef AMBIGUOUS
#undef CONDEXPR
#undef CONSTRUCTOR
#undef HIDDEN
#undef LAMBDA
#undef METHOD
#undef MTH
#undef REFERENCE
#undef WRONG_MTH
#undef WRONG_MTHS

using $Kinds$KindArray = $Array<::com::sun::tools::javac::code::Kinds$Kind>;
using $Kinds$KindNameArray = $Array<::com::sun::tools::javac::code::Kinds$KindName>;
using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
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
				namespace comp {

$FieldInfo _Resolve$18_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$code$Kinds$KindName", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Resolve$18, $SwitchMap$com$sun$tools$javac$code$Kinds$KindName)},
	{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Resolve$18, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
	{"$SwitchMap$com$sun$tools$javac$code$Kinds$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Resolve$18, $SwitchMap$com$sun$tools$javac$code$Kinds$Kind)},
	{}
};

$EnclosingMethodInfo _Resolve$18_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Resolve",
	nullptr,
	nullptr
};

$InnerClassInfo _Resolve$18_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$18", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Resolve$18_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.comp.Resolve$18",
	"java.lang.Object",
	nullptr,
	_Resolve$18_FieldInfo_,
	nullptr,
	nullptr,
	&_Resolve$18_EnclosingMethodInfo_,
	_Resolve$18_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$18($Class* clazz) {
	return $of($alloc(Resolve$18));
}

$ints* Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$KindName = nullptr;
$ints* Resolve$18::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;
$ints* Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind = nullptr;

void clinit$Resolve$18($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$KindName, $new($ints, $($Kinds$KindName::values())->length));
	{
		try {
			$nc(Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$KindName)->set($Kinds$KindName::METHOD->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$KindName)->set($Kinds$KindName::CONSTRUCTOR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Resolve$18::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			$nc(Resolve$18::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::LAMBDA->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Resolve$18::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::REFERENCE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Resolve$18::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::CONDEXPR->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind, $new($ints, $($Kinds$Kind::values())->length));
	{
		try {
			$nc(Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::ABSENT_MTH->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::HIDDEN->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::WRONG_MTH->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::MTH->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::AMBIGUOUS->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::WRONG_MTHS->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Resolve$18::Resolve$18() {
}

$Class* Resolve$18::load$($String* name, bool initialize) {
	$loadClass(Resolve$18, name, initialize, &_Resolve$18_ClassInfo_, clinit$Resolve$18, allocate$Resolve$18);
	return class$;
}

$Class* Resolve$18::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com