#include <com/sun/tools/javac/comp/ArgumentAttr$ResolvedMethodType.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$ArgumentType.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$ResolvedMemberType.h>
#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $ArgumentAttr = ::com::sun::tools::javac::comp::ArgumentAttr;
using $ArgumentAttr$ArgumentType = ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType;
using $ArgumentAttr$ResolvedMemberType = ::com::sun::tools::javac::comp::ArgumentAttr$ResolvedMemberType;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
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

$FieldInfo _ArgumentAttr$ResolvedMethodType_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/ArgumentAttr;", nullptr, $FINAL | $SYNTHETIC, $field(ArgumentAttr$ResolvedMethodType, this$0)},
	{}
};

$MethodInfo _ArgumentAttr$ResolvedMethodType_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", $PUBLIC, $method(static_cast<void(ArgumentAttr$ResolvedMethodType::*)($ArgumentAttr*,$JCTree$JCExpression*,$Env*,$JCTree$JCMethodInvocation*)>(&ArgumentAttr$ResolvedMethodType::init$))},
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;Ljava/util/Map;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;Ljava/util/Map<Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC, $method(static_cast<void(ArgumentAttr$ResolvedMethodType::*)($ArgumentAttr*,$JCTree$JCExpression*,$Env*,$JCTree$JCMethodInvocation*,$Map*)>(&ArgumentAttr$ResolvedMethodType::init$))},
	{"dup", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType;", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType<Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;>;", 0},
	{"dup", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType;", nullptr, $VOLATILE | $SYNTHETIC},
	{"methodType", "()Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"resultInfo", "(Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, 0},
	{}
};

$InnerClassInfo _ArgumentAttr$ResolvedMethodType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.ArgumentAttr$ResolvedMethodType", "com.sun.tools.javac.comp.ArgumentAttr", "ResolvedMethodType", 0},
	{"com.sun.tools.javac.comp.ArgumentAttr$ResolvedMemberType", "com.sun.tools.javac.comp.ArgumentAttr", "ResolvedMemberType", $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCMethodInvocation", "com.sun.tools.javac.tree.JCTree", "JCMethodInvocation", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ArgumentAttr$ResolvedMethodType_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.ArgumentAttr$ResolvedMethodType",
	"com.sun.tools.javac.comp.ArgumentAttr$ResolvedMemberType",
	nullptr,
	_ArgumentAttr$ResolvedMethodType_FieldInfo_,
	_ArgumentAttr$ResolvedMethodType_MethodInfo_,
	"Lcom/sun/tools/javac/comp/ArgumentAttr$ResolvedMemberType<Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;>;",
	nullptr,
	_ArgumentAttr$ResolvedMethodType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.ArgumentAttr"
};

$Object* allocate$ArgumentAttr$ResolvedMethodType($Class* clazz) {
	return $of($alloc(ArgumentAttr$ResolvedMethodType));
}

void ArgumentAttr$ResolvedMethodType::init$($ArgumentAttr* this$0, $JCTree$JCExpression* tree, $Env* env, $JCTree$JCMethodInvocation* speculativeTree) {
	ArgumentAttr$ResolvedMethodType::init$(this$0, tree, env, speculativeTree, $$new($HashMap));
}

void ArgumentAttr$ResolvedMethodType::init$($ArgumentAttr* this$0, $JCTree$JCExpression* tree, $Env* env, $JCTree$JCMethodInvocation* speculativeTree, $Map* speculativeTypes) {
	$set(this, this$0, this$0);
	$ArgumentAttr$ResolvedMemberType::init$(this$0, tree, env, speculativeTree, speculativeTypes);
}

$Attr$ResultInfo* ArgumentAttr$ResolvedMethodType::resultInfo($Attr$ResultInfo* resultInfo) {
	return resultInfo;
}

$Type* ArgumentAttr$ResolvedMethodType::methodType() {
	return $nc($nc(($cast($JCTree$JCMethodInvocation, this->speculativeTree$)))->meth)->type;
}

$ArgumentAttr$ArgumentType* ArgumentAttr$ResolvedMethodType::dup($JCTree$JCMethodInvocation* tree, $Env* env) {
	return $new(ArgumentAttr$ResolvedMethodType, this->this$0, tree, env, $cast($JCTree$JCMethodInvocation, this->speculativeTree$), this->speculativeTypes);
}

$ArgumentAttr$ArgumentType* ArgumentAttr$ResolvedMethodType::dup($JCTree$JCExpression* tree, $Env* env) {
	return this->dup($cast($JCTree$JCMethodInvocation, tree), env);
}

ArgumentAttr$ResolvedMethodType::ArgumentAttr$ResolvedMethodType() {
}

$Class* ArgumentAttr$ResolvedMethodType::load$($String* name, bool initialize) {
	$loadClass(ArgumentAttr$ResolvedMethodType, name, initialize, &_ArgumentAttr$ResolvedMethodType_ClassInfo_, allocate$ArgumentAttr$ResolvedMethodType);
	return class$;
}

$Class* ArgumentAttr$ResolvedMethodType::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com