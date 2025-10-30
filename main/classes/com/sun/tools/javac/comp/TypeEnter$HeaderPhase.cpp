#include <com/sun/tools/javac/comp/TypeEnter$HeaderPhase.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase.h>
#include <com/sun/tools/javac/comp/TypeEnter$AbstractMembersPhase.h>
#include <com/sun/tools/javac/comp/TypeEnter$Phase.h>
#include <com/sun/tools/javac/comp/TypeEnter$RecordPhase.h>
#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeParameter.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Dependencies$CompletionCause.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef CLASS
#undef HEADER_PHASE
#undef PCK
#undef SOURCE

using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Env = ::com::sun::tools::javac::comp::Env;
using $TypeEnter = ::com::sun::tools::javac::comp::TypeEnter;
using $TypeEnter$AbstractHeaderPhase = ::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase;
using $TypeEnter$AbstractMembersPhase = ::com::sun::tools::javac::comp::TypeEnter$AbstractMembersPhase;
using $TypeEnter$Phase = ::com::sun::tools::javac::comp::TypeEnter$Phase;
using $TypeEnter$RecordPhase = ::com::sun::tools::javac::comp::TypeEnter$RecordPhase;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCTypeParameter = ::com::sun::tools::javac::tree::JCTree$JCTypeParameter;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Dependencies$CompletionCause = ::com::sun::tools::javac::util::Dependencies$CompletionCause;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _TypeEnter$HeaderPhase_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/TypeEnter;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$HeaderPhase, this$0)},
	{}
};

$MethodInfo _TypeEnter$HeaderPhase_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$HeaderPhase::*)($TypeEnter*)>(&TypeEnter$HeaderPhase::init$))},
	{"runPhase", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PROTECTED},
	{}
};

$InnerClassInfo _TypeEnter$HeaderPhase_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TypeEnter$HeaderPhase", "com.sun.tools.javac.comp.TypeEnter", "HeaderPhase", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase", "com.sun.tools.javac.comp.TypeEnter", "AbstractHeaderPhase", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _TypeEnter$HeaderPhase_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.comp.TypeEnter$HeaderPhase",
	"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase",
	nullptr,
	_TypeEnter$HeaderPhase_FieldInfo_,
	_TypeEnter$HeaderPhase_MethodInfo_,
	nullptr,
	nullptr,
	_TypeEnter$HeaderPhase_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TypeEnter"
};

$Object* allocate$TypeEnter$HeaderPhase($Class* clazz) {
	return $of($alloc(TypeEnter$HeaderPhase));
}

void TypeEnter$HeaderPhase::init$($TypeEnter* this$0) {
	$set(this, this$0, this$0);
	$init($Dependencies$CompletionCause);
	$TypeEnter$AbstractHeaderPhase::init$(this$0, $Dependencies$CompletionCause::HEADER_PHASE, $$new($TypeEnter$RecordPhase, this$0));
}

void TypeEnter$HeaderPhase::runPhase($Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCClassDecl, tree, $nc(env)->enclClass);
	$var($Symbol$ClassSymbol, sym, $nc(tree)->sym);
	$var($Type$ClassType, ct, $cast($Type$ClassType, $nc(sym)->type));
	$var($Env, baseEnv, this->baseEnv(tree, env));
	if (tree->extending != nullptr) {
		$nc(this->this$0->annotate)->queueScanTreeAndTypeAnnotate(tree->extending, baseEnv, sym, $(tree->pos()));
	}
	{
		$var($Iterator, i$, $nc(tree->implementing)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCExpression, impl, $cast($JCTree$JCExpression, i$->next()));
			$nc(this->this$0->annotate)->queueScanTreeAndTypeAnnotate(impl, baseEnv, sym, $(tree->pos()));
		}
	}
	$nc(this->this$0->annotate)->flush();
	attribSuperTypes(env, baseEnv);
	$var($Set, interfaceSet, $new($HashSet));
	{
		$var($Iterator, i$, $nc(tree->implementing)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCExpression, iface, $cast($JCTree$JCExpression, i$->next()));
			{
				$var($Type, it, $nc(iface)->type);
				$init($TypeTag);
				if ($nc(it)->hasTag($TypeTag::CLASS)) {
					$var($JCDiagnostic$DiagnosticPosition, var$0, iface->pos());
					$nc(this->this$0->chk)->checkNotRepeated(var$0, $($nc(this->this$0->types)->erasure(it)), interfaceSet);
				}
			}
		}
	}
	$nc(this->this$0->annotate)->annotateLater($nc(tree->mods)->annotations, baseEnv, sym, $(tree->pos()));
	$nc(this->this$0->attr)->attribTypeVariables(tree->typarams, baseEnv, false);
	{
		$var($Iterator, i$, $nc(tree->typarams)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCTypeParameter, tp, $cast($JCTree$JCTypeParameter, i$->next()));
			$nc(this->this$0->annotate)->queueScanTreeAndTypeAnnotate(tp, baseEnv, sym, $(tree->pos()));
		}
	}
	$init($Kinds$Kind);
	if ($nc(sym->owner)->kind == $Kinds$Kind::PCK && !$equals(sym->owner, $nc($nc(env->toplevel)->modle)->unnamedPackage) && $nc(this->this$0->syms)->packageExists($nc(env->toplevel)->modle, sym->fullname)) {
		$nc(this->this$0->log)->error(tree->pos$, $($CompilerProperties$Errors::ClashWithPkgOfSameName($($Kinds::kindName(static_cast<$Symbol*>(sym))), sym)));
	}
	$init($JavaFileObject$Kind);
	if ($nc(sym->owner)->kind == $Kinds$Kind::PCK && ((int64_t)(sym->flags_field & (uint64_t)(int64_t)1)) == 0 && !$nc($nc(env->toplevel)->sourcefile)->isNameCompatible($($nc(sym->name)->toString()), $JavaFileObject$Kind::SOURCE)) {
		sym->flags_field |= 0x0000100000000000;
	}
}

TypeEnter$HeaderPhase::TypeEnter$HeaderPhase() {
}

$Class* TypeEnter$HeaderPhase::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$HeaderPhase, name, initialize, &_TypeEnter$HeaderPhase_ClassInfo_, allocate$TypeEnter$HeaderPhase);
	return class$;
}

$Class* TypeEnter$HeaderPhase::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com