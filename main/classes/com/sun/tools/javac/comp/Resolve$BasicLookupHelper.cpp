#include <com/sun/tools/javac/comp/Resolve$BasicLookupHelper.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve$AmbiguityError.h>
#include <com/sun/tools/javac/comp/Resolve$LookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

#undef AMBIGUOUS
#undef VARARITY

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$AmbiguityError = ::com::sun::tools::javac::comp::Resolve$AmbiguityError;
using $Resolve$LookupHelper = ::com::sun::tools::javac::comp::Resolve$LookupHelper;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$BasicLookupHelper_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$BasicLookupHelper, this$0)},
	{}
};

$MethodInfo _Resolve$BasicLookupHelper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", 0, $method(static_cast<void(Resolve$BasicLookupHelper::*)($Resolve*,$Name*,$Type*,$List*,$List*)>(&Resolve$BasicLookupHelper::init$))},
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)V", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)V", 0, $method(static_cast<void(Resolve$BasicLookupHelper::*)($Resolve*,$Name*,$Type*,$List*,$List*,$Resolve$MethodResolutionPhase*)>(&Resolve$BasicLookupHelper::init$))},
	{"access", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", 0},
	{"debug", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"doLookup", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", $ABSTRACT},
	{"lookup", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", $FINAL},
	{}
};

$InnerClassInfo _Resolve$BasicLookupHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$BasicLookupHelper", "com.sun.tools.javac.comp.Resolve", "BasicLookupHelper", $ABSTRACT},
	{"com.sun.tools.javac.comp.Resolve$LookupHelper", "com.sun.tools.javac.comp.Resolve", "LookupHelper", $ABSTRACT},
	{}
};

$ClassInfo _Resolve$BasicLookupHelper_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.Resolve$BasicLookupHelper",
	"com.sun.tools.javac.comp.Resolve$LookupHelper",
	nullptr,
	_Resolve$BasicLookupHelper_FieldInfo_,
	_Resolve$BasicLookupHelper_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$BasicLookupHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$BasicLookupHelper($Class* clazz) {
	return $of($alloc(Resolve$BasicLookupHelper));
}

void Resolve$BasicLookupHelper::init$($Resolve* this$0, $Name* name, $Type* site, $List* argtypes, $List* typeargtypes) {
	$init($Resolve$MethodResolutionPhase);
	Resolve$BasicLookupHelper::init$(this$0, name, site, argtypes, typeargtypes, $Resolve$MethodResolutionPhase::VARARITY);
}

void Resolve$BasicLookupHelper::init$($Resolve* this$0, $Name* name, $Type* site, $List* argtypes, $List* typeargtypes, $Resolve$MethodResolutionPhase* maxPhase) {
	$set(this, this$0, this$0);
	$Resolve$LookupHelper::init$(this$0, name, site, argtypes, typeargtypes, maxPhase);
}

$Symbol* Resolve$BasicLookupHelper::lookup($Env* env, $Resolve$MethodResolutionPhase* phase) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, sym, doLookup(env, phase));
	$init($Kinds$Kind);
	if ($nc(sym)->kind == $Kinds$Kind::AMBIGUOUS) {
		$var($Resolve$AmbiguityError, a_err, $cast($Resolve$AmbiguityError, sym->baseSymbol()));
		$assign(sym, $nc(a_err)->mergeAbstracts(this->site));
	}
	return sym;
}

$Symbol* Resolve$BasicLookupHelper::access($Env* env, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Symbol* sym$renamed) {
	$var($Symbol, sym, sym$renamed);
	if ($nc($nc(sym)->kind)->isResolutionError()) {
		$assign(sym, this->this$0->accessMethod(sym, pos, location, this->site, this->name, true, this->argtypes, this->typeargtypes));
	}
	return sym;
}

void Resolve$BasicLookupHelper::debug($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym) {
	this->this$0->reportVerboseResolutionDiagnostic(pos, this->name, this->site, this->argtypes, this->typeargtypes, sym);
}

Resolve$BasicLookupHelper::Resolve$BasicLookupHelper() {
}

$Class* Resolve$BasicLookupHelper::load$($String* name, bool initialize) {
	$loadClass(Resolve$BasicLookupHelper, name, initialize, &_Resolve$BasicLookupHelper_ClassInfo_, allocate$Resolve$BasicLookupHelper);
	return class$;
}

$Class* Resolve$BasicLookupHelper::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com