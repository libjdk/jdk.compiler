#include <com/sun/tools/javac/comp/Resolve$1.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve$AccessError.h>
#include <com/sun/tools/javac/comp/Resolve$InvalidSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $Types$SimpleVisitor = ::com::sun::tools::javac::code::Types$SimpleVisitor;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$AccessError = ::com::sun::tools::javac::comp::Resolve$AccessError;
using $Resolve$InvalidSymbolError = ::com::sun::tools::javac::comp::Resolve$InvalidSymbolError;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$1, this$0)},
	{}
};

$MethodInfo _Resolve$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;)V", nullptr, 0, $method(static_cast<void(Resolve$1::*)($Resolve*)>(&Resolve$1::init$))},
	{"visit", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Lcom/sun/tools/javac/comp/Env;)Ljava/lang/Void;", "(Lcom/sun/tools/javac/code/Type$ArrayType;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Ljava/lang/Void;", $PUBLIC},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/comp/Env;)Ljava/lang/Void;", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Ljava/lang/Void;", $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/comp/Env;)Ljava/lang/Void;", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Ljava/lang/Void;", $PUBLIC},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Env;)Ljava/lang/Void;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Ljava/lang/Void;", $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Lcom/sun/tools/javac/comp/Env;)Ljava/lang/Void;", "(Lcom/sun/tools/javac/code/Type$WildcardType;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Ljava/lang/Void;", $PUBLIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Resolve$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Resolve",
	nullptr,
	nullptr
};

$InnerClassInfo _Resolve$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$SimpleVisitor", "com.sun.tools.javac.code.Types", "SimpleVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Resolve$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$1",
	"com.sun.tools.javac.code.Types$SimpleVisitor",
	nullptr,
	_Resolve$1_FieldInfo_,
	_Resolve$1_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$SimpleVisitor<Ljava/lang/Void;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;",
	&_Resolve$1_EnclosingMethodInfo_,
	_Resolve$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$1($Class* clazz) {
	return $of($alloc(Resolve$1));
}

void Resolve$1::init$($Resolve* this$0) {
	$set(this, this$0, this$0);
	$Types$SimpleVisitor::init$();
}

void Resolve$1::visit($List* ts, $Env* env) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(ts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				visit(t, env);
			}
		}
	}
}

$Void* Resolve$1::visitType($Type* t, $Env* env) {
	return nullptr;
}

$Void* Resolve$1::visitArrayType($Type$ArrayType* t, $Env* env) {
	visit($nc(t)->elemtype, env);
	return nullptr;
}

$Void* Resolve$1::visitClassType($Type$ClassType* t, $Env* env) {
	$useLocalCurrentObjectStackCache();
	visit($($nc(t)->getTypeArguments()), env);
	if (!this->this$0->isAccessible(env, static_cast<$Type*>(t), true)) {
		$var($Symbol, var$0, static_cast<$Symbol*>($new($Resolve$AccessError, this->this$0, env, nullptr, $nc(t)->tsym)));
		this->this$0->accessBase(var$0, $($nc($nc(env)->tree)->pos()), $nc(env->enclClass)->sym, t, $nc($nc(t)->tsym)->name, true);
	}
	return nullptr;
}

$Void* Resolve$1::visitWildcardType($Type$WildcardType* t, $Env* env) {
	visit($nc(t)->type, env);
	return nullptr;
}

$Void* Resolve$1::visitMethodType($Type$MethodType* t, $Env* env) {
	$useLocalCurrentObjectStackCache();
	visit($($nc(t)->getParameterTypes()), env);
	visit($($nc(t)->getReturnType()), env);
	visit($($nc(t)->getThrownTypes()), env);
	return nullptr;
}

$Object* Resolve$1::visitMethodType($Type$MethodType* t, Object$* env) {
	return $of(this->visitMethodType(t, $cast($Env, env)));
}

$Object* Resolve$1::visitArrayType($Type$ArrayType* t, Object$* env) {
	return $of(this->visitArrayType(t, $cast($Env, env)));
}

$Object* Resolve$1::visitWildcardType($Type$WildcardType* t, Object$* env) {
	return $of(this->visitWildcardType(t, $cast($Env, env)));
}

$Object* Resolve$1::visitClassType($Type$ClassType* t, Object$* env) {
	return $of(this->visitClassType(t, $cast($Env, env)));
}

$Object* Resolve$1::visitType($Type* t, Object$* env) {
	return $of(this->visitType(t, $cast($Env, env)));
}

Resolve$1::Resolve$1() {
}

$Class* Resolve$1::load$($String* name, bool initialize) {
	$loadClass(Resolve$1, name, initialize, &_Resolve$1_ClassInfo_, allocate$Resolve$1);
	return class$;
}

$Class* Resolve$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com