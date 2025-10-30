#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$5.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$CheckStuckPolicy.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredStuckPolicy.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType$SpeculativeCache$Entry.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType$SpeculativeCache.h>
#include <com/sun/tools/javac/comp/DeferredAttr$OverloadStuckPolicy.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <java/lang/AssertionError.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef DEFERRED
#undef EMPTY
#undef NONE
#undef SPECULATIVE

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$5 = ::com::sun::tools::javac::comp::DeferredAttr$5;
using $DeferredAttr$AttrMode = ::com::sun::tools::javac::comp::DeferredAttr$AttrMode;
using $DeferredAttr$CheckStuckPolicy = ::com::sun::tools::javac::comp::DeferredAttr$CheckStuckPolicy;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$DeferredStuckPolicy = ::com::sun::tools::javac::comp::DeferredAttr$DeferredStuckPolicy;
using $DeferredAttr$DeferredType$SpeculativeCache = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType$SpeculativeCache;
using $DeferredAttr$DeferredType$SpeculativeCache$Entry = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType$SpeculativeCache$Entry;
using $DeferredAttr$OverloadStuckPolicy = ::com::sun::tools::javac::comp::DeferredAttr$OverloadStuckPolicy;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _DeferredAttr$DeferredType_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$DeferredType, this$0)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(DeferredAttr$DeferredType, tree)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0, $field(DeferredAttr$DeferredType, env)},
	{"mode", "Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;", nullptr, 0, $field(DeferredAttr$DeferredType, mode)},
	{"notPertinentToApplicability", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol;>;", 0, $field(DeferredAttr$DeferredType, notPertinentToApplicability)},
	{"speculativeCache", "Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType$SpeculativeCache;", nullptr, 0, $field(DeferredAttr$DeferredType, speculativeCache)},
	{}
};

$MethodInfo _DeferredAttr$DeferredType_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0, $method(static_cast<void(DeferredAttr$DeferredType::*)($DeferredAttr*,$JCTree$JCExpression*,$Env*)>(&DeferredAttr$DeferredType::init$))},
	{"check", "(Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"check", "(Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredStuckPolicy;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(DeferredAttr$DeferredType::*)($Attr$ResultInfo*,$DeferredAttr$DeferredStuckPolicy*)>(&DeferredAttr$DeferredType::check))},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;", nullptr, $PUBLIC},
	{"complete", "(Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC},
	{"speculativeTree", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0},
	{"speculativeType", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DeferredAttr$DeferredType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredType", "com.sun.tools.javac.comp.DeferredAttr", "DeferredType", $PUBLIC},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredType$SpeculativeCache", "com.sun.tools.javac.comp.DeferredAttr$DeferredType", "SpeculativeCache", 0},
	{}
};

$ClassInfo _DeferredAttr$DeferredType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$DeferredType",
	"com.sun.tools.javac.code.Type",
	nullptr,
	_DeferredAttr$DeferredType_FieldInfo_,
	_DeferredAttr$DeferredType_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredAttr$DeferredType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$DeferredType($Class* clazz) {
	return $of($alloc(DeferredAttr$DeferredType));
}

void DeferredAttr$DeferredType::init$($DeferredAttr* this$0, $JCTree$JCExpression* tree, $Env* env) {
	$set(this, this$0, this$0);
	$init($TypeMetadata);
	$Type::init$(nullptr, $TypeMetadata::EMPTY);
	$set(this, notPertinentToApplicability, $new($HashSet));
	$set(this, tree, tree);
	$set(this, env, $nc(this$0->attr)->copyEnv(env));
	$set(this, speculativeCache, $new($DeferredAttr$DeferredType$SpeculativeCache, this));
}

DeferredAttr$DeferredType* DeferredAttr$DeferredType::cloneWithMetadata($TypeMetadata* md) {
	$throwNew($AssertionError, $of("Cannot add metadata to a deferred type"_s));
	$shouldNotReachHere();
}

$TypeTag* DeferredAttr$DeferredType::getTag() {
	$init($TypeTag);
	return $TypeTag::DEFERRED;
}

$String* DeferredAttr$DeferredType::toString() {
	return "DeferredType"_s;
}

$Type* DeferredAttr$DeferredType::speculativeType($Symbol* msym, $Resolve$MethodResolutionPhase* phase) {
	$var($DeferredAttr$DeferredType$SpeculativeCache$Entry, e, $nc(this->speculativeCache)->get(msym, phase));
	$init($Type);
	return e != nullptr ? $nc($nc(e)->speculativeTree)->type : static_cast<$Type*>($Type::noType);
}

$JCTree* DeferredAttr$DeferredType::speculativeTree($DeferredAttr$DeferredAttrContext* deferredAttrContext) {
	$var($DeferredAttr$DeferredType$SpeculativeCache$Entry, e, $nc(this->speculativeCache)->get($nc(deferredAttrContext)->msym, deferredAttrContext->phase));
	return e != nullptr ? $nc(e)->speculativeTree : this->this$0->stuckTree;
}

$Type* DeferredAttr$DeferredType::complete($Attr$ResultInfo* resultInfo, $DeferredAttr$DeferredAttrContext* deferredAttrContext) {
	$init($DeferredAttr$5);
	{
		$var($JCTree, speculativeTree, nullptr)
		switch ($nc($DeferredAttr$5::$SwitchMap$com$sun$tools$javac$comp$DeferredAttr$AttrMode)->get(($nc(deferredAttrContext)->mode)->ordinal())) {
		case 1:
			{
				$init($DeferredAttr$AttrMode);
				$Assert::check(this->mode == nullptr || this->mode == $DeferredAttr$AttrMode::SPECULATIVE);
				$assign(speculativeTree, this->this$0->attribSpeculative(this->tree, this->env, resultInfo));
				$nc(this->speculativeCache)->put(speculativeTree, resultInfo);
				return $nc(speculativeTree)->type;
			}
		case 2:
			{
				$Assert::check(this->mode != nullptr);
				return $nc(this->this$0->attr)->attribTree(this->tree, this->env, resultInfo);
			}
		}
	}
	$Assert::error();
	return nullptr;
}

$Type* DeferredAttr$DeferredType::check($Attr$ResultInfo* resultInfo) {
	$useLocalCurrentObjectStackCache();
	$var($DeferredAttr$DeferredStuckPolicy, deferredStuckPolicy, nullptr);
	$init($TypeTag);
	bool var$0 = $nc($nc(resultInfo)->pt)->hasTag($TypeTag::NONE);
	if (var$0 || $nc($nc(resultInfo)->pt)->isErroneous()) {
		$assign(deferredStuckPolicy, this->this$0->dummyStuckPolicy);
	} else {
		$init($DeferredAttr$AttrMode);
		bool var$2 = $nc($($nc(resultInfo->checkContext)->deferredAttrContext()))->mode == $DeferredAttr$AttrMode::SPECULATIVE;
		if (var$2 || $nc($($nc(resultInfo->checkContext)->deferredAttrContext()))->insideOverloadPhase()) {
			$assign(deferredStuckPolicy, $new($DeferredAttr$OverloadStuckPolicy, this->this$0, resultInfo, this));
		} else {
			$assign(deferredStuckPolicy, $new($DeferredAttr$CheckStuckPolicy, this->this$0, resultInfo, this));
		}
	}
	return check(resultInfo, deferredStuckPolicy);
}

$Type* DeferredAttr$DeferredType::check($Attr$ResultInfo* resultInfo, $DeferredAttr$DeferredStuckPolicy* deferredStuckPolicy) {
	$useLocalCurrentObjectStackCache();
	$var($DeferredAttr$DeferredAttrContext, deferredAttrContext, $nc($nc(resultInfo)->checkContext)->deferredAttrContext());
	$Assert::check(deferredAttrContext != this->this$0->emptyDeferredAttrContext);
	if ($nc(deferredStuckPolicy)->isStuck()) {
		$nc(deferredAttrContext)->addDeferredAttrNode(this, resultInfo, deferredStuckPolicy);
		$init($DeferredAttr$AttrMode);
		if (deferredAttrContext->mode == $DeferredAttr$AttrMode::SPECULATIVE) {
			$nc(this->notPertinentToApplicability)->add(deferredAttrContext->msym);
			$set(this, mode, $DeferredAttr$AttrMode::SPECULATIVE);
		}
		$init($Type);
		return $Type::noType;
	} else {
		{
			$var($Throwable, var$0, nullptr);
			$var($Type, var$2, nullptr);
			bool return$1 = false;
			try {
				$assign(var$2, complete(resultInfo, deferredAttrContext));
				return$1 = true;
				goto $finally;
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				$set(this, mode, $nc(deferredAttrContext)->mode);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

DeferredAttr$DeferredType::DeferredAttr$DeferredType() {
}

$Class* DeferredAttr$DeferredType::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$DeferredType, name, initialize, &_DeferredAttr$DeferredType_ClassInfo_, allocate$DeferredAttr$DeferredType);
	return class$;
}

$Class* DeferredAttr$DeferredType::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com