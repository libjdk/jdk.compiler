#include <com/sun/tools/javac/comp/Resolve$ArrayConstructorReferenceLookupHelper.h>

#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve$LookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve$SymbolNotFoundError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <jcpp.h>

#undef ARRAY_CTOR

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$LookupHelper = ::com::sun::tools::javac::comp::Resolve$LookupHelper;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $Resolve$ReferenceLookupHelper = ::com::sun::tools::javac::comp::Resolve$ReferenceLookupHelper;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $Resolve$SymbolNotFoundError = ::com::sun::tools::javac::comp::Resolve$SymbolNotFoundError;
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

$FieldInfo _Resolve$ArrayConstructorReferenceLookupHelper_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$ArrayConstructorReferenceLookupHelper, this$0)},
	{}
};

$MethodInfo _Resolve$ArrayConstructorReferenceLookupHelper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)V", 0, $method(static_cast<void(Resolve$ArrayConstructorReferenceLookupHelper::*)($Resolve*,$JCTree$JCMemberReference*,$Type*,$List*,$List*,$Resolve$MethodResolutionPhase*)>(&Resolve$ArrayConstructorReferenceLookupHelper::init$))},
	{"lookup", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", $PROTECTED},
	{"referenceKind", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind;", nullptr, 0},
	{}
};

$InnerClassInfo _Resolve$ArrayConstructorReferenceLookupHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$ArrayConstructorReferenceLookupHelper", "com.sun.tools.javac.comp.Resolve", "ArrayConstructorReferenceLookupHelper", 0},
	{"com.sun.tools.javac.comp.Resolve$ReferenceLookupHelper", "com.sun.tools.javac.comp.Resolve", "ReferenceLookupHelper", $ABSTRACT},
	{}
};

$ClassInfo _Resolve$ArrayConstructorReferenceLookupHelper_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$ArrayConstructorReferenceLookupHelper",
	"com.sun.tools.javac.comp.Resolve$ReferenceLookupHelper",
	nullptr,
	_Resolve$ArrayConstructorReferenceLookupHelper_FieldInfo_,
	_Resolve$ArrayConstructorReferenceLookupHelper_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$ArrayConstructorReferenceLookupHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$ArrayConstructorReferenceLookupHelper($Class* clazz) {
	return $of($alloc(Resolve$ArrayConstructorReferenceLookupHelper));
}

void Resolve$ArrayConstructorReferenceLookupHelper::init$($Resolve* this$0, $JCTree$JCMemberReference* referenceTree, $Type* site, $List* argtypes, $List* typeargtypes, $Resolve$MethodResolutionPhase* maxPhase) {
	$set(this, this$0, this$0);
	$Resolve$ReferenceLookupHelper::init$(this$0, referenceTree, $nc(this$0->names)->init, site, argtypes, typeargtypes, maxPhase);
}

$Symbol* Resolve$ArrayConstructorReferenceLookupHelper::lookup($Env* env, $Resolve$MethodResolutionPhase* phase) {
	$useLocalCurrentObjectStackCache();
	$var($Scope$WriteableScope, sc, $Scope$WriteableScope::create($nc(this->this$0->syms)->arrayClass));
	$var($Symbol$MethodSymbol, arrayConstr, $new($Symbol$MethodSymbol, 1, this->name, nullptr, $nc(this->site)->tsym));
	$var($List, var$0, $List::of($nc(this->this$0->syms)->intType));
	$var($Type, var$1, this->site);
	$set(arrayConstr, type, $new($Type$MethodType, var$0, var$1, $($List::nil()), $nc(this->this$0->syms)->methodClass));
	$nc(sc)->enter(arrayConstr);
	$var($Env, var$2, env);
	$var($Type, var$3, this->site);
	$var($Name, var$4, this->name);
	$var($List, var$5, this->argtypes);
	$var($List, var$6, this->typeargtypes);
	$var($Scope, var$7, static_cast<$Scope*>(sc));
	$var($Symbol, var$8, static_cast<$Symbol*>(this->this$0->methodNotFound));
	bool var$9 = $nc(phase)->isBoxingRequired();
	return this->this$0->findMethodInScope(var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, phase->isVarargsRequired(), false);
}

$JCTree$JCMemberReference$ReferenceKind* Resolve$ArrayConstructorReferenceLookupHelper::referenceKind($Symbol* sym) {
	$init($JCTree$JCMemberReference$ReferenceKind);
	return $JCTree$JCMemberReference$ReferenceKind::ARRAY_CTOR;
}

Resolve$ArrayConstructorReferenceLookupHelper::Resolve$ArrayConstructorReferenceLookupHelper() {
}

$Class* Resolve$ArrayConstructorReferenceLookupHelper::load$($String* name, bool initialize) {
	$loadClass(Resolve$ArrayConstructorReferenceLookupHelper, name, initialize, &_Resolve$ArrayConstructorReferenceLookupHelper_ClassInfo_, allocate$Resolve$ArrayConstructorReferenceLookupHelper);
	return class$;
}

$Class* Resolve$ArrayConstructorReferenceLookupHelper::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com