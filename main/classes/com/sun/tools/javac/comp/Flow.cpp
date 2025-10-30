#include <com/sun/tools/javac/comp/Flow.h>

#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Flow$AliveAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$AssignAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$CaptureAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$FlowAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$LambdaAliveAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$LambdaAssignAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$LambdaFlowAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$SnippetAliveAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$SnippetBreakAnalyzer.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log$DiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log$DiscardDiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Names.h>
#include <jcpp.h>

#undef EFFECTIVELY_FINAL_IN_INNER_CLASSES

using $Lint = ::com::sun::tools::javac::code::Lint;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Types = ::com::sun::tools::javac::code::Types;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Flow$AliveAnalyzer = ::com::sun::tools::javac::comp::Flow$AliveAnalyzer;
using $Flow$AssignAnalyzer = ::com::sun::tools::javac::comp::Flow$AssignAnalyzer;
using $Flow$CaptureAnalyzer = ::com::sun::tools::javac::comp::Flow$CaptureAnalyzer;
using $Flow$FlowAnalyzer = ::com::sun::tools::javac::comp::Flow$FlowAnalyzer;
using $Flow$LambdaAliveAnalyzer = ::com::sun::tools::javac::comp::Flow$LambdaAliveAnalyzer;
using $Flow$LambdaAssignAnalyzer = ::com::sun::tools::javac::comp::Flow$LambdaAssignAnalyzer;
using $Flow$LambdaFlowAnalyzer = ::com::sun::tools::javac::comp::Flow$LambdaFlowAnalyzer;
using $Flow$SnippetAliveAnalyzer = ::com::sun::tools::javac::comp::Flow$SnippetAliveAnalyzer;
using $Flow$SnippetBreakAnalyzer = ::com::sun::tools::javac::comp::Flow$SnippetBreakAnalyzer;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$DiagnosticHandler = ::com::sun::tools::javac::util::Log$DiagnosticHandler;
using $Log$DiscardDiagnosticHandler = ::com::sun::tools::javac::util::Log$DiscardDiagnosticHandler;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Flow_FieldInfo_[] = {
	{"flowKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/Flow;>;", $PROTECTED | $STATIC | $FINAL, $staticField(Flow, flowKey)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(Flow, names)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(Flow, log)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE | $FINAL, $field(Flow, syms)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE | $FINAL, $field(Flow, types)},
	{"chk", "Lcom/sun/tools/javac/comp/Check;", nullptr, $PRIVATE | $FINAL, $field(Flow, chk)},
	{"make", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $PRIVATE, $field(Flow, make)},
	{"rs", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $PRIVATE | $FINAL, $field(Flow, rs)},
	{"diags", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, $PRIVATE | $FINAL, $field(Flow, diags)},
	{"attrEnv", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PRIVATE, $field(Flow, attrEnv)},
	{"lint", "Lcom/sun/tools/javac/code/Lint;", nullptr, $PRIVATE, $field(Flow, lint)},
	{"allowEffectivelyFinalInInnerClasses", "Z", nullptr, $PRIVATE | $FINAL, $field(Flow, allowEffectivelyFinalInInnerClasses)},
	{}
};

$MethodInfo _Flow_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(Flow::*)($Context*)>(&Flow::init$))},
	{"aliveAfter", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)Z", $PUBLIC},
	{"analyzeLambda", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/tree/TreeMaker;Z)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/tree/TreeMaker;Z)V", $PUBLIC},
	{"analyzeLambdaThrownTypes", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/tree/TreeMaker;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/tree/TreeMaker;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"analyzeTree", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/TreeMaker;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/TreeMaker;)V", $PUBLIC},
	{"breaksOutOf", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)Z", $PUBLIC},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/Flow;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Flow*(*)($Context*)>(&Flow::instance))},
	{}
};

$InnerClassInfo _Flow_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Flow$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.comp.Flow$Liveness", "com.sun.tools.javac.comp.Flow", "Liveness", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.comp.Flow$CaptureAnalyzer", "com.sun.tools.javac.comp.Flow", "CaptureAnalyzer", 0},
	{"com.sun.tools.javac.comp.Flow$AssignAnalyzer", "com.sun.tools.javac.comp.Flow", "AssignAnalyzer", $PUBLIC},
	{"com.sun.tools.javac.comp.Flow$LambdaFlowAnalyzer", "com.sun.tools.javac.comp.Flow", "LambdaFlowAnalyzer", 0},
	{"com.sun.tools.javac.comp.Flow$LambdaAssignAnalyzer", "com.sun.tools.javac.comp.Flow", "LambdaAssignAnalyzer", 0},
	{"com.sun.tools.javac.comp.Flow$SnippetBreakAnalyzer", "com.sun.tools.javac.comp.Flow", "SnippetBreakAnalyzer", 0},
	{"com.sun.tools.javac.comp.Flow$SnippetAliveAnalyzer", "com.sun.tools.javac.comp.Flow", "SnippetAliveAnalyzer", 0},
	{"com.sun.tools.javac.comp.Flow$LambdaAliveAnalyzer", "com.sun.tools.javac.comp.Flow", "LambdaAliveAnalyzer", 0},
	{"com.sun.tools.javac.comp.Flow$FlowAnalyzer", "com.sun.tools.javac.comp.Flow", "FlowAnalyzer", 0},
	{"com.sun.tools.javac.comp.Flow$AliveAnalyzer", "com.sun.tools.javac.comp.Flow", "AliveAnalyzer", 0},
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer", "com.sun.tools.javac.comp.Flow", "BaseAnalyzer", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.comp.Flow$FlowKind", "com.sun.tools.javac.comp.Flow", "FlowKind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Flow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Flow",
	"java.lang.Object",
	nullptr,
	_Flow_FieldInfo_,
	_Flow_MethodInfo_,
	nullptr,
	nullptr,
	_Flow_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Flow$1,com.sun.tools.javac.comp.Flow$Liveness,com.sun.tools.javac.comp.Flow$Liveness$3,com.sun.tools.javac.comp.Flow$Liveness$2,com.sun.tools.javac.comp.Flow$Liveness$1,com.sun.tools.javac.comp.Flow$CaptureAnalyzer,com.sun.tools.javac.comp.Flow$AssignAnalyzer,com.sun.tools.javac.comp.Flow$AssignAnalyzer$AssignPendingExit,com.sun.tools.javac.comp.Flow$AssignAnalyzer$1,com.sun.tools.javac.comp.Flow$LambdaFlowAnalyzer,com.sun.tools.javac.comp.Flow$LambdaAssignAnalyzer,com.sun.tools.javac.comp.Flow$SnippetBreakAnalyzer,com.sun.tools.javac.comp.Flow$SnippetAliveAnalyzer,com.sun.tools.javac.comp.Flow$LambdaAliveAnalyzer,com.sun.tools.javac.comp.Flow$FlowAnalyzer,com.sun.tools.javac.comp.Flow$FlowAnalyzer$ThrownPendingExit,com.sun.tools.javac.comp.Flow$AliveAnalyzer,com.sun.tools.javac.comp.Flow$BaseAnalyzer,com.sun.tools.javac.comp.Flow$BaseAnalyzer$PendingExit,com.sun.tools.javac.comp.Flow$BaseAnalyzer$JumpKind,com.sun.tools.javac.comp.Flow$BaseAnalyzer$JumpKind$3,com.sun.tools.javac.comp.Flow$BaseAnalyzer$JumpKind$2,com.sun.tools.javac.comp.Flow$BaseAnalyzer$JumpKind$1,com.sun.tools.javac.comp.Flow$FlowKind"
};

$Object* allocate$Flow($Class* clazz) {
	return $of($alloc(Flow));
}

$Context$Key* Flow::flowKey = nullptr;

Flow* Flow::instance($Context* context) {
	$init(Flow);
	$var(Flow, instance, $cast(Flow, $nc(context)->get(Flow::flowKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Flow, context));
	}
	return instance;
}

void Flow::analyzeTree($Env* env, $TreeMaker* make) {
	$useLocalCurrentObjectStackCache();
	$$new($Flow$AliveAnalyzer, this)->analyzeTree(env, make);
	$$new($Flow$AssignAnalyzer, this)->analyzeTree(env, make);
	$$new($Flow$FlowAnalyzer, this)->analyzeTree(env, make);
	$$new($Flow$CaptureAnalyzer, this)->analyzeTree(env, make);
}

void Flow::analyzeLambda($Env* env, $JCTree$JCLambda* that, $TreeMaker* make, bool speculative) {
	$useLocalCurrentObjectStackCache();
	$var($Log$DiagnosticHandler, diagHandler, nullptr);
	if (!speculative) {
		$assign(diagHandler, $new($Log$DiscardDiagnosticHandler, this->log));
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$$new($Flow$LambdaAliveAnalyzer, this)->analyzeTree(env, that, make);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (!speculative) {
				$nc(this->log)->popDiagnosticHandler(diagHandler);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$List* Flow::analyzeLambdaThrownTypes($Env* env, $JCTree$JCLambda* that, $TreeMaker* make) {
	$useLocalCurrentObjectStackCache();
	$var($Log$DiagnosticHandler, diagHandler, $new($Log$DiscardDiagnosticHandler, this->log));
	{
		$var($Throwable, var$0, nullptr);
		$var($List, var$2, nullptr);
		bool return$1 = false;
		try {
			$$new($Flow$LambdaAssignAnalyzer, this, env)->analyzeTree(env, that, make);
			$var($Flow$LambdaFlowAnalyzer, flowAnalyzer, $new($Flow$LambdaFlowAnalyzer, this));
			flowAnalyzer->analyzeTree(env, that, make);
			$assign(var$2, flowAnalyzer->inferredThrownTypes);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->log)->popDiagnosticHandler(diagHandler);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool Flow::aliveAfter($Env* env, $JCTree* that, $TreeMaker* make) {
	$useLocalCurrentObjectStackCache();
	$var($Log$DiagnosticHandler, diagHandler, $new($Log$DiscardDiagnosticHandler, this->log));
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$var($Flow$SnippetAliveAnalyzer, analyzer, $new($Flow$SnippetAliveAnalyzer, this));
			analyzer->analyzeTree(env, that, make);
			var$2 = analyzer->isAlive();
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->log)->popDiagnosticHandler(diagHandler);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool Flow::breaksOutOf($Env* env, $JCTree* loop, $JCTree* body, $TreeMaker* make) {
	$useLocalCurrentObjectStackCache();
	$var($Log$DiagnosticHandler, diagHandler, $new($Log$DiscardDiagnosticHandler, this->log));
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$var($Flow$SnippetBreakAnalyzer, analyzer, $new($Flow$SnippetBreakAnalyzer, this));
			analyzer->analyzeTree(env, body, make);
			var$2 = analyzer->breaksOut();
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->log)->popDiagnosticHandler(diagHandler);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void Flow::init$($Context* context) {
	$nc(context)->put(Flow::flowKey, $of(this));
	$set(this, names, $Names::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, chk, $Check::instance(context));
	$set(this, lint, $Lint::instance(context));
	$set(this, rs, $Resolve::instance(context));
	$set(this, diags, $JCDiagnostic$Factory::instance(context));
	$Source* source = $Source::instance(context);
	$init($Source$Feature);
	this->allowEffectivelyFinalInInnerClasses = $Source$Feature::EFFECTIVELY_FINAL_IN_INNER_CLASSES->allowedInSource(source);
}

void clinit$Flow($Class* class$) {
	$assignStatic(Flow::flowKey, $new($Context$Key));
}

Flow::Flow() {
}

$Class* Flow::load$($String* name, bool initialize) {
	$loadClass(Flow, name, initialize, &_Flow_ClassInfo_, clinit$Flow, allocate$Flow);
	return class$;
}

$Class* Flow::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com