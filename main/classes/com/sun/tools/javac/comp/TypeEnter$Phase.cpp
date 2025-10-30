#include <com/sun/tools/javac/comp/TypeEnter$Phase.h>

#include <com/sun/tools/javac/code/DeferredLintHandler.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Dependencies$CompletionCause.h>
#include <com/sun/tools/javac/util/Dependencies.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/util/Iterator.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $DeferredLintHandler = ::com::sun::tools::javac::code::DeferredLintHandler;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Type = ::com::sun::tools::javac::code::Type;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Env = ::com::sun::tools::javac::comp::Env;
using $TypeEnter = ::com::sun::tools::javac::comp::TypeEnter;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Dependencies = ::com::sun::tools::javac::util::Dependencies;
using $Dependencies$CompletionCause = ::com::sun::tools::javac::util::Dependencies$CompletionCause;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _TypeEnter$Phase_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/TypeEnter;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$Phase, this$0)},
	{"queue", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", $PRIVATE | $FINAL, $field(TypeEnter$Phase, queue)},
	{"next", "Lcom/sun/tools/javac/comp/TypeEnter$Phase;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter$Phase, next)},
	{"phaseName", "Lcom/sun/tools/javac/util/Dependencies$CompletionCause;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter$Phase, phaseName)},
	{}
};

$MethodInfo _TypeEnter$Phase_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter;Lcom/sun/tools/javac/util/Dependencies$CompletionCause;Lcom/sun/tools/javac/comp/TypeEnter$Phase;)V", nullptr, 0, $method(static_cast<void(TypeEnter$Phase::*)($TypeEnter*,$Dependencies$CompletionCause*,TypeEnter$Phase*)>(&TypeEnter$Phase::init$))},
	{"completeEnvs", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", $PUBLIC | $FINAL, $method(static_cast<$List*(TypeEnter$Phase::*)($List*)>(&TypeEnter$Phase::completeEnvs))},
	{"doCompleteEnvs", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;)V", $PROTECTED},
	{"runPhase", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PROTECTED | $ABSTRACT},
	{}
};

$InnerClassInfo _TypeEnter$Phase_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TypeEnter$Phase", "com.sun.tools.javac.comp.TypeEnter", "Phase", $ABSTRACT},
	{}
};

$ClassInfo _TypeEnter$Phase_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.TypeEnter$Phase",
	"java.lang.Object",
	nullptr,
	_TypeEnter$Phase_FieldInfo_,
	_TypeEnter$Phase_MethodInfo_,
	nullptr,
	nullptr,
	_TypeEnter$Phase_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TypeEnter"
};

$Object* allocate$TypeEnter$Phase($Class* clazz) {
	return $of($alloc(TypeEnter$Phase));
}

void TypeEnter$Phase::init$($TypeEnter* this$0, $Dependencies$CompletionCause* phaseName, TypeEnter$Phase* next) {
	$set(this, this$0, this$0);
	$set(this, queue, $new($ListBuffer));
	$set(this, phaseName, phaseName);
	$set(this, next, next);
}

$List* TypeEnter$Phase::completeEnvs($List* envs) {
	$useLocalCurrentObjectStackCache();
	bool firstToComplete = $nc(this->queue)->isEmpty();
	$var(TypeEnter$Phase, prevTopLevelPhase, this->this$0->topLevelPhase);
	bool success = false;
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this->this$0, topLevelPhase, this);
			doCompleteEnvs(envs);
			success = true;
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this->this$0, topLevelPhase, prevTopLevelPhase);
			if (!success && firstToComplete) {
				$nc(this->queue)->clear();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (firstToComplete) {
		$var($List, out, $nc(this->queue)->toList());
		$nc(this->queue)->clear();
		return this->next != nullptr ? $nc(this->next)->completeEnvs(out) : out;
	} else {
		return $List::nil();
	}
}

void TypeEnter$Phase::doCompleteEnvs($List* envs) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(envs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Env, env, $cast($Env, i$->next()));
			{
				$var($JCTree$JCClassDecl, tree, $cast($JCTree$JCClassDecl, $nc(env)->tree));
				$nc(this->queue)->add(env);
				$var($JavaFileObject, prev, $nc(this->this$0->log)->useSource($nc(env->toplevel)->sourcefile));
				$var($JCDiagnostic$DiagnosticPosition, prevLintPos, $nc(this->this$0->deferredLintHandler)->setPos($($nc(tree)->pos())));
				{
					$var($Throwable, var$0, nullptr);
					try {
						try {
							$nc(this->this$0->dependencies)->push($nc(env->enclClass)->sym, this->phaseName);
							runPhase(env);
						} catch ($Symbol$CompletionFailure& ex) {
							$nc(this->this$0->chk)->completionError($($nc(tree)->pos()), ex);
						}
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						$nc(this->this$0->dependencies)->pop();
						$nc(this->this$0->deferredLintHandler)->setPos(prevLintPos);
						$nc(this->this$0->log)->useSource(prev);
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
		}
	}
}

TypeEnter$Phase::TypeEnter$Phase() {
}

$Class* TypeEnter$Phase::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$Phase, name, initialize, &_TypeEnter$Phase_ClassInfo_, allocate$TypeEnter$Phase);
	return class$;
}

$Class* TypeEnter$Phase::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com