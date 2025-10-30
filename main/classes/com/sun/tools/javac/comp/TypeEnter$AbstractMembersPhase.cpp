#include <com/sun/tools/javac/comp/TypeEnter$AbstractMembersPhase.h>

#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/TypeEnter$Phase.h>
#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/util/Dependencies$CompletionCause.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Position.h>
#include <jcpp.h>

#undef CLASS
#undef FIRSTPOS

using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $TypeEnter = ::com::sun::tools::javac::comp::TypeEnter;
using $TypeEnter$Phase = ::com::sun::tools::javac::comp::TypeEnter$Phase;
using $Dependencies$CompletionCause = ::com::sun::tools::javac::util::Dependencies$CompletionCause;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Position = ::com::sun::tools::javac::util::Position;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _TypeEnter$AbstractMembersPhase_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/TypeEnter;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$AbstractMembersPhase, this$0)},
	{"completing", "Z", nullptr, $PRIVATE, $field(TypeEnter$AbstractMembersPhase, completing)},
	{"todo", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", $PRIVATE, $field(TypeEnter$AbstractMembersPhase, todo)},
	{}
};

$MethodInfo _TypeEnter$AbstractMembersPhase_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter;Lcom/sun/tools/javac/util/Dependencies$CompletionCause;Lcom/sun/tools/javac/comp/TypeEnter$Phase;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$AbstractMembersPhase::*)($TypeEnter*,$Dependencies$CompletionCause*,$TypeEnter$Phase*)>(&TypeEnter$AbstractMembersPhase::init$))},
	{"doCompleteEnvs", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;)V", $PROTECTED},
	{"enterThisAndSuper", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0},
	{}
};

$InnerClassInfo _TypeEnter$AbstractMembersPhase_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TypeEnter$AbstractMembersPhase", "com.sun.tools.javac.comp.TypeEnter", "AbstractMembersPhase", $PRIVATE | $ABSTRACT},
	{"com.sun.tools.javac.comp.TypeEnter$Phase", "com.sun.tools.javac.comp.TypeEnter", "Phase", $ABSTRACT},
	{}
};

$ClassInfo _TypeEnter$AbstractMembersPhase_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.TypeEnter$AbstractMembersPhase",
	"com.sun.tools.javac.comp.TypeEnter$Phase",
	nullptr,
	_TypeEnter$AbstractMembersPhase_FieldInfo_,
	_TypeEnter$AbstractMembersPhase_MethodInfo_,
	nullptr,
	nullptr,
	_TypeEnter$AbstractMembersPhase_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TypeEnter"
};

$Object* allocate$TypeEnter$AbstractMembersPhase($Class* clazz) {
	return $of($alloc(TypeEnter$AbstractMembersPhase));
}

void TypeEnter$AbstractMembersPhase::init$($TypeEnter* this$0, $Dependencies$CompletionCause* completionCause, $TypeEnter$Phase* next) {
	$set(this, this$0, this$0);
	$TypeEnter$Phase::init$(this$0, completionCause, next);
	$set(this, todo, $List::nil());
}

void TypeEnter$AbstractMembersPhase::doCompleteEnvs($List* envs) {
	$useLocalCurrentObjectStackCache();
	$set(this, todo, $nc(this->todo)->prependList(envs));
	if (this->completing) {
		return;
	}
	bool prevCompleting = this->completing;
	this->completing = true;
	{
		$var($Throwable, var$0, nullptr);
		try {
			while ($nc(this->todo)->nonEmpty()) {
				$var($Env, head, $cast($Env, $nc(this->todo)->head));
				$set(this, todo, $nc(this->todo)->tail);
				$TypeEnter$Phase::doCompleteEnvs($($List::of(head)));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->completing = prevCompleting;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TypeEnter$AbstractMembersPhase::enterThisAndSuper($Symbol$ClassSymbol* sym, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Type$ClassType, ct, $cast($Type$ClassType, $nc(sym)->type));
	$var($Symbol$VarSymbol, thisSym, $new($Symbol$VarSymbol, 16 | 0x00040000, $nc(this->this$0->names)->_this, sym->type, sym));
	thisSym->pos = $Position::FIRSTPOS;
	$nc($nc(($cast($AttrContext, $nc(env)->info)))->scope)->enter(thisSym);
	$init($TypeTag);
	if (((int64_t)(sym->flags_field & (uint64_t)(int64_t)512)) == 0 && $nc($nc(ct)->supertype_field)->hasTag($TypeTag::CLASS)) {
		$var($Symbol$VarSymbol, superSym, $new($Symbol$VarSymbol, 16 | 0x00040000, $nc(this->this$0->names)->_super, ct->supertype_field, sym));
		superSym->pos = $Position::FIRSTPOS;
		$nc($nc(($cast($AttrContext, env->info)))->scope)->enter(superSym);
	}
}

TypeEnter$AbstractMembersPhase::TypeEnter$AbstractMembersPhase() {
}

$Class* TypeEnter$AbstractMembersPhase::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$AbstractMembersPhase, name, initialize, &_TypeEnter$AbstractMembersPhase_ClassInfo_, allocate$TypeEnter$AbstractMembersPhase);
	return class$;
}

$Class* TypeEnter$AbstractMembersPhase::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com