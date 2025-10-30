#include <com/sun/tools/javac/comp/Resolve$MethodReferenceLookupHelper$1.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodReferenceLookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve$SymbolNotFoundError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Env = ::com::sun::tools::javac::comp::Env;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$MethodReferenceLookupHelper = ::com::sun::tools::javac::comp::Resolve$MethodReferenceLookupHelper;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $Resolve$ReferenceLookupHelper = ::com::sun::tools::javac::comp::Resolve$ReferenceLookupHelper;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $Resolve$SymbolNotFoundError = ::com::sun::tools::javac::comp::Resolve$SymbolNotFoundError;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMemberReference$ReferenceKind = ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind;
using $Assert = ::com::sun::tools::javac::util::Assert;
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

$FieldInfo _Resolve$MethodReferenceLookupHelper$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/Resolve$MethodReferenceLookupHelper;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$MethodReferenceLookupHelper$1, this$1)},
	{}
};

$MethodInfo _Resolve$MethodReferenceLookupHelper$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$MethodReferenceLookupHelper;Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)V", nullptr, 0, $method(static_cast<void(Resolve$MethodReferenceLookupHelper$1::*)($Resolve$MethodReferenceLookupHelper*,$JCTree$JCMemberReference*,$Name*,$Type*,$List*,$List*,$Resolve$MethodResolutionPhase*)>(&Resolve$MethodReferenceLookupHelper$1::init$))},
	{"lookup", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", 0},
	{"referenceKind", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind;", nullptr, 0},
	{"unboundLookup", "(Lcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupHelper;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _Resolve$MethodReferenceLookupHelper$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Resolve$MethodReferenceLookupHelper",
	"unboundLookup",
	"(Lcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupHelper;"
};

$InnerClassInfo _Resolve$MethodReferenceLookupHelper$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$MethodReferenceLookupHelper", "com.sun.tools.javac.comp.Resolve", "MethodReferenceLookupHelper", 0},
	{"com.sun.tools.javac.comp.Resolve$MethodReferenceLookupHelper$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Resolve$ReferenceLookupHelper", "com.sun.tools.javac.comp.Resolve", "ReferenceLookupHelper", $ABSTRACT},
	{}
};

$ClassInfo _Resolve$MethodReferenceLookupHelper$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$MethodReferenceLookupHelper$1",
	"com.sun.tools.javac.comp.Resolve$ReferenceLookupHelper",
	nullptr,
	_Resolve$MethodReferenceLookupHelper$1_FieldInfo_,
	_Resolve$MethodReferenceLookupHelper$1_MethodInfo_,
	nullptr,
	&_Resolve$MethodReferenceLookupHelper$1_EnclosingMethodInfo_,
	_Resolve$MethodReferenceLookupHelper$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$MethodReferenceLookupHelper$1($Class* clazz) {
	return $of($alloc(Resolve$MethodReferenceLookupHelper$1));
}

void Resolve$MethodReferenceLookupHelper$1::init$($Resolve$MethodReferenceLookupHelper* this$1, $JCTree$JCMemberReference* referenceTree, $Name* name, $Type* site, $List* argtypes, $List* typeargtypes, $Resolve$MethodResolutionPhase* maxPhase) {
	$set(this, this$1, this$1);
	$Resolve$ReferenceLookupHelper::init$(this$1->this$0, referenceTree, name, site, argtypes, typeargtypes, maxPhase);
}

$Resolve$ReferenceLookupHelper* Resolve$MethodReferenceLookupHelper$1::unboundLookup($InferenceContext* inferenceContext) {
	return this;
}

$Symbol* Resolve$MethodReferenceLookupHelper$1::lookup($Env* env, $Resolve$MethodResolutionPhase* phase) {
	return $nc(this->this$1->this$0)->methodNotFound;
}

$JCTree$JCMemberReference$ReferenceKind* Resolve$MethodReferenceLookupHelper$1::referenceKind($Symbol* sym) {
	$Assert::error();
	return nullptr;
}

Resolve$MethodReferenceLookupHelper$1::Resolve$MethodReferenceLookupHelper$1() {
}

$Class* Resolve$MethodReferenceLookupHelper$1::load$($String* name, bool initialize) {
	$loadClass(Resolve$MethodReferenceLookupHelper$1, name, initialize, &_Resolve$MethodReferenceLookupHelper$1_ClassInfo_, allocate$Resolve$MethodReferenceLookupHelper$1);
	return class$;
}

$Class* Resolve$MethodReferenceLookupHelper$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com