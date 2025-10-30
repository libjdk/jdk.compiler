#include <com/sun/tools/javac/comp/Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1.h>

#include <com/sun/tools/javac/comp/DeferredAttr$LambdaReturnScanner.h>
#include <com/sun/tools/javac/comp/Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <jcpp.h>

using $DeferredAttr$LambdaReturnScanner = ::com::sun::tools::javac::comp::DeferredAttr$LambdaReturnScanner;
using $Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker = ::com::sun::tools::javac::comp::Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
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

$FieldInfo _Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1_FieldInfo_[] = {
	{"this$3", "Lcom/sun/tools/javac/comp/Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1, this$3)},
	{"val$buffer", "Lcom/sun/tools/javac/util/ListBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1, val$buffer)},
	{}
};

$MethodInfo _Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker;Lcom/sun/tools/javac/util/ListBuffer;)V", nullptr, 0, $method(static_cast<void(Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1::*)($Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker*,$ListBuffer*)>(&Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1::init$))},
	{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker",
	"lambdaResults",
	"(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)Lcom/sun/tools/javac/util/List;"
};

$InnerClassInfo _Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$MostSpecificCheck", "com.sun.tools.javac.comp.Resolve", "MostSpecificCheck", 0},
	{"com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext", "com.sun.tools.javac.comp.Resolve$MostSpecificCheck", "MostSpecificCheckContext", 0},
	{"com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker", "com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext", "MostSpecificFunctionReturnChecker", 0},
	{"com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.DeferredAttr$LambdaReturnScanner", "com.sun.tools.javac.comp.DeferredAttr", "LambdaReturnScanner", $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCLambda", "com.sun.tools.javac.tree.JCTree", "JCLambda", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1",
	"com.sun.tools.javac.comp.DeferredAttr$LambdaReturnScanner",
	nullptr,
	_Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1_FieldInfo_,
	_Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1_MethodInfo_,
	nullptr,
	&_Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1_EnclosingMethodInfo_,
	_Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1($Class* clazz) {
	return $of($alloc(Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1));
}

void Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1::init$($Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker* this$3, $ListBuffer* val$buffer) {
	$set(this, this$3, this$3);
	$set(this, val$buffer, val$buffer);
	$DeferredAttr$LambdaReturnScanner::init$();
}

void Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1::visitReturn($JCTree$JCReturn* tree) {
	if ($nc(tree)->expr != nullptr) {
		$nc(this->val$buffer)->append($(this->this$3->asExpr(tree->expr)));
	}
}

Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1::Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1() {
}

$Class* Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1::load$($String* name, bool initialize) {
	$loadClass(Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1, name, initialize, &_Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1_ClassInfo_, allocate$Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1);
	return class$;
}

$Class* Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com