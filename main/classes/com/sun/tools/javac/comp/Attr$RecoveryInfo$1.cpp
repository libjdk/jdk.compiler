#include <com/sun/tools/javac/comp/Attr$RecoveryInfo$1.h>

#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr$RecoveryInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$RecoveryInfo = ::com::sun::tools::javac::comp::Attr$RecoveryInfo;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $Check$NestedCheckContext = ::com::sun::tools::javac::comp::Check$NestedCheckContext;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Attr$RecoveryInfo$1_FieldInfo_[] = {
	{"val$pt", "Lcom/sun/tools/javac/code/Type;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$RecoveryInfo$1, val$pt)},
	{"val$deferredAttrContext", "Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$RecoveryInfo$1, val$deferredAttrContext)},
	{"val$this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$RecoveryInfo$1, val$this$0)},
	{}
};

$MethodInfo _Attr$RecoveryInfo$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check$CheckContext;Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(static_cast<void(Attr$RecoveryInfo$1::*)($Check$CheckContext*,$Attr*,$DeferredAttr$DeferredAttrContext*,$Type*)>(&Attr$RecoveryInfo$1::init$))},
	{"compatible", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PUBLIC},
	{"deferredAttrContext", "()Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;", nullptr, $PUBLIC},
	{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Attr$RecoveryInfo$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Attr$RecoveryInfo",
	"<init>",
	"(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/code/Type;)V"
};

$InnerClassInfo _Attr$RecoveryInfo$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$RecoveryInfo", "com.sun.tools.javac.comp.Attr", "RecoveryInfo", 0},
	{"com.sun.tools.javac.comp.Attr$RecoveryInfo$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Check$NestedCheckContext", "com.sun.tools.javac.comp.Check", "NestedCheckContext", $STATIC},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext", "com.sun.tools.javac.comp.DeferredAttr", "DeferredAttrContext", 0},
	{}
};

$ClassInfo _Attr$RecoveryInfo$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Attr$RecoveryInfo$1",
	"com.sun.tools.javac.comp.Check$NestedCheckContext",
	nullptr,
	_Attr$RecoveryInfo$1_FieldInfo_,
	_Attr$RecoveryInfo$1_MethodInfo_,
	nullptr,
	&_Attr$RecoveryInfo$1_EnclosingMethodInfo_,
	_Attr$RecoveryInfo$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$RecoveryInfo$1($Class* clazz) {
	return $of($alloc(Attr$RecoveryInfo$1));
}

void Attr$RecoveryInfo$1::init$($Check$CheckContext* enclosingContext, $Attr* val$this$0, $DeferredAttr$DeferredAttrContext* val$deferredAttrContext, $Type* val$pt) {
	$set(this, val$this$0, val$this$0);
	$set(this, val$deferredAttrContext, val$deferredAttrContext);
	$set(this, val$pt, val$pt);
	$Check$NestedCheckContext::init$(enclosingContext);
}

$DeferredAttr$DeferredAttrContext* Attr$RecoveryInfo$1::deferredAttrContext() {
	return this->val$deferredAttrContext;
}

bool Attr$RecoveryInfo$1::compatible($Type* found, $Type* req, $Warner* warn) {
	return true;
}

void Attr$RecoveryInfo$1::report($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic* details) {
	$init($Type);
	if ($equals(this->val$pt, $Type::recoveryType)) {
		$nc($nc($nc(this->val$this$0)->chk)->basicHandler)->report(pos, details);
	}
}

Attr$RecoveryInfo$1::Attr$RecoveryInfo$1() {
}

$Class* Attr$RecoveryInfo$1::load$($String* name, bool initialize) {
	$loadClass(Attr$RecoveryInfo$1, name, initialize, &_Attr$RecoveryInfo$1_ClassInfo_, allocate$Attr$RecoveryInfo$1);
	return class$;
}

$Class* Attr$RecoveryInfo$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com