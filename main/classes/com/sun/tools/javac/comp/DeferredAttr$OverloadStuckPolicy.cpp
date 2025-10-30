#include <com/sun/tools/javac/comp/DeferredAttr$OverloadStuckPolicy.h>

#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/DeferredAttr$CheckStuckPolicy.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <jcpp.h>

#undef IMPLICIT
#undef UNOVERLOADED

using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$CheckStuckPolicy = ::com::sun::tools::javac::comp::DeferredAttr$CheckStuckPolicy;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCLambda$ParameterKind = ::com::sun::tools::javac::tree::JCTree$JCLambda$ParameterKind;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMemberReference$OverloadKind = ::com::sun::tools::javac::tree::JCTree$JCMemberReference$OverloadKind;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _DeferredAttr$OverloadStuckPolicy_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$OverloadStuckPolicy, this$0)},
	{"stuck", "Z", nullptr, 0, $field(DeferredAttr$OverloadStuckPolicy, stuck)},
	{}
};

$MethodInfo _DeferredAttr$OverloadStuckPolicy_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;)V", nullptr, $PUBLIC, $method(static_cast<void(DeferredAttr$OverloadStuckPolicy::*)($DeferredAttr*,$Attr$ResultInfo*,$DeferredAttr$DeferredType*)>(&DeferredAttr$OverloadStuckPolicy::init$))},
	{"isStuck", "()Z", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DeferredAttr$OverloadStuckPolicy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$OverloadStuckPolicy", "com.sun.tools.javac.comp.DeferredAttr", "OverloadStuckPolicy", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy", "com.sun.tools.javac.comp.DeferredAttr", "CheckStuckPolicy", 0},
	{}
};

$ClassInfo _DeferredAttr$OverloadStuckPolicy_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$OverloadStuckPolicy",
	"com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy",
	nullptr,
	_DeferredAttr$OverloadStuckPolicy_FieldInfo_,
	_DeferredAttr$OverloadStuckPolicy_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredAttr$OverloadStuckPolicy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$OverloadStuckPolicy($Class* clazz) {
	return $of($alloc(DeferredAttr$OverloadStuckPolicy));
}

bool DeferredAttr$OverloadStuckPolicy::isStuck() {
	return $DeferredAttr$CheckStuckPolicy::isStuck() || this->stuck;
}

void DeferredAttr$OverloadStuckPolicy::init$($DeferredAttr* this$0, $Attr$ResultInfo* resultInfo, $DeferredAttr$DeferredType* dt) {
	$set(this, this$0, this$0);
	$DeferredAttr$CheckStuckPolicy::init$(this$0, resultInfo, dt);
}

void DeferredAttr$OverloadStuckPolicy::visitLambda($JCTree$JCLambda* tree) {
	$DeferredAttr$CheckStuckPolicy::visitLambda(tree);
	$init($JCTree$JCLambda$ParameterKind);
	if ($nc(tree)->paramKind == $JCTree$JCLambda$ParameterKind::IMPLICIT) {
		this->stuck = true;
	}
}

void DeferredAttr$OverloadStuckPolicy::visitReference($JCTree$JCMemberReference* tree) {
	$DeferredAttr$CheckStuckPolicy::visitReference(tree);
	$init($JCTree$JCMemberReference$OverloadKind);
	if ($nc(tree)->getOverloadKind() != $JCTree$JCMemberReference$OverloadKind::UNOVERLOADED) {
		this->stuck = true;
	}
}

DeferredAttr$OverloadStuckPolicy::DeferredAttr$OverloadStuckPolicy() {
}

$Class* DeferredAttr$OverloadStuckPolicy::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$OverloadStuckPolicy, name, initialize, &_DeferredAttr$OverloadStuckPolicy_ClassInfo_, allocate$DeferredAttr$OverloadStuckPolicy);
	return class$;
}

$Class* DeferredAttr$OverloadStuckPolicy::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com