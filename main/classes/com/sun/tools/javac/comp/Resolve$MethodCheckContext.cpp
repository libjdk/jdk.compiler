#include <com/sun/tools/javac/comp/Resolve$MethodCheckContext.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableMethodException.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$InapplicableMethodException = ::com::sun::tools::javac::comp::Resolve$InapplicableMethodException;
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

$FieldInfo _Resolve$MethodCheckContext_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$MethodCheckContext, this$0)},
	{"strict", "Z", nullptr, 0, $field(Resolve$MethodCheckContext, strict)},
	{"deferredAttrContext", "Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;", nullptr, 0, $field(Resolve$MethodCheckContext, deferredAttrContext$)},
	{"rsWarner", "Lcom/sun/tools/javac/util/Warner;", nullptr, 0, $field(Resolve$MethodCheckContext, rsWarner)},
	{}
};

$MethodInfo _Resolve$MethodCheckContext_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;ZLcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/Warner;)V", nullptr, $PUBLIC, $method(static_cast<void(Resolve$MethodCheckContext::*)($Resolve*,bool,$DeferredAttr$DeferredAttrContext*,$Warner*)>(&Resolve$MethodCheckContext::init$))},
	{"checkWarner", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/Warner;", nullptr, $PUBLIC},
	{"compatible", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PUBLIC},
	{"deferredAttrContext", "()Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;", nullptr, $PUBLIC},
	{"inferenceContext", "()Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, $PUBLIC},
	{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Resolve$MethodCheckContext_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$MethodCheckContext", "com.sun.tools.javac.comp.Resolve", "MethodCheckContext", $ABSTRACT},
	{"com.sun.tools.javac.comp.Check$CheckContext", "com.sun.tools.javac.comp.Check", "CheckContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Resolve$MethodCheckContext_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.Resolve$MethodCheckContext",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Check$CheckContext",
	_Resolve$MethodCheckContext_FieldInfo_,
	_Resolve$MethodCheckContext_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$MethodCheckContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$MethodCheckContext($Class* clazz) {
	return $of($alloc(Resolve$MethodCheckContext));
}

void Resolve$MethodCheckContext::init$($Resolve* this$0, bool strict, $DeferredAttr$DeferredAttrContext* deferredAttrContext, $Warner* rsWarner) {
	$set(this, this$0, this$0);
	this->strict = strict;
	$set(this, deferredAttrContext$, deferredAttrContext);
	$set(this, rsWarner, rsWarner);
}

bool Resolve$MethodCheckContext::compatible($Type* found, $Type* req, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	$var($InferenceContext, inferenceContext, $nc(this->deferredAttrContext$)->inferenceContext);
	bool var$0 = false;
	if (this->strict) {
		$var($Type, var$1, $nc(inferenceContext)->asUndetVar(found));
		var$0 = $nc(this->this$0->types)->isSubtypeUnchecked(var$1, $(inferenceContext->asUndetVar(req)), warn);
	} else {
		$var($Type, var$2, $nc(inferenceContext)->asUndetVar(found));
		var$0 = $nc(this->this$0->types)->isConvertible(var$2, $(inferenceContext->asUndetVar(req)), warn);
	}
	return var$0;
}

void Resolve$MethodCheckContext::report($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic* details) {
	$throwNew($Resolve$InapplicableMethodException, details);
}

$Warner* Resolve$MethodCheckContext::checkWarner($JCDiagnostic$DiagnosticPosition* pos, $Type* found, $Type* req) {
	return this->rsWarner;
}

$InferenceContext* Resolve$MethodCheckContext::inferenceContext() {
	return $nc(this->deferredAttrContext$)->inferenceContext;
}

$DeferredAttr$DeferredAttrContext* Resolve$MethodCheckContext::deferredAttrContext() {
	return this->deferredAttrContext$;
}

$String* Resolve$MethodCheckContext::toString() {
	return "MethodCheckContext"_s;
}

Resolve$MethodCheckContext::Resolve$MethodCheckContext() {
}

$Class* Resolve$MethodCheckContext::load$($String* name, bool initialize) {
	$loadClass(Resolve$MethodCheckContext, name, initialize, &_Resolve$MethodCheckContext_ClassInfo_, allocate$Resolve$MethodCheckContext);
	return class$;
}

$Class* Resolve$MethodCheckContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com