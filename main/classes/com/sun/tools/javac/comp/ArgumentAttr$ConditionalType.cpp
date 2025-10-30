#include <com/sun/tools/javac/comp/ArgumentAttr$ConditionalType.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$ArgumentType.h>
#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef VOID

using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $ArgumentAttr = ::com::sun::tools::javac::comp::ArgumentAttr;
using $ArgumentAttr$ArgumentType = ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $Env = ::com::sun::tools::javac::comp::Env;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _ArgumentAttr$ConditionalType_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/ArgumentAttr;", nullptr, $FINAL | $SYNTHETIC, $field(ArgumentAttr$ConditionalType, this$0)},
	{}
};

$MethodInfo _ArgumentAttr$ConditionalType_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", 0, $method(static_cast<void(ArgumentAttr$ConditionalType::*)($ArgumentAttr*,$JCTree$JCExpression*,$Env*,$JCTree$JCConditional*)>(&ArgumentAttr$ConditionalType::init$))},
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCConditional;Ljava/util/Map;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCConditional;Ljava/util/Map<Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/code/Type;>;)V", 0, $method(static_cast<void(ArgumentAttr$ConditionalType::*)($ArgumentAttr*,$JCTree$JCExpression*,$Env*,$JCTree$JCConditional*,$Map*)>(&ArgumentAttr$ConditionalType::init$))},
	{"dup", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType;", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType<Lcom/sun/tools/javac/tree/JCTree$JCConditional;>;", 0},
	{"dup", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType;", nullptr, $VOLATILE | $SYNTHETIC},
	{"overloadCheck", "(Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{}
};

$InnerClassInfo _ArgumentAttr$ConditionalType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.ArgumentAttr$ConditionalType", "com.sun.tools.javac.comp.ArgumentAttr", "ConditionalType", 0},
	{"com.sun.tools.javac.comp.ArgumentAttr$ArgumentType", "com.sun.tools.javac.comp.ArgumentAttr", "ArgumentType", $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCConditional", "com.sun.tools.javac.tree.JCTree", "JCConditional", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ArgumentAttr$ConditionalType_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.ArgumentAttr$ConditionalType",
	"com.sun.tools.javac.comp.ArgumentAttr$ArgumentType",
	nullptr,
	_ArgumentAttr$ConditionalType_FieldInfo_,
	_ArgumentAttr$ConditionalType_MethodInfo_,
	"Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType<Lcom/sun/tools/javac/tree/JCTree$JCConditional;>;",
	nullptr,
	_ArgumentAttr$ConditionalType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.ArgumentAttr"
};

$Object* allocate$ArgumentAttr$ConditionalType($Class* clazz) {
	return $of($alloc(ArgumentAttr$ConditionalType));
}

void ArgumentAttr$ConditionalType::init$($ArgumentAttr* this$0, $JCTree$JCExpression* tree, $Env* env, $JCTree$JCConditional* speculativeCond) {
	ArgumentAttr$ConditionalType::init$(this$0, tree, env, speculativeCond, $$new($HashMap));
}

void ArgumentAttr$ConditionalType::init$($ArgumentAttr* this$0, $JCTree$JCExpression* tree, $Env* env, $JCTree$JCConditional* speculativeCond, $Map* speculativeTypes) {
	$set(this, this$0, this$0);
	$ArgumentAttr$ArgumentType::init$(this$0, tree, env, speculativeCond, speculativeTypes);
}

$Type* ArgumentAttr$ConditionalType::overloadCheck($Attr$ResultInfo* resultInfo, $DeferredAttr$DeferredAttrContext* deferredAttrContext) {
	$useLocalCurrentObjectStackCache();
	$var($Attr$ResultInfo, localInfo, $nc(resultInfo)->dup($($nc(this->this$0->attr)->conditionalContext(resultInfo->checkContext))));
	if ($nc(($cast($JCTree$JCConditional, this->speculativeTree$)))->isStandalone()) {
		return $nc(localInfo)->check(this->speculativeTree$, $nc(($cast($JCTree$JCConditional, this->speculativeTree$)))->type);
	} else {
		$init($TypeTag);
		if ($nc(resultInfo->pt)->hasTag($TypeTag::VOID)) {
			$init($CompilerProperties$Fragments);
			$nc(resultInfo->checkContext)->report(this->tree, $($nc($nc(this->this$0->attr)->diags)->fragment($CompilerProperties$Fragments::ConditionalTargetCantBeVoid)));
			return $nc($nc(this->this$0->attr)->types)->createErrorType(resultInfo->pt);
		} else {
			this->this$0->checkSpeculative($nc(($cast($JCTree$JCConditional, this->speculativeTree$)))->truepart, localInfo);
			this->this$0->checkSpeculative($nc(($cast($JCTree$JCConditional, this->speculativeTree$)))->falsepart, localInfo);
			return $nc(localInfo)->pt;
		}
	}
}

$ArgumentAttr$ArgumentType* ArgumentAttr$ConditionalType::dup($JCTree$JCConditional* tree, $Env* env) {
	return $new(ArgumentAttr$ConditionalType, this->this$0, tree, env, $cast($JCTree$JCConditional, this->speculativeTree$), this->speculativeTypes);
}

$ArgumentAttr$ArgumentType* ArgumentAttr$ConditionalType::dup($JCTree$JCExpression* tree, $Env* env) {
	return this->dup($cast($JCTree$JCConditional, tree), env);
}

ArgumentAttr$ConditionalType::ArgumentAttr$ConditionalType() {
}

$Class* ArgumentAttr$ConditionalType::load$($String* name, bool initialize) {
	$loadClass(ArgumentAttr$ConditionalType, name, initialize, &_ArgumentAttr$ConditionalType_ClassInfo_, allocate$ArgumentAttr$ConditionalType);
	return class$;
}

$Class* ArgumentAttr$ConditionalType::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com