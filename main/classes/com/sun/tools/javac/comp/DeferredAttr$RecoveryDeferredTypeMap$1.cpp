#include <com/sun/tools/javac/comp/DeferredAttr$RecoveryDeferredTypeMap$1.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr$RecoveryInfo.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$RecoveryDeferredTypeMap.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$RecoveryInfo = ::com::sun::tools::javac::comp::Attr$RecoveryInfo;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Check = ::com::sun::tools::javac::comp::Check;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$RecoveryDeferredTypeMap = ::com::sun::tools::javac::comp::DeferredAttr$RecoveryDeferredTypeMap;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
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

$FieldInfo _DeferredAttr$RecoveryDeferredTypeMap$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/DeferredAttr$RecoveryDeferredTypeMap;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$RecoveryDeferredTypeMap$1, this$1)},
	{}
};

$MethodInfo _DeferredAttr$RecoveryDeferredTypeMap$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr$RecoveryDeferredTypeMap;Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(static_cast<void(DeferredAttr$RecoveryDeferredTypeMap$1::*)($DeferredAttr$RecoveryDeferredTypeMap*,$Attr*,$DeferredAttr$DeferredAttrContext*,$Type*)>(&DeferredAttr$RecoveryDeferredTypeMap$1::init$))},
	{"check", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _DeferredAttr$RecoveryDeferredTypeMap$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap",
	"recover",
	"(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;"
};

$InnerClassInfo _DeferredAttr$RecoveryDeferredTypeMap$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap", "com.sun.tools.javac.comp.DeferredAttr", "RecoveryDeferredTypeMap", $PUBLIC},
	{"com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Attr$RecoveryInfo", "com.sun.tools.javac.comp.Attr", "RecoveryInfo", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredType", "com.sun.tools.javac.comp.DeferredAttr", "DeferredType", $PUBLIC},
	{}
};

$ClassInfo _DeferredAttr$RecoveryDeferredTypeMap$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap$1",
	"com.sun.tools.javac.comp.Attr$RecoveryInfo",
	nullptr,
	_DeferredAttr$RecoveryDeferredTypeMap$1_FieldInfo_,
	_DeferredAttr$RecoveryDeferredTypeMap$1_MethodInfo_,
	nullptr,
	&_DeferredAttr$RecoveryDeferredTypeMap$1_EnclosingMethodInfo_,
	_DeferredAttr$RecoveryDeferredTypeMap$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$RecoveryDeferredTypeMap$1($Class* clazz) {
	return $of($alloc(DeferredAttr$RecoveryDeferredTypeMap$1));
}

void DeferredAttr$RecoveryDeferredTypeMap$1::init$($DeferredAttr$RecoveryDeferredTypeMap* this$1, $Attr* x0, $DeferredAttr$DeferredAttrContext* deferredAttrContext, $Type* pt) {
	$set(this, this$1, this$1);
	$Attr$RecoveryInfo::init$(static_cast<$Attr*>($nc(x0)), deferredAttrContext, pt);
}

$Type* DeferredAttr$RecoveryDeferredTypeMap$1::check($JCDiagnostic$DiagnosticPosition* pos, $Type* found) {
	return $nc($nc(this->this$1->this$0)->chk)->checkNonVoid(pos, $($Attr$RecoveryInfo::check(pos, found)));
}

DeferredAttr$RecoveryDeferredTypeMap$1::DeferredAttr$RecoveryDeferredTypeMap$1() {
}

$Class* DeferredAttr$RecoveryDeferredTypeMap$1::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$RecoveryDeferredTypeMap$1, name, initialize, &_DeferredAttr$RecoveryDeferredTypeMap$1_ClassInfo_, allocate$DeferredAttr$RecoveryDeferredTypeMap$1);
	return class$;
}

$Class* DeferredAttr$RecoveryDeferredTypeMap$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com