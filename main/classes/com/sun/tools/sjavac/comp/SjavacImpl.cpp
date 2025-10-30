#include <com/sun/tools/sjavac/comp/SjavacImpl.h>

#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/javac/main/Main.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/sjavac/BuildState.h>
#include <com/sun/tools/sjavac/JavacState.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/Module.h>
#include <com/sun/tools/sjavac/ProblemException.h>
#include <com/sun/tools/sjavac/Source.h>
#include <com/sun/tools/sjavac/Util.h>
#include <com/sun/tools/sjavac/comp/CompilationService.h>
#include <com/sun/tools/sjavac/options/Option.h>
#include <com/sun/tools/sjavac/options/Options.h>
#include <com/sun/tools/sjavac/options/SourceLocation.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/io/StringWriter.h>
#include <java/io/UncheckedIOException.h>
#include <java/io/Writer.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/tools/JavaFileManager.h>
#include <jcpp.h>

#undef CMDERR
#undef ERROR
#undef OK
#undef SERVER

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $Main = ::com::sun::tools::javac::main::Main;
using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $Context = ::com::sun::tools::javac::util::Context;
using $Log = ::com::sun::tools::javac::util::Log;
using $BuildState = ::com::sun::tools::sjavac::BuildState;
using $JavacState = ::com::sun::tools::sjavac::JavacState;
using $1Log = ::com::sun::tools::sjavac::Log;
using $Module = ::com::sun::tools::sjavac::Module;
using $ProblemException = ::com::sun::tools::sjavac::ProblemException;
using $Source = ::com::sun::tools::sjavac::Source;
using $Util = ::com::sun::tools::sjavac::Util;
using $CompilationService = ::com::sun::tools::sjavac::comp::CompilationService;
using $Option = ::com::sun::tools::sjavac::options::Option;
using $Options = ::com::sun::tools::sjavac::options::Options;
using $SourceLocation = ::com::sun::tools::sjavac::options::SourceLocation;
using $Sjavac = ::com::sun::tools::sjavac::server::Sjavac;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $StringWriter = ::java::io::StringWriter;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $Writer = ::java::io::Writer;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $JavaFileManager = ::javax::tools::JavaFileManager;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

class SjavacImpl$$Lambda$lambda$compile$0 : public $Predicate {
	$class(SjavacImpl$$Lambda$lambda$compile$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* arg) override {
		 return SjavacImpl::lambda$compile$0($cast($String, arg));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SjavacImpl$$Lambda$lambda$compile$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SjavacImpl$$Lambda$lambda$compile$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SjavacImpl$$Lambda$lambda$compile$0::*)()>(&SjavacImpl$$Lambda$lambda$compile$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo SjavacImpl$$Lambda$lambda$compile$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.comp.SjavacImpl$$Lambda$lambda$compile$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* SjavacImpl$$Lambda$lambda$compile$0::load$($String* name, bool initialize) {
	$loadClass(SjavacImpl$$Lambda$lambda$compile$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SjavacImpl$$Lambda$lambda$compile$0::class$ = nullptr;

class SjavacImpl$$Lambda$lambda$compile$1$1 : public $IntFunction {
	$class(SjavacImpl$$Lambda$lambda$compile$1$1, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return $of(SjavacImpl::lambda$compile$1(x$0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SjavacImpl$$Lambda$lambda$compile$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SjavacImpl$$Lambda$lambda$compile$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SjavacImpl$$Lambda$lambda$compile$1$1::*)()>(&SjavacImpl$$Lambda$lambda$compile$1$1::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo SjavacImpl$$Lambda$lambda$compile$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.comp.SjavacImpl$$Lambda$lambda$compile$1$1",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* SjavacImpl$$Lambda$lambda$compile$1$1::load$($String* name, bool initialize) {
	$loadClass(SjavacImpl$$Lambda$lambda$compile$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SjavacImpl$$Lambda$lambda$compile$1$1::class$ = nullptr;

class SjavacImpl$$Lambda$error$2 : public $Consumer {
	$class(SjavacImpl$$Lambda$error$2, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* msg) override {
		$1Log::error($cast($String, msg));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SjavacImpl$$Lambda$error$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SjavacImpl$$Lambda$error$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SjavacImpl$$Lambda$error$2::*)()>(&SjavacImpl$$Lambda$error$2::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SjavacImpl$$Lambda$error$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.comp.SjavacImpl$$Lambda$error$2",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* SjavacImpl$$Lambda$error$2::load$($String* name, bool initialize) {
	$loadClass(SjavacImpl$$Lambda$error$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SjavacImpl$$Lambda$error$2::class$ = nullptr;

$MethodInfo _SjavacImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SjavacImpl::*)()>(&SjavacImpl::init$))},
	{"compile", "([Ljava/lang/String;)Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC},
	{"createIfMissing", "(Ljava/nio/file/Path;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Path*)>(&SjavacImpl::createIfMissing))},
	{"findSourceFiles", "(Ljava/util/List;Ljava/util/Set;Ljava/util/Map;Ljava/util/Map;Lcom/sun/tools/sjavac/Module;ZZ)V", "(Ljava/util/List<Lcom/sun/tools/sjavac/options/SourceLocation;>;Ljava/util/Set<Ljava/lang/String;>;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Source;>;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Module;>;Lcom/sun/tools/sjavac/Module;ZZ)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($List*,$Set*,$Map*,$Map*,$Module*,bool,bool)>(&SjavacImpl::findSourceFiles)), "java.io.IOException"},
	{"isOverlapping", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Path*,$Path*)>(&SjavacImpl::isOverlapping))},
	{"lambda$compile$0", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($String*)>(&SjavacImpl::lambda$compile$0))},
	{"lambda$compile$1", "(I)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StringArray*(*)(int32_t)>(&SjavacImpl::lambda$compile$1))},
	{"printRound", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&SjavacImpl::printRound))},
	{"shutdown", "()V", nullptr, $PUBLIC},
	{"srcDstOverlap", "(Ljava/util/List;Ljava/nio/file/Path;)Z", "(Ljava/util/List<Lcom/sun/tools/sjavac/options/SourceLocation;>;Ljava/nio/file/Path;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($List*,$Path*)>(&SjavacImpl::srcDstOverlap))},
	{"validateOptions", "(Lcom/sun/tools/sjavac/options/Options;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Options*)>(&SjavacImpl::validateOptions))},
	{}
};

$ClassInfo _SjavacImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.comp.SjavacImpl",
	"java.lang.Object",
	"com.sun.tools.sjavac.server.Sjavac",
	nullptr,
	_SjavacImpl_MethodInfo_
};

$Object* allocate$SjavacImpl($Class* clazz) {
	return $of($alloc(SjavacImpl));
}

void SjavacImpl::init$() {
}

$Main$Result* SjavacImpl::compile($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Options, options, nullptr);
	try {
		$assign(options, $Options::parseArgs(args));
	} catch ($IllegalArgumentException& e) {
		$1Log::error($(e->getMessage()));
		$init($Main$Result);
		return $Main$Result::CMDERR;
	}
	if (!validateOptions(options)) {
		$init($Main$Result);
		return $Main$Result::CMDERR;
	}
	$var($List, var$0, $nc(options)->getSources());
	if (srcDstOverlap(var$0, $(options->getDestDir()))) {
		$init($Main$Result);
		return $Main$Result::CMDERR;
	}
	if (!createIfMissing($($nc(options)->getDestDir()))) {
		$init($Main$Result);
		return $Main$Result::ERROR;
	}
	$var($Path, stateDir, $nc(options)->getStateDir());
	if (stateDir != nullptr && !createIfMissing($(options->getStateDir()))) {
		$init($Main$Result);
		return $Main$Result::ERROR;
	}
	$var($Path, gensrc, options->getGenSrcDir());
	if (gensrc != nullptr && !createIfMissing(gensrc)) {
		$init($Main$Result);
		return $Main$Result::ERROR;
	}
	$var($Path, hdrdir, options->getHeaderDir());
	if (hdrdir != nullptr && !createIfMissing(hdrdir)) {
		$init($Main$Result);
		return $Main$Result::ERROR;
	}
	if (stateDir == nullptr) {
		$var($Context, context, $new($Context));
		$var($StringWriter, strWriter, $new($StringWriter));
		$var($PrintWriter, printWriter, $new($PrintWriter, static_cast<$Writer*>(strWriter)));
		$Log::preRegister(context, printWriter);
		$JavacFileManager::preRegister(context);
		$var($StringArray, passThroughArgs, $fcast($StringArray, $nc($($nc($($Stream::of(args)))->filter(static_cast<$Predicate*>($$new(SjavacImpl$$Lambda$lambda$compile$0)))))->toArray(static_cast<$IntFunction*>($$new(SjavacImpl$$Lambda$lambda$compile$1$1)))));
		$Main$Result* result = $$new($Main, "javac"_s, printWriter)->compile(passThroughArgs, context);
		printWriter->flush();
		$nc($($Util::getLines($(strWriter->toString()))))->forEach(static_cast<$Consumer*>($$new(SjavacImpl$$Lambda$error$2)));
		$load($JavaFileManager);
		$var($JavaFileManager, fileManager, $cast($JavaFileManager, context->get($JavaFileManager::class$)));
		{
			$var($JavacFileManager, javacFileManager, nullptr);
			bool var$1 = $instanceOf($JavacFileManager, fileManager);
			if (var$1) {
				$assign(javacFileManager, $cast($JavacFileManager, fileManager));
				var$1 = true;
			}
			if (var$1) {
				try {
					$nc(javacFileManager)->close();
				} catch ($IOException& es) {
					$throwNew($UncheckedIOException, es);
				}
			}
		}
		return result;
	} else {
		$var($JavacState, javac_state, $JavacState::load(options));
		$var($Map, suffixRules, $new($HashMap));
		suffixRules->putAll($($nc(javac_state)->getJavaSuffixRule()));
		suffixRules->putAll($(options->getTranslationRules()));
		$var($Map, modules, $new($HashMap));
		$var($Module, current_module, $new($Module, ""_s, ""_s));
		modules->put(""_s, current_module);
		try {
			$var($Map, sources, $new($HashMap));
			$var($List, var$2, options->getSources());
			$var($Set, var$3, suffixRules->keySet());
			$var($Map, var$4, sources);
			$var($Map, var$5, modules);
			$var($Module, var$6, current_module);
			findSourceFiles(var$2, var$3, var$4, var$5, var$6, options->isDefaultPackagePermitted(), false);
			if (sources->isEmpty()) {
				$1Log::error("Found nothing to compile!"_s);
				$init($Main$Result);
				return $Main$Result::ERROR;
			}
			$var($Map, sources_to_link_to, $new($HashMap));
			$var($List, sourceResolutionLocations, $new($ArrayList));
			sourceResolutionLocations->addAll($(options->getSources()));
			sourceResolutionLocations->addAll($(options->getSourceSearchPaths()));
			$var($List, var$7, sourceResolutionLocations);
			$var($Set, var$8, $Collections::singleton(".java"_s));
			$var($Map, var$9, sources_to_link_to);
			$var($Map, var$10, modules);
			$var($Module, var$11, current_module);
			findSourceFiles(var$7, var$8, var$9, var$10, var$11, options->isDefaultPackagePermitted(), true);
			$nc($($nc(javac_state)->now()))->flattenPackagesSourcesAndArtifacts(modules);
			$nc($(javac_state->now()))->checkInternalState("checking sources"_s, false, sources);
			$nc($(javac_state->now()))->checkInternalState("checking linked sources"_s, true, sources_to_link_to);
			javac_state->setVisibleSources(sources_to_link_to);
			int32_t round = 0;
			printRound(round);
			javac_state->checkSourceStatus(false);
			javac_state->findAllArtifacts();
			if (!options->areUnidentifiedArtifactsPermitted()) {
				javac_state->removeUnidentifiedArtifacts();
			}
			javac_state->taintPackagesThatMissArtifacts();
			javac_state->taintPackagesDependingOnChangedClasspathPackages();
			javac_state->deleteClassArtifactsInTaintedPackages();
			javac_state->performCopying($($Util::pathToFile($(options->getDestDir()))), suffixRules);
			javac_state->performTranslation($($Util::pathToFile(gensrc)), suffixRules);
			$var($Map, generated_sources, $new($HashMap));
			$var($File, var$12, $Util::pathToFile($(options->getGenSrcDir())));
			$var($Set, var$13, $Util::set($$new($StringArray, {".java"_s})));
			$var($List, var$14, $Collections::emptyList());
			$Source::scanRoot(var$12, var$13, var$14, $($Collections::emptyList()), generated_sources, modules, current_module, false, true, false);
			$nc($(javac_state->now()))->flattenPackagesSourcesAndArtifacts(modules);
			javac_state->checkSourceStatus(true);
			javac_state->compareWithMakefileList($($Util::pathToFile($(options->getSourceReferenceList()))));
			bool again = false;
			$var($Set, recently_compiled, $new($HashSet));
			$var($booleans, rc, $new($booleans, 1));
			$var($CompilationService, compilationService, $new($CompilationService));
			do {
				if (round > 0) {
					printRound(round);
				}
				javac_state->deleteClassArtifactsInTaintedPackages();
				again = javac_state->performJavaCompilations(compilationService, options, recently_compiled, rc);
				if (!rc->get(0)) {
					$1Log::debug("Compilation failed."_s);
					break;
				}
				if (!again) {
					$1Log::debug("Nothing left to do."_s);
				}
				++round;
			} while (again);
			$1Log::debug("No need to do another round."_s);
			if (rc->get(0)) {
				javac_state->save();
				$nc($(javac_state->now()))->flattenArtifacts(modules);
				javac_state->removeSuperfluousArtifacts(recently_compiled);
			}
			$init($Main$Result);
			return rc->get(0) ? $Main$Result::OK : $Main$Result::ERROR;
		} catch ($ProblemException& e) {
			$1Log::error($(e->getMessage()));
			$1Log::debug(static_cast<$Throwable*>(e));
			$init($Main$Result);
			return $Main$Result::ERROR;
		} catch ($Exception& e) {
			$1Log::error(static_cast<$Throwable*>(e));
			$init($Main$Result);
			return $Main$Result::ERROR;
		}
	}
	$shouldNotReachHere();
}

void SjavacImpl::shutdown() {
}

bool SjavacImpl::validateOptions($Options* options) {
	$init(SjavacImpl);
	$useLocalCurrentObjectStackCache();
	$var($String, err, nullptr);
	if ($nc(options)->getDestDir() == nullptr) {
		$assign(err, "Please specify output directory."_s);
	} else if (options->isJavaFilesAmongJavacArgs()) {
		$assign(err, "Sjavac does not handle explicit compilation of single .java files."_s);
	} else if (!$nc($(options->getImplicitPolicy()))->equals("none"_s)) {
		$assign(err, "The only allowed setting for sjavac is -implicit:none"_s);
	} else {
		bool var$1 = $nc($(options->getSources()))->isEmpty();
		if (var$1 && options->getStateDir() != nullptr) {
			$assign(err, "You have to specify -src when using --state-dir."_s);
		} else {
			bool var$3 = $nc($(options->getTranslationRules()))->size() > 1;
			if (var$3 && options->getGenSrcDir() == nullptr) {
				$assign(err, "You have translators but no gensrc dir (-s) specified!"_s);
			}
		}
	}
	if (err != nullptr) {
		$1Log::error(err);
	}
	return err == nullptr;
}

bool SjavacImpl::srcDstOverlap($List* locs, $Path* dest) {
	$init(SjavacImpl);
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(locs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SourceLocation, loc, $cast($SourceLocation, i$->next()));
			{
				if (isOverlapping($($nc(loc)->getPath()), dest)) {
					$1Log::error($$str({"Source location "_s, $($nc(loc)->getPath()), " overlaps with destination "_s, dest}));
					return true;
				}
			}
		}
	}
	return false;
}

bool SjavacImpl::isOverlapping($Path* p1$renamed, $Path* p2$renamed) {
	$init(SjavacImpl);
	$useLocalCurrentObjectStackCache();
	$var($Path, p1, p1$renamed);
	$var($Path, p2, p2$renamed);
	$assign(p1, $nc($($nc(p1)->toAbsolutePath()))->normalize());
	$assign(p2, $nc($($nc(p2)->toAbsolutePath()))->normalize());
	bool var$0 = p1->startsWith(p2);
	return var$0 || p2->startsWith(p1);
}

bool SjavacImpl::createIfMissing($Path* dir) {
	$init(SjavacImpl);
	$useLocalCurrentObjectStackCache();
	if ($Files::isDirectory(dir, $$new($LinkOptionArray, 0))) {
		return true;
	}
	if ($Files::exists(dir, $$new($LinkOptionArray, 0))) {
		$1Log::error($$str({dir, " is not a directory."_s}));
		return false;
	}
	try {
		$Files::createDirectories(dir, $$new($FileAttributeArray, 0));
	} catch ($IOException& e) {
		$1Log::error($$str({"Could not create directory: "_s, $(e->getMessage())}));
		return false;
	}
	return true;
}

void SjavacImpl::findSourceFiles($List* sourceLocations, $Set* sourceTypes, $Map* foundFiles, $Map* foundModules, $Module* currentModule, bool permitSourcesInDefaultPackage, bool inLinksrc) {
	$init(SjavacImpl);
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(sourceLocations)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SourceLocation, source, $cast($SourceLocation, i$->next()));
			{
				$nc(source)->findSourceFiles(sourceTypes, foundFiles, foundModules, currentModule, permitSourcesInDefaultPackage, inLinksrc);
			}
		}
	}
}

void SjavacImpl::printRound(int32_t round) {
	$init(SjavacImpl);
	$useLocalCurrentObjectStackCache();
	$1Log::debug("****************************************"_s);
	$1Log::debug($$str({"* Round "_s, $$str(round), "                              *"_s}));
	$1Log::debug("****************************************"_s);
}

$StringArray* SjavacImpl::lambda$compile$1(int32_t x$0) {
	$init(SjavacImpl);
	return $new($StringArray, x$0);
}

bool SjavacImpl::lambda$compile$0($String* arg) {
	$init(SjavacImpl);
	$init($Option);
	return !$nc(arg)->startsWith($Option::SERVER->arg);
}

SjavacImpl::SjavacImpl() {
}

$Class* SjavacImpl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SjavacImpl$$Lambda$lambda$compile$0::classInfo$.name)) {
			return SjavacImpl$$Lambda$lambda$compile$0::load$(name, initialize);
		}
		if (name->equals(SjavacImpl$$Lambda$lambda$compile$1$1::classInfo$.name)) {
			return SjavacImpl$$Lambda$lambda$compile$1$1::load$(name, initialize);
		}
		if (name->equals(SjavacImpl$$Lambda$error$2::classInfo$.name)) {
			return SjavacImpl$$Lambda$error$2::load$(name, initialize);
		}
	}
	$loadClass(SjavacImpl, name, initialize, &_SjavacImpl_ClassInfo_, allocate$SjavacImpl);
	return class$;
}

$Class* SjavacImpl::class$ = nullptr;

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com