#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$1.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind.h>
#include <com/sun/tools/javac/comp/Lower$BasicFreeVarCollector.h>
#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef CAPTURED_VAR
#undef LAMBDA
#undef MTH
#undef VAR

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $LambdaToMethod$LambdaAnalyzerPreprocessor = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext;
using $LambdaToMethod$LambdaSymbolKind = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind;
using $Lower = ::com::sun::tools::javac::comp::Lower;
using $Lower$BasicFreeVarCollector = ::com::sun::tools::javac::comp::Lower$BasicFreeVarCollector;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
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

$FieldInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$1, this$1)},
	{"val$lambdaContext", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$1, val$lambdaContext)},
	{}
};

$MethodInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor;Lcom/sun/tools/javac/comp/Lower;Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;)V", nullptr, 0, $method(static_cast<void(LambdaToMethod$LambdaAnalyzerPreprocessor$1::*)($LambdaToMethod$LambdaAnalyzerPreprocessor*,$Lower*,$LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext*)>(&LambdaToMethod$LambdaAnalyzerPreprocessor$1::init$))},
	{"addFreeVars", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, 0},
	{"visitSymbol", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor",
	"captureLocalClassDefs",
	"(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;)V"
};

$InnerClassInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "com.sun.tools.javac.comp.LambdaToMethod", "LambdaAnalyzerPreprocessor", 0},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Lower$BasicFreeVarCollector", "com.sun.tools.javac.comp.Lower", "BasicFreeVarCollector", $ABSTRACT},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext", "com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "LambdaTranslationContext", 0},
	{}
};

$ClassInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$1",
	"com.sun.tools.javac.comp.Lower$BasicFreeVarCollector",
	nullptr,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$1_FieldInfo_,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$1_MethodInfo_,
	nullptr,
	&_LambdaToMethod$LambdaAnalyzerPreprocessor$1_EnclosingMethodInfo_,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.LambdaToMethod"
};

$Object* allocate$LambdaToMethod$LambdaAnalyzerPreprocessor$1($Class* clazz) {
	return $of($alloc(LambdaToMethod$LambdaAnalyzerPreprocessor$1));
}

void LambdaToMethod$LambdaAnalyzerPreprocessor$1::init$($LambdaToMethod$LambdaAnalyzerPreprocessor* this$1, $Lower* x0, $LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext* val$lambdaContext) {
	$set(this, this$1, this$1);
	$set(this, val$lambdaContext, val$lambdaContext);
	$Lower$BasicFreeVarCollector::init$(static_cast<$Lower*>($nc(x0)));
}

void LambdaToMethod$LambdaAnalyzerPreprocessor$1::addFreeVars($Symbol$ClassSymbol* c) {
	this->this$1->captureLocalClassDefs(c, this->val$lambdaContext);
}

void LambdaToMethod$LambdaAnalyzerPreprocessor$1::visitSymbol($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if ($nc(sym)->kind == $Kinds$Kind::VAR && $nc(sym->owner)->kind == $Kinds$Kind::MTH && $nc(($cast($Symbol$VarSymbol, sym)))->getConstValue() == nullptr) {
		$var($LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, localContext, this->this$1->context());
		while (localContext != nullptr) {
			$init($JCTree$Tag);
			if ($nc(localContext->tree)->getTag() == $JCTree$Tag::LAMBDA) {
				$var($JCTree, block, this->this$1->capturedDecl(localContext->depth, sym));
				if (block == nullptr) {
					break;
				}
				$init($LambdaToMethod$LambdaSymbolKind);
				$nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, localContext)))->addSymbol(sym, $LambdaToMethod$LambdaSymbolKind::CAPTURED_VAR);
			}
			$assign(localContext, localContext->prev);
		}
	}
}

LambdaToMethod$LambdaAnalyzerPreprocessor$1::LambdaToMethod$LambdaAnalyzerPreprocessor$1() {
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$1::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$LambdaAnalyzerPreprocessor$1, name, initialize, &_LambdaToMethod$LambdaAnalyzerPreprocessor$1_ClassInfo_, allocate$LambdaToMethod$LambdaAnalyzerPreprocessor$1);
	return class$;
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com