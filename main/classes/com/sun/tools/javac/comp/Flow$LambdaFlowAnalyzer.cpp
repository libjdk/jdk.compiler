#include <com/sun/tools/javac/comp/Flow$LambdaFlowAnalyzer.h>

#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$FlowAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <jcpp.h>

using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Flow = ::com::sun::tools::javac::comp::Flow;
using $Flow$BaseAnalyzer = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer;
using $Flow$FlowAnalyzer = ::com::sun::tools::javac::comp::Flow$FlowAnalyzer;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Flow$LambdaFlowAnalyzer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Flow;", nullptr, $FINAL | $SYNTHETIC, $field(Flow$LambdaFlowAnalyzer, this$0)},
	{"inferredThrownTypes", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $field(Flow$LambdaFlowAnalyzer, inferredThrownTypes)},
	{"inLambda", "Z", nullptr, 0, $field(Flow$LambdaFlowAnalyzer, inLambda)},
	{}
};

$MethodInfo _Flow$LambdaFlowAnalyzer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Flow;)V", nullptr, 0, $method(static_cast<void(Flow$LambdaFlowAnalyzer::*)($Flow*)>(&Flow$LambdaFlowAnalyzer::init$))},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Flow$LambdaFlowAnalyzer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Flow$LambdaFlowAnalyzer", "com.sun.tools.javac.comp.Flow", "LambdaFlowAnalyzer", 0},
	{"com.sun.tools.javac.comp.Flow$FlowAnalyzer", "com.sun.tools.javac.comp.Flow", "FlowAnalyzer", 0},
	{}
};

$ClassInfo _Flow$LambdaFlowAnalyzer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Flow$LambdaFlowAnalyzer",
	"com.sun.tools.javac.comp.Flow$FlowAnalyzer",
	nullptr,
	_Flow$LambdaFlowAnalyzer_FieldInfo_,
	_Flow$LambdaFlowAnalyzer_MethodInfo_,
	nullptr,
	nullptr,
	_Flow$LambdaFlowAnalyzer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Flow"
};

$Object* allocate$Flow$LambdaFlowAnalyzer($Class* clazz) {
	return $of($alloc(Flow$LambdaFlowAnalyzer));
}

void Flow$LambdaFlowAnalyzer::init$($Flow* this$0) {
	$set(this, this$0, this$0);
	$Flow$FlowAnalyzer::init$(this$0);
}

void Flow$LambdaFlowAnalyzer::visitLambda($JCTree$JCLambda* tree) {
	$useLocalCurrentObjectStackCache();
	if (($nc(tree)->type != nullptr && $nc(tree->type)->isErroneous()) || this->inLambda) {
		return;
	}
	$var($List, prevCaught, this->caught);
	$var($List, prevThrown, this->thrown);
	$var($ListBuffer, prevPending, this->pendingExits);
	this->inLambda = true;
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, pendingExits, $new($ListBuffer));
			$set(this, caught, $List::of($nc(this->this$0->syms)->throwableType));
			$set(this, thrown, $List::nil());
			scan($nc(tree)->body);
			$set(this, inferredThrownTypes, this->thrown);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, pendingExits, prevPending);
			$set(this, caught, prevCaught);
			$set(this, thrown, prevThrown);
			this->inLambda = false;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Flow$LambdaFlowAnalyzer::visitClassDef($JCTree$JCClassDecl* tree) {
}

Flow$LambdaFlowAnalyzer::Flow$LambdaFlowAnalyzer() {
}

$Class* Flow$LambdaFlowAnalyzer::load$($String* name, bool initialize) {
	$loadClass(Flow$LambdaFlowAnalyzer, name, initialize, &_Flow$LambdaFlowAnalyzer_ClassInfo_, allocate$Flow$LambdaFlowAnalyzer);
	return class$;
}

$Class* Flow$LambdaFlowAnalyzer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com