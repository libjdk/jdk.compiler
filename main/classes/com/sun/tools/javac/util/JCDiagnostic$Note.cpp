#include <com/sun/tools/javac/util/JCDiagnostic$Note.h>

#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

#undef NOTE

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

$MethodInfo _JCDiagnostic$Note_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<void(JCDiagnostic$Note::*)($String*,$String*,$ObjectArray*)>(&JCDiagnostic$Note::init$))},
	{}
};

$InnerClassInfo _JCDiagnostic$Note_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.JCDiagnostic$Note", "com.sun.tools.javac.util.JCDiagnostic", "Note", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticInfo", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticInfo", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCDiagnostic$Note_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.util.JCDiagnostic$Note",
	"com.sun.tools.javac.util.JCDiagnostic$DiagnosticInfo",
	nullptr,
	nullptr,
	_JCDiagnostic$Note_MethodInfo_,
	nullptr,
	nullptr,
	_JCDiagnostic$Note_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.JCDiagnostic"
};

$Object* allocate$JCDiagnostic$Note($Class* clazz) {
	return $of($alloc(JCDiagnostic$Note));
}

void JCDiagnostic$Note::init$($String* prefix, $String* key, $ObjectArray* args) {
	$init($JCDiagnostic$DiagnosticType);
	$JCDiagnostic$DiagnosticInfo::init$($JCDiagnostic$DiagnosticType::NOTE, prefix, key, args);
}

JCDiagnostic$Note::JCDiagnostic$Note() {
}

$Class* JCDiagnostic$Note::load$($String* name, bool initialize) {
	$loadClass(JCDiagnostic$Note, name, initialize, &_JCDiagnostic$Note_ClassInfo_, allocate$JCDiagnostic$Note);
	return class$;
}

$Class* JCDiagnostic$Note::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com