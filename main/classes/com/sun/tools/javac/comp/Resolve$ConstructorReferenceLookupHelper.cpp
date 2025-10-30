#include <com/sun/tools/javac/comp/Resolve$ConstructorReferenceLookupHelper.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve$BadConstructorReferenceError.h>
#include <com/sun/tools/javac/comp/Resolve$InvalidSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve$LookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <jcpp.h>

#undef IMPLICIT_INNER
#undef NONE
#undef TOPLEVEL

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$BadConstructorReferenceError = ::com::sun::tools::javac::comp::Resolve$BadConstructorReferenceError;
using $Resolve$InvalidSymbolError = ::com::sun::tools::javac::comp::Resolve$InvalidSymbolError;
using $Resolve$LookupHelper = ::com::sun::tools::javac::comp::Resolve$LookupHelper;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $Resolve$ReferenceLookupHelper = ::com::sun::tools::javac::comp::Resolve$ReferenceLookupHelper;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMemberReference$ReferenceKind = ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind;
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

$FieldInfo _Resolve$ConstructorReferenceLookupHelper_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$ConstructorReferenceLookupHelper, this$0)},
	{"needsInference", "Z", nullptr, 0, $field(Resolve$ConstructorReferenceLookupHelper, needsInference)},
	{}
};

$MethodInfo _Resolve$ConstructorReferenceLookupHelper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)V", 0, $method(static_cast<void(Resolve$ConstructorReferenceLookupHelper::*)($Resolve*,$JCTree$JCMemberReference*,$Type*,$List*,$List*,$Resolve$MethodResolutionPhase*)>(&Resolve$ConstructorReferenceLookupHelper::init$))},
	{"lookup", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", $PROTECTED},
	{"referenceKind", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind;", nullptr, 0},
	{}
};

$InnerClassInfo _Resolve$ConstructorReferenceLookupHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$ConstructorReferenceLookupHelper", "com.sun.tools.javac.comp.Resolve", "ConstructorReferenceLookupHelper", 0},
	{"com.sun.tools.javac.comp.Resolve$ReferenceLookupHelper", "com.sun.tools.javac.comp.Resolve", "ReferenceLookupHelper", $ABSTRACT},
	{}
};

$ClassInfo _Resolve$ConstructorReferenceLookupHelper_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$ConstructorReferenceLookupHelper",
	"com.sun.tools.javac.comp.Resolve$ReferenceLookupHelper",
	nullptr,
	_Resolve$ConstructorReferenceLookupHelper_FieldInfo_,
	_Resolve$ConstructorReferenceLookupHelper_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$ConstructorReferenceLookupHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$ConstructorReferenceLookupHelper($Class* clazz) {
	return $of($alloc(Resolve$ConstructorReferenceLookupHelper));
}

void Resolve$ConstructorReferenceLookupHelper::init$($Resolve* this$0, $JCTree$JCMemberReference* referenceTree, $Type* site, $List* argtypes, $List* typeargtypes, $Resolve$MethodResolutionPhase* maxPhase) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$Resolve$ReferenceLookupHelper::init$(this$0, referenceTree, $nc(this$0->names)->init, site, argtypes, typeargtypes, maxPhase);
	if ($nc(site)->isRaw()) {
		$var($Type, var$0, site->getEnclosingType());
		$var($List, var$1, $nc($nc(site->tsym)->type)->getTypeArguments());
		$var($Symbol$TypeSymbol, var$2, site->tsym);
		$set(this, site, $new($Type$ClassType, var$0, var$1, var$2, $(site->getMetadata())));
		this->needsInference = true;
	}
}

$Symbol* Resolve$ConstructorReferenceLookupHelper::lookup($Env* env, $Resolve$MethodResolutionPhase* phase) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, var$0, nullptr);
	if (this->needsInference) {
		$var($Env, var$1, env);
		$var($Type, var$2, this->site);
		$var($List, var$3, this->argtypes);
		$var($List, var$4, this->typeargtypes);
		bool var$5 = $nc(phase)->isBoxingRequired();
		$assign(var$0, this->this$0->findDiamond(var$1, var$2, var$3, var$4, var$5, phase->isVarargsRequired()));
	} else {
		$var($Env, var$6, env);
		$var($Type, var$7, this->site);
		$var($Name, var$8, this->name);
		$var($List, var$9, this->argtypes);
		$var($List, var$10, this->typeargtypes);
		bool var$11 = $nc(phase)->isBoxingRequired();
		$assign(var$0, this->this$0->findMethod(var$6, var$7, var$8, var$9, var$10, var$11, phase->isVarargsRequired()));
	}
	$var($Symbol, sym, var$0);
	return this->this$0->enclosingInstanceMissing(env, this->site) ? static_cast<$Symbol*>($new($Resolve$BadConstructorReferenceError, this->this$0, sym)) : sym;
}

$JCTree$JCMemberReference$ReferenceKind* Resolve$ConstructorReferenceLookupHelper::referenceKind($Symbol* sym) {
	$init($TypeTag);
	$init($JCTree$JCMemberReference$ReferenceKind);
	return $nc($($nc(this->site)->getEnclosingType()))->hasTag($TypeTag::NONE) ? $JCTree$JCMemberReference$ReferenceKind::TOPLEVEL : $JCTree$JCMemberReference$ReferenceKind::IMPLICIT_INNER;
}

Resolve$ConstructorReferenceLookupHelper::Resolve$ConstructorReferenceLookupHelper() {
}

$Class* Resolve$ConstructorReferenceLookupHelper::load$($String* name, bool initialize) {
	$loadClass(Resolve$ConstructorReferenceLookupHelper, name, initialize, &_Resolve$ConstructorReferenceLookupHelper_ClassInfo_, allocate$Resolve$ConstructorReferenceLookupHelper);
	return class$;
}

$Class* Resolve$ConstructorReferenceLookupHelper::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com