#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>

#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

#undef ERROR

using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticInfo = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _JCDiagnostic$Error_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<void(JCDiagnostic$Error::*)($String*,$String*,$ObjectArray*)>(&JCDiagnostic$Error::init$))},
	{}
};

$InnerClassInfo _JCDiagnostic$Error_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.JCDiagnostic$Error", "com.sun.tools.javac.util.JCDiagnostic", "Error", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticInfo", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticInfo", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCDiagnostic$Error_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.util.JCDiagnostic$Error",
	"com.sun.tools.javac.util.JCDiagnostic$DiagnosticInfo",
	nullptr,
	nullptr,
	_JCDiagnostic$Error_MethodInfo_,
	nullptr,
	nullptr,
	_JCDiagnostic$Error_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.JCDiagnostic"
};

$Object* allocate$JCDiagnostic$Error($Class* clazz) {
	return $of($alloc(JCDiagnostic$Error));
}

void JCDiagnostic$Error::init$($String* prefix, $String* key, $ObjectArray* args) {
	$init($JCDiagnostic$DiagnosticType);
	$JCDiagnostic$DiagnosticInfo::init$($JCDiagnostic$DiagnosticType::ERROR, prefix, key, args);
}

JCDiagnostic$Error::JCDiagnostic$Error() {
}

$Class* JCDiagnostic$Error::load$($String* name, bool initialize) {
	$loadClass(JCDiagnostic$Error, name, initialize, &_JCDiagnostic$Error_ClassInfo_, allocate$JCDiagnostic$Error);
	return class$;
}

$Class* JCDiagnostic$Error::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com