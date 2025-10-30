#include <com/sun/tools/javac/comp/Resolve$4.h>

#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Infer$FreeTypeListener.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$4$1.h>
#include <com/sun/tools/javac/comp/Resolve$AbstractMethodCheck.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheck.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheckContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheckDiag.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResultInfo.h>
#include <com/sun/tools/javac/comp/Resolve$MostSpecificCheck.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

#undef CHECK
#undef INACCESSIBLE_VARARGS

using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $DeferredAttr$AttrMode = ::com::sun::tools::javac::comp::DeferredAttr$AttrMode;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Infer$FreeTypeListener = ::com::sun::tools::javac::comp::Infer$FreeTypeListener;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$4$1 = ::com::sun::tools::javac::comp::Resolve$4$1;
using $Resolve$AbstractMethodCheck = ::com::sun::tools::javac::comp::Resolve$AbstractMethodCheck;
using $Resolve$MethodCheck = ::com::sun::tools::javac::comp::Resolve$MethodCheck;
using $Resolve$MethodCheckContext = ::com::sun::tools::javac::comp::Resolve$MethodCheckContext;
using $Resolve$MethodCheckDiag = ::com::sun::tools::javac::comp::Resolve$MethodCheckDiag;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $Resolve$MethodResultInfo = ::com::sun::tools::javac::comp::Resolve$MethodResultInfo;
using $Resolve$MostSpecificCheck = ::com::sun::tools::javac::comp::Resolve$MostSpecificCheck;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Resolve$4$$Lambda$lambda$varargsAccessible$0 : public $Infer$FreeTypeListener {
	$class(Resolve$4$$Lambda$lambda$varargsAccessible$0, $NO_CLASS_INIT, $Infer$FreeTypeListener)
public:
	void init$(Resolve$4* inst, $Env* env, $Type* t) {
		$set(this, inst$, inst);
		$set(this, env, env);
		$set(this, t, t);
	}
	virtual void typesInferred($InferenceContext* solvedContext) override {
		$nc(inst$)->lambda$varargsAccessible$0(env, t, solvedContext);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Resolve$4$$Lambda$lambda$varargsAccessible$0>());
	}
	Resolve$4* inst$ = nullptr;
	$Env* env = nullptr;
	$Type* t = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Resolve$4$$Lambda$lambda$varargsAccessible$0::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Resolve$4$$Lambda$lambda$varargsAccessible$0, inst$)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", nullptr, $PUBLIC, $field(Resolve$4$$Lambda$lambda$varargsAccessible$0, env)},
	{"t", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Resolve$4$$Lambda$lambda$varargsAccessible$0, t)},
	{}
};
$MethodInfo Resolve$4$$Lambda$lambda$varargsAccessible$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$4;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Resolve$4$$Lambda$lambda$varargsAccessible$0::*)(Resolve$4*,$Env*,$Type*)>(&Resolve$4$$Lambda$lambda$varargsAccessible$0::init$))},
	{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Resolve$4$$Lambda$lambda$varargsAccessible$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Resolve$4$$Lambda$lambda$varargsAccessible$0",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Infer$FreeTypeListener",
	fieldInfos,
	methodInfos
};
$Class* Resolve$4$$Lambda$lambda$varargsAccessible$0::load$($String* name, bool initialize) {
	$loadClass(Resolve$4$$Lambda$lambda$varargsAccessible$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Resolve$4$$Lambda$lambda$varargsAccessible$0::class$ = nullptr;

$FieldInfo _Resolve$4_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$4, this$0)},
	{}
};

$MethodInfo _Resolve$4_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;)V", nullptr, 0, $method(static_cast<void(Resolve$4::*)($Resolve*)>(&Resolve$4::init$))},
	{"argumentsAcceptable", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Warner;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/Warner;)V", $PUBLIC},
	{"checkArg", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;ZLcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/Warner;)V", nullptr, 0},
	{"lambda$varargsAccessible$0", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Resolve$4::*)($Env*,$Type*,$InferenceContext*)>(&Resolve$4::lambda$varargsAccessible$0))},
	{"methodCheckResult", "(ZLcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/Warner;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $PRIVATE, $method(static_cast<$Attr$ResultInfo*(Resolve$4::*)(bool,$Type*,$DeferredAttr$DeferredAttrContext*,$Warner*)>(&Resolve$4::methodCheckResult))},
	{"mostSpecificCheck", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/comp/Resolve$MethodCheck;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/comp/Resolve$MethodCheck;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"varargsAccessible", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/InferenceContext;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/InferenceContext;)V", $PRIVATE, $method(static_cast<void(Resolve$4::*)($Env*,$Type*,$InferenceContext*)>(&Resolve$4::varargsAccessible))},
	{}
};

$EnclosingMethodInfo _Resolve$4_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Resolve",
	nullptr,
	nullptr
};

$InnerClassInfo _Resolve$4_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$4", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Resolve$AbstractMethodCheck", "com.sun.tools.javac.comp.Resolve", "AbstractMethodCheck", $ABSTRACT},
	{"com.sun.tools.javac.comp.Resolve$4$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Resolve$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$4",
	"com.sun.tools.javac.comp.Resolve$AbstractMethodCheck",
	nullptr,
	_Resolve$4_FieldInfo_,
	_Resolve$4_MethodInfo_,
	nullptr,
	&_Resolve$4_EnclosingMethodInfo_,
	_Resolve$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$4($Class* clazz) {
	return $of($alloc(Resolve$4));
}

void Resolve$4::init$($Resolve* this$0) {
	$set(this, this$0, this$0);
	$Resolve$AbstractMethodCheck::init$(this$0);
}

void Resolve$4::checkArg($JCDiagnostic$DiagnosticPosition* pos, bool varargs, $Type* actual, $Type* formal, $DeferredAttr$DeferredAttrContext* deferredAttrContext, $Warner* warn) {
	$var($Attr$ResultInfo, mresult, methodCheckResult(varargs, formal, deferredAttrContext, warn));
	$nc(mresult)->check(pos, actual);
}

void Resolve$4::argumentsAcceptable($Env* env, $DeferredAttr$DeferredAttrContext* deferredAttrContext, $List* argtypes, $List* formals, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	$Resolve$AbstractMethodCheck::argumentsAcceptable(env, deferredAttrContext, argtypes, formals, warn);
	if ($nc(deferredAttrContext)->phase->isVarargsRequired()) {
		$init($DeferredAttr$AttrMode);
		if (deferredAttrContext->mode == $DeferredAttr$AttrMode::CHECK || !this->this$0->checkVarargsAccessAfterResolution) {
			varargsAccessible(env, $($nc(this->this$0->types)->elemtype($cast($Type, $($nc(formals)->last())))), deferredAttrContext->inferenceContext);
		}
	}
}

void Resolve$4::varargsAccessible($Env* env, $Type* t, $InferenceContext* inferenceContext) {
	$useLocalCurrentObjectStackCache();
	if ($nc(inferenceContext)->free(t)) {
		$var($List, var$0, $List::of(t));
		inferenceContext->addFreeTypeListener(var$0, static_cast<$Infer$FreeTypeListener*>($$new(Resolve$4$$Lambda$lambda$varargsAccessible$0, this, env, t)));
	} else if (!this->this$0->isAccessible(env, $($nc(this->this$0->types)->erasure(t)))) {
		$var($Symbol, location, $nc($nc(env)->enclClass)->sym);
		$init($Resolve$MethodCheckDiag);
		reportMC(env->tree, $Resolve$MethodCheckDiag::INACCESSIBLE_VARARGS, inferenceContext, $$new($ObjectArray, {
			$of(t),
			$($of($Kinds::kindName(location))),
			$of(location)
		}));
	}
}

$Attr$ResultInfo* Resolve$4::methodCheckResult(bool varargsCheck, $Type* to, $DeferredAttr$DeferredAttrContext* deferredAttrContext, $Warner* rsWarner) {
	$var($Check$CheckContext, checkContext, $new($Resolve$4$1, this, !$nc(deferredAttrContext)->phase->isBoxingRequired(), deferredAttrContext, rsWarner, varargsCheck));
	return $new($Resolve$MethodResultInfo, this->this$0, to, checkContext);
}

$Resolve$MethodCheck* Resolve$4::mostSpecificCheck($List* actuals) {
	return $new($Resolve$MostSpecificCheck, this->this$0, actuals);
}

$String* Resolve$4::toString() {
	return "resolveMethodCheck"_s;
}

void Resolve$4::lambda$varargsAccessible$0($Env* env, $Type* t, $InferenceContext* solvedContext) {
	varargsAccessible(env, $($nc(solvedContext)->asInstType(t)), solvedContext);
}

Resolve$4::Resolve$4() {
}

$Class* Resolve$4::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Resolve$4$$Lambda$lambda$varargsAccessible$0::classInfo$.name)) {
			return Resolve$4$$Lambda$lambda$varargsAccessible$0::load$(name, initialize);
		}
	}
	$loadClass(Resolve$4, name, initialize, &_Resolve$4_ClassInfo_, allocate$Resolve$4);
	return class$;
}

$Class* Resolve$4::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com