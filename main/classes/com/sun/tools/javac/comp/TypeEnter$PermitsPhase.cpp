#include <com/sun/tools/javac/comp/TypeEnter$PermitsPhase.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase.h>
#include <com/sun/tools/javac/comp/TypeEnter$HeaderPhase.h>
#include <com/sun/tools/javac/comp/TypeEnter$Phase.h>
#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/util/Dependencies$CompletionCause.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef HIERARCHY_PHASE
#undef TYP

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $TypeEnter = ::com::sun::tools::javac::comp::TypeEnter;
using $TypeEnter$AbstractHeaderPhase = ::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase;
using $TypeEnter$HeaderPhase = ::com::sun::tools::javac::comp::TypeEnter$HeaderPhase;
using $TypeEnter$Phase = ::com::sun::tools::javac::comp::TypeEnter$Phase;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $Dependencies$CompletionCause = ::com::sun::tools::javac::util::Dependencies$CompletionCause;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _TypeEnter$PermitsPhase_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/TypeEnter;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$PermitsPhase, this$0)},
	{}
};

$MethodInfo _TypeEnter$PermitsPhase_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$PermitsPhase::*)($TypeEnter*)>(&TypeEnter$PermitsPhase::init$))},
	{"runPhase", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PROTECTED},
	{}
};

$InnerClassInfo _TypeEnter$PermitsPhase_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TypeEnter$PermitsPhase", "com.sun.tools.javac.comp.TypeEnter", "PermitsPhase", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase", "com.sun.tools.javac.comp.TypeEnter", "AbstractHeaderPhase", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _TypeEnter$PermitsPhase_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.comp.TypeEnter$PermitsPhase",
	"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase",
	nullptr,
	_TypeEnter$PermitsPhase_FieldInfo_,
	_TypeEnter$PermitsPhase_MethodInfo_,
	nullptr,
	nullptr,
	_TypeEnter$PermitsPhase_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TypeEnter"
};

$Object* allocate$TypeEnter$PermitsPhase($Class* clazz) {
	return $of($alloc(TypeEnter$PermitsPhase));
}

void TypeEnter$PermitsPhase::init$($TypeEnter* this$0) {
	$set(this, this$0, this$0);
	$init($Dependencies$CompletionCause);
	$TypeEnter$AbstractHeaderPhase::init$(this$0, $Dependencies$CompletionCause::HIERARCHY_PHASE, $$new($TypeEnter$HeaderPhase, this$0));
}

void TypeEnter$PermitsPhase::runPhase($Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCClassDecl, tree, $nc(env)->enclClass);
	bool var$0 = !$nc($nc(tree)->sym)->isAnonymous();
	if (var$0 || $nc($nc(tree)->sym)->isEnum()) {
		{
			$var($Iterator, i$, $nc($($nc(this->this$0->types)->directSupertypes($nc(tree->sym)->type)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, supertype, $cast($Type, i$->next()));
				{
					$init($Kinds$Kind);
					if ($nc($nc(supertype)->tsym)->kind == $Kinds$Kind::TYP) {
						$var($Symbol$ClassSymbol, supClass, $cast($Symbol$ClassSymbol, supertype->tsym));
						$var($Env, supClassEnv, $nc(this->this$0->enter)->getEnv(supClass));
						if ($nc(supClass)->isSealed() && !supClass->isPermittedExplicit && supClassEnv != nullptr && supClassEnv->toplevel == env->toplevel) {
							$set(supClass, permitted, $nc(supClass->permitted)->append(tree->sym));
						}
					}
				}
			}
		}
	}
}

TypeEnter$PermitsPhase::TypeEnter$PermitsPhase() {
}

$Class* TypeEnter$PermitsPhase::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$PermitsPhase, name, initialize, &_TypeEnter$PermitsPhase_ClassInfo_, allocate$TypeEnter$PermitsPhase);
	return class$;
}

$Class* TypeEnter$PermitsPhase::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com