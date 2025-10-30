#include <com/sun/tools/javac/comp/DeferredAttr$5.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ABSENT_MTH
#undef CHECK
#undef SPECULATIVE
#undef STATICERR
#undef WRONG_MTH
#undef WRONG_MTHS

using $Kinds$KindArray = $Array<::com::sun::tools::javac::code::Kinds$Kind>;
using $DeferredAttr$AttrModeArray = $Array<::com::sun::tools::javac::comp::DeferredAttr$AttrMode>;
using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$AttrMode = ::com::sun::tools::javac::comp::DeferredAttr$AttrMode;
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

$FieldInfo _DeferredAttr$5_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$code$Kinds$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DeferredAttr$5, $SwitchMap$com$sun$tools$javac$code$Kinds$Kind)},
	{"$SwitchMap$com$sun$tools$javac$comp$DeferredAttr$AttrMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DeferredAttr$5, $SwitchMap$com$sun$tools$javac$comp$DeferredAttr$AttrMode)},
	{}
};

$EnclosingMethodInfo _DeferredAttr$5_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.DeferredAttr",
	nullptr,
	nullptr
};

$InnerClassInfo _DeferredAttr$5_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$5", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _DeferredAttr$5_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.comp.DeferredAttr$5",
	"java.lang.Object",
	nullptr,
	_DeferredAttr$5_FieldInfo_,
	nullptr,
	nullptr,
	&_DeferredAttr$5_EnclosingMethodInfo_,
	_DeferredAttr$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$5($Class* clazz) {
	return $of($alloc(DeferredAttr$5));
}

$ints* DeferredAttr$5::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind = nullptr;
$ints* DeferredAttr$5::$SwitchMap$com$sun$tools$javac$comp$DeferredAttr$AttrMode = nullptr;

void clinit$DeferredAttr$5($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(DeferredAttr$5::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind, $new($ints, $($Kinds$Kind::values())->length));
	{
		try {
			$nc(DeferredAttr$5::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::WRONG_MTH->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DeferredAttr$5::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::WRONG_MTHS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DeferredAttr$5::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::ABSENT_MTH->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DeferredAttr$5::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::STATICERR->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(DeferredAttr$5::$SwitchMap$com$sun$tools$javac$comp$DeferredAttr$AttrMode, $new($ints, $($DeferredAttr$AttrMode::values())->length));
	{
		try {
			$nc(DeferredAttr$5::$SwitchMap$com$sun$tools$javac$comp$DeferredAttr$AttrMode)->set($DeferredAttr$AttrMode::SPECULATIVE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DeferredAttr$5::$SwitchMap$com$sun$tools$javac$comp$DeferredAttr$AttrMode)->set($DeferredAttr$AttrMode::CHECK->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

DeferredAttr$5::DeferredAttr$5() {
}

$Class* DeferredAttr$5::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$5, name, initialize, &_DeferredAttr$5_ClassInfo_, clinit$DeferredAttr$5, allocate$DeferredAttr$5);
	return class$;
}

$Class* DeferredAttr$5::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com