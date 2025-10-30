#include <com/sun/tools/javac/comp/ArgumentAttr$ResolvedConstructorType.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$ArgumentType.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$ResolvedMemberType.h>
#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $ArgumentAttr = ::com::sun::tools::javac::comp::ArgumentAttr;
using $ArgumentAttr$ArgumentType = ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType;
using $ArgumentAttr$ResolvedMemberType = ::com::sun::tools::javac::comp::ArgumentAttr$ResolvedMemberType;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
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

$FieldInfo _ArgumentAttr$ResolvedConstructorType_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/ArgumentAttr;", nullptr, $FINAL | $SYNTHETIC, $field(ArgumentAttr$ResolvedConstructorType, this$0)},
	{}
};

$MethodInfo _ArgumentAttr$ResolvedConstructorType_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", $PUBLIC, $method(static_cast<void(ArgumentAttr$ResolvedConstructorType::*)($ArgumentAttr*,$JCTree$JCExpression*,$Env*,$JCTree$JCNewClass*)>(&ArgumentAttr$ResolvedConstructorType::init$))},
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Ljava/util/Map;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Ljava/util/Map<Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC, $method(static_cast<void(ArgumentAttr$ResolvedConstructorType::*)($ArgumentAttr*,$JCTree$JCExpression*,$Env*,$JCTree$JCNewClass*,$Map*)>(&ArgumentAttr$ResolvedConstructorType::init$))},
	{"dup", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType;", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType<Lcom/sun/tools/javac/tree/JCTree$JCNewClass;>;", 0},
	{"dup", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType;", nullptr, $VOLATILE | $SYNTHETIC},
	{"methodType", "()Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"resultInfo", "(Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, 0},
	{}
};

$InnerClassInfo _ArgumentAttr$ResolvedConstructorType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.ArgumentAttr$ResolvedConstructorType", "com.sun.tools.javac.comp.ArgumentAttr", "ResolvedConstructorType", 0},
	{"com.sun.tools.javac.comp.ArgumentAttr$ResolvedMemberType", "com.sun.tools.javac.comp.ArgumentAttr", "ResolvedMemberType", $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCNewClass", "com.sun.tools.javac.tree.JCTree", "JCNewClass", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ArgumentAttr$ResolvedConstructorType_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.ArgumentAttr$ResolvedConstructorType",
	"com.sun.tools.javac.comp.ArgumentAttr$ResolvedMemberType",
	nullptr,
	_ArgumentAttr$ResolvedConstructorType_FieldInfo_,
	_ArgumentAttr$ResolvedConstructorType_MethodInfo_,
	"Lcom/sun/tools/javac/comp/ArgumentAttr$ResolvedMemberType<Lcom/sun/tools/javac/tree/JCTree$JCNewClass;>;",
	nullptr,
	_ArgumentAttr$ResolvedConstructorType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.ArgumentAttr"
};

$Object* allocate$ArgumentAttr$ResolvedConstructorType($Class* clazz) {
	return $of($alloc(ArgumentAttr$ResolvedConstructorType));
}

void ArgumentAttr$ResolvedConstructorType::init$($ArgumentAttr* this$0, $JCTree$JCExpression* tree, $Env* env, $JCTree$JCNewClass* speculativeTree) {
	ArgumentAttr$ResolvedConstructorType::init$(this$0, tree, env, speculativeTree, $$new($HashMap));
}

void ArgumentAttr$ResolvedConstructorType::init$($ArgumentAttr* this$0, $JCTree$JCExpression* tree, $Env* env, $JCTree$JCNewClass* speculativeTree, $Map* speculativeTypes) {
	$set(this, this$0, this$0);
	$ArgumentAttr$ResolvedMemberType::init$(this$0, tree, env, speculativeTree, speculativeTypes);
}

$Attr$ResultInfo* ArgumentAttr$ResolvedConstructorType::resultInfo($Attr$ResultInfo* resultInfo) {
	return $nc(resultInfo)->dup($($nc(this->this$0->attr)->diamondContext($cast($JCTree$JCNewClass, this->speculativeTree$), $nc($nc($nc(($cast($JCTree$JCNewClass, this->speculativeTree$)))->clazz)->type)->tsym, resultInfo->checkContext)));
}

$Type* ArgumentAttr$ResolvedConstructorType::methodType() {
	return ($nc(($cast($JCTree$JCNewClass, this->speculativeTree$)))->constructorType != nullptr) ? $nc($nc(($cast($JCTree$JCNewClass, this->speculativeTree$)))->constructorType)->baseType() : $nc(this->this$0->syms)->errType;
}

$ArgumentAttr$ArgumentType* ArgumentAttr$ResolvedConstructorType::dup($JCTree$JCNewClass* tree, $Env* env) {
	return $new(ArgumentAttr$ResolvedConstructorType, this->this$0, tree, env, $cast($JCTree$JCNewClass, this->speculativeTree$), this->speculativeTypes);
}

$ArgumentAttr$ArgumentType* ArgumentAttr$ResolvedConstructorType::dup($JCTree$JCExpression* tree, $Env* env) {
	return this->dup($cast($JCTree$JCNewClass, tree), env);
}

ArgumentAttr$ResolvedConstructorType::ArgumentAttr$ResolvedConstructorType() {
}

$Class* ArgumentAttr$ResolvedConstructorType::load$($String* name, bool initialize) {
	$loadClass(ArgumentAttr$ResolvedConstructorType, name, initialize, &_ArgumentAttr$ResolvedConstructorType_ClassInfo_, allocate$ArgumentAttr$ResolvedConstructorType);
	return class$;
}

$Class* ArgumentAttr$ResolvedConstructorType::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com