#include <com/sun/tools/javac/util/BasicDiagnosticFormatter$1.h>

#include <com/sun/tools/javac/util/BasicDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ERROR
#undef FRAGMENT

using $JCDiagnostic$DiagnosticTypeArray = $Array<::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType>;
using $BasicDiagnosticFormatter = ::com::sun::tools::javac::util::BasicDiagnosticFormatter;
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

$FieldInfo _BasicDiagnosticFormatter$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BasicDiagnosticFormatter$1, $SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)},
	{}
};

$EnclosingMethodInfo _BasicDiagnosticFormatter$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.util.BasicDiagnosticFormatter",
	nullptr,
	nullptr
};

$InnerClassInfo _BasicDiagnosticFormatter$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.BasicDiagnosticFormatter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _BasicDiagnosticFormatter$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.util.BasicDiagnosticFormatter$1",
	"java.lang.Object",
	nullptr,
	_BasicDiagnosticFormatter$1_FieldInfo_,
	nullptr,
	nullptr,
	&_BasicDiagnosticFormatter$1_EnclosingMethodInfo_,
	_BasicDiagnosticFormatter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.BasicDiagnosticFormatter"
};

$Object* allocate$BasicDiagnosticFormatter$1($Class* clazz) {
	return $of($alloc(BasicDiagnosticFormatter$1));
}

$ints* BasicDiagnosticFormatter$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType = nullptr;

void clinit$BasicDiagnosticFormatter$1($Class* class$) {
	$assignStatic(BasicDiagnosticFormatter$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType, $new($ints, $($JCDiagnostic$DiagnosticType::values())->length));
	{
		try {
			$nc(BasicDiagnosticFormatter$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->set($JCDiagnostic$DiagnosticType::FRAGMENT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(BasicDiagnosticFormatter$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->set($JCDiagnostic$DiagnosticType::ERROR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

BasicDiagnosticFormatter$1::BasicDiagnosticFormatter$1() {
}

$Class* BasicDiagnosticFormatter$1::load$($String* name, bool initialize) {
	$loadClass(BasicDiagnosticFormatter$1, name, initialize, &_BasicDiagnosticFormatter$1_ClassInfo_, clinit$BasicDiagnosticFormatter$1, allocate$BasicDiagnosticFormatter$1);
	return class$;
}

$Class* BasicDiagnosticFormatter$1::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com