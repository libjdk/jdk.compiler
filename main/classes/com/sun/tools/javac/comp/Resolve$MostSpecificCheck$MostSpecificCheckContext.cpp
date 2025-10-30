#include <com/sun/tools/javac/comp/Resolve$MostSpecificCheck$MostSpecificCheckContext.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/DeferredAttr$FilterScanner.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheckContext.h>
#include <com/sun/tools/javac/comp/Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker.h>
#include <com/sun/tools/javac/comp/Resolve$MostSpecificCheck.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef DEFERRED
#undef FORALL

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $DeferredAttr$FilterScanner = ::com::sun::tools::javac::comp::DeferredAttr$FilterScanner;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$MethodCheckContext = ::com::sun::tools::javac::comp::Resolve$MethodCheckContext;
using $Resolve$MostSpecificCheck = ::com::sun::tools::javac::comp::Resolve$MostSpecificCheck;
using $Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker = ::com::sun::tools::javac::comp::Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $List = ::com::sun::tools::javac::util::List;
using $Warner = ::com::sun::tools::javac::util::Warner;
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

$FieldInfo _Resolve$MostSpecificCheck$MostSpecificCheckContext_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/Resolve$MostSpecificCheck;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$MostSpecificCheck$MostSpecificCheckContext, this$1)},
	{"actual", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Resolve$MostSpecificCheck$MostSpecificCheckContext, actual)},
	{}
};

$MethodInfo _Resolve$MostSpecificCheck$MostSpecificCheckContext_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$MostSpecificCheck;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/Warner;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Resolve$MostSpecificCheck$MostSpecificCheckContext::*)($Resolve$MostSpecificCheck*,$DeferredAttr$DeferredAttrContext*,$Warner*,$Type*)>(&Resolve$MostSpecificCheck$MostSpecificCheckContext::init$))},
	{"compatible", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PUBLIC},
	{"compatibleBySubtyping", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Resolve$MostSpecificCheck$MostSpecificCheckContext::*)($Type*,$Type*)>(&Resolve$MostSpecificCheck$MostSpecificCheckContext::compatibleBySubtyping))},
	{"functionalInterfaceMostSpecific", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Resolve$MostSpecificCheck$MostSpecificCheckContext::*)($Type*,$Type*,$JCTree*)>(&Resolve$MostSpecificCheck$MostSpecificCheckContext::functionalInterfaceMostSpecific))},
	{"unrelatedFunctionalInterfaces", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Resolve$MostSpecificCheck$MostSpecificCheckContext::*)($Type*,$Type*)>(&Resolve$MostSpecificCheck$MostSpecificCheckContext::unrelatedFunctionalInterfaces))},
	{"unrelatedInterfaces", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Resolve$MostSpecificCheck$MostSpecificCheckContext::*)($Type*,$Type*)>(&Resolve$MostSpecificCheck$MostSpecificCheckContext::unrelatedInterfaces))},
	{}
};

$InnerClassInfo _Resolve$MostSpecificCheck$MostSpecificCheckContext_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$MostSpecificCheck", "com.sun.tools.javac.comp.Resolve", "MostSpecificCheck", 0},
	{"com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext", "com.sun.tools.javac.comp.Resolve$MostSpecificCheck", "MostSpecificCheckContext", 0},
	{"com.sun.tools.javac.comp.Resolve$MethodCheckContext", "com.sun.tools.javac.comp.Resolve", "MethodCheckContext", $ABSTRACT},
	{"com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker", "com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext", "MostSpecificFunctionReturnChecker", 0},
	{}
};

$ClassInfo _Resolve$MostSpecificCheck$MostSpecificCheckContext_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext",
	"com.sun.tools.javac.comp.Resolve$MethodCheckContext",
	nullptr,
	_Resolve$MostSpecificCheck$MostSpecificCheckContext_FieldInfo_,
	_Resolve$MostSpecificCheck$MostSpecificCheckContext_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$MostSpecificCheck$MostSpecificCheckContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$MostSpecificCheck$MostSpecificCheckContext($Class* clazz) {
	return $of($alloc(Resolve$MostSpecificCheck$MostSpecificCheckContext));
}

void Resolve$MostSpecificCheck$MostSpecificCheckContext::init$($Resolve$MostSpecificCheck* this$1, $DeferredAttr$DeferredAttrContext* deferredAttrContext, $Warner* rsWarner, $Type* actual) {
	$set(this, this$1, this$1);
	$Resolve$MethodCheckContext::init$(this$1->this$0, true, deferredAttrContext, rsWarner);
	$set(this, actual, actual);
}

bool Resolve$MostSpecificCheck$MostSpecificCheckContext::compatible($Type* found, $Type* req, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(this->this$1->this$0)->allowFunctionalInterfaceMostSpecific && unrelatedFunctionalInterfaces(found, req);
	$init($TypeTag);
	if (var$0 && (this->actual != nullptr && $nc(this->actual)->getTag() == $TypeTag::DEFERRED)) {
		$var($DeferredAttr$DeferredType, dt, $cast($DeferredAttr$DeferredType, this->actual));
		$var($JCTree, speculativeTree, $nc(dt)->speculativeTree(this->deferredAttrContext$));
		if (speculativeTree != $nc($nc(this->this$1->this$0)->deferredAttr)->stuckTree) {
			return functionalInterfaceMostSpecific(found, req, speculativeTree);
		}
	}
	return compatibleBySubtyping(found, req);
}

bool Resolve$MostSpecificCheck$MostSpecificCheckContext::compatibleBySubtyping($Type* found$renamed, $Type* req) {
	$useLocalCurrentObjectStackCache();
	$var($Type, found, found$renamed);
	bool var$0 = !this->strict;
	if (var$0) {
		bool var$1 = $nc(found)->isPrimitive();
		var$0 = var$1 != $nc(req)->isPrimitive();
	}
	if (var$0) {
		$assign(found, found->isPrimitive() ? $nc($($nc($nc(this->this$1->this$0)->types)->boxedClass(found)))->type : $nc($nc(this->this$1->this$0)->types)->unboxedType(found));
	}
	return $nc($nc(this->this$1->this$0)->types)->isSubtypeNoCapture(found, $($nc($nc(this->deferredAttrContext$)->inferenceContext)->asUndetVar(req)));
}

bool Resolve$MostSpecificCheck$MostSpecificCheckContext::unrelatedFunctionalInterfaces($Type* t, $Type* s) {
	bool var$1 = $nc($nc(this->this$1->this$0)->types)->isFunctionalInterface($nc(t)->tsym);
	bool var$0 = var$1 && $nc($nc(this->this$1->this$0)->types)->isFunctionalInterface($nc(s)->tsym);
	return var$0 && unrelatedInterfaces(t, s);
}

bool Resolve$MostSpecificCheck$MostSpecificCheckContext::unrelatedInterfaces($Type* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	if ($nc(t)->isCompound()) {
		{
			$var($Iterator, i$, $nc($($nc($nc(this->this$1->this$0)->types)->interfaces(t)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, ti, $cast($Type, i$->next()));
				{
					if (!unrelatedInterfaces(ti, s)) {
						return false;
					}
				}
			}
		}
		return true;
	} else if ($nc(s)->isCompound()) {
		{
			$var($Iterator, i$, $nc($($nc($nc(this->this$1->this$0)->types)->interfaces(s)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, si, $cast($Type, i$->next()));
				{
					if (!unrelatedInterfaces(t, si)) {
						return false;
					}
				}
			}
		}
		return true;
	} else {
		bool var$0 = $nc($nc(this->this$1->this$0)->types)->asSuper(t, s->tsym) == nullptr;
		return var$0 && $nc($nc(this->this$1->this$0)->types)->asSuper(s, t->tsym) == nullptr;
	}
}

bool Resolve$MostSpecificCheck$MostSpecificCheckContext::functionalInterfaceMostSpecific($Type* t, $Type* s, $JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, tDesc, $nc($nc(this->this$1->this$0)->types)->findDescriptorType($($nc($nc(this->this$1->this$0)->types)->capture(t))));
	$var($Type, tDescNoCapture, $nc($nc(this->this$1->this$0)->types)->findDescriptorType(t));
	$var($Type, sDesc, $nc($nc(this->this$1->this$0)->types)->findDescriptorType(s));
	$var($List, tTypeParams, $nc(tDesc)->getTypeArguments());
	$var($List, tTypeParamsNoCapture, $nc(tDescNoCapture)->getTypeArguments());
	$var($List, sTypeParams, $nc(sDesc)->getTypeArguments());
	$init($TypeTag);
	bool var$0 = tDesc->hasTag($TypeTag::FORALL);
	if (var$0 && !$nc($nc(this->this$1->this$0)->types)->hasSameBounds($cast($Type$ForAll, tDesc), $cast($Type$ForAll, tDescNoCapture))) {
		return false;
	}
	$var($List, tIter, tTypeParams);
	$var($List, sIter, sTypeParams);
	while (true) {
		bool var$1 = $nc(tIter)->nonEmpty();
		if (!(var$1 && $nc(sIter)->nonEmpty())) {
			break;
		}
		{
			$var($Type, tBound, $nc(($cast($Type, tIter->head)))->getUpperBound());
			$var($Type, sBound, $nc($nc(this->this$1->this$0)->types)->subst($($nc(($cast($Type, sIter->head)))->getUpperBound()), sTypeParams, tTypeParams));
			bool var$2 = $nc(tBound)->containsAny(tTypeParams);
			if (var$2 && $nc($(inferenceContext()))->free(sBound)) {
				return false;
			}
			if (!$nc($nc(this->this$1->this$0)->types)->isSameType(tBound, $($nc($(inferenceContext()))->asUndetVar(sBound)))) {
				return false;
			}
			$assign(tIter, tIter->tail);
			$assign(sIter, sIter->tail);
		}
	}
	bool var$3 = !$nc(tIter)->isEmpty();
	if (var$3 || !$nc(sIter)->isEmpty()) {
		return false;
	}
	$var($List, tParams, tDesc->getParameterTypes());
	$var($List, tParamsNoCapture, tDescNoCapture->getParameterTypes());
	$var($List, sParams, sDesc->getParameterTypes());
	while (true) {
		bool var$5 = $nc(tParams)->nonEmpty();
		bool var$4 = var$5 && $nc(tParamsNoCapture)->nonEmpty();
		if (!(var$4 && $nc(sParams)->nonEmpty())) {
			break;
		}
		{
			$var($Type, tParam, $cast($Type, tParams->head));
			$var($Type, tParamNoCapture, $nc($nc(this->this$1->this$0)->types)->subst($cast($Type, tParamsNoCapture->head), tTypeParamsNoCapture, tTypeParams));
			$var($Type, sParam, $nc($nc(this->this$1->this$0)->types)->subst($cast($Type, sParams->head), sTypeParams, tTypeParams));
			bool var$6 = $nc(tParam)->containsAny(tTypeParams);
			if (var$6 && $nc($(inferenceContext()))->free(sParam)) {
				return false;
			}
			if (!$nc($nc(this->this$1->this$0)->types)->isSubtype($($nc($(inferenceContext()))->asUndetVar(sParam)), tParam)) {
				return false;
			}
			if (!$nc($nc(this->this$1->this$0)->types)->isSameType(tParamNoCapture, $($nc($(inferenceContext()))->asUndetVar(sParam)))) {
				return false;
			}
			$assign(tParams, tParams->tail);
			$assign(tParamsNoCapture, tParamsNoCapture->tail);
			$assign(sParams, sParams->tail);
		}
	}
	bool var$8 = !$nc(tParams)->isEmpty();
	bool var$7 = var$8 || !$nc(tParamsNoCapture)->isEmpty();
	if (var$7 || !$nc(sParams)->isEmpty()) {
		return false;
	}
	$var($Type, tRet, tDesc->getReturnType());
	$var($Type, sRet, $nc($nc(this->this$1->this$0)->types)->subst($(sDesc->getReturnType()), sTypeParams, tTypeParams));
	bool var$9 = $nc(tRet)->containsAny(tTypeParams);
	if (var$9 && $nc($(inferenceContext()))->free(sRet)) {
		return false;
	}
	$var($Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker, msc, $new($Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker, this, tRet, sRet));
	msc->scan(tree);
	return msc->result;
}

Resolve$MostSpecificCheck$MostSpecificCheckContext::Resolve$MostSpecificCheck$MostSpecificCheckContext() {
}

$Class* Resolve$MostSpecificCheck$MostSpecificCheckContext::load$($String* name, bool initialize) {
	$loadClass(Resolve$MostSpecificCheck$MostSpecificCheckContext, name, initialize, &_Resolve$MostSpecificCheck$MostSpecificCheckContext_ClassInfo_, allocate$Resolve$MostSpecificCheck$MostSpecificCheckContext);
	return class$;
}

$Class* Resolve$MostSpecificCheck$MostSpecificCheckContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com