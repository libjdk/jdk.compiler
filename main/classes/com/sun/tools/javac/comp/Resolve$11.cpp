#include <com/sun/tools/javac/comp/Resolve$11.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve$BasicLookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$LookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

#undef BASIC

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$BasicLookupHelper = ::com::sun::tools::javac::comp::Resolve$BasicLookupHelper;
using $Resolve$LookupHelper = ::com::sun::tools::javac::comp::Resolve$LookupHelper;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
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

$FieldInfo _Resolve$11_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$11, this$0)},
	{}
};

$MethodInfo _Resolve$11_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", nullptr, 0, $method(static_cast<void(Resolve$11::*)($Resolve*,$Name*,$Type*,$List*,$List*)>(&Resolve$11::init$))},
	{"access", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", 0},
	{"doLookup", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", 0},
	{}
};

$EnclosingMethodInfo _Resolve$11_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Resolve",
	"resolveQualifiedMethod",
	"(Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol;"
};

$InnerClassInfo _Resolve$11_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$11", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Resolve$BasicLookupHelper", "com.sun.tools.javac.comp.Resolve", "BasicLookupHelper", $ABSTRACT},
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionContext", "com.sun.tools.javac.comp.Resolve", "MethodResolutionContext", 0},
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticPosition", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Resolve$11_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$11",
	"com.sun.tools.javac.comp.Resolve$BasicLookupHelper",
	nullptr,
	_Resolve$11_FieldInfo_,
	_Resolve$11_MethodInfo_,
	nullptr,
	&_Resolve$11_EnclosingMethodInfo_,
	_Resolve$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$11($Class* clazz) {
	return $of($alloc(Resolve$11));
}

void Resolve$11::init$($Resolve* this$0, $Name* name, $Type* site, $List* argtypes, $List* typeargtypes) {
	$set(this, this$0, this$0);
	$Resolve$BasicLookupHelper::init$(this$0, name, site, argtypes, typeargtypes);
}

$Symbol* Resolve$11::doLookup($Env* env, $Resolve$MethodResolutionPhase* phase) {
	$useLocalCurrentObjectStackCache();
	$var($Env, var$0, env);
	$var($Type, var$1, this->site);
	$var($Name, var$2, this->name);
	$var($List, var$3, this->argtypes);
	$var($List, var$4, this->typeargtypes);
	bool var$5 = $nc(phase)->isBoxingRequired();
	return this->this$0->findMethod(var$0, var$1, var$2, var$3, var$4, var$5, phase->isVarargsRequired());
}

$Symbol* Resolve$11::access($Env* env, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Symbol* sym$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, sym, sym$renamed);
	if ($nc($nc(sym)->kind)->isResolutionError()) {
		$assign(sym, $Resolve$BasicLookupHelper::access(env, pos, location, sym));
	} else {
		$var($Symbol$MethodSymbol, msym, $cast($Symbol$MethodSymbol, sym));
		if (((int64_t)(msym->flags() & (uint64_t)(int64_t)0x0000400000000000)) != 0) {
			$init($Resolve$MethodResolutionPhase);
			$set($nc($cast($AttrContext, $nc(env)->info)), pendingResolutionPhase, $Resolve$MethodResolutionPhase::BASIC);
			return this->this$0->findPolymorphicSignatureInstance(env, sym, this->argtypes);
		}
	}
	return sym;
}

Resolve$11::Resolve$11() {
}

$Class* Resolve$11::load$($String* name, bool initialize) {
	$loadClass(Resolve$11, name, initialize, &_Resolve$11_ClassInfo_, allocate$Resolve$11);
	return class$;
}

$Class* Resolve$11::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com