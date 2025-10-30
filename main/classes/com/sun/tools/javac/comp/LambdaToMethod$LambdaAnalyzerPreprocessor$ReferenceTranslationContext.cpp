#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext.h>

#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$1.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor.h>
#include <com/sun/tools/javac/comp/LambdaToMethod.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AssertionError.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

#undef ARRAY_CTOR
#undef NEW
#undef SUPER

using $MemberReferenceTree$ReferenceMode = ::com::sun::source::tree::MemberReferenceTree$ReferenceMode;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Types = ::com::sun::tools::javac::code::Types;
using $LambdaToMethod = ::com::sun::tools::javac::comp::LambdaToMethod;
using $LambdaToMethod$1 = ::com::sun::tools::javac::comp::LambdaToMethod$1;
using $LambdaToMethod$LambdaAnalyzerPreprocessor = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMemberReference$ReferenceKind = ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind;
using $List = ::com::sun::tools::javac::util::List;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeKind = ::javax::lang::model::type::TypeKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext, this$1)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext, $assertionsDisabled)},
	{"isSuper", "Z", nullptr, $FINAL, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext, isSuper)},
	{}
};

$MethodInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor;Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, 0, $method(static_cast<void(LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::*)($LambdaToMethod$LambdaAnalyzerPreprocessor*,$JCTree$JCMemberReference*)>(&LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::init$))},
	{"bridgedRefSig", "()Lcom/sun/tools/javac/code/Type;", nullptr, 0, $method(static_cast<$Type*(LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::*)()>(&LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::bridgedRefSig))},
	{"generatedRefSig", "()Lcom/sun/tools/javac/code/Type;", nullptr, 0, $method(static_cast<$Type*(LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::*)()>(&LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::generatedRefSig))},
	{"interfaceParameterIsIntersectionOrUnionType", "()Z", nullptr, 0, $method(static_cast<bool(LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::*)()>(&LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::interfaceParameterIsIntersectionOrUnionType))},
	{"isArrayOp", "()Z", nullptr, 0, $method(static_cast<bool(LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::*)()>(&LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::isArrayOp))},
	{"isIntersectionOrUnionType", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, 0, $method(static_cast<bool(LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::*)($Type*)>(&LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::isIntersectionOrUnionType))},
	{"isPrivateInOtherClass", "()Z", nullptr, 0, $method(static_cast<bool(LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::*)()>(&LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::isPrivateInOtherClass))},
	{"needsConversionToLambda", "()Z", nullptr, $FINAL, $method(static_cast<bool(LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::*)()>(&LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::needsConversionToLambda))},
	{"needsVarArgsConversion", "()Z", nullptr, 0, $method(static_cast<bool(LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::*)()>(&LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::needsVarArgsConversion))},
	{"receiverAccessible", "()Z", nullptr, 0, $method(static_cast<bool(LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::*)()>(&LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::receiverAccessible))},
	{}
};

$InnerClassInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "com.sun.tools.javac.comp.LambdaToMethod", "LambdaAnalyzerPreprocessor", 0},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext", "com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "ReferenceTranslationContext", $FINAL},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext", "com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "TranslationContext", $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCMemberReference", "com.sun.tools.javac.tree.JCTree", "JCMemberReference", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext",
	"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext",
	nullptr,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext_FieldInfo_,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext_MethodInfo_,
	"Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext<Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;>;",
	nullptr,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.LambdaToMethod"
};

$Object* allocate$LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext($Class* clazz) {
	return $of($alloc(LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext));
}

bool LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::$assertionsDisabled = false;

void LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::init$($LambdaToMethod$LambdaAnalyzerPreprocessor* this$1, $JCTree$JCMemberReference* tree) {
	$set(this, this$1, this$1);
	$LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext::init$(this$1, tree);
	$init($JCTree$JCMemberReference$ReferenceKind);
	this->isSuper = $nc(tree)->hasKind($JCTree$JCMemberReference$ReferenceKind::SUPER);
}

bool LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::needsVarArgsConversion() {
	return $nc(($cast($JCTree$JCMemberReference, this->tree)))->varargsElement != nullptr;
}

bool LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::isArrayOp() {
	return $equals($nc($nc(($cast($JCTree$JCMemberReference, this->tree)))->sym)->owner, $nc($nc(this->this$1->this$0)->syms)->arrayClass);
}

bool LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::receiverAccessible() {
	return $nc(($cast($JCTree$JCMemberReference, this->tree)))->ownerAccessible;
}

bool LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::isPrivateInOtherClass() {
	$useLocalCurrentObjectStackCache();
	if (!LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::$assertionsDisabled && ! !$nc(this->this$1->this$0)->nestmateLambdas) {
		$throwNew($AssertionError);
	}
	bool var$0 = ((int64_t)($nc($nc(($cast($JCTree$JCMemberReference, this->tree)))->sym)->flags() & (uint64_t)(int64_t)2)) != 0;
	if (var$0) {
		$var($Type, var$1, $nc($nc(this->this$1->this$0)->types)->erasure($($cast($Type, $nc($($nc($nc(($cast($JCTree$JCMemberReference, this->tree)))->sym)->enclClass()))->asType()))));
		var$0 = !$nc($nc(this->this$1->this$0)->types)->isSameType(var$1, $($nc($nc(this->this$1->this$0)->types)->erasure($($cast($Type, $nc($($nc(this->owner)->enclClass()))->asType())))));
	}
	return var$0;
}

bool LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::interfaceParameterIsIntersectionOrUnionType() {
	$useLocalCurrentObjectStackCache();
	$var($List, tl, $nc($($nc(($cast($JCTree$JCMemberReference, this->tree)))->getDescriptorType($nc(this->this$1->this$0)->types)))->getParameterTypes());
	for (; $nc(tl)->nonEmpty(); $assign(tl, $nc(tl)->tail)) {
		$var($Type, pt, $cast($Type, tl->head));
		return isIntersectionOrUnionType(pt);
	}
	return false;
}

bool LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::isIntersectionOrUnionType($Type* t) {
	$useLocalCurrentObjectStackCache();
	$init($LambdaToMethod$1);
	{
		$var($Type$TypeVar, tv, nullptr)
		switch ($nc($LambdaToMethod$1::$SwitchMap$javax$lang$model$type$TypeKind)->get($nc(($($nc(t)->getKind())))->ordinal())) {
		case 1:
			{}
		case 2:
			{
				return true;
			}
		case 3:
			{
				$assign(tv, $cast($Type$TypeVar, t));
				return isIntersectionOrUnionType($($nc(tv)->getUpperBound()));
			}
		}
	}
	return false;
}

bool LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::needsConversionToLambda() {
	bool var$5 = interfaceParameterIsIntersectionOrUnionType() || this->isSuper;
	bool var$4 = var$5 || needsVarArgsConversion();
	bool var$3 = var$4 || isArrayOp();
	bool var$2 = var$3 || (!$nc(this->this$1->this$0)->nestmateLambdas && isPrivateInOtherClass());
	bool var$1 = var$2 || $nc(this->this$1->this$0)->isProtectedInSuperClassOfEnclosingClassInOtherPackage($nc(($cast($JCTree$JCMemberReference, this->tree)))->sym, this->owner);
	bool var$0 = var$1 || !receiverAccessible();
	if (!var$0) {
		$init($MemberReferenceTree$ReferenceMode);
		$init($JCTree$JCMemberReference$ReferenceKind);
		bool var$6 = $nc(($cast($JCTree$JCMemberReference, this->tree)))->getMode() == $MemberReferenceTree$ReferenceMode::NEW && $nc(($cast($JCTree$JCMemberReference, this->tree)))->kind != $JCTree$JCMemberReference$ReferenceKind::ARRAY_CTOR;
		if (var$6) {
			bool var$7 = $nc($nc($nc(($cast($JCTree$JCMemberReference, this->tree)))->sym)->owner)->isDirectlyOrIndirectlyLocal();
			var$6 = (var$7 || $nc($nc($nc(($cast($JCTree$JCMemberReference, this->tree)))->sym)->owner)->isInner());
		}
		var$0 = (var$6);
	}
	return var$0;
}

$Type* LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::generatedRefSig() {
	return $nc($nc(this->this$1->this$0)->types)->erasure($nc($nc(($cast($JCTree$JCMemberReference, this->tree)))->sym)->type);
}

$Type* LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::bridgedRefSig() {
	return $nc($nc(this->this$1->this$0)->types)->erasure($nc($($nc($nc(this->this$1->this$0)->types)->findDescriptorSymbol($nc($nc(($cast($JCTree$JCMemberReference, this->tree)))->target)->tsym)))->type);
}

void clinit$LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext($Class* class$) {
	$load($LambdaToMethod);
	LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::$assertionsDisabled = !$LambdaToMethod::class$->desiredAssertionStatus();
}

LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext() {
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext, name, initialize, &_LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext_ClassInfo_, clinit$LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext, allocate$LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext);
	return class$;
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com