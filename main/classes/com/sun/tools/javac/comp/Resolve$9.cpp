#include <com/sun/tools/javac/comp/Resolve$9.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredTypeMap.h>
#include <com/sun/tools/javac/comp/DeferredAttr$RecoveryDeferredTypeMap.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveDeferredRecoveryMap.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef SPECULATIVE

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
using $Types$TypeMapping = ::com::sun::tools::javac::code::Types$TypeMapping;
using $DeferredAttr$AttrMode = ::com::sun::tools::javac::comp::DeferredAttr$AttrMode;
using $DeferredAttr$DeferredTypeMap = ::com::sun::tools::javac::comp::DeferredAttr$DeferredTypeMap;
using $DeferredAttr$RecoveryDeferredTypeMap = ::com::sun::tools::javac::comp::DeferredAttr$RecoveryDeferredTypeMap;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$LogResolveHelper = ::com::sun::tools::javac::comp::Resolve$LogResolveHelper;
using $Resolve$MethodResolutionContext = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $Resolve$ResolveDeferredRecoveryMap = ::com::sun::tools::javac::comp::Resolve$ResolveDeferredRecoveryMap;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Function = ::java::util::function::Function;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$9_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$9, this$0)},
	{}
};

$MethodInfo _Resolve$9_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;)V", nullptr, 0, $method(static_cast<void(Resolve$9::*)($Resolve*)>(&Resolve$9::init$))},
	{"getArgumentTypes", "(Lcom/sun/tools/javac/comp/Resolve$ResolveError;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/comp/Resolve$ResolveError;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"resolveDiagnosticNeeded", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", $PUBLIC},
	{}
};

$EnclosingMethodInfo _Resolve$9_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Resolve",
	nullptr,
	nullptr
};

$InnerClassInfo _Resolve$9_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$9", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Resolve$LogResolveHelper", "com.sun.tools.javac.comp.Resolve", "LogResolveHelper", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Resolve$9_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$9",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Resolve$LogResolveHelper",
	_Resolve$9_FieldInfo_,
	_Resolve$9_MethodInfo_,
	nullptr,
	&_Resolve$9_EnclosingMethodInfo_,
	_Resolve$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$9($Class* clazz) {
	return $of($alloc(Resolve$9));
}

void Resolve$9::init$($Resolve* this$0) {
	$set(this, this$0, this$0);
}

bool Resolve$9::resolveDiagnosticNeeded($Type* site, $List* argtypes, $List* typeargtypes) {
	bool var$1 = !$nc(site)->isErroneous();
	bool var$0 = var$1 && !$Type::isErroneous(argtypes);
	return var$0 && (typeargtypes == nullptr || !$Type::isErroneous(typeargtypes));
}

$List* Resolve$9::getArgumentTypes($Resolve$ResolveError* errSym, $Symbol* accessedSym, $Name* name, $List* argtypes) {
	$init($DeferredAttr$AttrMode);
	return $nc(argtypes)->map($$new($Resolve$ResolveDeferredRecoveryMap, this->this$0, $DeferredAttr$AttrMode::SPECULATIVE, accessedSym, $nc(this->this$0->currentResolutionContext)->step));
}

Resolve$9::Resolve$9() {
}

$Class* Resolve$9::load$($String* name, bool initialize) {
	$loadClass(Resolve$9, name, initialize, &_Resolve$9_ClassInfo_, allocate$Resolve$9);
	return class$;
}

$Class* Resolve$9::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com