#include <com/sun/tools/javac/api/JavacTaskImpl.h>

#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/source/tree/Tree.h>
#include <com/sun/tools/javac/api/BasicJavacTask.h>
#include <com/sun/tools/javac/api/JavacTaskImpl$1.h>
#include <com/sun/tools/javac/api/JavacTaskImpl$2.h>
#include <com/sun/tools/javac/api/JavacTaskImpl$3.h>
#include <com/sun/tools/javac/api/JavacTaskImpl$Filter.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$Handler.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Todo.h>
#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/main/Arguments.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/javac/parser/JavacParser.h>
#include <com/sun/tools/javac/parser/Parser.h>
#include <com/sun/tools/javac/parser/ParserFactory.h>
#include <com/sun/tools/javac/processing/AnnotationProcessingError.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/util/ClientCodeException.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/FatalError.h>
#include <com/sun/tools/javac/util/JavacMessages.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log$PrefixKind.h>
#include <com/sun/tools/javac/util/Log$WriterKind.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <com/sun/tools/javac/util/PropagatedException.h>
#include <java/io/IOException.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/CharBuffer.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractQueue.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Queue.h>
#include <java/util/Set.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef ABNORMAL
#undef CLASSDEF
#undef ERROR
#undef JAVAC
#undef MODULEDEF
#undef NOTICE
#undef OK
#undef SOURCE
#undef SYSERR

using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $Tree = ::com::sun::source::tree::Tree;
using $BasicJavacTask = ::com::sun::tools::javac::api::BasicJavacTask;
using $JavacTaskImpl$1 = ::com::sun::tools::javac::api::JavacTaskImpl$1;
using $JavacTaskImpl$2 = ::com::sun::tools::javac::api::JavacTaskImpl$2;
using $JavacTaskImpl$3 = ::com::sun::tools::javac::api::JavacTaskImpl$3;
using $JavacTaskImpl$Filter = ::com::sun::tools::javac::api::JavacTaskImpl$Filter;
using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $DeferredCompletionFailureHandler$Handler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$Handler;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Todo = ::com::sun::tools::javac::comp::Todo;
using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $Arguments = ::com::sun::tools::javac::main::Arguments;
using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $JavacParser = ::com::sun::tools::javac::parser::JavacParser;
using $Parser = ::com::sun::tools::javac::parser::Parser;
using $ParserFactory = ::com::sun::tools::javac::parser::ParserFactory;
using $AnnotationProcessingError = ::com::sun::tools::javac::processing::AnnotationProcessingError;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $ClientCodeException = ::com::sun::tools::javac::util::ClientCodeException;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $FatalError = ::com::sun::tools::javac::util::FatalError;
using $JavacMessages = ::com::sun::tools::javac::util::JavacMessages;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$PrefixKind = ::com::sun::tools::javac::util::Log$PrefixKind;
using $Log$WriterKind = ::com::sun::tools::javac::util::Log$WriterKind;
using $Options = ::com::sun::tools::javac::util::Options;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $PropagatedException = ::com::sun::tools::javac::util::PropagatedException;
using $IOException = ::java::io::IOException;
using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $CharBuffer = ::java::nio::CharBuffer;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractQueue = ::java::util::AbstractQueue;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Queue = ::java::util::Queue;
using $Set = ::java::util::Set;
using $Callable = ::java::util::concurrent::Callable;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class JavacTaskImpl$$Lambda$lambda$doCall$0 : public $Callable {
	$class(JavacTaskImpl$$Lambda$lambda$doCall$0, $NO_CLASS_INIT, $Callable)
public:
	void init$(JavacTaskImpl* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* call() override {
		 return $of($nc(inst$)->lambda$doCall$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacTaskImpl$$Lambda$lambda$doCall$0>());
	}
	JavacTaskImpl* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavacTaskImpl$$Lambda$lambda$doCall$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavacTaskImpl$$Lambda$lambda$doCall$0, inst$)},
	{}
};
$MethodInfo JavacTaskImpl$$Lambda$lambda$doCall$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/api/JavacTaskImpl;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacTaskImpl$$Lambda$lambda$doCall$0::*)(JavacTaskImpl*)>(&JavacTaskImpl$$Lambda$lambda$doCall$0::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacTaskImpl$$Lambda$lambda$doCall$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.api.JavacTaskImpl$$Lambda$lambda$doCall$0",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* JavacTaskImpl$$Lambda$lambda$doCall$0::load$($String* name, bool initialize) {
	$loadClass(JavacTaskImpl$$Lambda$lambda$doCall$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacTaskImpl$$Lambda$lambda$doCall$0::class$ = nullptr;

class JavacTaskImpl$$Lambda$parseInternal$1 : public $Callable {
	$class(JavacTaskImpl$$Lambda$parseInternal$1, $NO_CLASS_INIT, $Callable)
public:
	void init$(JavacTaskImpl* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* call() override {
		 return $of($nc(inst$)->parseInternal());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacTaskImpl$$Lambda$parseInternal$1>());
	}
	JavacTaskImpl* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavacTaskImpl$$Lambda$parseInternal$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavacTaskImpl$$Lambda$parseInternal$1, inst$)},
	{}
};
$MethodInfo JavacTaskImpl$$Lambda$parseInternal$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/api/JavacTaskImpl;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacTaskImpl$$Lambda$parseInternal$1::*)(JavacTaskImpl*)>(&JavacTaskImpl$$Lambda$parseInternal$1::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacTaskImpl$$Lambda$parseInternal$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.api.JavacTaskImpl$$Lambda$parseInternal$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* JavacTaskImpl$$Lambda$parseInternal$1::load$($String* name, bool initialize) {
	$loadClass(JavacTaskImpl$$Lambda$parseInternal$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacTaskImpl$$Lambda$parseInternal$1::class$ = nullptr;

class JavacTaskImpl$$Lambda$lambda$analyze$1$2 : public $Callable {
	$class(JavacTaskImpl$$Lambda$lambda$analyze$1$2, $NO_CLASS_INIT, $Callable)
public:
	void init$(JavacTaskImpl* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* call() override {
		 return $of($nc(inst$)->lambda$analyze$1());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacTaskImpl$$Lambda$lambda$analyze$1$2>());
	}
	JavacTaskImpl* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavacTaskImpl$$Lambda$lambda$analyze$1$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavacTaskImpl$$Lambda$lambda$analyze$1$2, inst$)},
	{}
};
$MethodInfo JavacTaskImpl$$Lambda$lambda$analyze$1$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/api/JavacTaskImpl;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacTaskImpl$$Lambda$lambda$analyze$1$2::*)(JavacTaskImpl*)>(&JavacTaskImpl$$Lambda$lambda$analyze$1$2::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacTaskImpl$$Lambda$lambda$analyze$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.api.JavacTaskImpl$$Lambda$lambda$analyze$1$2",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* JavacTaskImpl$$Lambda$lambda$analyze$1$2::load$($String* name, bool initialize) {
	$loadClass(JavacTaskImpl$$Lambda$lambda$analyze$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacTaskImpl$$Lambda$lambda$analyze$1$2::class$ = nullptr;

class JavacTaskImpl$$Lambda$lambda$generate$2$3 : public $Callable {
	$class(JavacTaskImpl$$Lambda$lambda$generate$2$3, $NO_CLASS_INIT, $Callable)
public:
	void init$(JavacTaskImpl* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* call() override {
		 return $of($nc(inst$)->lambda$generate$2());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacTaskImpl$$Lambda$lambda$generate$2$3>());
	}
	JavacTaskImpl* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavacTaskImpl$$Lambda$lambda$generate$2$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavacTaskImpl$$Lambda$lambda$generate$2$3, inst$)},
	{}
};
$MethodInfo JavacTaskImpl$$Lambda$lambda$generate$2$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/api/JavacTaskImpl;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacTaskImpl$$Lambda$lambda$generate$2$3::*)(JavacTaskImpl*)>(&JavacTaskImpl$$Lambda$lambda$generate$2$3::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacTaskImpl$$Lambda$lambda$generate$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.api.JavacTaskImpl$$Lambda$lambda$generate$2$3",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* JavacTaskImpl$$Lambda$lambda$generate$2$3::load$($String* name, bool initialize) {
	$loadClass(JavacTaskImpl$$Lambda$lambda$generate$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacTaskImpl$$Lambda$lambda$generate$2$3::class$ = nullptr;

$FieldInfo _JavacTaskImpl_FieldInfo_[] = {
	{"args", "Lcom/sun/tools/javac/main/Arguments;", nullptr, $PRIVATE | $FINAL, $field(JavacTaskImpl, args)},
	{"compiler", "Lcom/sun/tools/javac/main/JavaCompiler;", nullptr, $PRIVATE, $field(JavacTaskImpl, compiler)},
	{"fileManager", "Ljavax/tools/JavaFileManager;", nullptr, $PRIVATE, $field(JavacTaskImpl, fileManager)},
	{"dcfh", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;", nullptr, $PRIVATE, $field(JavacTaskImpl, dcfh)},
	{"locale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(JavacTaskImpl, locale)},
	{"notYetEntered", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;", $PRIVATE, $field(JavacTaskImpl, notYetEntered)},
	{"genList", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", $PRIVATE, $field(JavacTaskImpl, genList)},
	{"used", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(JavacTaskImpl, used)},
	{"processors", "Ljava/lang/Iterable;", "Ljava/lang/Iterable<+Ljavax/annotation/processing/Processor;>;", $PRIVATE, $field(JavacTaskImpl, processors)},
	{"addModules", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Ljava/lang/String;>;", $PRIVATE, $field(JavacTaskImpl, addModules$)},
	{"parsed", "Z", nullptr, $PRIVATE, $field(JavacTaskImpl, parsed)},
	{}
};

$MethodInfo _JavacTaskImpl_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(JavacTaskImpl::*)($Context*)>(&JavacTaskImpl::init$))},
	{"addModules", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<Ljava/lang/String;>;)V", $PUBLIC},
	{"analyze", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;", $PUBLIC},
	{"analyze", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;)Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;", $PUBLIC},
	{"call", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"cleanup", "()V", nullptr, 0},
	{"doCall", "()Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC},
	{"ensureEntered", "()V", nullptr, $PUBLIC},
	{"enter", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;", $PUBLIC},
	{"enter", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<+Lcom/sun/source/tree/CompilationUnitTree;>;)Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;", $PUBLIC},
	{"generate", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC},
	{"generate", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC},
	{"handleFlowResults", "(Ljava/util/Queue;Lcom/sun/tools/javac/util/ListBuffer;)V", "(Ljava/util/Queue<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;Lcom/sun/tools/javac/util/ListBuffer<Ljavax/lang/model/element/Element;>;)V", $PRIVATE, $method(static_cast<void(JavacTaskImpl::*)($Queue*,$ListBuffer*)>(&JavacTaskImpl::handleFlowResults))},
	{"invocationHelper", "(Ljava/util/concurrent/Callable;)Lcom/sun/tools/javac/util/Pair;", "<T:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TT;>;)Lcom/sun/tools/javac/util/Pair<TT;Ljava/lang/Throwable;>;", $PRIVATE, $method(static_cast<$Pair*(JavacTaskImpl::*)($Callable*)>(&JavacTaskImpl::invocationHelper))},
	{"lambda$analyze$1", "()Ljava/lang/Iterable;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Iterable*(JavacTaskImpl::*)()>(&JavacTaskImpl::lambda$analyze$1)), "java.lang.Exception"},
	{"lambda$doCall$0", "()Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Main$Result*(JavacTaskImpl::*)()>(&JavacTaskImpl::lambda$doCall$0)), "java.lang.Exception"},
	{"lambda$generate$2", "()Ljava/lang/Iterable;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Iterable*(JavacTaskImpl::*)()>(&JavacTaskImpl::lambda$generate$2)), "java.lang.Exception"},
	{"parse", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Lcom/sun/source/tree/CompilationUnitTree;>;", $PUBLIC},
	{"parseInternal", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Lcom/sun/source/tree/CompilationUnitTree;>;", $PRIVATE, $method(static_cast<$Iterable*(JavacTaskImpl::*)()>(&JavacTaskImpl::parseInternal))},
	{"parseType", "(Ljava/lang/String;Ljavax/lang/model/element/TypeElement;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"pathFor", "(Lcom/sun/source/tree/CompilationUnitTree;Lcom/sun/source/tree/Tree;)Ljava/lang/Iterable;", "(Lcom/sun/source/tree/CompilationUnitTree;Lcom/sun/source/tree/Tree;)Ljava/lang/Iterable<+Lcom/sun/source/tree/Tree;>;", $PUBLIC},
	{"prepareCompiler", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(JavacTaskImpl::*)(bool)>(&JavacTaskImpl::prepareCompiler))},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC},
	{"setProcessors", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<+Ljavax/annotation/processing/Processor;>;)V", $PUBLIC},
	{"toString", "(Ljava/lang/Iterable;Ljava/lang/String;)Ljava/lang/String;", "<T:Ljava/lang/Object;>(Ljava/lang/Iterable<TT;>;Ljava/lang/String;)Ljava/lang/String;", 0},
	{}
};

$InnerClassInfo _JavacTaskImpl_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTaskImpl$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.api.JavacTaskImpl$Filter", "com.sun.tools.javac.api.JavacTaskImpl", "Filter", $ABSTRACT},
	{"com.sun.tools.javac.api.JavacTaskImpl$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.api.JavacTaskImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavacTaskImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.api.JavacTaskImpl",
	"com.sun.tools.javac.api.BasicJavacTask",
	nullptr,
	_JavacTaskImpl_FieldInfo_,
	_JavacTaskImpl_MethodInfo_,
	nullptr,
	nullptr,
	_JavacTaskImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTaskImpl$3,com.sun.tools.javac.api.JavacTaskImpl$Filter,com.sun.tools.javac.api.JavacTaskImpl$2,com.sun.tools.javac.api.JavacTaskImpl$1"
};

$Object* allocate$JavacTaskImpl($Class* clazz) {
	return $of($alloc(JavacTaskImpl));
}

void JavacTaskImpl::init$($Context* context) {
	$BasicJavacTask::init$(context, true);
	$set(this, used, $new($AtomicBoolean));
	$set(this, addModules$, $new($ListBuffer));
	this->parsed = false;
	$set(this, args, $Arguments::instance(context));
	$load($JavaFileManager);
	$set(this, fileManager, $cast($JavaFileManager, $nc(context)->get($JavaFileManager::class$)));
	$set(this, dcfh, $DeferredCompletionFailureHandler::instance(context));
	$nc(this->dcfh)->setHandler($nc(this->dcfh)->userCodeHandler);
}

$Object* JavacTaskImpl::call() {
	return $of($Boolean::valueOf($nc($(doCall()))->isOK()));
}

$Main$Result* JavacTaskImpl::doCall() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		$var($Main$Result, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($Pair, result, invocationHelper(static_cast<$Callable*>($$new(JavacTaskImpl$$Lambda$lambda$doCall$0, this))));
			if ($nc(result)->snd == nullptr) {
				$assign(var$2, $cast($Main$Result, result->fst));
				return$1 = true;
				goto $finally;
			} else {
				$init($Main$Result);
				$assign(var$2, ($instanceOf($FatalError, result->snd)) ? $Main$Result::SYSERR : $Main$Result::ABNORMAL);
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			try {
				cleanup();
			} catch ($ClientCodeException& e) {
				$throwNew($RuntimeException, $(e->getCause()));
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

void JavacTaskImpl::addModules($Iterable* moduleNames) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(moduleNames);
	if ($nc(this->used)->get()) {
		$throwNew($IllegalStateException);
	}
	{
		$var($Iterator, i$, moduleNames->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, m, $cast($String, i$->next()));
			{
				$Objects::requireNonNull(m);
				$nc(this->addModules$)->add(m);
			}
		}
	}
}

void JavacTaskImpl::setProcessors($Iterable* processors) {
	$Objects::requireNonNull(processors);
	if ($nc(this->used)->get()) {
		$throwNew($IllegalStateException);
	}
	$set(this, processors, processors);
}

void JavacTaskImpl::setLocale($Locale* locale) {
	if ($nc(this->used)->get()) {
		$throwNew($IllegalStateException);
	}
	$set(this, locale, locale);
}

$Pair* JavacTaskImpl::invocationHelper($Callable* c) {
	$useLocalCurrentObjectStackCache();
	$var($DeferredCompletionFailureHandler$Handler, prevDeferredHandler, $nc(this->dcfh)->setHandler($nc(this->dcfh)->javacCodeHandler));
	{
		$var($Throwable, var$0, nullptr);
		$var($Pair, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$assign(var$2, $new($Pair, $($nc(c)->call()), nullptr));
				return$1 = true;
				goto $finally;
			} catch ($FatalError& ex) {
				$var($Log, log, $Log::instance(this->context));
				$var($Options, options, $Options::instance(this->context));
				$nc(log)->printRawLines($(ex->getMessage()));
				bool var$3 = ex->getCause() != nullptr;
				if (var$3 && $nc(options)->isSet("dev"_s)) {
					$init($Log$WriterKind);
					$nc($(ex->getCause()))->printStackTrace($(log->getWriter($Log$WriterKind::NOTICE)));
				}
				$assign(var$2, $new($Pair, nullptr, ex));
				return$1 = true;
				goto $finally;
			} catch ($AnnotationProcessingError& e) {
				$throwNew($RuntimeException, $(e->getCause()));
			} catch ($ClientCodeException& e) {
				$throwNew($RuntimeException, $(e->getCause()));
			} catch ($PropagatedException& e) {
				$throw($(e->getCause()));
			} catch ($IllegalStateException& e) {
				$throw(e);
			} catch ($Exception& ex) {
				bool var$4 = this->compiler == nullptr || $nc(this->compiler)->errorCount() == 0;
				if (var$4 || $nc($($Options::instance(this->context)))->isSet("dev"_s)) {
					$var($Log, log, $Log::instance(this->context));
					$init($Log$PrefixKind);
					$nc(log)->printLines($Log$PrefixKind::JAVAC, "msg.bug"_s, $$new($ObjectArray, {$($of($JavaCompiler::version()))}));
					$init($Log$WriterKind);
					ex->printStackTrace($(log->getWriter($Log$WriterKind::NOTICE)));
				}
				$assign(var$2, $new($Pair, nullptr, ex));
				return$1 = true;
				goto $finally;
			} catch ($Error& ex) {
				bool var$5 = this->compiler == nullptr || $nc(this->compiler)->errorCount() == 0;
				if (var$5 || $nc($($Options::instance(this->context)))->isSet("dev"_s)) {
					$var($Log, log, $Log::instance(this->context));
					$init($Log$PrefixKind);
					$nc(log)->printLines($Log$PrefixKind::JAVAC, "msg.bug"_s, $$new($ObjectArray, {$($of($JavaCompiler::version()))}));
					$init($Log$WriterKind);
					ex->printStackTrace($(log->getWriter($Log$WriterKind::NOTICE)));
				}
				$assign(var$2, $new($Pair, nullptr, ex));
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$6) {
			$assign(var$0, var$6);
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

void JavacTaskImpl::prepareCompiler(bool forParse) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->used)->getAndSet(true)) {
		if (this->compiler == nullptr) {
			$throwNew($PropagatedException, $$new($IllegalStateException));
		}
	} else {
		$nc(this->args)->validate();
		$load($Locale);
		$nc(this->context)->put($Locale::class$, $of(this->locale));
		$init($JavacMessages);
		$var($JavacMessages, messages, $cast($JavacMessages, $nc(this->context)->get($JavacMessages::messagesKey)));
		if (messages != nullptr && !$nc($(messages->getCurrentLocale()))->equals(this->locale)) {
			messages->setCurrentLocale(this->locale);
		}
		initPlugins($($nc(this->args)->getPluginOpts()));
		initDocLint($($nc(this->args)->getDocLintOpts()));
		$set(this, compiler, $JavaCompiler::instance(this->context));
		$nc(this->compiler)->keepComments$ = true;
		$nc(this->compiler)->genEndPos = true;
		$set(this, notYetEntered, $new($HashMap));
		if (forParse) {
			$var($Iterable, var$0, this->processors);
			$var($Collection, var$1, static_cast<$Collection*>($nc(this->args)->getFileObjects()));
			$nc(this->compiler)->initProcessAnnotations(var$0, var$1, $($nc(this->args)->getClassNames()));
			{
				$var($Iterator, i$, $nc($($nc(this->args)->getFileObjects()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JavaFileObject, file, $cast($JavaFileObject, i$->next()));
					$nc(this->notYetEntered)->put(file, nullptr);
				}
			}
			$set(this, genList, $new($ListBuffer));
		}
	}
}

$String* JavacTaskImpl::toString($Iterable* items, $String* sep) {
	$useLocalCurrentObjectStackCache();
	$var($String, currSep, ""_s);
	$var($StringBuilder, sb, $new($StringBuilder));
	{
		$var($Iterator, i$, $nc(items)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, item, i$->next());
			{
				sb->append(currSep);
				sb->append($($nc($of(item))->toString()));
				$assign(currSep, sep);
			}
		}
	}
	return sb->toString();
}

void JavacTaskImpl::cleanup() {
	$useLocalCurrentObjectStackCache();
	if (this->compiler != nullptr) {
		$nc(this->compiler)->close();
	}
	{
		$var($BaseFileManager, baseFileManager, nullptr);
		$var($JavaFileManager, patt9257$temp, this->fileManager);
		bool var$1 = $instanceOf($BaseFileManager, patt9257$temp);
		if (var$1) {
			$assign(baseFileManager, $cast($BaseFileManager, patt9257$temp));
			var$1 = true;
		}
		bool var$0 = var$1;
		if (var$0 && $nc(baseFileManager)->autoClose) {
			try {
				$nc(this->fileManager)->close();
			} catch ($IOException& ignore) {
			}
		}
	}
	$set(this, compiler, nullptr);
	$set(this, context, nullptr);
	$set(this, notYetEntered, nullptr);
}

$Iterable* JavacTaskImpl::parse() {
	$useLocalCurrentObjectStackCache();
	$var($Pair, result, invocationHelper(static_cast<$Callable*>($$new(JavacTaskImpl$$Lambda$parseInternal$1, this))));
	if ($nc(result)->snd == nullptr) {
		return $cast($Iterable, result->fst);
	}
	$throwNew($IllegalStateException, $cast($Throwable, $nc(result)->snd));
}

$Iterable* JavacTaskImpl::parseInternal() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		$var($Iterable, var$2, nullptr);
		bool return$1 = false;
		try {
			prepareCompiler(true);
			$var($List, units, $nc(this->compiler)->parseFiles($($nc(this->args)->getFileObjects())));
			{
				$var($Iterator, i$, $nc(units)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree$JCCompilationUnit, unit, $cast($JCTree$JCCompilationUnit, i$->next()));
					{
						$var($JavaFileObject, file, $nc(unit)->getSourceFile());
						if ($nc(this->notYetEntered)->containsKey(file)) {
							$nc(this->notYetEntered)->put(file, unit);
						}
					}
				}
			}
			$assign(var$2, static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(units))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			this->parsed = true;
			if (this->compiler != nullptr && $nc(this->compiler)->log != nullptr) {
				$nc($nc(this->compiler)->log)->flush();
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

$Iterable* JavacTaskImpl::enter() {
	return enter(nullptr);
}

$Iterable* JavacTaskImpl::enter($Iterable* trees) {
	$useLocalCurrentObjectStackCache();
	if (trees == nullptr && this->notYetEntered != nullptr && $nc(this->notYetEntered)->isEmpty()) {
		return static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($List::nil())));
	}
	bool wasInitialized = this->compiler != nullptr;
	prepareCompiler(true);
	$var($ListBuffer, roots, nullptr);
	if (trees == nullptr) {
		if ($nc(this->notYetEntered)->size() > 0) {
			if (!this->parsed) {
				parseInternal();
			}
			{
				$var($Iterator, i$, $nc($($nc(this->args)->getFileObjects()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JavaFileObject, file, $cast($JavaFileObject, i$->next()));
					{
						$var($JCTree$JCCompilationUnit, unit, $cast($JCTree$JCCompilationUnit, $nc(this->notYetEntered)->remove(file)));
						if (unit != nullptr) {
							if (roots == nullptr) {
								$assign(roots, $new($ListBuffer));
							}
							$nc(roots)->append(unit);
						}
					}
				}
			}
			$nc(this->notYetEntered)->clear();
		}
	} else {
		{
			$var($Iterator, i$, $nc(trees)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($CompilationUnitTree, cu, $cast($CompilationUnitTree, i$->next()));
				{
					$var($JCTree$JCCompilationUnit, compilationUnit, nullptr);
					bool var$0 = $instanceOf($JCTree$JCCompilationUnit, cu);
					if (var$0) {
						$assign(compilationUnit, $cast($JCTree$JCCompilationUnit, cu));
						var$0 = true;
					}
					if (var$0) {
						if (roots == nullptr) {
							$assign(roots, $new($ListBuffer));
						}
						$nc(roots)->append(compilationUnit);
						$nc(this->notYetEntered)->remove($($nc(cu)->getSourceFile()));
					} else {
						$throwNew($IllegalArgumentException, $($nc($of(cu))->toString()));
					}
				}
			}
		}
	}
	if (roots == nullptr) {
		if (trees == nullptr && !wasInitialized) {
			$nc(this->compiler)->initModules($($List::nil()));
		}
		return static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($List::nil())));
	}
	$var($List, units, $nc(this->compiler)->initModules($($nc(roots)->toList())));
	{
		$var($Throwable, var$1, nullptr);
		$var($Iterable, var$3, nullptr);
		bool return$2 = false;
		try {
			$assign(units, $nc(this->compiler)->enterTrees(units));
			if ($nc(this->notYetEntered)->isEmpty()) {
				$nc(this->compiler)->processAnnotations(units);
			}
			$var($ListBuffer, elements, $new($ListBuffer));
			{
				$var($Iterator, i$, $nc(units)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree$JCCompilationUnit, unit, $cast($JCTree$JCCompilationUnit, i$->next()));
					{
						$init($JavaFileObject$Kind);
						bool isPkgInfo = $nc($nc(unit)->sourcefile)->isNameCompatible("package-info"_s, $JavaFileObject$Kind::SOURCE);
						if (isPkgInfo) {
							elements->append(unit->packge);
						} else {
							{
								$var($Iterator, i$, $nc(unit->defs)->iterator());
								for (; $nc(i$)->hasNext();) {
									$var($JCTree, node, $cast($JCTree, i$->next()));
									{
										$init($JCTree$Tag);
										if ($nc(node)->hasTag($JCTree$Tag::CLASSDEF)) {
											$var($JCTree$JCClassDecl, cdef, $cast($JCTree$JCClassDecl, node));
											if (cdef->sym != nullptr) {
												elements->append(cdef->sym);
											}
										} else {
											if (node->hasTag($JCTree$Tag::MODULEDEF)) {
												$var($JCTree$JCModuleDecl, mdef, $cast($JCTree$JCModuleDecl, node));
												if (mdef->sym != nullptr) {
													elements->append(mdef->sym);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			$assign(var$3, static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(elements->toList()))));
			return$2 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$1, var$4);
		} $finally: {
			$nc($nc(this->compiler)->log)->flush();
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
		if (return$2) {
			return var$3;
		}
	}
	$shouldNotReachHere();
}

$Iterable* JavacTaskImpl::analyze() {
	$useLocalCurrentObjectStackCache();
	$var($Pair, result, invocationHelper(static_cast<$Callable*>($$new(JavacTaskImpl$$Lambda$lambda$analyze$1$2, this))));
	if ($nc(result)->snd == nullptr) {
		return $cast($Iterable, result->fst);
	}
	$throwNew($IllegalStateException, $cast($Throwable, $nc(result)->snd));
}

$Iterable* JavacTaskImpl::analyze($Iterable* classes) {
	$useLocalCurrentObjectStackCache();
	enter(nullptr);
	$var($ListBuffer, results, $new($ListBuffer));
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (classes == nullptr) {
				handleFlowResults($($nc(this->compiler)->flow($($nc(this->compiler)->attribute(static_cast<$Queue*>($nc(this->compiler)->todo))))), results);
			} else {
				$var($JavacTaskImpl$Filter, f, $new($JavacTaskImpl$1, this, results));
				f->run($nc(this->compiler)->todo, classes);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($nc(this->compiler)->log)->flush();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(results))));
}

void JavacTaskImpl::handleFlowResults($Queue* queue, $ListBuffer* elems) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(queue)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Env, env, $cast($Env, i$->next()));
			{
				$init($JavacTaskImpl$3);
				{
					$var($JCTree$JCClassDecl, cdef, nullptr)
					$var($JCTree$JCModuleDecl, mod, nullptr)
					$var($JCTree$JCCompilationUnit, unit, nullptr)
					switch ($nc($JavacTaskImpl$3::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc($nc(env)->tree)->getTag())))->ordinal())) {
					case 1:
						{
							$assign(cdef, $cast($JCTree$JCClassDecl, env->tree));
							if ($nc(cdef)->sym != nullptr) {
								$nc(elems)->append(cdef->sym);
							}
							break;
						}
					case 2:
						{
							$assign(mod, $cast($JCTree$JCModuleDecl, env->tree));
							if ($nc(mod)->sym != nullptr) {
								$nc(elems)->append(mod->sym);
							}
							break;
						}
					case 3:
						{
							$assign(unit, env->toplevel);
							if ($nc(unit)->packge != nullptr) {
								$nc(elems)->append(unit->packge);
							}
							break;
						}
					}
				}
			}
		}
	}
	$nc(this->genList)->addAll(queue);
}

$Iterable* JavacTaskImpl::generate() {
	$useLocalCurrentObjectStackCache();
	$var($Pair, result, invocationHelper(static_cast<$Callable*>($$new(JavacTaskImpl$$Lambda$lambda$generate$2$3, this))));
	if ($nc(result)->snd == nullptr) {
		return $cast($Iterable, result->fst);
	}
	$throwNew($IllegalStateException, $cast($Throwable, $nc(result)->snd));
}

$Iterable* JavacTaskImpl::generate($Iterable* classes) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, results, $new($ListBuffer));
	{
		$var($Throwable, var$0, nullptr);
		try {
			analyze(nullptr);
			if (classes == nullptr) {
				$nc(this->compiler)->generate($($nc(this->compiler)->desugar(this->genList)), results);
				$nc(this->genList)->clear();
			} else {
				$var($JavacTaskImpl$Filter, f, $new($JavacTaskImpl$2, this, results));
				f->run(this->genList, classes);
			}
			if ($nc(this->genList)->isEmpty()) {
				$nc(this->compiler)->reportDeferredDiagnostics();
				cleanup();
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (this->compiler != nullptr) {
				$nc($nc(this->compiler)->log)->flush();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(results))));
}

$Iterable* JavacTaskImpl::pathFor($CompilationUnitTree* unit, $Tree* node) {
	return static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc($($TreeInfo::pathFor($cast($JCTree, node), $cast($JCTree$JCCompilationUnit, unit))))->reverse())));
}

void JavacTaskImpl::ensureEntered() {
	$nc(this->args)->allowEmpty();
	enter(nullptr);
}

$Type* JavacTaskImpl::parseType($String* expr, $TypeElement* scope) {
	$useLocalCurrentObjectStackCache();
	if (expr == nullptr || $nc(expr)->equals(""_s)) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, compiler, $JavaCompiler::instance(this->context));
	$var($JavaFileObject, prev, $nc($nc(this->compiler)->log)->useSource(nullptr));
	$var($ParserFactory, parserFactory, $ParserFactory::instance(this->context));
	$var($Attr, attr, $Attr::instance(this->context));
	{
		$var($Throwable, var$0, nullptr);
		$var($Type, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($chars, var$3, $nc(($$str({expr, $cstr({'\0'})})))->toCharArray());
			$var($CharBuffer, buf, $CharBuffer::wrap(var$3, 0, $nc(expr)->length()));
			$var($Parser, parser, $nc(parserFactory)->newParser(buf, false, false, false));
			$var($JCTree, tree, $nc(parser)->parseType());
			$assign(var$2, $nc(attr)->attribType(tree, $cast($Symbol$TypeSymbol, scope)));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			$nc($nc(this->compiler)->log)->useSource(prev);
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

$Iterable* JavacTaskImpl::lambda$generate$2() {
	return generate(nullptr);
}

$Iterable* JavacTaskImpl::lambda$analyze$1() {
	return analyze(nullptr);
}

$Main$Result* JavacTaskImpl::lambda$doCall$0() {
	$useLocalCurrentObjectStackCache();
	prepareCompiler(false);
	if ($nc(this->compiler)->errorCount() > 0) {
		$init($Main$Result);
		return $Main$Result::ERROR;
	}
	$var($Collection, var$0, static_cast<$Collection*>($nc(this->args)->getFileObjects()));
	$nc(this->compiler)->compile(var$0, $($nc(this->args)->getClassNames()), this->processors, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(this->addModules$))));
	$init($Main$Result);
	return ($nc(this->compiler)->errorCount() > 0) ? $Main$Result::ERROR : $Main$Result::OK;
}

JavacTaskImpl::JavacTaskImpl() {
}

$Class* JavacTaskImpl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavacTaskImpl$$Lambda$lambda$doCall$0::classInfo$.name)) {
			return JavacTaskImpl$$Lambda$lambda$doCall$0::load$(name, initialize);
		}
		if (name->equals(JavacTaskImpl$$Lambda$parseInternal$1::classInfo$.name)) {
			return JavacTaskImpl$$Lambda$parseInternal$1::load$(name, initialize);
		}
		if (name->equals(JavacTaskImpl$$Lambda$lambda$analyze$1$2::classInfo$.name)) {
			return JavacTaskImpl$$Lambda$lambda$analyze$1$2::load$(name, initialize);
		}
		if (name->equals(JavacTaskImpl$$Lambda$lambda$generate$2$3::classInfo$.name)) {
			return JavacTaskImpl$$Lambda$lambda$generate$2$3::load$(name, initialize);
		}
	}
	$loadClass(JavacTaskImpl, name, initialize, &_JavacTaskImpl_ClassInfo_, allocate$JavacTaskImpl);
	return class$;
}

$Class* JavacTaskImpl::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com