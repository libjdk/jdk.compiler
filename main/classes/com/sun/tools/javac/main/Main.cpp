#include <com/sun/tools/javac/main/Main.h>

#include <com/sun/source/util/JavacTask.h>
#include <com/sun/tools/javac/api/BasicJavacTask.h>
#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/file/CacheFSInfo.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/main/Arguments.h>
#include <com/sun/tools/javac/main/CommandLine$UnmatchedQuote.h>
#include <com/sun/tools/javac/main/CommandLine.h>
#include <com/sun/tools/javac/main/DelegatingJavaFileManager.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/main/Main$1.h>
#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/javac/main/Option$InvalidValueException.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper$GrumpyHelper.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/processing/AnnotationProcessingError.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/ClientCodeException.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies.h>
#include <com/sun/tools/javac/util/FatalError.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log$PrefixKind.h>
#include <com/sun/tools/javac/util/Log$WriterKind.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/PropagatedException.h>
#include <java/io/BufferedWriter.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessError.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IncompatibleClassChangeError.h>
#include <java/lang/Iterable.h>
#include <java/lang/LinkageError.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/StackOverflowError.h>
#include <java/lang/VirtualMachineError.h>
#include <java/net/URL.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/NoSuchFileException.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/security/CodeSource.h>
#include <java/security/DigestInputStream.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/ProtectionDomain.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Calendar.h>
#include <java/util/Collection.h>
#include <java/util/Date.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <javax/tools/JavaFileManager.h>
#include <jcpp.h>

#undef ABNORMAL
#undef CMDERR
#undef ENV_OPT_NAME
#undef ERROR
#undef HELP
#undef JAVAC
#undef MULTIRELEASE
#undef NOTICE
#undef OK
#undef SYSERR
#undef XSTDOUT

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $JavacTask = ::com::sun::source::util::JavacTask;
using $BasicJavacTask = ::com::sun::tools::javac::api::BasicJavacTask;
using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $CacheFSInfo = ::com::sun::tools::javac::file::CacheFSInfo;
using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $Arguments = ::com::sun::tools::javac::main::Arguments;
using $CommandLine = ::com::sun::tools::javac::main::CommandLine;
using $CommandLine$UnmatchedQuote = ::com::sun::tools::javac::main::CommandLine$UnmatchedQuote;
using $DelegatingJavaFileManager = ::com::sun::tools::javac::main::DelegatingJavaFileManager;
using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $Main$1 = ::com::sun::tools::javac::main::Main$1;
using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $Option = ::com::sun::tools::javac::main::Option;
using $Option$InvalidValueException = ::com::sun::tools::javac::main::Option$InvalidValueException;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $OptionHelper$GrumpyHelper = ::com::sun::tools::javac::main::OptionHelper$GrumpyHelper;
using $AnnotationProcessingError = ::com::sun::tools::javac::processing::AnnotationProcessingError;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $ClientCodeException = ::com::sun::tools::javac::util::ClientCodeException;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Dependencies$GraphDependencies = ::com::sun::tools::javac::util::Dependencies$GraphDependencies;
using $FatalError = ::com::sun::tools::javac::util::FatalError;
using $JCDiagnostic$DiagnosticInfo = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$PrefixKind = ::com::sun::tools::javac::util::Log$PrefixKind;
using $Log$WriterKind = ::com::sun::tools::javac::util::Log$WriterKind;
using $Options = ::com::sun::tools::javac::util::Options;
using $PropagatedException = ::com::sun::tools::javac::util::PropagatedException;
using $BufferedWriter = ::java::io::BufferedWriter;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $FilterInputStream = ::java::io::FilterInputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $Writer = ::java::io::Writer;
using $Byte = ::java::lang::Byte;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessError = ::java::lang::IllegalAccessError;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IncompatibleClassChangeError = ::java::lang::IncompatibleClassChangeError;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $RuntimeException = ::java::lang::RuntimeException;
using $StackOverflowError = ::java::lang::StackOverflowError;
using $VirtualMachineError = ::java::lang::VirtualMachineError;
using $URL = ::java::net::URL;
using $Files = ::java::nio::file::Files;
using $NoSuchFileException = ::java::nio::file::NoSuchFileException;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $CodeSource = ::java::security::CodeSource;
using $DigestInputStream = ::java::security::DigestInputStream;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $DateFormat = ::java::text::DateFormat;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Calendar = ::java::util::Calendar;
using $Collection = ::java::util::Collection;
using $Date = ::java::util::Date;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $OptionChecker = ::javax::tools::OptionChecker;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$FieldInfo _Main_FieldInfo_[] = {
	{"ownName", "Ljava/lang/String;", nullptr, 0, $field(Main, ownName)},
	{"stdOut", "Ljava/io/PrintWriter;", nullptr, 0, $field(Main, stdOut)},
	{"stdErr", "Ljava/io/PrintWriter;", nullptr, 0, $field(Main, stdErr)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PUBLIC, $field(Main, log)},
	{"apiMode", "Z", nullptr, 0, $field(Main, apiMode)},
	{"ENV_OPT_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Main, ENV_OPT_NAME)},
	{"fileManager", "Ljavax/tools/JavaFileManager;", nullptr, $PRIVATE, $field(Main, fileManager)},
	{"javacBundleName", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Main, javacBundleName)},
	{}
};

$MethodInfo _Main_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Main::*)($String*)>(&Main::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $method(static_cast<void(Main::*)($String*,$PrintWriter*)>(&Main::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/io/PrintWriter;Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $method(static_cast<void(Main::*)($String*,$PrintWriter*,$PrintWriter*)>(&Main::init$))},
	{"apMessage", "(Lcom/sun/tools/javac/processing/AnnotationProcessingError;)V", nullptr, 0},
	{"bugMessage", "(Ljava/lang/Throwable;)V", nullptr, 0},
	{"compile", "([Ljava/lang/String;)Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC},
	{"compile", "([Ljava/lang/String;Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC},
	{"feMessage", "(Ljava/lang/Throwable;Lcom/sun/tools/javac/util/Options;)V", nullptr, 0},
	{"ioMessage", "(Ljava/lang/Throwable;)V", nullptr, 0},
	{"pluginMessage", "(Ljava/lang/Throwable;)V", nullptr, 0},
	{"printArgumentsToFile", "([Ljava/lang/String;)V", nullptr, $TRANSIENT},
	{"reportDiag", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo;)V", nullptr, 0},
	{"reportHelper", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo;)V", nullptr, 0},
	{"resourceMessage", "(Ljava/lang/Throwable;)V", nullptr, 0},
	{"showClass", "(Ljava/lang/String;)V", nullptr, 0},
	{"twoClassLoadersInUse", "(Ljava/lang/IllegalAccessError;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Main::*)($IllegalAccessError*)>(&Main::twoClassLoadersInUse))},
	{}
};

$InnerClassInfo _Main_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Main$Result", "com.sun.tools.javac.main.Main", "Result", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Main$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Main_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.main.Main",
	"java.lang.Object",
	nullptr,
	_Main_FieldInfo_,
	_Main_MethodInfo_,
	nullptr,
	nullptr,
	_Main_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Main$Result,com.sun.tools.javac.main.Main$1"
};

$Object* allocate$Main($Class* clazz) {
	return $of($alloc(Main));
}

$String* Main::ENV_OPT_NAME = nullptr;
$String* Main::javacBundleName = nullptr;

void Main::init$($String* name) {
	$set(this, ownName, name);
}

void Main::init$($String* name, $PrintWriter* out) {
	$set(this, ownName, name);
	$set(this, stdOut, ($set(this, stdErr, out)));
}

void Main::init$($String* name, $PrintWriter* out, $PrintWriter* err) {
	$set(this, ownName, name);
	$set(this, stdOut, out);
	$set(this, stdErr, err);
}

void Main::reportDiag($JCDiagnostic$DiagnosticInfo* diag) {
	$useLocalCurrentObjectStackCache();
	if (this->apiMode) {
		$var($String, msg, $nc(this->log)->localize(diag));
		$throwNew($PropagatedException, $$new($IllegalStateException, msg));
	}
	reportHelper(diag);
	$init($Log$PrefixKind);
	$nc(this->log)->printLines($Log$PrefixKind::JAVAC, "msg.usage"_s, $$new($ObjectArray, {$of(this->ownName)}));
}

void Main::reportHelper($JCDiagnostic$DiagnosticInfo* diag) {
	$useLocalCurrentObjectStackCache();
	$var($String, msg, $nc(this->log)->localize(diag));
	$init($CompilerProperties$Errors);
	$var($String, errorPrefix, $nc(this->log)->localize($CompilerProperties$Errors::Error));
	$assign(msg, $nc(msg)->startsWith(errorPrefix) ? msg : $str({errorPrefix, msg}));
	$nc(this->log)->printRawLines(msg);
}

$Main$Result* Main::compile($StringArray* args) {
	$var($Context, context, $new($Context));
	$JavacFileManager::preRegister(context);
	$Main$Result* result = compile(args, context);
	try {
		if (this->fileManager != nullptr) {
			$nc(this->fileManager)->close();
		}
	} catch ($IOException& ex) {
		bugMessage(ex);
	}
	return result;
}

$Main$Result* Main::compile($StringArray* argv, $Context* context) {
	$useLocalCurrentObjectStackCache();
	if (this->stdOut != nullptr) {
		$init($Log);
		$nc(context)->put($Log::outKey, $of(this->stdOut));
	}
	if (this->stdErr != nullptr) {
		$init($Log);
		$nc(context)->put($Log::errKey, $of(this->stdErr));
	}
	$set(this, log, $Log::instance(context));
	if ($nc(argv)->length == 0) {
		$var($OptionHelper, h, $new($Main$1, this, this->log));
		try {
			$init($Option);
			$Option::HELP->process(h, "-help"_s);
		} catch ($Option$InvalidValueException& ignore) {
		}
		$init($Main$Result);
		return $Main$Result::CMDERR;
	}
	$var($Iterable, allArgs, nullptr);
	try {
		$assign(allArgs, $CommandLine::parse(Main::ENV_OPT_NAME, $($List::from(argv))));
	} catch ($CommandLine$UnmatchedQuote& ex) {
		reportDiag($($CompilerProperties$Errors::UnmatchedQuote(ex->variableName)));
		$init($Main$Result);
		return $Main$Result::CMDERR;
	} catch ($FileNotFoundException& e) {
		reportHelper($($CompilerProperties$Errors::FileNotFound($(e->getMessage()))));
		$init($Main$Result);
		return $Main$Result::SYSERR;
	} catch ($NoSuchFileException& e) {
		reportHelper($($CompilerProperties$Errors::FileNotFound($(e->getMessage()))));
		$init($Main$Result);
		return $Main$Result::SYSERR;
	} catch ($IOException& ex) {
		$init($Log$PrefixKind);
		$nc(this->log)->printLines($Log$PrefixKind::JAVAC, "msg.io"_s, $$new($ObjectArray, 0));
		$init($Log$WriterKind);
		ex->printStackTrace($($nc(this->log)->getWriter($Log$WriterKind::NOTICE)));
		$init($Main$Result);
		return $Main$Result::SYSERR;
	}
	$var($Arguments, args, $Arguments::instance(context));
	$nc(args)->init(this->ownName, allArgs);
	if ($nc(this->log)->nerrors > 0) {
		$init($Main$Result);
		return $Main$Result::CMDERR;
	}
	$var($Options, options, $Options::instance(context));
	bool forceStdOut = $nc(options)->isSet("stdout"_s);
	if (forceStdOut) {
		$nc(this->log)->flush();
		$nc(this->log)->setWriters($$new($PrintWriter, static_cast<$OutputStream*>($System::out), true));
	}
	bool var$0 = options->isUnset("nonBatchMode"_s);
	bool batchMode = (var$0 && $System::getProperty("nonBatchMode"_s) == nullptr);
	if (batchMode) {
		$CacheFSInfo::preRegister(context);
	}
	bool ok = true;
	$load($JavaFileManager);
	$set(this, fileManager, $cast($JavaFileManager, $nc(context)->get($JavaFileManager::class$)));
	$var($DelegatingJavaFileManager, delegatingJavaFileManager, nullptr);
	$var($JavaFileManager, patt8665$temp, this->fileManager);
	bool var$1 = $instanceOf($DelegatingJavaFileManager, patt8665$temp);
	if (var$1) {
		$assign(delegatingJavaFileManager, $cast($DelegatingJavaFileManager, patt8665$temp));
		var$1 = true;
	}
	$var($JavaFileManager, undel, var$1 ? $nc(delegatingJavaFileManager)->getBaseFileManager() : this->fileManager);
	{
		$var($BaseFileManager, baseFileManager, nullptr);
		bool var$2 = $instanceOf($BaseFileManager, undel);
		if (var$2) {
			$assign(baseFileManager, $cast($BaseFileManager, undel));
			var$2 = true;
		}
		if (var$2) {
			$nc(baseFileManager)->setContext(context);
			ok &= baseFileManager->handleOptions($(args->getDeferredFileManagerOptions()));
		}
	}
	$var($String, showClass, options->get("showClass"_s));
	if (showClass != nullptr) {
		if (showClass->equals("showClass"_s)) {
			$assign(showClass, "com.sun.tools.javac.Main"_s);
		}
		this->showClass(showClass);
	}
	ok &= args->validate();
	if (!ok || $nc(this->log)->nerrors > 0) {
		$init($Main$Result);
		return $Main$Result::CMDERR;
	}
	if (args->isEmpty()) {
		$init($Main$Result);
		return $Main$Result::OK;
	}
	if (options->isSet("debug.completionDeps"_s)) {
		$Dependencies$GraphDependencies::preRegister(context);
	}
	$var($BasicJavacTask, t, $cast($BasicJavacTask, $BasicJavacTask::instance(context)));
	$var($Set, pluginOpts, args->getPluginOpts());
	$nc(t)->initPlugins(pluginOpts);
	$init($Option);
	if ($nc(this->fileManager)->isSupportedOption($Option::MULTIRELEASE->primaryName) == 1) {
		$Target* target = $Target::instance(context);
		$var($List, list, $List::of($($nc(target)->multiReleaseValue())));
		$nc(this->fileManager)->handleOption($Option::MULTIRELEASE->primaryName, $($nc(list)->iterator()));
	}
	$var($JavaCompiler, comp, $JavaCompiler::instance(context));
	$var($List, docLintOpts, args->getDocLintOpts());
	if (!$nc(docLintOpts)->isEmpty()) {
		t->initDocLint(docLintOpts);
	}
	if (options->get($Option::XSTDOUT) != nullptr) {
		$init($Log$WriterKind);
		$set($nc(comp), closeables, $nc(comp->closeables)->prepend($($nc(this->log)->getWriter($Log$WriterKind::NOTICE))));
	}
	bool printArgsToFile = options->isSet("printArgsToFile"_s);
	{
		$var($Throwable, var$3, nullptr);
		$var($Main$Result, var$5, nullptr);
		bool return$4 = false;
		try {
			try {
				$var($Collection, var$6, static_cast<$Collection*>(args->getFileObjects()));
				$var($Collection, var$7, static_cast<$Collection*>(args->getClassNames()));
				$nc(comp)->compile(var$6, var$7, nullptr, $(static_cast<$Collection*>(static_cast<$AbstractCollection*>($List::nil()))));
				if ($nc(this->log)->expectDiagKeys != nullptr) {
					if ($nc($nc(this->log)->expectDiagKeys)->isEmpty()) {
						$nc(this->log)->printRawLines("all expected diagnostics found"_s);
						$init($Main$Result);
						$assign(var$5, $Main$Result::OK);
						return$4 = true;
						goto $finally;
					} else {
						$nc(this->log)->printRawLines($$str({"expected diagnostic keys not found: "_s, $nc(this->log)->expectDiagKeys}));
						$init($Main$Result);
						$assign(var$5, $Main$Result::ERROR);
						return$4 = true;
						goto $finally;
					}
				}
				$init($Main$Result);
				$assign(var$5, (comp->errorCount() == 0) ? $Main$Result::OK : $Main$Result::ERROR);
				return$4 = true;
				goto $finally;
			} catch ($OutOfMemoryError& ex) {
				resourceMessage(ex);
				$init($Main$Result);
				$assign(var$5, $Main$Result::SYSERR);
				return$4 = true;
				goto $finally;
			} catch ($StackOverflowError& ex) {
				resourceMessage(ex);
				$init($Main$Result);
				$assign(var$5, $Main$Result::SYSERR);
				return$4 = true;
				goto $finally;
			} catch ($FatalError& ex) {
				feMessage(ex, options);
				$init($Main$Result);
				$assign(var$5, $Main$Result::SYSERR);
				return$4 = true;
				goto $finally;
			} catch ($AnnotationProcessingError& ex) {
				apMessage(ex);
				$init($Main$Result);
				$assign(var$5, $Main$Result::SYSERR);
				return$4 = true;
				goto $finally;
			} catch ($PropagatedException& ex) {
				$throw($(ex->getCause()));
			} catch ($IllegalAccessError& iae) {
				if (twoClassLoadersInUse(iae)) {
					bugMessage(iae);
				}
				printArgsToFile = true;
				$init($Main$Result);
				$assign(var$5, $Main$Result::ABNORMAL);
				return$4 = true;
				goto $finally;
			} catch ($Throwable& ex) {
				bool var$8 = comp == nullptr || $nc(comp)->errorCount() == 0;
				if (var$8 || options->isSet("dev"_s)) {
					bugMessage(ex);
				}
				printArgsToFile = true;
				$init($Main$Result);
				$assign(var$5, $Main$Result::ABNORMAL);
				return$4 = true;
				goto $finally;
			}
		} catch ($Throwable& var$9) {
			$assign(var$3, var$9);
		} $finally: {
			if (printArgsToFile) {
				printArgumentsToFile(argv);
			}
			if (comp != nullptr) {
				try {
					comp->close();
				} catch ($ClientCodeException& ex) {
					$throwNew($RuntimeException, $(ex->getCause()));
				}
			}
		}
		if (var$3 != nullptr) {
			$throw(var$3);
		}
		if (return$4) {
			return var$5;
		}
	}
	$shouldNotReachHere();
}

void Main::printArgumentsToFile($StringArray* params) {
	$useLocalCurrentObjectStackCache();
	$var($Path, out, $Paths::get($($String::format("javac.%s.args"_s, $$new($ObjectArray, {$($of($$new($SimpleDateFormat, "yyyyMMdd_HHmmss"_s)->format($($nc($($Calendar::getInstance()))->getTime()))))}))), $$new($StringArray, 0)));
	$var($String, strOut, ""_s);
	try {
		{
			$var($Writer, w, $Files::newBufferedWriter(out, $$new($OpenOptionArray, 0)));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						{
							$var($StringArray, arr$, params);
							int32_t len$ = $nc(arr$)->length;
							int32_t i$ = 0;
							for (; i$ < len$; ++i$) {
								$var($String, param, arr$->get(i$));
								{
									$assign(param, $nc(param)->replaceAll("\\\\"_s, "\\\\\\\\"_s));
									if (param->matches(".*\\s+.*"_s)) {
										$assign(param, $str({"\""_s, param, "\""_s}));
									}
									$plusAssign(strOut, $$str({param, $$str(u'\n')}));
								}
							}
						}
						$nc(w)->write(strOut);
					} catch ($Throwable& t$) {
						if (w != nullptr) {
							try {
								w->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					if (w != nullptr) {
						w->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
		$init($Log$PrefixKind);
		$nc(this->log)->printLines($Log$PrefixKind::JAVAC, "msg.parameters.output"_s, $$new($ObjectArray, {$($of($nc(out)->toAbsolutePath()))}));
	} catch ($IOException& ioe) {
		$init($Log$PrefixKind);
		$nc(this->log)->printLines($Log$PrefixKind::JAVAC, "msg.parameters.output.error"_s, $$new($ObjectArray, {$($of($nc(out)->toAbsolutePath()))}));
		$nc($System::err)->println(strOut);
		$nc($System::err)->println();
	}
}

bool Main::twoClassLoadersInUse($IllegalAccessError* iae) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, msg, $nc(iae)->getMessage());
	$var($Pattern, pattern, $Pattern::compile("(?i)(?<=tried to access class )([a-z_$][a-z\\d_$]*\\.)*[a-z_$][a-z\\d_$]*"_s));
	$var($Matcher, matcher, $nc(pattern)->matcher(msg));
	if ($nc(matcher)->find()) {
		try {
			$var($String, otherClassName, matcher->group(0));
			$Class* otherClass = $Class::forName(otherClassName);
			$var($ClassLoader, otherClassLoader, $nc(otherClass)->getClassLoader());
			$var($ClassLoader, javacClassLoader, $of(this)->getClass()->getClassLoader());
			if (javacClassLoader != otherClassLoader) {
				$var($CodeSource, otherClassCodeSource, $nc($(otherClass->getProtectionDomain()))->getCodeSource());
				$var($CodeSource, javacCodeSource, $nc($($of(this)->getClass()->getProtectionDomain()))->getCodeSource());
				if (otherClassCodeSource != nullptr && javacCodeSource != nullptr) {
					$var($URL, var$0, otherClassCodeSource->getLocation());
					$nc(this->log)->printLines($($CompilerProperties$Errors::TwoClassLoaders2(var$0, $(javacCodeSource->getLocation()))));
				} else {
					$init($CompilerProperties$Errors);
					$nc(this->log)->printLines($CompilerProperties$Errors::TwoClassLoaders1);
				}
				return true;
			}
		} catch ($Throwable& t) {
			return false;
		}
	}
	return false;
}

void Main::bugMessage($Throwable* ex) {
	$useLocalCurrentObjectStackCache();
	$init($Log$PrefixKind);
	$nc(this->log)->printLines($Log$PrefixKind::JAVAC, "msg.bug"_s, $$new($ObjectArray, {$($of($JavaCompiler::version()))}));
	$init($Log$WriterKind);
	$nc(ex)->printStackTrace($($nc(this->log)->getWriter($Log$WriterKind::NOTICE)));
}

void Main::feMessage($Throwable* ex, $Options* options) {
	$useLocalCurrentObjectStackCache();
	$nc(this->log)->printRawLines($($nc(ex)->getMessage()));
	bool var$0 = $nc(ex)->getCause() != nullptr;
	if (var$0 && $nc(options)->isSet("dev"_s)) {
		$init($Log$WriterKind);
		$nc($(ex->getCause()))->printStackTrace($($nc(this->log)->getWriter($Log$WriterKind::NOTICE)));
	}
}

void Main::ioMessage($Throwable* ex) {
	$useLocalCurrentObjectStackCache();
	$init($Log$PrefixKind);
	$nc(this->log)->printLines($Log$PrefixKind::JAVAC, "msg.io"_s, $$new($ObjectArray, 0));
	$init($Log$WriterKind);
	$nc(ex)->printStackTrace($($nc(this->log)->getWriter($Log$WriterKind::NOTICE)));
}

void Main::resourceMessage($Throwable* ex) {
	$useLocalCurrentObjectStackCache();
	$init($Log$PrefixKind);
	$nc(this->log)->printLines($Log$PrefixKind::JAVAC, "msg.resource"_s, $$new($ObjectArray, 0));
	$init($Log$WriterKind);
	$nc(ex)->printStackTrace($($nc(this->log)->getWriter($Log$WriterKind::NOTICE)));
}

void Main::apMessage($AnnotationProcessingError* ex) {
	$useLocalCurrentObjectStackCache();
	$init($Log$PrefixKind);
	$nc(this->log)->printLines($Log$PrefixKind::JAVAC, "msg.proc.annotation.uncaught.exception"_s, $$new($ObjectArray, 0));
	$init($Log$WriterKind);
	$nc($($nc(ex)->getCause()))->printStackTrace($($nc(this->log)->getWriter($Log$WriterKind::NOTICE)));
}

void Main::pluginMessage($Throwable* ex) {
	$useLocalCurrentObjectStackCache();
	$init($Log$PrefixKind);
	$nc(this->log)->printLines($Log$PrefixKind::JAVAC, "msg.plugin.uncaught.exception"_s, $$new($ObjectArray, 0));
	$init($Log$WriterKind);
	$nc(ex)->printStackTrace($($nc(this->log)->getWriter($Log$WriterKind::NOTICE)));
}

void Main::showClass($String* className) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($Log$WriterKind);
	$var($PrintWriter, pw, $nc(this->log)->getWriter($Log$WriterKind::NOTICE));
	$nc(pw)->println($$str({"javac: show class: "_s, className}));
	$var($URL, url, $of(this)->getClass()->getResource($$str({$$str(u'/'), $($nc(className)->replace(u'.', u'/')), ".class"_s})));
	if (url != nullptr) {
		pw->println($$str({"  "_s, url}));
	}
	try {
		$var($InputStream, in, $of(this)->getClass()->getResourceAsStream($$str({$$str(u'/'), $($nc(className)->replace(u'.', u'/')), ".class"_s})));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($String, algorithm, "SHA-256"_s);
					$var($bytes, digest, nullptr);
					$var($MessageDigest, md, $MessageDigest::getInstance(algorithm));
					{
						$var($DigestInputStream, din, $new($DigestInputStream, in, md));
						{
							$var($Throwable, var$1, nullptr);
							try {
								try {
									$var($bytes, buf, $new($bytes, 8192));
									int32_t n = 0;
									do {
										n = din->read(buf);
									} while (n > 0);
									$assign(digest, $nc(md)->digest());
								} catch ($Throwable& t$) {
									try {
										din->close();
									} catch ($Throwable& x2) {
										t$->addSuppressed(x2);
									}
									$throw(t$);
								}
							} catch ($Throwable& var$2) {
								$assign(var$1, var$2);
							} /*finally*/ {
								din->close();
							}
							if (var$1 != nullptr) {
								$throw(var$1);
							}
						}
					}
					$var($StringBuilder, sb, $new($StringBuilder));
					{
						$var($bytes, arr$, digest);
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							int8_t b = arr$->get(i$);
							sb->append($($String::format("%02x"_s, $$new($ObjectArray, {$($of($Byte::valueOf(b)))}))));
						}
					}
					pw->println($$str({"  "_s, algorithm, " checksum: "_s, sb}));
				} catch ($Throwable& t$) {
					if (in != nullptr) {
						try {
							in->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				if (in != nullptr) {
					in->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($NoSuchAlgorithmException& e) {
		pw->println($$str({"  cannot compute digest: "_s, e}));
	} catch ($IOException& e) {
		pw->println($$str({"  cannot compute digest: "_s, e}));
	}
}

Main::Main() {
}

void clinit$Main($Class* class$) {
	$assignStatic(Main::ENV_OPT_NAME, "JDK_JAVAC_OPTIONS"_s);
	$assignStatic(Main::javacBundleName, "com.sun.tools.javac.resources.javac"_s);
}

$Class* Main::load$($String* name, bool initialize) {
	$loadClass(Main, name, initialize, &_Main_ClassInfo_, clinit$Main, allocate$Main);
	return class$;
}

$Class* Main::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com