#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolError.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/AttrRecover.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext$Candidate.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef WRONG_MTH

using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $AttrRecover = ::com::sun::tools::javac::comp::AttrRecover;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$MethodResolutionContext = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext;
using $Resolve$MethodResolutionContext$Candidate = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext$Candidate;
using $Resolve$MethodResolutionDiagHelper = ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$InapplicableSymbolError_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$InapplicableSymbolError, this$0)},
	{"resolveContext", "Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;", nullptr, $PROTECTED, $field(Resolve$InapplicableSymbolError, resolveContext)},
	{}
};

$MethodInfo _Resolve$InapplicableSymbolError_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;)V", nullptr, 0, $method(static_cast<void(Resolve$InapplicableSymbolError::*)($Resolve*,$Resolve$MethodResolutionContext*)>(&Resolve$InapplicableSymbolError::init$))},
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/code/Kinds$Kind;Ljava/lang/String;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;)V", nullptr, $PROTECTED, $method(static_cast<void(Resolve$InapplicableSymbolError::*)($Resolve*,$Kinds$Kind*,$String*,$Resolve$MethodResolutionContext*)>(&Resolve$InapplicableSymbolError::init$))},
	{"access", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"errCandidate", "()Lcom/sun/tools/javac/util/Pair;", "()Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PROTECTED},
	{"exists", "()Z", nullptr, $PUBLIC},
	{"getDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic;", 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Resolve$InapplicableSymbolError_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$InapplicableSymbolError", "com.sun.tools.javac.comp.Resolve", "InapplicableSymbolError", 0},
	{"com.sun.tools.javac.comp.Resolve$ResolveError", "com.sun.tools.javac.comp.Resolve", "ResolveError", $ABSTRACT},
	{}
};

$ClassInfo _Resolve$InapplicableSymbolError_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$InapplicableSymbolError",
	"com.sun.tools.javac.comp.Resolve$ResolveError",
	nullptr,
	_Resolve$InapplicableSymbolError_FieldInfo_,
	_Resolve$InapplicableSymbolError_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$InapplicableSymbolError_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$InapplicableSymbolError($Class* clazz) {
	return $of($alloc(Resolve$InapplicableSymbolError));
}

void Resolve$InapplicableSymbolError::init$($Resolve* this$0, $Resolve$MethodResolutionContext* context) {
	$init($Kinds$Kind);
	Resolve$InapplicableSymbolError::init$(this$0, $Kinds$Kind::WRONG_MTH, "inapplicable symbol error"_s, context);
}

void Resolve$InapplicableSymbolError::init$($Resolve* this$0, $Kinds$Kind* kind, $String* debugName, $Resolve$MethodResolutionContext* context) {
	$set(this, this$0, this$0);
	$Resolve$ResolveError::init$(this$0, kind, debugName);
	$set(this, resolveContext, context);
}

$String* Resolve$InapplicableSymbolError::toString() {
	return $Resolve$ResolveError::toString();
}

bool Resolve$InapplicableSymbolError::exists() {
	return true;
}

$JCDiagnostic* Resolve$InapplicableSymbolError::getDiagnostic($JCDiagnostic$DiagnosticType* dkind, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	$useLocalCurrentObjectStackCache();
	if (name == $nc(this->this$0->names)->error) {
		return nullptr;
	}
	$var($Pair, c, errCandidate());
	if (this->this$0->compactMethodDiags) {
		$var($JCDiagnostic, simpleDiag, $Resolve$MethodResolutionDiagHelper::rewrite(this->this$0->diags, pos, $($nc(this->this$0->log)->currentSource()), dkind, $cast($JCDiagnostic, $nc(c)->snd)));
		if (simpleDiag != nullptr) {
			return simpleDiag;
		}
	}
	$var($Symbol, ws, $nc(($cast($Symbol, $nc(c)->fst)))->asMemberOf(site, this->this$0->types));
	$var($JCDiagnostic$DiagnosticType, var$0, dkind);
	$var($DiagnosticSource, var$1, $nc(this->this$0->log)->currentSource());
	$var($JCDiagnostic$DiagnosticPosition, var$2, pos);
	$var($String, var$3, "cant.apply.symbol"_s);
	return $nc(this->this$0->diags)->create(var$0, var$1, var$2, var$3, $$new($ObjectArray, {
		$($of($Kinds::kindName(ws))),
		$nc(ws)->name == $nc(this->this$0->names)->init ? $of($nc($nc(ws)->owner)->name) : $of(ws->name),
		$(this->this$0->methodArguments($($nc(ws->type)->getParameterTypes()))),
		$(this->this$0->methodArguments(argtypes)),
		$($of($Kinds::kindName(ws->owner))),
		$of($nc(ws->owner)->type),
		c->snd
	}));
}

$Symbol* Resolve$InapplicableSymbolError::access($Name* name, $Symbol$TypeSymbol* location) {
	$useLocalCurrentObjectStackCache();
	$var($Pair, cand, errCandidate());
	$var($Symbol$TypeSymbol, errSymbol, $nc($($nc(this->this$0->types)->createErrorType(name, location, cand != nullptr ? $nc(($cast($Symbol, $nc(cand)->fst)))->type : $nc($nc(this->this$0->syms)->errSymbol)->type)))->tsym);
	if (cand != nullptr) {
		$nc(this->this$0->attrRecover)->wrongMethodSymbolCandidate(errSymbol, $cast($Symbol, cand->fst), $cast($JCDiagnostic, cand->snd));
	}
	return errSymbol;
}

$Pair* Resolve$InapplicableSymbolError::errCandidate() {
	$useLocalCurrentObjectStackCache();
	$var($Resolve$MethodResolutionContext$Candidate, bestSoFar, nullptr);
	{
		$var($Iterator, i$, $nc($nc(this->resolveContext)->candidates)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Resolve$MethodResolutionContext$Candidate, c, $cast($Resolve$MethodResolutionContext$Candidate, i$->next()));
			{
				if ($nc(c)->isApplicable()) {
					continue;
				}
				$assign(bestSoFar, c);
			}
		}
	}
	$Assert::checkNonNull(bestSoFar);
	return $new($Pair, $nc(bestSoFar)->sym, bestSoFar->details);
}

Resolve$InapplicableSymbolError::Resolve$InapplicableSymbolError() {
}

$Class* Resolve$InapplicableSymbolError::load$($String* name, bool initialize) {
	$loadClass(Resolve$InapplicableSymbolError, name, initialize, &_Resolve$InapplicableSymbolError_ClassInfo_, allocate$Resolve$InapplicableSymbolError);
	return class$;
}

$Class* Resolve$InapplicableSymbolError::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com