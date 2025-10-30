#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$DiagnosticRewriter.h>

#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

using $Resolve$MethodResolutionDiagHelper = ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Resolve$MethodResolutionDiagHelper$DiagnosticRewriter_MethodInfo_[] = {
	{"rewriteDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$Factory;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Resolve$MethodResolutionDiagHelper$DiagnosticRewriter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "com.sun.tools.javac.comp.Resolve", "MethodResolutionDiagHelper", $STATIC},
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$DiagnosticRewriter", "com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "DiagnosticRewriter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Resolve$MethodResolutionDiagHelper$DiagnosticRewriter_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$DiagnosticRewriter",
	nullptr,
	nullptr,
	nullptr,
	_Resolve$MethodResolutionDiagHelper$DiagnosticRewriter_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$MethodResolutionDiagHelper$DiagnosticRewriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$MethodResolutionDiagHelper$DiagnosticRewriter($Class* clazz) {
	return $of($alloc(Resolve$MethodResolutionDiagHelper$DiagnosticRewriter));
}

$Class* Resolve$MethodResolutionDiagHelper$DiagnosticRewriter::load$($String* name, bool initialize) {
	$loadClass(Resolve$MethodResolutionDiagHelper$DiagnosticRewriter, name, initialize, &_Resolve$MethodResolutionDiagHelper$DiagnosticRewriter_ClassInfo_, allocate$Resolve$MethodResolutionDiagHelper$DiagnosticRewriter);
	return class$;
}

$Class* Resolve$MethodResolutionDiagHelper$DiagnosticRewriter::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com