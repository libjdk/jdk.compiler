#include <com/sun/tools/javac/comp/DeferredAttr.h>

#include <com/sun/source/tree/LambdaExpressionTree$BodyKind.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$Handler.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Annotate$Queues.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$LocalCacheContext.h>
#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/DeferredAttr$1.h>
#include <com/sun/tools/javac/comp/DeferredAttr$2.h>
#include <com/sun/tools/javac/comp/DeferredAttr$3.h>
#include <com/sun/tools/javac/comp/DeferredAttr$4.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttributionMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrDiagHandler.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredStuckPolicy.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Flow.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/comp/TypeEnvs.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log$DeferredDiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log$DiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef BOX
#undef CHECK
#undef EXPRESSION
#undef RETURN
#undef SPECULATIVE
#undef VARDEF

using $LambdaExpressionTree$BodyKind = ::com::sun::source::tree::LambdaExpressionTree$BodyKind;
using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $DeferredCompletionFailureHandler$Handler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$Handler;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$TypeMapping = ::com::sun::tools::javac::code::Types$TypeMapping;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Annotate$Queues = ::com::sun::tools::javac::comp::Annotate$Queues;
using $ArgumentAttr = ::com::sun::tools::javac::comp::ArgumentAttr;
using $ArgumentAttr$LocalCacheContext = ::com::sun::tools::javac::comp::ArgumentAttr$LocalCacheContext;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $Check = ::com::sun::tools::javac::comp::Check;
using $DeferredAttr$1 = ::com::sun::tools::javac::comp::DeferredAttr$1;
using $DeferredAttr$2 = ::com::sun::tools::javac::comp::DeferredAttr$2;
using $DeferredAttr$3 = ::com::sun::tools::javac::comp::DeferredAttr$3;
using $DeferredAttr$4 = ::com::sun::tools::javac::comp::DeferredAttr$4;
using $DeferredAttr$AttrMode = ::com::sun::tools::javac::comp::DeferredAttr$AttrMode;
using $DeferredAttr$AttributionMode = ::com::sun::tools::javac::comp::DeferredAttr$AttributionMode;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$DeferredAttrDiagHandler = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrDiagHandler;
using $DeferredAttr$DeferredStuckPolicy = ::com::sun::tools::javac::comp::DeferredAttr$DeferredStuckPolicy;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Flow = ::com::sun::tools::javac::comp::Flow;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $TypeEnvs = ::com::sun::tools::javac::comp::TypeEnvs;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeCopier = ::com::sun::tools::javac::tree::TreeCopier;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$DeferredDiagnosticHandler = ::com::sun::tools::javac::util::Log$DeferredDiagnosticHandler;
using $Log$DiagnosticHandler = ::com::sun::tools::javac::util::Log$DiagnosticHandler;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Collector = ::java::util::stream::Collector;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$0 : public $Predicate {
	$class(DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* s) override {
		 return DeferredAttr::lambda$attribSpeculativeLambda$0($cast($JCTree$JCStatement, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$0::*)()>(&DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$0::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$0::class$ = nullptr;

class DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$1$1 : public $Function {
	$class(DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* t) override {
		 return $of(DeferredAttr::lambda$attribSpeculativeLambda$1($cast($JCTree$JCStatement, t)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$1$1::*)()>(&DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$1$1::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$1$1::class$ = nullptr;

$FieldInfo _DeferredAttr_FieldInfo_[] = {
	{"deferredAttrKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/DeferredAttr;>;", $PROTECTED | $STATIC | $FINAL, $staticField(DeferredAttr, deferredAttrKey)},
	{"annotate", "Lcom/sun/tools/javac/comp/Annotate;", nullptr, $FINAL, $field(DeferredAttr, annotate)},
	{"attr", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL, $field(DeferredAttr, attr)},
	{"argumentAttr", "Lcom/sun/tools/javac/comp/ArgumentAttr;", nullptr, $FINAL, $field(DeferredAttr, argumentAttr)},
	{"chk", "Lcom/sun/tools/javac/comp/Check;", nullptr, $FINAL, $field(DeferredAttr, chk)},
	{"diags", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, $FINAL, $field(DeferredAttr, diags)},
	{"enter", "Lcom/sun/tools/javac/comp/Enter;", nullptr, $FINAL, $field(DeferredAttr, enter)},
	{"infer", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL, $field(DeferredAttr, infer)},
	{"rs", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL, $field(DeferredAttr, rs)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $FINAL, $field(DeferredAttr, log)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $FINAL, $field(DeferredAttr, syms)},
	{"make", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $FINAL, $field(DeferredAttr, make)},
	{"treeCopier", "Lcom/sun/tools/javac/tree/TreeCopier;", "Lcom/sun/tools/javac/tree/TreeCopier<Ljava/lang/Void;>;", $FINAL, $field(DeferredAttr, treeCopier)},
	{"deferredCopier", "Lcom/sun/tools/javac/code/Types$TypeMapping;", "Lcom/sun/tools/javac/code/Types$TypeMapping<Ljava/lang/Void;>;", $FINAL, $field(DeferredAttr, deferredCopier)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL, $field(DeferredAttr, types)},
	{"flow", "Lcom/sun/tools/javac/comp/Flow;", nullptr, $FINAL, $field(DeferredAttr, flow)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $FINAL, $field(DeferredAttr, names)},
	{"typeEnvs", "Lcom/sun/tools/javac/comp/TypeEnvs;", nullptr, $FINAL, $field(DeferredAttr, typeEnvs)},
	{"dcfh", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;", nullptr, $FINAL, $field(DeferredAttr, dcfh)},
	{"stuckTree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $FINAL, $field(DeferredAttr, stuckTree)},
	{"dummyStuckPolicy", "Lcom/sun/tools/javac/comp/DeferredAttr$DeferredStuckPolicy;", nullptr, 0, $field(DeferredAttr, dummyStuckPolicy)},
	{"emptyDeferredAttrContext", "Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;", nullptr, $FINAL, $field(DeferredAttr, emptyDeferredAttrContext)},
	{}
};

$MethodInfo _DeferredAttr_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(DeferredAttr::*)($Context*)>(&DeferredAttr::init$))},
	{"attribSpeculative", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/tree/JCTree;", 0},
	{"attribSpeculative", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/ArgumentAttr$LocalCacheContext;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/ArgumentAttr$LocalCacheContext;)Lcom/sun/tools/javac/tree/JCTree;", 0},
	{"attribSpeculative", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/tree/TreeCopier;Ljava/util/function/Supplier;Lcom/sun/tools/javac/comp/DeferredAttr$AttributionMode;Lcom/sun/tools/javac/comp/ArgumentAttr$LocalCacheContext;)Lcom/sun/tools/javac/tree/JCTree;", "<Z:Ljava/lang/Object;>(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/tree/TreeCopier<TZ;>;Ljava/util/function/Supplier<Lcom/sun/tools/javac/util/Log$DiagnosticHandler;>;Lcom/sun/tools/javac/comp/DeferredAttr$AttributionMode;Lcom/sun/tools/javac/comp/ArgumentAttr$LocalCacheContext;)Lcom/sun/tools/javac/tree/JCTree;", 0},
	{"attribSpeculative", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Ljava/util/function/Supplier;Lcom/sun/tools/javac/comp/DeferredAttr$AttributionMode;Lcom/sun/tools/javac/comp/ArgumentAttr$LocalCacheContext;)Lcom/sun/tools/javac/tree/JCTree;", "<Z:Ljava/lang/Object;>(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Ljava/util/function/Supplier<Lcom/sun/tools/javac/util/Log$DiagnosticHandler;>;Lcom/sun/tools/javac/comp/DeferredAttr$AttributionMode;Lcom/sun/tools/javac/comp/ArgumentAttr$LocalCacheContext;)Lcom/sun/tools/javac/tree/JCTree;", 0},
	{"attribSpeculativeLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/tree/JCTree$JCLambda;", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/tree/JCTree$JCLambda;", 0},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DeferredAttr*(*)($Context*)>(&DeferredAttr::instance))},
	{"lambda$attribSpeculativeLambda$0", "(Lcom/sun/tools/javac/tree/JCTree$JCStatement;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCTree$JCStatement*)>(&DeferredAttr::lambda$attribSpeculativeLambda$0))},
	{"lambda$attribSpeculativeLambda$1", "(Lcom/sun/tools/javac/tree/JCTree$JCStatement;)Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JCTree$JCVariableDecl*(*)($JCTree$JCStatement*)>(&DeferredAttr::lambda$attribSpeculativeLambda$1))},
	{}
};

$InnerClassInfo _DeferredAttr_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.comp.DeferredAttr$5", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.comp.DeferredAttr$AttributionMode", "com.sun.tools.javac.comp.DeferredAttr", "AttributionMode", $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.comp.DeferredAttr$OverloadStuckPolicy", "com.sun.tools.javac.comp.DeferredAttr", "OverloadStuckPolicy", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy", "com.sun.tools.javac.comp.DeferredAttr", "CheckStuckPolicy", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$SwitchExpressionScanner", "com.sun.tools.javac.comp.DeferredAttr", "SwitchExpressionScanner", $STATIC},
	{"com.sun.tools.javac.comp.DeferredAttr$LambdaReturnScanner", "com.sun.tools.javac.comp.DeferredAttr", "LambdaReturnScanner", $STATIC},
	{"com.sun.tools.javac.comp.DeferredAttr$PolyScanner", "com.sun.tools.javac.comp.DeferredAttr", "PolyScanner", $STATIC},
	{"com.sun.tools.javac.comp.DeferredAttr$FilterScanner", "com.sun.tools.javac.comp.DeferredAttr", "FilterScanner", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap", "com.sun.tools.javac.comp.DeferredAttr", "RecoveryDeferredTypeMap", $PUBLIC},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredTypeMap", "com.sun.tools.javac.comp.DeferredAttr", "DeferredTypeMap", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode", "com.sun.tools.javac.comp.DeferredAttr", "DeferredAttrNode", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext", "com.sun.tools.javac.comp.DeferredAttr", "DeferredAttrContext", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrDiagHandler", "com.sun.tools.javac.comp.DeferredAttr", "DeferredAttrDiagHandler", $STATIC},
	{"com.sun.tools.javac.comp.DeferredAttr$AttrMode", "com.sun.tools.javac.comp.DeferredAttr", "AttrMode", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredStuckPolicy", "com.sun.tools.javac.comp.DeferredAttr", "DeferredStuckPolicy", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredType", "com.sun.tools.javac.comp.DeferredAttr", "DeferredType", $PUBLIC},
	{"com.sun.tools.javac.comp.DeferredAttr$4", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.DeferredAttr$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.DeferredAttr$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.DeferredAttr$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DeferredAttr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr",
	"com.sun.tools.javac.tree.JCTree$Visitor",
	nullptr,
	_DeferredAttr_FieldInfo_,
	_DeferredAttr_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredAttr_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr$5,com.sun.tools.javac.comp.DeferredAttr$AttributionMode,com.sun.tools.javac.comp.DeferredAttr$OverloadStuckPolicy,com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy,com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy$2,com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy$1,com.sun.tools.javac.comp.DeferredAttr$SwitchExpressionScanner,com.sun.tools.javac.comp.DeferredAttr$LambdaReturnScanner,com.sun.tools.javac.comp.DeferredAttr$PolyScanner,com.sun.tools.javac.comp.DeferredAttr$FilterScanner,com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap,com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap$1,com.sun.tools.javac.comp.DeferredAttr$DeferredTypeMap,com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode,com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker,com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$StructuralStuckChecker,com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$1,com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext,com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext$StuckNode,com.sun.tools.javac.comp.DeferredAttr$DeferredAttrDiagHandler,com.sun.tools.javac.comp.DeferredAttr$DeferredAttrDiagHandler$PosScanner,com.sun.tools.javac.comp.DeferredAttr$AttrMode,com.sun.tools.javac.comp.DeferredAttr$DeferredStuckPolicy,com.sun.tools.javac.comp.DeferredAttr$DeferredType,com.sun.tools.javac.comp.DeferredAttr$DeferredType$SpeculativeCache,com.sun.tools.javac.comp.DeferredAttr$DeferredType$SpeculativeCache$Entry,com.sun.tools.javac.comp.DeferredAttr$4,com.sun.tools.javac.comp.DeferredAttr$3,com.sun.tools.javac.comp.DeferredAttr$2,com.sun.tools.javac.comp.DeferredAttr$2$1,com.sun.tools.javac.comp.DeferredAttr$1"
};

$Object* allocate$DeferredAttr($Class* clazz) {
	return $of($alloc(DeferredAttr));
}

$Context$Key* DeferredAttr::deferredAttrKey = nullptr;

DeferredAttr* DeferredAttr::instance($Context* context) {
	$init(DeferredAttr);
	$var(DeferredAttr, instance, $cast(DeferredAttr, $nc(context)->get(DeferredAttr::deferredAttrKey)));
	if (instance == nullptr) {
		$assign(instance, $new(DeferredAttr, context));
	}
	return instance;
}

void DeferredAttr::init$($Context* context) {
	$JCTree$Visitor::init$();
	$set(this, dummyStuckPolicy, $new($DeferredAttr$4, this));
	$nc(context)->put(DeferredAttr::deferredAttrKey, $of(this));
	$set(this, annotate, $Annotate::instance(context));
	$set(this, attr, $Attr::instance(context));
	$set(this, argumentAttr, $ArgumentAttr::instance(context));
	$set(this, chk, $Check::instance(context));
	$set(this, diags, $JCDiagnostic$Factory::instance(context));
	$set(this, enter, $Enter::instance(context));
	$set(this, infer, $Infer::instance(context));
	$set(this, rs, $Resolve::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, make, $TreeMaker::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, flow, $Flow::instance(context));
	$set(this, names, $Names::instance(context));
	$init($Type);
	$set(this, stuckTree, $nc($($nc(this->make)->Ident($nc(this->names)->empty)))->setType($Type::stuckType));
	$set(this, typeEnvs, $TypeEnvs::instance(context));
	$set(this, dcfh, $DeferredCompletionFailureHandler::instance(context));
	$init($DeferredAttr$AttrMode);
	$init($Resolve$MethodResolutionPhase);
	$set(this, emptyDeferredAttrContext, $new($DeferredAttr$1, this, $DeferredAttr$AttrMode::CHECK, nullptr, $Resolve$MethodResolutionPhase::BOX, $nc(this->infer)->emptyContext, nullptr, nullptr));
	$set(this, treeCopier, $new($DeferredAttr$2, this, this->make));
	$set(this, deferredCopier, $new($DeferredAttr$3, this));
}

$JCTree$JCLambda* DeferredAttr::attribSpeculativeLambda($JCTree$JCLambda* that, $Env* env, $Attr$ResultInfo* resultInfo) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, stats, $new($ListBuffer));
	stats->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->params)));
	$init($LambdaExpressionTree$BodyKind);
	if ($nc(that)->getBodyKind() == $LambdaExpressionTree$BodyKind::EXPRESSION) {
		stats->add($($nc(this->make)->Return($cast($JCTree$JCExpression, that->body))));
	} else {
		stats->add($cast($JCTree$JCBlock, that->body));
	}
	$var($JCTree$JCBlock, lambdaBlock, $nc($($nc(this->make)->at($nc(that)->pos$)))->Block(0, $(stats->toList())));
	$var($Env, localEnv, $nc(this->attr)->lambdaEnv(that, env));
	{
		$var($Throwable, var$0, nullptr);
		$var($JCTree$JCLambda, var$2, nullptr);
		bool return$1 = false;
		try {
			$set($nc($cast($AttrContext, $nc(localEnv)->info)), returnResult, resultInfo);
			$var($JCTree$JCBlock, speculativeTree, $cast($JCTree$JCBlock, attribSpeculative(lambdaBlock, localEnv, resultInfo)));
			$var($List, args, $cast($List, $nc($($nc($($nc($($nc($($cast($List, $nc(speculativeTree)->getStatements())))->stream()))->filter(static_cast<$Predicate*>($$new(DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$0)))))->map(static_cast<$Function*>($$new(DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$1$1)))))->collect($($List::collector()))));
			$var($JCTree, lambdaBody, $cast($JCTree, $nc($($cast($List, speculativeTree->getStatements())))->last()));
			$init($JCTree$Tag);
			if ($nc(lambdaBody)->hasTag($JCTree$Tag::RETURN)) {
				$assign(lambdaBody, $nc(($cast($JCTree$JCReturn, lambdaBody)))->expr);
			}
			$var($JCTree$JCLambda, speculativeLambda, $nc(this->make)->Lambda(args, lambdaBody));
			$nc(this->attr)->preFlow(speculativeLambda);
			$nc(this->flow)->analyzeLambda(env, speculativeLambda, this->make, false);
			$assign(var$2, speculativeLambda);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc($nc(($cast($AttrContext, $nc(localEnv)->info)))->scope)->leave();
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

$JCTree* DeferredAttr::attribSpeculative($JCTree* tree, $Env* env, $Attr$ResultInfo* resultInfo) {
	$init($DeferredAttr$AttributionMode);
	return attribSpeculative(tree, env, resultInfo, this->treeCopier, nullptr, $DeferredAttr$AttributionMode::SPECULATIVE, nullptr);
}

$JCTree* DeferredAttr::attribSpeculative($JCTree* tree, $Env* env, $Attr$ResultInfo* resultInfo, $ArgumentAttr$LocalCacheContext* localCache) {
	$init($DeferredAttr$AttributionMode);
	return attribSpeculative(tree, env, resultInfo, this->treeCopier, nullptr, $DeferredAttr$AttributionMode::SPECULATIVE, localCache);
}

$JCTree* DeferredAttr::attribSpeculative($JCTree* tree, $Env* env, $Attr$ResultInfo* resultInfo, $TreeCopier* deferredCopier, $Supplier* diagHandlerCreator, $DeferredAttr$AttributionMode* attributionMode, $ArgumentAttr$LocalCacheContext* localCache) {
	$var($JCTree, newTree, $nc(deferredCopier)->copy(tree));
	return attribSpeculative(newTree, env, resultInfo, diagHandlerCreator, attributionMode, localCache);
}

$JCTree* DeferredAttr::attribSpeculative($JCTree* tree, $Env* env, $Attr$ResultInfo* resultInfo, $Supplier* diagHandlerCreator, $DeferredAttr$AttributionMode* attributionMode, $ArgumentAttr$LocalCacheContext* localCache) {
	$useLocalCurrentObjectStackCache();
	$var($Env, speculativeEnv, $nc(env)->dup(tree, $($nc(($cast($AttrContext, env->info)))->dup($($nc($nc(($cast($AttrContext, env->info)))->scope)->dupUnshared($nc($nc(($cast($AttrContext, env->info)))->scope)->owner))))));
	$set($nc($cast($AttrContext, $nc(speculativeEnv)->info)), attributionMode, attributionMode);
	$var($Log$DiagnosticHandler, deferredDiagnosticHandler, diagHandlerCreator != nullptr ? $cast($Log$DiagnosticHandler, $nc(diagHandlerCreator)->get()) : static_cast<$Log$DiagnosticHandler*>($new($DeferredAttr$DeferredAttrDiagHandler, this->log, tree)));
	$var($DeferredCompletionFailureHandler$Handler, prevCFHandler, $nc(this->dcfh)->setHandler($nc(this->dcfh)->speculativeCodeHandler));
	$var($Annotate$Queues, prevQueues, $nc(this->annotate)->setQueues($$new($Annotate$Queues)));
	int32_t nwarnings = $nc(this->log)->nwarnings;
	$nc(this->log)->nwarnings = 0;
	{
		$var($Throwable, var$0, nullptr);
		$var($JCTree, var$2, nullptr);
		bool return$1 = false;
		try {
			$nc(this->attr)->attribTree(tree, speculativeEnv, resultInfo);
			$assign(var$2, tree);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->annotate)->setQueues(prevQueues);
			$nc(this->dcfh)->setHandler(prevCFHandler);
			$nc(this->log)->nwarnings += nwarnings;
			$nc(this->enter)->unenter(env->toplevel, tree);
			$nc(this->log)->popDiagnosticHandler(deferredDiagnosticHandler);
			if (localCache != nullptr) {
				localCache->leave();
			}
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

$JCTree$JCVariableDecl* DeferredAttr::lambda$attribSpeculativeLambda$1($JCTree$JCStatement* t) {
	$init(DeferredAttr);
	return $cast($JCTree$JCVariableDecl, t);
}

bool DeferredAttr::lambda$attribSpeculativeLambda$0($JCTree$JCStatement* s) {
	$init(DeferredAttr);
	$init($JCTree$Tag);
	return $nc(s)->hasTag($JCTree$Tag::VARDEF);
}

void clinit$DeferredAttr($Class* class$) {
	$assignStatic(DeferredAttr::deferredAttrKey, $new($Context$Key));
}

DeferredAttr::DeferredAttr() {
}

$Class* DeferredAttr::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$0::classInfo$.name)) {
			return DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$0::load$(name, initialize);
		}
		if (name->equals(DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$1$1::classInfo$.name)) {
			return DeferredAttr$$Lambda$lambda$attribSpeculativeLambda$1$1::load$(name, initialize);
		}
	}
	$loadClass(DeferredAttr, name, initialize, &_DeferredAttr_ClassInfo_, clinit$DeferredAttr, allocate$DeferredAttr);
	return class$;
}

$Class* DeferredAttr::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com