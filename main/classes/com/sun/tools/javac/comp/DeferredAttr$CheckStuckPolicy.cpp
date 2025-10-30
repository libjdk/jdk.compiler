#include <com/sun/tools/javac/comp/DeferredAttr$CheckStuckPolicy.h>

#include <com/sun/source/tree/LambdaExpressionTree$BodyKind.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$CheckStuckPolicy$1.h>
#include <com/sun/tools/javac/comp/DeferredAttr$CheckStuckPolicy$2.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/DeferredAttr$LambdaReturnScanner.h>
#include <com/sun/tools/javac/comp/DeferredAttr$PolyScanner.h>
#include <com/sun/tools/javac/comp/DeferredAttr$SwitchExpressionScanner.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Infer$FreeTypeListener.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef EXPRESSION
#undef IMPLICIT
#undef UNOVERLOADED

using $LambdaExpressionTree$BodyKind = ::com::sun::source::tree::LambdaExpressionTree$BodyKind;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$CheckStuckPolicy$1 = ::com::sun::tools::javac::comp::DeferredAttr$CheckStuckPolicy$1;
using $DeferredAttr$CheckStuckPolicy$2 = ::com::sun::tools::javac::comp::DeferredAttr$CheckStuckPolicy$2;
using $DeferredAttr$DeferredStuckPolicy = ::com::sun::tools::javac::comp::DeferredAttr$DeferredStuckPolicy;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $DeferredAttr$FilterScanner = ::com::sun::tools::javac::comp::DeferredAttr$FilterScanner;
using $DeferredAttr$LambdaReturnScanner = ::com::sun::tools::javac::comp::DeferredAttr$LambdaReturnScanner;
using $DeferredAttr$PolyScanner = ::com::sun::tools::javac::comp::DeferredAttr$PolyScanner;
using $DeferredAttr$SwitchExpressionScanner = ::com::sun::tools::javac::comp::DeferredAttr$SwitchExpressionScanner;
using $Infer$FreeTypeListener = ::com::sun::tools::javac::comp::Infer$FreeTypeListener;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCLambda$ParameterKind = ::com::sun::tools::javac::tree::JCTree$JCLambda$ParameterKind;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMemberReference$OverloadKind = ::com::sun::tools::javac::tree::JCTree$JCMemberReference$OverloadKind;
using $JCTree$JCSwitchExpression = ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _DeferredAttr$CheckStuckPolicy_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$CheckStuckPolicy, this$0)},
	{"pt", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(DeferredAttr$CheckStuckPolicy, pt)},
	{"inferenceContext", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, 0, $field(DeferredAttr$CheckStuckPolicy, inferenceContext)},
	{"stuckVars", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;", 0, $field(DeferredAttr$CheckStuckPolicy, stuckVars$)},
	{"depVars", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;", 0, $field(DeferredAttr$CheckStuckPolicy, depVars$)},
	{}
};

$MethodInfo _DeferredAttr$CheckStuckPolicy_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;)V", nullptr, $PUBLIC, $method(static_cast<void(DeferredAttr$CheckStuckPolicy::*)($DeferredAttr*,$Attr$ResultInfo*,$DeferredAttr$DeferredType*)>(&DeferredAttr$CheckStuckPolicy::init$))},
	{"depVars", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"isStuck", "()Z", nullptr, $PUBLIC},
	{"scanLambdaBody", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0},
	{"stuckVars", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC},
	{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DeferredAttr$CheckStuckPolicy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy", "com.sun.tools.javac.comp.DeferredAttr", "CheckStuckPolicy", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$PolyScanner", "com.sun.tools.javac.comp.DeferredAttr", "PolyScanner", $STATIC},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredStuckPolicy", "com.sun.tools.javac.comp.DeferredAttr", "DeferredStuckPolicy", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.comp.Infer$FreeTypeListener", "com.sun.tools.javac.comp.Infer", "FreeTypeListener", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DeferredAttr$CheckStuckPolicy_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy",
	"com.sun.tools.javac.comp.DeferredAttr$PolyScanner",
	"com.sun.tools.javac.comp.DeferredAttr$DeferredStuckPolicy,com.sun.tools.javac.comp.Infer$FreeTypeListener",
	_DeferredAttr$CheckStuckPolicy_FieldInfo_,
	_DeferredAttr$CheckStuckPolicy_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredAttr$CheckStuckPolicy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$CheckStuckPolicy($Class* clazz) {
	return $of($alloc(DeferredAttr$CheckStuckPolicy));
}

int32_t DeferredAttr$CheckStuckPolicy::hashCode() {
	 return this->$DeferredAttr$PolyScanner::hashCode();
}

bool DeferredAttr$CheckStuckPolicy::equals(Object$* arg0) {
	 return this->$DeferredAttr$PolyScanner::equals(arg0);
}

$Object* DeferredAttr$CheckStuckPolicy::clone() {
	 return this->$DeferredAttr$PolyScanner::clone();
}

$String* DeferredAttr$CheckStuckPolicy::toString() {
	 return this->$DeferredAttr$PolyScanner::toString();
}

void DeferredAttr$CheckStuckPolicy::finalize() {
	this->$DeferredAttr$PolyScanner::finalize();
}

bool DeferredAttr$CheckStuckPolicy::isStuck() {
	return !$nc(this->stuckVars$)->isEmpty();
}

$Set* DeferredAttr$CheckStuckPolicy::stuckVars() {
	return this->stuckVars$;
}

$Set* DeferredAttr$CheckStuckPolicy::depVars() {
	return this->depVars$;
}

void DeferredAttr$CheckStuckPolicy::init$($DeferredAttr* this$0, $Attr$ResultInfo* resultInfo, $DeferredAttr$DeferredType* dt) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$DeferredAttr$PolyScanner::init$();
	$set(this, stuckVars$, $new($LinkedHashSet));
	$set(this, depVars$, $new($LinkedHashSet));
	$set(this, pt, $nc(resultInfo)->pt);
	$set(this, inferenceContext, $nc(resultInfo->checkContext)->inferenceContext());
	scan(static_cast<$JCTree*>($nc(dt)->tree));
	if (!$nc(this->stuckVars$)->isEmpty()) {
		$nc($($nc(resultInfo->checkContext)->inferenceContext()))->addFreeTypeListener($($List::from(static_cast<$Iterable*>(this->stuckVars$))), this);
	}
}

void DeferredAttr$CheckStuckPolicy::typesInferred($InferenceContext* inferenceContext) {
	$nc(this->stuckVars$)->clear();
}

void DeferredAttr$CheckStuckPolicy::visitLambda($JCTree$JCLambda* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc(this->inferenceContext)->inferenceVars()))->contains(this->pt)) {
		$nc(this->stuckVars$)->add(this->pt);
	}
	if (!$nc(this->this$0->types)->isFunctionalInterface(this->pt)) {
		return;
	}
	$var($Type, descType, $nc(this->this$0->types)->findDescriptorType(this->pt));
	$var($List, freeArgVars, $nc(this->inferenceContext)->freeVarsIn($($nc(descType)->getParameterTypes())));
	$init($JCTree$JCLambda$ParameterKind);
	if ($nc(tree)->paramKind == $JCTree$JCLambda$ParameterKind::IMPLICIT && $nc(freeArgVars)->nonEmpty()) {
		$nc(this->stuckVars$)->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(freeArgVars)));
		$nc(this->depVars$)->addAll($(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(this->inferenceContext)->freeVarsIn($($nc(descType)->getReturnType()))))));
		$nc(this->depVars$)->addAll($(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(this->inferenceContext)->freeVarsIn($($nc(descType)->getThrownTypes()))))));
	}
	scanLambdaBody(tree, $($nc(descType)->getReturnType()));
}

void DeferredAttr$CheckStuckPolicy::visitReference($JCTree$JCMemberReference* tree) {
	$useLocalCurrentObjectStackCache();
	scan(static_cast<$JCTree*>($nc(tree)->expr));
	if ($nc($($nc(this->inferenceContext)->inferenceVars()))->contains(this->pt)) {
		$nc(this->stuckVars$)->add(this->pt);
		return;
	}
	if (!$nc(this->this$0->types)->isFunctionalInterface(this->pt)) {
		return;
	}
	$var($Type, descType, $nc(this->this$0->types)->findDescriptorType(this->pt));
	$var($List, freeArgVars, $nc(this->inferenceContext)->freeVarsIn($($nc(descType)->getParameterTypes())));
	bool var$0 = $nc(freeArgVars)->nonEmpty();
	$init($JCTree$JCMemberReference$OverloadKind);
	if (var$0 && $nc(tree)->getOverloadKind() != $JCTree$JCMemberReference$OverloadKind::UNOVERLOADED) {
		$nc(this->stuckVars$)->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(freeArgVars)));
		$nc(this->depVars$)->addAll($(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(this->inferenceContext)->freeVarsIn($($nc(descType)->getReturnType()))))));
		$nc(this->depVars$)->addAll($(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(this->inferenceContext)->freeVarsIn($($nc(descType)->getThrownTypes()))))));
	}
}

void DeferredAttr$CheckStuckPolicy::scanLambdaBody($JCTree$JCLambda* lambda, $Type* pt) {
	$useLocalCurrentObjectStackCache();
	$init($LambdaExpressionTree$BodyKind);
	if ($nc(lambda)->getBodyKind() == $LambdaExpressionTree$BodyKind::EXPRESSION) {
		$var($Type, prevPt, this->pt);
		{
			$var($Throwable, var$0, nullptr);
			try {
				$set(this, pt, pt);
				scan(lambda->body);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$set(this, pt, prevPt);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		$var($DeferredAttr$LambdaReturnScanner, lambdaScanner, $new($DeferredAttr$CheckStuckPolicy$1, this, pt));
		lambdaScanner->scan(lambda->body);
	}
}

void DeferredAttr$CheckStuckPolicy::visitSwitchExpression($JCTree$JCSwitchExpression* expr) {
	$var($DeferredAttr$SwitchExpressionScanner, switchScanner, $new($DeferredAttr$CheckStuckPolicy$2, this));
	switchScanner->scan($nc(expr)->cases);
}

DeferredAttr$CheckStuckPolicy::DeferredAttr$CheckStuckPolicy() {
}

$Class* DeferredAttr$CheckStuckPolicy::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$CheckStuckPolicy, name, initialize, &_DeferredAttr$CheckStuckPolicy_ClassInfo_, allocate$DeferredAttr$CheckStuckPolicy);
	return class$;
}

$Class* DeferredAttr$CheckStuckPolicy::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com