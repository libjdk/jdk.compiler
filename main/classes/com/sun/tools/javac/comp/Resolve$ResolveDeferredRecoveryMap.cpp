#include <com/sun/tools/javac/comp/Resolve$ResolveDeferredRecoveryMap.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/DeferredAttr$RecoveryDeferredTypeMap.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Resolve$18.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$AttrMode = ::com::sun::tools::javac::comp::DeferredAttr$AttrMode;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $DeferredAttr$RecoveryDeferredTypeMap = ::com::sun::tools::javac::comp::DeferredAttr$RecoveryDeferredTypeMap;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$18 = ::com::sun::tools::javac::comp::Resolve$18;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
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

$FieldInfo _Resolve$ResolveDeferredRecoveryMap_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$ResolveDeferredRecoveryMap, this$0)},
	{}
};

$MethodInfo _Resolve$ResolveDeferredRecoveryMap_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)V", nullptr, $PUBLIC, $method(static_cast<void(Resolve$ResolveDeferredRecoveryMap::*)($Resolve*,$DeferredAttr$AttrMode*,$Symbol*,$Resolve$MethodResolutionPhase*)>(&Resolve$ResolveDeferredRecoveryMap::init$))},
	{"typeOf", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PROTECTED},
	{"typeOf", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Resolve$ResolveDeferredRecoveryMap_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$ResolveDeferredRecoveryMap", "com.sun.tools.javac.comp.Resolve", "ResolveDeferredRecoveryMap", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap", "com.sun.tools.javac.comp.DeferredAttr", "RecoveryDeferredTypeMap", $PUBLIC},
	{}
};

$ClassInfo _Resolve$ResolveDeferredRecoveryMap_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$ResolveDeferredRecoveryMap",
	"com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap",
	nullptr,
	_Resolve$ResolveDeferredRecoveryMap_FieldInfo_,
	_Resolve$ResolveDeferredRecoveryMap_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$ResolveDeferredRecoveryMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$ResolveDeferredRecoveryMap($Class* clazz) {
	return $of($alloc(Resolve$ResolveDeferredRecoveryMap));
}

void Resolve$ResolveDeferredRecoveryMap::init$($Resolve* this$0, $DeferredAttr$AttrMode* mode, $Symbol* msym, $Resolve$MethodResolutionPhase* step) {
	$set(this, this$0, this$0);
	$DeferredAttr$RecoveryDeferredTypeMap::init$(static_cast<$DeferredAttr*>($nc(this$0->deferredAttr)), mode, msym, step);
}

$Type* Resolve$ResolveDeferredRecoveryMap::typeOf($DeferredAttr$DeferredType* dt, $Type* pt) {
	$useLocalCurrentObjectStackCache();
	$var($Type, res, $DeferredAttr$RecoveryDeferredTypeMap::typeOf(dt, pt));
	if (!$nc(res)->isErroneous()) {
		$init($Resolve$18);
		switch ($nc($Resolve$18::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc($($TreeInfo::skipParens($nc(dt)->tree)))->getTag())))->ordinal())) {
		case 1:
			{}
		case 2:
			{
				return dt;
			}
		case 3:
			{
				$init($Type);
				return $equals(res, $Type::recoveryType) ? static_cast<$Type*>(dt) : res;
			}
		}
	}
	return res;
}

$Type* Resolve$ResolveDeferredRecoveryMap::typeOf($DeferredAttr$DeferredType* dt, Object$* pt) {
	return this->typeOf(dt, $cast($Type, pt));
}

Resolve$ResolveDeferredRecoveryMap::Resolve$ResolveDeferredRecoveryMap() {
}

$Class* Resolve$ResolveDeferredRecoveryMap::load$($String* name, bool initialize) {
	$loadClass(Resolve$ResolveDeferredRecoveryMap, name, initialize, &_Resolve$ResolveDeferredRecoveryMap_ClassInfo_, allocate$Resolve$ResolveDeferredRecoveryMap);
	return class$;
}

$Class* Resolve$ResolveDeferredRecoveryMap::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com