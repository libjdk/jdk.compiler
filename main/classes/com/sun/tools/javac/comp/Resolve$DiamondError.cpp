#include <com/sun/tools/javac/comp/Resolve$DiamondError.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <jcpp.h>

#undef WRONG_MTH

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$InapplicableSymbolError = ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError;
using $Resolve$MethodResolutionContext = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext;
using $Resolve$MethodResolutionDiagHelper = ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$DiamondError_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$DiamondError, this$0)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $field(Resolve$DiamondError, sym)},
	{}
};

$MethodInfo _Resolve$DiamondError_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;)V", nullptr, $PUBLIC, $method(static_cast<void(Resolve$DiamondError::*)($Resolve*,$Symbol*,$Resolve$MethodResolutionContext*)>(&Resolve$DiamondError::init$))},
	{"getDetails", "()Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, 0},
	{"getDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic;", 0},
	{}
};

$InnerClassInfo _Resolve$DiamondError_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$DiamondError", "com.sun.tools.javac.comp.Resolve", "DiamondError", 0},
	{"com.sun.tools.javac.comp.Resolve$InapplicableSymbolError", "com.sun.tools.javac.comp.Resolve", "InapplicableSymbolError", 0},
	{}
};

$ClassInfo _Resolve$DiamondError_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$DiamondError",
	"com.sun.tools.javac.comp.Resolve$InapplicableSymbolError",
	nullptr,
	_Resolve$DiamondError_FieldInfo_,
	_Resolve$DiamondError_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$DiamondError_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$DiamondError($Class* clazz) {
	return $of($alloc(Resolve$DiamondError));
}

void Resolve$DiamondError::init$($Resolve* this$0, $Symbol* sym, $Resolve$MethodResolutionContext* context) {
	$set(this, this$0, this$0);
	$Resolve$InapplicableSymbolError::init$(this$0, $nc(sym)->kind, "diamondError"_s, context);
	$set(this, sym, sym);
}

$JCDiagnostic* Resolve$DiamondError::getDetails() {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	return ($nc(this->sym)->kind == $Kinds$Kind::WRONG_MTH) ? $cast($JCDiagnostic, $nc($($nc(($cast($Resolve$InapplicableSymbolError, $($nc(this->sym)->baseSymbol()))))->errCandidate()))->snd) : ($JCDiagnostic*)nullptr;
}

$JCDiagnostic* Resolve$DiamondError::getDiagnostic($JCDiagnostic$DiagnosticType* dkind, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic, details, getDetails());
	if (details != nullptr && this->this$0->compactMethodDiags) {
		$var($JCDiagnostic, simpleDiag, $Resolve$MethodResolutionDiagHelper::rewrite(this->this$0->diags, pos, $($nc(this->this$0->log)->currentSource()), dkind, details));
		if (simpleDiag != nullptr) {
			return simpleDiag;
		}
	}
	$var($String, key, details == nullptr ? "cant.apply.diamond"_s : "cant.apply.diamond.1"_s);
	$var($JCDiagnostic$DiagnosticType, var$0, dkind);
	$var($DiagnosticSource, var$1, $nc(this->this$0->log)->currentSource());
	$var($JCDiagnostic$DiagnosticPosition, var$2, pos);
	$var($String, var$3, key);
	return $nc(this->this$0->diags)->create(var$0, var$1, var$2, var$3, $$new($ObjectArray, {
		$($of($CompilerProperties$Fragments::Diamond($nc(site)->tsym))),
		$of(details)
	}));
}

Resolve$DiamondError::Resolve$DiamondError() {
}

$Class* Resolve$DiamondError::load$($String* name, bool initialize) {
	$loadClass(Resolve$DiamondError, name, initialize, &_Resolve$DiamondError_ClassInfo_, allocate$Resolve$DiamondError);
	return class$;
}

$Class* Resolve$DiamondError::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com