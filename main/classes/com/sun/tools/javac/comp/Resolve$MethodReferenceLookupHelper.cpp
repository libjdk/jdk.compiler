#include <com/sun/tools/javac/comp/Resolve$MethodReferenceLookupHelper.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$LookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$MethodReferenceLookupHelper$1.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$UnboundMethodReferenceLookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <jcpp.h>

#undef BOUND
#undef NONE
#undef STATIC
#undef SUPER

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Env = ::com::sun::tools::javac::comp::Env;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$LookupHelper = ::com::sun::tools::javac::comp::Resolve$LookupHelper;
using $Resolve$MethodReferenceLookupHelper$1 = ::com::sun::tools::javac::comp::Resolve$MethodReferenceLookupHelper$1;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $Resolve$ReferenceLookupHelper = ::com::sun::tools::javac::comp::Resolve$ReferenceLookupHelper;
using $Resolve$UnboundMethodReferenceLookupHelper = ::com::sun::tools::javac::comp::Resolve$UnboundMethodReferenceLookupHelper;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMemberReference$ReferenceKind = ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$MethodReferenceLookupHelper_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$MethodReferenceLookupHelper, this$0)},
	{"originalSite", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Resolve$MethodReferenceLookupHelper, originalSite)},
	{}
};

$MethodInfo _Resolve$MethodReferenceLookupHelper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)V", 0, $method(static_cast<void(Resolve$MethodReferenceLookupHelper::*)($Resolve*,$JCTree$JCMemberReference*,$Name*,$Type*,$List*,$List*,$Resolve$MethodResolutionPhase*)>(&Resolve$MethodReferenceLookupHelper::init$))},
	{"lookup", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", $FINAL},
	{"referenceKind", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind;", nullptr, 0},
	{"unboundLookup", "(Lcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupHelper;", nullptr, 0},
	{}
};

$InnerClassInfo _Resolve$MethodReferenceLookupHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$MethodReferenceLookupHelper", "com.sun.tools.javac.comp.Resolve", "MethodReferenceLookupHelper", 0},
	{"com.sun.tools.javac.comp.Resolve$ReferenceLookupHelper", "com.sun.tools.javac.comp.Resolve", "ReferenceLookupHelper", $ABSTRACT},
	{"com.sun.tools.javac.comp.Resolve$MethodReferenceLookupHelper$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Resolve$MethodReferenceLookupHelper_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$MethodReferenceLookupHelper",
	"com.sun.tools.javac.comp.Resolve$ReferenceLookupHelper",
	nullptr,
	_Resolve$MethodReferenceLookupHelper_FieldInfo_,
	_Resolve$MethodReferenceLookupHelper_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$MethodReferenceLookupHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$MethodReferenceLookupHelper($Class* clazz) {
	return $of($alloc(Resolve$MethodReferenceLookupHelper));
}

void Resolve$MethodReferenceLookupHelper::init$($Resolve* this$0, $JCTree$JCMemberReference* referenceTree, $Name* name, $Type* site, $List* argtypes, $List* typeargtypes, $Resolve$MethodResolutionPhase* maxPhase) {
	$set(this, this$0, this$0);
	$Resolve$ReferenceLookupHelper::init$(this$0, referenceTree, name, $($nc(this$0->types)->skipTypeVars(site, true)), argtypes, typeargtypes, maxPhase);
	$set(this, originalSite, site);
}

$Symbol* Resolve$MethodReferenceLookupHelper::lookup($Env* env, $Resolve$MethodResolutionPhase* phase) {
	$useLocalCurrentObjectStackCache();
	$var($Env, var$0, env);
	$var($Type, var$1, this->site);
	$var($Name, var$2, this->name);
	$var($List, var$3, this->argtypes);
	$var($List, var$4, this->typeargtypes);
	bool var$5 = $nc(phase)->isBoxingRequired();
	return this->this$0->findMethod(var$0, var$1, var$2, var$3, var$4, var$5, phase->isVarargsRequired());
}

$Resolve$ReferenceLookupHelper* Resolve$MethodReferenceLookupHelper::unboundLookup($InferenceContext* inferenceContext) {
	if ($TreeInfo::isStaticSelector($nc(this->referenceTree)->expr, this->this$0->names)) {
		bool var$0 = $nc(this->argtypes)->nonEmpty();
		if (var$0) {
			$init($TypeTag);
			bool var$1 = $nc(($cast($Type, $nc(this->argtypes)->head)))->hasTag($TypeTag::NONE);
			var$0 = (var$1 || $nc(this->this$0->types)->isSubtypeUnchecked($($nc(inferenceContext)->asUndetVar($cast($Type, $nc(this->argtypes)->head))), this->originalSite));
		}
		if (var$0) {
			return $new($Resolve$UnboundMethodReferenceLookupHelper, this->this$0, this->referenceTree, this->name, this->originalSite, this->argtypes, this->typeargtypes, this->maxPhase);
		} else {
			return $new($Resolve$MethodReferenceLookupHelper$1, this, this->referenceTree, this->name, this->site, this->argtypes, this->typeargtypes, this->maxPhase);
		}
	} else {
		return $Resolve$ReferenceLookupHelper::unboundLookup(inferenceContext);
	}
}

$JCTree$JCMemberReference$ReferenceKind* Resolve$MethodReferenceLookupHelper::referenceKind($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	if ($nc(sym)->isStatic()) {
		$init($JCTree$JCMemberReference$ReferenceKind);
		return $JCTree$JCMemberReference$ReferenceKind::STATIC;
	} else {
		$var($Name, selName, $TreeInfo::name($($cast($JCTree, $nc(this->referenceTree)->getQualifierExpression()))));
		$init($JCTree$JCMemberReference$ReferenceKind);
		return selName != nullptr && selName == $nc(this->this$0->names)->_super ? $JCTree$JCMemberReference$ReferenceKind::SUPER : $JCTree$JCMemberReference$ReferenceKind::BOUND;
	}
}

Resolve$MethodReferenceLookupHelper::Resolve$MethodReferenceLookupHelper() {
}

$Class* Resolve$MethodReferenceLookupHelper::load$($String* name, bool initialize) {
	$loadClass(Resolve$MethodReferenceLookupHelper, name, initialize, &_Resolve$MethodReferenceLookupHelper_ClassInfo_, allocate$Resolve$MethodReferenceLookupHelper);
	return class$;
}

$Class* Resolve$MethodReferenceLookupHelper::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com