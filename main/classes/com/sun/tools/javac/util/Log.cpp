#include <com/sun/tools/javac/util/Log.h>

#include <com/sun/tools/javac/api/DiagnosticFormatter.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/main/Main.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/BasicDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/Context$Factory.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/JavacMessages.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log$1.h>
#include <com/sun/tools/javac/util/Log$DefaultDiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log$DiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log$PrefixKind.h>
#include <com/sun/tools/javac/util/Log$WriterKind.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <com/sun/tools/javac/util/Position.h>
#include <com/sun/tools/javac/util/RawDiagnosticFormatter.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/EnumMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/tools/Diagnostic.h>
#include <javax/tools/DiagnosticListener.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef COMPILER_MISC
#undef DOE
#undef ERROR
#undef MAX_VALUE
#undef NOPOS
#undef NOTICE
#undef PROMPT
#undef SOURCE_LEVEL
#undef STDERR
#undef STDOUT
#undef WARNING
#undef XLINT_CUSTOM
#undef XMAXERRS
#undef XMAXWARNS

using $Log$WriterKindArray = $Array<::com::sun::tools::javac::util::Log$WriterKind>;
using $DiagnosticFormatter = ::com::sun::tools::javac::api::DiagnosticFormatter;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Main = ::com::sun::tools::javac::main::Main;
using $Option = ::com::sun::tools::javac::main::Option;
using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $AbstractDiagnosticFormatter = ::com::sun::tools::javac::util::AbstractDiagnosticFormatter;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $BasicDiagnosticFormatter = ::com::sun::tools::javac::util::BasicDiagnosticFormatter;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Factory = ::com::sun::tools::javac::util::Context$Factory;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticInfo = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JavacMessages = ::com::sun::tools::javac::util::JavacMessages;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log$1 = ::com::sun::tools::javac::util::Log$1;
using $Log$DefaultDiagnosticHandler = ::com::sun::tools::javac::util::Log$DefaultDiagnosticHandler;
using $Log$DiagnosticHandler = ::com::sun::tools::javac::util::Log$DiagnosticHandler;
using $Log$PrefixKind = ::com::sun::tools::javac::util::Log$PrefixKind;
using $Log$WriterKind = ::com::sun::tools::javac::util::Log$WriterKind;
using $Options = ::com::sun::tools::javac::util::Options;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $Position = ::com::sun::tools::javac::util::Position;
using $RawDiagnosticFormatter = ::com::sun::tools::javac::util::RawDiagnosticFormatter;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $EnumMap = ::java::util::EnumMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Diagnostic = ::javax::tools::Diagnostic;
using $DiagnosticListener = ::javax::tools::DiagnosticListener;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class Log$$Lambda$lambda$preRegister$0 : public $Context$Factory {
	$class(Log$$Lambda$lambda$preRegister$0, $NO_CLASS_INIT, $Context$Factory)
public:
	void init$($PrintWriter* w) {
		$set(this, w, w);
	}
	virtual $Object* make($Context* c) override {
		 return $of(Log::lambda$preRegister$0(w, c));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Log$$Lambda$lambda$preRegister$0>());
	}
	$PrintWriter* w = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Log$$Lambda$lambda$preRegister$0::fieldInfos[2] = {
	{"w", "Ljava/io/PrintWriter;", nullptr, $PUBLIC, $field(Log$$Lambda$lambda$preRegister$0, w)},
	{}
};
$MethodInfo Log$$Lambda$lambda$preRegister$0::methodInfos[3] = {
	{"<init>", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $method(static_cast<void(Log$$Lambda$lambda$preRegister$0::*)($PrintWriter*)>(&Log$$Lambda$lambda$preRegister$0::init$))},
	{"make", "(Lcom/sun/tools/javac/util/Context;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Log$$Lambda$lambda$preRegister$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.util.Log$$Lambda$lambda$preRegister$0",
	"java.lang.Object",
	"com.sun.tools.javac.util.Context$Factory",
	fieldInfos,
	methodInfos
};
$Class* Log$$Lambda$lambda$preRegister$0::load$($String* name, bool initialize) {
	$loadClass(Log$$Lambda$lambda$preRegister$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Log$$Lambda$lambda$preRegister$0::class$ = nullptr;

class Log$$Lambda$lambda$new$1$1 : public $Runnable {
	$class(Log$$Lambda$lambda$new$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(Log* inst, $Options* options) {
		$set(this, inst$, inst);
		$set(this, options, options);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$1(options);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Log$$Lambda$lambda$new$1$1>());
	}
	Log* inst$ = nullptr;
	$Options* options = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Log$$Lambda$lambda$new$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Log$$Lambda$lambda$new$1$1, inst$)},
	{"options", "Lcom/sun/tools/javac/util/Options;", nullptr, $PUBLIC, $field(Log$$Lambda$lambda$new$1$1, options)},
	{}
};
$MethodInfo Log$$Lambda$lambda$new$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Log;Lcom/sun/tools/javac/util/Options;)V", nullptr, $PUBLIC, $method(static_cast<void(Log$$Lambda$lambda$new$1$1::*)(Log*,$Options*)>(&Log$$Lambda$lambda$new$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Log$$Lambda$lambda$new$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.util.Log$$Lambda$lambda$new$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Log$$Lambda$lambda$new$1$1::load$($String* name, bool initialize) {
	$loadClass(Log$$Lambda$lambda$new$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Log$$Lambda$lambda$new$1$1::class$ = nullptr;

$FieldInfo _Log_FieldInfo_[] = {
	{"logKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/util/Log;>;", $PUBLIC | $STATIC | $FINAL, $staticField(Log, logKey)},
	{"outKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Ljava/io/PrintWriter;>;", $PUBLIC | $STATIC | $FINAL, $staticField(Log, outKey)},
	{"errKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Ljava/io/PrintWriter;>;", $PUBLIC | $STATIC | $FINAL, $staticField(Log, errKey)},
	{"writers", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/Log$WriterKind;Ljava/io/PrintWriter;>;", $PRIVATE | $FINAL, $field(Log, writers)},
	{"MaxErrors", "I", nullptr, $PROTECTED, $field(Log, MaxErrors)},
	{"MaxWarnings", "I", nullptr, $PROTECTED, $field(Log, MaxWarnings)},
	{"promptOnError", "Z", nullptr, $PUBLIC, $field(Log, promptOnError)},
	{"emitWarnings", "Z", nullptr, $PUBLIC, $field(Log, emitWarnings)},
	{"suppressNotes", "Z", nullptr, $PUBLIC, $field(Log, suppressNotes)},
	{"dumpOnError", "Z", nullptr, $PUBLIC, $field(Log, dumpOnError)},
	{"diagListener", "Ljavax/tools/DiagnosticListener;", "Ljavax/tools/DiagnosticListener<-Ljavax/tools/JavaFileObject;>;", $PROTECTED, $field(Log, diagListener)},
	{"diagFormatter", "Lcom/sun/tools/javac/api/DiagnosticFormatter;", "Lcom/sun/tools/javac/api/DiagnosticFormatter<Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PRIVATE, $field(Log, diagFormatter)},
	{"expectDiagKeys", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $field(Log, expectDiagKeys)},
	{"compressedOutput", "Z", nullptr, $PUBLIC, $field(Log, compressedOutput)},
	{"messages", "Lcom/sun/tools/javac/util/JavacMessages;", nullptr, $PRIVATE, $field(Log, messages)},
	{"diagnosticHandler", "Lcom/sun/tools/javac/util/Log$DiagnosticHandler;", nullptr, $PRIVATE, $field(Log, diagnosticHandler)},
	{"nerrors", "I", nullptr, $PUBLIC, $field(Log, nerrors)},
	{"nwarnings", "I", nullptr, $PUBLIC, $field(Log, nwarnings)},
	{"nsuppressederrors", "I", nullptr, $PUBLIC, $field(Log, nsuppressederrors)},
	{"nsuppressedwarns", "I", nullptr, $PUBLIC, $field(Log, nsuppressedwarns)},
	{"recorded", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/util/Pair<Ljavax/tools/JavaFileObject;Ljava/lang/Integer;>;>;", $PROTECTED, $field(Log, recorded)},
	{"recordedSourceLevelErrors", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/util/Pair<Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/util/List<Ljava/lang/String;>;>;>;", $PROTECTED, $field(Log, recordedSourceLevelErrors)},
	{"useRawMessages", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Log, useRawMessages)},
	{}
};

$MethodInfo _Log_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(Log::*)($Context*)>(&Log::init$))},
	{"<init>", "(Lcom/sun/tools/javac/util/Context;Ljava/io/PrintWriter;)V", nullptr, $PROTECTED, $method(static_cast<void(Log::*)($Context*,$PrintWriter*)>(&Log::init$))},
	{"<init>", "(Lcom/sun/tools/javac/util/Context;Ljava/io/PrintWriter;Ljava/io/PrintWriter;)V", nullptr, $PROTECTED, $method(static_cast<void(Log::*)($Context*,$PrintWriter*,$PrintWriter*)>(&Log::init$))},
	{"<init>", "(Lcom/sun/tools/javac/util/Context;Ljava/util/Map;)V", "(Lcom/sun/tools/javac/util/Context;Ljava/util/Map<Lcom/sun/tools/javac/util/Log$WriterKind;Ljava/io/PrintWriter;>;)V", $PRIVATE, $method(static_cast<void(Log::*)($Context*,$Map*)>(&Log::init$))},
	{"currentSourceFile", "()Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC},
	{"directError", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PROTECTED | $TRANSIENT},
	{"flush", "()V", nullptr, $PUBLIC},
	{"flush", "(Lcom/sun/tools/javac/util/Log$WriterKind;)V", nullptr, $PUBLIC},
	{"format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$String*(*)($String*,$ObjectArray*)>(&Log::format))},
	{"getCode", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/List<Ljava/lang/String;>;", $PRIVATE, $method(static_cast<$List*(Log::*)($JCDiagnostic*)>(&Log::getCode))},
	{"getCodeRecursive", "(Lcom/sun/tools/javac/util/ListBuffer;Lcom/sun/tools/javac/util/JCDiagnostic;)V", "(Lcom/sun/tools/javac/util/ListBuffer<Ljava/lang/String;>;Lcom/sun/tools/javac/util/JCDiagnostic;)V", $PRIVATE, $method(static_cast<void(Log::*)($ListBuffer*,$JCDiagnostic*)>(&Log::getCodeRecursive))},
	{"getDefaultMaxErrors", "()I", nullptr, $PROTECTED},
	{"getDefaultMaxWarnings", "()I", nullptr, $PROTECTED},
	{"getDiagnosticFormatter", "()Lcom/sun/tools/javac/api/DiagnosticFormatter;", "()Lcom/sun/tools/javac/api/DiagnosticFormatter<Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PUBLIC},
	{"getIntOption", "(Lcom/sun/tools/javac/util/Options;Lcom/sun/tools/javac/main/Option;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Log::*)($Options*,$Option*,int32_t)>(&Log::getIntOption))},
	{"getLocalizedString", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$String*(*)($String*,$ObjectArray*)>(&Log::getLocalizedString))},
	{"getWriter", "(Lcom/sun/tools/javac/util/Log$WriterKind;)Ljava/io/PrintWriter;", nullptr, $PUBLIC},
	{"getWriterForDiagnosticType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;)Ljava/io/PrintWriter;", nullptr, $PROTECTED},
	{"hasDiagnosticListener", "()Z", nullptr, $PUBLIC},
	{"hasErrorOn", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)Z", nullptr, $PUBLIC},
	{"initOptions", "(Lcom/sun/tools/javac/util/Options;)V", nullptr, $PRIVATE, $method(static_cast<void(Log::*)($Options*)>(&Log::initOptions))},
	{"initWriters", "(Lcom/sun/tools/javac/util/Context;)Ljava/util/Map;", "(Lcom/sun/tools/javac/util/Context;)Ljava/util/Map<Lcom/sun/tools/javac/util/Log$WriterKind;Ljava/io/PrintWriter;>;", $PRIVATE | $STATIC, $method(static_cast<$Map*(*)($Context*)>(&Log::initWriters))},
	{"initWriters", "(Ljava/io/PrintWriter;Ljava/io/PrintWriter;)Ljava/util/Map;", "(Ljava/io/PrintWriter;Ljava/io/PrintWriter;)Ljava/util/Map<Lcom/sun/tools/javac/util/Log$WriterKind;Ljava/io/PrintWriter;>;", $PRIVATE | $STATIC, $method(static_cast<$Map*(*)($PrintWriter*,$PrintWriter*)>(&Log::initWriters))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/util/Log;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Log*(*)($Context*)>(&Log::instance))},
	{"lambda$new$1", "(Lcom/sun/tools/javac/util/Options;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Log::*)($Options*)>(&Log::lambda$new$1))},
	{"lambda$preRegister$0", "(Ljava/io/PrintWriter;Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<Log*(*)($PrintWriter*,$Context*)>(&Log::lambda$preRegister$0))},
	{"localize", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT},
	{"localize", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"localize", "(Lcom/sun/tools/javac/util/Log$PrefixKind;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT},
	{"popDiagnosticHandler", "(Lcom/sun/tools/javac/util/Log$DiagnosticHandler;)V", nullptr, $PUBLIC},
	{"preRegister", "(Lcom/sun/tools/javac/util/Context;Ljava/io/PrintWriter;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Context*,$PrintWriter*)>(&Log::preRegister))},
	{"printErrLine", "(ILjava/io/PrintWriter;)V", nullptr, $PRIVATE, $method(static_cast<void(Log::*)(int32_t,$PrintWriter*)>(&Log::printErrLine))},
	{"printLines", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"printLines", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo;)V", nullptr, $PUBLIC},
	{"printLines", "(Lcom/sun/tools/javac/util/Log$PrefixKind;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"printLines", "(Lcom/sun/tools/javac/util/Log$WriterKind;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"printLines", "(Lcom/sun/tools/javac/util/Log$WriterKind;Lcom/sun/tools/javac/util/Log$PrefixKind;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"printNewline", "()V", nullptr, $PUBLIC},
	{"printNewline", "(Lcom/sun/tools/javac/util/Log$WriterKind;)V", nullptr, $PUBLIC},
	{"printRawDiag", "(Ljava/io/PrintWriter;Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Log::*)($PrintWriter*,$String*,int32_t,$String*)>(&Log::printRawDiag))},
	{"printRawLines", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"printRawLines", "(Lcom/sun/tools/javac/util/Log$WriterKind;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"printRawLines", "(Ljava/io/PrintWriter;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($PrintWriter*,$String*)>(&Log::printRawLines))},
	{"printVerbose", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"prompt", "()V", nullptr, $PUBLIC},
	{"rawError", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"rawWarning", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC},
	{"setDiagnosticFormatter", "(Lcom/sun/tools/javac/api/DiagnosticFormatter;)V", "(Lcom/sun/tools/javac/api/DiagnosticFormatter<Lcom/sun/tools/javac/util/JCDiagnostic;>;)V", $PUBLIC},
	{"setEndPosTable", "(Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/tree/EndPosTable;)V", nullptr, $PUBLIC},
	{"setWriter", "(Lcom/sun/tools/javac/util/Log$WriterKind;Ljava/io/PrintWriter;)V", nullptr, $PUBLIC},
	{"setWriters", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC},
	{"shouldReport", "(Ljavax/tools/JavaFileObject;I)Z", nullptr, $PROTECTED},
	{"shouldReport", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Log::*)($JCDiagnostic*)>(&Log::shouldReport))},
	{"strictWarning", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"writeDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _Log_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Log$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.util.Log$DefaultDiagnosticHandler", "com.sun.tools.javac.util.Log", "DefaultDiagnosticHandler", $PRIVATE},
	{"com.sun.tools.javac.util.Log$WriterKind", "com.sun.tools.javac.util.Log", "WriterKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.util.Log$DeferredDiagnosticHandler", "com.sun.tools.javac.util.Log", "DeferredDiagnosticHandler", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.Log$DiscardDiagnosticHandler", "com.sun.tools.javac.util.Log", "DiscardDiagnosticHandler", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.Log$DiagnosticHandler", "com.sun.tools.javac.util.Log", "DiagnosticHandler", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.util.Log$PrefixKind", "com.sun.tools.javac.util.Log", "PrefixKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Log_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.Log",
	"com.sun.tools.javac.util.AbstractLog",
	nullptr,
	_Log_FieldInfo_,
	_Log_MethodInfo_,
	nullptr,
	nullptr,
	_Log_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Log$1,com.sun.tools.javac.util.Log$DefaultDiagnosticHandler,com.sun.tools.javac.util.Log$WriterKind,com.sun.tools.javac.util.Log$DeferredDiagnosticHandler,com.sun.tools.javac.util.Log$DiscardDiagnosticHandler,com.sun.tools.javac.util.Log$DiagnosticHandler,com.sun.tools.javac.util.Log$PrefixKind"
};

$Object* allocate$Log($Class* clazz) {
	return $of($alloc(Log));
}

$Context$Key* Log::logKey = nullptr;
$Context$Key* Log::outKey = nullptr;
$Context$Key* Log::errKey = nullptr;
bool Log::useRawMessages = false;

Log* Log::instance($Context* context) {
	$init(Log);
	$var(Log, instance, $cast(Log, $nc(context)->get(Log::logKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Log, context));
	}
	return instance;
}

void Log::preRegister($Context* context, $PrintWriter* w) {
	$init(Log);
	$nc(context)->put(Log::class$, (static_cast<$Context$Factory*>($$new(Log$$Lambda$lambda$preRegister$0, w))));
}

void Log::init$($Context* context) {
	Log::init$(context, $(initWriters(context)));
}

$Map* Log::initWriters($Context* context) {
	$init(Log);
	$useLocalCurrentObjectStackCache();
	$var($PrintWriter, out, $cast($PrintWriter, $nc(context)->get(Log::outKey)));
	$var($PrintWriter, err, $cast($PrintWriter, context->get(Log::errKey)));
	if (out == nullptr && err == nullptr) {
		$assign(out, $new($PrintWriter, static_cast<$OutputStream*>($System::out), true));
		$assign(err, $new($PrintWriter, static_cast<$OutputStream*>($System::err), true));
		return initWriters(out, err);
	} else if (out == nullptr || err == nullptr) {
		$var($PrintWriter, pw, (out != nullptr) ? out : err);
		return initWriters(pw, pw);
	} else {
		return initWriters(out, err);
	}
}

void Log::init$($Context* context, $PrintWriter* writer) {
	Log::init$(context, $(initWriters(writer, writer)));
}

void Log::init$($Context* context, $PrintWriter* out, $PrintWriter* err) {
	Log::init$(context, $(initWriters(out, err)));
}

$Map* Log::initWriters($PrintWriter* out, $PrintWriter* err) {
	$init(Log);
	$load($Log$WriterKind);
	$var($Map, writers, $new($EnumMap, $Log$WriterKind::class$));
	$init($Log$WriterKind);
	writers->put($Log$WriterKind::ERROR, err);
	writers->put($Log$WriterKind::WARNING, err);
	writers->put($Log$WriterKind::NOTICE, err);
	writers->put($Log$WriterKind::STDOUT, out);
	writers->put($Log$WriterKind::STDERR, err);
	return writers;
}

void Log::init$($Context* context, $Map* writers) {
	$useLocalCurrentObjectStackCache();
	$AbstractLog::init$($($JCDiagnostic$Factory::instance(context)));
	this->nerrors = 0;
	this->nwarnings = 0;
	this->nsuppressederrors = 0;
	this->nsuppressedwarns = 0;
	$set(this, recorded, $new($HashSet));
	$set(this, recordedSourceLevelErrors, $new($HashSet));
	$nc(context)->put(Log::logKey, $of(this));
	$set(this, writers, writers);
	$load($DiagnosticListener);
	$var($DiagnosticListener, dl, $cast($DiagnosticListener, context->get($DiagnosticListener::class$)));
	$set(this, diagListener, dl);
	$set(this, diagnosticHandler, $new($Log$DefaultDiagnosticHandler, this));
	$set(this, messages, $JavacMessages::instance(context));
	$init($Main);
	$nc(this->messages)->add($Main::javacBundleName);
	$var($Options, options, $Options::instance(context));
	initOptions(options);
	$nc(options)->addListener(static_cast<$Runnable*>($$new(Log$$Lambda$lambda$new$1$1, this, options)));
}

void Log::initOptions($Options* options) {
	$useLocalCurrentObjectStackCache();
	$init($Option);
	this->dumpOnError = $nc(options)->isSet($Option::DOE);
	this->promptOnError = options->isSet($Option::PROMPT);
	this->emitWarnings = options->isUnset($Option::XLINT_CUSTOM, "none"_s);
	this->suppressNotes = options->isSet("suppressNotes"_s);
	this->MaxErrors = getIntOption(options, $Option::XMAXERRS, getDefaultMaxErrors());
	this->MaxWarnings = getIntOption(options, $Option::XMAXWARNS, getDefaultMaxWarnings());
	bool rawDiagnostics = options->isSet("rawDiagnostics"_s);
	$set(this, diagFormatter, rawDiagnostics ? static_cast<$DiagnosticFormatter*>($new($RawDiagnosticFormatter, options)) : static_cast<$DiagnosticFormatter*>($new($BasicDiagnosticFormatter, options, this->messages)));
	$var($String, ek, options->get("expectKeys"_s));
	if (ek != nullptr) {
		$set(this, expectDiagKeys, $new($HashSet, $(static_cast<$Collection*>($Arrays::asList($(ek->split(", *"_s)))))));
	}
}

int32_t Log::getIntOption($Options* options, $Option* option, int32_t defaultValue) {
	$var($String, s, $nc(options)->get(option));
	try {
		if (s != nullptr) {
			int32_t n = $Integer::parseInt(s);
			return (n <= 0 ? $Integer::MAX_VALUE : n);
		}
	} catch ($NumberFormatException& e) {
	}
	return defaultValue;
}

int32_t Log::getDefaultMaxErrors() {
	return 100;
}

int32_t Log::getDefaultMaxWarnings() {
	return 100;
}

bool Log::hasDiagnosticListener() {
	return this->diagListener != nullptr;
}

void Log::setEndPosTable($JavaFileObject* name, $EndPosTable* endPosTable) {
	$Assert::checkNonNull(name);
	$nc($(getSource(name)))->setEndPosTable(endPosTable);
}

$JavaFileObject* Log::currentSourceFile() {
	return this->source == nullptr ? ($JavaFileObject*)nullptr : $nc(this->source)->getFile();
}

$DiagnosticFormatter* Log::getDiagnosticFormatter() {
	return this->diagFormatter;
}

void Log::setDiagnosticFormatter($DiagnosticFormatter* diagFormatter) {
	$set(this, diagFormatter, diagFormatter);
}

$PrintWriter* Log::getWriter($Log$WriterKind* kind) {
	return $cast($PrintWriter, $nc(this->writers)->get(kind));
}

void Log::setWriter($Log$WriterKind* kind, $PrintWriter* pw) {
	$Assert::checkNonNull(pw);
	$nc(this->writers)->put(kind, pw);
}

void Log::setWriters($PrintWriter* pw) {
	$Assert::checkNonNull(pw);
	{
		$var($Log$WriterKindArray, arr$, $Log$WriterKind::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Log$WriterKind* k = arr$->get(i$);
			$nc(this->writers)->put(k, pw);
		}
	}
}

void Log::popDiagnosticHandler($Log$DiagnosticHandler* h) {
	$Assert::check(this->diagnosticHandler == h);
	$set(this, diagnosticHandler, $nc(h)->prev);
}

void Log::flush() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(this->writers)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($PrintWriter, pw, $cast($PrintWriter, i$->next()));
			{
				$nc(pw)->flush();
			}
		}
	}
}

void Log::flush($Log$WriterKind* kind) {
	$nc($(getWriter(kind)))->flush();
}

bool Log::shouldReport($JavaFileObject* file, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	if (file == nullptr) {
		return true;
	}
	$var($Pair, coords, $new($Pair, file, $($Integer::valueOf(pos))));
	bool shouldReport = !$nc(this->recorded)->contains(coords);
	if (shouldReport) {
		$nc(this->recorded)->add(coords);
	}
	return shouldReport;
}

bool Log::shouldReport($JCDiagnostic* d) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, file, $cast($JavaFileObject, $nc(d)->getSource()));
	if (file == nullptr) {
		return true;
	}
	if (!this->shouldReport(file, d->getIntPosition())) {
		return false;
	}
	$init($JCDiagnostic$DiagnosticFlag);
	if (!d->isFlagSet($JCDiagnostic$DiagnosticFlag::SOURCE_LEVEL)) {
		return true;
	}
	$var($Pair, coords, $new($Pair, file, $(getCode(d))));
	bool shouldReport = !$nc(this->recordedSourceLevelErrors)->contains(coords);
	if (shouldReport) {
		$nc(this->recordedSourceLevelErrors)->add(coords);
	}
	return shouldReport;
}

$List* Log::getCode($JCDiagnostic* d) {
	$var($ListBuffer, buf, $new($ListBuffer));
	getCodeRecursive(buf, d);
	return buf->toList();
}

void Log::getCodeRecursive($ListBuffer* buf, $JCDiagnostic* d) {
	$useLocalCurrentObjectStackCache();
	$nc(buf)->add($($nc(d)->getCode()));
	{
		$var($ObjectArray, arr$, $nc(d)->getArgs());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, o, arr$->get(i$));
			{
				{
					$var($JCDiagnostic, diagnostic, nullptr);
					bool var$0 = $instanceOf($JCDiagnostic, o);
					if (var$0) {
						$assign(diagnostic, $cast($JCDiagnostic, o));
						var$0 = true;
					}
					if (var$0) {
						getCodeRecursive(buf, diagnostic);
					}
				}
			}
		}
	}
}

bool Log::hasErrorOn($JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, file, this->source != nullptr ? $nc(this->source)->fileObject : ($JavaFileObject*)nullptr);
	return file != nullptr && $nc(this->recorded)->contains($$new($Pair, file, $($Integer::valueOf($nc(pos)->getPreferredPosition()))));
}

void Log::prompt() {
	$useLocalCurrentObjectStackCache();
	if (this->promptOnError) {
		$nc($System::err)->println($(localize("resume.abort"_s, $$new($ObjectArray, 0))));
		try {
			while (true) {
				switch ($nc($System::in)->read()) {
				case u'a':
					{}
				case u'A':
					{
						$System::exit(-1);
						return;
					}
				case u'r':
					{}
				case u'R':
					{
						return;
					}
				case u'x':
					{}
				case u'X':
					{
						$throwNew($AssertionError, $of("user abort"_s));
					}
				default:
					{}
				}
			}
		} catch ($IOException& e) {
		}
	}
}

void Log::printErrLine(int32_t pos, $PrintWriter* writer) {
	$var($String, line, this->source == nullptr ? ($String*)nullptr : $nc(this->source)->getLine(pos));
	if (line == nullptr) {
		return;
	}
	int32_t col = $nc(this->source)->getColumnNumber(pos, false);
	printRawLines(writer, line);
	for (int32_t i = 0; i < col - 1; ++i) {
		$nc(writer)->print(($nc(line)->charAt(i) == u'\t') ? "\t"_s : " "_s);
	}
	$nc(writer)->println("^"_s);
	writer->flush();
}

void Log::printNewline() {
	$init($Log$WriterKind);
	$var($PrintWriter, noticeWriter, $cast($PrintWriter, $nc(this->writers)->get($Log$WriterKind::NOTICE)));
	$nc(noticeWriter)->println();
}

void Log::printNewline($Log$WriterKind* wk) {
	$nc($(getWriter(wk)))->println();
}

void Log::printLines($String* key, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$init($Log$WriterKind);
	$var($PrintWriter, noticeWriter, $cast($PrintWriter, $nc(this->writers)->get($Log$WriterKind::NOTICE)));
	printRawLines(noticeWriter, $(localize(key, args)));
}

void Log::printLines($JCDiagnostic$DiagnosticInfo* diag) {
	$useLocalCurrentObjectStackCache();
	$init($Log$WriterKind);
	$var($PrintWriter, noticeWriter, $cast($PrintWriter, $nc(this->writers)->get($Log$WriterKind::NOTICE)));
	printRawLines(noticeWriter, $(localize(diag)));
}

void Log::printLines($Log$PrefixKind* pk, $String* key, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$init($Log$WriterKind);
	$var($PrintWriter, noticeWriter, $cast($PrintWriter, $nc(this->writers)->get($Log$WriterKind::NOTICE)));
	printRawLines(noticeWriter, $(localize(pk, key, args)));
}

void Log::printLines($Log$WriterKind* wk, $String* key, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($PrintWriter, var$0, getWriter(wk));
	printRawLines(var$0, $(localize(key, args)));
}

void Log::printLines($Log$WriterKind* wk, $Log$PrefixKind* pk, $String* key, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($PrintWriter, var$0, getWriter(wk));
	printRawLines(var$0, $(localize(pk, key, args)));
}

void Log::printRawLines($String* msg) {
	$init($Log$WriterKind);
	$var($PrintWriter, noticeWriter, $cast($PrintWriter, $nc(this->writers)->get($Log$WriterKind::NOTICE)));
	printRawLines(noticeWriter, msg);
}

void Log::printRawLines($Log$WriterKind* kind, $String* msg) {
	printRawLines($(getWriter(kind)), msg);
}

void Log::printRawLines($PrintWriter* writer, $String* msg$renamed) {
	$init(Log);
	$useLocalCurrentObjectStackCache();
	$var($String, msg, msg$renamed);
	int32_t nl = 0;
	while ((nl = $nc(msg)->indexOf((int32_t)u'\n')) != -1) {
		$nc(writer)->println($(msg->substring(0, nl)));
		$assign(msg, msg->substring(nl + 1));
	}
	if ($nc(msg)->length() != 0) {
		$nc(writer)->println(msg);
	}
}

void Log::printVerbose($String* key, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$init($Log$WriterKind);
	$var($PrintWriter, noticeWriter, $cast($PrintWriter, $nc(this->writers)->get($Log$WriterKind::NOTICE)));
	printRawLines(noticeWriter, $(localize($$str({"verbose."_s, key}), args)));
}

void Log::directError($String* key, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$init($Log$WriterKind);
	$var($PrintWriter, errWriter, $cast($PrintWriter, $nc(this->writers)->get($Log$WriterKind::ERROR)));
	printRawLines(errWriter, $(localize(key, args)));
	$nc(errWriter)->flush();
}

void Log::strictWarning($JCDiagnostic$DiagnosticPosition* pos, $String* key, $ObjectArray* args) {
	writeDiagnostic($($nc(this->diags)->warning(nullptr, this->source, pos, key, args)));
	++this->nwarnings;
}

void Log::report($JCDiagnostic* diagnostic) {
	$nc(this->diagnosticHandler)->report(diagnostic);
}

void Log::writeDiagnostic($JCDiagnostic* diag) {
	$useLocalCurrentObjectStackCache();
	if (this->diagListener != nullptr) {
		$nc(this->diagListener)->report(diag);
		return;
	}
	$var($PrintWriter, writer, getWriterForDiagnosticType($($nc(diag)->getType())));
	printRawLines(writer, $($nc(this->diagFormatter)->format(diag, $($nc(this->messages)->getCurrentLocale()))));
	if (this->promptOnError) {
		$init($Log$1);
		switch ($nc($Log$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->get($nc(($($nc(diag)->getType())))->ordinal())) {
		case 4:
			{}
		case 3:
			{
				prompt();
			}
		}
	}
	if (this->dumpOnError) {
		$$new($RuntimeException)->printStackTrace(writer);
	}
	$nc(writer)->flush();
}

$PrintWriter* Log::getWriterForDiagnosticType($JCDiagnostic$DiagnosticType* dt) {
	$init($Log$1);
	switch ($nc($Log$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->get($nc((dt))->ordinal())) {
	case 1:
		{
			$throwNew($IllegalArgumentException);
		}
	case 2:
		{
			$init($Log$WriterKind);
			return $cast($PrintWriter, $nc(this->writers)->get($Log$WriterKind::NOTICE));
		}
	case 3:
		{
			$init($Log$WriterKind);
			return $cast($PrintWriter, $nc(this->writers)->get($Log$WriterKind::WARNING));
		}
	case 4:
		{
			$init($Log$WriterKind);
			return $cast($PrintWriter, $nc(this->writers)->get($Log$WriterKind::ERROR));
		}
	default:
		{
			$throwNew($Error);
		}
	}
}

$String* Log::getLocalizedString($String* key, $ObjectArray* args) {
	$init(Log);
	$init($Log$PrefixKind);
	return $JavacMessages::getDefaultLocalizedString($($Log$PrefixKind::COMPILER_MISC->key(key)), args);
}

$String* Log::localize($String* key, $ObjectArray* args) {
	$init($Log$PrefixKind);
	return localize($Log$PrefixKind::COMPILER_MISC, key, args);
}

$String* Log::localize($JCDiagnostic$DiagnosticInfo* diagInfo) {
	if (Log::useRawMessages) {
		return $nc(diagInfo)->key();
	} else {
		return $nc(this->messages)->getLocalizedString(diagInfo);
	}
}

$String* Log::localize($Log$PrefixKind* pk, $String* key, $ObjectArray* args) {
	if (Log::useRawMessages) {
		return $nc(pk)->key(key);
	} else {
		return $nc(this->messages)->getLocalizedString($($nc(pk)->key(key)), args);
	}
}

void Log::printRawDiag($PrintWriter* pw, $String* prefix, int32_t pos, $String* msg) {
	$useLocalCurrentObjectStackCache();
	if (this->source == nullptr || pos == $Position::NOPOS) {
		printRawLines(pw, $$str({prefix, msg}));
	} else {
		int32_t line = $nc(this->source)->getLineNumber(pos);
		$var($JavaFileObject, file, $nc(this->source)->getFile());
		if (file != nullptr) {
			printRawLines(pw, $$str({$(file->getName()), ":"_s, $$str(line), ": "_s, msg}));
		}
		printErrLine(pos, pw);
	}
	$nc(pw)->flush();
}

void Log::rawError(int32_t pos, $String* msg) {
	$useLocalCurrentObjectStackCache();
	$init($Log$WriterKind);
	$var($PrintWriter, errWriter, $cast($PrintWriter, $nc(this->writers)->get($Log$WriterKind::ERROR)));
	if (this->nerrors < this->MaxErrors && shouldReport($(currentSourceFile()), pos)) {
		printRawDiag(errWriter, "error: "_s, pos, msg);
		prompt();
		++this->nerrors;
	} else {
		++this->nsuppressederrors;
	}
	$nc(errWriter)->flush();
}

void Log::rawWarning(int32_t pos, $String* msg) {
	$init($Log$WriterKind);
	$var($PrintWriter, warnWriter, $cast($PrintWriter, $nc(this->writers)->get($Log$WriterKind::ERROR)));
	if (this->emitWarnings) {
		if (this->nwarnings < this->MaxWarnings) {
			printRawDiag(warnWriter, "warning: "_s, pos, msg);
		} else {
			++this->nsuppressedwarns;
		}
	}
	prompt();
	++this->nwarnings;
	$nc(warnWriter)->flush();
}

$String* Log::format($String* fmt, $ObjectArray* args) {
	$init(Log);
	return $String::format(($Locale*)nullptr, fmt, args);
}

void Log::lambda$new$1($Options* options) {
	initOptions(options);
}

Log* Log::lambda$preRegister$0($PrintWriter* w, $Context* c) {
	$init(Log);
	return $new(Log, c, w);
}

void clinit$Log($Class* class$) {
	$assignStatic(Log::logKey, $new($Context$Key));
	$assignStatic(Log::outKey, $new($Context$Key));
	$assignStatic(Log::errKey, $new($Context$Key));
	Log::useRawMessages = false;
}

Log::Log() {
}

$Class* Log::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Log$$Lambda$lambda$preRegister$0::classInfo$.name)) {
			return Log$$Lambda$lambda$preRegister$0::load$(name, initialize);
		}
		if (name->equals(Log$$Lambda$lambda$new$1$1::classInfo$.name)) {
			return Log$$Lambda$lambda$new$1$1::load$(name, initialize);
		}
	}
	$loadClass(Log, name, initialize, &_Log_ClassInfo_, clinit$Log, allocate$Log);
	return class$;
}

$Class* Log::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com