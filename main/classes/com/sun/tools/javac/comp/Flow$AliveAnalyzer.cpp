#include <com/sun/tools/javac/comp/Flow$AliveAnalyzer.h>

#include <com/sun/source/tree/CaseTree$CaseKind.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$IntersectionClassType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Flow$1.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$PendingExit.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$Liveness.h>
#include <com/sun/tools/javac/comp/Flow.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCBreak.h>
#include <com/sun/tools/javac/tree/JCTree$JCCase.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCCatch.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCContinue.h>
#include <com/sun/tools/javac/tree/JCTree$JCDoWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCLabeledStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitch.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCThrow.h>
#include <com/sun/tools/javac/tree/JCTree$JCTry.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo$PatternPrimaryType.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <jcpp.h>

#undef ALIVE
#undef BLOCK
#undef DEAD
#undef FALLTHROUGH
#undef FINALLY
#undef IDENT
#undef METHODDEF
#undef RECOVERY
#undef RETURN
#undef RULE
#undef SKIP
#undef TYP
#undef VAR
#undef VOID

using $CaseTree$CaseKind = ::com::sun::source::tree::CaseTree$CaseKind;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Lint = ::com::sun::tools::javac::code::Lint;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$IntersectionClassType = ::com::sun::tools::javac::code::Type$IntersectionClassType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Flow = ::com::sun::tools::javac::comp::Flow;
using $Flow$1 = ::com::sun::tools::javac::comp::Flow$1;
using $Flow$BaseAnalyzer = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer;
using $Flow$BaseAnalyzer$PendingExit = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$PendingExit;
using $Flow$Liveness = ::com::sun::tools::javac::comp::Flow$Liveness;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCBreak = ::com::sun::tools::javac::tree::JCTree$JCBreak;
using $JCTree$JCCase = ::com::sun::tools::javac::tree::JCTree$JCCase;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCCatch = ::com::sun::tools::javac::tree::JCTree$JCCatch;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCContinue = ::com::sun::tools::javac::tree::JCTree$JCContinue;
using $JCTree$JCDoWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop;
using $JCTree$JCEnhancedForLoop = ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCForLoop = ::com::sun::tools::javac::tree::JCTree$JCForLoop;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCIf = ::com::sun::tools::javac::tree::JCTree$JCIf;
using $JCTree$JCLabeledStatement = ::com::sun::tools::javac::tree::JCTree$JCLabeledStatement;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCPattern = ::com::sun::tools::javac::tree::JCTree$JCPattern;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCSwitch = ::com::sun::tools::javac::tree::JCTree$JCSwitch;
using $JCTree$JCSwitchExpression = ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression;
using $JCTree$JCThrow = ::com::sun::tools::javac::tree::JCTree$JCThrow;
using $JCTree$JCTry = ::com::sun::tools::javac::tree::JCTree$JCTry;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$JCWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCWhileLoop;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeInfo$PatternPrimaryType = ::com::sun::tools::javac::tree::TreeInfo$PatternPrimaryType;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $Spliterator = ::java::util::Spliterator;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$0 : public $Function {
	$class(Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* c) override {
		 return $of(Flow$AliveAnalyzer::lambda$visitSwitch$0($cast($JCTree$JCCase, c)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$0::*)()>(&Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$0::load$($String* name, bool initialize) {
	$loadClass(Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$0::class$ = nullptr;

class Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$1$1 : public $Predicate {
	$class(Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* l) override {
		 return Flow$AliveAnalyzer::lambda$visitSwitch$1($cast($JCTree$JCCaseLabel, l));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$1$1::*)()>(&Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$1$1::load$($String* name, bool initialize) {
	$loadClass(Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$1$1::class$ = nullptr;

class Flow$AliveAnalyzer$$Lambda$lambda$transitiveCovers$2$2 : public $Predicate {
	$class(Flow$AliveAnalyzer$$Lambda$lambda$transitiveCovers$2$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* s) override {
		 return Flow$AliveAnalyzer::lambda$transitiveCovers$2($cast($Symbol, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Flow$AliveAnalyzer$$Lambda$lambda$transitiveCovers$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Flow$AliveAnalyzer$$Lambda$lambda$transitiveCovers$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Flow$AliveAnalyzer$$Lambda$lambda$transitiveCovers$2$2::*)()>(&Flow$AliveAnalyzer$$Lambda$lambda$transitiveCovers$2$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Flow$AliveAnalyzer$$Lambda$lambda$transitiveCovers$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Flow$AliveAnalyzer$$Lambda$lambda$transitiveCovers$2$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Flow$AliveAnalyzer$$Lambda$lambda$transitiveCovers$2$2::load$($String* name, bool initialize) {
	$loadClass(Flow$AliveAnalyzer$$Lambda$lambda$transitiveCovers$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Flow$AliveAnalyzer$$Lambda$lambda$transitiveCovers$2$2::class$ = nullptr;

class Flow$AliveAnalyzer$$Lambda$contains$3 : public $Predicate {
	$class(Flow$AliveAnalyzer$$Lambda$contains$3, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Set* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* arg0) override {
		 return $nc(inst$)->contains(arg0);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Flow$AliveAnalyzer$$Lambda$contains$3>());
	}
	$Set* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Flow$AliveAnalyzer$$Lambda$contains$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Flow$AliveAnalyzer$$Lambda$contains$3, inst$)},
	{}
};
$MethodInfo Flow$AliveAnalyzer$$Lambda$contains$3::methodInfos[3] = {
	{"<init>", "(Ljava/util/Set;)V", nullptr, $PUBLIC, $method(static_cast<void(Flow$AliveAnalyzer$$Lambda$contains$3::*)($Set*)>(&Flow$AliveAnalyzer$$Lambda$contains$3::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Flow$AliveAnalyzer$$Lambda$contains$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Flow$AliveAnalyzer$$Lambda$contains$3",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Flow$AliveAnalyzer$$Lambda$contains$3::load$($String* name, bool initialize) {
	$loadClass(Flow$AliveAnalyzer$$Lambda$contains$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Flow$AliveAnalyzer$$Lambda$contains$3::class$ = nullptr;

class Flow$AliveAnalyzer$$Lambda$lambda$isExhaustive$3$4 : public $Predicate {
	$class(Flow$AliveAnalyzer$$Lambda$lambda$isExhaustive$3$4, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Flow$AliveAnalyzer* inst, $Set* covered) {
		$set(this, inst$, inst);
		$set(this, covered, covered);
	}
	virtual bool test(Object$* t) override {
		 return $nc(inst$)->lambda$isExhaustive$3(covered, $cast($Type, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Flow$AliveAnalyzer$$Lambda$lambda$isExhaustive$3$4>());
	}
	Flow$AliveAnalyzer* inst$ = nullptr;
	$Set* covered = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Flow$AliveAnalyzer$$Lambda$lambda$isExhaustive$3$4::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Flow$AliveAnalyzer$$Lambda$lambda$isExhaustive$3$4, inst$)},
	{"covered", "Ljava/util/Set;", nullptr, $PUBLIC, $field(Flow$AliveAnalyzer$$Lambda$lambda$isExhaustive$3$4, covered)},
	{}
};
$MethodInfo Flow$AliveAnalyzer$$Lambda$lambda$isExhaustive$3$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Flow$AliveAnalyzer;Ljava/util/Set;)V", nullptr, $PUBLIC, $method(static_cast<void(Flow$AliveAnalyzer$$Lambda$lambda$isExhaustive$3$4::*)(Flow$AliveAnalyzer*,$Set*)>(&Flow$AliveAnalyzer$$Lambda$lambda$isExhaustive$3$4::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Flow$AliveAnalyzer$$Lambda$lambda$isExhaustive$3$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Flow$AliveAnalyzer$$Lambda$lambda$isExhaustive$3$4",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Flow$AliveAnalyzer$$Lambda$lambda$isExhaustive$3$4::load$($String* name, bool initialize) {
	$loadClass(Flow$AliveAnalyzer$$Lambda$lambda$isExhaustive$3$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Flow$AliveAnalyzer$$Lambda$lambda$isExhaustive$3$4::class$ = nullptr;

$FieldInfo _Flow$AliveAnalyzer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Flow;", nullptr, $FINAL | $SYNTHETIC, $field(Flow$AliveAnalyzer, this$0)},
	{"alive", "Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PRIVATE, $field(Flow$AliveAnalyzer, alive)},
	{}
};

$MethodInfo _Flow$AliveAnalyzer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Flow;)V", nullptr, 0, $method(static_cast<void(Flow$AliveAnalyzer::*)($Flow*)>(&Flow$AliveAnalyzer::init$))},
	{"analyzeTree", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/TreeMaker;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/TreeMaker;)V", $PUBLIC},
	{"analyzeTree", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)V", $PUBLIC},
	{"clearPendingExits", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(Flow$AliveAnalyzer::*)(bool)>(&Flow$AliveAnalyzer::clearPendingExits))},
	{"handleConstantCaseLabel", "(Ljava/util/Set;Lcom/sun/tools/javac/tree/JCTree$JCCaseLabel;)V", "(Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/tree/JCTree$JCCaseLabel;)V", $PRIVATE, $method(static_cast<void(Flow$AliveAnalyzer::*)($Set*,$JCTree$JCCaseLabel*)>(&Flow$AliveAnalyzer::handleConstantCaseLabel))},
	{"isExhaustive", "(Lcom/sun/tools/javac/code/Type;Ljava/util/Set;)Z", "(Lcom/sun/tools/javac/code/Type;Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol;>;)Z", $PRIVATE, $method(static_cast<bool(Flow$AliveAnalyzer::*)($Type*,$Set*)>(&Flow$AliveAnalyzer::isExhaustive))},
	{"lambda$isExhaustive$3", "(Ljava/util/Set;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Flow$AliveAnalyzer::*)($Set*,$Type*)>(&Flow$AliveAnalyzer::lambda$isExhaustive$3))},
	{"lambda$transitiveCovers$2", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol*)>(&Flow$AliveAnalyzer::lambda$transitiveCovers$2))},
	{"lambda$visitSwitch$0", "(Lcom/sun/tools/javac/tree/JCTree$JCCase;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Stream*(*)($JCTree$JCCase*)>(&Flow$AliveAnalyzer::lambda$visitSwitch$0))},
	{"lambda$visitSwitch$1", "(Lcom/sun/tools/javac/tree/JCTree$JCCaseLabel;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCTree$JCCaseLabel*)>(&Flow$AliveAnalyzer::lambda$visitSwitch$1))},
	{"markDead", "()V", nullptr, 0},
	{"scanDef", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0},
	{"scanStat", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0},
	{"scanStats", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;)V", 0},
	{"transitiveCovers", "(Ljava/util/Set;)V", "(Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol;>;)V", $PRIVATE, $method(static_cast<void(Flow$AliveAnalyzer::*)($Set*)>(&Flow$AliveAnalyzer::transitiveCovers))},
	{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC},
	{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC},
	{"visitBreak", "(Lcom/sun/tools/javac/tree/JCTree$JCBreak;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitContinue", "(Lcom/sun/tools/javac/tree/JCTree$JCContinue;)V", nullptr, $PUBLIC},
	{"visitDoLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCDoWhileLoop;)V", nullptr, $PUBLIC},
	{"visitForLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCForLoop;)V", nullptr, $PUBLIC},
	{"visitForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)V", nullptr, $PUBLIC},
	{"visitIf", "(Lcom/sun/tools/javac/tree/JCTree$JCIf;)V", nullptr, $PUBLIC},
	{"visitLabelled", "(Lcom/sun/tools/javac/tree/JCTree$JCLabeledStatement;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitModuleDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC},
	{"visitSwitch", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitch;)V", nullptr, $PUBLIC},
	{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC},
	{"visitThrow", "(Lcom/sun/tools/javac/tree/JCTree$JCThrow;)V", nullptr, $PUBLIC},
	{"visitTry", "(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{"visitWhileLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCWhileLoop;)V", nullptr, $PUBLIC},
	{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Flow$AliveAnalyzer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Flow$AliveAnalyzer", "com.sun.tools.javac.comp.Flow", "AliveAnalyzer", 0},
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer", "com.sun.tools.javac.comp.Flow", "BaseAnalyzer", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Flow$AliveAnalyzer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Flow$AliveAnalyzer",
	"com.sun.tools.javac.comp.Flow$BaseAnalyzer",
	nullptr,
	_Flow$AliveAnalyzer_FieldInfo_,
	_Flow$AliveAnalyzer_MethodInfo_,
	nullptr,
	nullptr,
	_Flow$AliveAnalyzer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Flow"
};

$Object* allocate$Flow$AliveAnalyzer($Class* clazz) {
	return $of($alloc(Flow$AliveAnalyzer));
}

void Flow$AliveAnalyzer::init$($Flow* this$0) {
	$set(this, this$0, this$0);
	$Flow$BaseAnalyzer::init$();
}

void Flow$AliveAnalyzer::markDead() {
	$init($Flow$Liveness);
	$set(this, alive, $Flow$Liveness::DEAD);
}

void Flow$AliveAnalyzer::scanDef($JCTree* tree) {
	scanStat(tree);
	$init($JCTree$Tag);
	$init($Flow$Liveness);
	if (tree != nullptr && tree->hasTag($JCTree$Tag::BLOCK) && this->alive == $Flow$Liveness::DEAD) {
		$init($CompilerProperties$Errors);
		$nc(this->this$0->log)->error($(tree->pos()), $CompilerProperties$Errors::InitializerMustBeAbleToCompleteNormally);
	}
}

void Flow$AliveAnalyzer::scanStat($JCTree* tree) {
	$init($Flow$Liveness);
	if (this->alive == $Flow$Liveness::DEAD && tree != nullptr) {
		$init($CompilerProperties$Errors);
		$nc(this->this$0->log)->error($(tree->pos()), $CompilerProperties$Errors::UnreachableStmt);
		$init($JCTree$Tag);
		if (!tree->hasTag($JCTree$Tag::SKIP)) {
			$set(this, alive, $Flow$Liveness::RECOVERY);
		}
	}
	scan(tree);
}

void Flow$AliveAnalyzer::scanStats($List* trees) {
	if (trees != nullptr) {
		{
			$var($List, l, trees);
			for (; l->nonEmpty(); $assign(l, l->tail)) {
				scanStat($cast($JCTree, $nc(l)->head));
			}
		}
	}
}

void Flow$AliveAnalyzer::visitClassDef($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tree)->sym == nullptr) {
		return;
	}
	$Flow$Liveness* alivePrev = this->alive;
	$var($ListBuffer, pendingExitsPrev, this->pendingExits);
	$var($Lint, lintPrev, this->this$0->lint);
	$set(this, pendingExits, $new($ListBuffer));
	$set(this->this$0, lint, $nc(this->this$0->lint)->augment(static_cast<$Symbol*>($nc(tree)->sym)));
	{
		$var($Throwable, var$0, nullptr);
		try {
			{
				$var($List, l, $nc(tree)->defs);
				for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
					$init($JCTree$Tag);
					bool var$1 = !$nc(($cast($JCTree, l->head)))->hasTag($JCTree$Tag::METHODDEF);
					if (var$1 && ((int64_t)($TreeInfo::flags($cast($JCTree, l->head)) & (uint64_t)(int64_t)8)) != 0) {
						scanDef($cast($JCTree, l->head));
						clearPendingExits(false);
					}
				}
			}
			{
				$var($List, l, tree->defs);
				for (; l->nonEmpty(); $assign(l, l->tail)) {
					$init($JCTree$Tag);
					bool var$2 = !$nc(($cast($JCTree, $nc(l)->head)))->hasTag($JCTree$Tag::METHODDEF);
					if (var$2 && ((int64_t)($TreeInfo::flags($cast($JCTree, l->head)) & (uint64_t)(int64_t)8)) == 0) {
						scanDef($cast($JCTree, l->head));
						clearPendingExits(false);
					}
				}
			}
			{
				$var($List, l, tree->defs);
				for (; l->nonEmpty(); $assign(l, l->tail)) {
					$init($JCTree$Tag);
					if ($nc(($cast($JCTree, $nc(l)->head)))->hasTag($JCTree$Tag::METHODDEF)) {
						scan($cast($JCTree, l->head));
					}
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$set(this, pendingExits, pendingExitsPrev);
			$set(this, alive, alivePrev);
			$set(this->this$0, lint, lintPrev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Flow$AliveAnalyzer::visitMethodDef($JCTree$JCMethodDecl* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tree)->body == nullptr) {
		return;
	}
	$var($Lint, lintPrev, this->this$0->lint);
	$set(this->this$0, lint, $nc(this->this$0->lint)->augment(static_cast<$Symbol*>($nc(tree)->sym)));
	$Assert::check($nc(this->pendingExits)->isEmpty());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Flow$Liveness);
			$set(this, alive, $Flow$Liveness::ALIVE);
			scanStat($nc(tree)->body);
			$nc(tree)->completesNormally = this->alive != $Flow$Liveness::DEAD;
			$init($TypeTag);
			if (this->alive == $Flow$Liveness::ALIVE && !$nc($($nc($nc(tree->sym)->type)->getReturnType()))->hasTag($TypeTag::VOID)) {
				$init($CompilerProperties$Errors);
				$nc(this->this$0->log)->error($($TreeInfo::diagEndPos(tree->body)), $CompilerProperties$Errors::MissingRetStmt);
			}
			clearPendingExits(true);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this->this$0, lint, lintPrev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Flow$AliveAnalyzer::clearPendingExits(bool inMethod) {
	$useLocalCurrentObjectStackCache();
	$var($List, exits, $nc(this->pendingExits)->toList());
	$set(this, pendingExits, $new($ListBuffer));
	while ($nc(exits)->nonEmpty()) {
		$var($Flow$BaseAnalyzer$PendingExit, exit, $cast($Flow$BaseAnalyzer$PendingExit, exits->head));
		$assign(exits, exits->tail);
		$init($JCTree$Tag);
		bool var$0 = (inMethod && $nc($nc(exit)->tree)->hasTag($JCTree$Tag::RETURN));
		$Assert::check(var$0 || $nc(this->this$0->log)->hasErrorOn($($nc($nc(exit)->tree)->pos())));
	}
}

void Flow$AliveAnalyzer::visitVarDef($JCTree$JCVariableDecl* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tree)->init != nullptr) {
		$var($Lint, lintPrev, this->this$0->lint);
		$set(this->this$0, lint, $nc(this->this$0->lint)->augment(static_cast<$Symbol*>(tree->sym)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				scan(static_cast<$JCTree*>(tree->init));
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$set(this->this$0, lint, lintPrev);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void Flow$AliveAnalyzer::visitBlock($JCTree$JCBlock* tree) {
	scanStats($nc(tree)->stats);
}

void Flow$AliveAnalyzer::visitDoLoop($JCTree$JCDoWhileLoop* tree) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$set(this, pendingExits, $new($ListBuffer));
	scanStat($nc(tree)->body);
	$set(this, alive, $nc(this->alive)->or$($(resolveContinues(tree))));
	scan(static_cast<$JCTree*>($nc(tree)->cond));
	$set(this, alive, $nc(this->alive)->and$(!$nc($nc($nc(tree)->cond)->type)->isTrue()));
	$set(this, alive, $nc(this->alive)->or$($(resolveBreaks(tree, prevPendingExits))));
}

void Flow$AliveAnalyzer::visitWhileLoop($JCTree$JCWhileLoop* tree) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$set(this, pendingExits, $new($ListBuffer));
	scan(static_cast<$JCTree*>($nc(tree)->cond));
	$set(this, alive, $Flow$Liveness::from(!$nc($nc($nc(tree)->cond)->type)->isFalse()));
	scanStat($nc(tree)->body);
	$set(this, alive, $nc(this->alive)->or$($(resolveContinues(tree))));
	$set(this, alive, $nc($(resolveBreaks(tree, prevPendingExits)))->or$(!$nc($nc($nc(tree)->cond)->type)->isTrue()));
}

void Flow$AliveAnalyzer::visitForLoop($JCTree$JCForLoop* tree) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	scanStats($nc(tree)->init);
	$set(this, pendingExits, $new($ListBuffer));
	if ($nc(tree)->cond != nullptr) {
		scan(static_cast<$JCTree*>(tree->cond));
		$set(this, alive, $Flow$Liveness::from(!$nc($nc(tree->cond)->type)->isFalse()));
	} else {
		$init($Flow$Liveness);
		$set(this, alive, $Flow$Liveness::ALIVE);
	}
	scanStat($nc(tree)->body);
	$set(this, alive, $nc(this->alive)->or$($(resolveContinues(tree))));
	scan($nc(tree)->step);
	$set(this, alive, $nc($(resolveBreaks(tree, prevPendingExits)))->or$($nc(tree)->cond != nullptr && !$nc($nc(tree->cond)->type)->isTrue()));
}

void Flow$AliveAnalyzer::visitForeachLoop($JCTree$JCEnhancedForLoop* tree) {
	$useLocalCurrentObjectStackCache();
	visitVarDef($nc(tree)->var);
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	scan(static_cast<$JCTree*>($nc(tree)->expr));
	$set(this, pendingExits, $new($ListBuffer));
	scanStat($nc(tree)->body);
	$set(this, alive, $nc(this->alive)->or$($(resolveContinues(tree))));
	resolveBreaks(tree, prevPendingExits);
	$set(this, alive, $Flow$Liveness::ALIVE);
}

void Flow$AliveAnalyzer::visitLabelled($JCTree$JCLabeledStatement* tree) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$set(this, pendingExits, $new($ListBuffer));
	scanStat($nc(tree)->body);
	$set(this, alive, $nc(this->alive)->or$($(resolveBreaks(tree, prevPendingExits))));
}

void Flow$AliveAnalyzer::visitSwitch($JCTree$JCSwitch* tree) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$set(this, pendingExits, $new($ListBuffer));
	scan(static_cast<$JCTree*>($nc(tree)->selector));
	bool exhaustiveSwitch = $nc(tree)->patternSwitch || $nc($($nc($($nc($nc(tree)->cases)->stream()))->flatMap(static_cast<$Function*>($$new(Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$0)))))->anyMatch(static_cast<$Predicate*>($$new(Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$1$1)));
	$var($Set, constants, exhaustiveSwitch ? static_cast<$Set*>($new($HashSet)) : ($Set*)nullptr);
	{
		$var($List, l, tree->cases);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$init($Flow$Liveness);
			$set(this, alive, $Flow$Liveness::ALIVE);
			$var($JCTree$JCCase, c, $cast($JCTree$JCCase, l->head));
			{
				$var($Iterator, i$, $nc($nc(c)->labels)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree$JCCaseLabel, pat, $cast($JCTree$JCCaseLabel, i$->next()));
					{
						scan(static_cast<$JCTree*>(pat));
						handleConstantCaseLabel(constants, pat);
					}
				}
			}
			scanStats(c->stats);
			$init($JCTree$JCCase);
			if (this->alive != $Flow$Liveness::DEAD && c->caseKind == $JCTree$JCCase::RULE) {
				scanSyntheticBreak(this->this$0->make, tree);
				$set(this, alive, $Flow$Liveness::DEAD);
			}
			$init($Lint$LintCategory);
			bool var$1 = this->alive == $Flow$Liveness::ALIVE && $nc(this->this$0->lint)->isEnabled($Lint$LintCategory::FALLTHROUGH);
			bool var$0 = var$1 && $nc(c->stats)->nonEmpty();
			if (var$0 && $nc(l->tail)->nonEmpty()) {
				$init($CompilerProperties$Warnings);
				$nc(this->this$0->log)->warning($Lint$LintCategory::FALLTHROUGH, $($nc(($cast($JCTree$JCCase, $nc(l->tail)->head)))->pos()), $CompilerProperties$Warnings::PossibleFallThroughIntoCase);
			}
		}
	}
	bool var$2 = !tree->hasTotalPattern && exhaustiveSwitch && !$TreeInfo::isErrorEnumSwitch(tree->selector, tree->cases);
	if (var$2 && (constants == nullptr || !isExhaustive($nc(tree->selector)->type, constants))) {
		$init($CompilerProperties$Errors);
		$nc(this->this$0->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $CompilerProperties$Errors::NotExhaustiveStatement);
	}
	if (!tree->hasTotalPattern) {
		$init($Flow$Liveness);
		$set(this, alive, $Flow$Liveness::ALIVE);
	}
	$set(this, alive, $nc(this->alive)->or$($(resolveBreaks(tree, prevPendingExits))));
}

void Flow$AliveAnalyzer::visitSwitchExpression($JCTree$JCSwitchExpression* tree) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$set(this, pendingExits, $new($ListBuffer));
	scan(static_cast<$JCTree*>($nc(tree)->selector));
	$var($Set, constants, $new($HashSet));
	$Flow$Liveness* prevAlive = this->alive;
	{
		$var($List, l, $nc(tree)->cases);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$init($Flow$Liveness);
			$set(this, alive, $Flow$Liveness::ALIVE);
			$var($JCTree$JCCase, c, $cast($JCTree$JCCase, l->head));
			{
				$var($Iterator, i$, $nc($nc(c)->labels)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree$JCCaseLabel, pat, $cast($JCTree$JCCaseLabel, i$->next()));
					{
						scan(static_cast<$JCTree*>(pat));
						handleConstantCaseLabel(constants, pat);
					}
				}
			}
			scanStats(c->stats);
			if (this->alive == $Flow$Liveness::ALIVE) {
				$init($JCTree$JCCase);
				if (c->caseKind == $JCTree$JCCase::RULE) {
					$init($CompilerProperties$Errors);
					$nc(this->this$0->log)->error($($TreeInfo::diagEndPos(c->body)), $CompilerProperties$Errors::RuleCompletesNormally);
				} else if ($nc(l->tail)->isEmpty()) {
					$init($CompilerProperties$Errors);
					$nc(this->this$0->log)->error($($TreeInfo::diagEndPos(tree)), $CompilerProperties$Errors::SwitchExpressionCompletesNormally);
				}
			}
		}
	}
	bool var$0 = !tree->hasTotalPattern && !$TreeInfo::isErrorEnumSwitch(tree->selector, tree->cases);
	if (var$0 && !isExhaustive($nc(tree->selector)->type, constants)) {
		$init($CompilerProperties$Errors);
		$nc(this->this$0->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $CompilerProperties$Errors::NotExhaustive);
	}
	$set(this, alive, prevAlive);
	$set(this, alive, $nc(this->alive)->or$($(resolveYields(tree, prevPendingExits))));
}

void Flow$AliveAnalyzer::handleConstantCaseLabel($Set* constants, $JCTree$JCCaseLabel* pat) {
	$useLocalCurrentObjectStackCache();
	if (constants != nullptr) {
		if ($nc(pat)->isExpression()) {
			$var($JCTree$JCExpression, expr, $cast($JCTree$JCExpression, pat));
			$init($JCTree$Tag);
			bool var$0 = expr->hasTag($JCTree$Tag::IDENT);
			if (var$0 && $nc($nc(($cast($JCTree$JCIdent, expr)))->sym)->isEnum()) {
				constants->add($nc(($cast($JCTree$JCIdent, expr)))->sym);
			}
		} else if (pat->isPattern()) {
			$var($TreeInfo$PatternPrimaryType, patternType, $TreeInfo::primaryPatternType($cast($JCTree$JCPattern, pat)));
			if ($nc(patternType)->unconditional()) {
				constants->add($nc($(patternType->type()))->tsym);
			}
		}
	}
}

void Flow$AliveAnalyzer::transitiveCovers($Set* covered) {
	$useLocalCurrentObjectStackCache();
	$var($List, todo, $List::from(static_cast<$Iterable*>(covered)));
	while ($nc(todo)->nonEmpty()) {
		$var($Symbol, sym, $cast($Symbol, todo->head));
		$assign(todo, todo->tail);
		$init($Flow$1);
		switch ($nc($Flow$1::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->get($nc(($nc(sym)->kind))->ordinal())) {
		case 1:
			{
				{
					$var($Iterable, constants, $nc($($nc(sym->owner)->members()))->getSymbols(static_cast<$Predicate*>($$new(Flow$AliveAnalyzer$$Lambda$lambda$transitiveCovers$2$2))));
					bool hasAll = $nc($($StreamSupport::stream($($nc(constants)->spliterator()), false)))->allMatch(static_cast<$Predicate*>($$new(Flow$AliveAnalyzer$$Lambda$contains$3, static_cast<$Set*>($nc(covered)))));
					if (hasAll && $nc(covered)->add(sym->owner)) {
						$assign(todo, $nc(todo)->prepend(sym->owner));
					}
				}
				break;
			}
		case 2:
			{
				{
					{
						$var($Iterator, i$, $nc($($nc(this->this$0->types)->directSupertypes(sym->type)))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Type, sup, $cast($Type, i$->next()));
							{
								$init($Kinds$Kind);
								bool var$0 = $nc($nc(sup)->tsym)->kind == $Kinds$Kind::TYP && $nc(sup->tsym)->isAbstract();
								if (var$0 && $nc(sup->tsym)->isSealed()) {
									bool hasAll = $nc($($nc($nc(($cast($Symbol$ClassSymbol, sup->tsym)))->permitted)->stream()))->allMatch(static_cast<$Predicate*>($$new(Flow$AliveAnalyzer$$Lambda$contains$3, static_cast<$Set*>($nc(covered)))));
									if (hasAll && $nc(covered)->add(sup->tsym)) {
										$assign(todo, $nc(todo)->prepend(sup->tsym));
									}
								}
							}
						}
					}
				}
				break;
			}
		}
	}
}

bool Flow$AliveAnalyzer::isExhaustive($Type* seltype, $Set* covered) {
	$useLocalCurrentObjectStackCache();
	transitiveCovers(covered);
	$init($Flow$1);

	bool var$0 = false;
	switch ($nc($Flow$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(seltype)->getTag())))->ordinal())) {
	case 1:
		{
			{
				if (seltype->isCompound()) {
					if (seltype->isIntersection()) {
						var$0 = $nc($($nc($($nc(($cast($Type$IntersectionClassType, seltype)))->getComponents()))->stream()))->anyMatch(static_cast<$Predicate*>($$new(Flow$AliveAnalyzer$$Lambda$lambda$isExhaustive$3$4, this, covered)));
						break;
					}
					var$0 = false;
					break;
				}
				var$0 = $nc(covered)->contains(seltype->tsym);
				break;
			}
		}
	case 2:
		{
			var$0 = isExhaustive($($nc(($cast($Type$TypeVar, seltype)))->getUpperBound()), covered);
			break;
		}
	default:
		{
			var$0 = false;
			break;
		}
	}
	return var$0;
}

void Flow$AliveAnalyzer::visitTry($JCTree$JCTry* tree) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$set(this, pendingExits, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc($nc(tree)->resources)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, resource, $cast($JCTree, i$->next()));
			{
				$var($JCTree$JCExpression, expression, nullptr);
				{
					$var($JCTree$JCVariableDecl, variableDecl, nullptr);
					bool var$0 = $instanceOf($JCTree$JCVariableDecl, resource);
					if (var$0) {
						$assign(variableDecl, $cast($JCTree$JCVariableDecl, resource));
						var$0 = true;
					}
					if (var$0) {
						visitVarDef(variableDecl);
					} else {
						bool var$2 = $instanceOf($JCTree$JCExpression, resource);
						if (var$2) {
							$assign(expression, $cast($JCTree$JCExpression, resource));
							var$2 = true;
						}
						if (var$2) {
							scan(static_cast<$JCTree*>(expression));
						} else {
							$throwNew($AssertionError, $of(tree));
						}
					}
				}
			}
		}
	}
	scanStat(tree->body);
	$Flow$Liveness* aliveEnd = this->alive;
	{
		$var($List, l, tree->catchers);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$init($Flow$Liveness);
			$set(this, alive, $Flow$Liveness::ALIVE);
			$var($JCTree$JCVariableDecl, param, $nc(($cast($JCTree$JCCatch, l->head)))->param);
			scan(static_cast<$JCTree*>(param));
			scanStat($nc(($cast($JCTree$JCCatch, l->head)))->body);
			aliveEnd = $nc(aliveEnd)->or$(this->alive);
		}
	}
	if (tree->finalizer != nullptr) {
		$var($ListBuffer, exits, this->pendingExits);
		$set(this, pendingExits, prevPendingExits);
		$init($Flow$Liveness);
		$set(this, alive, $Flow$Liveness::ALIVE);
		scanStat(tree->finalizer);
		tree->finallyCanCompleteNormally = this->alive != $Flow$Liveness::DEAD;
		if (this->alive == $Flow$Liveness::DEAD) {
			$init($Lint$LintCategory);
			if ($nc(this->this$0->lint)->isEnabled($Lint$LintCategory::FINALLY)) {
				$init($CompilerProperties$Warnings);
				$nc(this->this$0->log)->warning($Lint$LintCategory::FINALLY, $($TreeInfo::diagEndPos(tree->finalizer)), $CompilerProperties$Warnings::FinallyCannotComplete);
			}
		} else {
			while ($nc(exits)->nonEmpty()) {
				$nc(this->pendingExits)->append($cast($Flow$BaseAnalyzer$PendingExit, $(exits->next())));
			}
			$set(this, alive, aliveEnd);
		}
	} else {
		$set(this, alive, aliveEnd);
		$var($ListBuffer, exits, this->pendingExits);
		$set(this, pendingExits, prevPendingExits);
		while ($nc(exits)->nonEmpty()) {
			$nc(this->pendingExits)->append($cast($Flow$BaseAnalyzer$PendingExit, $(exits->next())));
		}
	}
}

void Flow$AliveAnalyzer::visitIf($JCTree$JCIf* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->cond));
	scanStat($nc(tree)->thenpart);
	if ($nc(tree)->elsepart != nullptr) {
		$Flow$Liveness* aliveAfterThen = this->alive;
		$init($Flow$Liveness);
		$set(this, alive, $Flow$Liveness::ALIVE);
		scanStat(tree->elsepart);
		$set(this, alive, $nc(this->alive)->or$(aliveAfterThen));
	} else {
		$init($Flow$Liveness);
		$set(this, alive, $Flow$Liveness::ALIVE);
	}
}

void Flow$AliveAnalyzer::visitBreak($JCTree$JCBreak* tree) {
	recordExit($$new($Flow$BaseAnalyzer$PendingExit, tree));
}

void Flow$AliveAnalyzer::visitYield($JCTree$JCYield* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->value));
	recordExit($$new($Flow$BaseAnalyzer$PendingExit, tree));
}

void Flow$AliveAnalyzer::visitContinue($JCTree$JCContinue* tree) {
	recordExit($$new($Flow$BaseAnalyzer$PendingExit, tree));
}

void Flow$AliveAnalyzer::visitReturn($JCTree$JCReturn* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->expr));
	recordExit($$new($Flow$BaseAnalyzer$PendingExit, tree));
}

void Flow$AliveAnalyzer::visitThrow($JCTree$JCThrow* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->expr));
	markDead();
}

void Flow$AliveAnalyzer::visitApply($JCTree$JCMethodInvocation* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->meth));
	scan($nc(tree)->args);
}

void Flow$AliveAnalyzer::visitNewClass($JCTree$JCNewClass* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->encl));
	scan($nc(tree)->args);
	if ($nc(tree)->def != nullptr) {
		scan(static_cast<$JCTree*>(tree->def));
	}
}

void Flow$AliveAnalyzer::visitLambda($JCTree$JCLambda* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tree)->type != nullptr && $nc(tree->type)->isErroneous()) {
		return;
	}
	$var($ListBuffer, prevPending, this->pendingExits);
	$Flow$Liveness* prevAlive = this->alive;
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, pendingExits, $new($ListBuffer));
			$init($Flow$Liveness);
			$set(this, alive, $Flow$Liveness::ALIVE);
			scanStat($nc(tree)->body);
			$nc(tree)->canCompleteNormally = this->alive != $Flow$Liveness::DEAD;
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, pendingExits, prevPending);
			$set(this, alive, prevAlive);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Flow$AliveAnalyzer::visitModuleDef($JCTree$JCModuleDecl* tree) {
}

void Flow$AliveAnalyzer::analyzeTree($Env* env, $TreeMaker* make) {
	analyzeTree(env, $nc(env)->tree, make);
}

void Flow$AliveAnalyzer::analyzeTree($Env* env, $JCTree* tree, $TreeMaker* make) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this->this$0, attrEnv, env);
			$set(this->this$0, make, make);
			$set(this, pendingExits, $new($ListBuffer));
			$init($Flow$Liveness);
			$set(this, alive, $Flow$Liveness::ALIVE);
			scan(tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, pendingExits, nullptr);
			$set(this->this$0, make, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool Flow$AliveAnalyzer::lambda$isExhaustive$3($Set* covered, $Type* t) {
	return isExhaustive(t, covered);
}

bool Flow$AliveAnalyzer::lambda$transitiveCovers$2($Symbol* s) {
	$init(Flow$AliveAnalyzer);
	$init($Kinds$Kind);
	return $nc(s)->isEnum() && s->kind == $Kinds$Kind::VAR;
}

bool Flow$AliveAnalyzer::lambda$visitSwitch$1($JCTree$JCCaseLabel* l) {
	$init(Flow$AliveAnalyzer);
	return $TreeInfo::isNull(l);
}

$Stream* Flow$AliveAnalyzer::lambda$visitSwitch$0($JCTree$JCCase* c) {
	$init(Flow$AliveAnalyzer);
	return $nc($nc(c)->labels)->stream();
}

Flow$AliveAnalyzer::Flow$AliveAnalyzer() {
}

$Class* Flow$AliveAnalyzer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$0::classInfo$.name)) {
			return Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$0::load$(name, initialize);
		}
		if (name->equals(Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$1$1::classInfo$.name)) {
			return Flow$AliveAnalyzer$$Lambda$lambda$visitSwitch$1$1::load$(name, initialize);
		}
		if (name->equals(Flow$AliveAnalyzer$$Lambda$lambda$transitiveCovers$2$2::classInfo$.name)) {
			return Flow$AliveAnalyzer$$Lambda$lambda$transitiveCovers$2$2::load$(name, initialize);
		}
		if (name->equals(Flow$AliveAnalyzer$$Lambda$contains$3::classInfo$.name)) {
			return Flow$AliveAnalyzer$$Lambda$contains$3::load$(name, initialize);
		}
		if (name->equals(Flow$AliveAnalyzer$$Lambda$lambda$isExhaustive$3$4::classInfo$.name)) {
			return Flow$AliveAnalyzer$$Lambda$lambda$isExhaustive$3$4::load$(name, initialize);
		}
	}
	$loadClass(Flow$AliveAnalyzer, name, initialize, &_Flow$AliveAnalyzer_ClassInfo_, allocate$Flow$AliveAnalyzer);
	return class$;
}

$Class* Flow$AliveAnalyzer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com