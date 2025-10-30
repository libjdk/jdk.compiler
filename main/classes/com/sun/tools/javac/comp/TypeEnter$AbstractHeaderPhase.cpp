#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase.h>

#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase$1.h>
#include <com/sun/tools/javac/comp/TypeEnter$Phase.h>
#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeApply.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeParameter.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Dependencies$CompletionCause.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef CLASS
#undef ENUM
#undef ERROR
#undef NON_RECURSIVE

using $Flags = ::com::sun::tools::javac::code::Flags;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $TypeEnter = ::com::sun::tools::javac::comp::TypeEnter;
using $TypeEnter$AbstractHeaderPhase$1 = ::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase$1;
using $TypeEnter$Phase = ::com::sun::tools::javac::comp::TypeEnter$Phase;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCTypeApply = ::com::sun::tools::javac::tree::JCTree$JCTypeApply;
using $JCTree$JCTypeParameter = ::com::sun::tools::javac::tree::JCTree$JCTypeParameter;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Dependencies$CompletionCause = ::com::sun::tools::javac::util::Dependencies$CompletionCause;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _TypeEnter$AbstractHeaderPhase_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/TypeEnter;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$AbstractHeaderPhase, this$0)},
	{}
};

$MethodInfo _TypeEnter$AbstractHeaderPhase_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter;Lcom/sun/tools/javac/util/Dependencies$CompletionCause;Lcom/sun/tools/javac/comp/TypeEnter$Phase;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$AbstractHeaderPhase::*)($TypeEnter*,$Dependencies$CompletionCause*,$TypeEnter$Phase*)>(&TypeEnter$AbstractHeaderPhase::init$))},
	{"attribSuperTypes", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PROTECTED},
	{"baseEnv", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PROTECTED},
	{"clearTypeParams", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PROTECTED},
	{"enumBase", "(ILcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PROTECTED},
	{"modelMissingTypes", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Z)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Z)Lcom/sun/tools/javac/code/Type;", $PROTECTED},
	{}
};

$InnerClassInfo _TypeEnter$AbstractHeaderPhase_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase", "com.sun.tools.javac.comp.TypeEnter", "AbstractHeaderPhase", $PRIVATE | $ABSTRACT},
	{"com.sun.tools.javac.comp.TypeEnter$Phase", "com.sun.tools.javac.comp.TypeEnter", "Phase", $ABSTRACT},
	{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer", "com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase", "Synthesizer", $PRIVATE},
	{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TypeEnter$AbstractHeaderPhase_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase",
	"com.sun.tools.javac.comp.TypeEnter$Phase",
	nullptr,
	_TypeEnter$AbstractHeaderPhase_FieldInfo_,
	_TypeEnter$AbstractHeaderPhase_MethodInfo_,
	nullptr,
	nullptr,
	_TypeEnter$AbstractHeaderPhase_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TypeEnter"
};

$Object* allocate$TypeEnter$AbstractHeaderPhase($Class* clazz) {
	return $of($alloc(TypeEnter$AbstractHeaderPhase));
}

void TypeEnter$AbstractHeaderPhase::init$($TypeEnter* this$0, $Dependencies$CompletionCause* phaseName, $TypeEnter$Phase* next) {
	$set(this, this$0, this$0);
	$TypeEnter$Phase::init$(this$0, phaseName, next);
}

$Env* TypeEnter$AbstractHeaderPhase::baseEnv($JCTree$JCClassDecl* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Scope$WriteableScope, baseScope, $Scope$WriteableScope::create($nc(tree)->sym));
	{
		$init($Scope$LookupKind);
		$var($Iterator, i$, $nc($($nc($nc(($cast($AttrContext, $nc($nc(env)->outer)->info)))->scope)->getSymbols($Scope$LookupKind::NON_RECURSIVE)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				if ($nc(sym)->isDirectlyOrIndirectlyLocal()) {
					$nc(baseScope)->enter(sym);
				}
			}
		}
	}
	if ($nc(tree)->typarams != nullptr) {
		{
			$var($List, typarams, tree->typarams);
			for (; $nc(typarams)->nonEmpty(); $assign(typarams, $nc(typarams)->tail)) {
				$nc(baseScope)->enter($nc($nc(($cast($JCTree$JCTypeParameter, typarams->head)))->type)->tsym);
			}
		}
	}
	$var($Env, outer, env->outer);
	$var($Env, localEnv, $nc(outer)->dup(tree, $($nc(($cast($AttrContext, outer->info)))->dup(baseScope))));
	$nc(localEnv)->baseClause = true;
	$set(localEnv, outer, outer);
	$nc(($cast($AttrContext, localEnv->info)))->isSelfCall = false;
	return localEnv;
}

$JCTree$JCExpression* TypeEnter$AbstractHeaderPhase::enumBase(int32_t pos, $Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, var$0, $nc(this->this$0->make)->QualIdent($nc(this->this$0->syms)->enumSym));
	$var($JCTree$JCExpression, result, $nc($($nc(this->this$0->make)->at(pos)))->TypeApply(var$0, $($List::of($($nc(this->this$0->make)->Type($nc(c)->type))))));
	return result;
}

$Type* TypeEnter$AbstractHeaderPhase::modelMissingTypes($Env* env, $Type* t, $JCTree$JCExpression* tree, bool interfaceExpected) {
	$init($TypeTag);
	if (!$nc(t)->hasTag($TypeTag::ERROR)) {
		return t;
	}
	return $new($TypeEnter$AbstractHeaderPhase$1, this, $($nc(t)->getOriginalType()), t->tsym, env, interfaceExpected, tree);
}

void TypeEnter$AbstractHeaderPhase::attribSuperTypes($Env* env, $Env* baseEnv) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCClassDecl, tree, $nc(env)->enclClass);
	$var($Symbol$ClassSymbol, sym, $nc(tree)->sym);
	$var($Type$ClassType, ct, $cast($Type$ClassType, $nc(sym)->type));
	$var($Type, supertype, nullptr);
	$var($JCTree$JCExpression, extending, nullptr);
	if (tree->extending != nullptr) {
		$assign(extending, clearTypeParams(tree->extending));
		$assign(supertype, $nc(this->this$0->attr)->attribBase(extending, baseEnv, true, false, true));
		if (supertype == $nc(this->this$0->syms)->recordType) {
			$nc(this->this$0->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($CompilerProperties$Errors::InvalidSupertypeRecord($nc(supertype)->tsym)));
		}
	} else {
		$assign(extending, nullptr);
		$init($Type);
		$assign(supertype, (((int64_t)($nc(tree->mods)->flags & (uint64_t)(int64_t)$Flags::ENUM)) != 0) ? $nc(this->this$0->attr)->attribBase($(enumBase(tree->pos$, sym)), baseEnv, true, false, false) : (sym->fullname == $nc(this->this$0->names)->java_lang_Object) ? static_cast<$Type*>($Type::noType) : sym->isRecord() ? $nc(this->this$0->syms)->recordType : $nc(this->this$0->syms)->objectType);
	}
	$set($nc(ct), supertype_field, modelMissingTypes(baseEnv, supertype, extending, false));
	$var($ListBuffer, interfaces, $new($ListBuffer));
	$var($ListBuffer, all_interfaces, nullptr);
	$var($List, interfaceTrees, tree->implementing);
	{
		$var($Iterator, i$, $nc(interfaceTrees)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCExpression, iface, $cast($JCTree$JCExpression, i$->next()));
			{
				$assign(iface, clearTypeParams(iface));
				$var($Type, it, $nc(this->this$0->attr)->attribBase(iface, baseEnv, false, true, true));
				$init($TypeTag);
				if ($nc(it)->hasTag($TypeTag::CLASS)) {
					interfaces->append(it);
					if (all_interfaces != nullptr) {
						all_interfaces->append(it);
					}
				} else {
					if (all_interfaces == nullptr) {
						$assign(all_interfaces, $$new($ListBuffer)->appendList(interfaces));
					}
					$nc(all_interfaces)->append($(modelMissingTypes(baseEnv, it, iface, true)));
				}
			}
		}
	}
	$var($ListBuffer, permittedSubtypeSymbols, $new($ListBuffer));
	$var($List, permittedTrees, tree->permitting);
	{
		$var($Iterator, i$, $nc(permittedTrees)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCExpression, permitted, $cast($JCTree$JCExpression, i$->next()));
			{
				$var($Type, pt, $nc(this->this$0->attr)->attribBase(permitted, baseEnv, false, false, false));
				permittedSubtypeSymbols->append($nc(pt)->tsym);
			}
		}
	}
	if (((int64_t)(sym->flags_field & (uint64_t)(int64_t)8192)) != 0) {
		$set(ct, interfaces_field, $List::of($nc(this->this$0->syms)->annotationType));
		$set(ct, all_interfaces_field, ct->interfaces_field);
	} else {
		$set(ct, interfaces_field, interfaces->toList());
		$set(ct, all_interfaces_field, (all_interfaces == nullptr) ? ct->interfaces_field : $nc(all_interfaces)->toList());
	}
	if (!permittedSubtypeSymbols->isEmpty()) {
		$set(sym, permitted, permittedSubtypeSymbols->toList());
	}
	sym->isPermittedExplicit = !permittedSubtypeSymbols->isEmpty();
}

$JCTree$JCExpression* TypeEnter$AbstractHeaderPhase::clearTypeParams($JCTree$JCExpression* superType) {
	return superType;
}

TypeEnter$AbstractHeaderPhase::TypeEnter$AbstractHeaderPhase() {
}

$Class* TypeEnter$AbstractHeaderPhase::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$AbstractHeaderPhase, name, initialize, &_TypeEnter$AbstractHeaderPhase_ClassInfo_, allocate$TypeEnter$AbstractHeaderPhase);
	return class$;
}

$Class* TypeEnter$AbstractHeaderPhase::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com