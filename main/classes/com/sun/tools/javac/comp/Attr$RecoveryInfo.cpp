#include <com/sun/tools/javac/comp/Attr$RecoveryInfo.h>

#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr$RecoveryInfo$1.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <jcpp.h>

#undef VAL

using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$RecoveryInfo$1 = ::com::sun::tools::javac::comp::Attr$RecoveryInfo$1;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $Check$NestedCheckContext = ::com::sun::tools::javac::comp::Check$NestedCheckContext;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Attr$RecoveryInfo_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$RecoveryInfo, this$0)},
	{}
};

$MethodInfo _Attr$RecoveryInfo_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$RecoveryInfo::*)($Attr*,$DeferredAttr$DeferredAttrContext*)>(&Attr$RecoveryInfo::init$))},
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$RecoveryInfo::*)($Attr*,$DeferredAttr$DeferredAttrContext*,$Type*)>(&Attr$RecoveryInfo::init$))},
	{}
};

$InnerClassInfo _Attr$RecoveryInfo_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$RecoveryInfo", "com.sun.tools.javac.comp.Attr", "RecoveryInfo", 0},
	{"com.sun.tools.javac.comp.Attr$ResultInfo", "com.sun.tools.javac.comp.Attr", "ResultInfo", 0},
	{"com.sun.tools.javac.comp.Attr$RecoveryInfo$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Attr$RecoveryInfo_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Attr$RecoveryInfo",
	"com.sun.tools.javac.comp.Attr$ResultInfo",
	nullptr,
	_Attr$RecoveryInfo_FieldInfo_,
	_Attr$RecoveryInfo_MethodInfo_,
	nullptr,
	nullptr,
	_Attr$RecoveryInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$RecoveryInfo($Class* clazz) {
	return $of($alloc(Attr$RecoveryInfo));
}

void Attr$RecoveryInfo::init$($Attr* this$0, $DeferredAttr$DeferredAttrContext* deferredAttrContext) {
	$init($Type);
	Attr$RecoveryInfo::init$(this$0, deferredAttrContext, $Type::recoveryType);
}

void Attr$RecoveryInfo::init$($Attr* this$0, $DeferredAttr$DeferredAttrContext* deferredAttrContext, $Type* pt) {
	$set(this, this$0, this$0);
	$init($Kinds$KindSelector);
	$Attr$ResultInfo::init$(this$0, $Kinds$KindSelector::VAL, pt, static_cast<$Check$CheckContext*>($$new($Attr$RecoveryInfo$1, $nc(this$0->chk)->basicHandler, this$0, deferredAttrContext, pt)));
}

Attr$RecoveryInfo::Attr$RecoveryInfo() {
}

$Class* Attr$RecoveryInfo::load$($String* name, bool initialize) {
	$loadClass(Attr$RecoveryInfo, name, initialize, &_Attr$RecoveryInfo_ClassInfo_, allocate$Attr$RecoveryInfo);
	return class$;
}

$Class* Attr$RecoveryInfo::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com