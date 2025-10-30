#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>

#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr$CheckMode.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <jcpp.h>

#undef NORMAL

using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $Type = ::com::sun::tools::javac::code::Type;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$CheckMode = ::com::sun::tools::javac::comp::Attr$CheckMode;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
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

$FieldInfo _Attr$ResultInfo_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$ResultInfo, this$0)},
	{"pkind", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $FINAL, $field(Attr$ResultInfo, pkind)},
	{"pt", "Lcom/sun/tools/javac/code/Type;", nullptr, $FINAL, $field(Attr$ResultInfo, pt)},
	{"checkContext", "Lcom/sun/tools/javac/comp/Check$CheckContext;", nullptr, $FINAL, $field(Attr$ResultInfo, checkContext)},
	{"checkMode", "Lcom/sun/tools/javac/comp/Attr$CheckMode;", nullptr, $FINAL, $field(Attr$ResultInfo, checkMode)},
	{}
};

$MethodInfo _Attr$ResultInfo_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/code/Kinds$KindSelector;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(static_cast<void(Attr$ResultInfo::*)($Attr*,$Kinds$KindSelector*,$Type*)>(&Attr$ResultInfo::init$))},
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/code/Kinds$KindSelector;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Attr$CheckMode;)V", nullptr, 0, $method(static_cast<void(Attr$ResultInfo::*)($Attr*,$Kinds$KindSelector*,$Type*,$Attr$CheckMode*)>(&Attr$ResultInfo::init$))},
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/code/Kinds$KindSelector;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;)V", nullptr, $PROTECTED, $method(static_cast<void(Attr$ResultInfo::*)($Attr*,$Kinds$KindSelector*,$Type*,$Check$CheckContext*)>(&Attr$ResultInfo::init$))},
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/code/Kinds$KindSelector;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;Lcom/sun/tools/javac/comp/Attr$CheckMode;)V", nullptr, $PROTECTED, $method(static_cast<void(Attr$ResultInfo::*)($Attr*,$Kinds$KindSelector*,$Type*,$Check$CheckContext*,$Attr$CheckMode*)>(&Attr$ResultInfo::init$))},
	{"check", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PROTECTED},
	{"dup", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $PROTECTED},
	{"dup", "(Lcom/sun/tools/javac/comp/Check$CheckContext;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $PROTECTED},
	{"dup", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $PROTECTED},
	{"dup", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;Lcom/sun/tools/javac/comp/Attr$CheckMode;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $PROTECTED},
	{"dup", "(Lcom/sun/tools/javac/comp/Attr$CheckMode;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $PROTECTED},
	{"needsArgumentAttr", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PROTECTED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Attr$ResultInfo_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$ResultInfo", "com.sun.tools.javac.comp.Attr", "ResultInfo", 0},
	{}
};

$ClassInfo _Attr$ResultInfo_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Attr$ResultInfo",
	"java.lang.Object",
	nullptr,
	_Attr$ResultInfo_FieldInfo_,
	_Attr$ResultInfo_MethodInfo_,
	nullptr,
	nullptr,
	_Attr$ResultInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$ResultInfo($Class* clazz) {
	return $of($alloc(Attr$ResultInfo));
}

void Attr$ResultInfo::init$($Attr* this$0, $Kinds$KindSelector* pkind, $Type* pt) {
	$init($Attr$CheckMode);
	Attr$ResultInfo::init$(this$0, pkind, pt, $nc(this$0->chk)->basicHandler, $Attr$CheckMode::NORMAL);
}

void Attr$ResultInfo::init$($Attr* this$0, $Kinds$KindSelector* pkind, $Type* pt, $Attr$CheckMode* checkMode) {
	Attr$ResultInfo::init$(this$0, pkind, pt, $nc(this$0->chk)->basicHandler, checkMode);
}

void Attr$ResultInfo::init$($Attr* this$0, $Kinds$KindSelector* pkind, $Type* pt, $Check$CheckContext* checkContext) {
	$init($Attr$CheckMode);
	Attr$ResultInfo::init$(this$0, pkind, pt, checkContext, $Attr$CheckMode::NORMAL);
}

void Attr$ResultInfo::init$($Attr* this$0, $Kinds$KindSelector* pkind, $Type* pt, $Check$CheckContext* checkContext, $Attr$CheckMode* checkMode) {
	$set(this, this$0, this$0);
	$set(this, pkind, pkind);
	$set(this, pt, pt);
	$set(this, checkContext, checkContext);
	$set(this, checkMode, checkMode);
}

bool Attr$ResultInfo::needsArgumentAttr($JCTree* tree) {
	return false;
}

$Type* Attr$ResultInfo::check($JCDiagnostic$DiagnosticPosition* pos, $Type* found) {
	return $nc(this->this$0->chk)->checkType(pos, found, this->pt, this->checkContext);
}

Attr$ResultInfo* Attr$ResultInfo::dup($Type* newPt) {
	return $new(Attr$ResultInfo, this->this$0, this->pkind, newPt, this->checkContext, this->checkMode);
}

Attr$ResultInfo* Attr$ResultInfo::dup($Check$CheckContext* newContext) {
	return $new(Attr$ResultInfo, this->this$0, this->pkind, this->pt, newContext, this->checkMode);
}

Attr$ResultInfo* Attr$ResultInfo::dup($Type* newPt, $Check$CheckContext* newContext) {
	return $new(Attr$ResultInfo, this->this$0, this->pkind, newPt, newContext, this->checkMode);
}

Attr$ResultInfo* Attr$ResultInfo::dup($Type* newPt, $Check$CheckContext* newContext, $Attr$CheckMode* newMode) {
	return $new(Attr$ResultInfo, this->this$0, this->pkind, newPt, newContext, newMode);
}

Attr$ResultInfo* Attr$ResultInfo::dup($Attr$CheckMode* newMode) {
	return $new(Attr$ResultInfo, this->this$0, this->pkind, this->pt, this->checkContext, newMode);
}

$String* Attr$ResultInfo::toString() {
	if (this->pt != nullptr) {
		return $nc(this->pt)->toString();
	} else {
		return ""_s;
	}
}

Attr$ResultInfo::Attr$ResultInfo() {
}

$Class* Attr$ResultInfo::load$($String* name, bool initialize) {
	$loadClass(Attr$ResultInfo, name, initialize, &_Attr$ResultInfo_ClassInfo_, allocate$Attr$ResultInfo);
	return class$;
}

$Class* Attr$ResultInfo::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com