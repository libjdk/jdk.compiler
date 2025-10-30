#include <com/sun/tools/javac/comp/Resolve$14.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve$BasicLookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$DiamondError.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve$LookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <jcpp.h>

#undef WRONG_MTH
#undef WRONG_MTHS

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$BasicLookupHelper = ::com::sun::tools::javac::comp::Resolve$BasicLookupHelper;
using $Resolve$DiamondError = ::com::sun::tools::javac::comp::Resolve$DiamondError;
using $Resolve$InapplicableSymbolError = ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError;
using $Resolve$LookupHelper = ::com::sun::tools::javac::comp::Resolve$LookupHelper;
using $Resolve$MethodResolutionContext = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$14_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$14, this$0)},
	{"val$pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$14, val$pos)},
	{}
};

$MethodInfo _Resolve$14_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, 0, $method(static_cast<void(Resolve$14::*)($Resolve*,$Name*,$Type*,$List*,$List*,$JCDiagnostic$DiagnosticPosition*)>(&Resolve$14::init$))},
	{"access", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", 0},
	{"doLookup", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", 0},
	{}
};

$EnclosingMethodInfo _Resolve$14_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Resolve",
	"resolveDiamond",
	"(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol;"
};

$InnerClassInfo _Resolve$14_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$14", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Resolve$BasicLookupHelper", "com.sun.tools.javac.comp.Resolve", "BasicLookupHelper", $ABSTRACT},
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticPosition", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Resolve$14_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$14",
	"com.sun.tools.javac.comp.Resolve$BasicLookupHelper",
	nullptr,
	_Resolve$14_FieldInfo_,
	_Resolve$14_MethodInfo_,
	nullptr,
	&_Resolve$14_EnclosingMethodInfo_,
	_Resolve$14_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$14($Class* clazz) {
	return $of($alloc(Resolve$14));
}

void Resolve$14::init$($Resolve* this$0, $Name* name, $Type* site, $List* argtypes, $List* typeargtypes, $JCDiagnostic$DiagnosticPosition* val$pos) {
	$set(this, this$0, this$0);
	$set(this, val$pos, val$pos);
	$Resolve$BasicLookupHelper::init$(this$0, name, site, argtypes, typeargtypes);
}

$Symbol* Resolve$14::doLookup($Env* env, $Resolve$MethodResolutionPhase* phase) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic$DiagnosticPosition, var$0, this->val$pos);
	$var($Env, var$1, env);
	$var($Type, var$2, this->site);
	$var($List, var$3, this->argtypes);
	$var($List, var$4, this->typeargtypes);
	bool var$5 = $nc(phase)->isBoxingRequired();
	return this->this$0->findDiamond(var$0, var$1, var$2, var$3, var$4, var$5, phase->isVarargsRequired());
}

$Symbol* Resolve$14::access($Env* env, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Symbol* sym$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, sym, sym$renamed);
	if ($nc($nc(sym)->kind)->isResolutionError()) {
		$init($Kinds$Kind);
		if (sym->kind != $Kinds$Kind::WRONG_MTH && sym->kind != $Kinds$Kind::WRONG_MTHS) {
			$assign(sym, $Resolve$BasicLookupHelper::access(env, pos, location, sym));
		} else {
			$var($JCDiagnostic, details, sym->kind == $Kinds$Kind::WRONG_MTH ? $cast($JCDiagnostic, $nc($($nc(($cast($Resolve$InapplicableSymbolError, $(sym->baseSymbol()))))->errCandidate()))->snd) : ($JCDiagnostic*)nullptr);
			$assign(sym, $new($Resolve$DiamondError, this->this$0, sym, this->this$0->currentResolutionContext));
			$assign(sym, this->this$0->accessMethod(sym, pos, this->site, $nc(this->this$0->names)->init, true, this->argtypes, this->typeargtypes));
			$set($nc($cast($AttrContext, $nc(env)->info)), pendingResolutionPhase, $nc(this->this$0->currentResolutionContext)->step);
		}
	}
	return sym;
}

Resolve$14::Resolve$14() {
}

$Class* Resolve$14::load$($String* name, bool initialize) {
	$loadClass(Resolve$14, name, initialize, &_Resolve$14_ClassInfo_, allocate$Resolve$14);
	return class$;
}

$Class* Resolve$14::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com