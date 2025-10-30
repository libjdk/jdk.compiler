#include <com/sun/tools/javac/comp/MemberEnter.h>

#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/DeferredLintHandler.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$DelegatedType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$JCVoidType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/AttrContextEnv.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/MemberEnter$InitTreeVisitor.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCErroneous.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeParameter.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

#undef CLASS
#undef FINAL
#undef GENERATED_MEMBER
#undef METHOD
#undef MTH
#undef PRIVATE
#undef RECORD
#undef TYP
#undef TYPEVAR
#undef VAL
#undef VARARGS

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $DeferredLintHandler = ::com::sun::tools::javac::code::DeferredLintHandler;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $Lint = ::com::sun::tools::javac::code::Lint;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Type$JCVoidType = ::com::sun::tools::javac::code::Type$JCVoidType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $AttrContextEnv = ::com::sun::tools::javac::comp::AttrContextEnv;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $MemberEnter$InitTreeVisitor = ::com::sun::tools::javac::comp::MemberEnter$InitTreeVisitor;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCErroneous = ::com::sun::tools::javac::tree::JCTree$JCErroneous;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCTypeParameter = ::com::sun::tools::javac::tree::JCTree$JCTypeParameter;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _MemberEnter_FieldInfo_[] = {
	{"memberEnterKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/MemberEnter;>;", $PROTECTED | $STATIC | $FINAL, $staticField(MemberEnter, memberEnterKey)},
	{"enter", "Lcom/sun/tools/javac/comp/Enter;", nullptr, $PRIVATE | $FINAL, $field(MemberEnter, enter)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(MemberEnter, log)},
	{"chk", "Lcom/sun/tools/javac/comp/Check;", nullptr, $PRIVATE | $FINAL, $field(MemberEnter, chk)},
	{"attr", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $PRIVATE | $FINAL, $field(MemberEnter, attr)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE | $FINAL, $field(MemberEnter, syms)},
	{"annotate", "Lcom/sun/tools/javac/comp/Annotate;", nullptr, $PRIVATE | $FINAL, $field(MemberEnter, annotate)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE | $FINAL, $field(MemberEnter, types)},
	{"deferredLintHandler", "Lcom/sun/tools/javac/code/DeferredLintHandler;", nullptr, $PRIVATE | $FINAL, $field(MemberEnter, deferredLintHandler)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PROTECTED, $field(MemberEnter, env)},
	{}
};

$MethodInfo _MemberEnter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(MemberEnter::*)($Context*)>(&MemberEnter::init$))},
	{"checkReceiver", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0},
	{"checkType", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Error;)V", nullptr, 0},
	{"getInitEnv", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC},
	{"getMethodEnv", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC},
	{"initEnv", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/MemberEnter;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MemberEnter*(*)($Context*)>(&MemberEnter::instance))},
	{"memberEnter", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PROTECTED},
	{"memberEnter", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0},
	{"methodEnv", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0},
	{"needsLazyConstValue", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC},
	{"signature", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/code/Type;", 0},
	{"visitErroneous", "(Lcom/sun/tools/javac/tree/JCTree$JCErroneous;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitTree", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MemberEnter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.comp.MemberEnter$InitTreeVisitor", "com.sun.tools.javac.comp.MemberEnter", "InitTreeVisitor", $STATIC},
	{}
};

$ClassInfo _MemberEnter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.MemberEnter",
	"com.sun.tools.javac.tree.JCTree$Visitor",
	nullptr,
	_MemberEnter_FieldInfo_,
	_MemberEnter_MethodInfo_,
	nullptr,
	nullptr,
	_MemberEnter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.MemberEnter$InitTreeVisitor"
};

$Object* allocate$MemberEnter($Class* clazz) {
	return $of($alloc(MemberEnter));
}

$Context$Key* MemberEnter::memberEnterKey = nullptr;

MemberEnter* MemberEnter::instance($Context* context) {
	$init(MemberEnter);
	$var(MemberEnter, instance, $cast(MemberEnter, $nc(context)->get(MemberEnter::memberEnterKey)));
	if (instance == nullptr) {
		$assign(instance, $new(MemberEnter, context));
	}
	return instance;
}

void MemberEnter::init$($Context* context) {
	$JCTree$Visitor::init$();
	$nc(context)->put(MemberEnter::memberEnterKey, $of(this));
	$set(this, enter, $Enter::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, chk, $Check::instance(context));
	$set(this, attr, $Attr::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, annotate, $Annotate::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, deferredLintHandler, $DeferredLintHandler::instance(context));
}

$Type* MemberEnter::signature($Symbol$MethodSymbol* msym, $List* typarams, $List* params, $JCTree* res, $JCTree$JCVariableDecl* recvparam, $List* thrown, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($List, tvars, $nc(this->enter)->classEnter(typarams, env));
	$nc(this->attr)->attribTypeVariables(typarams, env, true);
	$var($ListBuffer, argbuf, $new($ListBuffer));
	{
		$var($List, l, params);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			memberEnter($cast($JCTree, l->head), env);
			argbuf->append($nc($nc(($cast($JCTree$JCVariableDecl, l->head)))->vartype)->type);
		}
	}
	$var($Type, restype, res == nullptr ? static_cast<$Type*>($nc(this->syms)->voidType) : $nc(this->attr)->attribType(res, env));
	$var($Type, recvtype, nullptr);
	if (recvparam != nullptr) {
		memberEnter(static_cast<$JCTree*>(recvparam), env);
		$assign(recvtype, $nc(recvparam->vartype)->type);
	} else {
		$assign(recvtype, nullptr);
	}
	$var($ListBuffer, thrownbuf, $new($ListBuffer));
	{
		$var($List, l, thrown);
		for (; l->nonEmpty(); $assign(l, l->tail)) {
			$var($Type, exc, $nc(this->attr)->attribType($cast($JCTree, $nc(l)->head), env));
			$init($TypeTag);
			if (!$nc(exc)->hasTag($TypeTag::TYPEVAR)) {
				$assign(exc, $nc(this->chk)->checkClassType($($nc(($cast($JCTree$JCExpression, $nc(l)->head)))->pos()), exc));
			} else if ($equals($nc(exc->tsym)->owner, msym)) {
				$nc(exc->tsym)->flags_field |= 0x0000800000000000;
			}
			thrownbuf->append(exc);
		}
	}
	$var($List, var$0, argbuf->toList());
	$var($Type, var$1, restype);
	$var($Type$MethodType, mtype, $new($Type$MethodType, var$0, var$1, $(thrownbuf->toList()), $nc(this->syms)->methodClass));
	$set(mtype, recvtype, recvtype);
	return $nc(tvars)->isEmpty() ? static_cast<$Type*>(mtype) : static_cast<$Type*>($new($Type$ForAll, tvars, mtype));
}

void MemberEnter::memberEnter($JCTree* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Env, prevEnv, this->env);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$set(this, env, env);
				$nc(tree)->accept(this);
			} catch ($Symbol$CompletionFailure& ex) {
				$nc(this->chk)->completionError($($nc(tree)->pos()), ex);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, env, prevEnv);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void MemberEnter::memberEnter($List* trees, $Env* env) {
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			memberEnter($cast($JCTree, l->head), env);
		}
	}
}

void MemberEnter::visitMethodDef($JCTree$JCMethodDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Scope$WriteableScope, enclScope, $nc(this->enter)->enterScope(this->env));
	$var($Symbol$MethodSymbol, m, $new($Symbol$MethodSymbol, 0, $nc(tree)->name, nullptr, $nc(enclScope)->owner));
	m->flags_field = $nc(this->chk)->checkFlags($($nc(tree)->pos()), $nc(tree->mods)->flags, m, tree);
	$set($nc(tree), sym, m);
	if (((int64_t)($nc(tree->mods)->flags & (uint64_t)(int64_t)0x0000080000000000)) != 0) {
		$nc(m->owner)->flags_field |= 0x0000080000000000;
	}
	$var($Env, localEnv, methodEnv(tree, this->env));
	$var($JCDiagnostic$DiagnosticPosition, prevLintPos, $nc(this->deferredLintHandler)->setPos($(tree->pos())));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(m, type, signature(m, tree->typarams, tree->params, tree->restype, tree->recvparam, tree->thrown, localEnv));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->deferredLintHandler)->setPos(prevLintPos);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if ($nc(this->types)->isSignaturePolymorphic(m)) {
		m->flags_field |= 0x0000400000000000;
	}
	$var($ListBuffer, params, $new($ListBuffer));
	$var($JCTree$JCVariableDecl, lastParam, nullptr);
	{
		$var($List, l, tree->params);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$var($JCTree$JCVariableDecl, param, $assign(lastParam, $cast($JCTree$JCVariableDecl, l->head)));
			params->append($cast($Symbol$VarSymbol, $($Assert::checkNonNull($nc(param)->sym))));
		}
	}
	$set(m, params$, params->toList());
	if (lastParam != nullptr && ((int64_t)($nc(lastParam->mods)->flags & (uint64_t)$Flags::VARARGS)) != 0) {
		m->flags_field |= $Flags::VARARGS;
	}
	$nc($nc(($cast($AttrContext, $nc(localEnv)->info)))->scope)->leave();
	if ($nc(this->chk)->checkUnique($(tree->pos()), m, enclScope)) {
		$nc(enclScope)->enter(m);
	}
	$nc(this->annotate)->annotateLater($nc(tree->mods)->annotations, localEnv, m, $(tree->pos()));
	$nc(this->annotate)->queueScanTreeAndTypeAnnotate(tree, localEnv, m, $(tree->pos()));
	if (tree->defaultValue != nullptr) {
		$set(m, defaultValue, $nc(this->annotate)->unfinishedDefaultValue());
		$nc(this->annotate)->annotateDefaultValueLater(tree->defaultValue, localEnv, m, $(tree->pos()));
	}
}

$Env* MemberEnter::methodEnv($JCTree$JCMethodDecl* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Env, localEnv, $nc(env)->dup(tree, $($nc(($cast($AttrContext, env->info)))->dup($($nc($nc(($cast($AttrContext, env->info)))->scope)->dupUnshared($nc(tree)->sym))))));
	$set($nc(localEnv), enclMethod, tree);
	if ($nc($nc(tree)->sym)->type != nullptr) {
		$init($Kinds$KindSelector);
		$set($nc($cast($AttrContext, localEnv->info)), returnResult, $new($Attr$ResultInfo, static_cast<$Attr*>($nc(this->attr)), $Kinds$KindSelector::VAL, $($nc($nc(tree->sym)->type)->getReturnType())));
	}
	if (((int64_t)($nc($nc(tree)->mods)->flags & (uint64_t)(int64_t)8)) != 0) {
		++$nc(($cast($AttrContext, localEnv->info)))->staticLevel;
	}
	$set($nc($cast($AttrContext, localEnv->info)), yieldResult, nullptr);
	return localEnv;
}

void MemberEnter::visitVarDef($JCTree$JCVariableDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Env, localEnv, this->env);
	if (((int64_t)($nc($nc(tree)->mods)->flags & (uint64_t)(int64_t)8)) != 0 || ((int64_t)($nc($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->owner)->flags() & (uint64_t)(int64_t)512)) != 0) {
		$assign(localEnv, $nc(this->env)->dup(tree, $($nc(($cast($AttrContext, $nc(this->env)->info)))->dup())));
		++$nc(($cast($AttrContext, $nc(localEnv)->info)))->staticLevel;
	}
	$var($JCDiagnostic$DiagnosticPosition, prevLintPos, $nc(this->deferredLintHandler)->setPos($($nc(tree)->pos())));
	{
		$var($Throwable, var$0, nullptr);
		try {
			if ($TreeInfo::isEnumInit(tree)) {
				$nc(this->attr)->attribIdentAsEnumType(localEnv, $cast($JCTree$JCIdent, $nc(tree)->vartype));
			} else if (!$nc(tree)->isImplicitlyTyped()) {
				$nc(this->attr)->attribType(static_cast<$JCTree*>(tree->vartype), localEnv);
				if ($TreeInfo::isReceiverParam(tree)) {
					checkReceiver(tree, localEnv);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->deferredLintHandler)->setPos(prevLintPos);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (((int64_t)($nc($nc(tree)->mods)->flags & (uint64_t)(int64_t)0x0000000400000000)) != 0) {
		$var($Type$ArrayType, atype, $cast($Type$ArrayType, $nc(tree->vartype)->type));
		$set($nc(tree->vartype), type, $nc(atype)->makeVarargs());
	}
	$var($Scope$WriteableScope, enclScope, $nc(this->enter)->enterScope(this->env));
	$init($Kinds$Kind);
	$init($Type);
	$var($Type, vartype, $nc(tree)->isImplicitlyTyped() ? $nc($nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->owner)->kind == $Kinds$Kind::MTH ? static_cast<$Type*>($Type::noType) : $nc(this->syms)->errType : $nc($nc(tree)->vartype)->type);
	$var($Symbol$VarSymbol, v, $new($Symbol$VarSymbol, 0, tree->name, vartype, $nc(enclScope)->owner));
	v->flags_field = $nc(this->chk)->checkFlags($(tree->pos()), $nc(tree->mods)->flags, v, tree);
	$set(tree, sym, v);
	if (tree->init != nullptr) {
		v->flags_field |= 0x00040000;
		if (((int64_t)(v->flags_field & (uint64_t)(int64_t)16)) != 0 && needsLazyConstValue(tree->init)) {
			$var($Env, initEnv, getInitEnv(tree, this->env));
			$set($nc($cast($AttrContext, $nc(initEnv)->info)), enclVar, v);
			v->setLazyConstValue($(this->initEnv(tree, initEnv)), this->attr, tree);
		}
	}
	if ($nc(this->chk)->checkUnique($(tree->pos()), v, enclScope)) {
		$nc(this->chk)->checkTransparentVar($(tree->pos()), v, enclScope);
		$nc(enclScope)->enter(v);
	} else {
		if ($nc(v->owner)->kind == $Kinds$Kind::MTH || ((int64_t)(v->flags_field & (uint64_t)((($Flags::PRIVATE | $Flags::FINAL) | $Flags::GENERATED_MEMBER) | $Flags::RECORD))) != 0) {
			$nc(enclScope)->enter(v);
		}
	}
	$nc(this->annotate)->annotateLater($nc(tree->mods)->annotations, localEnv, v, $(tree->pos()));
	if (!tree->isImplicitlyTyped()) {
		$nc(this->annotate)->queueScanTreeAndTypeAnnotate(tree->vartype, localEnv, v, $(tree->pos()));
	}
	v->pos = tree->pos$;
}

void MemberEnter::checkType($JCTree* tree, $Type* type, $JCDiagnostic$Error* errorKey) {
	bool var$0 = !$nc($nc(tree)->type)->isErroneous();
	if (var$0 && !$nc(this->types)->isSameType(tree->type, type)) {
		$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), errorKey);
	}
}

void MemberEnter::checkReceiver($JCTree$JCVariableDecl* tree, $Env* localEnv) {
	$useLocalCurrentObjectStackCache();
	$nc(this->attr)->attribExpr($nc(tree)->nameexpr, localEnv);
	$var($Symbol$MethodSymbol, m, $nc($nc(localEnv)->enclMethod)->sym);
	if ($nc(m)->isConstructor()) {
		$var($Type, outertype, $nc($nc(m->owner)->owner)->type);
		$init($TypeTag);
		if ($nc(outertype)->hasTag($TypeTag::METHOD)) {
			$assign(outertype, $nc($nc($nc(m->owner)->owner)->owner)->type);
		}
		if ($nc(outertype)->hasTag($TypeTag::CLASS)) {
			checkType($nc(tree)->vartype, outertype, $($CompilerProperties$Errors::IncorrectConstructorReceiverType(outertype, $nc(tree->vartype)->type)));
			checkType($nc(tree)->nameexpr, outertype, $($CompilerProperties$Errors::IncorrectConstructorReceiverName(outertype, $nc(tree->nameexpr)->type)));
		} else {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $CompilerProperties$Errors::ReceiverParameterNotApplicableConstructorToplevelClass);
		}
	} else {
		checkType($nc(tree)->vartype, $nc(m->owner)->type, $($CompilerProperties$Errors::IncorrectReceiverType($nc(m->owner)->type, $nc(tree->vartype)->type)));
		checkType($nc(tree)->nameexpr, $nc(m->owner)->type, $($CompilerProperties$Errors::IncorrectReceiverName($nc(m->owner)->type, $nc(tree->nameexpr)->type)));
	}
}

bool MemberEnter::needsLazyConstValue($JCTree* tree) {
	$var($MemberEnter$InitTreeVisitor, initTreeVisitor, $new($MemberEnter$InitTreeVisitor));
	$nc(tree)->accept(initTreeVisitor);
	return initTreeVisitor->result;
}

$Env* MemberEnter::initEnv($JCTree$JCVariableDecl* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Env, localEnv, $nc(env)->dupto($$new($AttrContextEnv, tree, $($nc(($cast($AttrContext, env->info)))->dup()))));
	$init($Kinds$Kind);
	if ($nc($nc($nc(tree)->sym)->owner)->kind == $Kinds$Kind::TYP) {
		$set($nc($cast($AttrContext, $nc(localEnv)->info)), scope, $nc($nc(($cast($AttrContext, env->info)))->scope)->dupUnshared(tree->sym));
	}
	if (((int64_t)($nc($nc(tree)->mods)->flags & (uint64_t)(int64_t)8)) != 0 || (((int64_t)($nc($nc(env->enclClass)->sym)->flags() & (uint64_t)(int64_t)512)) != 0 && env->enclMethod == nullptr)) {
		++$nc(($cast($AttrContext, $nc(localEnv)->info)))->staticLevel;
	}
	return localEnv;
}

void MemberEnter::visitTree($JCTree* tree) {
}

void MemberEnter::visitErroneous($JCTree$JCErroneous* tree) {
	if ($nc(tree)->errs != nullptr) {
		memberEnter(tree->errs, this->env);
	}
}

$Env* MemberEnter::getMethodEnv($JCTree$JCMethodDecl* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Env, mEnv, methodEnv(tree, env));
	$set($nc($cast($AttrContext, $nc(mEnv)->info)), lint, $nc($nc(($cast($AttrContext, mEnv->info)))->lint)->augment(static_cast<$Symbol*>($nc(tree)->sym)));
	{
		$var($List, l, $nc(tree)->typarams);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$nc($nc(($cast($AttrContext, mEnv->info)))->scope)->enterIfAbsent($nc($nc(($cast($JCTree$JCTypeParameter, l->head)))->type)->tsym);
		}
	}
	{
		$var($List, l, tree->params);
		for (; l->nonEmpty(); $assign(l, l->tail)) {
			$nc($nc(($cast($AttrContext, mEnv->info)))->scope)->enterIfAbsent($nc(($cast($JCTree$JCVariableDecl, l->head)))->sym);
		}
	}
	return mEnv;
}

$Env* MemberEnter::getInitEnv($JCTree$JCVariableDecl* tree, $Env* env) {
	$var($Env, iEnv, initEnv(tree, env));
	return iEnv;
}

void clinit$MemberEnter($Class* class$) {
	$assignStatic(MemberEnter::memberEnterKey, $new($Context$Key));
}

MemberEnter::MemberEnter() {
}

$Class* MemberEnter::load$($String* name, bool initialize) {
	$loadClass(MemberEnter, name, initialize, &_MemberEnter_ClassInfo_, clinit$MemberEnter, allocate$MemberEnter);
	return class$;
}

$Class* MemberEnter::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com