#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Check$NestedCheckContext_FieldInfo_[] = {
	{"enclosingContext", "Lcom/sun/tools/javac/comp/Check$CheckContext;", nullptr, 0, $field(Check$NestedCheckContext, enclosingContext)},
	{}
};

$MethodInfo _Check$NestedCheckContext_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check$CheckContext;)V", nullptr, 0, $method(static_cast<void(Check$NestedCheckContext::*)($Check$CheckContext*)>(&Check$NestedCheckContext::init$))},
	{"checkWarner", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/Warner;", nullptr, $PUBLIC},
	{"compatible", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PUBLIC},
	{"deferredAttrContext", "()Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;", nullptr, $PUBLIC},
	{"inferenceContext", "()Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, $PUBLIC},
	{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Check$NestedCheckContext_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Check$NestedCheckContext", "com.sun.tools.javac.comp.Check", "NestedCheckContext", $STATIC},
	{"com.sun.tools.javac.comp.Check$CheckContext", "com.sun.tools.javac.comp.Check", "CheckContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Check$NestedCheckContext_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Check$NestedCheckContext",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Check$CheckContext",
	_Check$NestedCheckContext_FieldInfo_,
	_Check$NestedCheckContext_MethodInfo_,
	nullptr,
	nullptr,
	_Check$NestedCheckContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Check"
};

$Object* allocate$Check$NestedCheckContext($Class* clazz) {
	return $of($alloc(Check$NestedCheckContext));
}

void Check$NestedCheckContext::init$($Check$CheckContext* enclosingContext) {
	$set(this, enclosingContext, enclosingContext);
}

bool Check$NestedCheckContext::compatible($Type* found, $Type* req, $Warner* warn) {
	return $nc(this->enclosingContext)->compatible(found, req, warn);
}

void Check$NestedCheckContext::report($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic* details) {
	$nc(this->enclosingContext)->report(pos, details);
}

$Warner* Check$NestedCheckContext::checkWarner($JCDiagnostic$DiagnosticPosition* pos, $Type* found, $Type* req) {
	return $nc(this->enclosingContext)->checkWarner(pos, found, req);
}

$InferenceContext* Check$NestedCheckContext::inferenceContext() {
	return $nc(this->enclosingContext)->inferenceContext();
}

$DeferredAttr$DeferredAttrContext* Check$NestedCheckContext::deferredAttrContext() {
	return $nc(this->enclosingContext)->deferredAttrContext();
}

Check$NestedCheckContext::Check$NestedCheckContext() {
}

$Class* Check$NestedCheckContext::load$($String* name, bool initialize) {
	$loadClass(Check$NestedCheckContext, name, initialize, &_Check$NestedCheckContext_ClassInfo_, allocate$Check$NestedCheckContext);
	return class$;
}

$Class* Check$NestedCheckContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com