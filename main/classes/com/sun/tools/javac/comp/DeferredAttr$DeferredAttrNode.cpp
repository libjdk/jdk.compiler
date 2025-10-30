#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode.h>

#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$5.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode$1.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode$StructuralStuckChecker.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredStuckPolicy.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Enum.h>
#include <java/lang/Iterable.h>
#include <java/util/Collection.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $Check$NestedCheckContext = ::com::sun::tools::javac::comp::Check$NestedCheckContext;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$5 = ::com::sun::tools::javac::comp::DeferredAttr$5;
using $DeferredAttr$AttrMode = ::com::sun::tools::javac::comp::DeferredAttr$AttrMode;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$DeferredAttrNode$1 = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode$1;
using $DeferredAttr$DeferredAttrNode$StructuralStuckChecker = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode$StructuralStuckChecker;
using $DeferredAttr$DeferredStuckPolicy = ::com::sun::tools::javac::comp::DeferredAttr$DeferredStuckPolicy;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _DeferredAttr$DeferredAttrNode_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$DeferredAttrNode, this$0)},
	{"dt", "Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;", nullptr, 0, $field(DeferredAttr$DeferredAttrNode, dt)},
	{"resultInfo", "Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, 0, $field(DeferredAttr$DeferredAttrNode, resultInfo)},
	{"deferredStuckPolicy", "Lcom/sun/tools/javac/comp/DeferredAttr$DeferredStuckPolicy;", nullptr, 0, $field(DeferredAttr$DeferredAttrNode, deferredStuckPolicy)},
	{}
};

$MethodInfo _DeferredAttr$DeferredAttrNode_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredStuckPolicy;)V", nullptr, 0, $method(static_cast<void(DeferredAttr$DeferredAttrNode::*)($DeferredAttr*,$DeferredAttr$DeferredType*,$Attr$ResultInfo*,$DeferredAttr$DeferredStuckPolicy*)>(&DeferredAttr$DeferredAttrNode::init$))},
	{"process", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _DeferredAttr$DeferredAttrNode_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode", "com.sun.tools.javac.comp.DeferredAttr", "DeferredAttrNode", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker", "com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode", "LambdaBodyStructChecker", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$StructuralStuckChecker", "com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode", "StructuralStuckChecker", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DeferredAttr$DeferredAttrNode_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode",
	"java.lang.Object",
	nullptr,
	_DeferredAttr$DeferredAttrNode_FieldInfo_,
	_DeferredAttr$DeferredAttrNode_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredAttr$DeferredAttrNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$DeferredAttrNode($Class* clazz) {
	return $of($alloc(DeferredAttr$DeferredAttrNode));
}

void DeferredAttr$DeferredAttrNode::init$($DeferredAttr* this$0, $DeferredAttr$DeferredType* dt, $Attr$ResultInfo* resultInfo, $DeferredAttr$DeferredStuckPolicy* deferredStuckPolicy) {
	$set(this, this$0, this$0);
	$set(this, dt, dt);
	$set(this, resultInfo, resultInfo);
	$set(this, deferredStuckPolicy, deferredStuckPolicy);
}

bool DeferredAttr$DeferredAttrNode::process($DeferredAttr$DeferredAttrContext* deferredAttrContext) {
	$useLocalCurrentObjectStackCache();
	$init($DeferredAttr$5);
	switch ($nc($DeferredAttr$5::$SwitchMap$com$sun$tools$javac$comp$DeferredAttr$AttrMode)->get(($nc(deferredAttrContext)->mode)->ordinal())) {
	case 1:
		{
			if ($nc(this->deferredStuckPolicy)->isStuck()) {
				$$new($DeferredAttr$DeferredAttrNode$StructuralStuckChecker, this)->check(this->dt, this->resultInfo, deferredAttrContext);
				return true;
			} else {
				$Assert::error("Cannot get here"_s);
			}
		}
	case 2:
		{
			if ($nc(this->deferredStuckPolicy)->isStuck()) {
				if (deferredAttrContext->parent != this->this$0->emptyDeferredAttrContext && $Type::containsAny($nc($nc(deferredAttrContext->parent)->inferenceContext)->inferencevars, $($List::from($(static_cast<$Iterable*>($nc(this->deferredStuckPolicy)->stuckVars())))))) {
					$nc(deferredAttrContext->parent)->addDeferredAttrNode(this->dt, $($nc(this->resultInfo)->dup(static_cast<$Check$CheckContext*>($$new($DeferredAttr$DeferredAttrNode$1, this, $nc(this->resultInfo)->checkContext, deferredAttrContext)))), this->deferredStuckPolicy);
					$init($Type);
					$set($nc($nc(this->dt)->tree), type, $Type::stuckType);
					return true;
				} else {
					return false;
				}
			} else {
				$Assert::check(!deferredAttrContext->insideOverloadPhase(), "attribution shouldn\'t be happening here"_s);
				$var($Attr$ResultInfo, instResultInfo, $nc(this->resultInfo)->dup($($nc(deferredAttrContext->inferenceContext)->asInstType($nc(this->resultInfo)->pt))));
				$nc(this->dt)->check(instResultInfo, this->this$0->dummyStuckPolicy);
				return true;
			}
		}
	default:
		{
			$throwNew($AssertionError, $of("Bad mode"_s));
		}
	}
}

DeferredAttr$DeferredAttrNode::DeferredAttr$DeferredAttrNode() {
}

$Class* DeferredAttr$DeferredAttrNode::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$DeferredAttrNode, name, initialize, &_DeferredAttr$DeferredAttrNode_ClassInfo_, allocate$DeferredAttr$DeferredAttrNode);
	return class$;
}

$Class* DeferredAttr$DeferredAttrNode::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com