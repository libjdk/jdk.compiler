#include <com/sun/tools/javac/comp/TypeEnter$RecordPhase.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$RecordComponent.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/MemberEnter.h>
#include <com/sun/tools/javac/comp/TypeEnter$AbstractMembersPhase.h>
#include <com/sun/tools/javac/comp/TypeEnter$MembersPhase.h>
#include <com/sun/tools/javac/comp/TypeEnter$Phase.h>
#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/Dependencies$CompletionCause.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef RECORD_PHASE

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$RecordComponent = ::com::sun::tools::javac::code::Symbol$RecordComponent;
using $Env = ::com::sun::tools::javac::comp::Env;
using $MemberEnter = ::com::sun::tools::javac::comp::MemberEnter;
using $TypeEnter = ::com::sun::tools::javac::comp::TypeEnter;
using $TypeEnter$AbstractMembersPhase = ::com::sun::tools::javac::comp::TypeEnter$AbstractMembersPhase;
using $TypeEnter$MembersPhase = ::com::sun::tools::javac::comp::TypeEnter$MembersPhase;
using $TypeEnter$Phase = ::com::sun::tools::javac::comp::TypeEnter$Phase;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $TreeCopier = ::com::sun::tools::javac::tree::TreeCopier;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
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

$FieldInfo _TypeEnter$RecordPhase_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/TypeEnter;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$RecordPhase, this$0)},
	{}
};

$MethodInfo _TypeEnter$RecordPhase_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$RecordPhase::*)($TypeEnter*)>(&TypeEnter$RecordPhase::init$))},
	{"runPhase", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PROTECTED},
	{}
};

$InnerClassInfo _TypeEnter$RecordPhase_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TypeEnter$RecordPhase", "com.sun.tools.javac.comp.TypeEnter", "RecordPhase", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.comp.TypeEnter$AbstractMembersPhase", "com.sun.tools.javac.comp.TypeEnter", "AbstractMembersPhase", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _TypeEnter$RecordPhase_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.comp.TypeEnter$RecordPhase",
	"com.sun.tools.javac.comp.TypeEnter$AbstractMembersPhase",
	nullptr,
	_TypeEnter$RecordPhase_FieldInfo_,
	_TypeEnter$RecordPhase_MethodInfo_,
	nullptr,
	nullptr,
	_TypeEnter$RecordPhase_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TypeEnter"
};

$Object* allocate$TypeEnter$RecordPhase($Class* clazz) {
	return $of($alloc(TypeEnter$RecordPhase));
}

void TypeEnter$RecordPhase::init$($TypeEnter* this$0) {
	$set(this, this$0, this$0);
	$init($Dependencies$CompletionCause);
	$TypeEnter$AbstractMembersPhase::init$(this$0, $Dependencies$CompletionCause::RECORD_PHASE, $$new($TypeEnter$MembersPhase, this$0));
}

void TypeEnter$RecordPhase::runPhase($Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCClassDecl, tree, $nc(env)->enclClass);
	$var($Symbol$ClassSymbol, sym, $nc(tree)->sym);
	if (((int64_t)($nc(sym)->flags_field & (uint64_t)(int64_t)0x2000000000000000)) != 0) {
		$var($List, fields, $TreeInfo::recordFields(tree));
		$nc(this->this$0->memberEnter)->memberEnter(fields, env);
		{
			$var($Iterator, i$, $nc(fields)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCVariableDecl, field, $cast($JCTree$JCVariableDecl, i$->next()));
				{
					sym->getRecordComponent(field, true, $nc($nc($nc(field)->mods)->annotations)->isEmpty() ? $($List::nil()) : $($$new($TreeCopier, $($nc(this->this$0->make)->at($nc(field)->pos$)))->copy($nc($nc(field)->mods)->annotations)));
				}
			}
		}
		enterThisAndSuper(sym, env);
		{
			$var($Iterator, i$, $nc(tree->defs)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree, def, $cast($JCTree, i$->next()));
				{
					if ($TreeInfo::isConstructor(def)) {
						$nc(this->this$0->memberEnter)->memberEnter(def, env);
					}
				}
			}
		}
	}
}

TypeEnter$RecordPhase::TypeEnter$RecordPhase() {
}

$Class* TypeEnter$RecordPhase::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$RecordPhase, name, initialize, &_TypeEnter$RecordPhase_ClassInfo_, allocate$TypeEnter$RecordPhase);
	return class$;
}

$Class* TypeEnter$RecordPhase::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com