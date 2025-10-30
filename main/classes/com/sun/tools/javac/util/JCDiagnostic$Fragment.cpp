#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>

#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

#undef FRAGMENT

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

$MethodInfo _JCDiagnostic$Fragment_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<void(JCDiagnostic$Fragment::*)($String*,$String*,$ObjectArray*)>(&JCDiagnostic$Fragment::init$))},
	{}
};

$InnerClassInfo _JCDiagnostic$Fragment_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.JCDiagnostic$Fragment", "com.sun.tools.javac.util.JCDiagnostic", "Fragment", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticInfo", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticInfo", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCDiagnostic$Fragment_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.util.JCDiagnostic$Fragment",
	"com.sun.tools.javac.util.JCDiagnostic$DiagnosticInfo",
	nullptr,
	nullptr,
	_JCDiagnostic$Fragment_MethodInfo_,
	nullptr,
	nullptr,
	_JCDiagnostic$Fragment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.JCDiagnostic"
};

$Object* allocate$JCDiagnostic$Fragment($Class* clazz) {
	return $of($alloc(JCDiagnostic$Fragment));
}

void JCDiagnostic$Fragment::init$($String* prefix, $String* key, $ObjectArray* args) {
	$init($JCDiagnostic$DiagnosticType);
	$JCDiagnostic$DiagnosticInfo::init$($JCDiagnostic$DiagnosticType::FRAGMENT, prefix, key, args);
}

JCDiagnostic$Fragment::JCDiagnostic$Fragment() {
}

$Class* JCDiagnostic$Fragment::load$($String* name, bool initialize) {
	$loadClass(JCDiagnostic$Fragment, name, initialize, &_JCDiagnostic$Fragment_ClassInfo_, allocate$JCDiagnostic$Fragment);
	return class$;
}

$Class* JCDiagnostic$Fragment::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com