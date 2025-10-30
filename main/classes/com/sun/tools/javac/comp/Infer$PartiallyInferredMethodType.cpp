#include <com/sun/tools/javac/comp/Infer$PartiallyInferredMethodType.h>

#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Infer$InferenceException.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

#undef UNCHECKED

using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$InferenceException = ::com::sun::tools::javac::comp::Infer$InferenceException;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Infer$PartiallyInferredMethodType_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$PartiallyInferredMethodType, this$0)},
	{"inferenceContext", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, $FINAL, $field(Infer$PartiallyInferredMethodType, inferenceContext)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0, $field(Infer$PartiallyInferredMethodType, env)},
	{"warn", "Lcom/sun/tools/javac/util/Warner;", nullptr, $FINAL, $field(Infer$PartiallyInferredMethodType, warn)},
	{}
};

$MethodInfo _Infer$PartiallyInferredMethodType_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Warner;)V", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/Warner;)V", $PUBLIC, $method(static_cast<void(Infer$PartiallyInferredMethodType::*)($Infer*,$Type$MethodType*,$InferenceContext*,$Env*,$Warner*)>(&Infer$PartiallyInferredMethodType::init$))},
	{"check", "(Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"isPartial", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Infer$PartiallyInferredMethodType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$PartiallyInferredMethodType", "com.sun.tools.javac.comp.Infer", "PartiallyInferredMethodType", $PUBLIC},
	{"com.sun.tools.javac.code.Type$MethodType", "com.sun.tools.javac.code.Type", "MethodType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Infer$PartiallyInferredMethodType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Infer$PartiallyInferredMethodType",
	"com.sun.tools.javac.code.Type$MethodType",
	nullptr,
	_Infer$PartiallyInferredMethodType_FieldInfo_,
	_Infer$PartiallyInferredMethodType_MethodInfo_,
	nullptr,
	nullptr,
	_Infer$PartiallyInferredMethodType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$PartiallyInferredMethodType($Class* clazz) {
	return $of($alloc(Infer$PartiallyInferredMethodType));
}

void Infer$PartiallyInferredMethodType::init$($Infer* this$0, $Type$MethodType* mtype, $InferenceContext* inferenceContext, $Env* env, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$var($List, var$0, $nc(mtype)->getParameterTypes());
	$var($Type, var$1, mtype->getReturnType());
	$Type$MethodType::init$(var$0, var$1, $(mtype->getThrownTypes()), mtype->tsym);
	$set(this, inferenceContext, inferenceContext);
	$set(this, env, env);
	$set(this, warn, warn);
}

bool Infer$PartiallyInferredMethodType::isPartial() {
	return true;
}

$Type* Infer$PartiallyInferredMethodType::check($Attr$ResultInfo* resultInfo) {
	$useLocalCurrentObjectStackCache();
	$var($Warner, noWarnings, $new($Warner, nullptr));
	$var($List, saved_undet, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		$var($Type, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$assign(saved_undet, $nc(this->inferenceContext)->save());
				$init($Lint$LintCategory);
				bool unchecked = $nc(this->warn)->hasNonSilentLint($Lint$LintCategory::UNCHECKED);
				if (!unchecked) {
					bool shouldPropagate = this->this$0->shouldPropagate($(getReturnType()), resultInfo, this->inferenceContext);
					$var($InferenceContext, minContext, shouldPropagate ? $nc(this->inferenceContext)->min($(this->this$0->roots($(asMethodType()), nullptr)), false, this->warn) : this->inferenceContext);
					$var($Type$MethodType, other, $cast($Type$MethodType, $nc(minContext)->update($(asMethodType()))));
					$var($Type, newRestype, this->this$0->generateReturnConstraints($nc(this->env)->tree, resultInfo, other, minContext));
					if (shouldPropagate) {
						$var($InferenceContext, var$3, $nc($nc(resultInfo)->checkContext)->inferenceContext());
						minContext->dupTo(var$3, $nc($($nc(resultInfo->checkContext)->deferredAttrContext()))->insideOverloadPhase());
						$assign(var$2, newRestype);
						return$1 = true;
						goto $finally;
					}
				}
				$nc(this->inferenceContext)->solve(noWarnings);
				$var($Type, ret, $nc($($nc(this->inferenceContext)->asInstType(this)))->getReturnType());
				if (unchecked) {
					$assign(ret, $nc(this->this$0->types)->erasure(ret));
				}
				$assign(var$2, $nc(resultInfo)->check($nc(this->env)->tree, ret));
				return$1 = true;
				goto $finally;
			} catch ($Infer$InferenceException& ex) {
				$nc($nc(resultInfo)->checkContext)->report(nullptr, $(ex->getDiagnostic()));
				$Assert::error();
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			if (saved_undet != nullptr) {
				$nc(this->inferenceContext)->rollback(saved_undet);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

Infer$PartiallyInferredMethodType::Infer$PartiallyInferredMethodType() {
}

$Class* Infer$PartiallyInferredMethodType::load$($String* name, bool initialize) {
	$loadClass(Infer$PartiallyInferredMethodType, name, initialize, &_Infer$PartiallyInferredMethodType_ClassInfo_, allocate$Infer$PartiallyInferredMethodType);
	return class$;
}

$Class* Infer$PartiallyInferredMethodType::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com