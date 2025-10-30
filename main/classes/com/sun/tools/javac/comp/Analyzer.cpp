#include <com/sun/tools/javac/comp/Analyzer.h>

#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Analyzer$1.h>
#include <com/sun/tools/javac/comp/Analyzer$2.h>
#include <com/sun/tools/javac/comp/Analyzer$AnalyzerCopier.h>
#include <com/sun/tools/javac/comp/Analyzer$AnalyzerMode.h>
#include <com/sun/tools/javac/comp/Analyzer$DeferredAnalysisHelper.h>
#include <com/sun/tools/javac/comp/Analyzer$DiamondInitializer.h>
#include <com/sun/tools/javac/comp/Analyzer$LambdaAnalyzer.h>
#include <com/sun/tools/javac/comp/Analyzer$RedundantLocalVarTypeAnalyzer.h>
#include <com/sun/tools/javac/comp/Analyzer$RedundantLocalVarTypeAnalyzerBase.h>
#include <com/sun/tools/javac/comp/Analyzer$RedundantLocalVarTypeAnalyzerForEach.h>
#include <com/sun/tools/javac/comp/Analyzer$RedundantTypeArgAnalyzer.h>
#include <com/sun/tools/javac/comp/Analyzer$RewritingContext.h>
#include <com/sun/tools/javac/comp/Analyzer$StatementAnalyzer.h>
#include <com/sun/tools/javac/comp/Analyzer$StatementScanner.h>
#include <com/sun/tools/javac/comp/Analyzer$TreeRewriter.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$LocalCacheContext.h>
#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttributionMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log$DeferredDiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log$DiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/function/Function.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef ANALYZER
#undef DIAMOND_WITH_ANONYMOUS_CLASS_CREATION
#undef LABELLED
#undef NOPOS
#undef SYNTHETIC
#undef TYP

using $Analyzer$StatementAnalyzerArray = $Array<::com::sun::tools::javac::comp::Analyzer$StatementAnalyzer>;
using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Analyzer$1 = ::com::sun::tools::javac::comp::Analyzer$1;
using $Analyzer$2 = ::com::sun::tools::javac::comp::Analyzer$2;
using $Analyzer$AnalyzerCopier = ::com::sun::tools::javac::comp::Analyzer$AnalyzerCopier;
using $Analyzer$AnalyzerMode = ::com::sun::tools::javac::comp::Analyzer$AnalyzerMode;
using $Analyzer$DeferredAnalysisHelper = ::com::sun::tools::javac::comp::Analyzer$DeferredAnalysisHelper;
using $Analyzer$DiamondInitializer = ::com::sun::tools::javac::comp::Analyzer$DiamondInitializer;
using $Analyzer$LambdaAnalyzer = ::com::sun::tools::javac::comp::Analyzer$LambdaAnalyzer;
using $Analyzer$RedundantLocalVarTypeAnalyzer = ::com::sun::tools::javac::comp::Analyzer$RedundantLocalVarTypeAnalyzer;
using $Analyzer$RedundantLocalVarTypeAnalyzerBase = ::com::sun::tools::javac::comp::Analyzer$RedundantLocalVarTypeAnalyzerBase;
using $Analyzer$RedundantLocalVarTypeAnalyzerForEach = ::com::sun::tools::javac::comp::Analyzer$RedundantLocalVarTypeAnalyzerForEach;
using $Analyzer$RedundantTypeArgAnalyzer = ::com::sun::tools::javac::comp::Analyzer$RedundantTypeArgAnalyzer;
using $Analyzer$RewritingContext = ::com::sun::tools::javac::comp::Analyzer$RewritingContext;
using $Analyzer$StatementAnalyzer = ::com::sun::tools::javac::comp::Analyzer$StatementAnalyzer;
using $Analyzer$StatementScanner = ::com::sun::tools::javac::comp::Analyzer$StatementScanner;
using $Analyzer$TreeRewriter = ::com::sun::tools::javac::comp::Analyzer$TreeRewriter;
using $ArgumentAttr = ::com::sun::tools::javac::comp::ArgumentAttr;
using $ArgumentAttr$LocalCacheContext = ::com::sun::tools::javac::comp::ArgumentAttr$LocalCacheContext;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$AttributionMode = ::com::sun::tools::javac::comp::DeferredAttr$AttributionMode;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeCopier = ::com::sun::tools::javac::tree::TreeCopier;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$DeferredDiagnosticHandler = ::com::sun::tools::javac::util::Log$DeferredDiagnosticHandler;
using $Log$DiagnosticHandler = ::com::sun::tools::javac::util::Log$DiagnosticHandler;
using $Options = ::com::sun::tools::javac::util::Options;
using $Position = ::com::sun::tools::javac::util::Position;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Arrays = ::java::util::Arrays;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $Function = ::java::util::function::Function;
using $Supplier = ::java::util::function::Supplier;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Analyzer$$Lambda$lambda$doAnalysis$0 : public $Supplier {
	$class(Analyzer$$Lambda$lambda$doAnalysis$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Analyzer$RewritingContext* rewriting) {
		$set(this, rewriting, rewriting);
	}
	virtual $Object* get() override {
		 return $of(Analyzer::lambda$doAnalysis$0(rewriting));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Analyzer$$Lambda$lambda$doAnalysis$0>());
	}
	$Analyzer$RewritingContext* rewriting = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Analyzer$$Lambda$lambda$doAnalysis$0::fieldInfos[2] = {
	{"rewriting", "Lcom/sun/tools/javac/comp/Analyzer$RewritingContext;", nullptr, $PUBLIC, $field(Analyzer$$Lambda$lambda$doAnalysis$0, rewriting)},
	{}
};
$MethodInfo Analyzer$$Lambda$lambda$doAnalysis$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Analyzer$RewritingContext;)V", nullptr, $PUBLIC, $method(static_cast<void(Analyzer$$Lambda$lambda$doAnalysis$0::*)($Analyzer$RewritingContext*)>(&Analyzer$$Lambda$lambda$doAnalysis$0::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Analyzer$$Lambda$lambda$doAnalysis$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Analyzer$$Lambda$lambda$doAnalysis$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* Analyzer$$Lambda$lambda$doAnalysis$0::load$($String* name, bool initialize) {
	$loadClass(Analyzer$$Lambda$lambda$doAnalysis$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Analyzer$$Lambda$lambda$doAnalysis$0::class$ = nullptr;

class Analyzer$$Lambda$lambda$doAnalysis$1$1 : public $Function {
	$class(Analyzer$$Lambda$lambda$doAnalysis$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* se) override {
		 return $of(Analyzer::lambda$doAnalysis$1($cast($StackTraceElement, se)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Analyzer$$Lambda$lambda$doAnalysis$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Analyzer$$Lambda$lambda$doAnalysis$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Analyzer$$Lambda$lambda$doAnalysis$1$1::*)()>(&Analyzer$$Lambda$lambda$doAnalysis$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Analyzer$$Lambda$lambda$doAnalysis$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Analyzer$$Lambda$lambda$doAnalysis$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Analyzer$$Lambda$lambda$doAnalysis$1$1::load$($String* name, bool initialize) {
	$loadClass(Analyzer$$Lambda$lambda$doAnalysis$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Analyzer$$Lambda$lambda$doAnalysis$1$1::class$ = nullptr;

$FieldInfo _Analyzer_FieldInfo_[] = {
	{"analyzerKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/Analyzer;>;", $PROTECTED | $STATIC | $FINAL, $staticField(Analyzer, analyzerKey)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL, $field(Analyzer, types)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $FINAL, $field(Analyzer, log)},
	{"attr", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL, $field(Analyzer, attr)},
	{"deferredAttr", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $FINAL, $field(Analyzer, deferredAttr)},
	{"argumentAttr", "Lcom/sun/tools/javac/comp/ArgumentAttr;", nullptr, $FINAL, $field(Analyzer, argumentAttr)},
	{"make", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $FINAL, $field(Analyzer, make)},
	{"copier", "Lcom/sun/tools/javac/comp/Analyzer$AnalyzerCopier;", nullptr, $FINAL, $field(Analyzer, copier)},
	{"allowDiamondWithAnonymousClassCreation", "Z", nullptr, $PRIVATE | $FINAL, $field(Analyzer, allowDiamondWithAnonymousClassCreation)},
	{"analyzerModes", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Lcom/sun/tools/javac/comp/Analyzer$AnalyzerMode;>;", $FINAL, $field(Analyzer, analyzerModes)},
	{"analyzers", "[Lcom/sun/tools/javac/comp/Analyzer$StatementAnalyzer;", "[Lcom/sun/tools/javac/comp/Analyzer$StatementAnalyzer<Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;>;", 0, $field(Analyzer, analyzers)},
	{"flushDeferredHelper", "Lcom/sun/tools/javac/comp/Analyzer$DeferredAnalysisHelper;", nullptr, 0, $field(Analyzer, flushDeferredHelper)},
	{"queueDeferredHelper", "Lcom/sun/tools/javac/comp/Analyzer$DeferredAnalysisHelper;", nullptr, 0, $field(Analyzer, queueDeferredHelper)},
	{"deferredAnalysisHelper", "Lcom/sun/tools/javac/comp/Analyzer$DeferredAnalysisHelper;", nullptr, 0, $field(Analyzer, deferredAnalysisHelper)},
	{}
};

$MethodInfo _Analyzer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(Analyzer::*)($Context*)>(&Analyzer::init$))},
	{"analyze", "(Lcom/sun/tools/javac/tree/JCTree$JCStatement;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCStatement;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PROTECTED},
	{"analyzeIfNeeded", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0},
	{"copyEnvIfNeeded", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0},
	{"doAnalysis", "(Lcom/sun/tools/javac/comp/Analyzer$RewritingContext;)V", nullptr, 0},
	{"flush", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PUBLIC},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/Analyzer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Analyzer*(*)($Context*)>(&Analyzer::instance))},
	{"lambda$doAnalysis$0", "(Lcom/sun/tools/javac/comp/Analyzer$RewritingContext;)Lcom/sun/tools/javac/util/Log$DiagnosticHandler;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Log$DiagnosticHandler*(*)($Analyzer$RewritingContext*)>(&Analyzer::lambda$doAnalysis$0))},
	{"lambda$doAnalysis$1", "(Ljava/lang/StackTraceElement;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($StackTraceElement*)>(&Analyzer::lambda$doAnalysis$1))},
	{}
};

$InnerClassInfo _Analyzer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Analyzer$TreeRewriter", "com.sun.tools.javac.comp.Analyzer", "TreeRewriter", 0},
	{"com.sun.tools.javac.comp.Analyzer$AnalyzerCopier", "com.sun.tools.javac.comp.Analyzer", "AnalyzerCopier", 0},
	{"com.sun.tools.javac.comp.Analyzer$RewritingContext", "com.sun.tools.javac.comp.Analyzer", "RewritingContext", 0},
	{"com.sun.tools.javac.comp.Analyzer$StatementScanner", "com.sun.tools.javac.comp.Analyzer", "StatementScanner", 0},
	{"com.sun.tools.javac.comp.Analyzer$DeferredAnalysisHelper", "com.sun.tools.javac.comp.Analyzer", "DeferredAnalysisHelper", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzerForEach", "com.sun.tools.javac.comp.Analyzer", "RedundantLocalVarTypeAnalyzerForEach", 0},
	{"com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzer", "com.sun.tools.javac.comp.Analyzer", "RedundantLocalVarTypeAnalyzer", 0},
	{"com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzerBase", "com.sun.tools.javac.comp.Analyzer", "RedundantLocalVarTypeAnalyzerBase", $ABSTRACT},
	{"com.sun.tools.javac.comp.Analyzer$RedundantTypeArgAnalyzer", "com.sun.tools.javac.comp.Analyzer", "RedundantTypeArgAnalyzer", 0},
	{"com.sun.tools.javac.comp.Analyzer$LambdaAnalyzer", "com.sun.tools.javac.comp.Analyzer", "LambdaAnalyzer", 0},
	{"com.sun.tools.javac.comp.Analyzer$DiamondInitializer", "com.sun.tools.javac.comp.Analyzer", "DiamondInitializer", 0},
	{"com.sun.tools.javac.comp.Analyzer$StatementAnalyzer", "com.sun.tools.javac.comp.Analyzer", "StatementAnalyzer", $ABSTRACT},
	{"com.sun.tools.javac.comp.Analyzer$AnalyzerMode", "com.sun.tools.javac.comp.Analyzer", "AnalyzerMode", $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.comp.Analyzer$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Analyzer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Analyzer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Analyzer",
	"java.lang.Object",
	nullptr,
	_Analyzer_FieldInfo_,
	_Analyzer_MethodInfo_,
	nullptr,
	nullptr,
	_Analyzer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Analyzer$TreeRewriter,com.sun.tools.javac.comp.Analyzer$AnalyzerCopier,com.sun.tools.javac.comp.Analyzer$RewritingContext,com.sun.tools.javac.comp.Analyzer$StatementScanner,com.sun.tools.javac.comp.Analyzer$DeferredAnalysisHelper,com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzerForEach,com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzer,com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzerBase,com.sun.tools.javac.comp.Analyzer$RedundantTypeArgAnalyzer,com.sun.tools.javac.comp.Analyzer$LambdaAnalyzer,com.sun.tools.javac.comp.Analyzer$DiamondInitializer,com.sun.tools.javac.comp.Analyzer$StatementAnalyzer,com.sun.tools.javac.comp.Analyzer$AnalyzerMode,com.sun.tools.javac.comp.Analyzer$2,com.sun.tools.javac.comp.Analyzer$1"
};

$Object* allocate$Analyzer($Class* clazz) {
	return $of($alloc(Analyzer));
}

$Context$Key* Analyzer::analyzerKey = nullptr;

Analyzer* Analyzer::instance($Context* context) {
	$init(Analyzer);
	$var(Analyzer, instance, $cast(Analyzer, $nc(context)->get(Analyzer::analyzerKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Analyzer, context));
	}
	return instance;
}

void Analyzer::init$($Context* context) {
	$useLocalCurrentObjectStackCache();
	$set(this, analyzers, $new($Analyzer$StatementAnalyzerArray, {
		static_cast<$Analyzer$StatementAnalyzer*>($$new($Analyzer$DiamondInitializer, this)),
		static_cast<$Analyzer$StatementAnalyzer*>($$new($Analyzer$LambdaAnalyzer, this)),
		static_cast<$Analyzer$StatementAnalyzer*>($$new($Analyzer$RedundantTypeArgAnalyzer, this)),
		static_cast<$Analyzer$StatementAnalyzer*>($$new($Analyzer$RedundantLocalVarTypeAnalyzer, this)),
		static_cast<$Analyzer$StatementAnalyzer*>($$new($Analyzer$RedundantLocalVarTypeAnalyzerForEach, this))
	}));
	$set(this, flushDeferredHelper, $new($Analyzer$1, this));
	$set(this, queueDeferredHelper, $new($Analyzer$2, this));
	$set(this, deferredAnalysisHelper, this->queueDeferredHelper);
	$nc(context)->put(Analyzer::analyzerKey, $of(this));
	$set(this, types, $Types::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, attr, $Attr::instance(context));
	$set(this, deferredAttr, $DeferredAttr::instance(context));
	$set(this, argumentAttr, $ArgumentAttr::instance(context));
	$set(this, make, $TreeMaker::instance(context));
	$set(this, copier, $new($Analyzer$AnalyzerCopier, this));
	$var($Options, options, $Options::instance(context));
	$var($String, findOpt, $nc(options)->get("find"_s));
	$Source* source = $Source::instance(context);
	$init($Source$Feature);
	this->allowDiamondWithAnonymousClassCreation = $Source$Feature::DIAMOND_WITH_ANONYMOUS_CLASS_CREATION->allowedInSource(source);
	$set(this, analyzerModes, $Analyzer$AnalyzerMode::getAnalyzerModes(findOpt, source));
}

$Env* Analyzer::copyEnvIfNeeded($JCTree* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = !$nc(this->analyzerModes)->isEmpty() && !$nc($nc(($cast($AttrContext, $nc(env)->info)))->attributionMode)->isSpeculative$;
	bool var$0 = var$1 && $TreeInfo::isStatement(tree);
	$init($JCTree$Tag);
	if (var$0 && !$nc(tree)->hasTag($JCTree$Tag::LABELLED)) {
		$var($Env, analyzeEnv, env->dup(env->tree, $($nc(($cast($AttrContext, env->info)))->dup($($nc($nc(($cast($AttrContext, env->info)))->scope)->dupUnshared($nc($nc(($cast($AttrContext, env->info)))->scope)->owner))))));
		$set($nc($cast($AttrContext, $nc(analyzeEnv)->info)), returnResult, $nc(($cast($AttrContext, analyzeEnv->info)))->returnResult != nullptr ? $new($Attr$ResultInfo, static_cast<$Attr*>($nc(this->attr)), $nc($nc(($cast($AttrContext, analyzeEnv->info)))->returnResult)->pkind, $nc($nc(($cast($AttrContext, analyzeEnv->info)))->returnResult)->pt) : ($Attr$ResultInfo*)nullptr);
		return analyzeEnv;
	} else {
		return nullptr;
	}
}

void Analyzer::analyzeIfNeeded($JCTree* tree, $Env* env) {
	if (env != nullptr) {
		$var($JCTree$JCStatement, stmt, $cast($JCTree$JCStatement, tree));
		analyze(stmt, env);
	}
}

void Analyzer::analyze($JCTree$JCStatement* statement, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Analyzer$StatementScanner, statementScanner, $new($Analyzer$StatementScanner, this, statement, env));
	statementScanner->scan();
	if (!$nc(statementScanner->rewritings)->isEmpty()) {
		{
			$var($Iterator, i$, $nc(statementScanner->rewritings)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Analyzer$RewritingContext, rewriting, $cast($Analyzer$RewritingContext, i$->next()));
				{
					$nc(this->deferredAnalysisHelper)->queue(rewriting);
				}
			}
		}
	}
}

void Analyzer::doAnalysis($Analyzer$RewritingContext* rewriting) {
	$useLocalCurrentObjectStackCache();
	$var($DiagnosticSource, prevSource, $nc(this->log)->currentSource());
	$var($ArgumentAttr$LocalCacheContext, localCacheContext, $nc(this->argumentAttr)->withLocalCacheContext());
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->log)->useSource($($nc($nc($nc(rewriting)->env)->toplevel)->getSourceFile()));
				$var($JCTree$JCStatement, treeToAnalyze, $cast($JCTree$JCStatement, $nc(rewriting)->originalTree));
				$var($JCTree, wrappedTree, nullptr);
				$init($Kinds$Kind);
				if ($nc($nc($nc(($cast($AttrContext, $nc(rewriting->env)->info)))->scope)->owner)->kind == $Kinds$Kind::TYP) {
					$assign(treeToAnalyze, $nc($($nc(this->make)->at($Position::NOPOS)))->Block($Flags::SYNTHETIC, $($List::of($cast($JCTree$JCStatement, rewriting->originalTree)))));
					$assign(wrappedTree, rewriting->originalTree);
				}
				$var($JCTree, var$1, static_cast<$JCTree*>(treeToAnalyze));
				$var($Env, var$2, rewriting->env);
				$var($Attr$ResultInfo, var$3, $nc(this->attr)->statInfo);
				$var($TreeCopier, var$4, static_cast<$TreeCopier*>($new($Analyzer$TreeRewriter, this, rewriting, wrappedTree)));
				$var($Supplier, var$5, static_cast<$Supplier*>($new(Analyzer$$Lambda$lambda$doAnalysis$0, rewriting)));
				$init($DeferredAttr$AttributionMode);
				$var($DeferredAttr$AttributionMode, var$6, $DeferredAttr$AttributionMode::ANALYZER);
				$nc(this->deferredAttr)->attribSpeculative(var$1, var$2, var$3, var$4, var$5, var$6, $($nc(this->argumentAttr)->withLocalCacheContext()));
				$nc(rewriting->analyzer)->process(rewriting->oldTree, rewriting->replacement, rewriting->erroneous);
			} catch ($Throwable& ex) {
				$var($String, var$9, $$str({"Analyzer error when processing: "_s, $nc(rewriting)->originalTree, ":"_s}));
				$var($String, var$8, $$concat(var$9, $(ex->toString())));
				$var($String, var$7, $$concat(var$8, "\n"));
				$Assert::error($$concat(var$7, $cast($String, $($nc($($nc($($Arrays::stream($(ex->getStackTrace()))))->map(static_cast<$Function*>($$new(Analyzer$$Lambda$lambda$doAnalysis$1$1)))))->collect($($Collectors::joining("\n"_s)))))));
			}
		} catch ($Throwable& var$10) {
			$assign(var$0, var$10);
		} /*finally*/ {
			$nc(this->log)->useSource($($nc(prevSource)->getFile()));
			$nc(localCacheContext)->leave();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Analyzer::flush($Env* flushEnv) {
	$nc(this->deferredAnalysisHelper)->flush(flushEnv);
}

$String* Analyzer::lambda$doAnalysis$1($StackTraceElement* se) {
	$init(Analyzer);
	return $nc(se)->toString();
}

$Log$DiagnosticHandler* Analyzer::lambda$doAnalysis$0($Analyzer$RewritingContext* rewriting) {
	$init(Analyzer);
	return $nc(rewriting)->diagHandler();
}

void clinit$Analyzer($Class* class$) {
	$assignStatic(Analyzer::analyzerKey, $new($Context$Key));
}

Analyzer::Analyzer() {
}

$Class* Analyzer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Analyzer$$Lambda$lambda$doAnalysis$0::classInfo$.name)) {
			return Analyzer$$Lambda$lambda$doAnalysis$0::load$(name, initialize);
		}
		if (name->equals(Analyzer$$Lambda$lambda$doAnalysis$1$1::classInfo$.name)) {
			return Analyzer$$Lambda$lambda$doAnalysis$1$1::load$(name, initialize);
		}
	}
	$loadClass(Analyzer, name, initialize, &_Analyzer_ClassInfo_, clinit$Analyzer, allocate$Analyzer);
	return class$;
}

$Class* Analyzer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com