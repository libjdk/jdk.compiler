#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter.h>

#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

using $Resolve$MethodResolutionDiagHelper = ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper;
using $Resolve$MethodResolutionDiagHelper$DiagnosticRewriter = ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$DiagnosticRewriter;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter_FieldInfo_[] = {
	{"causeIndex", "I", nullptr, 0, $field(Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter, causeIndex)},
	{}
};

$MethodInfo _Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter::*)(int32_t)>(&Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter::init$))},
	{"rewriteDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$Factory;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "com.sun.tools.javac.comp.Resolve", "MethodResolutionDiagHelper", $STATIC},
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter", "com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "ArgMismatchRewriter", $STATIC},
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$DiagnosticRewriter", "com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "DiagnosticRewriter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$DiagnosticRewriter",
	_Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter_FieldInfo_,
	_Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter($Class* clazz) {
	return $of($alloc(Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter));
}

void Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter::init$(int32_t causeIndex) {
	this->causeIndex = causeIndex;
}

$JCDiagnostic* Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter::rewriteDiagnostic($JCDiagnostic$Factory* diags, $JCDiagnostic$DiagnosticPosition* preferredPos, $DiagnosticSource* preferredSource, $JCDiagnostic$DiagnosticType* preferredKind, $JCDiagnostic* d) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic, cause, $cast($JCDiagnostic, $nc($($nc(d)->getArgs()))->get(this->causeIndex)));
	$var($JCDiagnostic$DiagnosticPosition, pos, d->getDiagnosticPosition());
	if (pos == nullptr) {
		$assign(pos, preferredPos);
	}
	return $nc(diags)->create(preferredKind, preferredSource, pos, "prob.found.req"_s, $$new($ObjectArray, {$of(cause)}));
}

Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter::Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter() {
}

$Class* Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter::load$($String* name, bool initialize) {
	$loadClass(Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter, name, initialize, &_Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter_ClassInfo_, allocate$Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter);
	return class$;
}

$Class* Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com