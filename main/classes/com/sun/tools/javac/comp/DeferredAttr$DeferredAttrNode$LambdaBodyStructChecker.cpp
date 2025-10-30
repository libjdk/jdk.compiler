#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker.h>

#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <jcpp.h>

using $DeferredAttr$DeferredAttrNode = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker, this$1)},
	{"isVoidCompatible", "Z", nullptr, 0, $field(DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker, isVoidCompatible)},
	{"isPotentiallyValueCompatible", "Z", nullptr, 0, $field(DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker, isPotentiallyValueCompatible)},
	{}
};

$MethodInfo _DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode;)V", nullptr, 0, $method(static_cast<void(DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker::*)($DeferredAttr$DeferredAttrNode*)>(&DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker::init$))},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode", "com.sun.tools.javac.comp.DeferredAttr", "DeferredAttrNode", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker", "com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode", "LambdaBodyStructChecker", 0},
	{}
};

$ClassInfo _DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker_FieldInfo_,
	_DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker($Class* clazz) {
	return $of($alloc(DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker));
}

void DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker::init$($DeferredAttr$DeferredAttrNode* this$1) {
	$set(this, this$1, this$1);
	$TreeScanner::init$();
	this->isVoidCompatible = true;
	this->isPotentiallyValueCompatible = true;
}

void DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker::visitClassDef($JCTree$JCClassDecl* tree) {
}

void DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker::visitLambda($JCTree$JCLambda* tree) {
}

void DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker::visitNewClass($JCTree$JCNewClass* tree) {
}

void DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker::visitReturn($JCTree$JCReturn* tree) {
	if ($nc(tree)->expr != nullptr) {
		this->isVoidCompatible = false;
	} else {
		this->isPotentiallyValueCompatible = false;
	}
}

DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker::DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker() {
}

$Class* DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker, name, initialize, &_DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker_ClassInfo_, allocate$DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker);
	return class$;
}

$Class* DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com