#include <com/sun/tools/javac/comp/Attr$MethodAttrInfo.h>

#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr$CheckMode.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

#undef VAL

using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $Type = ::com::sun::tools::javac::code::Type;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$CheckMode = ::com::sun::tools::javac::comp::Attr$CheckMode;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Attr$MethodAttrInfo_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$MethodAttrInfo, this$0)},
	{}
};

$MethodInfo _Attr$MethodAttrInfo_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$MethodAttrInfo::*)($Attr*)>(&Attr$MethodAttrInfo::init$))},
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/Check$CheckContext;)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$MethodAttrInfo::*)($Attr*,$Check$CheckContext*)>(&Attr$MethodAttrInfo::init$))},
	{"dup", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $PROTECTED},
	{"dup", "(Lcom/sun/tools/javac/comp/Check$CheckContext;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $PROTECTED},
	{"dup", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $PROTECTED},
	{"dup", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;Lcom/sun/tools/javac/comp/Attr$CheckMode;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $PROTECTED},
	{"dup", "(Lcom/sun/tools/javac/comp/Attr$CheckMode;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $PROTECTED},
	{"needsArgumentAttr", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _Attr$MethodAttrInfo_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$MethodAttrInfo", "com.sun.tools.javac.comp.Attr", "MethodAttrInfo", 0},
	{"com.sun.tools.javac.comp.Attr$ResultInfo", "com.sun.tools.javac.comp.Attr", "ResultInfo", 0},
	{}
};

$ClassInfo _Attr$MethodAttrInfo_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Attr$MethodAttrInfo",
	"com.sun.tools.javac.comp.Attr$ResultInfo",
	nullptr,
	_Attr$MethodAttrInfo_FieldInfo_,
	_Attr$MethodAttrInfo_MethodInfo_,
	nullptr,
	nullptr,
	_Attr$MethodAttrInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$MethodAttrInfo($Class* clazz) {
	return $of($alloc(Attr$MethodAttrInfo));
}

void Attr$MethodAttrInfo::init$($Attr* this$0) {
	Attr$MethodAttrInfo::init$(this$0, $nc(this$0->chk)->basicHandler);
}

void Attr$MethodAttrInfo::init$($Attr* this$0, $Check$CheckContext* checkContext) {
	$set(this, this$0, this$0);
	$init($Kinds$KindSelector);
	$init($Infer);
	$Attr$ResultInfo::init$(this$0, $Kinds$KindSelector::VAL, $Infer::anyPoly, checkContext);
}

bool Attr$MethodAttrInfo::needsArgumentAttr($JCTree* tree) {
	return true;
}

$Attr$ResultInfo* Attr$MethodAttrInfo::dup($Type* newPt) {
	$throwNew($IllegalStateException);
	$shouldNotReachHere();
}

$Attr$ResultInfo* Attr$MethodAttrInfo::dup($Check$CheckContext* newContext) {
	return $new(Attr$MethodAttrInfo, this->this$0, newContext);
}

$Attr$ResultInfo* Attr$MethodAttrInfo::dup($Type* newPt, $Check$CheckContext* newContext) {
	$throwNew($IllegalStateException);
	$shouldNotReachHere();
}

$Attr$ResultInfo* Attr$MethodAttrInfo::dup($Type* newPt, $Check$CheckContext* newContext, $Attr$CheckMode* newMode) {
	$throwNew($IllegalStateException);
	$shouldNotReachHere();
}

$Attr$ResultInfo* Attr$MethodAttrInfo::dup($Attr$CheckMode* newMode) {
	$throwNew($IllegalStateException);
	$shouldNotReachHere();
}

Attr$MethodAttrInfo::Attr$MethodAttrInfo() {
}

$Class* Attr$MethodAttrInfo::load$($String* name, bool initialize) {
	$loadClass(Attr$MethodAttrInfo, name, initialize, &_Attr$MethodAttrInfo_ClassInfo_, allocate$Attr$MethodAttrInfo);
	return class$;
}

$Class* Attr$MethodAttrInfo::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com