#include <com/sun/tools/javac/comp/DeferredAttr$CheckStuckPolicy$2.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/DeferredAttr$CheckStuckPolicy.h>
#include <com/sun/tools/javac/comp/DeferredAttr$FilterScanner.h>
#include <com/sun/tools/javac/comp/DeferredAttr$SwitchExpressionScanner.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $DeferredAttr$CheckStuckPolicy = ::com::sun::tools::javac::comp::DeferredAttr$CheckStuckPolicy;
using $DeferredAttr$FilterScanner = ::com::sun::tools::javac::comp::DeferredAttr$FilterScanner;
using $DeferredAttr$SwitchExpressionScanner = ::com::sun::tools::javac::comp::DeferredAttr$SwitchExpressionScanner;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
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

$FieldInfo _DeferredAttr$CheckStuckPolicy$2_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/DeferredAttr$CheckStuckPolicy;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$CheckStuckPolicy$2, this$1)},
	{}
};

$MethodInfo _DeferredAttr$CheckStuckPolicy$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr$CheckStuckPolicy;)V", nullptr, 0, $method(static_cast<void(DeferredAttr$CheckStuckPolicy$2::*)($DeferredAttr$CheckStuckPolicy*)>(&DeferredAttr$CheckStuckPolicy$2::init$))},
	{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DeferredAttr$CheckStuckPolicy$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy",
	"visitSwitchExpression",
	"(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V"
};

$InnerClassInfo _DeferredAttr$CheckStuckPolicy$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy", "com.sun.tools.javac.comp.DeferredAttr", "CheckStuckPolicy", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.DeferredAttr$SwitchExpressionScanner", "com.sun.tools.javac.comp.DeferredAttr", "SwitchExpressionScanner", $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCSwitchExpression", "com.sun.tools.javac.tree.JCTree", "JCSwitchExpression", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DeferredAttr$CheckStuckPolicy$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy$2",
	"com.sun.tools.javac.comp.DeferredAttr$SwitchExpressionScanner",
	nullptr,
	_DeferredAttr$CheckStuckPolicy$2_FieldInfo_,
	_DeferredAttr$CheckStuckPolicy$2_MethodInfo_,
	nullptr,
	&_DeferredAttr$CheckStuckPolicy$2_EnclosingMethodInfo_,
	_DeferredAttr$CheckStuckPolicy$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$CheckStuckPolicy$2($Class* clazz) {
	return $of($alloc(DeferredAttr$CheckStuckPolicy$2));
}

void DeferredAttr$CheckStuckPolicy$2::init$($DeferredAttr$CheckStuckPolicy* this$1) {
	$set(this, this$1, this$1);
	$DeferredAttr$SwitchExpressionScanner::init$();
}

void DeferredAttr$CheckStuckPolicy$2::visitYield($JCTree$JCYield* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, prevPt, this->this$1->pt);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this->this$1, pt, this->this$1->pt);
			this->this$1->scan(static_cast<$JCTree*>($nc(tree)->value));
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

DeferredAttr$CheckStuckPolicy$2::DeferredAttr$CheckStuckPolicy$2() {
}

$Class* DeferredAttr$CheckStuckPolicy$2::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$CheckStuckPolicy$2, name, initialize, &_DeferredAttr$CheckStuckPolicy$2_ClassInfo_, allocate$DeferredAttr$CheckStuckPolicy$2);
	return class$;
}

$Class* DeferredAttr$CheckStuckPolicy$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com