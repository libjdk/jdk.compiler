#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter$2.h>

#include <com/sun/tools/javac/api/DiagnosticFormatter$PositionKind.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef COLUMN
#undef CONDEXPR
#undef END
#undef ERROR
#undef FRAGMENT
#undef LAMBDA
#undef LINE
#undef NOTE
#undef OFFSET
#undef PARENS
#undef REFERENCE
#undef START
#undef WARNING

using $DiagnosticFormatter$PositionKindArray = $Array<::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind>;
using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $JCDiagnostic$DiagnosticTypeArray = $Array<::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType>;
using $DiagnosticFormatter$PositionKind = ::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $AbstractDiagnosticFormatter = ::com::sun::tools::javac::util::AbstractDiagnosticFormatter;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
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
				namespace util {

$FieldInfo _AbstractDiagnosticFormatter$2_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractDiagnosticFormatter$2, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
	{"$SwitchMap$com$sun$tools$javac$api$DiagnosticFormatter$PositionKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractDiagnosticFormatter$2, $SwitchMap$com$sun$tools$javac$api$DiagnosticFormatter$PositionKind)},
	{"$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractDiagnosticFormatter$2, $SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)},
	{}
};

$EnclosingMethodInfo _AbstractDiagnosticFormatter$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.util.AbstractDiagnosticFormatter",
	nullptr,
	nullptr
};

$InnerClassInfo _AbstractDiagnosticFormatter$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.AbstractDiagnosticFormatter$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _AbstractDiagnosticFormatter$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.util.AbstractDiagnosticFormatter$2",
	"java.lang.Object",
	nullptr,
	_AbstractDiagnosticFormatter$2_FieldInfo_,
	nullptr,
	nullptr,
	&_AbstractDiagnosticFormatter$2_EnclosingMethodInfo_,
	_AbstractDiagnosticFormatter$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.AbstractDiagnosticFormatter"
};

$Object* allocate$AbstractDiagnosticFormatter$2($Class* clazz) {
	return $of($alloc(AbstractDiagnosticFormatter$2));
}

$ints* AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;
$ints* AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$api$DiagnosticFormatter$PositionKind = nullptr;
$ints* AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType = nullptr;

void clinit$AbstractDiagnosticFormatter$2($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			$nc(AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PARENS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::LAMBDA->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::REFERENCE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::CONDEXPR->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$api$DiagnosticFormatter$PositionKind, $new($ints, $($DiagnosticFormatter$PositionKind::values())->length));
	{
		try {
			$nc(AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$api$DiagnosticFormatter$PositionKind)->set($DiagnosticFormatter$PositionKind::START->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$api$DiagnosticFormatter$PositionKind)->set($DiagnosticFormatter$PositionKind::END->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$api$DiagnosticFormatter$PositionKind)->set($DiagnosticFormatter$PositionKind::LINE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$api$DiagnosticFormatter$PositionKind)->set($DiagnosticFormatter$PositionKind::COLUMN->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$api$DiagnosticFormatter$PositionKind)->set($DiagnosticFormatter$PositionKind::OFFSET->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType, $new($ints, $($JCDiagnostic$DiagnosticType::values())->length));
	{
		try {
			$nc(AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->set($JCDiagnostic$DiagnosticType::FRAGMENT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->set($JCDiagnostic$DiagnosticType::NOTE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->set($JCDiagnostic$DiagnosticType::WARNING->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->set($JCDiagnostic$DiagnosticType::ERROR->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

AbstractDiagnosticFormatter$2::AbstractDiagnosticFormatter$2() {
}

$Class* AbstractDiagnosticFormatter$2::load$($String* name, bool initialize) {
	$loadClass(AbstractDiagnosticFormatter$2, name, initialize, &_AbstractDiagnosticFormatter$2_ClassInfo_, clinit$AbstractDiagnosticFormatter$2, allocate$AbstractDiagnosticFormatter$2);
	return class$;
}

$Class* AbstractDiagnosticFormatter$2::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com