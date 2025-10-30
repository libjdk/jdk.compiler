#include <com/sun/tools/javac/comp/DeferredAttr$CheckStuckPolicy$1.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/DeferredAttr$CheckStuckPolicy.h>
#include <com/sun/tools/javac/comp/DeferredAttr$FilterScanner.h>
#include <com/sun/tools/javac/comp/DeferredAttr$LambdaReturnScanner.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $DeferredAttr$CheckStuckPolicy = ::com::sun::tools::javac::comp::DeferredAttr$CheckStuckPolicy;
using $DeferredAttr$FilterScanner = ::com::sun::tools::javac::comp::DeferredAttr$FilterScanner;
using $DeferredAttr$LambdaReturnScanner = ::com::sun::tools::javac::comp::DeferredAttr$LambdaReturnScanner;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
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

$FieldInfo _DeferredAttr$CheckStuckPolicy$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/DeferredAttr$CheckStuckPolicy;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$CheckStuckPolicy$1, this$1)},
	{"val$pt", "Lcom/sun/tools/javac/code/Type;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$CheckStuckPolicy$1, val$pt)},
	{}
};

$MethodInfo _DeferredAttr$CheckStuckPolicy$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr$CheckStuckPolicy;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(static_cast<void(DeferredAttr$CheckStuckPolicy$1::*)($DeferredAttr$CheckStuckPolicy*,$Type*)>(&DeferredAttr$CheckStuckPolicy$1::init$))},
	{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DeferredAttr$CheckStuckPolicy$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy",
	"scanLambdaBody",
	"(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/code/Type;)V"
};

$InnerClassInfo _DeferredAttr$CheckStuckPolicy$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy", "com.sun.tools.javac.comp.DeferredAttr", "CheckStuckPolicy", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.DeferredAttr$LambdaReturnScanner", "com.sun.tools.javac.comp.DeferredAttr", "LambdaReturnScanner", $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCLambda", "com.sun.tools.javac.tree.JCTree", "JCLambda", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DeferredAttr$CheckStuckPolicy$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy$1",
	"com.sun.tools.javac.comp.DeferredAttr$LambdaReturnScanner",
	nullptr,
	_DeferredAttr$CheckStuckPolicy$1_FieldInfo_,
	_DeferredAttr$CheckStuckPolicy$1_MethodInfo_,
	nullptr,
	&_DeferredAttr$CheckStuckPolicy$1_EnclosingMethodInfo_,
	_DeferredAttr$CheckStuckPolicy$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$CheckStuckPolicy$1($Class* clazz) {
	return $of($alloc(DeferredAttr$CheckStuckPolicy$1));
}

void DeferredAttr$CheckStuckPolicy$1::init$($DeferredAttr$CheckStuckPolicy* this$1, $Type* val$pt) {
	$set(this, this$1, this$1);
	$set(this, val$pt, val$pt);
	$DeferredAttr$LambdaReturnScanner::init$();
}

void DeferredAttr$CheckStuckPolicy$1::visitReturn($JCTree$JCReturn* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tree)->expr != nullptr) {
		$var($Type, prevPt, this->this$1->pt);
		{
			$var($Throwable, var$0, nullptr);
			try {
				$set(this->this$1, pt, this->val$pt);
				this->this$1->scan(static_cast<$JCTree*>(tree->expr));
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$set(this->this$1, pt, prevPt);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

DeferredAttr$CheckStuckPolicy$1::DeferredAttr$CheckStuckPolicy$1() {
}

$Class* DeferredAttr$CheckStuckPolicy$1::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$CheckStuckPolicy$1, name, initialize, &_DeferredAttr$CheckStuckPolicy$1_ClassInfo_, allocate$DeferredAttr$CheckStuckPolicy$1);
	return class$;
}

$Class* DeferredAttr$CheckStuckPolicy$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com