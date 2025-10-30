#include <com/sun/tools/javac/comp/Check$CheckContext.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Check = ::com::sun::tools::javac::comp::Check;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Check$CheckContext_MethodInfo_[] = {
	{"checkWarner", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/Warner;", nullptr, $PUBLIC | $ABSTRACT},
	{"compatible", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"deferredAttrContext", "()Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;", nullptr, $PUBLIC | $ABSTRACT},
	{"inferenceContext", "()Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, $PUBLIC | $ABSTRACT},
	{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Check$CheckContext_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Check$CheckContext", "com.sun.tools.javac.comp.Check", "CheckContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Check$CheckContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.comp.Check$CheckContext",
	nullptr,
	nullptr,
	nullptr,
	_Check$CheckContext_MethodInfo_,
	nullptr,
	nullptr,
	_Check$CheckContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Check"
};

$Object* allocate$Check$CheckContext($Class* clazz) {
	return $of($alloc(Check$CheckContext));
}

$Class* Check$CheckContext::load$($String* name, bool initialize) {
	$loadClass(Check$CheckContext, name, initialize, &_Check$CheckContext_ClassInfo_, allocate$Check$CheckContext);
	return class$;
}

$Class* Check$CheckContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com