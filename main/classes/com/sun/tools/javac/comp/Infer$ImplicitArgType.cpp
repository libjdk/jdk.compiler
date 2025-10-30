#include <com/sun/tools/javac/comp/Infer$ImplicitArgType.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$JCVoidType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$MapVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredTypeMap.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <jcpp.h>

#undef BOT
#undef DEFERRED
#undef SPECULATIVE

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$JCVoidType = ::com::sun::tools::javac::code::Type$JCVoidType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$MapVisitor = ::com::sun::tools::javac::code::Types$MapVisitor;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$AttrMode = ::com::sun::tools::javac::comp::DeferredAttr$AttrMode;
using $DeferredAttr$DeferredTypeMap = ::com::sun::tools::javac::comp::DeferredAttr$DeferredTypeMap;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Infer$ImplicitArgType_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$ImplicitArgType, this$0)},
	{}
};

$MethodInfo _Infer$ImplicitArgType_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)V", nullptr, $PUBLIC, $method(static_cast<void(Infer$ImplicitArgType::*)($Infer*,$Symbol*,$Resolve$MethodResolutionPhase*)>(&Infer$ImplicitArgType::init$))},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Infer$ImplicitArgType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$ImplicitArgType", "com.sun.tools.javac.comp.Infer", "ImplicitArgType", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredTypeMap", "com.sun.tools.javac.comp.DeferredAttr", "DeferredTypeMap", 0},
	{}
};

$ClassInfo _Infer$ImplicitArgType_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Infer$ImplicitArgType",
	"com.sun.tools.javac.comp.DeferredAttr$DeferredTypeMap",
	nullptr,
	_Infer$ImplicitArgType_FieldInfo_,
	_Infer$ImplicitArgType_MethodInfo_,
	"Lcom/sun/tools/javac/comp/DeferredAttr$DeferredTypeMap<Ljava/lang/Void;>;",
	nullptr,
	_Infer$ImplicitArgType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$ImplicitArgType($Class* clazz) {
	return $of($alloc(Infer$ImplicitArgType));
}

void Infer$ImplicitArgType::init$($Infer* this$0, $Symbol* msym, $Resolve$MethodResolutionPhase* phase) {
	$set(this, this$0, this$0);
	$init($DeferredAttr$AttrMode);
	$DeferredAttr$DeferredTypeMap::init$(static_cast<$DeferredAttr*>($nc(($nc(this$0->rs)->deferredAttr))), $DeferredAttr$AttrMode::SPECULATIVE, msym, phase);
}

$Type* Infer$ImplicitArgType::visitClassType($Type$ClassType* t, $Void* aVoid) {
	return $nc(this->this$0->types)->erasure(static_cast<$Type*>(t));
}

$Type* Infer$ImplicitArgType::visitType($Type* t$renamed, $Void* _unused) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, t$renamed);
	$init($TypeTag);
	if ($nc(t)->hasTag($TypeTag::DEFERRED)) {
		return visit($($cast($Type, $DeferredAttr$DeferredTypeMap::visitType(t, nullptr))));
	} else {
		if (t->hasTag($TypeTag::BOT)) {
			$assign(t, $nc($($nc(this->this$0->types)->boxedClass($nc(this->this$0->syms)->voidType)))->type);
		}
	}
	return t;
}

$Object* Infer$ImplicitArgType::visitType($Type* t, Object$* _unused) {
	return $of(this->visitType(t, $cast($Void, _unused)));
}

$Object* Infer$ImplicitArgType::visitClassType($Type$ClassType* t, Object$* aVoid) {
	return $of(this->visitClassType(t, $cast($Void, aVoid)));
}

Infer$ImplicitArgType::Infer$ImplicitArgType() {
}

$Class* Infer$ImplicitArgType::load$($String* name, bool initialize) {
	$loadClass(Infer$ImplicitArgType, name, initialize, &_Infer$ImplicitArgType_ClassInfo_, allocate$Infer$ImplicitArgType);
	return class$;
}

$Class* Infer$ImplicitArgType::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com