#include <com/sun/tools/javac/api/JavacTool.h>

#include <com/sun/source/util/JavacTask.h>
#include <com/sun/tools/javac/Main.h>
#include <com/sun/tools/javac/api/BasicJavacTask.h>
#include <com/sun/tools/javac/api/ClientCodeWrapper.h>
#include <com/sun/tools/javac/api/JavacTaskImpl.h>
#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/file/CacheFSInfo.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/main/Arguments.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/util/ClientCodeException.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/PropagatedException.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/PrintWriter.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Enum.h>
#include <java/lang/Iterable.h>
#include <java/nio/charset/Charset.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collections.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <javax/lang/model/SourceVersion.h>
#include <javax/tools/DiagnosticListener.h>
#include <javax/tools/JavaCompiler$CompilationTask.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <jcpp.h>

#undef MULTIRELEASE
#undef RELEASE_3
#undef SOURCE

using $JavacTask = ::com::sun::source::util::JavacTask;
using $Main = ::com::sun::tools::javac::Main;
using $BasicJavacTask = ::com::sun::tools::javac::api::BasicJavacTask;
using $ClientCodeWrapper = ::com::sun::tools::javac::api::ClientCodeWrapper;
using $JavacTaskImpl = ::com::sun::tools::javac::api::JavacTaskImpl;
using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $CacheFSInfo = ::com::sun::tools::javac::file::CacheFSInfo;
using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $Arguments = ::com::sun::tools::javac::main::Arguments;
using $Option = ::com::sun::tools::javac::main::Option;
using $ClientCodeException = ::com::sun::tools::javac::util::ClientCodeException;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $PropagatedException = ::com::sun::tools::javac::util::PropagatedException;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Enum = ::java::lang::Enum;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Charset = ::java::nio::charset::Charset;
using $AbstractSet = ::java::util::AbstractSet;
using $Collections = ::java::util::Collections;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $SourceVersion = ::javax::lang::model::SourceVersion;
using $DiagnosticListener = ::javax::tools::DiagnosticListener;
using $FileObject = ::javax::tools::FileObject;
using $JavaCompiler = ::javax::tools::JavaCompiler;
using $JavaCompiler$CompilationTask = ::javax::tools::JavaCompiler$CompilationTask;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $OptionChecker = ::javax::tools::OptionChecker;
using $StandardJavaFileManager = ::javax::tools::StandardJavaFileManager;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$CompoundAttribute _JavacTool_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _JavacTool_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(JavacTool::*)()>(&JavacTool::init$)), nullptr, nullptr, _JavacTool_MethodAnnotations_init$0},
	{"create", "()Lcom/sun/tools/javac/api/JavacTool;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavacTool*(*)()>(&JavacTool::create))},
	{"getSourceVersions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/lang/model/SourceVersion;>;", $PUBLIC},
	{"getStandardFileManager", "(Ljavax/tools/DiagnosticListener;Ljava/util/Locale;Ljava/nio/charset/Charset;)Lcom/sun/tools/javac/file/JavacFileManager;", "(Ljavax/tools/DiagnosticListener<-Ljavax/tools/JavaFileObject;>;Ljava/util/Locale;Ljava/nio/charset/Charset;)Lcom/sun/tools/javac/file/JavacFileManager;", $PUBLIC},
	{"getTask", "(Ljava/io/Writer;Ljavax/tools/JavaFileManager;Ljavax/tools/DiagnosticListener;Ljava/lang/Iterable;Ljava/lang/Iterable;Ljava/lang/Iterable;)Lcom/sun/source/util/JavacTask;", "(Ljava/io/Writer;Ljavax/tools/JavaFileManager;Ljavax/tools/DiagnosticListener<-Ljavax/tools/JavaFileObject;>;Ljava/lang/Iterable<Ljava/lang/String;>;Ljava/lang/Iterable<Ljava/lang/String;>;Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;)Lcom/sun/source/util/JavacTask;", $PUBLIC},
	{"getTask", "(Ljava/io/Writer;Ljavax/tools/JavaFileManager;Ljavax/tools/DiagnosticListener;Ljava/lang/Iterable;Ljava/lang/Iterable;Ljava/lang/Iterable;Lcom/sun/tools/javac/util/Context;)Lcom/sun/source/util/JavacTask;", "(Ljava/io/Writer;Ljavax/tools/JavaFileManager;Ljavax/tools/DiagnosticListener<-Ljavax/tools/JavaFileObject;>;Ljava/lang/Iterable<Ljava/lang/String;>;Ljava/lang/Iterable<Ljava/lang/String;>;Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;Lcom/sun/tools/javac/util/Context;)Lcom/sun/source/util/JavacTask;", $PUBLIC, $method(static_cast<$JavacTask*(JavacTool::*)($Writer*,$JavaFileManager*,$DiagnosticListener*,$Iterable*,$Iterable*,$Iterable*,$Context*)>(&JavacTool::getTask))},
	{"isSupportedOption", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"run", "(Ljava/io/InputStream;Ljava/io/OutputStream;Ljava/io/OutputStream;[Ljava/lang/String;)I", nullptr, $PUBLIC | $TRANSIENT},
	{}
};

$ClassInfo _JavacTool_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.api.JavacTool",
	"java.lang.Object",
	"javax.tools.JavaCompiler",
	nullptr,
	_JavacTool_MethodInfo_
};

$Object* allocate$JavacTool($Class* clazz) {
	return $of($alloc(JavacTool));
}

void JavacTool::init$() {
}

$String* JavacTool::name() {
	return "javac"_s;
}

JavacTool* JavacTool::create() {
	$init(JavacTool);
	return $new(JavacTool);
}

$StandardJavaFileManager* JavacTool::getStandardFileManager($DiagnosticListener* diagnosticListener, $Locale* locale, $Charset* charset) {
	$useLocalCurrentObjectStackCache();
	$var($Context, context, $new($Context));
	$load($Locale);
	context->put($Locale::class$, $of(locale));
	if (diagnosticListener != nullptr) {
		$load($DiagnosticListener);
		context->put($DiagnosticListener::class$, $of(diagnosticListener));
	}
	$var($PrintWriter, pw, (charset == nullptr) ? $new($PrintWriter, static_cast<$OutputStream*>($System::err), true) : $new($PrintWriter, static_cast<$Writer*>($$new($OutputStreamWriter, static_cast<$OutputStream*>($System::err), charset)), true));
	$init($Log);
	context->put($Log::errKey, $of(pw));
	$CacheFSInfo::preRegister(context);
	return $new($JavacFileManager, context, true, charset);
}

$JavaCompiler$CompilationTask* JavacTool::getTask($Writer* out, $JavaFileManager* fileManager, $DiagnosticListener* diagnosticListener, $Iterable* options, $Iterable* classes, $Iterable* compilationUnits) {
	$var($Context, context, $new($Context));
	return getTask(out, fileManager, diagnosticListener, options, classes, compilationUnits, context);
}

$JavacTask* JavacTool::getTask($Writer* out, $JavaFileManager* fileManager$renamed, $DiagnosticListener* diagnosticListener, $Iterable* options, $Iterable* classes, $Iterable* compilationUnits$renamed, $Context* context) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileManager, fileManager, fileManager$renamed);
	$var($Iterable, compilationUnits, compilationUnits$renamed);
	try {
		$var($ClientCodeWrapper, ccw, $ClientCodeWrapper::instance(context));
		if (options != nullptr) {
			{
				$var($Iterator, i$, options->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($String, option, $cast($String, i$->next()));
					$Objects::requireNonNull(option);
				}
			}
		}
		if (classes != nullptr) {
			{
				$var($Iterator, i$, classes->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($String, cls, $cast($String, i$->next()));
					{
						int32_t sep = $nc(cls)->indexOf((int32_t)u'/');
						if (sep > 0) {
							$var($String, mod, cls->substring(0, sep));
							if (!$SourceVersion::isName(mod)) {
								$throwNew($IllegalArgumentException, $$str({"Not a valid module name: "_s, mod}));
							}
							$assign(cls, cls->substring(sep + 1));
						}
						if (!$SourceVersion::isName(cls)) {
							$throwNew($IllegalArgumentException, $$str({"Not a valid class name: "_s, cls}));
						}
					}
				}
			}
		}
		if (compilationUnits != nullptr) {
			$assign(compilationUnits, $nc(ccw)->wrapJavaFileObjects(compilationUnits));
			{
				$var($Iterator, i$, $nc(compilationUnits)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JavaFileObject, cu, $cast($JavaFileObject, i$->next()));
					{
						$init($JavaFileObject$Kind);
						if ($nc(cu)->getKind() != $JavaFileObject$Kind::SOURCE) {
							$var($String, kindMsg, $str({"Compilation unit is not of SOURCE kind: \""_s, $(cu->getName()), "\""_s}));
							$throwNew($IllegalArgumentException, kindMsg);
						}
					}
				}
			}
		}
		if (diagnosticListener != nullptr) {
			$load($DiagnosticListener);
			$nc(context)->put($DiagnosticListener::class$, $($of($nc(ccw)->wrap(diagnosticListener))));
		}
		{
			$var($PrintWriter, pw, nullptr);
			$init($Log);
			if (out == nullptr && $nc(context)->get($Log::errKey) == nullptr) {
				context->put($Log::errKey, $of($$new($PrintWriter, static_cast<$OutputStream*>($System::err), true)));
			} else {
				bool var$1 = $instanceOf($PrintWriter, out);
				if (var$1) {
					$assign(pw, $cast($PrintWriter, out));
					var$1 = true;
				}
				if (var$1) {
					context->put($Log::errKey, $of(pw));
				} else if (out != nullptr) {
					context->put($Log::errKey, $of($$new($PrintWriter, out, true)));
				}
			}
		}
		if (fileManager == nullptr) {
			$assign(fileManager, getStandardFileManager(diagnosticListener, nullptr, nullptr));
			{
				$var($BaseFileManager, baseFileManager, nullptr);
				bool var$2 = $instanceOf($BaseFileManager, fileManager);
				if (var$2) {
					$assign(baseFileManager, $cast($BaseFileManager, fileManager));
					var$2 = true;
				}
				if (var$2) {
					$nc(baseFileManager)->autoClose = true;
				}
			}
		}
		$assign(fileManager, $nc(ccw)->wrap(fileManager));
		$load($JavaFileManager);
		$nc(context)->put($JavaFileManager::class$, $of(fileManager));
		$var($Arguments, args, $Arguments::instance(context));
		$nc(args)->init("javac"_s, options, classes, compilationUnits);
		$init($Option);
		if ($nc(fileManager)->isSupportedOption($Option::MULTIRELEASE->primaryName) == 1) {
			$Target* target = $Target::instance(context);
			$var($List, list, $List::of($($nc(target)->multiReleaseValue())));
			fileManager->handleOption($Option::MULTIRELEASE->primaryName, $($nc(list)->iterator()));
		}
		return $new($JavacTaskImpl, context);
	} catch ($PropagatedException& ex) {
		$throw($(ex->getCause()));
	} catch ($ClientCodeException& ex) {
		$throwNew($RuntimeException, $(ex->getCause()));
	}
	$shouldNotReachHere();
}

int32_t JavacTool::run($InputStream* in, $OutputStream* out, $OutputStream* err$renamed, $StringArray* arguments) {
	$useLocalCurrentObjectStackCache();
	$var($OutputStream, err, err$renamed);
	if (err == nullptr) {
		$assign(err, $System::err);
	}
	{
		$var($StringArray, arr$, arguments);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, argument, arr$->get(i$));
			$Objects::requireNonNull(argument);
		}
	}
	return $Main::compile(arguments, $$new($PrintWriter, err, true));
}

$Set* JavacTool::getSourceVersions() {
	$useLocalCurrentObjectStackCache();
	$init($SourceVersion);
	return $Collections::unmodifiableSet($($EnumSet::range($SourceVersion::RELEASE_3, $($SourceVersion::latest()))));
}

int32_t JavacTool::isSupportedOption($String* option) {
	$useLocalCurrentObjectStackCache();
	$var($Set, recognizedOptions, $Option::getJavacToolOptions());
	{
		$var($Iterator, i$, $nc(recognizedOptions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$Option* o = $cast($Option, i$->next());
			{
				if ($nc(o)->matches(option)) {
					return o->hasSeparateArg() ? 1 : 0;
				}
			}
		}
	}
	return -1;
}

JavacTool::JavacTool() {
}

$Class* JavacTool::load$($String* name, bool initialize) {
	$loadClass(JavacTool, name, initialize, &_JavacTool_ClassInfo_, allocate$JavacTool);
	return class$;
}

$Class* JavacTool::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com