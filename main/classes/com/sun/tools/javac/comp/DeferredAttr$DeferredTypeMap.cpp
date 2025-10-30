#include <com/sun/tools/javac/comp/DeferredAttr$DeferredTypeMap.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$MapVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/DeferredAttr$5.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

#undef DEFERRED

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$MapVisitor = ::com::sun::tools::javac::code::Types$MapVisitor;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$5 = ::com::sun::tools::javac::comp::DeferredAttr$5;
using $DeferredAttr$AttrMode = ::com::sun::tools::javac::comp::DeferredAttr$AttrMode;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _DeferredAttr$DeferredTypeMap_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$DeferredTypeMap, this$0)},
	{"deferredAttrContext", "Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;", nullptr, 0, $field(DeferredAttr$DeferredTypeMap, deferredAttrContext)},
	{}
};

$MethodInfo _DeferredAttr$DeferredTypeMap_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr;Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)V", nullptr, $PROTECTED, $method(static_cast<void(DeferredAttr$DeferredTypeMap::*)($DeferredAttr*,$DeferredAttr$AttrMode*,$Symbol*,$Resolve$MethodResolutionPhase*)>(&DeferredAttr$DeferredTypeMap::init$))},
	{"typeOf", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;TT;)Lcom/sun/tools/javac/code/Type;", $PROTECTED},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type;TT;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{}
};

$InnerClassInfo _DeferredAttr$DeferredTypeMap_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredTypeMap", "com.sun.tools.javac.comp.DeferredAttr", "DeferredTypeMap", 0},
	{"com.sun.tools.javac.code.Type$StructuralTypeMapping", "com.sun.tools.javac.code.Type", "StructuralTypeMapping", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DeferredAttr$DeferredTypeMap_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$DeferredTypeMap",
	"com.sun.tools.javac.code.Type$StructuralTypeMapping",
	nullptr,
	_DeferredAttr$DeferredTypeMap_FieldInfo_,
	_DeferredAttr$DeferredTypeMap_MethodInfo_,
	"<T:Ljava/lang/Object;>Lcom/sun/tools/javac/code/Type$StructuralTypeMapping<TT;>;",
	nullptr,
	_DeferredAttr$DeferredTypeMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$DeferredTypeMap($Class* clazz) {
	return $of($alloc(DeferredAttr$DeferredTypeMap));
}

void DeferredAttr$DeferredTypeMap::init$($DeferredAttr* this$0, $DeferredAttr$AttrMode* mode, $Symbol* msym, $Resolve$MethodResolutionPhase* phase) {
	$set(this, this$0, this$0);
	$Type$StructuralTypeMapping::init$();
	$set(this, deferredAttrContext, $new($DeferredAttr$DeferredAttrContext, this$0, mode, msym, phase, $nc(this$0->infer)->emptyContext, this$0->emptyDeferredAttrContext, $nc(this$0->types)->noWarnings));
}

$Object* DeferredAttr$DeferredTypeMap::visitType($Type* t, Object$* p) {
	$init($TypeTag);
	if (!$nc(t)->hasTag($TypeTag::DEFERRED)) {
		return $of($Type$StructuralTypeMapping::visitType(t, p));
	} else {
		$var($DeferredAttr$DeferredType, dt, $cast($DeferredAttr$DeferredType, t));
		return $of(typeOf(dt, p));
	}
}

$Type* DeferredAttr$DeferredTypeMap::typeOf($DeferredAttr$DeferredType* dt, Object$* p) {
	$init($DeferredAttr$5);
	switch ($nc($DeferredAttr$5::$SwitchMap$com$sun$tools$javac$comp$DeferredAttr$AttrMode)->get(($nc(this->deferredAttrContext)->mode)->ordinal())) {
	case 2:
		{
			$init($Type);
			return $nc($nc(dt)->tree)->type == nullptr ? static_cast<$Type*>($Type::noType) : $nc($nc(dt)->tree)->type;
		}
	case 1:
		{
			return $nc(dt)->speculativeType($nc(this->deferredAttrContext)->msym, $nc(this->deferredAttrContext)->phase);
		}
	}
	$Assert::error();
	return nullptr;
}

DeferredAttr$DeferredTypeMap::DeferredAttr$DeferredTypeMap() {
}

$Class* DeferredAttr$DeferredTypeMap::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$DeferredTypeMap, name, initialize, &_DeferredAttr$DeferredTypeMap_ClassInfo_, allocate$DeferredAttr$DeferredTypeMap);
	return class$;
}

$Class* DeferredAttr$DeferredTypeMap::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com