#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>

#include <com/sun/source/util/TaskEvent$Kind.h>
#include <com/sun/source/util/TaskEvent.h>
#include <com/sun/tools/javac/api/MultiTaskListener.h>
#include <com/sun/tools/javac/code/ClassFinder$BadClassFile.h>
#include <com/sun/tools/javac/code/ClassFinder.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$Handler.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Preview.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/CompileStates$CompileState.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Modules.h>
#include <com/sun/tools/javac/comp/Todo.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/model/JavacElements.h>
#include <com/sun/tools/javac/model/JavacTypes.h>
#include <com/sun/tools/javac/platform/PlatformDescription$PluginInfo.h>
#include <com/sun/tools/javac/platform/PlatformDescription.h>
#include <com/sun/tools/javac/processing/AnnotationProcessingError.h>
#include <com/sun/tools/javac/processing/JavacFiler.h>
#include <com/sun/tools/javac/processing/JavacMessager.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$1.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$DiscoveredProcessors.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$NameProcessIterator.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$NameServiceIterator.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$ProcessorState.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$Round.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$ServiceIterator.h>
#include <com/sun/tools/javac/processing/JavacRoundEnvironment.h>
#include <com/sun/tools/javac/processing/PrintingProcessor.h>
#include <com/sun/tools/javac/processing/ServiceProxy$ServiceConfigurationError.h>
#include <com/sun/tools/javac/processing/ServiceProxy.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/Abort.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/ClientCodeException.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Iterators.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/JavacMessages.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log$DeferredDiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/MatchingUtils.h>
#include <com/sun/tools/javac/util/ModuleHelper.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/io/Closeable.h>
#include <java/io/IOException.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Iterable.h>
#include <java/lang/Module.h>
#include <java/lang/SecurityException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractQueue.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Stream.h>
#include <javax/annotation/processing/Filer.h>
#include <javax/annotation/processing/Messager.h>
#include <javax/annotation/processing/ProcessingEnvironment.h>
#include <javax/annotation/processing/Processor.h>
#include <javax/annotation/processing/RoundEnvironment.h>
#include <javax/lang/model/SourceVersion.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/element/Parameterizable.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/util/Elements.h>
#include <javax/lang/model/util/Types.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef ANNOTATION_PROCESSING
#undef ANNOTATION_PROCESSOR_MODULE_PATH
#undef ANNOTATION_PROCESSOR_PATH
#undef CLASS
#undef CLASSDEF
#undef CLASS_PATH
#undef IMPORT
#undef MODULEDEF
#undef MODULES
#undef PROC
#undef PROCESS
#undef PROCESSING
#undef PROCESSOR
#undef SOURCE
#undef VERBOSE
#undef WERROR
#undef XPRINT
#undef XPRINTPROCESSORINFO
#undef XPRINTROUNDS

using $URLArray = $Array<::java::net::URL>;
using $TaskEvent = ::com::sun::source::util::TaskEvent;
using $TaskEvent$Kind = ::com::sun::source::util::TaskEvent$Kind;
using $MultiTaskListener = ::com::sun::tools::javac::api::MultiTaskListener;
using $ClassFinder = ::com::sun::tools::javac::code::ClassFinder;
using $ClassFinder$BadClassFile = ::com::sun::tools::javac::code::ClassFinder$BadClassFile;
using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $DeferredCompletionFailureHandler$Handler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$Handler;
using $Lint = ::com::sun::tools::javac::code::Lint;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Preview = ::com::sun::tools::javac::code::Preview;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Types = ::com::sun::tools::javac::code::Types;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Check = ::com::sun::tools::javac::comp::Check;
using $CompileStates$CompileState = ::com::sun::tools::javac::comp::CompileStates$CompileState;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Modules = ::com::sun::tools::javac::comp::Modules;
using $Todo = ::com::sun::tools::javac::comp::Todo;
using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $Option = ::com::sun::tools::javac::main::Option;
using $JavacElements = ::com::sun::tools::javac::model::JavacElements;
using $JavacTypes = ::com::sun::tools::javac::model::JavacTypes;
using $PlatformDescription = ::com::sun::tools::javac::platform::PlatformDescription;
using $PlatformDescription$PluginInfo = ::com::sun::tools::javac::platform::PlatformDescription$PluginInfo;
using $AnnotationProcessingError = ::com::sun::tools::javac::processing::AnnotationProcessingError;
using $JavacFiler = ::com::sun::tools::javac::processing::JavacFiler;
using $JavacMessager = ::com::sun::tools::javac::processing::JavacMessager;
using $JavacProcessingEnvironment$1 = ::com::sun::tools::javac::processing::JavacProcessingEnvironment$1;
using $JavacProcessingEnvironment$DiscoveredProcessors = ::com::sun::tools::javac::processing::JavacProcessingEnvironment$DiscoveredProcessors;
using $JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator = ::com::sun::tools::javac::processing::JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator;
using $JavacProcessingEnvironment$NameProcessIterator = ::com::sun::tools::javac::processing::JavacProcessingEnvironment$NameProcessIterator;
using $JavacProcessingEnvironment$NameServiceIterator = ::com::sun::tools::javac::processing::JavacProcessingEnvironment$NameServiceIterator;
using $JavacProcessingEnvironment$ProcessorState = ::com::sun::tools::javac::processing::JavacProcessingEnvironment$ProcessorState;
using $JavacProcessingEnvironment$Round = ::com::sun::tools::javac::processing::JavacProcessingEnvironment$Round;
using $JavacProcessingEnvironment$ServiceIterator = ::com::sun::tools::javac::processing::JavacProcessingEnvironment$ServiceIterator;
using $JavacRoundEnvironment = ::com::sun::tools::javac::processing::JavacRoundEnvironment;
using $PrintingProcessor = ::com::sun::tools::javac::processing::PrintingProcessor;
using $ServiceProxy = ::com::sun::tools::javac::processing::ServiceProxy;
using $ServiceProxy$ServiceConfigurationError = ::com::sun::tools::javac::processing::ServiceProxy$ServiceConfigurationError;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $Abort = ::com::sun::tools::javac::util::Abort;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClientCodeException = ::com::sun::tools::javac::util::ClientCodeException;
using $Context = ::com::sun::tools::javac::util::Context;
using $Iterators = ::com::sun::tools::javac::util::Iterators;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $JavacMessages = ::com::sun::tools::javac::util::JavacMessages;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$DeferredDiagnosticHandler = ::com::sun::tools::javac::util::Log$DeferredDiagnosticHandler;
using $MatchingUtils = ::com::sun::tools::javac::util::MatchingUtils;
using $ModuleHelper = ::com::sun::tools::javac::util::ModuleHelper;
using $Names = ::com::sun::tools::javac::util::Names;
using $Options = ::com::sun::tools::javac::util::Options;
using $Closeable = ::java::io::Closeable;
using $IOException = ::java::io::IOException;
using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $StringWriter = ::java::io::StringWriter;
using $Writer = ::java::io::Writer;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $Path = ::java::nio::file::Path;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractQueue = ::java::util::AbstractQueue;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $1List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Pattern = ::java::util::regex::Pattern;
using $Stream = ::java::util::stream::Stream;
using $Filer = ::javax::annotation::processing::Filer;
using $Messager = ::javax::annotation::processing::Messager;
using $ProcessingEnvironment = ::javax::annotation::processing::ProcessingEnvironment;
using $Processor = ::javax::annotation::processing::Processor;
using $RoundEnvironment = ::javax::annotation::processing::RoundEnvironment;
using $SourceVersion = ::javax::lang::model::SourceVersion;
using $Element = ::javax::lang::model::element::Element;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $Name = ::javax::lang::model::element::Name;
using $Parameterizable = ::javax::lang::model::element::Parameterizable;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $Elements = ::javax::lang::model::util::Elements;
using $1Types = ::javax::lang::model::util::Types;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class JavacProcessingEnvironment$$Lambda$getPlugin : public $Function {
	$class(JavacProcessingEnvironment$$Lambda$getPlugin, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $sure($PlatformDescription$PluginInfo, inst$)->getPlugin();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacProcessingEnvironment$$Lambda$getPlugin>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacProcessingEnvironment$$Lambda$getPlugin::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacProcessingEnvironment$$Lambda$getPlugin::*)()>(&JavacProcessingEnvironment$$Lambda$getPlugin::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacProcessingEnvironment$$Lambda$getPlugin::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment$$Lambda$getPlugin",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavacProcessingEnvironment$$Lambda$getPlugin::load$($String* name, bool initialize) {
	$loadClass(JavacProcessingEnvironment$$Lambda$getPlugin, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacProcessingEnvironment$$Lambda$getPlugin::class$ = nullptr;

class JavacProcessingEnvironment$$Lambda$lambda$initProcessorIterator$0$1 : public $Function {
	$class(JavacProcessingEnvironment$$Lambda$lambda$initProcessorIterator$0$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* i) override {
		 return $of(JavacProcessingEnvironment::lambda$initProcessorIterator$0($cast($Iterator, i)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacProcessingEnvironment$$Lambda$lambda$initProcessorIterator$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacProcessingEnvironment$$Lambda$lambda$initProcessorIterator$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacProcessingEnvironment$$Lambda$lambda$initProcessorIterator$0$1::*)()>(&JavacProcessingEnvironment$$Lambda$lambda$initProcessorIterator$0$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacProcessingEnvironment$$Lambda$lambda$initProcessorIterator$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment$$Lambda$lambda$initProcessorIterator$0$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavacProcessingEnvironment$$Lambda$lambda$initProcessorIterator$0$1::load$($String* name, bool initialize) {
	$loadClass(JavacProcessingEnvironment$$Lambda$lambda$initProcessorIterator$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacProcessingEnvironment$$Lambda$lambda$initProcessorIterator$0$1::class$ = nullptr;

$FieldInfo _JavacProcessingEnvironment_FieldInfo_[] = {
	{"options", "Lcom/sun/tools/javac/util/Options;", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, options)},
	{"printProcessorInfo", "Z", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, printProcessorInfo)},
	{"printRounds", "Z", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, printRounds)},
	{"verbose", "Z", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, verbose)},
	{"lint", "Z", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, lint)},
	{"fatalErrors", "Z", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, fatalErrors)},
	{"werror", "Z", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, werror)},
	{"showResolveErrors", "Z", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, showResolveErrors)},
	{"filer", "Lcom/sun/tools/javac/processing/JavacFiler;", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, filer)},
	{"messager", "Lcom/sun/tools/javac/processing/JavacMessager;", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, messager)},
	{"elementUtils", "Lcom/sun/tools/javac/model/JavacElements;", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, elementUtils)},
	{"typeUtils", "Lcom/sun/tools/javac/model/JavacTypes;", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, typeUtils)},
	{"compiler", "Lcom/sun/tools/javac/main/JavaCompiler;", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, compiler)},
	{"modules", "Lcom/sun/tools/javac/comp/Modules;", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, modules)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, types)},
	{"annotate", "Lcom/sun/tools/javac/comp/Annotate;", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, annotate)},
	{"discoveredProcs", "Lcom/sun/tools/javac/processing/JavacProcessingEnvironment$DiscoveredProcessors;", nullptr, $PRIVATE, $field(JavacProcessingEnvironment, discoveredProcs)},
	{"processorOptions", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, processorOptions)},
	{"unmatchedProcessorOptions", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, unmatchedProcessorOptions)},
	{"platformAnnotations", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, platformAnnotations)},
	{"specifiedPackages", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$PackageSymbol;>;", $PRIVATE, $field(JavacProcessingEnvironment, specifiedPackages)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $FINAL, $field(JavacProcessingEnvironment, log)},
	{"diags", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, 0, $field(JavacProcessingEnvironment, diags)},
	{"source", "Lcom/sun/tools/javac/code/Source;", nullptr, 0, $field(JavacProcessingEnvironment, source)},
	{"processorClassLoader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $field(JavacProcessingEnvironment, processorClassLoader)},
	{"serviceLoader", "Ljava/util/ServiceLoader;", "Ljava/util/ServiceLoader<Ljavax/annotation/processing/Processor;>;", $PRIVATE, $field(JavacProcessingEnvironment, serviceLoader)},
	{"processorLoaderException", "Ljava/lang/SecurityException;", nullptr, $PRIVATE, $field(JavacProcessingEnvironment, processorLoaderException)},
	{"fileManager", "Ljavax/tools/JavaFileManager;", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, fileManager)},
	{"messages", "Lcom/sun/tools/javac/util/JavacMessages;", nullptr, $PRIVATE, $field(JavacProcessingEnvironment, messages)},
	{"taskListener", "Lcom/sun/tools/javac/api/MultiTaskListener;", nullptr, $PRIVATE, $field(JavacProcessingEnvironment, taskListener)},
	{"symtab", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, symtab)},
	{"dcfh", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, dcfh)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, names)},
	{"enter", "Lcom/sun/tools/javac/comp/Enter;", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, enter)},
	{"initialCompleter", "Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, initialCompleter)},
	{"chk", "Lcom/sun/tools/javac/comp/Check;", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, chk)},
	{"context", "Lcom/sun/tools/javac/util/Context;", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, context)},
	{"preview", "Lcom/sun/tools/javac/code/Preview;", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, preview)},
	{"treeCleaner", "Lcom/sun/tools/javac/tree/TreeScanner;", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment, treeCleaner)},
	{"noMatches", "Ljava/util/regex/Pattern;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JavacProcessingEnvironment, noMatches)},
	{}
};

$MethodInfo _JavacProcessingEnvironment_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(JavacProcessingEnvironment::*)($Context*)>(&JavacProcessingEnvironment::init$))},
	{"atLeastOneProcessor", "()Z", nullptr, $PUBLIC},
	{"callProcessor", "(Ljavax/annotation/processing/Processor;Ljava/util/Set;Ljavax/annotation/processing/RoundEnvironment;)Z", "(Ljavax/annotation/processing/Processor;Ljava/util/Set<+Ljavax/lang/model/element/TypeElement;>;Ljavax/annotation/processing/RoundEnvironment;)Z", $PRIVATE, $method(static_cast<bool(JavacProcessingEnvironment::*)($Processor*,$Set*,$RoundEnvironment*)>(&JavacProcessingEnvironment::callProcessor))},
	{"close", "()V", nullptr, $PUBLIC},
	{"discoverAndRunProcs", "(Ljava/util/Set;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", "(Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$PackageSymbol;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;)V", $PRIVATE, $method(static_cast<void(JavacProcessingEnvironment::*)($Set*,$List*,$List*,$List*)>(&JavacProcessingEnvironment::discoverAndRunProcs))},
	{"doProcessing", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Ljava/lang/Iterable;Lcom/sun/tools/javac/util/Log$DeferredDiagnosticHandler;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;Ljava/lang/Iterable<+Lcom/sun/tools/javac/code/Symbol$PackageSymbol;>;Lcom/sun/tools/javac/util/Log$DeferredDiagnosticHandler;)Z", $PUBLIC},
	{"getContext", "()Lcom/sun/tools/javac/util/Context;", nullptr, $PUBLIC},
	{"getElementUtils", "()Lcom/sun/tools/javac/model/JavacElements;", nullptr, $PUBLIC},
	{"getFiler", "()Lcom/sun/tools/javac/processing/JavacFiler;", nullptr, $PUBLIC},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getMessager", "()Ljavax/annotation/processing/Messager;", nullptr, $PUBLIC},
	{"getModuleInfoFiles", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PRIVATE, $method(static_cast<$List*(JavacProcessingEnvironment::*)($List*)>(&JavacProcessingEnvironment::getModuleInfoFiles))},
	{"getOptions", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC},
	{"getPackageInfoFiles", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$PackageSymbol;>;", $PRIVATE, $method(static_cast<$List*(JavacProcessingEnvironment::*)($List*)>(&JavacProcessingEnvironment::getPackageInfoFiles))},
	{"getPackageInfoFilesFromClasses", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$PackageSymbol;>;", $PRIVATE, $method(static_cast<$List*(JavacProcessingEnvironment::*)($List*)>(&JavacProcessingEnvironment::getPackageInfoFilesFromClasses))},
	{"getProcessorClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC},
	{"getServiceLoader", "(Ljava/lang/Class;)Ljava/util/ServiceLoader;", "<S:Ljava/lang/Object;>(Ljava/lang/Class<TS;>;)Ljava/util/ServiceLoader<TS;>;", $PUBLIC},
	{"getSourceVersion", "()Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC},
	{"getSpecifiedPackages", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$PackageSymbol;>;", $PUBLIC},
	{"getTopLevelClasses", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;", $PRIVATE, $method(static_cast<$List*(JavacProcessingEnvironment::*)($List*)>(&JavacProcessingEnvironment::getTopLevelClasses))},
	{"getTopLevelClassesFromClasses", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;", $PRIVATE, $method(static_cast<$List*(JavacProcessingEnvironment::*)($List*)>(&JavacProcessingEnvironment::getTopLevelClassesFromClasses))},
	{"getTypeUtils", "()Lcom/sun/tools/javac/model/JavacTypes;", nullptr, $PUBLIC},
	{"handleException", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PRIVATE, $method(static_cast<void(JavacProcessingEnvironment::*)($String*,$Exception*)>(&JavacProcessingEnvironment::handleException))},
	{"handleServiceLoaderUnavailability", "(Ljava/lang/String;Ljava/lang/Exception;)Ljava/util/Iterator;", "(Ljava/lang/String;Ljava/lang/Exception;)Ljava/util/Iterator<Ljavax/annotation/processing/Processor;>;", $PRIVATE, $method(static_cast<$Iterator*(JavacProcessingEnvironment::*)($String*,$Exception*)>(&JavacProcessingEnvironment::handleServiceLoaderUnavailability))},
	{"importStringToPattern", "(ZLjava/lang/String;Ljavax/annotation/processing/Processor;Lcom/sun/tools/javac/util/Log;Z)Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Pattern*(*)(bool,$String*,$Processor*,$Log*,bool)>(&JavacProcessingEnvironment::importStringToPattern))},
	{"initPlatformAnnotations", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $method(static_cast<$Set*(JavacProcessingEnvironment::*)()>(&JavacProcessingEnvironment::initPlatformAnnotations))},
	{"initProcessorIterator", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<+Ljavax/annotation/processing/Processor;>;)V", $PRIVATE, $method(static_cast<void(JavacProcessingEnvironment::*)($Iterable*)>(&JavacProcessingEnvironment::initProcessorIterator))},
	{"initProcessorLoader", "()V", nullptr, $PRIVATE, $method(static_cast<void(JavacProcessingEnvironment::*)()>(&JavacProcessingEnvironment::initProcessorLoader))},
	{"initProcessorOptions", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $method(static_cast<$Map*(JavacProcessingEnvironment::*)()>(&JavacProcessingEnvironment::initProcessorOptions))},
	{"initUnmatchedProcessorOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $method(static_cast<$Set*(JavacProcessingEnvironment::*)()>(&JavacProcessingEnvironment::initUnmatchedProcessorOptions))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavacProcessingEnvironment*(*)($Context*)>(&JavacProcessingEnvironment::instance))},
	{"isModuleInfo", "(Ljavax/tools/JavaFileObject;Ljavax/tools/JavaFileObject$Kind;)Z", nullptr, $PRIVATE, $method(static_cast<bool(JavacProcessingEnvironment::*)($JavaFileObject*,$JavaFileObject$Kind*)>(&JavacProcessingEnvironment::isModuleInfo))},
	{"isPkgInfo", "(Ljavax/tools/JavaFileObject;Ljavax/tools/JavaFileObject$Kind;)Z", nullptr, $PRIVATE, $method(static_cast<bool(JavacProcessingEnvironment::*)($JavaFileObject*,$JavaFileObject$Kind*)>(&JavacProcessingEnvironment::isPkgInfo))},
	{"isPkgInfo", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Z", nullptr, $PRIVATE, $method(static_cast<bool(JavacProcessingEnvironment::*)($Symbol$ClassSymbol*)>(&JavacProcessingEnvironment::isPkgInfo))},
	{"isPreviewEnabled", "()Z", nullptr, $PUBLIC},
	{"isValidOptionName", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&JavacProcessingEnvironment::isValidOptionName))},
	{"join", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "<T:Ljava/lang/Object;>(Lcom/sun/tools/javac/util/List<TT;>;Lcom/sun/tools/javac/util/List<TT;>;)Lcom/sun/tools/javac/util/List<TT;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($List*,$List*)>(&JavacProcessingEnvironment::join))},
	{"lambda$initProcessorIterator$0", "(Ljava/util/Iterator;)Ljava/util/Iterator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Iterator*(*)($Iterator*)>(&JavacProcessingEnvironment::lambda$initProcessorIterator$0))},
	{"moreToDo", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(JavacProcessingEnvironment::*)()>(&JavacProcessingEnvironment::moreToDo))},
	{"needClassLoader", "(Ljava/lang/String;Ljava/lang/Iterable;)Z", "(Ljava/lang/String;Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)Z", $PRIVATE, $method(static_cast<bool(JavacProcessingEnvironment::*)($String*,$Iterable*)>(&JavacProcessingEnvironment::needClassLoader))},
	{"setProcessors", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<+Ljavax/annotation/processing/Processor;>;)V", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"warnAndNoMatches", "(Ljava/lang/String;Ljavax/annotation/processing/Processor;Lcom/sun/tools/javac/util/Log;Z)Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Pattern*(*)($String*,$Processor*,$Log*,bool)>(&JavacProcessingEnvironment::warnAndNoMatches))},
	{"warnIfUnmatchedOptions", "()V", nullptr, $PRIVATE, $method(static_cast<void(JavacProcessingEnvironment::*)()>(&JavacProcessingEnvironment::warnIfUnmatchedOptions))},
	{}
};

$InnerClassInfo _JavacProcessingEnvironment_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$ImplicitCompleter", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "ImplicitCompleter", 0},
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$Round", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "Round", 0},
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$ComputeAnnotationSet", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "ComputeAnnotationSet", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$DiscoveredProcessors", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "DiscoveredProcessors", 0},
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$ProcessorState", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "ProcessorState", $STATIC},
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$NameProcessIterator", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "NameProcessIterator", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$NameServiceIterator", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "NameServiceIterator", $PRIVATE},
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$ServiceIterator", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "ServiceIterator", $PRIVATE},
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavacProcessingEnvironment_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment",
	"java.lang.Object",
	"javax.annotation.processing.ProcessingEnvironment,java.io.Closeable",
	_JavacProcessingEnvironment_FieldInfo_,
	_JavacProcessingEnvironment_MethodInfo_,
	nullptr,
	nullptr,
	_JavacProcessingEnvironment_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment$2,com.sun.tools.javac.processing.JavacProcessingEnvironment$ImplicitCompleter,com.sun.tools.javac.processing.JavacProcessingEnvironment$Round,com.sun.tools.javac.processing.JavacProcessingEnvironment$ComputeAnnotationSet,com.sun.tools.javac.processing.JavacProcessingEnvironment$DiscoveredProcessors,com.sun.tools.javac.processing.JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator,com.sun.tools.javac.processing.JavacProcessingEnvironment$ProcessorState,com.sun.tools.javac.processing.JavacProcessingEnvironment$NameProcessIterator,com.sun.tools.javac.processing.JavacProcessingEnvironment$NameServiceIterator,com.sun.tools.javac.processing.JavacProcessingEnvironment$ServiceIterator,com.sun.tools.javac.processing.JavacProcessingEnvironment$1"
};

$Object* allocate$JavacProcessingEnvironment($Class* clazz) {
	return $of($alloc(JavacProcessingEnvironment));
}

int32_t JavacProcessingEnvironment::hashCode() {
	 return this->$ProcessingEnvironment::hashCode();
}

bool JavacProcessingEnvironment::equals(Object$* arg0) {
	 return this->$ProcessingEnvironment::equals(arg0);
}

$Object* JavacProcessingEnvironment::clone() {
	 return this->$ProcessingEnvironment::clone();
}

void JavacProcessingEnvironment::finalize() {
	this->$ProcessingEnvironment::finalize();
}

$Pattern* JavacProcessingEnvironment::noMatches = nullptr;

JavacProcessingEnvironment* JavacProcessingEnvironment::instance($Context* context) {
	$init(JavacProcessingEnvironment);
	$var(JavacProcessingEnvironment, instance, $cast(JavacProcessingEnvironment, $nc(context)->get(JavacProcessingEnvironment::class$)));
	if (instance == nullptr) {
		$assign(instance, $new(JavacProcessingEnvironment, context));
	}
	return instance;
}

void JavacProcessingEnvironment::init$($Context* context) {
	$useLocalCurrentObjectStackCache();
	$set(this, specifiedPackages, $Collections::emptySet());
	$set(this, treeCleaner, $new($JavacProcessingEnvironment$1, this));
	$set(this, context, context);
	$nc(context)->put(JavacProcessingEnvironment::class$, $of(this));
	$set(this, log, $Log::instance(context));
	$set(this, source, $Source::instance(context));
	$set(this, diags, $JCDiagnostic$Factory::instance(context));
	$set(this, options, $Options::instance(context));
	$init($Option);
	this->printProcessorInfo = $nc(this->options)->isSet($Option::XPRINTPROCESSORINFO);
	this->printRounds = $nc(this->options)->isSet($Option::XPRINTROUNDS);
	this->verbose = $nc(this->options)->isSet($Option::VERBOSE);
	$init($Lint$LintCategory);
	this->lint = $nc($($Lint::instance(context)))->isEnabled($Lint$LintCategory::PROCESSING);
	$set(this, compiler, $JavaCompiler::instance(context));
	bool var$0 = $nc(this->options)->isSet($Option::PROC, "only"_s);
	if (var$0 || $nc(this->options)->isSet($Option::XPRINT)) {
		$init($CompileStates$CompileState);
		$set($nc(this->compiler), shouldStopPolicyIfNoError, $CompileStates$CompileState::PROCESS);
	}
	this->fatalErrors = $nc(this->options)->isSet("fatalEnterError"_s);
	this->showResolveErrors = $nc(this->options)->isSet("showResolveErrors"_s);
	this->werror = $nc(this->options)->isSet($Option::WERROR);
	$load($JavaFileManager);
	$set(this, fileManager, $cast($JavaFileManager, context->get($JavaFileManager::class$)));
	$set(this, platformAnnotations, initPlatformAnnotations());
	$set(this, filer, $new($JavacFiler, context));
	$set(this, messager, $new($JavacMessager, context, this));
	$set(this, elementUtils, $JavacElements::instance(context));
	$set(this, typeUtils, $JavacTypes::instance(context));
	$set(this, modules, $Modules::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, annotate, $Annotate::instance(context));
	$set(this, processorOptions, initProcessorOptions());
	$set(this, unmatchedProcessorOptions, initUnmatchedProcessorOptions());
	$set(this, messages, $JavacMessages::instance(context));
	$set(this, taskListener, $MultiTaskListener::instance(context));
	$set(this, symtab, $Symtab::instance(context));
	$set(this, dcfh, $DeferredCompletionFailureHandler::instance(context));
	$set(this, names, $Names::instance(context));
	$set(this, enter, $Enter::instance(context));
	$set(this, initialCompleter, $nc($($ClassFinder::instance(context)))->getCompleter());
	$set(this, chk, $Check::instance(context));
	$set(this, preview, $Preview::instance(context));
	initProcessorLoader();
}

void JavacProcessingEnvironment::setProcessors($Iterable* processors) {
	$Assert::checkNull(this->discoveredProcs);
	initProcessorIterator(processors);
}

$Set* JavacProcessingEnvironment::initPlatformAnnotations() {
	$useLocalCurrentObjectStackCache();
	$init($Source$Feature);
	$var($String, module_prefix, $Source$Feature::MODULES->allowedInSource(this->source) ? "java.base/"_s : ""_s);
	return $Set::of($$new($StringArray, {
		$$str({module_prefix, "java.lang.Deprecated"_s}),
		$$str({module_prefix, "java.lang.FunctionalInterface"_s}),
		$$str({module_prefix, "java.lang.Override"_s}),
		$$str({module_prefix, "java.lang.SafeVarargs"_s}),
		$$str({module_prefix, "java.lang.SuppressWarnings"_s}),
		$$str({module_prefix, "java.lang.annotation.Documented"_s}),
		$$str({module_prefix, "java.lang.annotation.Inherited"_s}),
		$$str({module_prefix, "java.lang.annotation.Native"_s}),
		$$str({module_prefix, "java.lang.annotation.Repeatable"_s}),
		$$str({module_prefix, "java.lang.annotation.Retention"_s}),
		$$str({module_prefix, "java.lang.annotation.Target"_s}),
		$$str({module_prefix, "java.io.Serial"_s})
	}));
}

void JavacProcessingEnvironment::initProcessorLoader() {
	$useLocalCurrentObjectStackCache();
	try {
		$init($StandardLocation);
		if ($nc(this->fileManager)->hasLocation($StandardLocation::ANNOTATION_PROCESSOR_MODULE_PATH)) {
			try {
				$load($Processor);
				$set(this, serviceLoader, $nc(this->fileManager)->getServiceLoader($StandardLocation::ANNOTATION_PROCESSOR_MODULE_PATH, $Processor::class$));
			} catch ($IOException& e) {
				$throwNew($Abort, e);
			}
		} else {
			$set(this, processorClassLoader, $nc(this->fileManager)->hasLocation($StandardLocation::ANNOTATION_PROCESSOR_PATH) ? $nc(this->fileManager)->getClassLoader($StandardLocation::ANNOTATION_PROCESSOR_PATH) : $nc(this->fileManager)->getClassLoader($StandardLocation::CLASS_PATH));
			if ($nc(this->options)->isSet("accessInternalAPI"_s)) {
				$var($Module, var$0, $of(this)->getClass()->getModule());
				$ModuleHelper::addExports(var$0, $($nc(this->processorClassLoader)->getUnnamedModule()));
			}
			{
				$var($Closeable, closeable, nullptr);
				bool var$1 = this->processorClassLoader != nullptr;
				if (var$1) {
					$var($ClassLoader, patt11401$temp, this->processorClassLoader);
					bool var$2 = $instanceOf($Closeable, patt11401$temp);
					if (var$2) {
						$assign(closeable, $cast($Closeable, patt11401$temp));
						var$2 = true;
					}
					var$1 = var$2;
				}
				if (var$1) {
					$set($nc(this->compiler), closeables, $nc($nc(this->compiler)->closeables)->prepend(closeable));
				}
			}
		}
	} catch ($SecurityException& e) {
		$set(this, processorLoaderException, e);
	}
}

void JavacProcessingEnvironment::initProcessorIterator($Iterable* processors) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, processorIterator, nullptr);
	$init($Option);
	if ($nc(this->options)->isSet($Option::XPRINT)) {
		try {
			$assign(processorIterator, $nc($($List::of($$new($PrintingProcessor))))->iterator());
		} catch ($Throwable& t) {
			$var($AssertionError, assertError, $new($AssertionError, $of("Problem instantiating PrintingProcessor."_s)));
			assertError->initCause(t);
			$throw(assertError);
		}
	} else if (processors != nullptr) {
		$assign(processorIterator, processors->iterator());
	} else if (this->processorLoaderException == nullptr) {
		$var($String, processorNames, $nc(this->options)->get($Option::PROCESSOR));
		$init($StandardLocation);
		if ($nc(this->fileManager)->hasLocation($StandardLocation::ANNOTATION_PROCESSOR_MODULE_PATH)) {
			$assign(processorIterator, (processorNames == nullptr) ? static_cast<$Iterator*>($new($JavacProcessingEnvironment$ServiceIterator, this, this->serviceLoader, this->log)) : static_cast<$Iterator*>($new($JavacProcessingEnvironment$NameServiceIterator, this, this->serviceLoader, this->log, processorNames)));
		} else if (processorNames != nullptr) {
			$assign(processorIterator, $new($JavacProcessingEnvironment$NameProcessIterator, processorNames, this->processorClassLoader, this->log));
		} else {
			$assign(processorIterator, $new($JavacProcessingEnvironment$ServiceIterator, this, this->processorClassLoader, this->log));
		}
	} else {
		$assign(processorIterator, handleServiceLoaderUnavailability("proc.cant.create.loader"_s, this->processorLoaderException));
	}
	$load($PlatformDescription);
	$var($PlatformDescription, platformProvider, $cast($PlatformDescription, $nc(this->context)->get($PlatformDescription::class$)));
	$var($1List, platformProcessors, $Collections::emptyList());
	if (platformProvider != nullptr) {
		$assign(platformProcessors, $nc($($nc($($nc($(platformProvider->getAnnotationProcessors()))->stream()))->map(static_cast<$Function*>($$new(JavacProcessingEnvironment$$Lambda$getPlugin)))))->toList());
	}
	$var($List, iterators, $List::of(processorIterator, $($nc(platformProcessors)->iterator())));
	$var($Iterator, compoundIterator, $Iterators::createCompoundIterator(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(iterators))), static_cast<$Function*>($$new(JavacProcessingEnvironment$$Lambda$lambda$initProcessorIterator$0$1))));
	$set(this, discoveredProcs, $new($JavacProcessingEnvironment$DiscoveredProcessors, this, compoundIterator));
}

$ServiceLoader* JavacProcessingEnvironment::getServiceLoader($Class* service) {
	$beforeCallerSensitive();
	$init($StandardLocation);
	if ($nc(this->fileManager)->hasLocation($StandardLocation::ANNOTATION_PROCESSOR_MODULE_PATH)) {
		try {
			return $nc(this->fileManager)->getServiceLoader($StandardLocation::ANNOTATION_PROCESSOR_MODULE_PATH, service);
		} catch ($IOException& e) {
			$throwNew($Abort, e);
		}
	} else {
		return $ServiceLoader::load(service, $(getProcessorClassLoader()));
	}
}

$Iterator* JavacProcessingEnvironment::handleServiceLoaderUnavailability($String* key, $Exception* e) {
	$useLocalCurrentObjectStackCache();
	{
		$var($JavacFileManager, standardFileManager, nullptr);
		$var($JavaFileManager, patt15804$temp, this->fileManager);
		bool var$0 = $instanceOf($JavacFileManager, patt15804$temp);
		if (var$0) {
			$assign(standardFileManager, $cast($JavacFileManager, patt15804$temp));
			var$0 = true;
		}
		if (var$0) {
			$init($StandardLocation);
			$var($Iterable, workingPath, $nc(this->fileManager)->hasLocation($StandardLocation::ANNOTATION_PROCESSOR_PATH) ? $nc(standardFileManager)->getLocationAsPaths($StandardLocation::ANNOTATION_PROCESSOR_PATH) : standardFileManager->getLocationAsPaths($StandardLocation::CLASS_PATH));
			$init($Option);
			if (needClassLoader($($nc(this->options)->get($Option::PROCESSOR)), workingPath)) {
				handleException(key, e);
			}
		} else {
			handleException(key, e);
		}
	}
	$var($1List, pl, $Collections::emptyList());
	return $nc(pl)->iterator();
}

void JavacProcessingEnvironment::handleException($String* key, $Exception* e) {
	$useLocalCurrentObjectStackCache();
	if (e != nullptr) {
		$nc(this->log)->error(key, $$new($ObjectArray, {$($of(e->getLocalizedMessage()))}));
		$throwNew($Abort, e);
	} else {
		$nc(this->log)->error(key, $$new($ObjectArray, 0));
		$throwNew($Abort);
	}
}

bool JavacProcessingEnvironment::atLeastOneProcessor() {
	return $nc($($cast($JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator, $nc(this->discoveredProcs)->iterator())))->hasNext();
}

$Map* JavacProcessingEnvironment::initProcessorOptions() {
	$useLocalCurrentObjectStackCache();
	$var($Set, keySet, $nc(this->options)->keySet());
	$var($Map, tempOptions, $new($LinkedHashMap));
	{
		$var($Iterator, i$, $nc(keySet)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, key, $cast($String, i$->next()));
			{
				bool var$0 = $nc(key)->startsWith("-A"_s);
				if (var$0 && key->length() > 2) {
					int32_t sepIndex = key->indexOf((int32_t)u'=');
					$var($String, candidateKey, nullptr);
					$var($String, candidateValue, nullptr);
					if (sepIndex == -1) {
						$assign(candidateKey, key->substring(2));
					} else if (sepIndex >= 3) {
						$assign(candidateKey, key->substring(2, sepIndex));
						$assign(candidateValue, (sepIndex < key->length() - 1) ? key->substring(sepIndex + 1) : ($String*)nullptr);
					}
					tempOptions->put(candidateKey, candidateValue);
				}
			}
		}
	}
	$load($PlatformDescription);
	$var($PlatformDescription, platformProvider, $cast($PlatformDescription, $nc(this->context)->get($PlatformDescription::class$)));
	if (platformProvider != nullptr) {
		{
			$var($Iterator, i$, $nc($(platformProvider->getAnnotationProcessors()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($PlatformDescription$PluginInfo, ap, $cast($PlatformDescription$PluginInfo, i$->next()));
				{
					tempOptions->putAll($($nc(ap)->getOptions()));
				}
			}
		}
	}
	return $Collections::unmodifiableMap(tempOptions);
}

$Set* JavacProcessingEnvironment::initUnmatchedProcessorOptions() {
	$useLocalCurrentObjectStackCache();
	$var($Set, unmatchedProcessorOptions, $new($HashSet));
	unmatchedProcessorOptions->addAll($($nc(this->processorOptions)->keySet()));
	return unmatchedProcessorOptions;
}

void JavacProcessingEnvironment::discoverAndRunProcs($Set* annotationsPresent, $List* topLevelClasses, $List* packageInfoFiles, $List* moduleInfoFiles) {
	$useLocalCurrentObjectStackCache();
	$var($Map, unmatchedAnnotations, $new($HashMap, $nc(annotationsPresent)->size()));
	{
		$var($Iterator, i$, $nc(annotationsPresent)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($TypeElement, a, $cast($TypeElement, i$->next()));
			{
				$var($ModuleElement, mod, $nc(this->elementUtils)->getModuleOf(static_cast<$Element*>(static_cast<$Parameterizable*>(a))));
				$init($Source$Feature);
				$var($String, moduleSpec, $Source$Feature::MODULES->allowedInSource(this->source) && mod != nullptr ? $str({$($nc(mod)->getQualifiedName()), "/"_s}) : ""_s);
				unmatchedAnnotations->put($$str({moduleSpec, $($nc($of($($nc(a)->getQualifiedName())))->toString())}), a);
			}
		}
	}
	if (unmatchedAnnotations->size() == 0) {
		unmatchedAnnotations->put(""_s, nullptr);
	}
	$var($JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator, psi, $cast($JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator, $nc(this->discoveredProcs)->iterator()));
	$var($Set, rootElements, $new($LinkedHashSet));
	rootElements->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(topLevelClasses)));
	rootElements->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(packageInfoFiles)));
	rootElements->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(moduleInfoFiles)));
	$assign(rootElements, $Collections::unmodifiableSet(rootElements));
	$var($RoundEnvironment, renv, $new($JavacRoundEnvironment, false, false, rootElements, this));
	while (true) {
		bool var$0 = unmatchedAnnotations->size() > 0;
		if (!(var$0 && $nc(psi)->hasNext())) {
			break;
		}
		{
			$var($JavacProcessingEnvironment$ProcessorState, ps, $cast($JavacProcessingEnvironment$ProcessorState, psi->next()));
			$var($Set, matchedNames, $new($HashSet));
			$var($Set, typeElements, $new($LinkedHashSet));
			{
				$var($Iterator, i$, $nc($(unmatchedAnnotations->entrySet()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
					{
						$var($String, unmatchedAnnotationName, $cast($String, $nc(entry)->getKey()));
						if ($nc(ps)->annotationSupported(unmatchedAnnotationName)) {
							matchedNames->add(unmatchedAnnotationName);
							$var($TypeElement, te, $cast($TypeElement, entry->getValue()));
							if (te != nullptr) {
								typeElements->add(te);
							}
						}
					}
				}
			}
			if (matchedNames->size() > 0 || $nc(ps)->contributed) {
				bool processingResult = callProcessor(ps->processor, typeElements, renv);
				ps->contributed = true;
				ps->removeSupportedOptions(this->unmatchedProcessorOptions);
				if (this->printProcessorInfo || this->verbose) {
					$nc(this->log)->printLines("x.print.processor.info"_s, $$new($ObjectArray, {
						$($of($nc($of(ps->processor))->getClass()->getName())),
						$($of($of(matchedNames)->toString())),
						$($of($Boolean::valueOf(processingResult)))
					}));
				}
				if (processingResult) {
					$nc($(unmatchedAnnotations->keySet()))->removeAll(matchedNames);
				}
			}
		}
	}
	unmatchedAnnotations->remove(""_s);
	if (this->lint && unmatchedAnnotations->size() > 0) {
		$nc($(unmatchedAnnotations->keySet()))->removeAll(this->platformAnnotations);
		if (unmatchedAnnotations->size() > 0) {
			$nc(this->log)->warning($($CompilerProperties$Warnings::ProcAnnotationsWithoutProcessors($(unmatchedAnnotations->keySet()))));
		}
	}
	$nc(psi)->runContributingProcs(renv);
}

bool JavacProcessingEnvironment::callProcessor($Processor* proc, $Set* tes, $RoundEnvironment* renv) {
	$useLocalCurrentObjectStackCache();
	$var($DeferredCompletionFailureHandler$Handler, prevDeferredHandler, $nc(this->dcfh)->setHandler($nc(this->dcfh)->userCodeHandler));
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			try {
				var$2 = $nc(proc)->process(tes, renv);
				return$1 = true;
				goto $finally;
			} catch ($ClassFinder$BadClassFile& ex) {
				$nc(this->log)->error($($CompilerProperties$Errors::ProcCantAccess1(ex->sym, $(ex->getDetailValue()))));
				var$2 = false;
				return$1 = true;
				goto $finally;
			} catch ($Symbol$CompletionFailure& ex) {
				$var($StringWriter, out, $new($StringWriter));
				ex->printStackTrace($$new($PrintWriter, static_cast<$Writer*>(out)));
				$var($Symbol, var$3, ex->sym);
				$var($JCDiagnostic, var$4, ex->getDetailValue());
				$nc(this->log)->error($($CompilerProperties$Errors::ProcCantAccess(var$3, var$4, $(out->toString()))));
				var$2 = false;
				return$1 = true;
				goto $finally;
			} catch ($ClientCodeException& e) {
				$throw(e);
			} catch ($Throwable& t) {
				$throwNew($AnnotationProcessingError, t);
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} $finally: {
			$nc(this->dcfh)->setHandler(prevDeferredHandler);
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

bool JavacProcessingEnvironment::doProcessing($List* roots$renamed, $List* classSymbols, $Iterable* pckSymbols, $Log$DeferredDiagnosticHandler* deferredDiagnosticHandler) {
	$useLocalCurrentObjectStackCache();
	$var($List, roots, roots$renamed);
	$var($Set, treesToClean, $Collections::newSetFromMap($$new($IdentityHashMap)));
	{
		$var($Iterator, i$, $nc($($nc(this->enter)->getEnvs()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Env, env, $cast($Env, i$->next()));
			{
				$nc(treesToClean)->add($nc(env)->toplevel);
			}
		}
	}
	$var($Set, specifiedPackages, $new($LinkedHashSet));
	{
		$var($Iterator, i$, $nc(pckSymbols)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$PackageSymbol, psym, $cast($Symbol$PackageSymbol, i$->next()));
			specifiedPackages->add(psym);
		}
	}
	$set(this, specifiedPackages, $Collections::unmodifiableSet(specifiedPackages));
	$var($JavacProcessingEnvironment$Round, round, $new($JavacProcessingEnvironment$Round, this, roots, classSymbols, treesToClean, deferredDiagnosticHandler));
	bool errorStatus = false;
	bool moreToDo = false;
	do {
		round->run(false, false);
		errorStatus = round->unrecoverableError();
		moreToDo = this->moreToDo();
		round->showDiagnostics(this->showResolveErrors);
		$var($Set, var$0, static_cast<$Set*>($new($LinkedHashSet, $(static_cast<$Collection*>($nc(this->filer)->getGeneratedSourceFileObjects())))));
		$assign(round, round->next(var$0, $$new($LinkedHashMap, $($nc(this->filer)->getGeneratedClasses()))));
		if ($nc(round)->unrecoverableError()) {
			errorStatus = true;
		}
	} while (moreToDo && !errorStatus);
	round->run(true, errorStatus);
	round->showDiagnostics(true);
	$nc(this->filer)->warnIfUnclosedFiles();
	warnIfUnmatchedOptions();
	bool var$1 = $nc(this->messager)->errorRaised();
	if (!var$1) {
		bool var$2 = this->werror && round->warningCount() > 0;
		var$1 = var$2 && round->errorCount() > 0;
	}
	if (var$1) {
		errorStatus = true;
	}
	$var($Set, newSourceFiles, $new($LinkedHashSet, $(static_cast<$Collection*>($nc(this->filer)->getGeneratedSourceFileObjects()))));
	$assign(roots, round->roots);
	errorStatus = errorStatus || ($nc(this->compiler)->errorCount() > 0);
	if (newSourceFiles->size() > 0) {
		$assign(roots, $nc(roots)->appendList($($nc(this->compiler)->parseFiles(newSourceFiles))));
	}
	errorStatus = errorStatus || ($nc(this->compiler)->errorCount() > 0);
	if (errorStatus && $nc(this->compiler)->errorCount() == 0) {
		++$nc($nc(this->compiler)->log)->nerrors;
	}
	if ($nc(this->compiler)->continueAfterProcessAnnotations()) {
		round->finalCompiler();
		$nc(this->compiler)->enterTrees($($nc(this->compiler)->initModules(roots)));
	} else {
		$nc($nc(this->compiler)->todo)->clear();
	}
	this->close();
	if (!$nc(this->taskListener)->isEmpty()) {
		$init($TaskEvent$Kind);
		$nc(this->taskListener)->finished($$new($TaskEvent, $TaskEvent$Kind::ANNOTATION_PROCESSING));
	}
	return true;
}

void JavacProcessingEnvironment::warnIfUnmatchedOptions() {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->unmatchedProcessorOptions)->isEmpty()) {
		$nc(this->log)->warning($($CompilerProperties$Warnings::ProcUnmatchedProcessorOptions($($nc($of(this->unmatchedProcessorOptions))->toString()))));
	}
}

void JavacProcessingEnvironment::close() {
	$nc(this->filer)->close();
	if (this->discoveredProcs != nullptr) {
		$nc(this->discoveredProcs)->close();
	}
	$set(this, discoveredProcs, nullptr);
}

$List* JavacProcessingEnvironment::getTopLevelClasses($List* units) {
	$useLocalCurrentObjectStackCache();
	$var($List, classes, $List::nil());
	{
		$var($Iterator, i$, $nc(units)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCCompilationUnit, unit, $cast($JCTree$JCCompilationUnit, i$->next()));
			{
				{
					$var($Iterator, i$, $nc($nc(unit)->defs)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($JCTree, node, $cast($JCTree, i$->next()));
						{
							$init($JCTree$Tag);
							if ($nc(node)->hasTag($JCTree$Tag::CLASSDEF)) {
								$var($Symbol$ClassSymbol, sym, $nc(($cast($JCTree$JCClassDecl, node)))->sym);
								$Assert::checkNonNull(sym);
								$assign(classes, $nc(classes)->prepend(sym));
							}
						}
					}
				}
			}
		}
	}
	return $nc(classes)->reverse();
}

$List* JavacProcessingEnvironment::getTopLevelClassesFromClasses($List* syms) {
	$useLocalCurrentObjectStackCache();
	$var($List, classes, $List::nil());
	{
		$var($Iterator, i$, $nc(syms)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$ClassSymbol, sym, $cast($Symbol$ClassSymbol, i$->next()));
			{
				if (!isPkgInfo(sym)) {
					$assign(classes, $nc(classes)->prepend(sym));
				}
			}
		}
	}
	return $nc(classes)->reverse();
}

$List* JavacProcessingEnvironment::getPackageInfoFiles($List* units) {
	$useLocalCurrentObjectStackCache();
	$var($List, packages, $List::nil());
	{
		$var($Iterator, i$, $nc(units)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCCompilationUnit, unit, $cast($JCTree$JCCompilationUnit, i$->next()));
			{
				$init($JavaFileObject$Kind);
				if (isPkgInfo($nc(unit)->sourcefile, $JavaFileObject$Kind::SOURCE)) {
					$assign(packages, $nc(packages)->prepend($nc(unit)->packge));
				}
			}
		}
	}
	return $nc(packages)->reverse();
}

$List* JavacProcessingEnvironment::getPackageInfoFilesFromClasses($List* syms) {
	$useLocalCurrentObjectStackCache();
	$var($List, packages, $List::nil());
	{
		$var($Iterator, i$, $nc(syms)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$ClassSymbol, sym, $cast($Symbol$ClassSymbol, i$->next()));
			{
				if (isPkgInfo(sym)) {
					$assign(packages, $nc(packages)->prepend($cast($Symbol$PackageSymbol, $nc(sym)->owner)));
				}
			}
		}
	}
	return $nc(packages)->reverse();
}

$List* JavacProcessingEnvironment::getModuleInfoFiles($List* units) {
	$useLocalCurrentObjectStackCache();
	$var($List, modules, $List::nil());
	{
		$var($Iterator, i$, $nc(units)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCCompilationUnit, unit, $cast($JCTree$JCCompilationUnit, i$->next()));
			{
				$init($JavaFileObject$Kind);
				bool var$0 = isModuleInfo($nc(unit)->sourcefile, $JavaFileObject$Kind::SOURCE);
				if (var$0 && $nc($nc(unit)->defs)->nonEmpty()) {
					{
						$var($Iterator, i$, $nc(unit->defs)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($JCTree, tree, $cast($JCTree, i$->next()));
							{
								$init($JCTree$Tag);
								if ($nc(tree)->hasTag($JCTree$Tag::IMPORT)) {
									continue;
								} else {
									if (tree->hasTag($JCTree$Tag::MODULEDEF)) {
										$assign(modules, $nc(modules)->prepend(unit->modle));
										break;
									} else {
										break;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return $nc(modules)->reverse();
}

$List* JavacProcessingEnvironment::join($List* list1, $List* list2) {
	$init(JavacProcessingEnvironment);
	return $nc(list1)->appendList(list2);
}

bool JavacProcessingEnvironment::isPkgInfo($JavaFileObject* fo, $JavaFileObject$Kind* kind) {
	return $nc(fo)->isNameCompatible("package-info"_s, kind);
}

bool JavacProcessingEnvironment::isPkgInfo($Symbol$ClassSymbol* sym) {
	$init($JavaFileObject$Kind);
	bool var$0 = isPkgInfo($nc(sym)->classfile, $JavaFileObject$Kind::CLASS);
	return var$0 && ($nc($($nc(sym)->packge()))->package_info == sym);
}

bool JavacProcessingEnvironment::isModuleInfo($JavaFileObject* fo, $JavaFileObject$Kind* kind) {
	return $nc(fo)->isNameCompatible("module-info"_s, kind);
}

bool JavacProcessingEnvironment::needClassLoader($String* procNames, $Iterable* workingpath) {
	$useLocalCurrentObjectStackCache();
	if (procNames != nullptr) {
		return true;
	}
	$var($URLArray, urls, $new($URLArray, 1));
	{
		$var($Iterator, i$, $nc(workingpath)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Path, pathElement, $cast($Path, i$->next()));
			{
				try {
					urls->set(0, $($nc($($nc(pathElement)->toUri()))->toURL()));
					$load($Processor);
					if ($ServiceProxy::hasService($Processor::class$, urls)) {
						return true;
					}
				} catch ($MalformedURLException& ex) {
					$throwNew($AssertionError, $of(ex));
				} catch ($ServiceProxy$ServiceConfigurationError& e) {
					$nc(this->log)->error($($CompilerProperties$Errors::ProcBadConfigFile($(e->getLocalizedMessage()))));
					return true;
				}
			}
		}
	}
	return false;
}

bool JavacProcessingEnvironment::moreToDo() {
	return $nc(this->filer)->newFiles();
}

$Map* JavacProcessingEnvironment::getOptions() {
	return this->processorOptions;
}

$Messager* JavacProcessingEnvironment::getMessager() {
	return this->messager;
}

$Filer* JavacProcessingEnvironment::getFiler() {
	return this->filer;
}

$Elements* JavacProcessingEnvironment::getElementUtils() {
	return this->elementUtils;
}

$1Types* JavacProcessingEnvironment::getTypeUtils() {
	return this->typeUtils;
}

$SourceVersion* JavacProcessingEnvironment::getSourceVersion() {
	return $Source::toSourceVersion(this->source);
}

$Locale* JavacProcessingEnvironment::getLocale() {
	return $nc(this->messages)->getCurrentLocale();
}

bool JavacProcessingEnvironment::isPreviewEnabled() {
	return $nc(this->preview)->isEnabled();
}

$Set* JavacProcessingEnvironment::getSpecifiedPackages() {
	return this->specifiedPackages;
}

$Pattern* JavacProcessingEnvironment::importStringToPattern(bool allowModules, $String* s, $Processor* p, $Log* log, bool lint) {
	$init(JavacProcessingEnvironment);
	$useLocalCurrentObjectStackCache();
	$var($String, module, nullptr);
	$var($String, pkg, nullptr);
	int32_t slash = $nc(s)->indexOf((int32_t)u'/');
	if (slash == (-1)) {
		if (s->equals("*"_s)) {
			return $MatchingUtils::validImportStringToPattern(s);
		}
		$assign(module, allowModules ? ".*/"_s : ""_s);
		$assign(pkg, s);
	} else {
		$var($String, moduleName, s->substring(0, slash));
		if (!$SourceVersion::isName(moduleName)) {
			return warnAndNoMatches(s, p, log, lint);
		}
		$assign(module, $Pattern::quote($$str({moduleName, "/"_s})));
		$assign(pkg, s->substring(slash + 1));
	}
	if ($MatchingUtils::isValidImportString(pkg)) {
		return $Pattern::compile($$str({module, $($MatchingUtils::validImportStringToPatternString(pkg))}));
	} else {
		return warnAndNoMatches(s, p, log, lint);
	}
}

$Pattern* JavacProcessingEnvironment::warnAndNoMatches($String* s, $Processor* p, $Log* log, bool lint) {
	$init(JavacProcessingEnvironment);
	$useLocalCurrentObjectStackCache();
	if (lint) {
		$nc(log)->warning($($CompilerProperties$Warnings::ProcMalformedSupportedString(s, $($nc($of(p))->getClass()->getName()))));
	}
	return JavacProcessingEnvironment::noMatches;
}

$Context* JavacProcessingEnvironment::getContext() {
	return this->context;
}

$ClassLoader* JavacProcessingEnvironment::getProcessorClassLoader() {
	return this->processorClassLoader;
}

$String* JavacProcessingEnvironment::toString() {
	return "javac ProcessingEnvironment"_s;
}

bool JavacProcessingEnvironment::isValidOptionName($String* optionName) {
	$init(JavacProcessingEnvironment);
	$useLocalCurrentObjectStackCache();
	{
		$var($StringArray, arr$, $nc(optionName)->split("\\."_s, -1));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				if (!$SourceVersion::isIdentifier(s)) {
					return false;
				}
			}
		}
	}
	return true;
}

$Iterator* JavacProcessingEnvironment::lambda$initProcessorIterator$0($Iterator* i) {
	$init(JavacProcessingEnvironment);
	return i;
}

void clinit$JavacProcessingEnvironment($Class* class$) {
	$assignStatic(JavacProcessingEnvironment::noMatches, $Pattern::compile("(\\P{all})+"_s));
}

JavacProcessingEnvironment::JavacProcessingEnvironment() {
}

$Class* JavacProcessingEnvironment::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavacProcessingEnvironment$$Lambda$getPlugin::classInfo$.name)) {
			return JavacProcessingEnvironment$$Lambda$getPlugin::load$(name, initialize);
		}
		if (name->equals(JavacProcessingEnvironment$$Lambda$lambda$initProcessorIterator$0$1::classInfo$.name)) {
			return JavacProcessingEnvironment$$Lambda$lambda$initProcessorIterator$0$1::load$(name, initialize);
		}
	}
	$loadClass(JavacProcessingEnvironment, name, initialize, &_JavacProcessingEnvironment_ClassInfo_, clinit$JavacProcessingEnvironment, allocate$JavacProcessingEnvironment);
	return class$;
}

$Class* JavacProcessingEnvironment::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com