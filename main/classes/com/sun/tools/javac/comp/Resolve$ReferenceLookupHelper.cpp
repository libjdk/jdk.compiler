#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupHelper.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$AmbiguityError.h>
#include <com/sun/tools/javac/comp/Resolve$LookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

#undef AMBIGUOUS

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Env = ::com::sun::tools::javac::comp::Env;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$AmbiguityError = ::com::sun::tools::javac::comp::Resolve$AmbiguityError;
using $Resolve$LookupHelper = ::com::sun::tools::javac::comp::Resolve$LookupHelper;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMemberReference$ReferenceKind = ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind;
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

$FieldInfo _Resolve$ReferenceLookupHelper_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$ReferenceLookupHelper, this$0)},
	{"referenceTree", "Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;", nullptr, 0, $field(Resolve$ReferenceLookupHelper, referenceTree)},
	{}
};

$MethodInfo _Resolve$ReferenceLookupHelper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)V", 0, $method(static_cast<void(Resolve$ReferenceLookupHelper::*)($Resolve*,$JCTree$JCMemberReference*,$Name*,$Type*,$List*,$List*,$Resolve$MethodResolutionPhase*)>(&Resolve$ReferenceLookupHelper::init$))},
	{"access", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", 0},
	{"referenceKind", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind;", nullptr, $ABSTRACT},
	{"unboundLookup", "(Lcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupHelper;", nullptr, 0},
	{}
};

$InnerClassInfo _Resolve$ReferenceLookupHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$ReferenceLookupHelper", "com.sun.tools.javac.comp.Resolve", "ReferenceLookupHelper", $ABSTRACT},
	{"com.sun.tools.javac.comp.Resolve$LookupHelper", "com.sun.tools.javac.comp.Resolve", "LookupHelper", $ABSTRACT},
	{}
};

$ClassInfo _Resolve$ReferenceLookupHelper_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.Resolve$ReferenceLookupHelper",
	"com.sun.tools.javac.comp.Resolve$LookupHelper",
	nullptr,
	_Resolve$ReferenceLookupHelper_FieldInfo_,
	_Resolve$ReferenceLookupHelper_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$ReferenceLookupHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$ReferenceLookupHelper($Class* clazz) {
	return $of($alloc(Resolve$ReferenceLookupHelper));
}

void Resolve$ReferenceLookupHelper::init$($Resolve* this$0, $JCTree$JCMemberReference* referenceTree, $Name* name, $Type* site, $List* argtypes, $List* typeargtypes, $Resolve$MethodResolutionPhase* maxPhase) {
	$set(this, this$0, this$0);
	$Resolve$LookupHelper::init$(this$0, name, site, argtypes, typeargtypes, maxPhase);
	$set(this, referenceTree, referenceTree);
}

Resolve$ReferenceLookupHelper* Resolve$ReferenceLookupHelper::unboundLookup($InferenceContext* inferenceContext) {
	return nullptr;
}

$Symbol* Resolve$ReferenceLookupHelper::access($Env* env, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Symbol* sym$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, sym, sym$renamed);
	$init($Kinds$Kind);
	if ($nc(sym)->kind == $Kinds$Kind::AMBIGUOUS) {
		$var($Resolve$AmbiguityError, a_err, $cast($Resolve$AmbiguityError, sym->baseSymbol()));
		$assign(sym, $nc(a_err)->mergeAbstracts(this->site));
	}
	return sym;
}

Resolve$ReferenceLookupHelper::Resolve$ReferenceLookupHelper() {
}

$Class* Resolve$ReferenceLookupHelper::load$($String* name, bool initialize) {
	$loadClass(Resolve$ReferenceLookupHelper, name, initialize, &_Resolve$ReferenceLookupHelper_ClassInfo_, allocate$Resolve$ReferenceLookupHelper);
	return class$;
}

$Class* Resolve$ReferenceLookupHelper::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com