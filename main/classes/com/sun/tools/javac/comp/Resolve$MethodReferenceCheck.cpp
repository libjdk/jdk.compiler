#include <com/sun/tools/javac/comp/Resolve$MethodReferenceCheck.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$AbstractMethodCheck.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheck.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheckContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodReferenceCheck$1.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResultInfo.h>
#include <com/sun/tools/javac/comp/Resolve$MostSpecificCheck.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$AbstractMethodCheck = ::com::sun::tools::javac::comp::Resolve$AbstractMethodCheck;
using $Resolve$MethodCheck = ::com::sun::tools::javac::comp::Resolve$MethodCheck;
using $Resolve$MethodCheckContext = ::com::sun::tools::javac::comp::Resolve$MethodCheckContext;
using $Resolve$MethodReferenceCheck$1 = ::com::sun::tools::javac::comp::Resolve$MethodReferenceCheck$1;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $Resolve$MethodResultInfo = ::com::sun::tools::javac::comp::Resolve$MethodResultInfo;
using $Resolve$MostSpecificCheck = ::com::sun::tools::javac::comp::Resolve$MostSpecificCheck;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
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

$FieldInfo _Resolve$MethodReferenceCheck_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$MethodReferenceCheck, this$0)},
	{"pendingInferenceContext", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, 0, $field(Resolve$MethodReferenceCheck, pendingInferenceContext)},
	{}
};

$MethodInfo _Resolve$MethodReferenceCheck_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, 0, $method(static_cast<void(Resolve$MethodReferenceCheck::*)($Resolve*,$InferenceContext*)>(&Resolve$MethodReferenceCheck::init$))},
	{"checkArg", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;ZLcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/Warner;)V", nullptr, 0},
	{"methodCheckResult", "(ZLcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/Warner;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $PRIVATE, $method(static_cast<$Attr$ResultInfo*(Resolve$MethodReferenceCheck::*)(bool,$Type*,$DeferredAttr$DeferredAttrContext*,$Warner*)>(&Resolve$MethodReferenceCheck::methodCheckResult))},
	{"mostSpecificCheck", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/comp/Resolve$MethodCheck;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/comp/Resolve$MethodCheck;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Resolve$MethodReferenceCheck_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$MethodReferenceCheck", "com.sun.tools.javac.comp.Resolve", "MethodReferenceCheck", 0},
	{"com.sun.tools.javac.comp.Resolve$AbstractMethodCheck", "com.sun.tools.javac.comp.Resolve", "AbstractMethodCheck", $ABSTRACT},
	{"com.sun.tools.javac.comp.Resolve$MethodReferenceCheck$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Resolve$MethodReferenceCheck_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$MethodReferenceCheck",
	"com.sun.tools.javac.comp.Resolve$AbstractMethodCheck",
	nullptr,
	_Resolve$MethodReferenceCheck_FieldInfo_,
	_Resolve$MethodReferenceCheck_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$MethodReferenceCheck_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$MethodReferenceCheck($Class* clazz) {
	return $of($alloc(Resolve$MethodReferenceCheck));
}

void Resolve$MethodReferenceCheck::init$($Resolve* this$0, $InferenceContext* pendingInferenceContext) {
	$set(this, this$0, this$0);
	$Resolve$AbstractMethodCheck::init$(this$0);
	$set(this, pendingInferenceContext, pendingInferenceContext);
}

void Resolve$MethodReferenceCheck::checkArg($JCDiagnostic$DiagnosticPosition* pos, bool varargs, $Type* actual, $Type* formal, $DeferredAttr$DeferredAttrContext* deferredAttrContext, $Warner* warn) {
	$var($Attr$ResultInfo, mresult, methodCheckResult(varargs, formal, deferredAttrContext, warn));
	$nc(mresult)->check(pos, actual);
}

$Attr$ResultInfo* Resolve$MethodReferenceCheck::methodCheckResult(bool varargsCheck, $Type* to, $DeferredAttr$DeferredAttrContext* deferredAttrContext, $Warner* rsWarner) {
	$var($Check$CheckContext, checkContext, $new($Resolve$MethodReferenceCheck$1, this, !$nc(deferredAttrContext)->phase->isBoxingRequired(), deferredAttrContext, rsWarner, varargsCheck));
	return $new($Resolve$MethodResultInfo, this->this$0, to, checkContext);
}

$Resolve$MethodCheck* Resolve$MethodReferenceCheck::mostSpecificCheck($List* actuals) {
	return $new($Resolve$MostSpecificCheck, this->this$0, actuals);
}

$String* Resolve$MethodReferenceCheck::toString() {
	return "MethodReferenceCheck"_s;
}

Resolve$MethodReferenceCheck::Resolve$MethodReferenceCheck() {
}

$Class* Resolve$MethodReferenceCheck::load$($String* name, bool initialize) {
	$loadClass(Resolve$MethodReferenceCheck, name, initialize, &_Resolve$MethodReferenceCheck_ClassInfo_, allocate$Resolve$MethodReferenceCheck);
	return class$;
}

$Class* Resolve$MethodReferenceCheck::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com