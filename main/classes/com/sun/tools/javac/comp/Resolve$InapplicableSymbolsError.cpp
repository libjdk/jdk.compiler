#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolsError.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolsError$1.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolsError$MostSpecificMap.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheckDiag.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext$Candidate.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template.h>
#include <com/sun/tools/javac/comp/Resolve$SymbolNotFoundError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic$MultilineDiagnostic.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/lang/Enum.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef ABSENT_MTH
#undef ARITY_MISMATCH
#undef COMPRESSED
#undef CONSTRUCTOR
#undef WRONG_MTHS

using $Resolve$MethodResolutionDiagHelper$TemplateArray = $Array<::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template>;
using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$InapplicableSymbolError = ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError;
using $Resolve$InapplicableSymbolsError$1 = ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolsError$1;
using $Resolve$InapplicableSymbolsError$MostSpecificMap = ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolsError$MostSpecificMap;
using $Resolve$MethodCheckDiag = ::com::sun::tools::javac::comp::Resolve$MethodCheckDiag;
using $Resolve$MethodResolutionContext = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext;
using $Resolve$MethodResolutionContext$Candidate = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext$Candidate;
using $Resolve$MethodResolutionDiagHelper$Template = ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template;
using $Resolve$SymbolNotFoundError = ::com::sun::tools::javac::comp::Resolve$SymbolNotFoundError;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $JCDiagnostic$MultilineDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic$MultilineDiagnostic;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$InapplicableSymbolsError_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$InapplicableSymbolsError, this$0)},
	{}
};

$MethodInfo _Resolve$InapplicableSymbolsError_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;)V", nullptr, 0, $method(static_cast<void(Resolve$InapplicableSymbolsError::*)($Resolve*,$Resolve$MethodResolutionContext*)>(&Resolve$InapplicableSymbolsError::init$))},
	{"candidateDetails", "(Ljava/util/Map;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "(Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;>;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PRIVATE, $method(static_cast<$List*(Resolve$InapplicableSymbolsError::*)($Map*,$Type*)>(&Resolve$InapplicableSymbolsError::candidateDetails))},
	{"errCandidate", "()Lcom/sun/tools/javac/util/Pair;", "()Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PROTECTED},
	{"filterCandidates", "(Ljava/util/Map;)Ljava/util/Map;", "(Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;>;)Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;>;", 0},
	{"getDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic;", 0},
	{"mapCandidates", "()Ljava/util/Map;", "()Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PRIVATE, $method(static_cast<$Map*(Resolve$InapplicableSymbolsError::*)()>(&Resolve$InapplicableSymbolsError::mapCandidates))},
	{}
};

$InnerClassInfo _Resolve$InapplicableSymbolsError_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$InapplicableSymbolsError", "com.sun.tools.javac.comp.Resolve", "InapplicableSymbolsError", 0},
	{"com.sun.tools.javac.comp.Resolve$InapplicableSymbolError", "com.sun.tools.javac.comp.Resolve", "InapplicableSymbolError", 0},
	{"com.sun.tools.javac.comp.Resolve$InapplicableSymbolsError$MostSpecificMap", "com.sun.tools.javac.comp.Resolve$InapplicableSymbolsError", "MostSpecificMap", $PRIVATE},
	{"com.sun.tools.javac.comp.Resolve$InapplicableSymbolsError$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Resolve$InapplicableSymbolsError_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$InapplicableSymbolsError",
	"com.sun.tools.javac.comp.Resolve$InapplicableSymbolError",
	nullptr,
	_Resolve$InapplicableSymbolsError_FieldInfo_,
	_Resolve$InapplicableSymbolsError_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$InapplicableSymbolsError_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$InapplicableSymbolsError($Class* clazz) {
	return $of($alloc(Resolve$InapplicableSymbolsError));
}

void Resolve$InapplicableSymbolsError::init$($Resolve* this$0, $Resolve$MethodResolutionContext* context) {
	$set(this, this$0, this$0);
	$init($Kinds$Kind);
	$Resolve$InapplicableSymbolError::init$(this$0, $Kinds$Kind::WRONG_MTHS, "inapplicable symbols"_s, context);
}

$JCDiagnostic* Resolve$InapplicableSymbolsError::getDiagnostic($JCDiagnostic$DiagnosticType* dkind, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	$useLocalCurrentObjectStackCache();
	$var($Map, candidatesMap, mapCandidates());
	$var($Map, filteredCandidates, this->this$0->compactMethodDiags ? filterCandidates(candidatesMap) : mapCandidates());
	if ($nc(filteredCandidates)->isEmpty()) {
		$assign(filteredCandidates, candidatesMap);
	}
	int32_t var$0 = $nc(candidatesMap)->size();
	bool truncatedDiag = var$0 != $nc(filteredCandidates)->size();
	if (filteredCandidates->size() > 1) {
		$var($JCDiagnostic$DiagnosticType, var$1, dkind);
		$init($JCDiagnostic$DiagnosticFlag);
		$var($Set, var$2, truncatedDiag ? static_cast<$Set*>($EnumSet::of($JCDiagnostic$DiagnosticFlag::COMPRESSED)) : static_cast<$Set*>($EnumSet::noneOf($JCDiagnostic$DiagnosticFlag::class$)));
		$var($DiagnosticSource, var$3, $nc(this->this$0->log)->currentSource());
		$var($JCDiagnostic$DiagnosticPosition, var$4, pos);
		$var($String, var$5, "cant.apply.symbols"_s);
		$init($Kinds$KindName);
		$var($JCDiagnostic, err, $nc(this->this$0->diags)->create(var$1, nullptr, var$2, var$3, var$4, var$5, $$new($ObjectArray, {
			name == $nc(this->this$0->names)->init ? $of($Kinds$KindName::CONSTRUCTOR) : $($of($nc(this->kind)->absentKind())),
			name == $nc(this->this$0->names)->init ? $of($nc($nc(site)->tsym)->name) : $of(name),
			$(this->this$0->methodArguments(argtypes))
		})));
		return $new($JCDiagnostic$MultilineDiagnostic, err, $(candidateDetails(filteredCandidates, site)));
	} else if (filteredCandidates->size() == 1) {
		$var($Map$Entry, _e, $cast($Map$Entry, $nc($($nc($(filteredCandidates->entrySet()))->iterator()))->next()));
		$var($Object, var$6, $cast($Symbol, $nc(_e)->getKey()));
		$var($Pair, p, $new($Pair, var$6, $cast($JCDiagnostic, $(_e->getValue()))));
		$var($JCDiagnostic, d, $$new($Resolve$InapplicableSymbolsError$1, this, this->resolveContext, p)->getDiagnostic(dkind, pos, location, site, name, argtypes, typeargtypes));
		if (truncatedDiag) {
			$init($JCDiagnostic$DiagnosticFlag);
			$nc(d)->setFlag($JCDiagnostic$DiagnosticFlag::COMPRESSED);
		}
		return d;
	} else {
		$init($Kinds$Kind);
		return $$new($Resolve$SymbolNotFoundError, this->this$0, $Kinds$Kind::ABSENT_MTH)->getDiagnostic(dkind, pos, location, site, name, argtypes, typeargtypes);
	}
}

$Map* Resolve$InapplicableSymbolsError::mapCandidates() {
	$useLocalCurrentObjectStackCache();
	$var($Resolve$InapplicableSymbolsError$MostSpecificMap, candidates, $new($Resolve$InapplicableSymbolsError$MostSpecificMap, this));
	{
		$var($Iterator, i$, $nc($nc(this->resolveContext)->candidates)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Resolve$MethodResolutionContext$Candidate, c, $cast($Resolve$MethodResolutionContext$Candidate, i$->next()));
			{
				if ($nc(c)->isApplicable()) {
					continue;
				}
				candidates->put(c);
			}
		}
	}
	return candidates;
}

$Map* Resolve$InapplicableSymbolsError::filterCandidates($Map* candidatesMap) {
	$useLocalCurrentObjectStackCache();
	$var($Map, candidates, $new($LinkedHashMap));
	{
		$var($Iterator, i$, $nc($($nc(candidatesMap)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, _entry, $cast($Map$Entry, i$->next()));
			{
				$var($JCDiagnostic, d, $cast($JCDiagnostic, $nc(_entry)->getValue()));
				$init($Resolve$MethodCheckDiag);
				if (!$$new($Resolve$MethodResolutionDiagHelper$Template, $($Resolve$MethodCheckDiag::ARITY_MISMATCH->regex()), $$new($Resolve$MethodResolutionDiagHelper$TemplateArray, 0))->matches(d)) {
					candidates->put($cast($Symbol, $(_entry->getKey())), d);
				}
			}
		}
	}
	return candidates;
}

$List* Resolve$InapplicableSymbolsError::candidateDetails($Map* candidatesMap, $Type* site) {
	$useLocalCurrentObjectStackCache();
	$var($List, details, $List::nil());
	{
		$var($Iterator, i$, $nc($($nc(candidatesMap)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, _entry, $cast($Map$Entry, i$->next()));
			{
				$var($Symbol, sym, $cast($Symbol, $nc(_entry)->getKey()));
				$var($Kinds$KindName, var$0, $Kinds::kindName(sym));
				$var($Symbol, var$1, $nc(sym)->location(site, this->this$0->types));
				$var($Symbol, var$2, sym->asMemberOf(site, this->this$0->types));
				$var($JCDiagnostic, detailDiag, $nc(this->this$0->diags)->fragment($($CompilerProperties$Fragments::InapplicableMethod(var$0, var$1, var$2, $cast($JCDiagnostic, $(_entry->getValue()))))));
				$assign(details, $nc(details)->prepend(detailDiag));
			}
		}
	}
	return details;
}

$Pair* Resolve$InapplicableSymbolsError::errCandidate() {
	$useLocalCurrentObjectStackCache();
	$var($Map, candidatesMap, mapCandidates());
	$var($Map, filteredCandidates, filterCandidates(candidatesMap));
	if ($nc(filteredCandidates)->size() == 1) {
		$var($Object, var$0, $cast($Symbol, $nc($($nc($(filteredCandidates->keySet()))->iterator()))->next()));
		return $Pair::of(var$0, $cast($JCDiagnostic, $($nc($($nc($(filteredCandidates->values()))->iterator()))->next())));
	}
	return nullptr;
}

Resolve$InapplicableSymbolsError::Resolve$InapplicableSymbolsError() {
}

$Class* Resolve$InapplicableSymbolsError::load$($String* name, bool initialize) {
	$loadClass(Resolve$InapplicableSymbolsError, name, initialize, &_Resolve$InapplicableSymbolsError_ClassInfo_, allocate$Resolve$InapplicableSymbolsError);
	return class$;
}

$Class* Resolve$InapplicableSymbolsError::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com