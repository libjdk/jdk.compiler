#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$Round.h>

#include <com/sun/source/util/TaskEvent$Kind.h>
#include <com/sun/source/util/TaskEvent.h>
#include <com/sun/tools/javac/api/MultiTaskListener.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Modules.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/model/JavacElements.h>
#include <com/sun/tools/javac/processing/JavacFiler.h>
#include <com/sun/tools/javac/processing/JavacMessager.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$2.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$ComputeAnnotationSet.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$DiscoveredProcessors.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <com/sun/tools/javac/processing/JavacRoundEnvironment.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Convert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log$DeferredDiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log$DiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Queue.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <javax/annotation/processing/RoundEnvironment.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/util/Elements.h>
#include <javax/tools/Diagnostic$Kind.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef ACCEPT_ALL
#undef ACCEPT_NON_RECOVERABLE
#undef ANNOTATION_PROCESSING_ROUND
#undef API
#undef CLASS
#undef ERR
#undef ERROR
#undef PCK
#undef RECOVERABLE

using $TaskEvent = ::com::sun::source::util::TaskEvent;
using $TaskEvent$Kind = ::com::sun::source::util::TaskEvent$Kind;
using $MultiTaskListener = ::com::sun::tools::javac::api::MultiTaskListener;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Modules = ::com::sun::tools::javac::comp::Modules;
using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $JavacElements = ::com::sun::tools::javac::model::JavacElements;
using $JavacFiler = ::com::sun::tools::javac::processing::JavacFiler;
using $JavacMessager = ::com::sun::tools::javac::processing::JavacMessager;
using $JavacProcessingEnvironment = ::com::sun::tools::javac::processing::JavacProcessingEnvironment;
using $JavacProcessingEnvironment$2 = ::com::sun::tools::javac::processing::JavacProcessingEnvironment$2;
using $JavacProcessingEnvironment$ComputeAnnotationSet = ::com::sun::tools::javac::processing::JavacProcessingEnvironment$ComputeAnnotationSet;
using $JavacProcessingEnvironment$DiscoveredProcessors = ::com::sun::tools::javac::processing::JavacProcessingEnvironment$DiscoveredProcessors;
using $JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator = ::com::sun::tools::javac::processing::JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator;
using $JavacRoundEnvironment = ::com::sun::tools::javac::processing::JavacRoundEnvironment;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Convert = ::com::sun::tools::javac::util::Convert;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$DeferredDiagnosticHandler = ::com::sun::tools::javac::util::Log$DeferredDiagnosticHandler;
using $Log$DiagnosticHandler = ::com::sun::tools::javac::util::Log$DiagnosticHandler;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Queue = ::java::util::Queue;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $RoundEnvironment = ::javax::annotation::processing::RoundEnvironment;
using $Element = ::javax::lang::model::element::Element;
using $Elements = ::javax::lang::model::util::Elements;
using $Diagnostic$Kind = ::javax::tools::Diagnostic$Kind;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class JavacProcessingEnvironment$Round$$Lambda$lambda$new$1 : public $Predicate {
	$class(JavacProcessingEnvironment$Round$$Lambda$lambda$new$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* d) override {
		 return JavacProcessingEnvironment$Round::lambda$new$1($cast($JCDiagnostic, d));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacProcessingEnvironment$Round$$Lambda$lambda$new$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacProcessingEnvironment$Round$$Lambda$lambda$new$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacProcessingEnvironment$Round$$Lambda$lambda$new$1::*)()>(&JavacProcessingEnvironment$Round$$Lambda$lambda$new$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacProcessingEnvironment$Round$$Lambda$lambda$new$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment$Round$$Lambda$lambda$new$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* JavacProcessingEnvironment$Round$$Lambda$lambda$new$1::load$($String* name, bool initialize) {
	$loadClass(JavacProcessingEnvironment$Round$$Lambda$lambda$new$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacProcessingEnvironment$Round$$Lambda$lambda$new$1::class$ = nullptr;

class JavacProcessingEnvironment$Round$$Lambda$lambda$new$2$1 : public $Predicate {
	$class(JavacProcessingEnvironment$Round$$Lambda$lambda$new$2$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* d) override {
		 return JavacProcessingEnvironment$Round::lambda$new$2($cast($JCDiagnostic, d));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacProcessingEnvironment$Round$$Lambda$lambda$new$2$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacProcessingEnvironment$Round$$Lambda$lambda$new$2$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacProcessingEnvironment$Round$$Lambda$lambda$new$2$1::*)()>(&JavacProcessingEnvironment$Round$$Lambda$lambda$new$2$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacProcessingEnvironment$Round$$Lambda$lambda$new$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment$Round$$Lambda$lambda$new$2$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* JavacProcessingEnvironment$Round$$Lambda$lambda$new$2$1::load$($String* name, bool initialize) {
	$loadClass(JavacProcessingEnvironment$Round$$Lambda$lambda$new$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacProcessingEnvironment$Round$$Lambda$lambda$new$2$1::class$ = nullptr;

class JavacProcessingEnvironment$Round$$Lambda$lambda$new$0$2 : public $Function {
	$class(JavacProcessingEnvironment$Round$$Lambda$lambda$new$0$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* m) override {
		 return $of(JavacProcessingEnvironment$Round::lambda$new$0($cast($Symbol$ModuleSymbol, m)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacProcessingEnvironment$Round$$Lambda$lambda$new$0$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacProcessingEnvironment$Round$$Lambda$lambda$new$0$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacProcessingEnvironment$Round$$Lambda$lambda$new$0$2::*)()>(&JavacProcessingEnvironment$Round$$Lambda$lambda$new$0$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacProcessingEnvironment$Round$$Lambda$lambda$new$0$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment$Round$$Lambda$lambda$new$0$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavacProcessingEnvironment$Round$$Lambda$lambda$new$0$2::load$($String* name, bool initialize) {
	$loadClass(JavacProcessingEnvironment$Round$$Lambda$lambda$new$0$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacProcessingEnvironment$Round$$Lambda$lambda$new$0$2::class$ = nullptr;

$FieldInfo _JavacProcessingEnvironment$Round_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;", nullptr, $FINAL | $SYNTHETIC, $field(JavacProcessingEnvironment$Round, this$0)},
	{"number", "I", nullptr, $FINAL, $field(JavacProcessingEnvironment$Round, number)},
	{"deferredDiagnosticHandler", "Lcom/sun/tools/javac/util/Log$DeferredDiagnosticHandler;", nullptr, $FINAL, $field(JavacProcessingEnvironment$Round, deferredDiagnosticHandler)},
	{"roots", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;", 0, $field(JavacProcessingEnvironment$Round, roots)},
	{"treesToClean", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;", 0, $field(JavacProcessingEnvironment$Round, treesToClean)},
	{"genClassFiles", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Map<Ljava/lang/String;Ljavax/tools/JavaFileObject;>;>;", 0, $field(JavacProcessingEnvironment$Round, genClassFiles)},
	{"annotationsPresent", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;", 0, $field(JavacProcessingEnvironment$Round, annotationsPresent)},
	{"topLevelClasses", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;", 0, $field(JavacProcessingEnvironment$Round, topLevelClasses)},
	{"packageInfoFiles", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$PackageSymbol;>;", 0, $field(JavacProcessingEnvironment$Round, packageInfoFiles)},
	{"moduleInfoFiles", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", 0, $field(JavacProcessingEnvironment$Round, moduleInfoFiles)},
	{"ACCEPT_NON_RECOVERABLE", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PRIVATE | $FINAL, $field(JavacProcessingEnvironment$Round, ACCEPT_NON_RECOVERABLE)},
	{"ACCEPT_ALL", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PRIVATE | $FINAL, $field(JavacProcessingEnvironment$Round, ACCEPT_ALL)},
	{}
};

$MethodInfo _JavacProcessingEnvironment$Round_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;ILjava/util/Set;Lcom/sun/tools/javac/util/Log$DeferredDiagnosticHandler;)V", "(ILjava/util/Set<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;Lcom/sun/tools/javac/util/Log$DeferredDiagnosticHandler;)V", $PRIVATE, $method(static_cast<void(JavacProcessingEnvironment$Round::*)($JavacProcessingEnvironment*,int32_t,$Set*,$Log$DeferredDiagnosticHandler*)>(&JavacProcessingEnvironment$Round::init$))},
	{"<init>", "(Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Ljava/util/Set;Lcom/sun/tools/javac/util/Log$DeferredDiagnosticHandler;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;Ljava/util/Set<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;Lcom/sun/tools/javac/util/Log$DeferredDiagnosticHandler;)V", 0, $method(static_cast<void(JavacProcessingEnvironment$Round::*)($JavacProcessingEnvironment*,$List*,$List*,$Set*,$Log$DeferredDiagnosticHandler*)>(&JavacProcessingEnvironment$Round::init$))},
	{"<init>", "(Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;Lcom/sun/tools/javac/processing/JavacProcessingEnvironment$Round;Ljava/util/Set;Ljava/util/Map;)V", "(Lcom/sun/tools/javac/processing/JavacProcessingEnvironment$Round;Ljava/util/Set<Ljavax/tools/JavaFileObject;>;Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Map<Ljava/lang/String;Ljavax/tools/JavaFileObject;>;>;)V", $PRIVATE, $method(static_cast<void(JavacProcessingEnvironment$Round::*)($JavacProcessingEnvironment*,JavacProcessingEnvironment$Round*,$Set*,$Map*)>(&JavacProcessingEnvironment$Round::init$))},
	{"enterClassFiles", "(Ljava/util/Map;)Lcom/sun/tools/javac/util/List;", "(Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Map<Ljava/lang/String;Ljavax/tools/JavaFileObject;>;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;", $PRIVATE, $method(static_cast<$List*(JavacProcessingEnvironment$Round::*)($Map*)>(&JavacProcessingEnvironment$Round::enterClassFiles))},
	{"enterTrees", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;)V", $PRIVATE, $method(static_cast<void(JavacProcessingEnvironment$Round::*)($List*)>(&JavacProcessingEnvironment$Round::enterTrees))},
	{"errorCount", "()I", nullptr, 0},
	{"finalCompiler", "()V", nullptr, 0},
	{"findAnnotationsPresent", "()V", nullptr, 0},
	{"lambda$new$0", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Ljava/util/Map;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Map*(*)($Symbol$ModuleSymbol*)>(&JavacProcessingEnvironment$Round::lambda$new$0))},
	{"lambda$new$1", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCDiagnostic*)>(&JavacProcessingEnvironment$Round::lambda$new$1))},
	{"lambda$new$2", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCDiagnostic*)>(&JavacProcessingEnvironment$Round::lambda$new$2))},
	{"newRound", "()V", nullptr, $PRIVATE, $method(static_cast<void(JavacProcessingEnvironment$Round::*)()>(&JavacProcessingEnvironment$Round::newRound))},
	{"next", "(Ljava/util/Set;Ljava/util/Map;)Lcom/sun/tools/javac/processing/JavacProcessingEnvironment$Round;", "(Ljava/util/Set<Ljavax/tools/JavaFileObject;>;Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Map<Ljava/lang/String;Ljavax/tools/JavaFileObject;>;>;)Lcom/sun/tools/javac/processing/JavacProcessingEnvironment$Round;", 0},
	{"printRoundInfo", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(JavacProcessingEnvironment$Round::*)(bool)>(&JavacProcessingEnvironment$Round::printRoundInfo))},
	{"run", "(ZZ)V", nullptr, 0},
	{"showDiagnostics", "(Z)V", nullptr, 0},
	{"unrecoverableError", "()Z", nullptr, 0},
	{"warningCount", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _JavacProcessingEnvironment$Round_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$Round", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "Round", 0},
	{}
};

$ClassInfo _JavacProcessingEnvironment$Round_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment$Round",
	"java.lang.Object",
	nullptr,
	_JavacProcessingEnvironment$Round_FieldInfo_,
	_JavacProcessingEnvironment$Round_MethodInfo_,
	nullptr,
	nullptr,
	_JavacProcessingEnvironment$Round_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment"
};

$Object* allocate$JavacProcessingEnvironment$Round($Class* clazz) {
	return $of($alloc(JavacProcessingEnvironment$Round));
}

void JavacProcessingEnvironment$Round::init$($JavacProcessingEnvironment* this$0, int32_t number, $Set* treesToClean, $Log$DeferredDiagnosticHandler* deferredDiagnosticHandler) {
	$set(this, this$0, this$0);
	$set(this, ACCEPT_NON_RECOVERABLE, static_cast<$Predicate*>($new(JavacProcessingEnvironment$Round$$Lambda$lambda$new$1)));
	$set(this, ACCEPT_ALL, static_cast<$Predicate*>($new(JavacProcessingEnvironment$Round$$Lambda$lambda$new$2$1)));
	this->number = number;
	if (number == 1) {
		$Assert::checkNonNull(deferredDiagnosticHandler);
		$set(this, deferredDiagnosticHandler, deferredDiagnosticHandler);
	} else {
		$set(this, deferredDiagnosticHandler, $new($Log$DeferredDiagnosticHandler, this$0->log));
		$nc(this$0->compiler)->setDeferredDiagnosticHandler(this->deferredDiagnosticHandler);
	}
	$set(this, topLevelClasses, $List::nil());
	$set(this, packageInfoFiles, $List::nil());
	$set(this, moduleInfoFiles, $List::nil());
	$set(this, treesToClean, treesToClean);
}

void JavacProcessingEnvironment$Round::init$($JavacProcessingEnvironment* this$0, $List* roots, $List* classSymbols, $Set* treesToClean, $Log$DeferredDiagnosticHandler* deferredDiagnosticHandler) {
	$useLocalCurrentObjectStackCache();
	JavacProcessingEnvironment$Round::init$(this$0, 1, treesToClean, deferredDiagnosticHandler);
	$set(this, roots, roots);
	$set(this, genClassFiles, $new($HashMap));
	$set(this, topLevelClasses, $nc($(this$0->getTopLevelClasses(roots)))->prependList($($nc(classSymbols)->reverse())));
	$set(this, packageInfoFiles, this$0->getPackageInfoFiles(roots));
	$set(this, moduleInfoFiles, this$0->getModuleInfoFiles(roots));
	findAnnotationsPresent();
}

void JavacProcessingEnvironment$Round::init$($JavacProcessingEnvironment* this$0, JavacProcessingEnvironment$Round* prev, $Set* newSourceFiles, $Map* newClassFiles) {
	$useLocalCurrentObjectStackCache();
	JavacProcessingEnvironment$Round::init$(this$0, $nc(prev)->number + 1, prev->treesToClean, ($Log$DeferredDiagnosticHandler*)nullptr);
	$nc(prev)->newRound();
	$set(this, genClassFiles, prev->genClassFiles);
	$var($List, parsedFiles, $nc(this$0->compiler)->parseFiles(newSourceFiles, true));
	$set(this, roots, $nc(prev->roots)->appendList(parsedFiles));
	if (unrecoverableError()) {
		$nc(this$0->compiler)->initModules($($List::nil()));
		return;
	}
	$set(this, roots, $nc(this$0->compiler)->initModules(this->roots));
	enterClassFiles(this->genClassFiles);
	$var($List, newClasses, enterClassFiles(newClassFiles));
	{
		$var($Iterator, i$, $nc($($nc(newClassFiles)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, moduleAndClassFiles, $cast($Map$Entry, i$->next()));
			{
				$var($Object, var$0, $cast($Symbol$ModuleSymbol, $nc(moduleAndClassFiles)->getKey()));
				$nc(($cast($Map, $($nc(this->genClassFiles)->computeIfAbsent(var$0, static_cast<$Function*>($$new(JavacProcessingEnvironment$Round$$Lambda$lambda$new$0$2)))))))->putAll($cast($Map, $($nc(moduleAndClassFiles)->getValue())));
			}
		}
	}
	enterTrees(this->roots);
	if (unrecoverableError()) {
		return;
	}
	$var($List, var$1, this$0->getTopLevelClasses(parsedFiles));
	$set(this, topLevelClasses, $JavacProcessingEnvironment::join(var$1, $(this$0->getTopLevelClassesFromClasses(newClasses))));
	$var($List, var$2, this$0->getPackageInfoFiles(parsedFiles));
	$set(this, packageInfoFiles, $JavacProcessingEnvironment::join(var$2, $(this$0->getPackageInfoFilesFromClasses(newClasses))));
	$set(this, moduleInfoFiles, $List::nil());
	findAnnotationsPresent();
}

JavacProcessingEnvironment$Round* JavacProcessingEnvironment$Round::next($Set* newSourceFiles, $Map* newClassFiles) {
	return $new(JavacProcessingEnvironment$Round, this->this$0, this, newSourceFiles, newClassFiles);
}

void JavacProcessingEnvironment$Round::finalCompiler() {
	newRound();
}

int32_t JavacProcessingEnvironment$Round::errorCount() {
	return $nc(this->this$0->compiler)->errorCount();
}

int32_t JavacProcessingEnvironment$Round::warningCount() {
	return $nc(this->this$0->compiler)->warningCount();
}

bool JavacProcessingEnvironment$Round::unrecoverableError() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->this$0->messager)->errorRaised()) {
		return true;
	}
	{
		$var($Iterator, i$, $nc($($nc(this->deferredDiagnosticHandler)->getDiagnostics()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCDiagnostic, d, $cast($JCDiagnostic, i$->next()));
			{
				$init($JavacProcessingEnvironment$2);
				switch ($nc($JavacProcessingEnvironment$2::$SwitchMap$javax$tools$Diagnostic$Kind)->get($nc(($($nc(d)->getKind())))->ordinal())) {
				case 1:
					{
						if (this->this$0->werror) {
							return true;
						}
						break;
					}
				case 2:
					{
						$init($JCDiagnostic$DiagnosticFlag);
						if (this->this$0->fatalErrors || !d->isFlagSet($JCDiagnostic$DiagnosticFlag::RECOVERABLE)) {
							return true;
						}
						break;
					}
				}
			}
		}
	}
	return false;
}

void JavacProcessingEnvironment$Round::findAnnotationsPresent() {
	$useLocalCurrentObjectStackCache();
	$var($JavacProcessingEnvironment$ComputeAnnotationSet, annotationComputer, $new($JavacProcessingEnvironment$ComputeAnnotationSet, this->this$0->elementUtils));
	$set(this, annotationsPresent, $new($LinkedHashSet));
	{
		$var($Iterator, i$, $nc(this->topLevelClasses)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$ClassSymbol, classSym, $cast($Symbol$ClassSymbol, i$->next()));
			annotationComputer->scan(static_cast<$Element*>(static_cast<$Symbol*>(static_cast<$Symbol$TypeSymbol*>(classSym))), this->annotationsPresent);
		}
	}
	{
		$var($Iterator, i$, $nc(this->packageInfoFiles)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$PackageSymbol, pkgSym, $cast($Symbol$PackageSymbol, i$->next()));
			annotationComputer->scan(static_cast<$Element*>(static_cast<$Symbol*>(static_cast<$Symbol$TypeSymbol*>(pkgSym))), this->annotationsPresent);
		}
	}
	{
		$var($Iterator, i$, $nc(this->moduleInfoFiles)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$ModuleSymbol, mdlSym, $cast($Symbol$ModuleSymbol, i$->next()));
			annotationComputer->scan(static_cast<$Element*>(static_cast<$Symbol*>(static_cast<$Symbol$TypeSymbol*>(mdlSym))), this->annotationsPresent);
		}
	}
}

$List* JavacProcessingEnvironment$Round::enterClassFiles($Map* modulesAndClassFiles) {
	$useLocalCurrentObjectStackCache();
	$var($List, list, $List::nil());
	{
		$var($Iterator, i$, $nc($($nc(modulesAndClassFiles)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, moduleAndClassFiles, $cast($Map$Entry, i$->next()));
			{
				{
					$var($Iterator, i$, $nc($($nc(($cast($Map, $($nc(moduleAndClassFiles)->getValue()))))->entrySet()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
						{
							$var($Name, name, $nc(this->this$0->names)->fromString($cast($String, $($nc(entry)->getKey()))));
							$var($JavaFileObject, file, $cast($JavaFileObject, $nc(entry)->getValue()));
							$init($JavaFileObject$Kind);
							if ($nc(file)->getKind() != $JavaFileObject$Kind::CLASS) {
								$throwNew($AssertionError, $of(file));
							}
							$var($Symbol$ClassSymbol, cs, nullptr);
							if (this->this$0->isPkgInfo(file, $JavaFileObject$Kind::CLASS)) {
								$var($Name, packageName, $Convert::packagePart(name));
								$var($Symbol$PackageSymbol, p, $nc(this->this$0->symtab)->enterPackage($cast($Symbol$ModuleSymbol, $(moduleAndClassFiles->getKey())), packageName));
								if ($nc(p)->package_info == nullptr) {
									$var($Symbol$ModuleSymbol, var$0, $cast($Symbol$ModuleSymbol, moduleAndClassFiles->getKey()));
									$set(p, package_info, $nc(this->this$0->symtab)->enterClass(var$0, $($Convert::shortName(name)), p));
								}
								$assign(cs, $nc(p)->package_info);
								$nc(cs)->reset();
								if (cs->classfile == nullptr) {
									$set(cs, classfile, file);
								}
								$set(cs, completer, this->this$0->initialCompleter);
							} else {
								$assign(cs, $nc(this->this$0->symtab)->enterClass($cast($Symbol$ModuleSymbol, $(moduleAndClassFiles->getKey())), name));
								$nc(cs)->reset();
								$set(cs, classfile, file);
								$set(cs, completer, this->this$0->initialCompleter);
								$init($Kinds$Kind);
								if ($nc(cs->owner)->kind == $Kinds$Kind::PCK) {
									$nc($($nc(cs->owner)->members()))->enter(cs);
								}
							}
							$assign(list, $nc(list)->prepend(cs));
						}
					}
				}
			}
		}
	}
	return $nc(list)->reverse();
}

void JavacProcessingEnvironment$Round::enterTrees($List* roots) {
	$nc(this->this$0->compiler)->enterTrees(roots);
}

void JavacProcessingEnvironment$Round::run(bool lastRound, bool errorStatus) {
	$useLocalCurrentObjectStackCache();
	printRoundInfo(lastRound);
	if (!$nc(this->this$0->taskListener)->isEmpty()) {
		$init($TaskEvent$Kind);
		$nc(this->this$0->taskListener)->started($$new($TaskEvent, $TaskEvent$Kind::ANNOTATION_PROCESSING_ROUND));
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				if (lastRound) {
					$nc(this->this$0->filer)->setLastRound(true);
					$var($Set, emptyRootElements, $Collections::emptySet());
					$var($RoundEnvironment, renv, $new($JavacRoundEnvironment, true, errorStatus, emptyRootElements, this->this$0));
					$nc($($cast($JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator, $nc(this->this$0->discoveredProcs)->iterator())))->runContributingProcs(renv);
				} else {
					this->this$0->discoverAndRunProcs(this->annotationsPresent, this->topLevelClasses, this->packageInfoFiles, this->moduleInfoFiles);
				}
			} catch ($Throwable& t) {
				$nc(this->deferredDiagnosticHandler)->reportDeferredDiagnostics();
				$nc(this->this$0->log)->popDiagnosticHandler(this->deferredDiagnosticHandler);
				$nc(this->this$0->compiler)->setDeferredDiagnosticHandler(nullptr);
				$throw(t);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (!$nc(this->this$0->taskListener)->isEmpty()) {
				$init($TaskEvent$Kind);
				$nc(this->this$0->taskListener)->finished($$new($TaskEvent, $TaskEvent$Kind::ANNOTATION_PROCESSING_ROUND));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JavacProcessingEnvironment$Round::showDiagnostics(bool showAll) {
	$nc(this->deferredDiagnosticHandler)->reportDeferredDiagnostics(showAll ? this->ACCEPT_ALL : this->ACCEPT_NON_RECOVERABLE);
	$nc(this->this$0->log)->popDiagnosticHandler(this->deferredDiagnosticHandler);
	$nc(this->this$0->compiler)->setDeferredDiagnosticHandler(nullptr);
}

void JavacProcessingEnvironment$Round::printRoundInfo(bool lastRound) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->printRounds || this->this$0->verbose) {
		$var($List, tlc, lastRound ? $List::nil() : this->topLevelClasses);
		$var($Set, ap, lastRound ? $Collections::emptySet() : this->annotationsPresent);
		$nc(this->this$0->log)->printLines("x.print.rounds"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(this->number))),
			$of($$str({"{"_s, $($nc(tlc)->toString(", "_s)), "}"_s})),
			$of(ap),
			$($of($Boolean::valueOf(lastRound)))
		}));
	}
}

void JavacProcessingEnvironment$Round::newRound() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(this->this$0->enter)->getEnvs()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Env, env, $cast($Env, i$->next()));
			{
				$nc(this->treesToClean)->add($nc(env)->toplevel);
			}
		}
	}
	{
		$var($Iterator, i$, $nc(this->treesToClean)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCCompilationUnit, node, $cast($JCTree$JCCompilationUnit, i$->next()));
			{
				$nc(this->this$0->treeCleaner)->scan(static_cast<$JCTree*>(node));
			}
		}
	}
	$nc(this->this$0->chk)->newRound();
	$nc(this->this$0->enter)->newRound();
	$nc(this->this$0->filer)->newRound();
	$nc(this->this$0->messager)->newRound();
	$nc(this->this$0->compiler)->newRound();
	$nc(this->this$0->modules)->newRound();
	$nc(this->this$0->types)->newRound();
	$nc(this->this$0->annotate)->newRound();
	$nc(this->this$0->elementUtils)->newRound();
	bool foundError = false;
	{
		$var($Iterator, i$, $nc($($nc(this->this$0->symtab)->getAllClasses()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$ClassSymbol, cs, $cast($Symbol$ClassSymbol, i$->next()));
			{
				$init($Kinds$Kind);
				if ($nc(cs)->kind == $Kinds$Kind::ERR) {
					foundError = true;
					break;
				}
			}
		}
	}
	if (foundError) {
		{
			$var($Iterator, i$, $nc($($nc(this->this$0->symtab)->getAllClasses()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol$ClassSymbol, cs, $cast($Symbol$ClassSymbol, i$->next()));
				{
					$init($Kinds$Kind);
					if ($nc(cs)->classfile != nullptr || $nc(cs)->kind == $Kinds$Kind::ERR) {
						$Kinds$Kind* symKind = cs->kind;
						cs->reset();
						if (symKind == $Kinds$Kind::ERR) {
							$set(cs, type, $new($Type$ClassType, $($nc(cs->type)->getEnclosingType()), nullptr, cs));
						}
						if (cs->isCompleted()) {
							$set(cs, completer, this->this$0->initialCompleter);
						}
					}
				}
			}
		}
	}
}

bool JavacProcessingEnvironment$Round::lambda$new$2($JCDiagnostic* d) {
	return true;
}

bool JavacProcessingEnvironment$Round::lambda$new$1($JCDiagnostic* d) {
	$init($Diagnostic$Kind);
	bool var$1 = $nc(d)->getKind() != $Diagnostic$Kind::ERROR;
	$init($JCDiagnostic$DiagnosticFlag);
	bool var$0 = var$1 || !$nc(d)->isFlagSet($JCDiagnostic$DiagnosticFlag::RECOVERABLE);
	return var$0 || $nc(d)->isFlagSet($JCDiagnostic$DiagnosticFlag::API);
}

$Map* JavacProcessingEnvironment$Round::lambda$new$0($Symbol$ModuleSymbol* m) {
	return $new($LinkedHashMap);
}

JavacProcessingEnvironment$Round::JavacProcessingEnvironment$Round() {
}

$Class* JavacProcessingEnvironment$Round::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavacProcessingEnvironment$Round$$Lambda$lambda$new$1::classInfo$.name)) {
			return JavacProcessingEnvironment$Round$$Lambda$lambda$new$1::load$(name, initialize);
		}
		if (name->equals(JavacProcessingEnvironment$Round$$Lambda$lambda$new$2$1::classInfo$.name)) {
			return JavacProcessingEnvironment$Round$$Lambda$lambda$new$2$1::load$(name, initialize);
		}
		if (name->equals(JavacProcessingEnvironment$Round$$Lambda$lambda$new$0$2::classInfo$.name)) {
			return JavacProcessingEnvironment$Round$$Lambda$lambda$new$0$2::load$(name, initialize);
		}
	}
	$loadClass(JavacProcessingEnvironment$Round, name, initialize, &_JavacProcessingEnvironment$Round_ClassInfo_, allocate$JavacProcessingEnvironment$Round);
	return class$;
}

$Class* JavacProcessingEnvironment$Round::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com