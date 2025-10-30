#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode$StructuralStuckChecker.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/LambdaExpressionTree$BodyKind.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$FunctionDescriptorLookupError.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$LocalCacheContext.h>
#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$5.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType$SpeculativeCache.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheck.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceChooser.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>
#include <com/sun/tools/javac/tree/JCTree$JCErroneous.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef EXPRESSION
#undef FRAGMENT
#undef VOID

using $LambdaExpressionTree$BodyKind = ::com::sun::source::tree::LambdaExpressionTree$BodyKind;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$FunctionDescriptorLookupError = ::com::sun::tools::javac::code::Types$FunctionDescriptorLookupError;
using $ArgumentAttr = ::com::sun::tools::javac::comp::ArgumentAttr;
using $ArgumentAttr$LocalCacheContext = ::com::sun::tools::javac::comp::ArgumentAttr$LocalCacheContext;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$5 = ::com::sun::tools::javac::comp::DeferredAttr$5;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$DeferredAttrNode = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode;
using $DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $DeferredAttr$DeferredType$SpeculativeCache = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType$SpeculativeCache;
using $Env = ::com::sun::tools::javac::comp::Env;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$MethodCheck = ::com::sun::tools::javac::comp::Resolve$MethodCheck;
using $Resolve$ReferenceChooser = ::com::sun::tools::javac::comp::Resolve$ReferenceChooser;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCErroneous = ::com::sun::tools::javac::tree::JCTree$JCErroneous;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMemberReference$OverloadKind = ::com::sun::tools::javac::tree::JCTree$JCMemberReference$OverloadKind;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCSwitchExpression = ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeCopier = ::com::sun::tools::javac::tree::TreeCopier;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Function = ::java::util::function::Function;
using $Collector = ::java::util::stream::Collector;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0 : public $Function {
	$class(DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0, $NO_CLASS_INIT, $Function)
public:
	void init$(DeferredAttr$DeferredAttrNode$StructuralStuckChecker* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* vd) override {
		 return $of($nc(inst$)->lambda$canLambdaBodyCompleteNormally$0($cast($JCTree$JCVariableDecl, vd)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0>());
	}
	DeferredAttr$DeferredAttrNode$StructuralStuckChecker* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0, inst$)},
	{}
};
$MethodInfo DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode$StructuralStuckChecker;)V", nullptr, $PUBLIC, $method(static_cast<void(DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0::*)(DeferredAttr$DeferredAttrNode$StructuralStuckChecker*)>(&DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0::class$ = nullptr;

$FieldInfo _DeferredAttr$DeferredAttrNode$StructuralStuckChecker_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, this$1)},
	{"resultInfo", "Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, 0, $field(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, resultInfo)},
	{"inferenceContext", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, 0, $field(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, inferenceContext)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0, $field(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, env)},
	{}
};

$MethodInfo _DeferredAttr$DeferredAttrNode$StructuralStuckChecker_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode;)V", nullptr, 0, $method(static_cast<void(DeferredAttr$DeferredAttrNode$StructuralStuckChecker::*)($DeferredAttr$DeferredAttrNode*)>(&DeferredAttr$DeferredAttrNode$StructuralStuckChecker::init$))},
	{"canLambdaBodyCompleteNormally", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)Z", nullptr, 0},
	{"check", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;)V", nullptr, $PUBLIC},
	{"lambda$canLambdaBodyCompleteNormally$0", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$JCTree$JCVariableDecl*(DeferredAttr$DeferredAttrNode$StructuralStuckChecker::*)($JCTree$JCVariableDecl*)>(&DeferredAttr$DeferredAttrNode$StructuralStuckChecker::lambda$canLambdaBodyCompleteNormally$0))},
	{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC},
	{"visitConditional", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC},
	{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DeferredAttr$DeferredAttrNode$StructuralStuckChecker_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode", "com.sun.tools.javac.comp.DeferredAttr", "DeferredAttrNode", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$StructuralStuckChecker", "com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode", "StructuralStuckChecker", 0},
	{}
};

$ClassInfo _DeferredAttr$DeferredAttrNode$StructuralStuckChecker_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$StructuralStuckChecker",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_DeferredAttr$DeferredAttrNode$StructuralStuckChecker_FieldInfo_,
	_DeferredAttr$DeferredAttrNode$StructuralStuckChecker_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredAttr$DeferredAttrNode$StructuralStuckChecker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$DeferredAttrNode$StructuralStuckChecker($Class* clazz) {
	return $of($alloc(DeferredAttr$DeferredAttrNode$StructuralStuckChecker));
}

void DeferredAttr$DeferredAttrNode$StructuralStuckChecker::init$($DeferredAttr$DeferredAttrNode* this$1) {
	$set(this, this$1, this$1);
	$TreeScanner::init$();
}

void DeferredAttr$DeferredAttrNode$StructuralStuckChecker::check($DeferredAttr$DeferredType* dt, $Attr$ResultInfo* resultInfo, $DeferredAttr$DeferredAttrContext* deferredAttrContext) {
	$set(this, resultInfo, resultInfo);
	$set(this, inferenceContext, $nc(deferredAttrContext)->inferenceContext);
	$set(this, env, $nc(dt)->env);
	$nc(dt->tree)->accept(this);
	$nc(dt->speculativeCache)->put($nc(this->this$1->this$0)->stuckTree, resultInfo);
}

void DeferredAttr$DeferredAttrNode$StructuralStuckChecker::visitLambda($JCTree$JCLambda* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Check$CheckContext, checkContext, $nc(this->resultInfo)->checkContext);
	$var($Type, pt, $nc(this->resultInfo)->pt);
	if (!$nc($nc(this->inferenceContext)->inferencevars)->contains(pt)) {
		$var($Type, descriptorType, nullptr);
		try {
			$assign(descriptorType, $nc($nc(this->this$1->this$0)->types)->findDescriptorType(pt));
		} catch ($Types$FunctionDescriptorLookupError& ex) {
			$nc(checkContext)->report(nullptr, $(ex->getDiagnostic()));
		}
		int32_t var$0 = $nc($($nc(descriptorType)->getParameterTypes()))->length();
		if (var$0 != $nc($nc(tree)->params)->length()) {
			$init($CompilerProperties$Fragments);
			$nc(checkContext)->report(tree, $($nc($nc(this->this$1->this$0)->diags)->fragment($CompilerProperties$Fragments::IncompatibleArgTypesInLambda)));
		}
		$var($Type, currentReturnType, $nc(descriptorType)->getReturnType());
		$init($TypeTag);
		bool returnTypeIsVoid = $nc(currentReturnType)->hasTag($TypeTag::VOID);
		$init($LambdaExpressionTree$BodyKind);
		if ($nc(tree)->getBodyKind() == $LambdaExpressionTree$BodyKind::EXPRESSION) {
			bool isExpressionCompatible = !returnTypeIsVoid || $TreeInfo::isExpressionStatement($cast($JCTree$JCExpression, $(tree->getBody())));
			if (!isExpressionCompatible) {
				$var($JCDiagnostic$DiagnosticPosition, var$1, tree->pos());
				$nc($nc(this->resultInfo)->checkContext)->report(var$1, $($nc($nc(this->this$1->this$0)->diags)->fragment($($CompilerProperties$Fragments::IncompatibleRetTypeInLambda($($CompilerProperties$Fragments::MissingRetVal(currentReturnType)))))));
			}
		} else {
			$var($DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker, lambdaBodyChecker, $new($DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker, this->this$1));
			$nc(tree->body)->accept(lambdaBodyChecker);
			bool isVoidCompatible = lambdaBodyChecker->isVoidCompatible;
			if (returnTypeIsVoid) {
				if (!isVoidCompatible) {
					$var($JCDiagnostic$DiagnosticPosition, var$2, tree->pos());
					$init($CompilerProperties$Fragments);
					$nc($nc(this->resultInfo)->checkContext)->report(var$2, $($nc($nc(this->this$1->this$0)->diags)->fragment($CompilerProperties$Fragments::UnexpectedRetVal)));
				}
			} else {
				bool isValueCompatible = lambdaBodyChecker->isPotentiallyValueCompatible && !canLambdaBodyCompleteNormally(tree);
				if (!isValueCompatible && !isVoidCompatible) {
					$init($CompilerProperties$Errors);
					$nc($nc(this->this$1->this$0)->log)->error($($nc(tree->body)->pos()), $CompilerProperties$Errors::LambdaBodyNeitherValueNorVoidCompatible);
				}
				if (!isValueCompatible) {
					$var($JCDiagnostic$DiagnosticPosition, var$3, tree->pos());
					$nc($nc(this->resultInfo)->checkContext)->report(var$3, $($nc($nc(this->this$1->this$0)->diags)->fragment($($CompilerProperties$Fragments::IncompatibleRetTypeInLambda($($CompilerProperties$Fragments::MissingRetVal(currentReturnType)))))));
				}
			}
		}
	}
}

bool DeferredAttr$DeferredAttrNode$StructuralStuckChecker::canLambdaBodyCompleteNormally($JCTree$JCLambda* tree) {
	$useLocalCurrentObjectStackCache();
	$var($List, oldParams, $nc(tree)->params);
	$var($ArgumentAttr$LocalCacheContext, localCacheContext, $nc($nc(this->this$1->this$0)->argumentAttr)->withLocalCacheContext());
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$set(tree, params, $cast($List, $nc($($nc($($nc(tree->params)->stream()))->map(static_cast<$Function*>($$new(DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0, this)))))->collect($($List::collector()))));
			var$2 = $nc($($nc(this->this$1->this$0)->attribSpeculativeLambda(tree, this->env, $nc($nc(this->this$1->this$0)->attr)->unknownExprInfo)))->canCompleteNormally;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(localCacheContext)->leave();
			$set(tree, params, oldParams);
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

void DeferredAttr$DeferredAttrNode$StructuralStuckChecker::visitNewClass($JCTree$JCNewClass* tree) {
}

void DeferredAttr$DeferredAttrNode$StructuralStuckChecker::visitApply($JCTree$JCMethodInvocation* tree) {
}

void DeferredAttr$DeferredAttrNode$StructuralStuckChecker::visitConditional($JCTree$JCConditional* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->truepart));
	scan(static_cast<$JCTree*>($nc(tree)->falsepart));
}

void DeferredAttr$DeferredAttrNode$StructuralStuckChecker::visitSwitchExpression($JCTree$JCSwitchExpression* tree) {
	scan($nc(tree)->cases);
}

void DeferredAttr$DeferredAttrNode$StructuralStuckChecker::visitReference($JCTree$JCMemberReference* tree) {
	$useLocalCurrentObjectStackCache();
	$Assert::checkNonNull($($nc(tree)->getOverloadKind()));
	$var($Check$CheckContext, checkContext, $nc(this->resultInfo)->checkContext);
	$var($Type, pt, $nc(this->resultInfo)->pt);
	if (!$nc($nc(this->inferenceContext)->inferencevars)->contains(pt)) {
		$var($Type, descriptor, nullptr);
		try {
			$assign(descriptor, $nc($nc(this->this$1->this$0)->types)->findDescriptorType(pt));
		} catch ($Types$FunctionDescriptorLookupError& ex) {
			$nc(checkContext)->report(nullptr, $(ex->getDiagnostic()));
		}
		$var($Env, localEnv, $nc(this->env)->dup(tree));
		$var($JCTree$JCExpression, exprTree, nullptr);
		$var($JCTree, var$0, $cast($JCTree, $nc(tree)->getQualifierExpression()));
		$var($Env, var$1, localEnv);
		$var($Attr$ResultInfo, var$2, $nc($nc(this->this$1->this$0)->attr)->memberReferenceQualifierResult(tree));
		$assign(exprTree, $cast($JCTree$JCExpression, $nc(this->this$1->this$0)->attribSpeculative(var$0, var$1, var$2, $($nc($nc(this->this$1->this$0)->argumentAttr)->withLocalCacheContext()))));
		$var($ListBuffer, argtypes, $new($ListBuffer));
		{
			$var($Iterator, i$, $nc($($nc(descriptor)->getParameterTypes()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, t, $cast($Type, i$->next()));
				{
					argtypes->append($Type::noType);
				}
			}
		}
		$var($JCTree$JCMemberReference, mref2, $cast($JCTree$JCMemberReference, $$new($TreeCopier, $nc(this->this$1->this$0)->make)->copy(static_cast<$JCTree*>(tree))));
		$set($nc(mref2), expr, exprTree);
		$var($Env, var$3, localEnv);
		$var($JCTree$JCMemberReference, var$4, mref2);
		$var($Type, var$5, $nc(exprTree)->type);
		$var($Name, var$6, $nc(tree)->name);
		$var($List, var$7, argtypes->toList());
		$var($Symbol, lookupSym, $cast($Symbol, $nc($($nc($nc(this->this$1->this$0)->rs)->resolveMemberReference(var$3, var$4, var$5, var$6, var$7, $($List::nil()), descriptor, $nc($nc(this->this$1->this$0)->rs)->arityMethodCheck, this->inferenceContext, $nc($nc(this->this$1->this$0)->rs)->structuralReferenceChooser)))->fst));
		$init($DeferredAttr$5);
		switch ($nc($DeferredAttr$5::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->get($nc(($nc(lookupSym)->kind))->ordinal())) {
		case 1:
			{}
		case 2:
			{
				$init($CompilerProperties$Fragments);
				$nc(checkContext)->report(tree, $($nc($nc(this->this$1->this$0)->diags)->fragment($CompilerProperties$Fragments::IncompatibleArgTypesInMref)));
				break;
			}
		case 3:
			{}
		case 4:
			{
				$init($JCDiagnostic$DiagnosticType);
				$var($JCDiagnostic$DiagnosticType, var$8, $JCDiagnostic$DiagnosticType::FRAGMENT);
				$var($JCDiagnostic$DiagnosticPosition, var$9, static_cast<$JCDiagnostic$DiagnosticPosition*>(tree));
				$var($Symbol, var$10, static_cast<$Symbol*>($nc($nc(exprTree)->type)->tsym));
				$var($Type, var$11, exprTree->type);
				$var($Name, var$12, $nc(tree)->name);
				$var($List, var$13, argtypes->toList());
				$nc(checkContext)->report(tree, $($nc(($cast($Resolve$ResolveError, lookupSym)))->getDiagnostic(var$8, var$9, var$10, var$11, var$12, var$13, $($List::nil()))));
				break;
			}
		}
	}
}

$JCTree$JCVariableDecl* DeferredAttr$DeferredAttrNode$StructuralStuckChecker::lambda$canLambdaBodyCompleteNormally$0($JCTree$JCVariableDecl* vd) {
	return $nc($nc(this->this$1->this$0)->make)->VarDef($nc(vd)->mods, vd->name, $($nc($nc(this->this$1->this$0)->make)->Erroneous()), nullptr);
}

DeferredAttr$DeferredAttrNode$StructuralStuckChecker::DeferredAttr$DeferredAttrNode$StructuralStuckChecker() {
}

$Class* DeferredAttr$DeferredAttrNode$StructuralStuckChecker::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0::classInfo$.name)) {
			return DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0::load$(name, initialize);
		}
	}
	$loadClass(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, name, initialize, &_DeferredAttr$DeferredAttrNode$StructuralStuckChecker_ClassInfo_, allocate$DeferredAttr$DeferredAttrNode$StructuralStuckChecker);
	return class$;
}

$Class* DeferredAttr$DeferredAttrNode$StructuralStuckChecker::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com