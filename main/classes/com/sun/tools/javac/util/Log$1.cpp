#include <com/sun/tools/javac/util/Log$1.h>

#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ERROR
#undef FRAGMENT
#undef NOTE
#undef WARNING

using $JCDiagnostic$DiagnosticTypeArray = $Array<::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType>;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $Log = ::com::sun::tools::javac::util::Log;
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

$FieldInfo _Log$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Log$1, $SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)},
	{}
};

$EnclosingMethodInfo _Log$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.util.Log",
	nullptr,
	nullptr
};

$InnerClassInfo _Log$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Log$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Log$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.util.Log$1",
	"java.lang.Object",
	nullptr,
	_Log$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Log$1_EnclosingMethodInfo_,
	_Log$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Log"
};

$Object* allocate$Log$1($Class* clazz) {
	return $of($alloc(Log$1));
}

$ints* Log$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType = nullptr;

void clinit$Log$1($Class* class$) {
	$assignStatic(Log$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType, $new($ints, $($JCDiagnostic$DiagnosticType::values())->length));
	{
		try {
			$nc(Log$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->set($JCDiagnostic$DiagnosticType::FRAGMENT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Log$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->set($JCDiagnostic$DiagnosticType::NOTE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Log$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->set($JCDiagnostic$DiagnosticType::WARNING->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Log$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->set($JCDiagnostic$DiagnosticType::ERROR->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Log$1::Log$1() {
}

$Class* Log$1::load$($String* name, bool initialize) {
	$loadClass(Log$1, name, initialize, &_Log$1_ClassInfo_, clinit$Log$1, allocate$Log$1);
	return class$;
}

$Class* Log$1::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com