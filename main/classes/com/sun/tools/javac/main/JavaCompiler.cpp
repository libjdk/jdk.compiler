#include <com/sun/tools/javac/main/JavaCompiler.h>

#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/PackageTree.h>
#include <com/sun/source/util/TaskEvent$Kind.h>
#include <com/sun/source/util/TaskEvent.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter.h>
#include <com/sun/tools/javac/api/MultiTaskListener.h>
#include <com/sun/tools/javac/code/ClassFinder$BadClassFile.h>
#include <com/sun/tools/javac/code/ClassFinder.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/ModuleFinder$ModuleNameFromSourceReader.h>
#include <com/sun/tools/javac/code/ModuleFinder.h>
#include <com/sun/tools/javac/code/Preview.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/CompileStates$CompileState.h>
#include <com/sun/tools/javac/comp/CompileStates.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Flow.h>
#include <com/sun/tools/javac/comp/LambdaToMethod.h>
#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/comp/Modules$PackageNameFinder.h>
#include <com/sun/tools/javac/comp/Modules.h>
#include <com/sun/tools/javac/comp/Todo.h>
#include <com/sun/tools/javac/comp/TransPatterns.h>
#include <com/sun/tools/javac/comp/TransTypes.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/jvm/ClassWriter$PoolOverflow.h>
#include <com/sun/tools/javac/jvm/ClassWriter$StringOverflow.h>
#include <com/sun/tools/javac/jvm/ClassWriter.h>
#include <com/sun/tools/javac/jvm/Gen.h>
#include <com/sun/tools/javac/jvm/JNIWriter.h>
#include <com/sun/tools/javac/main/JavaCompiler$1.h>
#include <com/sun/tools/javac/main/JavaCompiler$1MethodBodyRemover.h>
#include <com/sun/tools/javac/main/JavaCompiler$1ScanNested.h>
#include <com/sun/tools/javac/main/JavaCompiler$2.h>
#include <com/sun/tools/javac/main/JavaCompiler$CompilePolicy.h>
#include <com/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/parser/JavacParser.h>
#include <com/sun/tools/javac/parser/Parser.h>
#include <com/sun/tools/javac/parser/ParserFactory.h>
#include <com/sun/tools/javac/platform/PlatformDescription.h>
#include <com/sun/tools/javac/processing/JavacFiler.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Notes.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/Pretty.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/Abort.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/FatalError.h>
#include <com/sun/tools/javac/util/ForwardingDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Note.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log$DeferredDiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log$DiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log$DiscardDiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log$WriterKind.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <com/sun/tools/javac/util/Position.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter.h>
#include <java/io/BufferedWriter.h>
#include <java/io/Closeable.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/io/Writer.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractQueue.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <java/util/MissingResourceException.h>
#include <java/util/Queue.h>
#include <java/util/ResourceBundle.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/function/Supplier.h>
#include <javax/annotation/processing/Filer.h>
#include <javax/lang/model/SourceVersion.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/tools/Diagnostic$Kind.h>
#include <javax/tools/DiagnosticListener.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef ABSENT_TYP
#undef ANALYZE
#undef ANNOTATION_PROCESSING
#undef ATTR
#undef BY_TODO
#undef CLASS_OUTPUT
#undef COMPILATION
#undef DEFAULT_COMPILE_POLICY
#undef ENTER
#undef ERROR
#undef FIRSTPOS
#undef FLOW
#undef GENERATE
#undef G_CUSTOM
#undef INIT
#undef INTERFACE
#undef LAMBDA
#undef LOWER
#undef MODULEDEF
#undef MODULES
#undef NATIVE_HEADER_OUTPUT
#undef NONE
#undef NOTICE
#undef OPTIONS
#undef PACKAGEDEF
#undef PARSE
#undef PCK
#undef PRINTSOURCE
#undef PROC
#undef PROCESS
#undef PROCESSOR
#undef PROCESSOR_MODULE_PATH
#undef PROCESSOR_PATH
#undef RECOVERABLE
#undef SOURCE
#undef TRANSPATTERNS
#undef TRANSTYPES
#undef UNLAMBDA
#undef UNSET
#undef VERBOSE
#undef WERROR
#undef XJCOV
#undef XLINT_CUSTOM
#undef XPRINT

using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $TaskEvent = ::com::sun::source::util::TaskEvent;
using $TaskEvent$Kind = ::com::sun::source::util::TaskEvent$Kind;
using $DiagnosticFormatter = ::com::sun::tools::javac::api::DiagnosticFormatter;
using $MultiTaskListener = ::com::sun::tools::javac::api::MultiTaskListener;
using $ClassFinder = ::com::sun::tools::javac::code::ClassFinder;
using $ClassFinder$BadClassFile = ::com::sun::tools::javac::code::ClassFinder$BadClassFile;
using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $ModuleFinder = ::com::sun::tools::javac::code::ModuleFinder;
using $ModuleFinder$ModuleNameFromSourceReader = ::com::sun::tools::javac::code::ModuleFinder$ModuleNameFromSourceReader;
using $Preview = ::com::sun::tools::javac::code::Preview;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Analyzer = ::com::sun::tools::javac::comp::Analyzer;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Check = ::com::sun::tools::javac::comp::Check;
using $CompileStates = ::com::sun::tools::javac::comp::CompileStates;
using $CompileStates$CompileState = ::com::sun::tools::javac::comp::CompileStates$CompileState;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Flow = ::com::sun::tools::javac::comp::Flow;
using $LambdaToMethod = ::com::sun::tools::javac::comp::LambdaToMethod;
using $Lower = ::com::sun::tools::javac::comp::Lower;
using $Modules = ::com::sun::tools::javac::comp::Modules;
using $Modules$PackageNameFinder = ::com::sun::tools::javac::comp::Modules$PackageNameFinder;
using $Todo = ::com::sun::tools::javac::comp::Todo;
using $TransPatterns = ::com::sun::tools::javac::comp::TransPatterns;
using $TransTypes = ::com::sun::tools::javac::comp::TransTypes;
using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassWriter = ::com::sun::tools::javac::jvm::ClassWriter;
using $ClassWriter$PoolOverflow = ::com::sun::tools::javac::jvm::ClassWriter$PoolOverflow;
using $ClassWriter$StringOverflow = ::com::sun::tools::javac::jvm::ClassWriter$StringOverflow;
using $Gen = ::com::sun::tools::javac::jvm::Gen;
using $JNIWriter = ::com::sun::tools::javac::jvm::JNIWriter;
using $JavaCompiler$1 = ::com::sun::tools::javac::main::JavaCompiler$1;
using $JavaCompiler$1MethodBodyRemover = ::com::sun::tools::javac::main::JavaCompiler$1MethodBodyRemover;
using $JavaCompiler$1ScanNested = ::com::sun::tools::javac::main::JavaCompiler$1ScanNested;
using $JavaCompiler$2 = ::com::sun::tools::javac::main::JavaCompiler$2;
using $JavaCompiler$CompilePolicy = ::com::sun::tools::javac::main::JavaCompiler$CompilePolicy;
using $JavaCompiler$ImplicitSourcePolicy = ::com::sun::tools::javac::main::JavaCompiler$ImplicitSourcePolicy;
using $Option = ::com::sun::tools::javac::main::Option;
using $JavacParser = ::com::sun::tools::javac::parser::JavacParser;
using $Parser = ::com::sun::tools::javac::parser::Parser;
using $ParserFactory = ::com::sun::tools::javac::parser::ParserFactory;
using $PlatformDescription = ::com::sun::tools::javac::platform::PlatformDescription;
using $JavacFiler = ::com::sun::tools::javac::processing::JavacFiler;
using $JavacProcessingEnvironment = ::com::sun::tools::javac::processing::JavacProcessingEnvironment;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $CompilerProperties$Notes = ::com::sun::tools::javac::resources::CompilerProperties$Notes;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $Pretty = ::com::sun::tools::javac::tree::Pretty;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $TreeTranslator = ::com::sun::tools::javac::tree::TreeTranslator;
using $Abort = ::com::sun::tools::javac::util::Abort;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $FatalError = ::com::sun::tools::javac::util::FatalError;
using $ForwardingDiagnosticFormatter = ::com::sun::tools::javac::util::ForwardingDiagnosticFormatter;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $JCDiagnostic$Note = ::com::sun::tools::javac::util::JCDiagnostic$Note;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$DeferredDiagnosticHandler = ::com::sun::tools::javac::util::Log$DeferredDiagnosticHandler;
using $Log$DiagnosticHandler = ::com::sun::tools::javac::util::Log$DiagnosticHandler;
using $Log$DiscardDiagnosticHandler = ::com::sun::tools::javac::util::Log$DiscardDiagnosticHandler;
using $Log$WriterKind = ::com::sun::tools::javac::util::Log$WriterKind;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Options = ::com::sun::tools::javac::util::Options;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $Position = ::com::sun::tools::javac::util::Position;
using $RichDiagnosticFormatter = ::com::sun::tools::javac::util::RichDiagnosticFormatter;
using $BufferedWriter = ::java::io::BufferedWriter;
using $Closeable = ::java::io::Closeable;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Writer = ::java::io::Writer;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractQueue = ::java::util::AbstractQueue;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $MissingResourceException = ::java::util::MissingResourceException;
using $Queue = ::java::util::Queue;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Supplier = ::java::util::function::Supplier;
using $SourceVersion = ::javax::lang::model::SourceVersion;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $Diagnostic$Kind = ::javax::tools::Diagnostic$Kind;
using $DiagnosticListener = ::javax::tools::DiagnosticListener;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class JavaCompiler$$Lambda$lambda$new$0 : public $Symbol$Completer {
	$class(JavaCompiler$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Symbol$Completer)
public:
	void init$(JavaCompiler* inst) {
		$set(this, inst$, inst);
	}
	virtual void complete($Symbol* sym) override {
		$nc(inst$)->lambda$new$0(sym);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavaCompiler$$Lambda$lambda$new$0>());
	}
	JavaCompiler* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavaCompiler$$Lambda$lambda$new$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavaCompiler$$Lambda$lambda$new$0, inst$)},
	{}
};
$MethodInfo JavaCompiler$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/main/JavaCompiler;)V", nullptr, $PUBLIC, $method(static_cast<void(JavaCompiler$$Lambda$lambda$new$0::*)(JavaCompiler*)>(&JavaCompiler$$Lambda$lambda$new$0::init$))},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavaCompiler$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.JavaCompiler$$Lambda$lambda$new$0",
	"java.lang.Object",
	"com.sun.tools.javac.code.Symbol$Completer",
	fieldInfos,
	methodInfos
};
$Class* JavaCompiler$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(JavaCompiler$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavaCompiler$$Lambda$lambda$new$0::class$ = nullptr;

class JavaCompiler$$Lambda$findPackageInFile$1 : public $Modules$PackageNameFinder {
	$class(JavaCompiler$$Lambda$findPackageInFile$1, $NO_CLASS_INIT, $Modules$PackageNameFinder)
public:
	void init$(JavaCompiler* inst) {
		$set(this, inst$, inst);
	}
	virtual $Name* findPackageNameOf($JavaFileObject* fo) override {
		 return $nc(inst$)->findPackageInFile(fo);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavaCompiler$$Lambda$findPackageInFile$1>());
	}
	JavaCompiler* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavaCompiler$$Lambda$findPackageInFile$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavaCompiler$$Lambda$findPackageInFile$1, inst$)},
	{}
};
$MethodInfo JavaCompiler$$Lambda$findPackageInFile$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/main/JavaCompiler;)V", nullptr, $PUBLIC, $method(static_cast<void(JavaCompiler$$Lambda$findPackageInFile$1::*)(JavaCompiler*)>(&JavaCompiler$$Lambda$findPackageInFile$1::init$))},
	{"findPackageNameOf", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavaCompiler$$Lambda$findPackageInFile$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.JavaCompiler$$Lambda$findPackageInFile$1",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Modules$PackageNameFinder",
	fieldInfos,
	methodInfos
};
$Class* JavaCompiler$$Lambda$findPackageInFile$1::load$($String* name, bool initialize) {
	$loadClass(JavaCompiler$$Lambda$findPackageInFile$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavaCompiler$$Lambda$findPackageInFile$1::class$ = nullptr;

class JavaCompiler$$Lambda$readModuleName$2 : public $ModuleFinder$ModuleNameFromSourceReader {
	$class(JavaCompiler$$Lambda$readModuleName$2, $NO_CLASS_INIT, $ModuleFinder$ModuleNameFromSourceReader)
public:
	void init$(JavaCompiler* inst) {
		$set(this, inst$, inst);
	}
	virtual $Name* readModuleName($JavaFileObject* fo) override {
		 return $nc(inst$)->readModuleName(fo);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavaCompiler$$Lambda$readModuleName$2>());
	}
	JavaCompiler* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavaCompiler$$Lambda$readModuleName$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavaCompiler$$Lambda$readModuleName$2, inst$)},
	{}
};
$MethodInfo JavaCompiler$$Lambda$readModuleName$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/main/JavaCompiler;)V", nullptr, $PUBLIC, $method(static_cast<void(JavaCompiler$$Lambda$readModuleName$2::*)(JavaCompiler*)>(&JavaCompiler$$Lambda$readModuleName$2::init$))},
	{"readModuleName", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavaCompiler$$Lambda$readModuleName$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.JavaCompiler$$Lambda$readModuleName$2",
	"java.lang.Object",
	"com.sun.tools.javac.code.ModuleFinder$ModuleNameFromSourceReader",
	fieldInfos,
	methodInfos
};
$Class* JavaCompiler$$Lambda$readModuleName$2::load$($String* name, bool initialize) {
	$loadClass(JavaCompiler$$Lambda$readModuleName$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavaCompiler$$Lambda$readModuleName$2::class$ = nullptr;

class JavaCompiler$$Lambda$lambda$readSourceFile$1$3 : public $Supplier {
	$class(JavaCompiler$$Lambda$lambda$readSourceFile$1$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$(JavaCompiler* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$readSourceFile$1());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavaCompiler$$Lambda$lambda$readSourceFile$1$3>());
	}
	JavaCompiler* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavaCompiler$$Lambda$lambda$readSourceFile$1$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavaCompiler$$Lambda$lambda$readSourceFile$1$3, inst$)},
	{}
};
$MethodInfo JavaCompiler$$Lambda$lambda$readSourceFile$1$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/main/JavaCompiler;)V", nullptr, $PUBLIC, $method(static_cast<void(JavaCompiler$$Lambda$lambda$readSourceFile$1$3::*)(JavaCompiler*)>(&JavaCompiler$$Lambda$lambda$readSourceFile$1$3::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavaCompiler$$Lambda$lambda$readSourceFile$1$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.JavaCompiler$$Lambda$lambda$readSourceFile$1$3",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* JavaCompiler$$Lambda$lambda$readSourceFile$1$3::load$($String* name, bool initialize) {
	$loadClass(JavaCompiler$$Lambda$lambda$readSourceFile$1$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavaCompiler$$Lambda$lambda$readSourceFile$1$3::class$ = nullptr;

class JavaCompiler$$Lambda$lambda$readSourceFile$2$4 : public $Supplier {
	$class(JavaCompiler$$Lambda$lambda$readSourceFile$2$4, $NO_CLASS_INIT, $Supplier)
public:
	void init$(JavaCompiler* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$readSourceFile$2());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavaCompiler$$Lambda$lambda$readSourceFile$2$4>());
	}
	JavaCompiler* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavaCompiler$$Lambda$lambda$readSourceFile$2$4::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavaCompiler$$Lambda$lambda$readSourceFile$2$4, inst$)},
	{}
};
$MethodInfo JavaCompiler$$Lambda$lambda$readSourceFile$2$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/main/JavaCompiler;)V", nullptr, $PUBLIC, $method(static_cast<void(JavaCompiler$$Lambda$lambda$readSourceFile$2$4::*)(JavaCompiler*)>(&JavaCompiler$$Lambda$lambda$readSourceFile$2$4::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavaCompiler$$Lambda$lambda$readSourceFile$2$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.JavaCompiler$$Lambda$lambda$readSourceFile$2$4",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* JavaCompiler$$Lambda$lambda$readSourceFile$2$4::load$($String* name, bool initialize) {
	$loadClass(JavaCompiler$$Lambda$lambda$readSourceFile$2$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavaCompiler$$Lambda$lambda$readSourceFile$2$4::class$ = nullptr;

class JavaCompiler$$Lambda$lambda$readModuleName$3$5 : public $Function {
	$class(JavaCompiler$$Lambda$lambda$readModuleName$3$5, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* t) override {
		 return $of(JavaCompiler::lambda$readModuleName$3($cast($JCTree$JCCompilationUnit, t)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavaCompiler$$Lambda$lambda$readModuleName$3$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavaCompiler$$Lambda$lambda$readModuleName$3$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaCompiler$$Lambda$lambda$readModuleName$3$5::*)()>(&JavaCompiler$$Lambda$lambda$readModuleName$3$5::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavaCompiler$$Lambda$lambda$readModuleName$3$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.JavaCompiler$$Lambda$lambda$readModuleName$3$5",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavaCompiler$$Lambda$lambda$readModuleName$3$5::load$($String* name, bool initialize) {
	$loadClass(JavaCompiler$$Lambda$lambda$readModuleName$3$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavaCompiler$$Lambda$lambda$readModuleName$3$5::class$ = nullptr;

class JavaCompiler$$Lambda$lambda$findPackageInFile$4$6 : public $Function {
	$class(JavaCompiler$$Lambda$lambda$findPackageInFile$4$6, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* t) override {
		 return $of(JavaCompiler::lambda$findPackageInFile$4($cast($JCTree$JCCompilationUnit, t)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavaCompiler$$Lambda$lambda$findPackageInFile$4$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavaCompiler$$Lambda$lambda$findPackageInFile$4$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaCompiler$$Lambda$lambda$findPackageInFile$4$6::*)()>(&JavaCompiler$$Lambda$lambda$findPackageInFile$4$6::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavaCompiler$$Lambda$lambda$findPackageInFile$4$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.JavaCompiler$$Lambda$lambda$findPackageInFile$4$6",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavaCompiler$$Lambda$lambda$findPackageInFile$4$6::load$($String* name, bool initialize) {
	$loadClass(JavaCompiler$$Lambda$lambda$findPackageInFile$4$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavaCompiler$$Lambda$lambda$findPackageInFile$4$6::class$ = nullptr;

$CompoundAttribute _JavaCompiler_MethodAnnotations_parse38[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _JavaCompiler_FieldInfo_[] = {
	{"compilerKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/main/JavaCompiler;>;", $PUBLIC | $STATIC | $FINAL, $staticField(JavaCompiler, compilerKey)},
	{"versionRBName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavaCompiler, versionRBName)},
	{"versionRB", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticField(JavaCompiler, versionRB)},
	{"DEFAULT_COMPILE_POLICY", "Lcom/sun/tools/javac/main/JavaCompiler$CompilePolicy;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavaCompiler, DEFAULT_COMPILE_POLICY)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PUBLIC, $field(JavaCompiler, log)},
	{"diagFactory", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, 0, $field(JavaCompiler, diagFactory)},
	{"make", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $PROTECTED, $field(JavaCompiler, make)},
	{"finder", "Lcom/sun/tools/javac/code/ClassFinder;", nullptr, $PROTECTED, $field(JavaCompiler, finder)},
	{"reader", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $PROTECTED, $field(JavaCompiler, reader)},
	{"writer", "Lcom/sun/tools/javac/jvm/ClassWriter;", nullptr, $PROTECTED, $field(JavaCompiler, writer)},
	{"jniWriter", "Lcom/sun/tools/javac/jvm/JNIWriter;", nullptr, $PROTECTED, $field(JavaCompiler, jniWriter)},
	{"enter", "Lcom/sun/tools/javac/comp/Enter;", nullptr, $PROTECTED, $field(JavaCompiler, enter)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PROTECTED, $field(JavaCompiler, syms)},
	{"source", "Lcom/sun/tools/javac/code/Source;", nullptr, $PROTECTED, $field(JavaCompiler, source)},
	{"preview", "Lcom/sun/tools/javac/code/Preview;", nullptr, $PROTECTED, $field(JavaCompiler, preview)},
	{"gen", "Lcom/sun/tools/javac/jvm/Gen;", nullptr, $PROTECTED, $field(JavaCompiler, gen)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PROTECTED, $field(JavaCompiler, names)},
	{"attr", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $PROTECTED, $field(JavaCompiler, attr)},
	{"analyzer", "Lcom/sun/tools/javac/comp/Analyzer;", nullptr, $PROTECTED, $field(JavaCompiler, analyzer)},
	{"chk", "Lcom/sun/tools/javac/comp/Check;", nullptr, $PROTECTED, $field(JavaCompiler, chk)},
	{"flow", "Lcom/sun/tools/javac/comp/Flow;", nullptr, $PROTECTED, $field(JavaCompiler, flow$)},
	{"modules", "Lcom/sun/tools/javac/comp/Modules;", nullptr, $PROTECTED, $field(JavaCompiler, modules)},
	{"moduleFinder", "Lcom/sun/tools/javac/code/ModuleFinder;", nullptr, $PROTECTED, $field(JavaCompiler, moduleFinder)},
	{"diags", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, $PROTECTED, $field(JavaCompiler, diags)},
	{"dcfh", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;", nullptr, $PROTECTED, $field(JavaCompiler, dcfh)},
	{"transTypes", "Lcom/sun/tools/javac/comp/TransTypes;", nullptr, $PROTECTED, $field(JavaCompiler, transTypes)},
	{"lower", "Lcom/sun/tools/javac/comp/Lower;", nullptr, $PROTECTED, $field(JavaCompiler, lower)},
	{"annotate", "Lcom/sun/tools/javac/comp/Annotate;", nullptr, $PROTECTED, $field(JavaCompiler, annotate)},
	{"completionFailureName", "Lcom/sun/tools/javac/util/Name;", nullptr, $PROTECTED | $FINAL, $field(JavaCompiler, completionFailureName)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PROTECTED, $field(JavaCompiler, types)},
	{"fileManager", "Ljavax/tools/JavaFileManager;", nullptr, $PROTECTED, $field(JavaCompiler, fileManager)},
	{"parserFactory", "Lcom/sun/tools/javac/parser/ParserFactory;", nullptr, $PROTECTED, $field(JavaCompiler, parserFactory)},
	{"taskListener", "Lcom/sun/tools/javac/api/MultiTaskListener;", nullptr, $PROTECTED, $field(JavaCompiler, taskListener)},
	{"sourceCompleter", "Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $PROTECTED | $FINAL, $field(JavaCompiler, sourceCompleter)},
	{"options", "Lcom/sun/tools/javac/util/Options;", nullptr, $PROTECTED, $field(JavaCompiler, options)},
	{"context", "Lcom/sun/tools/javac/util/Context;", nullptr, $PROTECTED, $field(JavaCompiler, context)},
	{"annotationProcessingOccurred", "Z", nullptr, $PROTECTED, $field(JavaCompiler, annotationProcessingOccurred)},
	{"implicitSourceFilesRead", "Z", nullptr, $PROTECTED, $field(JavaCompiler, implicitSourceFilesRead)},
	{"enterDone", "Z", nullptr, $PRIVATE, $field(JavaCompiler, enterDone$)},
	{"compileStates", "Lcom/sun/tools/javac/comp/CompileStates;", nullptr, $PROTECTED, $field(JavaCompiler, compileStates)},
	{"verbose", "Z", nullptr, $PUBLIC, $field(JavaCompiler, verbose)},
	{"sourceOutput", "Z", nullptr, $PUBLIC, $field(JavaCompiler, sourceOutput)},
	{"lineDebugInfo", "Z", nullptr, $PUBLIC, $field(JavaCompiler, lineDebugInfo)},
	{"genEndPos", "Z", nullptr, $PUBLIC, $field(JavaCompiler, genEndPos)},
	{"devVerbose", "Z", nullptr, $PROTECTED, $field(JavaCompiler, devVerbose)},
	{"processPcks", "Z", nullptr, $PROTECTED, $field(JavaCompiler, processPcks)},
	{"werror", "Z", nullptr, $PROTECTED, $field(JavaCompiler, werror)},
	{"explicitAnnotationProcessingRequested", "Z", nullptr, $PROTECTED, $field(JavaCompiler, explicitAnnotationProcessingRequested$)},
	{"compilePolicy", "Lcom/sun/tools/javac/main/JavaCompiler$CompilePolicy;", nullptr, $PROTECTED, $field(JavaCompiler, compilePolicy)},
	{"implicitSourcePolicy", "Lcom/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy;", nullptr, $PROTECTED, $field(JavaCompiler, implicitSourcePolicy)},
	{"verboseCompilePolicy", "Z", nullptr, $PUBLIC, $field(JavaCompiler, verboseCompilePolicy)},
	{"shouldStopPolicyIfError", "Lcom/sun/tools/javac/comp/CompileStates$CompileState;", nullptr, $PUBLIC, $field(JavaCompiler, shouldStopPolicyIfError)},
	{"shouldStopPolicyIfNoError", "Lcom/sun/tools/javac/comp/CompileStates$CompileState;", nullptr, $PUBLIC, $field(JavaCompiler, shouldStopPolicyIfNoError)},
	{"todo", "Lcom/sun/tools/javac/comp/Todo;", nullptr, $PUBLIC, $field(JavaCompiler, todo)},
	{"closeables", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Ljava/io/Closeable;>;", $PUBLIC, $field(JavaCompiler, closeables)},
	{"inputFiles", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/tools/JavaFileObject;>;", $PROTECTED, $field(JavaCompiler, inputFiles)},
	{"silentFail", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE | $FINAL, $field(JavaCompiler, silentFail)},
	{"keepComments", "Z", nullptr, $PUBLIC, $field(JavaCompiler, keepComments$)},
	{"hasBeenUsed", "Z", nullptr, $PRIVATE, $field(JavaCompiler, hasBeenUsed)},
	{"start_msec", "J", nullptr, $PRIVATE, $field(JavaCompiler, start_msec)},
	{"elapsed_msec", "J", nullptr, $PUBLIC, $field(JavaCompiler, elapsed_msec)},
	{"rootClasses", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;>;", $PRIVATE, $field(JavaCompiler, rootClasses)},
	{"processAnnotations", "Z", nullptr, 0, $field(JavaCompiler, processAnnotations$)},
	{"deferredDiagnosticHandler", "Lcom/sun/tools/javac/util/Log$DeferredDiagnosticHandler;", nullptr, 0, $field(JavaCompiler, deferredDiagnosticHandler)},
	{"procEnvImpl", "Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;", nullptr, $PRIVATE, $field(JavaCompiler, procEnvImpl)},
	{"desugaredEnvs", "Ljava/util/HashMap;", "Ljava/util/HashMap<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Ljava/util/Queue<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;>;>;>;", 0, $field(JavaCompiler, desugaredEnvs)},
	{}
};

$MethodInfo _JavaCompiler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PUBLIC, $method(static_cast<void(JavaCompiler::*)($Context*)>(&JavaCompiler::init$))},
	{"attribute", "(Ljava/util/Queue;)Ljava/util/Queue;", "(Ljava/util/Queue<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;)Ljava/util/Queue<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", $PUBLIC},
	{"attribute", "(Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC},
	{"checkReusable", "()V", nullptr, $PROTECTED},
	{"close", "()V", nullptr, $PUBLIC},
	{"compile", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Ljavax/tools/JavaFileObject;>;)V", $PUBLIC, nullptr, "java.lang.Throwable"},
	{"compile", "(Ljava/util/Collection;Ljava/util/Collection;Ljava/lang/Iterable;Ljava/util/Collection;)V", "(Ljava/util/Collection<Ljavax/tools/JavaFileObject;>;Ljava/util/Collection<Ljava/lang/String;>;Ljava/lang/Iterable<+Ljavax/annotation/processing/Processor;>;Ljava/util/Collection<Ljava/lang/String;>;)V", $PUBLIC},
	{"continueAfterProcessAnnotations", "()Z", nullptr, $PUBLIC},
	{"desugar", "(Ljava/util/Queue;)Ljava/util/Queue;", "(Ljava/util/Queue<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;)Ljava/util/Queue<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;>;>;", $PUBLIC},
	{"desugar", "(Lcom/sun/tools/javac/comp/Env;Ljava/util/Queue;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Ljava/util/Queue<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;>;>;)V", $PROTECTED},
	{"elapsed", "(J)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&JavaCompiler::elapsed))},
	{"enterDone", "()V", nullptr, $PUBLIC},
	{"enterTrees", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;", $PUBLIC},
	{"errorCount", "()I", nullptr, $PUBLIC},
	{"explicitAnnotationProcessingRequested", "()Z", nullptr, 0},
	{"explicitAnnotationProcessingRequested", "(Lcom/sun/tools/javac/util/Options;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Options*)>(&JavaCompiler::explicitAnnotationProcessingRequested))},
	{"findPackageInFile", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE, $method(static_cast<$Name*(JavaCompiler::*)($JavaFileObject*)>(&JavaCompiler::findPackageInFile))},
	{"flow", "(Ljava/util/Queue;)Ljava/util/Queue;", "(Ljava/util/Queue<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;)Ljava/util/Queue<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", $PUBLIC},
	{"flow", "(Lcom/sun/tools/javac/comp/Env;)Ljava/util/Queue;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Ljava/util/Queue<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", $PUBLIC},
	{"flow", "(Lcom/sun/tools/javac/comp/Env;Ljava/util/Queue;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Ljava/util/Queue<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;)V", $PROTECTED},
	{"fullVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)()>(&JavaCompiler::fullVersion))},
	{"genCode", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Ljavax/tools/JavaFileObject;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Ljavax/tools/JavaFileObject;", 0, nullptr, "java.io.IOException"},
	{"generate", "(Ljava/util/Queue;)V", "(Ljava/util/Queue<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;>;>;)V", $PUBLIC},
	{"generate", "(Ljava/util/Queue;Ljava/util/Queue;)V", "(Ljava/util/Queue<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;>;>;Ljava/util/Queue<Ljavax/tools/JavaFileObject;>;)V", $PUBLIC},
	{"groupByFile", "(Ljava/util/Queue;)Ljava/util/Map;", "(Ljava/util/Queue<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;)Ljava/util/Map<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;Ljava/util/Queue<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;>;", 0},
	{"initModules", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;", $PUBLIC},
	{"initProcessAnnotations", "(Ljava/lang/Iterable;Ljava/util/Collection;Ljava/util/Collection;)V", "(Ljava/lang/Iterable<+Ljavax/annotation/processing/Processor;>;Ljava/util/Collection<+Ljavax/tools/JavaFileObject;>;Ljava/util/Collection<Ljava/lang/String;>;)V", $PUBLIC},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/main/JavaCompiler;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavaCompiler*(*)($Context*)>(&JavaCompiler::instance))},
	{"isEnterDone", "()Z", nullptr, $PUBLIC},
	{"keepComments", "()Z", nullptr, $PROTECTED},
	{"lambda$findPackageInFile$4", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Name*(*)($JCTree$JCCompilationUnit*)>(&JavaCompiler::lambda$findPackageInFile$4))},
	{"lambda$new$0", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(JavaCompiler::*)($Symbol*)>(&JavaCompiler::lambda$new$0)), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"lambda$readModuleName$3", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Name*(*)($JCTree$JCCompilationUnit*)>(&JavaCompiler::lambda$readModuleName$3))},
	{"lambda$readSourceFile$1", "()Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$JCDiagnostic*(JavaCompiler::*)()>(&JavaCompiler::lambda$readSourceFile$1))},
	{"lambda$readSourceFile$2", "()Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$JCDiagnostic*(JavaCompiler::*)()>(&JavaCompiler::lambda$readSourceFile$2))},
	{"newRound", "()V", nullptr, $PUBLIC},
	{"now", "()J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)()>(&JavaCompiler::now))},
	{"parse", "(Ljavax/tools/JavaFileObject;Ljava/lang/CharSequence;)Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", nullptr, $PROTECTED},
	{"parse", "(Ljava/lang/String;)Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _JavaCompiler_MethodAnnotations_parse38},
	{"parse", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", nullptr, $PUBLIC},
	{"parseAndGetName", "(Ljavax/tools/JavaFileObject;Ljava/util/function/Function;)Lcom/sun/tools/javac/util/Name;", "(Ljavax/tools/JavaFileObject;Ljava/util/function/Function<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;Lcom/sun/tools/javac/util/Name;>;)Lcom/sun/tools/javac/util/Name;", $PRIVATE, $method(static_cast<$Name*(JavaCompiler::*)($JavaFileObject*,$Function*)>(&JavaCompiler::parseAndGetName))},
	{"parseFiles", "(Ljava/lang/Iterable;)Lcom/sun/tools/javac/util/List;", "(Ljava/lang/Iterable<Ljavax/tools/JavaFileObject;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;", $PUBLIC},
	{"parseFiles", "(Ljava/lang/Iterable;Z)Lcom/sun/tools/javac/util/List;", "(Ljava/lang/Iterable<Ljavax/tools/JavaFileObject;>;Z)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;", $PUBLIC},
	{"printCount", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"printNote", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"printSource", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Ljavax/tools/JavaFileObject;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Ljavax/tools/JavaFileObject;", 0, nullptr, "java.io.IOException"},
	{"printSuppressedCount", "(IILjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(JavaCompiler::*)(int32_t,int32_t,$String*)>(&JavaCompiler::printSuppressedCount))},
	{"processAnnotations", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;)V", $PUBLIC},
	{"processAnnotations", "(Lcom/sun/tools/javac/util/List;Ljava/util/Collection;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;Ljava/util/Collection<Ljava/lang/String;>;)V", $PUBLIC},
	{"readModuleName", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE, $method(static_cast<$Name*(JavaCompiler::*)($JavaFileObject*)>(&JavaCompiler::readModuleName))},
	{"readSource", "(Ljavax/tools/JavaFileObject;)Ljava/lang/CharSequence;", nullptr, $PUBLIC},
	{"readSourceFile", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(JavaCompiler::*)($Symbol$ClassSymbol*)>(&JavaCompiler::readSourceFile)), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"readSourceFile", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"removeMethodBodies", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, 0},
	{"reportDeferredDiagnostics", "()V", nullptr, $PUBLIC},
	{"resolveBinaryNameOrIdent", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"resolveBinaryNameOrIdent", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/lang/String;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"resolveIdent", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/lang/String;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"setDeferredDiagnosticHandler", "(Lcom/sun/tools/javac/util/Log$DeferredDiagnosticHandler;)V", nullptr, $PUBLIC},
	{"shouldStop", "(Lcom/sun/tools/javac/comp/CompileStates$CompileState;)Z", nullptr, $PROTECTED},
	{"stopIfError", "(Lcom/sun/tools/javac/comp/CompileStates$CompileState;Ljava/util/Queue;)Ljava/util/Queue;", "<T:Ljava/lang/Object;>(Lcom/sun/tools/javac/comp/CompileStates$CompileState;Ljava/util/Queue<TT;>;)Ljava/util/Queue<TT;>;", $PROTECTED | $FINAL, $method(static_cast<$Queue*(JavaCompiler::*)($CompileStates$CompileState*,$Queue*)>(&JavaCompiler::stopIfError))},
	{"stopIfError", "(Lcom/sun/tools/javac/comp/CompileStates$CompileState;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "<T:Ljava/lang/Object;>(Lcom/sun/tools/javac/comp/CompileStates$CompileState;Lcom/sun/tools/javac/util/List<TT;>;)Lcom/sun/tools/javac/util/List<TT;>;", $PROTECTED | $FINAL, $method(static_cast<$List*(JavaCompiler::*)($CompileStates$CompileState*,$List*)>(&JavaCompiler::stopIfError))},
	{"unrecoverableError", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(JavaCompiler::*)()>(&JavaCompiler::unrecoverableError))},
	{"version", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)()>(&JavaCompiler::version))},
	{"version", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&JavaCompiler::version))},
	{"warningCount", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavaCompiler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.JavaCompiler$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.main.JavaCompiler$ImplicitSourcePolicy", "com.sun.tools.javac.main.JavaCompiler", "ImplicitSourcePolicy", $PROTECTED | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.main.JavaCompiler$CompilePolicy", "com.sun.tools.javac.main.JavaCompiler", "CompilePolicy", $PROTECTED | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.main.JavaCompiler$1MethodBodyRemover", nullptr, "MethodBodyRemover", 0},
	{"com.sun.tools.javac.main.JavaCompiler$1ScanNested", nullptr, "ScanNested", 0},
	{"com.sun.tools.javac.main.JavaCompiler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavaCompiler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.main.JavaCompiler",
	"java.lang.Object",
	nullptr,
	_JavaCompiler_FieldInfo_,
	_JavaCompiler_MethodInfo_,
	nullptr,
	nullptr,
	_JavaCompiler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.JavaCompiler$2,com.sun.tools.javac.main.JavaCompiler$ImplicitSourcePolicy,com.sun.tools.javac.main.JavaCompiler$CompilePolicy,com.sun.tools.javac.main.JavaCompiler$1MethodBodyRemover,com.sun.tools.javac.main.JavaCompiler$1ScanNested,com.sun.tools.javac.main.JavaCompiler$1"
};

$Object* allocate$JavaCompiler($Class* clazz) {
	return $of($alloc(JavaCompiler));
}

$Context$Key* JavaCompiler::compilerKey = nullptr;
$String* JavaCompiler::versionRBName = nullptr;
$ResourceBundle* JavaCompiler::versionRB = nullptr;
$JavaCompiler$CompilePolicy* JavaCompiler::DEFAULT_COMPILE_POLICY = nullptr;

JavaCompiler* JavaCompiler::instance($Context* context) {
	$init(JavaCompiler);
	$var(JavaCompiler, instance, $cast(JavaCompiler, $nc(context)->get(JavaCompiler::compilerKey)));
	if (instance == nullptr) {
		$assign(instance, $new(JavaCompiler, context));
	}
	return instance;
}

$String* JavaCompiler::version() {
	$init(JavaCompiler);
	return version("release"_s);
}

$String* JavaCompiler::fullVersion() {
	$init(JavaCompiler);
	return version("full"_s);
}

$String* JavaCompiler::version($String* key) {
	$init(JavaCompiler);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (JavaCompiler::versionRB == nullptr) {
		try {
			$assignStatic(JavaCompiler::versionRB, $ResourceBundle::getBundle(JavaCompiler::versionRBName));
		} catch ($MissingResourceException& e) {
			return $Log::getLocalizedString("version.not.available"_s, $$new($ObjectArray, 0));
		}
	}
	try {
		return $nc(JavaCompiler::versionRB)->getString(key);
	} catch ($MissingResourceException& e) {
		return $Log::getLocalizedString("version.not.available"_s, $$new($ObjectArray, 0));
	}
	$shouldNotReachHere();
}

void JavaCompiler::init$($Context* context) {
	$useLocalCurrentObjectStackCache();
	$set(this, sourceCompleter, static_cast<$Symbol$Completer*>($new(JavaCompiler$$Lambda$lambda$new$0, this)));
	this->explicitAnnotationProcessingRequested$ = false;
	$set(this, closeables, $List::nil());
	$set(this, inputFiles, $new($HashSet));
	this->keepComments$ = false;
	this->hasBeenUsed = false;
	this->start_msec = 0;
	this->elapsed_msec = 0;
	this->processAnnotations$ = false;
	$set(this, procEnvImpl, nullptr);
	$set(this, desugaredEnvs, $new($HashMap));
	$set(this, context, context);
	$nc(context)->put(JavaCompiler::compilerKey, $of(this));
	$load($JavaFileManager);
	if (context->get($JavaFileManager::class$) == nullptr) {
		$JavacFileManager::preRegister(context);
	}
	$set(this, names, $Names::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, diagFactory, $JCDiagnostic$Factory::instance(context));
	$set(this, finder, $ClassFinder::instance(context));
	$set(this, reader, $ClassReader::instance(context));
	$set(this, make, $TreeMaker::instance(context));
	$set(this, writer, $ClassWriter::instance(context));
	$set(this, jniWriter, $JNIWriter::instance(context));
	$set(this, enter, $Enter::instance(context));
	$set(this, todo, $Todo::instance(context));
	$set(this, fileManager, $cast($JavaFileManager, context->get($JavaFileManager::class$)));
	$set(this, parserFactory, $ParserFactory::instance(context));
	$set(this, compileStates, $CompileStates::instance(context));
	try {
		$set(this, syms, $Symtab::instance(context));
	} catch ($Symbol$CompletionFailure& ex) {
		$nc(this->log)->error($($CompilerProperties$Errors::CantAccess(ex->sym, $(ex->getDetailValue()))));
	}
	$set(this, source, $Source::instance(context));
	$set(this, preview, $Preview::instance(context));
	$set(this, attr, $Attr::instance(context));
	$set(this, analyzer, $Analyzer::instance(context));
	$set(this, chk, $Check::instance(context));
	$set(this, gen, $Gen::instance(context));
	$set(this, flow$, $Flow::instance(context));
	$set(this, transTypes, $TransTypes::instance(context));
	$set(this, lower, $Lower::instance(context));
	$set(this, annotate, $Annotate::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, taskListener, $MultiTaskListener::instance(context));
	$set(this, modules, $Modules::instance(context));
	$set(this, moduleFinder, $ModuleFinder::instance(context));
	$set(this, diags, $JCDiagnostic$Factory::instance(context));
	$set(this, dcfh, $DeferredCompletionFailureHandler::instance(context));
	$set($nc(this->finder), sourceCompleter, this->sourceCompleter);
	$set($nc(this->modules), findPackageInFile, static_cast<$Modules$PackageNameFinder*>($new(JavaCompiler$$Lambda$findPackageInFile$1, this)));
	$set($nc(this->moduleFinder), moduleNameFromSourceReader, static_cast<$ModuleFinder$ModuleNameFromSourceReader*>($new(JavaCompiler$$Lambda$readModuleName$2, this)));
	$set(this, options, $Options::instance(context));
	$init($Option);
	this->verbose = $nc(this->options)->isSet($Option::VERBOSE);
	this->sourceOutput = $nc(this->options)->isSet($Option::PRINTSOURCE);
	bool var$0 = $nc(this->options)->isUnset($Option::G_CUSTOM);
	this->lineDebugInfo = var$0 || $nc(this->options)->isSet($Option::G_CUSTOM, "lines"_s);
	bool var$1 = $nc(this->options)->isSet($Option::XJCOV);
	$load($DiagnosticListener);
	this->genEndPos = var$1 || context->get($DiagnosticListener::class$) != nullptr;
	this->devVerbose = $nc(this->options)->isSet("dev"_s);
	this->processPcks = $nc(this->options)->isSet("process.packages"_s);
	this->werror = $nc(this->options)->isSet($Option::WERROR);
	this->verboseCompilePolicy = $nc(this->options)->isSet("verboseCompilePolicy"_s);
	$set(this, compilePolicy, $JavaCompiler$CompilePolicy::decode($($nc(this->options)->get("compilePolicy"_s))));
	$set(this, implicitSourcePolicy, $JavaCompiler$ImplicitSourcePolicy::decode($($nc(this->options)->get("-implicit"_s))));
	$set(this, completionFailureName, $nc(this->options)->isSet("failcomplete"_s) ? $nc(this->names)->fromString($($nc(this->options)->get("failcomplete"_s))) : ($Name*)nullptr);
	$init($CompileStates$CompileState);
	$set(this, shouldStopPolicyIfError, $nc(this->options)->isSet("should-stop.at"_s) ? $CompileStates$CompileState::valueOf($($nc(this->options)->get("should-stop.at"_s))) : $nc(this->options)->isSet("should-stop.ifError"_s) ? $CompileStates$CompileState::valueOf($($nc(this->options)->get("should-stop.ifError"_s))) : $CompileStates$CompileState::INIT);
	$set(this, shouldStopPolicyIfNoError, $nc(this->options)->isSet("should-stop.ifNoError"_s) ? $CompileStates$CompileState::valueOf($($nc(this->options)->get("should-stop.ifNoError"_s))) : $CompileStates$CompileState::GENERATE);
	if ($nc(this->options)->isUnset("diags.legacy"_s)) {
		$nc(this->log)->setDiagnosticFormatter($($RichDiagnosticFormatter::instance(context)));
	}
	$load($PlatformDescription);
	$var($PlatformDescription, platformProvider, $cast($PlatformDescription, context->get($PlatformDescription::class$)));
	if (platformProvider != nullptr) {
		$set(this, closeables, $nc(this->closeables)->prepend(platformProvider));
	}
	$init($Kinds$Kind);
	$init($Type);
	$set(this, silentFail, $new($JavaCompiler$1, this, $Kinds$Kind::ABSENT_TYP, 0, $nc(this->names)->empty, $Type::noType, $nc(this->syms)->rootPackage));
}

bool JavaCompiler::shouldStop($CompileStates$CompileState* cs) {
	bool var$0 = errorCount() > 0;
	$CompileStates$CompileState* shouldStopPolicy = (var$0 || unrecoverableError()) ? this->shouldStopPolicyIfError : this->shouldStopPolicyIfNoError;
	return $nc(cs)->isAfter(shouldStopPolicy);
}

int32_t JavaCompiler::errorCount() {
	if (this->werror && $nc(this->log)->nerrors == 0 && $nc(this->log)->nwarnings > 0) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($CompilerProperties$Errors::WarningsAndWerror);
	}
	return $nc(this->log)->nerrors;
}

$Queue* JavaCompiler::stopIfError($CompileStates$CompileState* cs, $Queue* queue) {
	return shouldStop(cs) ? static_cast<$Queue*>($new($ListBuffer)) : queue;
}

$List* JavaCompiler::stopIfError($CompileStates$CompileState* cs, $List* list) {
	return shouldStop(cs) ? $List::nil() : list;
}

int32_t JavaCompiler::warningCount() {
	return $nc(this->log)->nwarnings;
}

$CharSequence* JavaCompiler::readSource($JavaFileObject* filename) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(this->inputFiles)->add(filename);
		return $nc(filename)->getCharContent(false);
	} catch ($IOException& e) {
		$nc(this->log)->error($($CompilerProperties$Errors::ErrorReadingFile(filename, $($JavacFileManager::getMessage(e)))));
		return nullptr;
	}
	$shouldNotReachHere();
}

$JCTree$JCCompilationUnit* JavaCompiler::parse($JavaFileObject* filename, $CharSequence* content) {
	$useLocalCurrentObjectStackCache();
	int64_t msec = now();
	$var($JCTree$JCCompilationUnit, tree, $nc(this->make)->TopLevel($($List::nil())));
	if (content != nullptr) {
		if (this->verbose) {
			$nc(this->log)->printVerbose("parsing.started"_s, $$new($ObjectArray, {$of(filename)}));
		}
		if (!$nc(this->taskListener)->isEmpty()) {
			$init($TaskEvent$Kind);
			$var($TaskEvent, e, $new($TaskEvent, $TaskEvent$Kind::PARSE, filename));
			$nc(this->taskListener)->started(e);
			this->keepComments$ = true;
			this->genEndPos = true;
		}
		$var($CharSequence, var$0, content);
		bool var$1 = keepComments();
		bool var$2 = this->genEndPos;
		bool var$3 = this->lineDebugInfo;
		$init($JavaFileObject$Kind);
		$var($Parser, parser, $nc(this->parserFactory)->newParser(var$0, var$1, var$2, var$3, $nc(filename)->isNameCompatible("module-info"_s, $JavaFileObject$Kind::SOURCE)));
		$assign(tree, $nc(parser)->parseCompilationUnit());
		if (this->verbose) {
			$nc(this->log)->printVerbose("parsing.done"_s, $$new($ObjectArray, {$($of($Long::toString(elapsed(msec))))}));
		}
	}
	$set($nc(tree), sourcefile, filename);
	if (content != nullptr && !$nc(this->taskListener)->isEmpty()) {
		$init($TaskEvent$Kind);
		$var($TaskEvent, e, $new($TaskEvent, $TaskEvent$Kind::PARSE, static_cast<$CompilationUnitTree*>(tree)));
		$nc(this->taskListener)->finished(e);
	}
	return tree;
}

bool JavaCompiler::keepComments() {
	return this->keepComments$ || this->sourceOutput;
}

$JCTree$JCCompilationUnit* JavaCompiler::parse($String* filename) {
	$useLocalCurrentObjectStackCache();
	$var($JavacFileManager, fm, $cast($JavacFileManager, this->fileManager));
	return parse($cast($JavaFileObject, $($nc($($nc($($nc(fm)->getJavaFileObjectsFromStrings($(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($List::of(filename))))))))->iterator()))->next())));
}

$JCTree$JCCompilationUnit* JavaCompiler::parse($JavaFileObject* filename) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, prev, $nc(this->log)->useSource(filename));
	{
		$var($Throwable, var$0, nullptr);
		$var($JCTree$JCCompilationUnit, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($JCTree$JCCompilationUnit, t, parse(filename, $(readSource(filename))));
			if ($nc(t)->endPositions != nullptr) {
				$nc(this->log)->setEndPosTable(filename, t->endPositions);
			}
			$assign(var$2, t);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->log)->useSource(prev);
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

$Symbol* JavaCompiler::resolveBinaryNameOrIdent($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ModuleSymbol, msym, nullptr);
	$var($String, typeName, nullptr);
	int32_t sep = $nc(name)->indexOf((int32_t)u'/');
	if (sep == -1) {
		$assign(msym, $nc(this->modules)->getDefaultModule());
		$assign(typeName, name);
	} else {
		$init($Source$Feature);
		if ($Source$Feature::MODULES->allowedInSource(this->source)) {
			$var($Name, modName, $nc(this->names)->fromString($(name->substring(0, sep))));
			$assign(msym, $nc(this->moduleFinder)->findModule(modName));
			$assign(typeName, name->substring(sep + 1));
		} else {
			$nc(this->log)->error($($CompilerProperties$Errors::InvalidModuleSpecifier(name)));
			return this->silentFail;
		}
	}
	return resolveBinaryNameOrIdent(msym, typeName);
}

$Symbol* JavaCompiler::resolveBinaryNameOrIdent($Symbol$ModuleSymbol* msym, $String* name) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Name, flatname, $nc(this->names)->fromString($($nc(name)->replace(static_cast<$CharSequence*>("/"_s), static_cast<$CharSequence*>("."_s)))));
		return $nc(this->finder)->loadClass(msym, flatname);
	} catch ($Symbol$CompletionFailure& ignore) {
		return resolveIdent(msym, name);
	}
	$shouldNotReachHere();
}

$Symbol* JavaCompiler::resolveIdent($Symbol$ModuleSymbol* msym, $String* name) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->equals(""_s)) {
		return $nc(this->syms)->errSymbol;
	}
	$var($JavaFileObject, prev, $nc(this->log)->useSource(nullptr));
	{
		$var($Throwable, var$0, nullptr);
		$var($Symbol, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($JCTree$JCExpression, tree, nullptr);
			{
				$var($StringArray, arr$, $nc(name)->split("\\."_s, -1));
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($String, s, arr$->get(i$));
					{
						if (!$SourceVersion::isIdentifier(s)) {
							$assign(var$2, $nc(this->syms)->errSymbol);
							return$1 = true;
							goto $finally;
						}
						$assign(tree, (tree == nullptr) ? static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident($($nc(this->names)->fromString(s)))) : static_cast<$JCTree$JCExpression*>($nc(this->make)->Select(tree, $($nc(this->names)->fromString(s)))));
					}
				}
			}
			$var($JCTree$JCCompilationUnit, toplevel, $nc(this->make)->TopLevel($($List::nil())));
			$set($nc(toplevel), modle, msym);
			$set(toplevel, packge, $nc(msym)->unnamedPackage);
			$assign(var$2, $nc(this->attr)->attribIdent(static_cast<$JCTree*>(tree), toplevel));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->log)->useSource(prev);
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

$JavaFileObject* JavaCompiler::genCode($Env* env, $JCTree$JCClassDecl* cdef) {
	$useLocalCurrentObjectStackCache();
	try {
		bool var$0 = $nc(this->gen)->genClass(env, cdef);
		if (var$0 && (errorCount() == 0)) {
			return $nc(this->writer)->writeClass($nc(cdef)->sym);
		}
	} catch ($ClassWriter$PoolOverflow& ex) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($($nc(cdef)->pos()), $CompilerProperties$Errors::LimitPool);
	} catch ($ClassWriter$StringOverflow& ex) {
		$var($JCDiagnostic$DiagnosticPosition, var$1, $nc(cdef)->pos());
		$nc(this->log)->error(var$1, $($CompilerProperties$Errors::LimitStringOverflow($($nc(ex->value)->substring(0, 20)))));
	} catch ($Symbol$CompletionFailure& ex) {
		$nc(this->chk)->completionError($($nc(cdef)->pos()), ex);
	}
	return nullptr;
}

$JavaFileObject* JavaCompiler::printSource($Env* env, $JCTree$JCClassDecl* cdef) {
	$useLocalCurrentObjectStackCache();
	$init($StandardLocation);
	$init($JavaFileObject$Kind);
	$var($JavaFileObject, outFile, $nc(this->fileManager)->getJavaFileForOutput($StandardLocation::CLASS_OUTPUT, $($nc($nc($nc(cdef)->sym)->flatname)->toString()), $JavaFileObject$Kind::SOURCE, nullptr));
	if ($nc(this->inputFiles)->contains(outFile)) {
		$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(cdef)->pos());
		$nc(this->log)->error(var$0, $($CompilerProperties$Errors::SourceCantOverwriteInputFile(outFile)));
		return nullptr;
	} else {
		{
			$var($BufferedWriter, out, $new($BufferedWriter, $($nc(outFile)->openWriter())));
			{
				$var($Throwable, var$1, nullptr);
				try {
					try {
						$$new($Pretty, out, true)->printUnit($nc(env)->toplevel, cdef);
						if (this->verbose) {
							$nc(this->log)->printVerbose("wrote.file"_s, $$new($ObjectArray, {$($of($nc(outFile)->getName()))}));
						}
					} catch ($Throwable& t$) {
						try {
							out->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					out->close();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		}
		return outFile;
	}
}

void JavaCompiler::readSourceFile($Symbol$ClassSymbol* c) {
	readSourceFile(nullptr, c);
}

void JavaCompiler::readSourceFile($JCTree$JCCompilationUnit* tree$renamed, $Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCCompilationUnit, tree, tree$renamed);
	if (this->completionFailureName == $nc(c)->fullname) {
		$throwNew($Symbol$CompletionFailure, c, static_cast<$Supplier*>($$new(JavaCompiler$$Lambda$lambda$readSourceFile$1$3, this)), this->dcfh);
	}
	$var($JavaFileObject, filename, $nc(c)->classfile);
	$var($JavaFileObject, prev, $nc(this->log)->useSource(filename));
	if (tree == nullptr) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$assign(tree, parse(filename, $($nc(filename)->getCharContent(false))));
				} catch ($IOException& e) {
					$nc(this->log)->error($($CompilerProperties$Errors::ErrorReadingFile(filename, $($JavacFileManager::getMessage(e)))));
					$assign(tree, $nc(this->make)->TopLevel($($List::nil())));
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(this->log)->useSource(prev);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	if (!$nc(this->taskListener)->isEmpty()) {
		$init($TaskEvent$Kind);
		$var($TaskEvent, e, $new($TaskEvent, $TaskEvent$Kind::ENTER, static_cast<$CompilationUnitTree*>(tree)));
		$nc(this->taskListener)->started(e);
	}
	if (!$nc(this->modules)->enter($($List::of(tree)), c)) {
		$throwNew($Symbol$CompletionFailure, c, static_cast<$Supplier*>($$new(JavaCompiler$$Lambda$lambda$readSourceFile$2$4, this)), this->dcfh);
	}
	$nc(this->enter)->complete($($List::of(tree)), c);
	if (!$nc(this->taskListener)->isEmpty()) {
		$init($TaskEvent$Kind);
		$var($TaskEvent, e, $new($TaskEvent, $TaskEvent$Kind::ENTER, static_cast<$CompilationUnitTree*>(tree)));
		$nc(this->taskListener)->finished(e);
	}
	if ($nc(this->enter)->getEnv(c) == nullptr) {
		$init($JavaFileObject$Kind);
		bool isPkgInfo = $nc($nc(tree)->sourcefile)->isNameCompatible("package-info"_s, $JavaFileObject$Kind::SOURCE);
		bool isModuleInfo = $nc(tree->sourcefile)->isNameCompatible("module-info"_s, $JavaFileObject$Kind::SOURCE);
		if (isModuleInfo) {
			if ($nc(this->enter)->getEnv(tree->modle) == nullptr) {
				$init($CompilerProperties$Fragments);
				$var($JCDiagnostic, diag, $nc(this->diagFactory)->fragment($CompilerProperties$Fragments::FileDoesNotContainModule));
				$throwNew($ClassFinder$BadClassFile, c, filename, diag, this->diagFactory, this->dcfh);
			}
		} else if (isPkgInfo) {
			if ($nc(this->enter)->getEnv(tree->packge) == nullptr) {
				$var($JCDiagnostic, diag, $nc(this->diagFactory)->fragment($($CompilerProperties$Fragments::FileDoesNotContainPackage($(c->location())))));
				$throwNew($ClassFinder$BadClassFile, c, filename, diag, this->diagFactory, this->dcfh);
			}
		} else {
			$var($JCDiagnostic, diag, $nc(this->diagFactory)->fragment($($CompilerProperties$Fragments::FileDoesntContainClass($(c->getQualifiedName())))));
			$throwNew($ClassFinder$BadClassFile, c, filename, diag, this->diagFactory, this->dcfh);
		}
	}
	this->implicitSourceFilesRead = true;
}

void JavaCompiler::compile($List* sourceFileObject) {
	$useLocalCurrentObjectStackCache();
	$var($Collection, var$0, static_cast<$Collection*>(static_cast<$AbstractCollection*>(sourceFileObject)));
	$var($Collection, var$1, static_cast<$Collection*>(static_cast<$AbstractCollection*>($List::nil())));
	compile(var$0, var$1, nullptr, $(static_cast<$Collection*>(static_cast<$AbstractCollection*>($List::nil()))));
}

void JavaCompiler::compile($Collection* sourceFileObjects, $Collection* classnames, $Iterable* processors, $Collection* addModules) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->taskListener)->isEmpty()) {
		$init($TaskEvent$Kind);
		$nc(this->taskListener)->started($$new($TaskEvent, $TaskEvent$Kind::COMPILATION));
	}
	if (processors != nullptr && $nc($(processors->iterator()))->hasNext()) {
		this->explicitAnnotationProcessingRequested$ = true;
	}
	if (this->hasBeenUsed) {
		checkReusable();
	}
	this->hasBeenUsed = true;
	$init($Option);
	$init($Lint$LintCategory);
	$nc(this->options)->put($$str({$Option::XLINT_CUSTOM->primaryName, "-"_s, $Lint$LintCategory::OPTIONS->option}), "true"_s);
	$nc(this->options)->remove($$str({$Option::XLINT_CUSTOM->primaryName, $Lint$LintCategory::OPTIONS->option}));
	this->start_msec = now();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				initProcessAnnotations(processors, sourceFileObjects, classnames);
				{
					$var($Iterator, i$, $nc(classnames)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, className, $cast($String, i$->next()));
						{
							int32_t sep = $nc(className)->indexOf((int32_t)u'/');
							if (sep != -1) {
								$nc(this->modules)->addExtraAddModules($$new($StringArray, {$(className->substring(0, sep))}));
							}
						}
					}
				}
				{
					$var($Iterator, i$, $nc(addModules)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, moduleName, $cast($String, i$->next()));
						{
							$nc(this->modules)->addExtraAddModules($$new($StringArray, {moduleName}));
						}
					}
				}
				$init($CompileStates$CompileState);
				processAnnotations($(enterTrees($(stopIfError($CompileStates$CompileState::ENTER, $(initModules($(stopIfError($CompileStates$CompileState::ENTER, $(parseFiles(sourceFileObjects)))))))))), classnames);
				$init($JavaCompiler$ImplicitSourcePolicy);
				if ($nc(this->taskListener)->isEmpty() && this->implicitSourcePolicy == $JavaCompiler$ImplicitSourcePolicy::NONE) {
					$nc(this->todo)->retainFiles(this->inputFiles);
				}
				if (!$CompileStates$CompileState::ATTR->isAfter(this->shouldStopPolicyIfNoError)) {
					$init($JavaCompiler$2);
					switch ($nc($JavaCompiler$2::$SwitchMap$com$sun$tools$javac$main$JavaCompiler$CompilePolicy)->get($nc((this->compilePolicy))->ordinal())) {
					case 1:
						{
							generate($(desugar($(flow($(attribute(static_cast<$Queue*>(this->todo))))))));
							break;
						}
					case 2:
						{
							{
								$var($Queue, q, $nc(this->todo)->groupByFile());
								while (true) {
									bool var$1 = !$nc(q)->isEmpty();
									if (!(var$1 && !shouldStop($CompileStates$CompileState::ATTR))) {
										break;
									}
									{
										generate($(desugar($(flow($(attribute($cast($Queue, $(q->remove())))))))));
									}
								}
							}
							break;
						}
					case 3:
						{
							while (!$nc(this->todo)->isEmpty()) {
								generate($(desugar($(flow($(attribute($cast($Env, $($nc(this->todo)->remove())))))))));
							}
							break;
						}
					default:
						{
							$Assert::error("unknown compile policy"_s);
						}
					}
				}
			} catch ($Abort& ex) {
				if (this->devVerbose) {
					ex->printStackTrace($System::err);
				}
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			if (this->verbose) {
				this->elapsed_msec = elapsed(this->start_msec);
				$nc(this->log)->printVerbose("total"_s, $$new($ObjectArray, {$($of($Long::toString(this->elapsed_msec)))}));
			}
			reportDeferredDiagnostics();
			if (!$nc(this->log)->hasDiagnosticListener()) {
				printCount("error"_s, errorCount());
				printCount("warn"_s, warningCount());
				printSuppressedCount(errorCount(), $nc(this->log)->nsuppressederrors, "count.error.recompile"_s);
				printSuppressedCount(warningCount(), $nc(this->log)->nsuppressedwarns, "count.warn.recompile"_s);
			}
			if (!$nc(this->taskListener)->isEmpty()) {
				$init($TaskEvent$Kind);
				$nc(this->taskListener)->finished($$new($TaskEvent, $TaskEvent$Kind::COMPILATION));
			}
			close();
			if (this->procEnvImpl != nullptr) {
				$nc(this->procEnvImpl)->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JavaCompiler::checkReusable() {
	$throwNew($AssertionError, $of("attempt to reuse JavaCompiler"_s));
}

$List* JavaCompiler::parseFiles($Iterable* fileObjects) {
	return parseFiles(fileObjects, false);
}

$List* JavaCompiler::parseFiles($Iterable* fileObjects, bool force) {
	$useLocalCurrentObjectStackCache();
	$init($CompileStates$CompileState);
	if (!force && shouldStop($CompileStates$CompileState::PARSE)) {
		return $List::nil();
	}
	$var($ListBuffer, trees, $new($ListBuffer));
	$var($Set, filesSoFar, $new($HashSet));
	{
		$var($Iterator, i$, $nc(fileObjects)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JavaFileObject, fileObject, $cast($JavaFileObject, i$->next()));
			{
				if (!filesSoFar->contains(fileObject)) {
					filesSoFar->add(fileObject);
					trees->append($(parse(fileObject)));
				}
			}
		}
	}
	return trees->toList();
}

bool JavaCompiler::continueAfterProcessAnnotations() {
	$init($CompileStates$CompileState);
	return !shouldStop($CompileStates$CompileState::ATTR);
}

$List* JavaCompiler::initModules($List* roots) {
	$nc(this->modules)->initModules(roots);
	if ($nc(roots)->isEmpty()) {
		enterDone();
	}
	return roots;
}

$List* JavaCompiler::enterTrees($List* roots) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->taskListener)->isEmpty()) {
		{
			$var($Iterator, i$, $nc(roots)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCCompilationUnit, unit, $cast($JCTree$JCCompilationUnit, i$->next()));
				{
					$init($TaskEvent$Kind);
					$var($TaskEvent, e, $new($TaskEvent, $TaskEvent$Kind::ENTER, static_cast<$CompilationUnitTree*>(unit)));
					$nc(this->taskListener)->started(e);
				}
			}
		}
	}
	$nc(this->enter)->main(roots);
	enterDone();
	if (!$nc(this->taskListener)->isEmpty()) {
		{
			$var($Iterator, i$, $nc(roots)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCCompilationUnit, unit, $cast($JCTree$JCCompilationUnit, i$->next()));
				{
					$init($TaskEvent$Kind);
					$var($TaskEvent, e, $new($TaskEvent, $TaskEvent$Kind::ENTER, static_cast<$CompilationUnitTree*>(unit)));
					$nc(this->taskListener)->finished(e);
				}
			}
		}
	}
	if (this->sourceOutput) {
		$var($ListBuffer, cdefs, $new($ListBuffer));
		{
			$var($Iterator, i$, $nc(roots)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCCompilationUnit, unit, $cast($JCTree$JCCompilationUnit, i$->next()));
				{
					{
						$var($List, defs, $nc(unit)->defs);
						for (; $nc(defs)->nonEmpty(); $assign(defs, $nc(defs)->tail)) {
							{
								$var($JCTree$JCClassDecl, classDecl, nullptr);
								$var($Object, patt37686$temp, defs->head);
								bool var$0 = $instanceOf($JCTree$JCClassDecl, patt37686$temp);
								if (var$0) {
									$assign(classDecl, $cast($JCTree$JCClassDecl, patt37686$temp));
									var$0 = true;
								}
								if (var$0) {
									cdefs->append(classDecl);
								}
							}
						}
					}
				}
			}
		}
		$set(this, rootClasses, cdefs->toList());
	}
	{
		$var($Iterator, i$, $nc(roots)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCCompilationUnit, unit, $cast($JCTree$JCCompilationUnit, i$->next()));
			{
				$nc(this->inputFiles)->add($nc(unit)->sourcefile);
			}
		}
	}
	return roots;
}

void JavaCompiler::initProcessAnnotations($Iterable* processors, $Collection* initialFiles, $Collection* initialClassNames) {
	$useLocalCurrentObjectStackCache();
	$init($Option);
	if ($nc(this->options)->isSet($Option::PROC, "none"_s)) {
		this->processAnnotations$ = false;
	} else if (this->procEnvImpl == nullptr) {
		$set(this, procEnvImpl, $JavacProcessingEnvironment::instance(this->context));
		$nc(this->procEnvImpl)->setProcessors(processors);
		this->processAnnotations$ = $nc(this->procEnvImpl)->atLeastOneProcessor();
		if (this->processAnnotations$) {
			$nc(this->options)->put("parameters"_s, "parameters"_s);
			$nc(this->reader)->saveParameterNames = true;
			this->keepComments$ = true;
			this->genEndPos = true;
			if (!$nc(this->taskListener)->isEmpty()) {
				$init($TaskEvent$Kind);
				$nc(this->taskListener)->started($$new($TaskEvent, $TaskEvent$Kind::ANNOTATION_PROCESSING));
			}
			$set(this, deferredDiagnosticHandler, $new($Log$DeferredDiagnosticHandler, this->log));
			$nc($($cast($JavacFiler, $nc(this->procEnvImpl)->getFiler())))->setInitialState(initialFiles, initialClassNames);
		} else {
			$nc(this->procEnvImpl)->close();
		}
	}
}

void JavaCompiler::processAnnotations($List* roots) {
	processAnnotations(roots, $(static_cast<$Collection*>(static_cast<$AbstractCollection*>($List::nil()))));
}

void JavaCompiler::processAnnotations($List* roots, $Collection* classnames) {
	$useLocalCurrentObjectStackCache();
	$init($CompileStates$CompileState);
	if (shouldStop($CompileStates$CompileState::PROCESS)) {
		if (this->processAnnotations$) {
			$nc(this->deferredDiagnosticHandler)->reportDeferredDiagnostics();
			$nc(this->log)->popDiagnosticHandler(this->deferredDiagnosticHandler);
			return;
		}
	}
	if (!this->processAnnotations$) {
		$init($Option);
		if ($nc(this->options)->isSet($Option::PROC, "only"_s)) {
			$init($CompilerProperties$Warnings);
			$nc(this->log)->warning($CompilerProperties$Warnings::ProcProcOnlyRequestedNoProcs);
			$nc(this->todo)->clear();
		}
		if (!$nc(classnames)->isEmpty()) {
			$nc(this->log)->error($($CompilerProperties$Errors::ProcNoExplicitAnnotationProcessingRequested(classnames)));
		}
		$Assert::checkNull(this->deferredDiagnosticHandler);
		return;
	}
	$Assert::checkNonNull(this->deferredDiagnosticHandler);
	try {
		$var($List, classSymbols, $List::nil());
		$var($List, pckSymbols, $List::nil());
		if (!$nc(classnames)->isEmpty()) {
			if (!explicitAnnotationProcessingRequested()) {
				$nc(this->log)->error($($CompilerProperties$Errors::ProcNoExplicitAnnotationProcessingRequested(classnames)));
				$nc(this->deferredDiagnosticHandler)->reportDeferredDiagnostics();
				$nc(this->log)->popDiagnosticHandler(this->deferredDiagnosticHandler);
				return;
			} else {
				bool errors = false;
				{
					$var($Iterator, i$, classnames->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, nameStr, $cast($String, i$->next()));
						{
							$var($Symbol, sym, resolveBinaryNameOrIdent(nameStr));
							$init($Kinds$Kind);
							if (sym == nullptr || ($nc(sym)->kind == $Kinds$Kind::PCK && !this->processPcks) || $nc(sym)->kind == $Kinds$Kind::ABSENT_TYP) {
								if (sym != this->silentFail) {
									$nc(this->log)->error($($CompilerProperties$Errors::ProcCantFindClass(nameStr)));
								}
								errors = true;
								continue;
							}
							try {
								if ($nc(sym)->kind == $Kinds$Kind::PCK) {
									sym->complete();
								}
								if ($nc(sym)->exists()) {
									if (sym->kind == $Kinds$Kind::PCK) {
										$assign(pckSymbols, $nc(pckSymbols)->prepend($cast($Symbol$PackageSymbol, sym)));
									} else {
										$assign(classSymbols, $nc(classSymbols)->prepend($cast($Symbol$ClassSymbol, sym)));
									}
									continue;
								}
								$Assert::check($nc(sym)->kind == $Kinds$Kind::PCK);
								$nc(this->log)->warning($($CompilerProperties$Warnings::ProcPackageDoesNotExist(nameStr)));
								$assign(pckSymbols, $nc(pckSymbols)->prepend($cast($Symbol$PackageSymbol, sym)));
							} catch ($Symbol$CompletionFailure& e) {
								$nc(this->log)->error($($CompilerProperties$Errors::ProcCantFindClass(nameStr)));
								errors = true;
								continue;
							}
						}
					}
				}
				if (errors) {
					$nc(this->deferredDiagnosticHandler)->reportDeferredDiagnostics();
					$nc(this->log)->popDiagnosticHandler(this->deferredDiagnosticHandler);
					return;
				}
			}
		}
		{
			$var($Throwable, var$0, nullptr);
			try {
				this->annotationProcessingOccurred = $nc(this->procEnvImpl)->doProcessing(roots, classSymbols, static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(pckSymbols))), this->deferredDiagnosticHandler);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(this->procEnvImpl)->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($Symbol$CompletionFailure& ex) {
		$nc(this->log)->error($($CompilerProperties$Errors::CantAccess(ex->sym, $(ex->getDetailValue()))));
		if (this->deferredDiagnosticHandler != nullptr) {
			$nc(this->deferredDiagnosticHandler)->reportDeferredDiagnostics();
			$nc(this->log)->popDiagnosticHandler(this->deferredDiagnosticHandler);
		}
	}
}

bool JavaCompiler::unrecoverableError() {
	$useLocalCurrentObjectStackCache();
	if (this->deferredDiagnosticHandler != nullptr) {
		{
			$var($Iterator, i$, $nc($($nc(this->deferredDiagnosticHandler)->getDiagnostics()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCDiagnostic, d, $cast($JCDiagnostic, i$->next()));
				{
					$init($Diagnostic$Kind);
					bool var$0 = $nc(d)->getKind() == $Diagnostic$Kind::ERROR;
					$init($JCDiagnostic$DiagnosticFlag);
					if (var$0 && !d->isFlagSet($JCDiagnostic$DiagnosticFlag::RECOVERABLE)) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool JavaCompiler::explicitAnnotationProcessingRequested() {
	return this->explicitAnnotationProcessingRequested$ || explicitAnnotationProcessingRequested(this->options);
}

bool JavaCompiler::explicitAnnotationProcessingRequested($Options* options) {
	$init(JavaCompiler);
	$init($Option);
	bool var$3 = $nc(options)->isSet($Option::PROCESSOR);
	bool var$2 = var$3 || $nc(options)->isSet($Option::PROCESSOR_PATH);
	bool var$1 = var$2 || $nc(options)->isSet($Option::PROCESSOR_MODULE_PATH);
	bool var$0 = var$1 || $nc(options)->isSet($Option::PROC, "only"_s);
	return var$0 || $nc(options)->isSet($Option::XPRINT);
}

void JavaCompiler::setDeferredDiagnosticHandler($Log$DeferredDiagnosticHandler* deferredDiagnosticHandler) {
	$set(this, deferredDiagnosticHandler, deferredDiagnosticHandler);
}

$Queue* JavaCompiler::attribute($Queue* envs) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, results, $new($ListBuffer));
	while (!$nc(envs)->isEmpty()) {
		results->append($(attribute($cast($Env, $(envs->remove())))));
	}
	$init($CompileStates$CompileState);
	return stopIfError($CompileStates$CompileState::ATTR, static_cast<$Queue*>(results));
}

$Env* JavaCompiler::attribute($Env* env) {
	$useLocalCurrentObjectStackCache();
	$init($CompileStates$CompileState);
	if ($nc(this->compileStates)->isDone(env, $CompileStates$CompileState::ATTR)) {
		return env;
	}
	if (this->verboseCompilePolicy) {
		printNote($$str({"[attribute "_s, $nc($nc(env)->enclClass)->sym, "]"_s}));
	}
	if (this->verbose) {
		$nc(this->log)->printVerbose("checking.attribution"_s, $$new($ObjectArray, {$of($nc($nc(env)->enclClass)->sym)}));
	}
	if (!$nc(this->taskListener)->isEmpty()) {
		$init($TaskEvent$Kind);
		$var($TaskEvent, e, $new($TaskEvent, $TaskEvent$Kind::ANALYZE, $nc(env)->toplevel, $as($TypeElement, $nc(env->enclClass)->sym)));
		$nc(this->taskListener)->started(e);
	}
	$var($JavaFileObject, prev, $nc(this->log)->useSource($nc($nc($nc(env)->enclClass)->sym)->sourcefile != nullptr ? $nc($nc($nc(env)->enclClass)->sym)->sourcefile : $nc(env->toplevel)->sourcefile));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->attr)->attrib(env);
			bool var$1 = errorCount() > 0;
			if (var$1 && !shouldStop($CompileStates$CompileState::ATTR)) {
				$nc(this->attr)->postAttr($nc(env)->tree);
			}
			$nc(this->compileStates)->put(env, $CompileStates$CompileState::ATTR);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$nc(this->log)->useSource(prev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return env;
}

$Queue* JavaCompiler::flow($Queue* envs) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, results, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(envs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Env, env, $cast($Env, i$->next()));
			{
				flow(env, results);
			}
		}
	}
	$init($CompileStates$CompileState);
	return stopIfError($CompileStates$CompileState::FLOW, static_cast<$Queue*>(results));
}

$Queue* JavaCompiler::flow($Env* env) {
	$var($ListBuffer, results, $new($ListBuffer));
	flow(env, results);
	$init($CompileStates$CompileState);
	return stopIfError($CompileStates$CompileState::FLOW, static_cast<$Queue*>(results));
}

void JavaCompiler::flow($Env* env, $Queue* results) {
	$useLocalCurrentObjectStackCache();
	$init($CompileStates$CompileState);
	if ($nc(this->compileStates)->isDone(env, $CompileStates$CompileState::FLOW)) {
		$nc(results)->add(env);
		return;
	}
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (shouldStop($CompileStates$CompileState::FLOW)) {
				return$1 = true;
				goto $finally;
			}
			if (this->verboseCompilePolicy) {
				printNote($$str({"[flow "_s, $nc($nc(env)->enclClass)->sym, "]"_s}));
			}
			$var($JavaFileObject, prev, $nc(this->log)->useSource($nc($nc($nc(env)->enclClass)->sym)->sourcefile != nullptr ? $nc($nc($nc(env)->enclClass)->sym)->sourcefile : $nc(env->toplevel)->sourcefile));
			{
				$var($Throwable, var$2, nullptr);
				bool return$3 = false;
				try {
					$nc(this->make)->at($Position::FIRSTPOS);
					$var($TreeMaker, localMake, $nc(this->make)->forToplevel($nc(env)->toplevel));
					$nc(this->flow$)->analyzeTree(env, localMake);
					$nc(this->compileStates)->put(env, $CompileStates$CompileState::FLOW);
					if (shouldStop($CompileStates$CompileState::FLOW)) {
						return$3 = true;
						goto $finally1;
					}
					$nc(this->analyzer)->flush(env);
					$nc(results)->add(env);
				} catch ($Throwable& var$4) {
					$assign(var$2, var$4);
				} $finally1: {
					$nc(this->log)->useSource(prev);
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
				if (return$3) {
					return$1 = true;
					goto $finally;
				}
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} $finally: {
			if (!$nc(this->taskListener)->isEmpty()) {
				$init($TaskEvent$Kind);
				$var($TaskEvent, e, $new($TaskEvent, $TaskEvent$Kind::ANALYZE, $nc(env)->toplevel, $as($TypeElement, $nc(env->enclClass)->sym)));
				$nc(this->taskListener)->finished(e);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

$Queue* JavaCompiler::desugar($Queue* envs) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, results, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(envs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Env, env, $cast($Env, i$->next()));
			desugar(env, results);
		}
	}
	$init($CompileStates$CompileState);
	return stopIfError($CompileStates$CompileState::FLOW, static_cast<$Queue*>(results));
}

void JavaCompiler::desugar($Env* env, $Queue* results) {
	$useLocalCurrentObjectStackCache();
	$init($CompileStates$CompileState);
	if (shouldStop($CompileStates$CompileState::TRANSTYPES)) {
		return;
	}
	$init($JavaCompiler$ImplicitSourcePolicy);
	if (this->implicitSourcePolicy == $JavaCompiler$ImplicitSourcePolicy::NONE && !$nc(this->inputFiles)->contains($nc($nc(env)->toplevel)->sourcefile)) {
		return;
	}
	if (!$nc(this->modules)->multiModuleMode && $nc($nc(env)->toplevel)->modle != $nc(this->modules)->getDefaultModule()) {
		return;
	}
	if ($nc(this->compileStates)->isDone(env, $CompileStates$CompileState::LOWER)) {
		$nc(results)->addAll($cast($Collection, $($nc(this->desugaredEnvs)->get(env))));
		return;
	}
	{
	}
	$var($JavaCompiler$1ScanNested, scanner, $new($JavaCompiler$1ScanNested, this, env));
	scanner->scan($nc(env)->tree);
	{
		$var($Iterator, i$, $nc(scanner->dependencies)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Env, dep, $cast($Env, i$->next()));
			{
				if (!$nc(this->compileStates)->isDone(dep, $CompileStates$CompileState::FLOW)) {
					$nc(this->desugaredEnvs)->put(dep, $(desugar($(flow($(attribute(dep)))))));
				}
			}
		}
	}
	if (shouldStop($CompileStates$CompileState::TRANSTYPES)) {
		return;
	}
	if (this->verboseCompilePolicy) {
		printNote($$str({"[desugar "_s, $nc($nc(env)->enclClass)->sym, "]"_s}));
	}
	$var($JavaFileObject, prev, $nc(this->log)->useSource($nc($nc($nc(env)->enclClass)->sym)->sourcefile != nullptr ? $nc($nc($nc(env)->enclClass)->sym)->sourcefile : $nc(env->toplevel)->sourcefile));
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			$var($JCTree, untranslated, $nc(env)->tree);
			$nc(this->make)->at($Position::FIRSTPOS);
			$var($TreeMaker, localMake, $nc(this->make)->forToplevel(env->toplevel));
			$init($JCTree$Tag);
			bool var$2 = $nc(env->tree)->hasTag($JCTree$Tag::PACKAGEDEF);
			if (var$2 || $nc(env->tree)->hasTag($JCTree$Tag::MODULEDEF)) {
				if (!(this->sourceOutput)) {
					if (shouldStop($CompileStates$CompileState::LOWER)) {
						return$1 = true;
						goto $finally;
					}
					$var($List, def, $nc(this->lower)->translateTopLevelClass(env, env->tree, localMake));
					if ($nc(def)->head != nullptr) {
						$Assert::check($nc(def->tail)->isEmpty());
						$nc(results)->add($$new($Pair, env, $cast($JCTree$JCClassDecl, def->head)));
					}
				}
				return$1 = true;
				goto $finally;
			}
			if (shouldStop($CompileStates$CompileState::TRANSTYPES)) {
				return$1 = true;
				goto $finally;
			}
			$set(env, tree, $nc(this->transTypes)->translateTopLevelClass(env->tree, localMake));
			$nc(this->compileStates)->put(env, $CompileStates$CompileState::TRANSTYPES);
			if (shouldStop($CompileStates$CompileState::TRANSPATTERNS)) {
				return$1 = true;
				goto $finally;
			}
			$set(env, tree, $nc($($TransPatterns::instance(this->context)))->translateTopLevelClass(env, env->tree, localMake));
			$nc(this->compileStates)->put(env, $CompileStates$CompileState::TRANSPATTERNS);
			$init($Source$Feature);
			if ($Source$Feature::LAMBDA->allowedInSource(this->source) && scanner->hasLambdas) {
				if (shouldStop($CompileStates$CompileState::UNLAMBDA)) {
					return$1 = true;
					goto $finally;
				}
				$set(env, tree, $nc($($LambdaToMethod::instance(this->context)))->translateTopLevelClass(env, env->tree, localMake));
				$nc(this->compileStates)->put(env, $CompileStates$CompileState::UNLAMBDA);
			}
			if (shouldStop($CompileStates$CompileState::LOWER)) {
				return$1 = true;
				goto $finally;
			}
			if (this->sourceOutput) {
				$var($JCTree$JCClassDecl, cdef, $cast($JCTree$JCClassDecl, env->tree));
				{
					$var($JCTree$JCClassDecl, classDecl, nullptr);
					bool var$4 = $instanceOf($JCTree$JCClassDecl, untranslated);
					if (var$4) {
						$assign(classDecl, $cast($JCTree$JCClassDecl, untranslated));
						var$4 = true;
					}
					bool var$3 = var$4;
					if (var$3 && $nc(this->rootClasses)->contains(classDecl)) {
						$nc(results)->add($$new($Pair, env, cdef));
					}
				}
				return$1 = true;
				goto $finally;
			}
			$var($List, cdefs, $nc(this->lower)->translateTopLevelClass(env, env->tree, localMake));
			$nc(this->compileStates)->put(env, $CompileStates$CompileState::LOWER);
			if (shouldStop($CompileStates$CompileState::LOWER)) {
				return$1 = true;
				goto $finally;
			}
			{
				$var($List, l, cdefs);
				for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
					$var($JCTree$JCClassDecl, cdef, $cast($JCTree$JCClassDecl, l->head));
					$nc(results)->add($$new($Pair, env, cdef));
				}
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} $finally: {
			$nc(this->log)->useSource(prev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void JavaCompiler::generate($Queue* queue) {
	generate(queue, nullptr);
}

void JavaCompiler::generate($Queue* queue, $Queue* results) {
	$useLocalCurrentObjectStackCache();
	$init($CompileStates$CompileState);
	if (shouldStop($CompileStates$CompileState::GENERATE)) {
		return;
	}
	{
		$var($Iterator, i$, $nc(queue)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Pair, x, $cast($Pair, i$->next()));
			{
				$var($Env, env, $cast($Env, $nc(x)->fst));
				$var($JCTree$JCClassDecl, cdef, $cast($JCTree$JCClassDecl, x->snd));
				if (this->verboseCompilePolicy) {
					printNote($$str({"[generate "_s, (this->sourceOutput ? " source"_s : "code"_s), " "_s, $nc(cdef)->sym, "]"_s}));
				}
				if (!$nc(this->taskListener)->isEmpty()) {
					$init($TaskEvent$Kind);
					$var($TaskEvent, e, $new($TaskEvent, $TaskEvent$Kind::GENERATE, $nc(env)->toplevel, $as($TypeElement, $nc(cdef)->sym)));
					$nc(this->taskListener)->started(e);
				}
				$var($JavaFileObject, prev, $nc(this->log)->useSource($nc($nc($nc(env)->enclClass)->sym)->sourcefile != nullptr ? $nc($nc($nc(env)->enclClass)->sym)->sourcefile : $nc(env->toplevel)->sourcefile));
				{
					$var($Throwable, var$0, nullptr);
					bool return$1 = false;
					try {
						try {
							$var($JavaFileObject, file, nullptr);
							if (this->sourceOutput) {
								$assign(file, printSource(env, cdef));
							} else {
								$init($StandardLocation);
								bool var$2 = $nc(this->fileManager)->hasLocation($StandardLocation::NATIVE_HEADER_OUTPUT);
								if (var$2 && $nc(this->jniWriter)->needsHeader($nc(cdef)->sym)) {
									$nc(this->jniWriter)->write($nc(cdef)->sym);
								}
								$assign(file, genCode(env, cdef));
							}
							if (results != nullptr && file != nullptr) {
								results->add(file);
							}
						} catch ($IOException& ex) {
							$var($JCDiagnostic$DiagnosticPosition, var$3, $nc(cdef)->pos());
							$nc(this->log)->error(var$3, $($CompilerProperties$Errors::ClassCantWrite(cdef->sym, $(ex->getMessage()))));
							return$1 = true;
							goto $finally;
						}
					} catch ($Throwable& var$4) {
						$assign(var$0, var$4);
					} $finally: {
						$nc(this->log)->useSource(prev);
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
					if (return$1) {
						return;
					}
				}
				if (!$nc(this->taskListener)->isEmpty()) {
					$init($TaskEvent$Kind);
					$var($TaskEvent, e, $new($TaskEvent, $TaskEvent$Kind::GENERATE, $nc(env)->toplevel, $as($TypeElement, $nc(cdef)->sym)));
					$nc(this->taskListener)->finished(e);
				}
			}
		}
	}
}

$Map* JavaCompiler::groupByFile($Queue* envs) {
	$useLocalCurrentObjectStackCache();
	$var($Map, map, $new($LinkedHashMap));
	{
		$var($Iterator, i$, $nc(envs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Env, env, $cast($Env, i$->next()));
			{
				$var($Queue, sublist, $cast($Queue, map->get($nc(env)->toplevel)));
				if (sublist == nullptr) {
					$assign(sublist, $new($ListBuffer));
					map->put($nc(env)->toplevel, sublist);
				}
				$nc(sublist)->add(env);
			}
		}
	}
	return map;
}

$JCTree$JCClassDecl* JavaCompiler::removeMethodBodies($JCTree$JCClassDecl* cdef) {
	bool isInterface = ((int64_t)($nc($nc(cdef)->mods)->flags & (uint64_t)(int64_t)$Flags::INTERFACE)) != 0;
	{
	}
	$var($JavaCompiler$1MethodBodyRemover, r, $new($JavaCompiler$1MethodBodyRemover, this, isInterface));
	return $cast($JCTree$JCClassDecl, r->translate(static_cast<$JCTree*>(cdef)));
}

void JavaCompiler::reportDeferredDiagnostics() {
	$init($JavaCompiler$ImplicitSourcePolicy);
	if (errorCount() == 0 && this->annotationProcessingOccurred && this->implicitSourceFilesRead && this->implicitSourcePolicy == $JavaCompiler$ImplicitSourcePolicy::UNSET) {
		if (explicitAnnotationProcessingRequested()) {
			$init($CompilerProperties$Warnings);
			$nc(this->log)->warning($CompilerProperties$Warnings::ProcUseImplicit);
		} else {
			$init($CompilerProperties$Warnings);
			$nc(this->log)->warning($CompilerProperties$Warnings::ProcUseProcOrImplicit);
		}
	}
	$nc(this->chk)->reportDeferredDiagnostics();
	$nc(this->preview)->reportDeferredDiagnostics();
	if ($nc(this->log)->compressedOutput) {
		$init($CompilerProperties$Notes);
		$nc(this->log)->mandatoryNote(nullptr, $CompilerProperties$Notes::CompressedDiags);
	}
}

void JavaCompiler::enterDone() {
	this->enterDone$ = true;
	$nc(this->annotate)->enterDone();
}

bool JavaCompiler::isEnterDone() {
	return this->enterDone$;
}

$Name* JavaCompiler::readModuleName($JavaFileObject* fo) {
	return parseAndGetName(fo, static_cast<$Function*>($$new(JavaCompiler$$Lambda$lambda$readModuleName$3$5)));
}

$Name* JavaCompiler::findPackageInFile($JavaFileObject* fo) {
	return parseAndGetName(fo, static_cast<$Function*>($$new(JavaCompiler$$Lambda$lambda$findPackageInFile$4$6)));
}

$Name* JavaCompiler::parseAndGetName($JavaFileObject* fo, $Function* tree2Name) {
	$useLocalCurrentObjectStackCache();
	$var($Log$DiagnosticHandler, dh, $new($Log$DiscardDiagnosticHandler, this->log));
	$var($JavaFileObject, prevSource, $nc(this->log)->useSource(fo));
	{
		$var($Throwable, var$0, nullptr);
		$var($Name, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$var($JCTree$JCCompilationUnit, t, parse(fo, $($nc(fo)->getCharContent(false))));
				$assign(var$2, $cast($Name, $nc(tree2Name)->apply(t)));
				return$1 = true;
				goto $finally;
			} catch ($IOException& e) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->log)->popDiagnosticHandler(dh);
			$nc(this->log)->useSource(prevSource);
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

void JavaCompiler::close() {
	$useLocalCurrentObjectStackCache();
	$set(this, rootClasses, nullptr);
	$set(this, finder, nullptr);
	$set(this, reader, nullptr);
	$set(this, make, nullptr);
	$set(this, writer, nullptr);
	$set(this, enter, nullptr);
	if (this->todo != nullptr) {
		$nc(this->todo)->clear();
	}
	$set(this, todo, nullptr);
	$set(this, parserFactory, nullptr);
	$set(this, syms, nullptr);
	$set(this, source, nullptr);
	$set(this, attr, nullptr);
	$set(this, chk, nullptr);
	$set(this, gen, nullptr);
	$set(this, flow$, nullptr);
	$set(this, transTypes, nullptr);
	$set(this, lower, nullptr);
	$set(this, annotate, nullptr);
	$set(this, types, nullptr);
	$nc(this->log)->flush();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->fileManager)->flush();
			} catch ($IOException& e) {
				$throwNew($Abort, e);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (this->names != nullptr) {
				$nc(this->names)->dispose();
			}
			$set(this, names, nullptr);
			$var($FatalError, fatalError, nullptr);
			{
				$var($Iterator, i$, $nc(this->closeables)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Closeable, c, $cast($Closeable, i$->next()));
					{
						try {
							$nc(c)->close();
						} catch ($IOException& e) {
							if (fatalError == nullptr) {
								$init($CompilerProperties$Fragments);
								$var($JCDiagnostic, msg, $nc(this->diagFactory)->fragment($CompilerProperties$Fragments::FatalErrCantClose));
								$assign(fatalError, $new($FatalError, msg, e));
							} else {
								$nc(fatalError)->addSuppressed(e);
							}
						}
					}
				}
			}
			if (fatalError != nullptr) {
				$throw(fatalError);
			}
			$set(this, closeables, $List::nil());
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JavaCompiler::printNote($String* lines) {
	$init($Log$WriterKind);
	$nc(this->log)->printRawLines($Log$WriterKind::NOTICE, lines);
}

void JavaCompiler::printCount($String* kind, int32_t count) {
	$useLocalCurrentObjectStackCache();
	if (count != 0) {
		$var($String, key, nullptr);
		if (count == 1) {
			$assign(key, $str({"count."_s, kind}));
		} else {
			$assign(key, $str({"count."_s, kind, ".plural"_s}));
		}
		$init($Log$WriterKind);
		$nc(this->log)->printLines($Log$WriterKind::ERROR, key, $$new($ObjectArray, {$($of($String::valueOf(count)))}));
		$nc(this->log)->flush($Log$WriterKind::ERROR);
	}
}

void JavaCompiler::printSuppressedCount(int32_t shown, int32_t suppressed, $String* diagKey) {
	$useLocalCurrentObjectStackCache();
	if (suppressed > 0) {
		int32_t total = shown + suppressed;
		$init($Log$WriterKind);
		$nc(this->log)->printLines($Log$WriterKind::ERROR, diagKey, $$new($ObjectArray, {
			$($of($String::valueOf(shown))),
			$($of($String::valueOf(total)))
		}));
		$nc(this->log)->flush($Log$WriterKind::ERROR);
	}
}

int64_t JavaCompiler::now() {
	$init(JavaCompiler);
	return $System::currentTimeMillis();
}

int64_t JavaCompiler::elapsed(int64_t then) {
	$init(JavaCompiler);
	return now() - then;
}

void JavaCompiler::newRound() {
	$nc(this->inputFiles)->clear();
	$nc(this->todo)->clear();
}

$Name* JavaCompiler::lambda$findPackageInFile$4($JCTree$JCCompilationUnit* t) {
	$init(JavaCompiler);
	$useLocalCurrentObjectStackCache();
	return $cast($JCTree$JCPackageDecl, $nc(t)->getPackage()) != nullptr ? $TreeInfo::fullName($($cast($JCTree, $nc($($cast($JCTree$JCPackageDecl, $nc(t)->getPackage())))->getPackageName()))) : ($Name*)nullptr;
}

$Name* JavaCompiler::lambda$readModuleName$3($JCTree$JCCompilationUnit* t) {
	$init(JavaCompiler);
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCModuleDecl, md, $nc(t)->getModuleDecl());
	return md != nullptr ? $TreeInfo::fullName($($cast($JCTree, $nc(md)->getName()))) : ($Name*)nullptr;
}

$JCDiagnostic* JavaCompiler::lambda$readSourceFile$2() {
	$init($CompilerProperties$Fragments);
	return $nc(this->diags)->fragment($CompilerProperties$Fragments::CantResolveModules);
}

$JCDiagnostic* JavaCompiler::lambda$readSourceFile$1() {
	$init($CompilerProperties$Fragments);
	return $nc(this->diagFactory)->fragment($CompilerProperties$Fragments::UserSelectedCompletionFailure);
}

void JavaCompiler::lambda$new$0($Symbol* sym) {
	readSourceFile($cast($Symbol$ClassSymbol, sym));
}

void clinit$JavaCompiler($Class* class$) {
	$assignStatic(JavaCompiler::versionRBName, "com.sun.tools.javac.resources.version"_s);
	$assignStatic(JavaCompiler::compilerKey, $new($Context$Key));
	$init($JavaCompiler$CompilePolicy);
	$assignStatic(JavaCompiler::DEFAULT_COMPILE_POLICY, $JavaCompiler$CompilePolicy::BY_TODO);
}

JavaCompiler::JavaCompiler() {
}

$Class* JavaCompiler::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavaCompiler$$Lambda$lambda$new$0::classInfo$.name)) {
			return JavaCompiler$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals(JavaCompiler$$Lambda$findPackageInFile$1::classInfo$.name)) {
			return JavaCompiler$$Lambda$findPackageInFile$1::load$(name, initialize);
		}
		if (name->equals(JavaCompiler$$Lambda$readModuleName$2::classInfo$.name)) {
			return JavaCompiler$$Lambda$readModuleName$2::load$(name, initialize);
		}
		if (name->equals(JavaCompiler$$Lambda$lambda$readSourceFile$1$3::classInfo$.name)) {
			return JavaCompiler$$Lambda$lambda$readSourceFile$1$3::load$(name, initialize);
		}
		if (name->equals(JavaCompiler$$Lambda$lambda$readSourceFile$2$4::classInfo$.name)) {
			return JavaCompiler$$Lambda$lambda$readSourceFile$2$4::load$(name, initialize);
		}
		if (name->equals(JavaCompiler$$Lambda$lambda$readModuleName$3$5::classInfo$.name)) {
			return JavaCompiler$$Lambda$lambda$readModuleName$3$5::load$(name, initialize);
		}
		if (name->equals(JavaCompiler$$Lambda$lambda$findPackageInFile$4$6::classInfo$.name)) {
			return JavaCompiler$$Lambda$lambda$findPackageInFile$4$6::load$(name, initialize);
		}
	}
	$loadClass(JavaCompiler, name, initialize, &_JavaCompiler_ClassInfo_, clinit$JavaCompiler, allocate$JavaCompiler);
	return class$;
}

$Class* JavaCompiler::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com