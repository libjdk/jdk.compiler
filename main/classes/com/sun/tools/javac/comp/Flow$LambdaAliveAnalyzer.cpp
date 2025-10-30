#include <com/sun/tools/javac/comp/Flow$LambdaAliveAnalyzer.h>

#include <com/sun/source/tree/LambdaExpressionTree$BodyKind.h>
#include <com/sun/tools/javac/comp/Flow$AliveAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$PendingExit.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef EXPRESSION

using $LambdaExpressionTree$BodyKind = ::com::sun::source::tree::LambdaExpressionTree$BodyKind;
using $Flow = ::com::sun::tools::javac::comp::Flow;
using $Flow$AliveAnalyzer = ::com::sun::tools::javac::comp::Flow$AliveAnalyzer;
using $Flow$BaseAnalyzer = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer;
using $Flow$BaseAnalyzer$PendingExit = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$PendingExit;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Flow$LambdaAliveAnalyzer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Flow;", nullptr, $FINAL | $SYNTHETIC, $field(Flow$LambdaAliveAnalyzer, this$0)},
	{"inLambda", "Z", nullptr, 0, $field(Flow$LambdaAliveAnalyzer, inLambda)},
	{}
};

$MethodInfo _Flow$LambdaAliveAnalyzer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Flow;)V", nullptr, 0, $method(static_cast<void(Flow$LambdaAliveAnalyzer::*)($Flow*)>(&Flow$LambdaAliveAnalyzer::init$))},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Flow$LambdaAliveAnalyzer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Flow$LambdaAliveAnalyzer", "com.sun.tools.javac.comp.Flow", "LambdaAliveAnalyzer", 0},
	{"com.sun.tools.javac.comp.Flow$AliveAnalyzer", "com.sun.tools.javac.comp.Flow", "AliveAnalyzer", 0},
	{}
};

$ClassInfo _Flow$LambdaAliveAnalyzer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Flow$LambdaAliveAnalyzer",
	"com.sun.tools.javac.comp.Flow$AliveAnalyzer",
	nullptr,
	_Flow$LambdaAliveAnalyzer_FieldInfo_,
	_Flow$LambdaAliveAnalyzer_MethodInfo_,
	nullptr,
	nullptr,
	_Flow$LambdaAliveAnalyzer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Flow"
};

$Object* allocate$Flow$LambdaAliveAnalyzer($Class* clazz) {
	return $of($alloc(Flow$LambdaAliveAnalyzer));
}

void Flow$LambdaAliveAnalyzer::init$($Flow* this$0) {
	$set(this, this$0, this$0);
	$Flow$AliveAnalyzer::init$(this$0);
}

void Flow$LambdaAliveAnalyzer::visitReturn($JCTree$JCReturn* tree) {
	recordExit($$new($Flow$BaseAnalyzer$PendingExit, tree));
}

void Flow$LambdaAliveAnalyzer::visitLambda($JCTree$JCLambda* tree) {
	$init($LambdaExpressionTree$BodyKind);
	if (this->inLambda || $nc(tree)->getBodyKind() == $LambdaExpressionTree$BodyKind::EXPRESSION) {
		return;
	}
	this->inLambda = true;
	{
		$var($Throwable, var$0, nullptr);
		try {
			$Flow$AliveAnalyzer::visitLambda(tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->inLambda = false;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Flow$LambdaAliveAnalyzer::visitClassDef($JCTree$JCClassDecl* tree) {
}

Flow$LambdaAliveAnalyzer::Flow$LambdaAliveAnalyzer() {
}

$Class* Flow$LambdaAliveAnalyzer::load$($String* name, bool initialize) {
	$loadClass(Flow$LambdaAliveAnalyzer, name, initialize, &_Flow$LambdaAliveAnalyzer_ClassInfo_, allocate$Flow$LambdaAliveAnalyzer);
	return class$;
}

$Class* Flow$LambdaAliveAnalyzer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com