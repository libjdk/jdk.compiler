#include <com/sun/tools/javac/comp/Resolve$LookupHelper.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

#undef AMBIGUOUS
#undef STATICERR

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
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

$FieldInfo _Resolve$LookupHelper_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$LookupHelper, this$0)},
	{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, 0, $field(Resolve$LookupHelper, name)},
	{"site", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Resolve$LookupHelper, site)},
	{"argtypes", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $field(Resolve$LookupHelper, argtypes)},
	{"typeargtypes", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $field(Resolve$LookupHelper, typeargtypes)},
	{"maxPhase", "Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;", nullptr, 0, $field(Resolve$LookupHelper, maxPhase)},
	{}
};

$MethodInfo _Resolve$LookupHelper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)V", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)V", 0, $method(static_cast<void(Resolve$LookupHelper::*)($Resolve*,$Name*,$Type*,$List*,$List*,$Resolve$MethodResolutionPhase*)>(&Resolve$LookupHelper::init$))},
	{"access", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", $ABSTRACT},
	{"debug", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"lookup", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", $ABSTRACT},
	{"shouldStop", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Z", nullptr, $FINAL, $method(static_cast<bool(Resolve$LookupHelper::*)($Symbol*,$Resolve$MethodResolutionPhase*)>(&Resolve$LookupHelper::shouldStop))},
	{}
};

$InnerClassInfo _Resolve$LookupHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$LookupHelper", "com.sun.tools.javac.comp.Resolve", "LookupHelper", $ABSTRACT},
	{}
};

$ClassInfo _Resolve$LookupHelper_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.Resolve$LookupHelper",
	"java.lang.Object",
	nullptr,
	_Resolve$LookupHelper_FieldInfo_,
	_Resolve$LookupHelper_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$LookupHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$LookupHelper($Class* clazz) {
	return $of($alloc(Resolve$LookupHelper));
}

void Resolve$LookupHelper::init$($Resolve* this$0, $Name* name, $Type* site, $List* argtypes, $List* typeargtypes, $Resolve$MethodResolutionPhase* maxPhase) {
	$set(this, this$0, this$0);
	$set(this, name, name);
	$set(this, site, site);
	$set(this, argtypes, argtypes);
	$set(this, typeargtypes, typeargtypes);
	$set(this, maxPhase, maxPhase);
}

bool Resolve$LookupHelper::shouldStop($Symbol* sym, $Resolve$MethodResolutionPhase* phase) {
	int32_t var$1 = $nc(phase)->ordinal();
	bool var$0 = var$1 > $nc(this->maxPhase)->ordinal();
	$init($Kinds$Kind);
	return var$0 || !$nc($nc(sym)->kind)->isResolutionError() || $nc(sym)->kind == $Kinds$Kind::AMBIGUOUS || $nc(sym)->kind == $Kinds$Kind::STATICERR;
}

void Resolve$LookupHelper::debug($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym) {
}

Resolve$LookupHelper::Resolve$LookupHelper() {
}

$Class* Resolve$LookupHelper::load$($String* name, bool initialize) {
	$loadClass(Resolve$LookupHelper, name, initialize, &_Resolve$LookupHelper_ClassInfo_, allocate$Resolve$LookupHelper);
	return class$;
}

$Class* Resolve$LookupHelper::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com