#include <com/sun/tools/javac/main/OptionHelper.h>

#include <com/sun/tools/javac/main/Option$InvalidValueException.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $Option = ::com::sun::tools::javac::main::Option;
using $Option$InvalidValueException = ::com::sun::tools::javac::main::Option$InvalidValueException;
using $JCDiagnostic$DiagnosticInfo = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$MethodInfo _OptionHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OptionHelper::*)()>(&OptionHelper::init$))},
	{"addClassName", "(Ljava/lang/String;)V", nullptr, $ABSTRACT},
	{"addFile", "(Ljava/nio/file/Path;)V", nullptr, $ABSTRACT},
	{"get", "(Lcom/sun/tools/javac/main/Option;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLog", "()Lcom/sun/tools/javac/util/Log;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOwnName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"handleFileManagerOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"newInvalidValueException", "(Lcom/sun/tools/javac/util/JCDiagnostic$Error;)Lcom/sun/tools/javac/main/Option$InvalidValueException;", nullptr, 0},
	{"put", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _OptionHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.OptionHelper$GrumpyHelper", "com.sun.tools.javac.main.OptionHelper", "GrumpyHelper", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _OptionHelper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.main.OptionHelper",
	"java.lang.Object",
	nullptr,
	nullptr,
	_OptionHelper_MethodInfo_,
	nullptr,
	nullptr,
	_OptionHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.OptionHelper$GrumpyHelper"
};

$Object* allocate$OptionHelper($Class* clazz) {
	return $of($alloc(OptionHelper));
}

void OptionHelper::init$() {
}

$Option$InvalidValueException* OptionHelper::newInvalidValueException($JCDiagnostic$Error* error) {
	$useLocalCurrentObjectStackCache();
	return $new($Option$InvalidValueException, $($nc($(getLog()))->localize(error)));
}

OptionHelper::OptionHelper() {
}

$Class* OptionHelper::load$($String* name, bool initialize) {
	$loadClass(OptionHelper, name, initialize, &_OptionHelper_ClassInfo_, allocate$OptionHelper);
	return class$;
}

$Class* OptionHelper::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com