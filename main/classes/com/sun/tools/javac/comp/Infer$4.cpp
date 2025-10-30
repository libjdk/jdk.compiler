#include <com/sun/tools/javac/comp/Infer$4.h>

#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef EQ
#undef EXEC
#undef LOWER
#undef TYPECAST
#undef UPPER

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
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

$FieldInfo _Infer$4_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Infer$4, $SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound)},
	{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Infer$4, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
	{}
};

$EnclosingMethodInfo _Infer$4_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Infer",
	nullptr,
	nullptr
};

$InnerClassInfo _Infer$4_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$4", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Infer$4_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.comp.Infer$4",
	"java.lang.Object",
	nullptr,
	_Infer$4_FieldInfo_,
	nullptr,
	nullptr,
	&_Infer$4_EnclosingMethodInfo_,
	_Infer$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$4($Class* clazz) {
	return $of($alloc(Infer$4));
}

$ints* Infer$4::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound = nullptr;
$ints* Infer$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;

void clinit$Infer$4($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Infer$4::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound, $new($ints, $($Type$UndetVar$InferenceBound::values())->length));
	{
		try {
			$nc(Infer$4::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound)->set($Type$UndetVar$InferenceBound::EQ->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Infer$4::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound)->set($Type$UndetVar$InferenceBound::LOWER->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Infer$4::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound)->set($Type$UndetVar$InferenceBound::UPPER->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Infer$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			$nc(Infer$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::TYPECAST->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Infer$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::EXEC->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Infer$4::Infer$4() {
}

$Class* Infer$4::load$($String* name, bool initialize) {
	$loadClass(Infer$4, name, initialize, &_Infer$4_ClassInfo_, clinit$Infer$4, allocate$Infer$4);
	return class$;
}

$Class* Infer$4::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com