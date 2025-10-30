#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>

#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

#undef WARNING

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

$MethodInfo _JCDiagnostic$Warning_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<void(JCDiagnostic$Warning::*)($String*,$String*,$ObjectArray*)>(&JCDiagnostic$Warning::init$))},
	{}
};

$InnerClassInfo _JCDiagnostic$Warning_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.JCDiagnostic$Warning", "com.sun.tools.javac.util.JCDiagnostic", "Warning", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticInfo", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticInfo", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCDiagnostic$Warning_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.util.JCDiagnostic$Warning",
	"com.sun.tools.javac.util.JCDiagnostic$DiagnosticInfo",
	nullptr,
	nullptr,
	_JCDiagnostic$Warning_MethodInfo_,
	nullptr,
	nullptr,
	_JCDiagnostic$Warning_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.JCDiagnostic"
};

$Object* allocate$JCDiagnostic$Warning($Class* clazz) {
	return $of($alloc(JCDiagnostic$Warning));
}

void JCDiagnostic$Warning::init$($String* prefix, $String* key, $ObjectArray* args) {
	$init($JCDiagnostic$DiagnosticType);
	$JCDiagnostic$DiagnosticInfo::init$($JCDiagnostic$DiagnosticType::WARNING, prefix, key, args);
}

JCDiagnostic$Warning::JCDiagnostic$Warning() {
}

$Class* JCDiagnostic$Warning::load$($String* name, bool initialize) {
	$loadClass(JCDiagnostic$Warning, name, initialize, &_JCDiagnostic$Warning_ClassInfo_, allocate$JCDiagnostic$Warning);
	return class$;
}

$Class* JCDiagnostic$Warning::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com