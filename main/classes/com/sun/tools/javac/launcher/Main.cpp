#include <com/sun/tools/javac/launcher/Main.h>

#include <com/sun/source/util/JavacTask.h>
#include <com/sun/tools/javac/api/JavacTool.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/launcher/Main$1.h>
#include <com/sun/tools/javac/launcher/Main$Context.h>
#include <com/sun/tools/javac/launcher/Main$Fault.h>
#include <com/sun/tools/javac/launcher/Main$MainClassListener.h>
#include <com/sun/tools/javac/resources/LauncherProperties$Errors.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/BufferedReader.h>
#include <java/io/FilterInputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/PrintWriter.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/Iterable.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/net/URI.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/InvalidPathException.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/text/MessageFormat.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/tools/DiagnosticListener.h>
#include <javax/tools/JavaCompiler$CompilationTask.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/SimpleJavaFileObject.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <javax/tools/StandardLocation.h>
#include <jdk/internal/misc/VM.h>
#include <jcpp.h>

#undef PUBLIC
#undef PUBLIC_STATIC
#undef SOURCE
#undef SOURCE_PATH
#undef STATIC
#undef TYPE

using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $JavacTask = ::com::sun::source::util::JavacTask;
using $JavacTool = ::com::sun::tools::javac::api::JavacTool;
using $Source = ::com::sun::tools::javac::code::Source;
using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $Main$1 = ::com::sun::tools::javac::launcher::Main$1;
using $Main$Context = ::com::sun::tools::javac::launcher::Main$Context;
using $Main$Fault = ::com::sun::tools::javac::launcher::Main$Fault;
using $Main$MainClassListener = ::com::sun::tools::javac::launcher::Main$MainClassListener;
using $LauncherProperties$Errors = ::com::sun::tools::javac::resources::LauncherProperties$Errors;
using $JCDiagnostic$DiagnosticInfo = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $BufferedReader = ::java::io::BufferedReader;
using $FilterInputStream = ::java::io::FilterInputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $Void = ::java::lang::Void;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $URI = ::java::net::URI;
using $Charset = ::java::nio::charset::Charset;
using $Files = ::java::nio::file::Files;
using $InvalidPathException = ::java::nio::file::InvalidPathException;
using $LinkOption = ::java::nio::file::LinkOption;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $MessageFormat = ::java::text::MessageFormat;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Name = ::javax::lang::model::element::Name;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $DiagnosticListener = ::javax::tools::DiagnosticListener;
using $JavaCompiler$CompilationTask = ::javax::tools::JavaCompiler$CompilationTask;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $SimpleJavaFileObject = ::javax::tools::SimpleJavaFileObject;
using $StandardJavaFileManager = ::javax::tools::StandardJavaFileManager;
using $StandardLocation = ::javax::tools::StandardLocation;
using $VM = ::jdk::internal::misc::VM;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

$FieldInfo _Main_FieldInfo_[] = {
	{"out", "Ljava/io/PrintWriter;", nullptr, $PRIVATE, $field(Main, out)},
	{"bundleName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Main, bundleName)},
	{"resourceBundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE, $field(Main, resourceBundle)},
	{"errorPrefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Main, errorPrefix)},
	{}
};

$MethodInfo _Main_MethodInfo_[] = {
	{"<init>", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC, $method(static_cast<void(Main::*)($PrintStream*)>(&Main::init$))},
	{"<init>", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $method(static_cast<void(Main::*)($PrintWriter*)>(&Main::init$))},
	{"compile", "(Ljava/nio/file/Path;Ljava/util/List;Lcom/sun/tools/javac/launcher/Main$Context;)Ljava/lang/String;", "(Ljava/nio/file/Path;Ljava/util/List<Ljava/lang/String;>;Lcom/sun/tools/javac/launcher/Main$Context;)Ljava/lang/String;", $PRIVATE, $method(static_cast<$String*(Main::*)($Path*,$List*,$Main$Context*)>(&Main::compile)), "com.sun.tools.javac.launcher.Main$Fault"},
	{"execute", "(Ljava/lang/String;[Ljava/lang/String;Lcom/sun/tools/javac/launcher/Main$Context;)V", nullptr, $PRIVATE, $method(static_cast<void(Main::*)($String*,$StringArray*,$Main$Context*)>(&Main::execute)), "com.sun.tools.javac.launcher.Main$Fault,java.lang.reflect.InvocationTargetException"},
	{"getFile", "([Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PRIVATE, $method(static_cast<$Path*(Main::*)($StringArray*)>(&Main::getFile)), "com.sun.tools.javac.launcher.Main$Fault"},
	{"getJavacOpts", "([Ljava/lang/String;)Ljava/util/List;", "([Ljava/lang/String;)Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $TRANSIENT, $method(static_cast<$List*(Main::*)($StringArray*)>(&Main::getJavacOpts)), "com.sun.tools.javac.launcher.Main$Fault"},
	{"getMessage", "(Lcom/sun/tools/javac/util/JCDiagnostic$Error;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Main::*)($JCDiagnostic$Error*)>(&Main::getMessage))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&Main::main)), "java.lang.Throwable"},
	{"readFile", "(Ljava/nio/file/Path;)Ljavax/tools/JavaFileObject;", nullptr, $PRIVATE, $method(static_cast<$JavaFileObject*(Main::*)($Path*)>(&Main::readFile)), "com.sun.tools.javac.launcher.Main$Fault"},
	{"run", "([Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.launcher.Main$Fault,java.lang.reflect.InvocationTargetException"},
	{}
};

$InnerClassInfo _Main_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.launcher.Main$MemoryClassLoader", "com.sun.tools.javac.launcher.Main", "MemoryClassLoader", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.launcher.Main$MemoryFileManager", "com.sun.tools.javac.launcher.Main", "MemoryFileManager", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.launcher.Main$Context", "com.sun.tools.javac.launcher.Main", "Context", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.launcher.Main$MainClassListener", "com.sun.tools.javac.launcher.Main", "MainClassListener", $STATIC},
	{"com.sun.tools.javac.launcher.Main$Fault", "com.sun.tools.javac.launcher.Main", "Fault", $PUBLIC},
	{"com.sun.tools.javac.launcher.Main$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Main_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.launcher.Main",
	"java.lang.Object",
	nullptr,
	_Main_FieldInfo_,
	_Main_MethodInfo_,
	nullptr,
	nullptr,
	_Main_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.launcher.Main$MemoryClassLoader,com.sun.tools.javac.launcher.Main$MemoryClassLoader$MemoryURLConnection,com.sun.tools.javac.launcher.Main$MemoryClassLoader$MemoryURLStreamHandler,com.sun.tools.javac.launcher.Main$MemoryClassLoader$1,com.sun.tools.javac.launcher.Main$MemoryFileManager,com.sun.tools.javac.launcher.Main$MemoryFileManager$1,com.sun.tools.javac.launcher.Main$MemoryFileManager$1$1,com.sun.tools.javac.launcher.Main$Context,com.sun.tools.javac.launcher.Main$MainClassListener,com.sun.tools.javac.launcher.Main$Fault,com.sun.tools.javac.launcher.Main$1"
};

$Object* allocate$Main($Class* clazz) {
	return $of($alloc(Main));
}

$String* Main::bundleName = nullptr;

void Main::main($StringArray* args) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	try {
		$$new(Main, $System::err)->run($($VM::getRuntimeArguments()), args);
	} catch ($Main$Fault& f) {
		$nc($System::err)->println($(f->getMessage()));
		$System::exit(1);
	} catch ($InvocationTargetException& e) {
		$throw($(e->getCause()));
	}
}

void Main::init$($PrintStream* out) {
	$useLocalCurrentObjectStackCache();
	Main::init$($$new($PrintWriter, static_cast<$Writer*>($$new($OutputStreamWriter, out)), true));
}

void Main::init$($PrintWriter* out) {
	$set(this, resourceBundle, nullptr);
	$set(this, out, out);
}

void Main::run($StringArray* runtimeArgs, $StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Path, file, getFile(args));
	$var($Main$Context, context, $new($Main$Context, $($nc(file)->toAbsolutePath())));
	$var($String, mainClassName, compile(file, $(getJavacOpts(runtimeArgs)), context));
	$var($StringArray, appArgs, $fcast($StringArray, $Arrays::copyOfRange(args, 1, $nc(args)->length)));
	execute(mainClassName, appArgs, context);
}

$Path* Main::getFile($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	if ($nc(args)->length == 0) {
		$init($LauncherProperties$Errors);
		$throwNew($Main$Fault, this, $LauncherProperties$Errors::NoArgs);
	}
	$var($Path, file, nullptr);
	try {
		$assign(file, $Paths::get($nc(args)->get(0), $$new($StringArray, 0)));
	} catch ($InvalidPathException& e) {
		$throwNew($Main$Fault, this, $($LauncherProperties$Errors::InvalidFilename($nc(args)->get(0))));
	}
	if (!$Files::exists(file, $$new($LinkOptionArray, 0))) {
		$throwNew($Main$Fault, this, $($LauncherProperties$Errors::FileNotFound(file)));
	}
	return file;
}

$JavaFileObject* Main::readFile($Path* file) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($BufferedInputStream, in, $new($BufferedInputStream, $($Files::newInputStream(file, $$new($OpenOptionArray, 0)))));
		{
			$var($Throwable, var$0, nullptr);
			$var($JavaFileObject, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					bool ignoreFirstLine = false;
					if ($nc($($nc($($nc(file)->getFileName()))->toString()))->endsWith(".java"_s)) {
						ignoreFirstLine = false;
					} else {
						in->mark(2);
						bool var$3 = (in->read() == u'#');
						ignoreFirstLine = var$3 && (in->read() == u'!');
						if (!ignoreFirstLine) {
							in->reset();
						}
					}
					{
						$var($BufferedReader, r, $new($BufferedReader, $$new($InputStreamReader, static_cast<$InputStream*>(in), $($Charset::defaultCharset()))));
						{
							$var($Throwable, var$4, nullptr);
							$var($JavaFileObject, var$6, nullptr);
							bool return$5 = false;
							try {
								try {
									$var($StringBuilder, sb, $new($StringBuilder));
									if (ignoreFirstLine) {
										r->readLine();
										sb->append("\n"_s);
									}
									$var($chars, buf, $new($chars, 1024));
									int32_t n = 0;
									while ((n = r->read(buf, 0, buf->length)) != -1) {
										sb->append(buf, 0, n);
									}
									$init($JavaFileObject$Kind);
									$assign(var$6, $new($Main$1, this, $($nc(file)->toUri()), $JavaFileObject$Kind::SOURCE, file, sb));
									return$5 = true;
									goto $finally1;
								} catch ($Throwable& t$) {
									try {
										r->close();
									} catch ($Throwable& x2) {
										t$->addSuppressed(x2);
									}
									$throw(t$);
								}
							} catch ($Throwable& var$7) {
								$assign(var$4, var$7);
							} $finally1: {
								r->close();
							}
							if (var$4 != nullptr) {
								$throw(var$4);
							}
							if (return$5) {
								$assign(var$2, var$6);
								return$1 = true;
								goto $finally;
							}
						}
					}
				} catch ($Throwable& t$) {
					try {
						in->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$8) {
				$assign(var$0, var$8);
			} $finally: {
				in->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($IOException& e) {
		$throwNew($Main$Fault, this, $($LauncherProperties$Errors::CantReadFile(file, e)));
	}
	$shouldNotReachHere();
}

$List* Main::getJavacOpts($StringArray* runtimeArgs) {
	$useLocalCurrentObjectStackCache();
	$var($List, javacOpts, $new($ArrayList));
	$var($String, sourceOpt, $System::getProperty("jdk.internal.javac.source"_s));
	if (sourceOpt != nullptr) {
		$Source* source = $Source::lookup(sourceOpt);
		if (source == nullptr) {
			$throwNew($Main$Fault, this, $($LauncherProperties$Errors::InvalidValueForSource(sourceOpt)));
		}
		javacOpts->addAll($($List::of("--release"_s, sourceOpt)));
	}
	for (int32_t i = 0; i < $nc(runtimeArgs)->length; ++i) {
		$var($String, arg, runtimeArgs->get(i));
		$var($String, opt, arg);
		$var($String, value, nullptr);
		if ($nc(arg)->startsWith("--"_s)) {
			int32_t eq = arg->indexOf((int32_t)u'=');
			if (eq > 0) {
				$assign(opt, arg->substring(0, eq));
				$assign(value, arg->substring(eq + 1));
			}
		}
		{
			$var($String, s12177$, opt);
			int32_t tmp12177$ = -1;
			switch ($nc(s12177$)->hashCode()) {
			case 0x725D84FA:
				{
					if (s12177$->equals("--class-path"_s)) {
						tmp12177$ = 0;
					}
					break;
				}
			case (int32_t)0xF0617410:
				{
					if (s12177$->equals("-classpath"_s)) {
						tmp12177$ = 1;
					}
					break;
				}
			case 0x0000B55A:
				{
					if (s12177$->equals("-cp"_s)) {
						tmp12177$ = 2;
					}
					break;
				}
			case (int32_t)0xFD483946:
				{
					if (s12177$->equals("--module-path"_s)) {
						tmp12177$ = 3;
					}
					break;
				}
			case 1507:
				{
					if (s12177$->equals("-p"_s)) {
						tmp12177$ = 4;
					}
					break;
				}
			case (int32_t)0xFDE3C473:
				{
					if (s12177$->equals("--add-exports"_s)) {
						tmp12177$ = 5;
					}
					break;
				}
			case (int32_t)0x951388BB:
				{
					if (s12177$->equals("--add-modules"_s)) {
						tmp12177$ = 6;
					}
					break;
				}
			case (int32_t)0x98F189D5:
				{
					if (s12177$->equals("--limit-modules"_s)) {
						tmp12177$ = 7;
					}
					break;
				}
			case (int32_t)0xB1612531:
				{
					if (s12177$->equals("--patch-module"_s)) {
						tmp12177$ = 8;
					}
					break;
				}
			case 0x450C3B15:
				{
					if (s12177$->equals("--upgrade-module-path"_s)) {
						tmp12177$ = 9;
					}
					break;
				}
			case (int32_t)0xB278671E:
				{
					if (s12177$->equals("--enable-preview"_s)) {
						tmp12177$ = 10;
					}
					break;
				}
			}
			switch (tmp12177$) {
			case 0:
				{}
			case 1:
				{}
			case 2:
				{}
			case 3:
				{}
			case 4:
				{}
			case 5:
				{}
			case 6:
				{}
			case 7:
				{}
			case 8:
				{}
			case 9:
				{
					if (value == nullptr) {
						if (i == runtimeArgs->length - 1) {
							$throwNew($Main$Fault, this, $($LauncherProperties$Errors::NoValueForOption(opt)));
						}
						$assign(value, runtimeArgs->get(++i));
					}
					bool var$0 = $nc(opt)->equals("--add-modules"_s);
					if (var$0 && $nc(value)->equals("ALL-DEFAULT"_s)) {
						break;
					}
					javacOpts->add(opt);
					javacOpts->add(value);
					break;
				}
			case 10:
				{
					javacOpts->add(opt);
					if (sourceOpt == nullptr) {
						$init($LauncherProperties$Errors);
						$throwNew($Main$Fault, this, $LauncherProperties$Errors::EnablePreviewRequiresSource);
					}
					break;
				}
			default:
				{
					bool var$1 = $nc(opt)->startsWith("-agentlib:jdwp="_s);
					if (var$1 || $nc(opt)->startsWith("-Xrunjdwp:"_s)) {
						javacOpts->add("-g"_s);
					}
				}
			}
		}
	}
	javacOpts->add("-proc:none"_s);
	javacOpts->add("-Xdiags:verbose"_s);
	return javacOpts;
}

$String* Main::compile($Path* file, $List* javacOpts, $Main$Context* context) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, fo, readFile(file));
	$var($JavacTool, javaCompiler, $JavacTool::create());
	$var($StandardJavaFileManager, stdFileMgr, $nc(javaCompiler)->getStandardFileManager(nullptr, nullptr, nullptr));
	try {
		$init($StandardLocation);
		$nc(stdFileMgr)->setLocation($StandardLocation::SOURCE_PATH, $($Collections::emptyList()));
	} catch ($IOException& e) {
		$throwNew($Error, "unexpected exception from file manager"_s, e);
	}
	$var($JavaFileManager, fm, $nc(context)->getFileManager(stdFileMgr));
	$var($JavacTask, t, $cast($JavacTask, javaCompiler->getTask(this->out, fm, nullptr, javacOpts, nullptr, $($List::of($of(fo))))));
	$var($Main$MainClassListener, l, $new($Main$MainClassListener, t));
	$var($Boolean, ok, $cast($Boolean, $nc(t)->call()));
	if (!$nc(ok)->booleanValue()) {
		$init($LauncherProperties$Errors);
		$throwNew($Main$Fault, this, $LauncherProperties$Errors::CompilationFailed);
	}
	if (l->mainClass == nullptr) {
		$init($LauncherProperties$Errors);
		$throwNew($Main$Fault, this, $LauncherProperties$Errors::NoClass);
	}
	$var($String, mainClassName, $nc($of($($nc(l->mainClass)->getQualifiedName())))->toString());
	return mainClassName;
}

void Main::execute($String* mainClassName, $StringArray* appArgs, $Main$Context* context) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$System::setProperty("jdk.launcher.sourcefile"_s, $($nc($nc(context)->file)->toString()));
	$var($ClassLoader, cl, $nc(context)->getClassLoader($($ClassLoader::getSystemClassLoader())));
	try {
		$Class* appClass = $Class::forName(mainClassName, true, cl);
		$load($StringArray);
		$var($Method, main, $nc(appClass)->getDeclaredMethod("main"_s, $$new($ClassArray, {$getClass($StringArray)})));
		int32_t PUBLIC_STATIC = $Modifier::PUBLIC | $Modifier::STATIC;
		if (((int32_t)($nc(main)->getModifiers() & (uint32_t)PUBLIC_STATIC)) != PUBLIC_STATIC) {
			$init($LauncherProperties$Errors);
			$throwNew($Main$Fault, this, $LauncherProperties$Errors::MainNotPublicStatic);
		}
		$init($Void);
		if (!$nc($of($nc(main)->getReturnType()))->equals($Void::TYPE)) {
			$init($LauncherProperties$Errors);
			$throwNew($Main$Fault, this, $LauncherProperties$Errors::MainNotVoid);
		}
		$nc(main)->setAccessible(true);
		main->invoke($($Integer::valueOf(0)), $$new($ObjectArray, {$of(appArgs)}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($Main$Fault, this, $($LauncherProperties$Errors::CantFindClass(mainClassName)));
	} catch ($NoSuchMethodException& e) {
		$throwNew($Main$Fault, this, $($LauncherProperties$Errors::CantFindMainMethod(mainClassName)));
	} catch ($IllegalAccessException& e) {
		$throwNew($Main$Fault, this, $($LauncherProperties$Errors::CantAccessMainMethod(mainClassName)));
	} catch ($InvocationTargetException& e) {
		int32_t invocationFrames = $nc($(e->getStackTrace()))->length;
		$var($Throwable, target, e->getCause());
		$var($StackTraceElementArray, targetTrace, $nc(target)->getStackTrace());
		target->setStackTrace($fcast($StackTraceElementArray, $($Arrays::copyOfRange(targetTrace, 0, $nc(targetTrace)->length - invocationFrames))));
		$throw(e);
	}
}

$String* Main::getMessage($JCDiagnostic$Error* error) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, key, $nc(error)->key());
	$var($ObjectArray, args, error->getArgs());
	try {
		if (this->resourceBundle == nullptr) {
			$set(this, resourceBundle, $ResourceBundle::getBundle(Main::bundleName));
			$set(this, errorPrefix, $nc(this->resourceBundle)->getString("launcher.error"_s));
		}
		$var($String, resource, $nc(this->resourceBundle)->getString(key));
		$var($String, message, $MessageFormat::format(resource, args));
		return $str({this->errorPrefix, message});
	} catch ($MissingResourceException& e) {
		return $str({"Cannot access resource; "_s, key, $($Arrays::toString(args))});
	}
	$shouldNotReachHere();
}

Main::Main() {
}

void clinit$Main($Class* class$) {
	$assignStatic(Main::bundleName, "com.sun.tools.javac.resources.launcher"_s);
}

$Class* Main::load$($String* name, bool initialize) {
	$loadClass(Main, name, initialize, &_Main_ClassInfo_, clinit$Main, allocate$Main);
	return class$;
}

$Class* Main::class$ = nullptr;

				} // launcher
			} // javac
		} // tools
	} // sun
} // com