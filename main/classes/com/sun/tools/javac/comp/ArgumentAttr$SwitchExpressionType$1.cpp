#include <com/sun/tools/javac/comp/ArgumentAttr$SwitchExpressionType$1.h>

#include <com/sun/tools/javac/comp/ArgumentAttr$SwitchExpressionType.h>
#include <com/sun/tools/javac/comp/DeferredAttr$SwitchExpressionScanner.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <jcpp.h>

using $ArgumentAttr$ArgumentType = ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType;
using $ArgumentAttr$SwitchExpressionType = ::com::sun::tools::javac::comp::ArgumentAttr$SwitchExpressionType;
using $DeferredAttr$SwitchExpressionScanner = ::com::sun::tools::javac::comp::DeferredAttr$SwitchExpressionScanner;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
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

$FieldInfo _ArgumentAttr$SwitchExpressionType$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/ArgumentAttr$SwitchExpressionType;", nullptr, $FINAL | $SYNTHETIC, $field(ArgumentAttr$SwitchExpressionType$1, this$1)},
	{"val$buf", "Lcom/sun/tools/javac/util/ListBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(ArgumentAttr$SwitchExpressionType$1, val$buf)},
	{}
};

$MethodInfo _ArgumentAttr$SwitchExpressionType$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr$SwitchExpressionType;Lcom/sun/tools/javac/util/ListBuffer;)V", nullptr, 0, $method(static_cast<void(ArgumentAttr$SwitchExpressionType$1::*)($ArgumentAttr$SwitchExpressionType*,$ListBuffer*)>(&ArgumentAttr$SwitchExpressionType$1::init$))},
	{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ArgumentAttr$SwitchExpressionType$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.ArgumentAttr$SwitchExpressionType",
	"yieldExpressions",
	"()Lcom/sun/tools/javac/util/List;"
};

$InnerClassInfo _ArgumentAttr$SwitchExpressionType$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.ArgumentAttr$SwitchExpressionType", "com.sun.tools.javac.comp.ArgumentAttr", "SwitchExpressionType", 0},
	{"com.sun.tools.javac.comp.ArgumentAttr$SwitchExpressionType$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.DeferredAttr$SwitchExpressionScanner", "com.sun.tools.javac.comp.DeferredAttr", "SwitchExpressionScanner", $STATIC},
	{}
};

$ClassInfo _ArgumentAttr$SwitchExpressionType$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.ArgumentAttr$SwitchExpressionType$1",
	"com.sun.tools.javac.comp.DeferredAttr$SwitchExpressionScanner",
	nullptr,
	_ArgumentAttr$SwitchExpressionType$1_FieldInfo_,
	_ArgumentAttr$SwitchExpressionType$1_MethodInfo_,
	nullptr,
	&_ArgumentAttr$SwitchExpressionType$1_EnclosingMethodInfo_,
	_ArgumentAttr$SwitchExpressionType$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.ArgumentAttr"
};

$Object* allocate$ArgumentAttr$SwitchExpressionType$1($Class* clazz) {
	return $of($alloc(ArgumentAttr$SwitchExpressionType$1));
}

void ArgumentAttr$SwitchExpressionType$1::init$($ArgumentAttr$SwitchExpressionType* this$1, $ListBuffer* val$buf) {
	$set(this, this$1, this$1);
	$set(this, val$buf, val$buf);
	$DeferredAttr$SwitchExpressionScanner::init$();
}

void ArgumentAttr$SwitchExpressionType$1::visitYield($JCTree$JCYield* tree) {
	if ($equals($nc(tree)->target, this->this$1->speculativeTree$)) {
		$nc(this->val$buf)->add(tree);
	}
	$DeferredAttr$SwitchExpressionScanner::visitYield(tree);
}

ArgumentAttr$SwitchExpressionType$1::ArgumentAttr$SwitchExpressionType$1() {
}

$Class* ArgumentAttr$SwitchExpressionType$1::load$($String* name, bool initialize) {
	$loadClass(ArgumentAttr$SwitchExpressionType$1, name, initialize, &_ArgumentAttr$SwitchExpressionType$1_ClassInfo_, allocate$ArgumentAttr$SwitchExpressionType$1);
	return class$;
}

$Class* ArgumentAttr$SwitchExpressionType$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com