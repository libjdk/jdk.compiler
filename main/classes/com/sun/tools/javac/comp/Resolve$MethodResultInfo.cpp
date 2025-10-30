#include <com/sun/tools/javac/comp/Resolve$MethodResultInfo.h>

#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <jcpp.h>

#undef DEFERRED
#undef U
#undef VAL

using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$MethodResultInfo_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$MethodResultInfo, this$0)},
	{}
};

$MethodInfo _Resolve$MethodResultInfo_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;)V", nullptr, $PUBLIC, $method(static_cast<void(Resolve$MethodResultInfo::*)($Resolve*,$Type*,$Check$CheckContext*)>(&Resolve$MethodResultInfo::init$))},
	{"U", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Resolve$MethodResultInfo::*)($Type*)>(&Resolve$MethodResultInfo::U))},
	{"check", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PROTECTED},
	{"dup", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/comp/Resolve$MethodResultInfo;", nullptr, $PROTECTED},
	{"dup", "(Lcom/sun/tools/javac/comp/Check$CheckContext;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $PROTECTED},
	{"dup", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _Resolve$MethodResultInfo_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$MethodResultInfo", "com.sun.tools.javac.comp.Resolve", "MethodResultInfo", 0},
	{"com.sun.tools.javac.comp.Attr$ResultInfo", "com.sun.tools.javac.comp.Attr", "ResultInfo", 0},
	{}
};

$ClassInfo _Resolve$MethodResultInfo_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$MethodResultInfo",
	"com.sun.tools.javac.comp.Attr$ResultInfo",
	nullptr,
	_Resolve$MethodResultInfo_FieldInfo_,
	_Resolve$MethodResultInfo_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$MethodResultInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$MethodResultInfo($Class* clazz) {
	return $of($alloc(Resolve$MethodResultInfo));
}

void Resolve$MethodResultInfo::init$($Resolve* this$0, $Type* pt, $Check$CheckContext* checkContext) {
	$set(this, this$0, this$0);
	$init($Kinds$KindSelector);
	$Attr$ResultInfo::init$(static_cast<$Attr*>($nc(this$0->attr)), $Kinds$KindSelector::VAL, pt, checkContext);
}

$Type* Resolve$MethodResultInfo::check($JCDiagnostic$DiagnosticPosition* pos, $Type* found) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if ($nc(found)->hasTag($TypeTag::DEFERRED)) {
		$var($DeferredAttr$DeferredType, dt, $cast($DeferredAttr$DeferredType, found));
		return dt->check(this);
	} else {
		$var($Type, uResult, U(found));
		$var($Type, capturedType, pos == nullptr || $nc(pos)->getTree() == nullptr ? $nc(this->this$0->types)->capture(uResult) : $nc($($nc(this->checkContext)->inferenceContext()))->cachedCapture($($nc(pos)->getTree()), uResult, true));
		return $Attr$ResultInfo::check(pos, $($nc(this->this$0->chk)->checkNonVoid(pos, capturedType)));
	}
}

$Type* Resolve$MethodResultInfo::U($Type* found) {
	return found == this->pt ? found : $nc(this->this$0->types)->cvarUpperBound(found);
}

Resolve$MethodResultInfo* Resolve$MethodResultInfo::dup($Type* newPt) {
	return $new(Resolve$MethodResultInfo, this->this$0, newPt, this->checkContext);
}

$Attr$ResultInfo* Resolve$MethodResultInfo::dup($Check$CheckContext* newContext) {
	return $new(Resolve$MethodResultInfo, this->this$0, this->pt, newContext);
}

$Attr$ResultInfo* Resolve$MethodResultInfo::dup($Type* newPt, $Check$CheckContext* newContext) {
	return $new(Resolve$MethodResultInfo, this->this$0, newPt, newContext);
}

Resolve$MethodResultInfo::Resolve$MethodResultInfo() {
}

$Class* Resolve$MethodResultInfo::load$($String* name, bool initialize) {
	$loadClass(Resolve$MethodResultInfo, name, initialize, &_Resolve$MethodResultInfo_ClassInfo_, allocate$Resolve$MethodResultInfo);
	return class$;
}

$Class* Resolve$MethodResultInfo::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com