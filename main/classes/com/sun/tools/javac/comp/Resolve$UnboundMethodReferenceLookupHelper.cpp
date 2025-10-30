#include <com/sun/tools/javac/comp/Resolve$UnboundMethodReferenceLookupHelper.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodReferenceLookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

#undef NONE
#undef UNBOUND

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$LookupHelper = ::com::sun::tools::javac::comp::Resolve$LookupHelper;
using $Resolve$MethodReferenceLookupHelper = ::com::sun::tools::javac::comp::Resolve$MethodReferenceLookupHelper;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $Resolve$ReferenceLookupHelper = ::com::sun::tools::javac::comp::Resolve$ReferenceLookupHelper;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMemberReference$ReferenceKind = ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind;
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

$FieldInfo _Resolve$UnboundMethodReferenceLookupHelper_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$UnboundMethodReferenceLookupHelper, this$0)},
	{}
};

$MethodInfo _Resolve$UnboundMethodReferenceLookupHelper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)V", 0, $method(static_cast<void(Resolve$UnboundMethodReferenceLookupHelper::*)($Resolve*,$JCTree$JCMemberReference*,$Name*,$Type*,$List*,$List*,$Resolve$MethodResolutionPhase*)>(&Resolve$UnboundMethodReferenceLookupHelper::init$))},
	{"referenceKind", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind;", nullptr, 0},
	{"unboundLookup", "(Lcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupHelper;", nullptr, 0},
	{}
};

$InnerClassInfo _Resolve$UnboundMethodReferenceLookupHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$UnboundMethodReferenceLookupHelper", "com.sun.tools.javac.comp.Resolve", "UnboundMethodReferenceLookupHelper", 0},
	{"com.sun.tools.javac.comp.Resolve$MethodReferenceLookupHelper", "com.sun.tools.javac.comp.Resolve", "MethodReferenceLookupHelper", 0},
	{}
};

$ClassInfo _Resolve$UnboundMethodReferenceLookupHelper_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$UnboundMethodReferenceLookupHelper",
	"com.sun.tools.javac.comp.Resolve$MethodReferenceLookupHelper",
	nullptr,
	_Resolve$UnboundMethodReferenceLookupHelper_FieldInfo_,
	_Resolve$UnboundMethodReferenceLookupHelper_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$UnboundMethodReferenceLookupHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$UnboundMethodReferenceLookupHelper($Class* clazz) {
	return $of($alloc(Resolve$UnboundMethodReferenceLookupHelper));
}

void Resolve$UnboundMethodReferenceLookupHelper::init$($Resolve* this$0, $JCTree$JCMemberReference* referenceTree, $Name* name, $Type* site, $List* argtypes, $List* typeargtypes, $Resolve$MethodResolutionPhase* maxPhase) {
	$set(this, this$0, this$0);
	$Resolve$MethodReferenceLookupHelper::init$(this$0, referenceTree, name, site, $nc(argtypes)->tail, typeargtypes, maxPhase);
	bool var$0 = $nc(site)->isRaw();
	$init($TypeTag);
	if (var$0 && !$nc(($cast($Type, $nc(argtypes)->head)))->hasTag($TypeTag::NONE)) {
		$var($Type, asSuperSite, $nc(this$0->types)->asSuper($cast($Type, argtypes->head), site->tsym));
		$set(this, site, $nc(this$0->types)->skipTypeVars(asSuperSite, true));
	}
}

$Resolve$ReferenceLookupHelper* Resolve$UnboundMethodReferenceLookupHelper::unboundLookup($InferenceContext* inferenceContext) {
	return this;
}

$JCTree$JCMemberReference$ReferenceKind* Resolve$UnboundMethodReferenceLookupHelper::referenceKind($Symbol* sym) {
	$init($JCTree$JCMemberReference$ReferenceKind);
	return $JCTree$JCMemberReference$ReferenceKind::UNBOUND;
}

Resolve$UnboundMethodReferenceLookupHelper::Resolve$UnboundMethodReferenceLookupHelper() {
}

$Class* Resolve$UnboundMethodReferenceLookupHelper::load$($String* name, bool initialize) {
	$loadClass(Resolve$UnboundMethodReferenceLookupHelper, name, initialize, &_Resolve$UnboundMethodReferenceLookupHelper_ClassInfo_, allocate$Resolve$UnboundMethodReferenceLookupHelper);
	return class$;
}

$Class* Resolve$UnboundMethodReferenceLookupHelper::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com