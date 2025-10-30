#include <com/sun/tools/javac/comp/DeferredAttr$RecoveryDeferredTypeMap.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types$MapVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr$RecoveryInfo.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredTypeMap.h>
#include <com/sun/tools/javac/comp/DeferredAttr$RecoveryDeferredTypeMap$1.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

#undef BOX
#undef CHECK
#undef ERROR
#undef LAMBDA
#undef METHOD
#undef REFERENCE

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $Types$MapVisitor = ::com::sun::tools::javac::code::Types$MapVisitor;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$RecoveryInfo = ::com::sun::tools::javac::comp::Attr$RecoveryInfo;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$AttrMode = ::com::sun::tools::javac::comp::DeferredAttr$AttrMode;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $DeferredAttr$DeferredTypeMap = ::com::sun::tools::javac::comp::DeferredAttr$DeferredTypeMap;
using $DeferredAttr$RecoveryDeferredTypeMap$1 = ::com::sun::tools::javac::comp::DeferredAttr$RecoveryDeferredTypeMap$1;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _DeferredAttr$RecoveryDeferredTypeMap_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$RecoveryDeferredTypeMap, this$0)},
	{}
};

$MethodInfo _DeferredAttr$RecoveryDeferredTypeMap_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr;Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)V", nullptr, $PUBLIC, $method(static_cast<void(DeferredAttr$RecoveryDeferredTypeMap::*)($DeferredAttr*,$DeferredAttr$AttrMode*,$Symbol*,$Resolve$MethodResolutionPhase*)>(&DeferredAttr$RecoveryDeferredTypeMap::init$))},
	{"map", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PRIVATE, $method(static_cast<$List*(DeferredAttr$RecoveryDeferredTypeMap::*)($List*,$List*)>(&DeferredAttr$RecoveryDeferredTypeMap::map))},
	{"recover", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(DeferredAttr$RecoveryDeferredTypeMap::*)($DeferredAttr$DeferredType*,$Type*)>(&DeferredAttr$RecoveryDeferredTypeMap::recover))},
	{"typeOf", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PROTECTED},
	{"typeOf", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _DeferredAttr$RecoveryDeferredTypeMap_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap", "com.sun.tools.javac.comp.DeferredAttr", "RecoveryDeferredTypeMap", $PUBLIC},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredTypeMap", "com.sun.tools.javac.comp.DeferredAttr", "DeferredTypeMap", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DeferredAttr$RecoveryDeferredTypeMap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap",
	"com.sun.tools.javac.comp.DeferredAttr$DeferredTypeMap",
	nullptr,
	_DeferredAttr$RecoveryDeferredTypeMap_FieldInfo_,
	_DeferredAttr$RecoveryDeferredTypeMap_MethodInfo_,
	"Lcom/sun/tools/javac/comp/DeferredAttr$DeferredTypeMap<Lcom/sun/tools/javac/code/Type;>;",
	nullptr,
	_DeferredAttr$RecoveryDeferredTypeMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$RecoveryDeferredTypeMap($Class* clazz) {
	return $of($alloc(DeferredAttr$RecoveryDeferredTypeMap));
}

void DeferredAttr$RecoveryDeferredTypeMap::init$($DeferredAttr* this$0, $DeferredAttr$AttrMode* mode, $Symbol* msym, $Resolve$MethodResolutionPhase* phase) {
	$set(this, this$0, this$0);
	$init($Resolve$MethodResolutionPhase);
	$DeferredAttr$DeferredTypeMap::init$(this$0, mode, msym, phase != nullptr ? phase : $Resolve$MethodResolutionPhase::BOX);
}

$Type* DeferredAttr$RecoveryDeferredTypeMap::typeOf($DeferredAttr$DeferredType* dt, $Type* pt) {
	$var($Type, owntype, $DeferredAttr$DeferredTypeMap::typeOf(dt, pt));
	$init($Type);
	return $equals(owntype, $Type::noType) ? recover(dt, pt) : owntype;
}

$Type* DeferredAttr$RecoveryDeferredTypeMap::visitMethodType($Type$MethodType* t, $Type* pt) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	$init($DeferredAttr$AttrMode);
	if ($nc(t)->hasTag($TypeTag::METHOD) && $nc(this->deferredAttrContext)->mode == $DeferredAttr$AttrMode::CHECK) {
		$var($Type, mtype, $nc($nc(this->deferredAttrContext)->msym)->type);
		$assign(mtype, $nc(mtype)->hasTag($TypeTag::ERROR) ? $nc(($cast($Type$ErrorType, mtype)))->getOriginalType() : ($Type*)nullptr);
		if (mtype != nullptr && mtype->hasTag($TypeTag::METHOD)) {
			$var($List, var$0, t->getParameterTypes());
			$var($List, argtypes1, map(var$0, $(mtype->getParameterTypes())));
			$var($Type, var$1, t->getReturnType());
			$var($Type, restype1, $cast($Type, visit(var$1, $(mtype->getReturnType()))));
			$var($List, var$2, t->getThrownTypes());
			$var($List, thrown1, map(var$2, $(mtype->getThrownTypes())));
			bool var$4 = argtypes1 == t->getParameterTypes();
			bool var$3 = var$4 && restype1 == t->getReturnType();
			if (var$3 && thrown1 == t->getThrownTypes()) {
				return t;
			} else {
				return $new($Type$MethodType, argtypes1, restype1, thrown1, t->tsym);
			}
		}
	}
	return $cast($Type, $DeferredAttr$DeferredTypeMap::visitMethodType(t, pt));
}

$Type* DeferredAttr$RecoveryDeferredTypeMap::recover($DeferredAttr$DeferredType* dt, $Type* pt) {
	$useLocalCurrentObjectStackCache();
	$init($JCTree$Tag);
	bool var$0 = $nc($nc(dt)->tree)->hasTag($JCTree$Tag::REFERENCE);
	bool isLambdaOrMemberRef = var$0 || $nc($nc(dt)->tree)->hasTag($JCTree$Tag::LAMBDA);
	bool needsRecoveryType = pt == nullptr || (isLambdaOrMemberRef && !$nc(this->this$0->types)->isFunctionalInterface(pt));
	$init($Type);
	$var($Type, ptRecovery, needsRecoveryType ? static_cast<$Type*>($Type::recoveryType) : pt);
	dt->check($$new($DeferredAttr$RecoveryDeferredTypeMap$1, this, static_cast<$Attr*>($nc(this->this$0->attr)), this->deferredAttrContext, ptRecovery));
	return $DeferredAttr$DeferredTypeMap::visit(dt);
}

$List* DeferredAttr$RecoveryDeferredTypeMap::map($List* ts, $List* pts) {
	$useLocalCurrentObjectStackCache();
	if ($nc(ts)->nonEmpty()) {
		$var($List, tail1, map(ts->tail, pts != nullptr ? $nc(pts)->tail : ($List*)nullptr));
		$var($Type, t, $cast($Type, visit($cast($Type, ts->head), pts != nullptr && pts->nonEmpty() ? $cast($Type, $nc(pts)->head) : ($Type*)nullptr)));
		if (tail1 != ts->tail || !$equals(t, ts->head)) {
			return $nc(tail1)->prepend(t);
		}
	}
	return ts;
}

$Type* DeferredAttr$RecoveryDeferredTypeMap::typeOf($DeferredAttr$DeferredType* dt, Object$* pt) {
	return this->typeOf(dt, $cast($Type, pt));
}

$Object* DeferredAttr$RecoveryDeferredTypeMap::visitType($Type* t, Object$* p) {
	return $of($DeferredAttr$DeferredTypeMap::visitType(t, p));
}

$Object* DeferredAttr$RecoveryDeferredTypeMap::visitMethodType($Type$MethodType* t, Object$* pt) {
	return $of(this->visitMethodType(t, $cast($Type, pt)));
}

DeferredAttr$RecoveryDeferredTypeMap::DeferredAttr$RecoveryDeferredTypeMap() {
}

$Class* DeferredAttr$RecoveryDeferredTypeMap::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$RecoveryDeferredTypeMap, name, initialize, &_DeferredAttr$RecoveryDeferredTypeMap_ClassInfo_, allocate$DeferredAttr$RecoveryDeferredTypeMap);
	return class$;
}

$Class* DeferredAttr$RecoveryDeferredTypeMap::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com