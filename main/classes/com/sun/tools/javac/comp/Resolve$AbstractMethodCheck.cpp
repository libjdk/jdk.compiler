#include <com/sun/tools/javac/comp/Resolve$AbstractMethodCheck.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Infer$InferenceException.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$AbstractMethodCheck$SharedInapplicableMethodException.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableMethodException.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheck.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheckDiag.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

#undef ARITY_MISMATCH
#undef FRAGMENT

using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$InferenceException = ::com::sun::tools::javac::comp::Infer$InferenceException;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$AbstractMethodCheck$SharedInapplicableMethodException = ::com::sun::tools::javac::comp::Resolve$AbstractMethodCheck$SharedInapplicableMethodException;
using $Resolve$InapplicableMethodException = ::com::sun::tools::javac::comp::Resolve$InapplicableMethodException;
using $Resolve$MethodCheck = ::com::sun::tools::javac::comp::Resolve$MethodCheck;
using $Resolve$MethodCheckDiag = ::com::sun::tools::javac::comp::Resolve$MethodCheckDiag;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$AbstractMethodCheck_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$AbstractMethodCheck, this$0)},
	{"methodCheckFailure", "Lcom/sun/tools/javac/comp/Resolve$AbstractMethodCheck$SharedInapplicableMethodException;", nullptr, 0, $field(Resolve$AbstractMethodCheck, methodCheckFailure)},
	{}
};

$MethodInfo _Resolve$AbstractMethodCheck_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;)V", nullptr, 0, $method(static_cast<void(Resolve$AbstractMethodCheck::*)($Resolve*)>(&Resolve$AbstractMethodCheck::init$))},
	{"argumentsAcceptable", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Warner;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/Warner;)V", $PUBLIC},
	{"checkArg", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;ZLcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/Warner;)V", nullptr, $ABSTRACT},
	{"mostSpecificCheck", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/comp/Resolve$MethodCheck;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/comp/Resolve$MethodCheck;", $PUBLIC},
	{"reportMC", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Resolve$MethodCheckDiag;Lcom/sun/tools/javac/comp/InferenceContext;[Ljava/lang/Object;)V", nullptr, $PROTECTED | $TRANSIENT},
	{"treeForDiagnostics", "(Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/tree/JCTree;", $PRIVATE, $method(static_cast<$JCTree*(Resolve$AbstractMethodCheck::*)($Env*)>(&Resolve$AbstractMethodCheck::treeForDiagnostics))},
	{}
};

$InnerClassInfo _Resolve$AbstractMethodCheck_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$AbstractMethodCheck", "com.sun.tools.javac.comp.Resolve", "AbstractMethodCheck", $ABSTRACT},
	{"com.sun.tools.javac.comp.Resolve$MethodCheck", "com.sun.tools.javac.comp.Resolve", "MethodCheck", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.comp.Resolve$AbstractMethodCheck$SharedInapplicableMethodException", "com.sun.tools.javac.comp.Resolve$AbstractMethodCheck", "SharedInapplicableMethodException", 0},
	{}
};

$ClassInfo _Resolve$AbstractMethodCheck_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.Resolve$AbstractMethodCheck",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Resolve$MethodCheck",
	_Resolve$AbstractMethodCheck_FieldInfo_,
	_Resolve$AbstractMethodCheck_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$AbstractMethodCheck_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$AbstractMethodCheck($Class* clazz) {
	return $of($alloc(Resolve$AbstractMethodCheck));
}

void Resolve$AbstractMethodCheck::init$($Resolve* this$0) {
	$set(this, this$0, this$0);
	$set(this, methodCheckFailure, $new($Resolve$AbstractMethodCheck$SharedInapplicableMethodException, this));
}

void Resolve$AbstractMethodCheck::argumentsAcceptable($Env* env, $DeferredAttr$DeferredAttrContext* deferredAttrContext, $List* argtypes$renamed, $List* formals$renamed, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	$var($List, argtypes, argtypes$renamed);
	$var($List, formals, formals$renamed);
	bool useVarargs = $nc(deferredAttrContext)->phase->isVarargsRequired();
	$var($JCTree, callTree, treeForDiagnostics(env));
	$var($List, trees, $TreeInfo::args(callTree));
	$var($InferenceContext, inferenceContext, deferredAttrContext->inferenceContext);
	$var($Type, varargsFormal, useVarargs ? $cast($Type, $nc(formals)->last()) : ($Type*)nullptr);
	bool var$0 = varargsFormal == nullptr;
	if (var$0) {
		int32_t var$1 = $nc(argtypes)->size();
		var$0 = var$1 != formals->size();
	}
	if (var$0) {
		$init($Resolve$MethodCheckDiag);
		reportMC(callTree, $Resolve$MethodCheckDiag::ARITY_MISMATCH, inferenceContext, $$new($ObjectArray, 0));
	}
	while ($nc(argtypes)->nonEmpty() && !$equals(formals->head, varargsFormal)) {
		$var($JCDiagnostic$DiagnosticPosition, pos, trees != nullptr ? $cast($JCDiagnostic$DiagnosticPosition, $nc(trees)->head) : ($JCDiagnostic$DiagnosticPosition*)nullptr);
		checkArg(pos, false, $cast($Type, argtypes->head), $cast($Type, formals->head), deferredAttrContext, warn);
		$assign(argtypes, argtypes->tail);
		$assign(formals, formals->tail);
		$assign(trees, trees != nullptr ? trees->tail : trees);
	}
	if (!$equals(formals->head, varargsFormal)) {
		$init($Resolve$MethodCheckDiag);
		reportMC(callTree, $Resolve$MethodCheckDiag::ARITY_MISMATCH, inferenceContext, $$new($ObjectArray, 0));
	}
	if (useVarargs) {
		$var($Type, elt, $nc(this->this$0->types)->elemtype(varargsFormal));
		while ($nc(argtypes)->nonEmpty()) {
			$var($JCDiagnostic$DiagnosticPosition, pos, trees != nullptr ? $cast($JCDiagnostic$DiagnosticPosition, $nc(trees)->head) : ($JCDiagnostic$DiagnosticPosition*)nullptr);
			checkArg(pos, true, $cast($Type, argtypes->head), elt, deferredAttrContext, warn);
			$assign(argtypes, argtypes->tail);
			$assign(trees, trees != nullptr ? trees->tail : trees);
		}
	}
}

$JCTree* Resolve$AbstractMethodCheck::treeForDiagnostics($Env* env) {
	return $nc(($cast($AttrContext, $nc(env)->info)))->preferredTreeForDiagnostics != nullptr ? $nc(($cast($AttrContext, $nc(env)->info)))->preferredTreeForDiagnostics : env->tree;
}

void Resolve$AbstractMethodCheck::reportMC($JCDiagnostic$DiagnosticPosition* pos, $Resolve$MethodCheckDiag* diag, $InferenceContext* inferenceContext, $ObjectArray* args$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, args, args$renamed);
	bool inferDiag = inferenceContext != $nc(this->this$0->infer)->emptyContext;
	if (inferDiag && (!$nc($nc(diag)->inferKey)->equals(diag->basicKey))) {
		$var($ObjectArray, args2, $new($ObjectArray, $nc(args)->length + 1));
		$System::arraycopy(args, 0, args2, 1, args->length);
		args2->set(0, $($nc(inferenceContext)->inferenceVars()));
		$assign(args, args2);
	}
	$var($String, key, inferDiag ? $nc(diag)->inferKey : diag->basicKey);
	$init($JCDiagnostic$DiagnosticType);
	$throw(inferDiag ? $(static_cast<$Resolve$InapplicableMethodException*>($nc(this->this$0->infer)->error($($nc(this->this$0->diags)->create($JCDiagnostic$DiagnosticType::FRAGMENT, $($nc(this->this$0->log)->currentSource()), pos, key, args))))) : $(static_cast<$Resolve$InapplicableMethodException*>($nc(this->methodCheckFailure)->setMessage($($nc(this->this$0->diags)->create($JCDiagnostic$DiagnosticType::FRAGMENT, $($nc(this->this$0->log)->currentSource()), pos, key, args))))));
}

$Resolve$MethodCheck* Resolve$AbstractMethodCheck::mostSpecificCheck($List* actuals) {
	return this->this$0->nilMethodCheck;
}

Resolve$AbstractMethodCheck::Resolve$AbstractMethodCheck() {
}

$Class* Resolve$AbstractMethodCheck::load$($String* name, bool initialize) {
	$loadClass(Resolve$AbstractMethodCheck, name, initialize, &_Resolve$AbstractMethodCheck_ClassInfo_, allocate$Resolve$AbstractMethodCheck);
	return class$;
}

$Class* Resolve$AbstractMethodCheck::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com