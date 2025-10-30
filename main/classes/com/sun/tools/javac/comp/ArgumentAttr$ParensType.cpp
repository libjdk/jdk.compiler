#include <com/sun/tools/javac/comp/ArgumentAttr$ParensType.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$ArgumentType.h>
#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCParens.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $ArgumentAttr = ::com::sun::tools::javac::comp::ArgumentAttr;
using $ArgumentAttr$ArgumentType = ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCParens = ::com::sun::tools::javac::tree::JCTree$JCParens;
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

$FieldInfo _ArgumentAttr$ParensType_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/ArgumentAttr;", nullptr, $FINAL | $SYNTHETIC, $field(ArgumentAttr$ParensType, this$0)},
	{}
};

$MethodInfo _ArgumentAttr$ParensType_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCParens;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCParens;)V", 0, $method(static_cast<void(ArgumentAttr$ParensType::*)($ArgumentAttr*,$JCTree$JCExpression*,$Env*,$JCTree$JCParens*)>(&ArgumentAttr$ParensType::init$))},
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCParens;Ljava/util/Map;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCParens;Ljava/util/Map<Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/code/Type;>;)V", 0, $method(static_cast<void(ArgumentAttr$ParensType::*)($ArgumentAttr*,$JCTree$JCExpression*,$Env*,$JCTree$JCParens*,$Map*)>(&ArgumentAttr$ParensType::init$))},
	{"dup", "(Lcom/sun/tools/javac/tree/JCTree$JCParens;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType;", "(Lcom/sun/tools/javac/tree/JCTree$JCParens;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType<Lcom/sun/tools/javac/tree/JCTree$JCParens;>;", 0},
	{"dup", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType;", nullptr, $VOLATILE | $SYNTHETIC},
	{"overloadCheck", "(Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{}
};

$InnerClassInfo _ArgumentAttr$ParensType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.ArgumentAttr$ParensType", "com.sun.tools.javac.comp.ArgumentAttr", "ParensType", 0},
	{"com.sun.tools.javac.comp.ArgumentAttr$ArgumentType", "com.sun.tools.javac.comp.ArgumentAttr", "ArgumentType", $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCParens", "com.sun.tools.javac.tree.JCTree", "JCParens", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ArgumentAttr$ParensType_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.ArgumentAttr$ParensType",
	"com.sun.tools.javac.comp.ArgumentAttr$ArgumentType",
	nullptr,
	_ArgumentAttr$ParensType_FieldInfo_,
	_ArgumentAttr$ParensType_MethodInfo_,
	"Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType<Lcom/sun/tools/javac/tree/JCTree$JCParens;>;",
	nullptr,
	_ArgumentAttr$ParensType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.ArgumentAttr"
};

$Object* allocate$ArgumentAttr$ParensType($Class* clazz) {
	return $of($alloc(ArgumentAttr$ParensType));
}

void ArgumentAttr$ParensType::init$($ArgumentAttr* this$0, $JCTree$JCExpression* tree, $Env* env, $JCTree$JCParens* speculativeParens) {
	ArgumentAttr$ParensType::init$(this$0, tree, env, speculativeParens, $$new($HashMap));
}

void ArgumentAttr$ParensType::init$($ArgumentAttr* this$0, $JCTree$JCExpression* tree, $Env* env, $JCTree$JCParens* speculativeParens, $Map* speculativeTypes) {
	$set(this, this$0, this$0);
	$ArgumentAttr$ArgumentType::init$(this$0, tree, env, speculativeParens, speculativeTypes);
}

$Type* ArgumentAttr$ParensType::overloadCheck($Attr$ResultInfo* resultInfo, $DeferredAttr$DeferredAttrContext* deferredAttrContext) {
	return this->this$0->checkSpeculative($nc(($cast($JCTree$JCParens, this->speculativeTree$)))->expr, resultInfo);
}

$ArgumentAttr$ArgumentType* ArgumentAttr$ParensType::dup($JCTree$JCParens* tree, $Env* env) {
	return $new(ArgumentAttr$ParensType, this->this$0, tree, env, $cast($JCTree$JCParens, this->speculativeTree$), this->speculativeTypes);
}

$ArgumentAttr$ArgumentType* ArgumentAttr$ParensType::dup($JCTree$JCExpression* tree, $Env* env) {
	return this->dup($cast($JCTree$JCParens, tree), env);
}

ArgumentAttr$ParensType::ArgumentAttr$ParensType() {
}

$Class* ArgumentAttr$ParensType::load$($String* name, bool initialize) {
	$loadClass(ArgumentAttr$ParensType, name, initialize, &_ArgumentAttr$ParensType_ClassInfo_, allocate$ArgumentAttr$ParensType);
	return class$;
}

$Class* ArgumentAttr$ParensType::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com