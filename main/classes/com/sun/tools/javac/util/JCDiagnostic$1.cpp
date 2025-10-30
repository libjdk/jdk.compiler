#include <com/sun/tools/javac/util/JCDiagnostic$1.h>

#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ERROR
#undef FRAGMENT
#undef NOTE
#undef RESOLVE_ERROR
#undef SYNTAX
#undef WARNING

using $JCDiagnostic$DiagnosticFlagArray = $Array<::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag>;
using $JCDiagnostic$DiagnosticTypeArray = $Array<::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType>;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
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

$FieldInfo _JCDiagnostic$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticFlag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JCDiagnostic$1, $SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticFlag)},
	{"$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JCDiagnostic$1, $SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)},
	{}
};

$EnclosingMethodInfo _JCDiagnostic$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.util.JCDiagnostic",
	nullptr,
	nullptr
};

$InnerClassInfo _JCDiagnostic$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.JCDiagnostic$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JCDiagnostic$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.util.JCDiagnostic$1",
	"java.lang.Object",
	nullptr,
	_JCDiagnostic$1_FieldInfo_,
	nullptr,
	nullptr,
	&_JCDiagnostic$1_EnclosingMethodInfo_,
	_JCDiagnostic$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.JCDiagnostic"
};

$Object* allocate$JCDiagnostic$1($Class* clazz) {
	return $of($alloc(JCDiagnostic$1));
}

$ints* JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticFlag = nullptr;
$ints* JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType = nullptr;

void clinit$JCDiagnostic$1($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticFlag, $new($ints, $($JCDiagnostic$DiagnosticFlag::values())->length));
	{
		try {
			$nc(JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticFlag)->set($JCDiagnostic$DiagnosticFlag::SYNTAX->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticFlag)->set($JCDiagnostic$DiagnosticFlag::RESOLVE_ERROR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType, $new($ints, $($JCDiagnostic$DiagnosticType::values())->length));
	{
		try {
			$nc(JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->set($JCDiagnostic$DiagnosticType::ERROR->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->set($JCDiagnostic$DiagnosticType::WARNING->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->set($JCDiagnostic$DiagnosticType::NOTE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->set($JCDiagnostic$DiagnosticType::FRAGMENT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JCDiagnostic$1::JCDiagnostic$1() {
}

$Class* JCDiagnostic$1::load$($String* name, bool initialize) {
	$loadClass(JCDiagnostic$1, name, initialize, &_JCDiagnostic$1_ClassInfo_, clinit$JCDiagnostic$1, allocate$JCDiagnostic$1);
	return class$;
}

$Class* JCDiagnostic$1::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com