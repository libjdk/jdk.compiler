#include <com/sun/tools/javac/comp/Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker.h>

#include <com/sun/source/tree/LambdaExpressionTree$BodyKind.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/DeferredAttr$LambdaReturnScanner.h>
#include <com/sun/tools/javac/comp/DeferredAttr$PolyScanner.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1.h>
#include <com/sun/tools/javac/comp/Resolve$MostSpecificCheck$MostSpecificCheckContext.h>
#include <com/sun/tools/javac/comp/Resolve$MostSpecificCheck.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCParens.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef DEFERRED
#undef EXPRESSION
#undef STANDALONE
#undef VOID

using $LambdaExpressionTree$BodyKind = ::com::sun::source::tree::LambdaExpressionTree$BodyKind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $DeferredAttr$FilterScanner = ::com::sun::tools::javac::comp::DeferredAttr$FilterScanner;
using $DeferredAttr$LambdaReturnScanner = ::com::sun::tools::javac::comp::DeferredAttr$LambdaReturnScanner;
using $DeferredAttr$PolyScanner = ::com::sun::tools::javac::comp::DeferredAttr$PolyScanner;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$MethodCheckContext = ::com::sun::tools::javac::comp::Resolve$MethodCheckContext;
using $Resolve$MostSpecificCheck = ::com::sun::tools::javac::comp::Resolve$MostSpecificCheck;
using $Resolve$MostSpecificCheck$MostSpecificCheckContext = ::com::sun::tools::javac::comp::Resolve$MostSpecificCheck$MostSpecificCheckContext;
using $Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1 = ::com::sun::tools::javac::comp::Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCParens = ::com::sun::tools::javac::tree::JCTree$JCParens;
using $JCTree$JCPolyExpression$PolyKind = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression$PolyKind;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker_FieldInfo_[] = {
	{"this$2", "Lcom/sun/tools/javac/comp/Resolve$MostSpecificCheck$MostSpecificCheckContext;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker, this$2)},
	{"tRet", "Lcom/sun/tools/javac/code/Type;", nullptr, $FINAL, $field(Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker, tRet)},
	{"sRet", "Lcom/sun/tools/javac/code/Type;", nullptr, $FINAL, $field(Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker, sRet)},
	{"result", "Z", nullptr, 0, $field(Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker, result)},
	{}
};

$MethodInfo _Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$MostSpecificCheck$MostSpecificCheckContext;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(static_cast<void(Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker::*)($Resolve$MostSpecificCheck$MostSpecificCheckContext*,$Type*,$Type*)>(&Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker::init$))},
	{"asExpr", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCExpression*(Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker::*)($JCTree$JCExpression*)>(&Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker::asExpr))},
	{"lambdaResults", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PRIVATE, $method(static_cast<$List*(Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker::*)($JCTree$JCLambda*)>(&Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker::lambdaResults))},
	{"skip", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0},
	{"visitConditional", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitParens", "(Lcom/sun/tools/javac/tree/JCTree$JCParens;)V", nullptr, $PUBLIC},
	{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$MostSpecificCheck", "com.sun.tools.javac.comp.Resolve", "MostSpecificCheck", 0},
	{"com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext", "com.sun.tools.javac.comp.Resolve$MostSpecificCheck", "MostSpecificCheckContext", 0},
	{"com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker", "com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext", "MostSpecificFunctionReturnChecker", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$PolyScanner", "com.sun.tools.javac.comp.DeferredAttr", "PolyScanner", $STATIC},
	{"com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker",
	"com.sun.tools.javac.comp.DeferredAttr$PolyScanner",
	nullptr,
	_Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker_FieldInfo_,
	_Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker($Class* clazz) {
	return $of($alloc(Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker));
}

void Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker::init$($Resolve$MostSpecificCheck$MostSpecificCheckContext* this$2, $Type* tRet, $Type* sRet) {
	$set(this, this$2, this$2);
	$DeferredAttr$PolyScanner::init$();
	$set(this, tRet, tRet);
	$set(this, sRet, sRet);
	this->result = true;
}

void Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker::skip($JCTree* tree) {
	this->result &= false;
}

void Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker::visitConditional($JCTree$JCConditional* tree) {
	$useLocalCurrentObjectStackCache();
	scan($(static_cast<$JCTree*>(asExpr($nc(tree)->truepart))));
	scan($(static_cast<$JCTree*>(asExpr($nc(tree)->falsepart))));
}

void Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker::visitReference($JCTree$JCMemberReference* tree) {
	$init($TypeTag);
	if ($nc(this->sRet)->hasTag($TypeTag::VOID)) {
		this->result &= true;
	} else {
		if ($nc(this->tRet)->hasTag($TypeTag::VOID)) {
			this->result &= false;
		} else {
			bool var$1 = $nc(this->tRet)->isPrimitive();
			if (var$1 != $nc(this->sRet)->isPrimitive()) {
				$init($JCTree$JCPolyExpression$PolyKind);
				bool retValIsPrimitive = $nc(tree)->refPolyKind == $JCTree$JCPolyExpression$PolyKind::STANDALONE && $nc($($nc($nc(tree->sym)->type)->getReturnType()))->isPrimitive();
				bool var$2 = (retValIsPrimitive == $nc(this->tRet)->isPrimitive());
				this->result &= var$2 && (retValIsPrimitive != $nc(this->sRet)->isPrimitive());
			} else {
				this->result &= this->this$2->compatibleBySubtyping(this->tRet, this->sRet);
			}
		}
	}
}

void Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker::visitParens($JCTree$JCParens* tree) {
	scan($(static_cast<$JCTree*>(asExpr($nc(tree)->expr))));
}

void Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker::visitLambda($JCTree$JCLambda* tree) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if ($nc(this->sRet)->hasTag($TypeTag::VOID)) {
		this->result &= true;
	} else {
		if ($nc(this->tRet)->hasTag($TypeTag::VOID)) {
			this->result &= false;
		} else {
			$var($List, lambdaResults, this->lambdaResults(tree));
			bool var$0 = !$nc(lambdaResults)->isEmpty();
			if (var$0 && this->this$2->unrelatedFunctionalInterfaces(this->tRet, this->sRet)) {
				{
					$var($Iterator, i$, lambdaResults->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($JCTree$JCExpression, expr, $cast($JCTree$JCExpression, i$->next()));
						{
							this->result &= this->this$2->functionalInterfaceMostSpecific(this->tRet, this->sRet, expr);
						}
					}
				}
			} else {
				bool var$3 = !lambdaResults->isEmpty();
				if (var$3) {
					bool var$4 = $nc(this->tRet)->isPrimitive();
					var$3 = var$4 != $nc(this->sRet)->isPrimitive();
				}
				if (var$3) {
					{
						$var($Iterator, i$, lambdaResults->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($JCTree$JCExpression, expr, $cast($JCTree$JCExpression, i$->next()));
							{
								bool var$5 = $nc(expr)->isStandalone();
								bool retValIsPrimitive = var$5 && $nc(expr->type)->isPrimitive();
								bool var$6 = (retValIsPrimitive == $nc(this->tRet)->isPrimitive());
								this->result &= var$6 && (retValIsPrimitive != $nc(this->sRet)->isPrimitive());
							}
						}
					}
				} else {
					this->result &= this->this$2->compatibleBySubtyping(this->tRet, this->sRet);
				}
			}
		}
	}
}

$List* Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker::lambdaResults($JCTree$JCLambda* lambda) {
	$useLocalCurrentObjectStackCache();
	$init($LambdaExpressionTree$BodyKind);
	if ($nc(lambda)->getBodyKind() == $LambdaExpressionTree$BodyKind::EXPRESSION) {
		return $List::of($(asExpr($cast($JCTree$JCExpression, lambda->body))));
	} else {
		$var($ListBuffer, buffer, $new($ListBuffer));
		$var($DeferredAttr$LambdaReturnScanner, lambdaScanner, $new($Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1, this, buffer));
		lambdaScanner->scan(lambda->body);
		return buffer->toList();
	}
}

$JCTree$JCExpression* Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker::asExpr($JCTree$JCExpression* expr$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, expr, expr$renamed);
	$init($TypeTag);
	if ($nc($nc(expr)->type)->hasTag($TypeTag::DEFERRED)) {
		$var($JCTree, speculativeTree, $nc(($cast($DeferredAttr$DeferredType, expr->type)))->speculativeTree(this->this$2->deferredAttrContext$));
		if (speculativeTree != $nc($nc($nc(this->this$2->this$1)->this$0)->deferredAttr)->stuckTree) {
			$assign(expr, $cast($JCTree$JCExpression, speculativeTree));
		}
	}
	return expr;
}

Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker::Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker() {
}

$Class* Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker::load$($String* name, bool initialize) {
	$loadClass(Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker, name, initialize, &_Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker_ClassInfo_, allocate$Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker);
	return class$;
}

$Class* Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com