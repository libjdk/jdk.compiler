#include <com/sun/tools/javac/comp/Attr$ExpressionLambdaReturnContext.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Attr$FunctionalReturnContext.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

#undef VOID

using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$FunctionalReturnContext = ::com::sun::tools::javac::comp::Attr$FunctionalReturnContext;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $Check$NestedCheckContext = ::com::sun::tools::javac::comp::Check$NestedCheckContext;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
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

$FieldInfo _Attr$ExpressionLambdaReturnContext_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$ExpressionLambdaReturnContext, this$0)},
	{"expr", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0, $field(Attr$ExpressionLambdaReturnContext, expr)},
	{"expStmtExpected", "Z", nullptr, 0, $field(Attr$ExpressionLambdaReturnContext, expStmtExpected)},
	{}
};

$MethodInfo _Attr$ExpressionLambdaReturnContext_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Check$CheckContext;)V", nullptr, 0, $method(static_cast<void(Attr$ExpressionLambdaReturnContext::*)($Attr*,$JCTree$JCExpression*,$Check$CheckContext*)>(&Attr$ExpressionLambdaReturnContext::init$))},
	{"compatible", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PUBLIC},
	{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Attr$ExpressionLambdaReturnContext_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$ExpressionLambdaReturnContext", "com.sun.tools.javac.comp.Attr", "ExpressionLambdaReturnContext", 0},
	{"com.sun.tools.javac.comp.Attr$FunctionalReturnContext", "com.sun.tools.javac.comp.Attr", "FunctionalReturnContext", 0},
	{}
};

$ClassInfo _Attr$ExpressionLambdaReturnContext_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Attr$ExpressionLambdaReturnContext",
	"com.sun.tools.javac.comp.Attr$FunctionalReturnContext",
	nullptr,
	_Attr$ExpressionLambdaReturnContext_FieldInfo_,
	_Attr$ExpressionLambdaReturnContext_MethodInfo_,
	nullptr,
	nullptr,
	_Attr$ExpressionLambdaReturnContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$ExpressionLambdaReturnContext($Class* clazz) {
	return $of($alloc(Attr$ExpressionLambdaReturnContext));
}

void Attr$ExpressionLambdaReturnContext::init$($Attr* this$0, $JCTree$JCExpression* expr, $Check$CheckContext* enclosingContext) {
	$set(this, this$0, this$0);
	$Attr$FunctionalReturnContext::init$(this$0, enclosingContext);
	$set(this, expr, expr);
}

void Attr$ExpressionLambdaReturnContext::report($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic* details) {
	if (this->expStmtExpected) {
		$init($CompilerProperties$Fragments);
		$nc(this->enclosingContext)->report(pos, $($nc(this->this$0->diags)->fragment($CompilerProperties$Fragments::StatExprExpected)));
	} else {
		$Attr$FunctionalReturnContext::report(pos, details);
	}
}

bool Attr$ExpressionLambdaReturnContext::compatible($Type* found, $Type* req, $Warner* warn) {
	$init($TypeTag);
	if ($nc(req)->hasTag($TypeTag::VOID)) {
		this->expStmtExpected = true;
		return $TreeInfo::isExpressionStatement(this->expr);
	} else {
		return $Attr$FunctionalReturnContext::compatible(found, req, warn);
	}
}

Attr$ExpressionLambdaReturnContext::Attr$ExpressionLambdaReturnContext() {
}

$Class* Attr$ExpressionLambdaReturnContext::load$($String* name, bool initialize) {
	$loadClass(Attr$ExpressionLambdaReturnContext, name, initialize, &_Attr$ExpressionLambdaReturnContext_ClassInfo_, allocate$Attr$ExpressionLambdaReturnContext);
	return class$;
}

$Class* Attr$ExpressionLambdaReturnContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com