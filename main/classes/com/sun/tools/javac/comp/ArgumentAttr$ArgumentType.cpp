#include <com/sun/tools/javac/comp/ArgumentAttr$ArgumentType.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$UniquePos.h>
#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttributionMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef SPECULATIVE

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $ArgumentAttr = ::com::sun::tools::javac::comp::ArgumentAttr;
using $ArgumentAttr$UniquePos = ::com::sun::tools::javac::comp::ArgumentAttr$UniquePos;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$AttrMode = ::com::sun::tools::javac::comp::DeferredAttr$AttrMode;
using $DeferredAttr$AttributionMode = ::com::sun::tools::javac::comp::DeferredAttr$AttributionMode;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _ArgumentAttr$ArgumentType_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/ArgumentAttr;", nullptr, $FINAL | $SYNTHETIC, $field(ArgumentAttr$ArgumentType, this$0)},
	{"speculativeTree", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "TT;", 0, $field(ArgumentAttr$ArgumentType, speculativeTree$)},
	{"speculativeTypes", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/code/Type;>;", 0, $field(ArgumentAttr$ArgumentType, speculativeTypes)},
	{}
};

$MethodInfo _ArgumentAttr$ArgumentType_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Ljava/util/Map;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;TT;Ljava/util/Map<Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC, $method(static_cast<void(ArgumentAttr$ArgumentType::*)($ArgumentAttr*,$JCTree$JCExpression*,$Env*,$JCTree$JCExpression*,$Map*)>(&ArgumentAttr$ArgumentType::init$))},
	{"complete", "(Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL},
	{"dup", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType;", "(TT;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType<TT;>;", $ABSTRACT},
	{"overloadCheck", "(Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;)Lcom/sun/tools/javac/code/Type;", nullptr, $ABSTRACT},
	{"speculativeTree", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0},
	{"speculativeType", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{}
};

$InnerClassInfo _ArgumentAttr$ArgumentType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.ArgumentAttr$ArgumentType", "com.sun.tools.javac.comp.ArgumentAttr", "ArgumentType", $ABSTRACT},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredType", "com.sun.tools.javac.comp.DeferredAttr", "DeferredType", $PUBLIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ArgumentAttr$ArgumentType_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.ArgumentAttr$ArgumentType",
	"com.sun.tools.javac.comp.DeferredAttr$DeferredType",
	nullptr,
	_ArgumentAttr$ArgumentType_FieldInfo_,
	_ArgumentAttr$ArgumentType_MethodInfo_,
	"<T:Lcom/sun/tools/javac/tree/JCTree$JCExpression;>Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;",
	nullptr,
	_ArgumentAttr$ArgumentType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.ArgumentAttr"
};

$Object* allocate$ArgumentAttr$ArgumentType($Class* clazz) {
	return $of($alloc(ArgumentAttr$ArgumentType));
}

void ArgumentAttr$ArgumentType::init$($ArgumentAttr* this$0, $JCTree$JCExpression* tree, $Env* env, $JCTree$JCExpression* speculativeTree, $Map* speculativeTypes) {
	$set(this, this$0, this$0);
	$DeferredAttr$DeferredType::init$(static_cast<$DeferredAttr*>($nc(this$0->deferredAttr)), tree, env);
	$set(this, speculativeTree$, speculativeTree);
	$set(this, speculativeTypes, speculativeTypes);
}

$Type* ArgumentAttr$ArgumentType::complete($Attr$ResultInfo* resultInfo, $DeferredAttr$DeferredAttrContext* deferredAttrContext) {
	$useLocalCurrentObjectStackCache();
	$init($DeferredAttr$AttrMode);
	if ($nc(deferredAttrContext)->mode == $DeferredAttr$AttrMode::SPECULATIVE) {
		$init($Type);
		$var($Type, t, ($equals($nc(resultInfo)->pt, $Type::recoveryType)) ? $DeferredAttr$DeferredType::complete(resultInfo, deferredAttrContext) : overloadCheck(resultInfo, deferredAttrContext));
		$nc(this->speculativeTypes)->put(resultInfo, t);
		return t;
	} else {
		if (!$nc($nc(($cast($AttrContext, $nc(this->env)->info)))->attributionMode)->isSpeculative$) {
			$nc(this->this$0->argumentTypeCache)->remove($$new($ArgumentAttr$UniquePos, this->this$0, this->tree));
		}
		return $DeferredAttr$DeferredType::complete(resultInfo, deferredAttrContext);
	}
}

$Type* ArgumentAttr$ArgumentType::speculativeType($Symbol* msym, $Resolve$MethodResolutionPhase* phase) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->notPertinentToApplicability)->contains(msym)) {
		return $DeferredAttr$DeferredType::speculativeType(msym, phase);
	} else {
		{
			$var($Iterator, i$, $nc($($nc(this->speculativeTypes)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, _entry, $cast($Map$Entry, i$->next()));
				{
					$var($DeferredAttr$DeferredAttrContext, deferredAttrContext, $nc($nc(($cast($Attr$ResultInfo, $($nc(_entry)->getKey()))))->checkContext)->deferredAttrContext());
					if ($nc(deferredAttrContext)->phase == phase && deferredAttrContext->msym == msym) {
						return $cast($Type, _entry->getValue());
					}
				}
			}
		}
		$init($Type);
		return $Type::noType;
	}
}

$JCTree* ArgumentAttr$ArgumentType::speculativeTree($DeferredAttr$DeferredAttrContext* deferredAttrContext) {
	return $nc(this->notPertinentToApplicability)->contains($nc(deferredAttrContext)->msym) ? $DeferredAttr$DeferredType::speculativeTree(deferredAttrContext) : static_cast<$JCTree*>(this->speculativeTree$);
}

ArgumentAttr$ArgumentType::ArgumentAttr$ArgumentType() {
}

$Class* ArgumentAttr$ArgumentType::load$($String* name, bool initialize) {
	$loadClass(ArgumentAttr$ArgumentType, name, initialize, &_ArgumentAttr$ArgumentType_ClassInfo_, allocate$ArgumentAttr$ArgumentType);
	return class$;
}

$Class* ArgumentAttr$ArgumentType::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com