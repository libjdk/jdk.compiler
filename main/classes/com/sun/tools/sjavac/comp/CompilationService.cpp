#include <com/sun/tools/sjavac/comp/CompilationService.h>

#include <com/sun/source/util/JavacTask.h>
#include <com/sun/source/util/TaskListener.h>
#include <com/sun/tools/javac/api/JavacTaskImpl.h>
#include <com/sun/tools/javac/api/JavacTool.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/Util.h>
#include <com/sun/tools/sjavac/comp/PathAndPackageVerifier.h>
#include <com/sun/tools/sjavac/comp/SmartFileManager.h>
#include <com/sun/tools/sjavac/comp/dependencies/NewDependencyCollector.h>
#include <com/sun/tools/sjavac/comp/dependencies/PublicApiCollector.h>
#include <com/sun/tools/sjavac/server/CompilationSubResult.h>
#include <com/sun/tools/sjavac/server/SysInfo.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/PrintWriter.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Error.h>
#include <java/lang/Iterable.h>
#include <java/lang/Runtime.h>
#include <java/net/URI.h>
#include <java/nio/charset/Charset.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractQueue.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/tools/DiagnosticListener.h>
#include <javax/tools/ForwardingJavaFileManager.h>
#include <javax/tools/JavaCompiler.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <javax/tools/StandardLocation.h>
#include <javax/tools/ToolProvider.h>
#include <jcpp.h>

#undef ERROR
#undef OK
#undef SOURCE_PATH

using $JavacTask = ::com::sun::source::util::JavacTask;
using $TaskListener = ::com::sun::source::util::TaskListener;
using $BasicJavacTask = ::com::sun::tools::javac::api::BasicJavacTask;
using $JavacTaskImpl = ::com::sun::tools::javac::api::JavacTaskImpl;
using $JavacTool = ::com::sun::tools::javac::api::JavacTool;
using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $Context = ::com::sun::tools::javac::util::Context;
using $Dependencies$GraphDependencies = ::com::sun::tools::javac::util::Dependencies$GraphDependencies;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Options = ::com::sun::tools::javac::util::Options;
using $Log = ::com::sun::tools::sjavac::Log;
using $Util = ::com::sun::tools::sjavac::Util;
using $PathAndPackageVerifier = ::com::sun::tools::sjavac::comp::PathAndPackageVerifier;
using $SmartFileManager = ::com::sun::tools::sjavac::comp::SmartFileManager;
using $NewDependencyCollector = ::com::sun::tools::sjavac::comp::dependencies::NewDependencyCollector;
using $PublicApiCollector = ::com::sun::tools::sjavac::comp::dependencies::PublicApiCollector;
using $CompilationSubResult = ::com::sun::tools::sjavac::server::CompilationSubResult;
using $SysInfo = ::com::sun::tools::sjavac::server::SysInfo;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $PrintWriter = ::java::io::PrintWriter;
using $StringWriter = ::java::io::StringWriter;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runtime = ::java::lang::Runtime;
using $URI = ::java::net::URI;
using $Charset = ::java::nio::charset::Charset;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractQueue = ::java::util::AbstractQueue;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $DiagnosticListener = ::javax::tools::DiagnosticListener;
using $ForwardingJavaFileManager = ::javax::tools::ForwardingJavaFileManager;
using $JavaCompiler = ::javax::tools::JavaCompiler;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $StandardJavaFileManager = ::javax::tools::StandardJavaFileManager;
using $StandardLocation = ::javax::tools::StandardLocation;
using $ToolProvider = ::javax::tools::ToolProvider;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

$MethodInfo _CompilationService_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CompilationService::*)()>(&CompilationService::init$))},
	{"compile", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/util/List;Ljava/util/Set;Ljava/util/Set;)Lcom/sun/tools/sjavac/server/CompilationSubResult;", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/util/List<Ljava/io/File;>;Ljava/util/Set<Ljava/net/URI;>;Ljava/util/Set<Ljava/net/URI;>;)Lcom/sun/tools/sjavac/server/CompilationSubResult;", $PUBLIC},
	{"getSysInfo", "()Lcom/sun/tools/sjavac/server/SysInfo;", nullptr, $PUBLIC},
	{"logJavacInvocation", "([Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(CompilationService::*)($StringArray*)>(&CompilationService::logJavacInvocation))},
	{}
};

$ClassInfo _CompilationService_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.comp.CompilationService",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CompilationService_MethodInfo_
};

$Object* allocate$CompilationService($Class* clazz) {
	return $of($alloc(CompilationService));
}

void CompilationService::init$() {
}

$SysInfo* CompilationService::getSysInfo() {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc($($Runtime::getRuntime()))->availableProcessors();
	return $new($SysInfo, var$0, $nc($($Runtime::getRuntime()))->maxMemory());
}

$CompilationSubResult* CompilationService::compile($String* protocolId, $String* invocationId, $StringArray* args, $List* explicitSources, $Set* sourcesToCompile, $Set* visibleSources) {
	$useLocalCurrentObjectStackCache();
	$var($JavacTool, compiler, $cast($JavacTool, $ToolProvider::getSystemJavaCompiler()));
	try {
		$var($StandardJavaFileManager, fm, $nc(compiler)->getStandardFileManager(nullptr, nullptr, nullptr));
		{
			$var($Throwable, var$0, nullptr);
			$var($CompilationSubResult, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$var($SmartFileManager, sfm, $new($SmartFileManager, fm));
					$var($Context, context, $new($Context));
					$Dependencies$GraphDependencies::preRegister(context);
					$init($Main$Result);
					$var($CompilationSubResult, compilationResult, $new($CompilationSubResult, $Main$Result::OK));
					$var($ListBuffer, explicitJFOs, $new($ListBuffer));
					{
						$var($Iterator, i$, $nc($($nc(fm)->getJavaFileObjectsFromFiles(explicitSources)))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($JavaFileObject, jfo, $cast($JavaFileObject, i$->next()));
							{
								$init($StandardLocation);
								explicitJFOs->append($($SmartFileManager::locWrap(jfo, static_cast<$JavaFileManager$Location*>($StandardLocation::SOURCE_PATH))));
							}
						}
					}
					$var($ListBuffer, sourcesToCompileFiles, $new($ListBuffer));
					{
						$var($Iterator, i$, $nc(sourcesToCompile)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($URI, u, $cast($URI, i$->next()));
							sourcesToCompileFiles->append($$new($File, u));
						}
					}
					{
						$var($Iterator, i$, $nc($(fm->getJavaFileObjectsFromFiles(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(sourcesToCompileFiles)))))))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($JavaFileObject, jfo, $cast($JavaFileObject, i$->next()));
							$init($StandardLocation);
							explicitJFOs->append($($SmartFileManager::locWrap(jfo, static_cast<$JavaFileManager$Location*>($StandardLocation::SOURCE_PATH))));
						}
					}
					$var($StringWriter, stderrLog, $new($StringWriter));
					$Main$Result* result = nullptr;
					$var($PublicApiCollector, pubApiCollector, $new($PublicApiCollector, context, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(explicitJFOs)))));
					$var($PathAndPackageVerifier, papVerifier, $new($PathAndPackageVerifier));
					$var($NewDependencyCollector, depsCollector, $new($NewDependencyCollector, context, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(explicitJFOs)))));
					try {
						if (explicitJFOs->size() > 0) {
							sfm->setVisibleSources(visibleSources);
							sfm->cleanArtifacts();
							$var($Writer, var$3, static_cast<$Writer*>($new($PrintWriter, static_cast<$Writer*>(stderrLog))));
							$var($JavaFileManager, var$4, static_cast<$JavaFileManager*>(sfm));
							$var($JavacTaskImpl, task, $cast($JavacTaskImpl, compiler->getTask(var$3, var$4, nullptr, $($Arrays::asList(args)), nullptr, static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(explicitJFOs)))), context)));
							sfm->setSymbolFileEnabled(!$nc($($Options::instance(context)))->isSet("ignore.symbol.file"_s));
							$nc(task)->addTaskListener(depsCollector);
							task->addTaskListener(pubApiCollector);
							task->addTaskListener(papVerifier);
							logJavacInvocation(args);
							result = task->doCall();
							$Log::debug($$str({"javac result: "_s, result}));
							sfm->flush();
						} else {
							result = $Main$Result::ERROR;
						}
					} catch ($Exception& e) {
						$Log::error($($Util::getStackTrace(e)));
						stderrLog->append($(static_cast<$CharSequence*>($Util::getStackTrace(e))));
						result = $Main$Result::ERROR;
					}
					$set(compilationResult, packageArtifacts, sfm->getPackageArtifacts());
					if (papVerifier->errorsDiscovered()) {
						result = $Main$Result::ERROR;
					}
					$set(compilationResult, packageDependencies, depsCollector->getDependencies(false));
					$set(compilationResult, packageCpDependencies, depsCollector->getDependencies(true));
					$set(compilationResult, packagePubapis, pubApiCollector->getPubApis(true));
					$set(compilationResult, dependencyPubapis, pubApiCollector->getPubApis(false));
					$set(compilationResult, stderr, stderrLog->toString());
					$set(compilationResult, result, result);
					$assign(var$2, compilationResult);
					return$1 = true;
					goto $finally;
				} catch ($Throwable& t$) {
					if (fm != nullptr) {
						try {
							fm->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$5) {
				$assign(var$0, var$5);
			} $finally: {
				if (fm != nullptr) {
					fm->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($IOException& e) {
		$throwNew($Error, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void CompilationService::logJavacInvocation($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$Log::debug("Invoking javac with args"_s);
	$var($Iterator, argIter, $nc($($Arrays::asList(args)))->iterator());
	while ($nc(argIter)->hasNext()) {
		$var($String, arg, $cast($String, argIter->next()));
		$var($String, line, $str({"    "_s, arg}));
		bool var$0 = $nc(arg)->matches("\\-(d|cp|classpath|sourcepath|source|target)"_s);
		if (var$0 && argIter->hasNext()) {
			$plusAssign(line, $$str({" "_s, $cast($String, $(argIter->next()))}));
		}
		$Log::debug(line);
	}
}

CompilationService::CompilationService() {
}

$Class* CompilationService::load$($String* name, bool initialize) {
	$loadClass(CompilationService, name, initialize, &_CompilationService_ClassInfo_, allocate$CompilationService);
	return class$;
}

$Class* CompilationService::class$ = nullptr;

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com