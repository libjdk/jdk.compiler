#include <com/sun/tools/javac/comp/TypeEnter$HierarchyPhase.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/TypeEnter$1.h>
#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase.h>
#include <com/sun/tools/javac/comp/TypeEnter$ImportsPhase.h>
#include <com/sun/tools/javac/comp/TypeEnter$PermitsPhase.h>
#include <com/sun/tools/javac/comp/TypeEnter$Phase.h>
#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/comp/TypeEnvs.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeApply.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Dependencies$CompletionCause.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef HIERARCHY_PHASE

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Env = ::com::sun::tools::javac::comp::Env;
using $TypeEnter = ::com::sun::tools::javac::comp::TypeEnter;
using $TypeEnter$1 = ::com::sun::tools::javac::comp::TypeEnter$1;
using $TypeEnter$AbstractHeaderPhase = ::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase;
using $TypeEnter$ImportsPhase = ::com::sun::tools::javac::comp::TypeEnter$ImportsPhase;
using $TypeEnter$PermitsPhase = ::com::sun::tools::javac::comp::TypeEnter$PermitsPhase;
using $TypeEnter$Phase = ::com::sun::tools::javac::comp::TypeEnter$Phase;
using $TypeEnvs = ::com::sun::tools::javac::comp::TypeEnvs;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCTypeApply = ::com::sun::tools::javac::tree::JCTree$JCTypeApply;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Dependencies$CompletionCause = ::com::sun::tools::javac::util::Dependencies$CompletionCause;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _TypeEnter$HierarchyPhase_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/TypeEnter;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$HierarchyPhase, this$0)},
	{}
};

$MethodInfo _TypeEnter$HierarchyPhase_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$HierarchyPhase::*)($TypeEnter*)>(&TypeEnter$HierarchyPhase::init$))},
	{"clearTypeParams", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PROTECTED},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"doCompleteEnvs", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;)V", $PROTECTED},
	{"runPhase", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TypeEnter$HierarchyPhase_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TypeEnter$HierarchyPhase", "com.sun.tools.javac.comp.TypeEnter", "HierarchyPhase", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase", "com.sun.tools.javac.comp.TypeEnter", "AbstractHeaderPhase", $PRIVATE | $ABSTRACT},
	{"com.sun.tools.javac.code.Symbol$Completer", "com.sun.tools.javac.code.Symbol", "Completer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TypeEnter$HierarchyPhase_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.comp.TypeEnter$HierarchyPhase",
	"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase",
	"com.sun.tools.javac.code.Symbol$Completer",
	_TypeEnter$HierarchyPhase_FieldInfo_,
	_TypeEnter$HierarchyPhase_MethodInfo_,
	nullptr,
	nullptr,
	_TypeEnter$HierarchyPhase_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TypeEnter"
};

$Object* allocate$TypeEnter$HierarchyPhase($Class* clazz) {
	return $of($alloc(TypeEnter$HierarchyPhase));
}

int32_t TypeEnter$HierarchyPhase::hashCode() {
	 return this->$TypeEnter$AbstractHeaderPhase::hashCode();
}

bool TypeEnter$HierarchyPhase::equals(Object$* arg0) {
	 return this->$TypeEnter$AbstractHeaderPhase::equals(arg0);
}

$Object* TypeEnter$HierarchyPhase::clone() {
	 return this->$TypeEnter$AbstractHeaderPhase::clone();
}

$String* TypeEnter$HierarchyPhase::toString() {
	 return this->$TypeEnter$AbstractHeaderPhase::toString();
}

void TypeEnter$HierarchyPhase::finalize() {
	this->$TypeEnter$AbstractHeaderPhase::finalize();
}

void TypeEnter$HierarchyPhase::init$($TypeEnter* this$0) {
	$set(this, this$0, this$0);
	$init($Dependencies$CompletionCause);
	$TypeEnter$AbstractHeaderPhase::init$(this$0, $Dependencies$CompletionCause::HIERARCHY_PHASE, $$new($TypeEnter$PermitsPhase, this$0));
}

void TypeEnter$HierarchyPhase::doCompleteEnvs($List* envs) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(envs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Env, env, $cast($Env, i$->next()));
			{
				$set($nc($nc($nc(env)->enclClass)->sym), completer, this);
			}
		}
	}
	{
		$var($Iterator, i$, envs->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Env, env, $cast($Env, i$->next()));
			{
				$nc($nc($nc(env)->enclClass)->sym)->complete();
			}
		}
	}
}

void TypeEnter$HierarchyPhase::runPhase($Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCClassDecl, tree, $nc(env)->enclClass);
	$var($Symbol$ClassSymbol, sym, $nc(tree)->sym);
	$var($Type$ClassType, ct, $cast($Type$ClassType, $nc(sym)->type));
	$var($Env, baseEnv, this->baseEnv(tree, env));
	attribSuperTypes(env, baseEnv);
	if (sym->fullname == $nc(this->this$0->names)->java_lang_Object) {
		if (tree->extending != nullptr) {
			$nc(this->this$0->chk)->checkNonCyclic($($nc(tree->extending)->pos()), $nc(ct)->supertype_field);
			$init($Type);
			$set($nc(ct), supertype_field, $Type::noType);
		} else if ($nc(tree->implementing)->nonEmpty()) {
			$nc(this->this$0->chk)->checkNonCyclic($($nc(($cast($JCTree$JCExpression, $nc(tree->implementing)->head)))->pos()), $cast($Type, $nc($nc(ct)->interfaces_field)->head));
			$set($nc(ct), interfaces_field, $List::nil());
		}
	}
	this->this$0->markDeprecated(sym, $nc(tree->mods)->annotations, baseEnv);
	$nc(this->this$0->chk)->checkNonCyclicDecl(tree);
}

$JCTree$JCExpression* TypeEnter$HierarchyPhase::clearTypeParams($JCTree$JCExpression* superType) {
	$init($TypeEnter$1);
	switch ($nc($TypeEnter$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(superType)->getTag())))->ordinal())) {
	case 1:
		{
			return $nc(($cast($JCTree$JCTypeApply, superType)))->clazz;
		}
	}
	return superType;
}

void TypeEnter$HierarchyPhase::complete($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$Assert::check(($instanceOf($TypeEnter$ImportsPhase, this->this$0->topLevelPhase)) || ($equals(this->this$0->topLevelPhase, this)));
	if (!$equals(this->this$0->topLevelPhase, this)) {
		$set($nc(sym), completer, this);
		return;
	}
	$var($Env, env, $nc(this->this$0->typeEnvs)->get($cast($Symbol$ClassSymbol, sym)));
	$TypeEnter$AbstractHeaderPhase::doCompleteEnvs($($List::of(env)));
}

TypeEnter$HierarchyPhase::TypeEnter$HierarchyPhase() {
}

$Class* TypeEnter$HierarchyPhase::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$HierarchyPhase, name, initialize, &_TypeEnter$HierarchyPhase_ClassInfo_, allocate$TypeEnter$HierarchyPhase);
	return class$;
}

$Class* TypeEnter$HierarchyPhase::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com