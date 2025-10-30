#include <com/sun/tools/sjavac/JavacState.h>

#include <com/sun/tools/sjavac/BuildState.h>
#include <com/sun/tools/sjavac/CompileJavaPackages.h>
#include <com/sun/tools/sjavac/CopyFile.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/Module.h>
#include <com/sun/tools/sjavac/Package.h>
#include <com/sun/tools/sjavac/ProblemException.h>
#include <com/sun/tools/sjavac/PubApiExtractor.h>
#include <com/sun/tools/sjavac/Source.h>
#include <com/sun/tools/sjavac/Transformer.h>
#include <com/sun/tools/sjavac/Util.h>
#include <com/sun/tools/sjavac/comp/CompilationService.h>
#include <com/sun/tools/sjavac/options/Options.h>
#include <com/sun/tools/sjavac/pubapi/PubApi.h>
#include <com/sun/tools/sjavac/pubapi/PubType.h>
#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/FileReader.h>
#include <java/io/FileWriter.h>
#include <java/io/IOException.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/nio/file/NoSuchFileException.h>
#include <java/nio/file/Path.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Date.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $BuildState = ::com::sun::tools::sjavac::BuildState;
using $CompileJavaPackages = ::com::sun::tools::sjavac::CompileJavaPackages;
using $CopyFile = ::com::sun::tools::sjavac::CopyFile;
using $Log = ::com::sun::tools::sjavac::Log;
using $Module = ::com::sun::tools::sjavac::Module;
using $Package = ::com::sun::tools::sjavac::Package;
using $ProblemException = ::com::sun::tools::sjavac::ProblemException;
using $PubApiExtractor = ::com::sun::tools::sjavac::PubApiExtractor;
using $Source = ::com::sun::tools::sjavac::Source;
using $Transformer = ::com::sun::tools::sjavac::Transformer;
using $Util = ::com::sun::tools::sjavac::Util;
using $CompilationService = ::com::sun::tools::sjavac::comp::CompilationService;
using $Options = ::com::sun::tools::sjavac::options::Options;
using $PubApi = ::com::sun::tools::sjavac::pubapi::PubApi;
using $PubType = ::com::sun::tools::sjavac::pubapi::PubType;
using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $FileReader = ::java::io::FileReader;
using $FileWriter = ::java::io::FileWriter;
using $IOException = ::java::io::IOException;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Reader = ::java::io::Reader;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URI = ::java::net::URI;
using $NoSuchFileException = ::java::nio::file::NoSuchFileException;
using $Path = ::java::nio::file::Path;
using $DateFormat = ::java::text::DateFormat;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Date = ::java::util::Date;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class JavacState$$Lambda$stream : public $Function {
	$class(JavacState$$Lambda$stream, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Collection, inst$)->stream());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacState$$Lambda$stream>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacState$$Lambda$stream::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacState$$Lambda$stream::*)()>(&JavacState$$Lambda$stream::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacState$$Lambda$stream::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.JavacState$$Lambda$stream",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavacState$$Lambda$stream::load$($String* name, bool initialize) {
	$loadClass(JavacState$$Lambda$stream, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacState$$Lambda$stream::class$ = nullptr;

class JavacState$$Lambda$addAll$1 : public $Consumer {
	$class(JavacState$$Lambda$addAll$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Set* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* arg0) override {
		$nc(inst$)->addAll($cast($Collection, arg0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacState$$Lambda$addAll$1>());
	}
	$Set* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavacState$$Lambda$addAll$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavacState$$Lambda$addAll$1, inst$)},
	{}
};
$MethodInfo JavacState$$Lambda$addAll$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/Set;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacState$$Lambda$addAll$1::*)($Set*)>(&JavacState$$Lambda$addAll$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacState$$Lambda$addAll$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.JavacState$$Lambda$addAll$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* JavacState$$Lambda$addAll$1::load$($String* name, bool initialize) {
	$loadClass(JavacState$$Lambda$addAll$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacState$$Lambda$addAll$1::class$ = nullptr;

$FieldInfo _JavacState_FieldInfo_[] = {
	{"theArgs", "Ljava/lang/String;", nullptr, 0, $field(JavacState, theArgs)},
	{"numCores", "I", nullptr, 0, $field(JavacState, numCores)},
	{"javacState", "Ljava/io/File;", nullptr, $PRIVATE, $field(JavacState, javacState)},
	{"prev", "Lcom/sun/tools/sjavac/BuildState;", nullptr, $PRIVATE, $field(JavacState, prev$)},
	{"now", "Lcom/sun/tools/sjavac/BuildState;", nullptr, $PRIVATE, $field(JavacState, now$)},
	{"needsSaving", "Z", nullptr, $PRIVATE, $field(JavacState, needsSaving$)},
	{"newJavacState", "Z", nullptr, $PRIVATE, $field(JavacState, newJavacState)},
	{"taintedPackages", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(JavacState, taintedPackages$)},
	{"packagesWithChangedPublicApis", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(JavacState, packagesWithChangedPublicApis)},
	{"taintedModules", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(JavacState, taintedModules)},
	{"recompiledPackages", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(JavacState, recompiledPackages)},
	{"binDir", "Ljava/io/File;", nullptr, $PRIVATE, $field(JavacState, binDir)},
	{"gensrcDir", "Ljava/io/File;", nullptr, $PRIVATE, $field(JavacState, gensrcDir)},
	{"headerDir", "Ljava/io/File;", nullptr, $PRIVATE, $field(JavacState, headerDir)},
	{"stateDir", "Ljava/io/File;", nullptr, $PRIVATE, $field(JavacState, stateDir)},
	{"binArtifacts", "Ljava/util/Set;", "Ljava/util/Set<Ljava/io/File;>;", $PRIVATE, $field(JavacState, binArtifacts)},
	{"gensrcArtifacts", "Ljava/util/Set;", "Ljava/util/Set<Ljava/io/File;>;", $PRIVATE, $field(JavacState, gensrcArtifacts)},
	{"headerArtifacts", "Ljava/util/Set;", "Ljava/util/Set<Ljava/io/File;>;", $PRIVATE, $field(JavacState, headerArtifacts)},
	{"removedSources", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/sjavac/Source;>;", 0, $field(JavacState, removedSources)},
	{"addedSources", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/sjavac/Source;>;", 0, $field(JavacState, addedSources)},
	{"modifiedSources", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/sjavac/Source;>;", 0, $field(JavacState, modifiedSources)},
	{"visibleSrcs", "Ljava/util/Set;", "Ljava/util/Set<Ljava/net/URI;>;", 0, $field(JavacState, visibleSrcs)},
	{"compileJavaPackages", "Lcom/sun/tools/sjavac/CompileJavaPackages;", nullptr, $PRIVATE, $field(JavacState, compileJavaPackages)},
	{"options", "Lcom/sun/tools/sjavac/options/Options;", nullptr, $PRIVATE, $field(JavacState, options)},
	{}
};

$MethodInfo _JavacState_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/sjavac/options/Options;Z)V", nullptr, 0, $method(static_cast<void(JavacState::*)($Options*,bool)>(&JavacState::init$))},
	{"addFileToTransform", "(Ljava/util/Map;Lcom/sun/tools/sjavac/Transformer;Lcom/sun/tools/sjavac/Source;)V", "(Ljava/util/Map<Lcom/sun/tools/sjavac/Transformer;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;>;>;Lcom/sun/tools/sjavac/Transformer;Lcom/sun/tools/sjavac/Source;)V", $PRIVATE, $method(static_cast<void(JavacState::*)($Map*,$Transformer*,$Source*)>(&JavacState::addFileToTransform))},
	{"calculateAddedSources", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/sjavac/Source;>;", $PRIVATE, $method(static_cast<$Set*(JavacState::*)()>(&JavacState::calculateAddedSources))},
	{"calculateModifiedSources", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/sjavac/Source;>;", $PRIVATE, $method(static_cast<$Set*(JavacState::*)()>(&JavacState::calculateModifiedSources))},
	{"calculateRemovedSources", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/sjavac/Source;>;", $PRIVATE, $method(static_cast<$Set*(JavacState::*)()>(&JavacState::calculateRemovedSources))},
	{"checkSourceStatus", "(Z)V", nullptr, $PUBLIC},
	{"clearTaintedPackages", "()V", nullptr, $PUBLIC},
	{"compareWithMakefileList", "(Ljava/io/File;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.sjavac.ProblemException"},
	{"deleteClassArtifactsInTaintedPackages", "()V", nullptr, $PUBLIC},
	{"deleteContents", "(Ljava/io/File;)V", nullptr, $PRIVATE, $method(static_cast<void(JavacState::*)($File*)>(&JavacState::deleteContents))},
	{"fetchPrevArtifacts", "(Ljava/lang/String;)Ljava/util/Map;", "(Ljava/lang/String;)Ljava/util/Map<Ljava/lang/String;Ljava/io/File;>;", $PRIVATE, $method(static_cast<$Map*(JavacState::*)($String*)>(&JavacState::fetchPrevArtifacts))},
	{"findAllArtifacts", "()V", nullptr, $PUBLIC},
	{"findAllFiles", "(Ljava/io/File;)Ljava/util/Set;", "(Ljava/io/File;)Ljava/util/Set<Ljava/io/File;>;", $PRIVATE | $STATIC, $method(static_cast<$Set*(*)($File*)>(&JavacState::findAllFiles))},
	{"getJavaSuffixRule", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Transformer;>;", $PUBLIC},
	{"isIncremental", "()Z", nullptr, $PUBLIC},
	{"load", "(Lcom/sun/tools/sjavac/options/Options;)Lcom/sun/tools/sjavac/JavacState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavacState*(*)($Options*)>(&JavacState::load))},
	{"needsSaving", "()V", nullptr, $PRIVATE, $method(static_cast<void(JavacState::*)()>(&JavacState::needsSaving))},
	{"now", "()Lcom/sun/tools/sjavac/BuildState;", nullptr, $PUBLIC},
	{"perform", "(Lcom/sun/tools/sjavac/comp/CompilationService;Ljava/io/File;Ljava/util/Map;)Z", "(Lcom/sun/tools/sjavac/comp/CompilationService;Ljava/io/File;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Transformer;>;)Z", $PRIVATE, $method(static_cast<bool(JavacState::*)($CompilationService*,$File*,$Map*)>(&JavacState::perform))},
	{"performCopying", "(Ljava/io/File;Ljava/util/Map;)V", "(Ljava/io/File;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Transformer;>;)V", $PUBLIC},
	{"performJavaCompilations", "(Lcom/sun/tools/sjavac/comp/CompilationService;Lcom/sun/tools/sjavac/options/Options;Ljava/util/Set;[Z)Z", "(Lcom/sun/tools/sjavac/comp/CompilationService;Lcom/sun/tools/sjavac/options/Options;Ljava/util/Set<Ljava/lang/String;>;[Z)Z", $PUBLIC},
	{"performTranslation", "(Ljava/io/File;Ljava/util/Map;)V", "(Ljava/io/File;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Transformer;>;)V", $PUBLIC},
	{"prev", "()Lcom/sun/tools/sjavac/BuildState;", nullptr, $PUBLIC},
	{"recurse", "(Ljava/io/File;Ljava/util/Set;)V", "(Ljava/io/File;Ljava/util/Set<Ljava/io/File;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($File*,$Set*)>(&JavacState::recurse))},
	{"removeArgsNotAffectingState", "([Ljava/lang/String;)[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)($StringArray*)>(&JavacState::removeArgsNotAffectingState))},
	{"removeSuperfluousArtifacts", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC},
	{"removeUnidentifiedArtifacts", "()V", nullptr, $PUBLIC},
	{"save", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setVisibleSources", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Source;>;)V", $PUBLIC},
	{"taintPackage", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"taintPackagesDependingOnChangedClasspathPackages", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"taintPackagesDependingOnChangedPackages", "(Ljava/util/Set;Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/lang/String;>;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC},
	{"taintPackagesThatMissArtifacts", "()V", nullptr, $PUBLIC},
	{"taintedPackages", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{}
};

$ClassInfo _JavacState_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.JavacState",
	"java.lang.Object",
	nullptr,
	_JavacState_FieldInfo_,
	_JavacState_MethodInfo_
};

$Object* allocate$JavacState($Class* clazz) {
	return $of($alloc(JavacState));
}

void JavacState::init$($Options* op, bool removeJavacState) {
	$useLocalCurrentObjectStackCache();
	$set(this, removedSources, nullptr);
	$set(this, addedSources, nullptr);
	$set(this, modifiedSources, nullptr);
	$set(this, compileJavaPackages, $new($CompileJavaPackages));
	$set(this, options, op);
	this->numCores = $nc(this->options)->getNumCores();
	$set(this, theArgs, $nc(this->options)->getStateArgsString());
	$set(this, binDir, $Util::pathToFile($($nc(this->options)->getDestDir())));
	$set(this, gensrcDir, $Util::pathToFile($($nc(this->options)->getGenSrcDir())));
	$set(this, headerDir, $Util::pathToFile($($nc(this->options)->getHeaderDir())));
	$set(this, stateDir, $Util::pathToFile($($nc(this->options)->getStateDir())));
	$set(this, javacState, $new($File, this->stateDir, "javac_state"_s));
	if (removeJavacState && $nc(this->javacState)->exists()) {
		$nc(this->javacState)->delete$();
	}
	this->newJavacState = false;
	if (!$nc(this->javacState)->exists()) {
		this->newJavacState = true;
		if (!$nc(this->options)->areUnidentifiedArtifactsPermitted()) {
			deleteContents(this->binDir);
			deleteContents(this->gensrcDir);
			deleteContents(this->headerDir);
		}
		this->needsSaving$ = true;
	}
	$set(this, prev$, $new($BuildState));
	$set(this, now$, $new($BuildState));
	$set(this, taintedPackages$, $new($HashSet));
	$set(this, recompiledPackages, $new($HashSet));
	$set(this, packagesWithChangedPublicApis, $new($HashSet));
}

$BuildState* JavacState::prev() {
	return this->prev$;
}

$BuildState* JavacState::now() {
	return this->now$;
}

$StringArray* JavacState::removeArgsNotAffectingState($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, out, $new($StringArray, $nc(args)->length));
	int32_t j = 0;
	for (int32_t i = 0; i < args->length; ++i) {
		if ($nc(args->get(i))->equals("-j"_s)) {
			++i;
		} else if ($nc(args->get(i))->startsWith("--server:"_s)) {
		} else if ($nc(args->get(i))->startsWith("--log="_s)) {
		} else if ($nc(args->get(i))->equals("--compare-found-sources"_s)) {
			++i;
		} else {
			out->set(j, args->get(i));
			++j;
		}
	}
	$var($StringArray, ret, $new($StringArray, j));
	$System::arraycopy(out, 0, ret, 0, j);
	return ret;
}

void JavacState::setVisibleSources($Map* vs) {
	$useLocalCurrentObjectStackCache();
	$set(this, visibleSrcs, $new($HashSet));
	{
		$var($Iterator, i$, $nc($($nc(vs)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, s, $cast($String, i$->next()));
			{
				$var($Source, src, $cast($Source, vs->get(s)));
				$nc(this->visibleSrcs)->add($($nc($($nc(src)->file()))->toURI()));
			}
		}
	}
}

bool JavacState::isIncremental() {
	return !$nc($($nc(this->prev$)->sources()))->isEmpty();
}

void JavacState::findAllArtifacts() {
	$set(this, binArtifacts, findAllFiles(this->binDir));
	$set(this, gensrcArtifacts, findAllFiles(this->gensrcDir));
	$set(this, headerArtifacts, findAllFiles(this->headerDir));
}

$Map* JavacState::fetchPrevArtifacts($String* pkg) {
	$useLocalCurrentObjectStackCache();
	$var($Package, p, $cast($Package, $nc($($nc(this->prev$)->packages()))->get(pkg)));
	if (p != nullptr) {
		return p->artifacts();
	}
	return $new($HashMap);
}

void JavacState::deleteClassArtifactsInTaintedPackages() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->taintedPackages$)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, pkg, $cast($String, i$->next()));
			{
				$var($Map, arts, fetchPrevArtifacts(pkg));
				{
					$var($Iterator, i$, $nc($($nc(arts)->values()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($File, f, $cast($File, i$->next()));
						{
							bool var$0 = $nc(f)->exists();
							if (var$0 && $nc($(f->getName()))->endsWith(".class"_s)) {
								f->delete$();
							}
						}
					}
				}
			}
		}
	}
}

void JavacState::needsSaving() {
	this->needsSaving$ = true;
}

void JavacState::save() {
	$useLocalCurrentObjectStackCache();
	if (!this->needsSaving$) {
		return;
	}
	{
		$var($FileWriter, out, $new($FileWriter, this->javacState));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($StringBuilder, b, $new($StringBuilder));
					int64_t millisNow = $System::currentTimeMillis();
					$var($Date, d, $new($Date, millisNow));
					$var($SimpleDateFormat, df, $new($SimpleDateFormat, "yyyy-MM-dd HH:mm:ss SSS"_s));
					b->append($$str({"# javac_state ver 0.4 generated "_s, $$str(millisNow), " "_s, $(df->format(d)), "\n"_s}));
					b->append("# This format might change at any time. Please do not depend on it.\n"_s);
					b->append("# R arguments\n"_s);
					b->append("# M module\n"_s);
					b->append("# P package\n"_s);
					b->append("# S C source_tobe_compiled timestamp\n"_s);
					b->append("# S L link_only_source timestamp\n"_s);
					b->append("# G C generated_source timestamp\n"_s);
					b->append("# A artifact timestamp\n"_s);
					b->append("# D S dependant -> source dependency\n"_s);
					b->append("# D C dependant -> classpath dependency\n"_s);
					b->append("# I pubapi\n"_s);
					b->append("R "_s)->append(this->theArgs)->append("\n"_s);
					$nc(this->now$)->copyPackagesExcept(this->prev$, this->recompiledPackages, $$new($HashSet));
					$Module::saveModules($($nc(this->now$)->modules()), b);
					$var($String, s, b->toString());
					out->write(s, 0, $nc(s)->length());
				} catch ($Throwable& t$) {
					try {
						out->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				out->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

JavacState* JavacState::load($Options* options) {
	$useLocalCurrentObjectStackCache();
	$var(JavacState, db, $new(JavacState, options, false));
	$var($Module, lastModule, nullptr);
	$var($Package, lastPackage, nullptr);
	$var($Source, lastSource, nullptr);
	bool noFileFound = false;
	bool foundCorrectVerNr = false;
	bool newCommandLine = false;
	bool syntaxError = false;
	$Log::debug($$str({"Loading javac state file: "_s, db->javacState}));
	try {
		$var($BufferedReader, in, $new($BufferedReader, $$new($FileReader, db->javacState)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					for (;;) {
						$var($String, l, in->readLine());
						if (l == nullptr) {
							break;
						}
						bool var$1 = $nc(l)->length() >= 3;
						if (var$1 && l->charAt(1) == u' ') {
							char16_t c = l->charAt(0);
							if (c == u'M') {
								$assign(lastModule, $nc(db->prev$)->loadModule(l));
							} else if (c == u'P') {
								if (lastModule == nullptr) {
									syntaxError = true;
									break;
								}
								$assign(lastPackage, $nc(db->prev$)->loadPackage(lastModule, l));
							} else if (c == u'D') {
								if (lastModule == nullptr || lastPackage == nullptr) {
									syntaxError = true;
									break;
								}
								char16_t depType = l->charAt(2);
								if (depType != u'S' && depType != u'C') {
									$throwNew($RuntimeException, $$str({"Bad dependency string: "_s, l}));
								}
								$nc(lastPackage)->parseAndAddDependency($(l->substring(4)), depType == u'C');
							} else if (c == u'I') {
								if (lastModule == nullptr || lastPackage == nullptr) {
									syntaxError = true;
									break;
								}
								$nc($($nc(lastPackage)->getPubApi()))->appendItem($(l->substring(2)));
							} else if (c == u'A') {
								if (lastModule == nullptr || lastPackage == nullptr) {
									syntaxError = true;
									break;
								}
								$nc(lastPackage)->loadArtifact(l);
							} else if (c == u'S') {
								if (lastModule == nullptr || lastPackage == nullptr) {
									syntaxError = true;
									break;
								}
								$assign(lastSource, $nc(db->prev$)->loadSource(lastPackage, l, false));
							} else if (c == u'G') {
								if (lastModule == nullptr || lastPackage == nullptr) {
									syntaxError = true;
									break;
								}
								$assign(lastSource, $nc(db->prev$)->loadSource(lastPackage, l, true));
							} else if (c == u'R') {
								$var($String, ncmdl, $str({"R "_s, db->theArgs}));
								if (!l->equals(ncmdl)) {
									newCommandLine = true;
								}
							} else if (c == u'#') {
								if (l->startsWith("# javac_state ver "_s)) {
									int32_t sp = l->indexOf(" "_s, 18);
									if (sp != -1) {
										$var($String, ver, l->substring(18, sp));
										if (!ver->equals("0.4"_s)) {
											break;
										}
										foundCorrectVerNr = true;
									}
								}
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
			} catch ($Throwable& var$2) {
				$assign(var$0, var$2);
			} /*finally*/ {
				in->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($FileNotFoundException& e) {
		noFileFound = true;
	} catch ($NoSuchFileException& e) {
		noFileFound = true;
	} catch ($IOException& e) {
		$Log::warn("Dropping old javac_state because of errors when reading it."_s);
		$assign(db, $new(JavacState, options, true));
		foundCorrectVerNr = true;
		newCommandLine = false;
		syntaxError = false;
	}
	if (foundCorrectVerNr == false && !noFileFound) {
		$Log::debug("Dropping old javac_state since it is of an old version."_s);
		$assign(db, $new(JavacState, options, true));
	} else if (newCommandLine == true && !noFileFound) {
		$Log::debug("Dropping old javac_state since a new command line is used!"_s);
		$assign(db, $new(JavacState, options, true));
	} else if (syntaxError == true) {
		$Log::warn("Dropping old javac_state since it contains syntax errors."_s);
		$assign(db, $new(JavacState, options, true));
	}
	$nc(db->prev$)->calculateDependents();
	return db;
}

void JavacState::taintPackage($String* name, $String* because) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->taintedPackages$)->contains(name)) {
		if (because != nullptr) {
			$Log::debug($$str({"Tainting "_s, $($Util::justPackageName(name)), " because "_s, because}));
		}
		$nc(this->taintedPackages$)->add(name);
		needsSaving();
		$var($Package, nowp, $cast($Package, $nc($($nc(this->now$)->packages()))->get(name)));
		if (nowp != nullptr) {
			{
				$var($Iterator, i$, $nc($(nowp->dependents()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($String, d, $cast($String, i$->next()));
					{
						taintPackage(d, because);
					}
				}
			}
		}
	}
}

$Set* JavacState::taintedPackages() {
	return this->taintedPackages$;
}

void JavacState::clearTaintedPackages() {
	$set(this, taintedPackages$, $new($HashSet));
}

void JavacState::checkSourceStatus(bool check_gensrc) {
	$useLocalCurrentObjectStackCache();
	$set(this, removedSources, calculateRemovedSources());
	{
		$var($Iterator, i$, $nc(this->removedSources)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Source, s, $cast($Source, i$->next()));
			{
				if (!$nc(s)->isGenerated() || check_gensrc) {
					$var($String, var$0, $nc($($nc(s)->pkg()))->name());
					taintPackage(var$0, $$str({"source "_s, $(s->name()), " was removed"_s}));
				}
			}
		}
	}
	$set(this, addedSources, calculateAddedSources());
	{
		$var($Iterator, i$, $nc(this->addedSources)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Source, s, $cast($Source, i$->next()));
			{
				$var($String, msg, nullptr);
				if (isIncremental()) {
					$assign(msg, $str({"source "_s, $($nc(s)->name()), " was added"_s}));
				}
				if (!$nc(s)->isGenerated() || check_gensrc) {
					taintPackage($($nc($($nc(s)->pkg()))->name()), msg);
				}
			}
		}
	}
	$set(this, modifiedSources, calculateModifiedSources());
	{
		$var($Iterator, i$, $nc(this->modifiedSources)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Source, s, $cast($Source, i$->next()));
			{
				if (!$nc(s)->isGenerated() || check_gensrc) {
					$var($String, var$1, $nc($($nc(s)->pkg()))->name());
					taintPackage(var$1, $$str({"source "_s, $(s->name()), " was modified"_s}));
				}
			}
		}
	}
}

$Map* JavacState::getJavaSuffixRule() {
	$var($Map, sr, $new($HashMap));
	sr->put(".java"_s, this->compileJavaPackages);
	return sr;
}

void JavacState::taintPackagesThatMissArtifacts() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc($($nc(this->prev$)->packages()))->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Package, pkg, $cast($Package, i$->next()));
			{
				{
					$var($Iterator, i$, $nc($($nc($($nc(pkg)->artifacts()))->values()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($File, f, $cast($File, i$->next()));
						{
							if (!$nc(f)->exists()) {
								$var($String, var$0, pkg->name());
								taintPackage(var$0, $$str({""_s, f, " is missing."_s}));
							}
						}
					}
				}
			}
		}
	}
}

void JavacState::taintPackagesDependingOnChangedPackages($Set* pkgsWithChangedPubApi, $Set* recentlyCompiled) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $$new($HashSet, $($nc($($nc(this->prev$)->packages()))->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Package, pkg, $cast($Package, i$->next()));
			{
				$var($Set, deps, $cast($Set, $nc($($nc($($nc($($nc($($nc(pkg)->typeDependencies()))->values()))->stream()))->flatMap(static_cast<$Function*>($$new(JavacState$$Lambda$stream)))))->collect($($Collectors::toSet()))));
				{
					$var($Iterator, i$, $nc(deps)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, dep, $cast($String, i$->next()));
						{
							$var($String, depPkg, $str({":"_s, $($nc(dep)->substring(0, dep->lastIndexOf((int32_t)u'.')))}));
							if ($nc(depPkg)->equals($(pkg->name()))) {
								continue;
							}
							bool var$0 = $nc(pkgsWithChangedPubApi)->contains(depPkg);
							if (var$0 && !$nc(recentlyCompiled)->contains($(pkg->name()))) {
								taintPackage($(pkg->name()), $$str({"its depending on "_s, depPkg}));
							}
						}
					}
				}
			}
		}
	}
}

void JavacState::taintPackagesDependingOnChangedClasspathPackages() {
	$useLocalCurrentObjectStackCache();
	$var($Set, fqDependencies, $new($HashSet));
	{
		$var($Iterator, i$, $nc($($nc($($nc(this->prev$)->packages()))->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Package, pkg, $cast($Package, i$->next()));
			{
				if ($nc($($nc(pkg)->sources()))->isEmpty()) {
					continue;
				}
				$nc($($nc($($nc(pkg)->typeClasspathDependencies()))->values()))->forEach(static_cast<$Consumer*>($$new(JavacState$$Lambda$addAll$1, static_cast<$Set*>(fqDependencies))));
			}
		}
	}
	$var($PubApiExtractor, pubApiExtractor, $new($PubApiExtractor, this->options));
	$var($Map, onDiskPubApi, $new($HashMap));
	{
		$var($Iterator, i$, fqDependencies->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, cpDep, $cast($String, i$->next()));
			{
				onDiskPubApi->put(cpDep, $(pubApiExtractor->getPubApi(cpDep)));
			}
		}
	}
	pubApiExtractor->close();
	bool nextPkg$continue = false;
	{
		$var($Iterator, i$, $nc($($nc($($nc(this->prev$)->packages()))->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Package, pkg, $cast($Package, i$->next()));
			{
				if ($nc($($nc(pkg)->sources()))->isEmpty()) {
					continue;
				}
				$var($Set, cpDepsOfThisPkg, $new($HashSet));
				{
					$var($Iterator, i$, $nc($($nc($($nc(pkg)->typeClasspathDependencies()))->values()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Set, cpDeps, $cast($Set, i$->next()));
						cpDepsOfThisPkg->addAll(cpDeps);
					}
				}
				{
					$var($Iterator, i$, cpDepsOfThisPkg->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, fqDep, $cast($String, i$->next()));
						{
							$var($String, depPkg, $str({":"_s, $($nc(fqDep)->substring(0, fqDep->lastIndexOf((int32_t)u'.')))}));
							$var($PubApi, prevPkgApi, $nc(($cast($Package, $($nc($($nc(this->prev$)->packages()))->get(depPkg)))))->getPubApi());
							$var($PubApi, prevDepApi, $nc(($cast($PubType, $($nc($nc(prevPkgApi)->types)->get(fqDep)))))->pubApi);
							$var($PubApi, currentDepApi, $nc(($cast($PubType, $($nc($nc(($cast($PubApi, $(onDiskPubApi->get(fqDep)))))->types)->get(fqDep)))))->pubApi);
							if (!$nc(currentDepApi)->isBackwardCompatibleWith(prevDepApi)) {
								$var($List, apiDiff, currentDepApi->diff(prevDepApi));
								$var($String, var$0, pkg->name());
								taintPackage(var$0, $$str({"depends on classpath package which has an updated package api: "_s, $($String::join(static_cast<$CharSequence*>("\n"_s), static_cast<$Iterable*>(apiDiff)))}));
								nextPkg$continue = true;
								break;
							}
						}
					}
					if (nextPkg$continue) {
						nextPkg$continue = false;
						continue;
					}
				}
			}
		}
	}
}

void JavacState::removeUnidentifiedArtifacts() {
	$useLocalCurrentObjectStackCache();
	$var($Set, allKnownArtifacts, $new($HashSet));
	{
		$var($Iterator, i$, $nc($($nc($($nc(this->prev$)->packages()))->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Package, pkg, $cast($Package, i$->next()));
			{
				{
					$var($Iterator, i$, $nc($($nc($($nc(pkg)->artifacts()))->values()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($File, f, $cast($File, i$->next()));
						{
							allKnownArtifacts->add(f);
						}
					}
				}
			}
		}
	}
	allKnownArtifacts->add(this->javacState);
	{
		$var($Iterator, i$, $nc(this->binArtifacts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($File, f, $cast($File, i$->next()));
			{
				bool var$0 = !allKnownArtifacts->contains(f);
				if (var$0 && !$nc(this->options)->isUnidentifiedArtifactPermitted($($nc(f)->getAbsolutePath()))) {
					$Log::debug($$str({"Removing "_s, $($nc(f)->getPath()), " since it is unknown to the javac_state."_s}));
					$nc(f)->delete$();
				}
			}
		}
	}
	{
		$var($Iterator, i$, $nc(this->headerArtifacts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($File, f, $cast($File, i$->next()));
			{
				if (!allKnownArtifacts->contains(f)) {
					$Log::debug($$str({"Removing "_s, $($nc(f)->getPath()), " since it is unknown to the javac_state."_s}));
					$nc(f)->delete$();
				}
			}
		}
	}
	{
		$var($Iterator, i$, $nc(this->gensrcArtifacts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($File, f, $cast($File, i$->next()));
			{
				if (!allKnownArtifacts->contains(f)) {
					$Log::debug($$str({"Removing "_s, $($nc(f)->getPath()), " since it is unknown to the javac_state."_s}));
					$nc(f)->delete$();
				}
			}
		}
	}
}

void JavacState::removeSuperfluousArtifacts($Set* recentlyCompiled) {
	$useLocalCurrentObjectStackCache();
	if ($nc(recentlyCompiled)->size() == 0) {
		return;
	}
	{
		$var($Iterator, i$, $nc($($nc($($nc(this->now$)->packages()))->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, pkg, $cast($String, i$->next()));
			{
				if (!$nc(recentlyCompiled)->contains(pkg)) {
					continue;
				}
				$var($Collection, arts, $nc($($nc(this->now$)->artifacts()))->values());
				{
					$var($Iterator, i$, $nc($($nc($(fetchPrevArtifacts(pkg)))->values()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($File, f, $cast($File, i$->next()));
						{
							if (!$nc(arts)->contains(f)) {
								$Log::debug($$str({"Removing "_s, $($nc(f)->getPath()), " since it is now superfluous!"_s}));
								if ($nc(f)->exists()) {
									f->delete$();
								}
							}
						}
					}
				}
			}
		}
	}
}

$Set* JavacState::calculateRemovedSources() {
	$useLocalCurrentObjectStackCache();
	$var($Set, removed, $new($HashSet));
	{
		$var($Iterator, i$, $nc($($nc($($nc(this->prev$)->sources()))->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, src, $cast($String, i$->next()));
			{
				if ($nc($($nc(this->now$)->sources()))->get(src) == nullptr) {
					removed->add($cast($Source, $($nc($($nc(this->prev$)->sources()))->get(src))));
				}
			}
		}
	}
	return removed;
}

$Set* JavacState::calculateAddedSources() {
	$useLocalCurrentObjectStackCache();
	$var($Set, added, $new($HashSet));
	{
		$var($Iterator, i$, $nc($($nc($($nc(this->now$)->sources()))->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, src, $cast($String, i$->next()));
			{
				if ($nc($($nc(this->prev$)->sources()))->get(src) == nullptr) {
					added->add($cast($Source, $($nc($($nc(this->now$)->sources()))->get(src))));
				}
			}
		}
	}
	return added;
}

$Set* JavacState::calculateModifiedSources() {
	$useLocalCurrentObjectStackCache();
	$var($Set, modified, $new($HashSet));
	{
		$var($Iterator, i$, $nc($($nc($($nc(this->now$)->sources()))->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, src, $cast($String, i$->next()));
			{
				$var($Source, n, $cast($Source, $nc($($nc(this->now$)->sources()))->get(src)));
				$var($Source, t, $cast($Source, $nc($($nc(this->prev$)->sources()))->get(src)));
				if ($nc($($nc(this->prev$)->sources()))->get(src) != nullptr) {
					if (t != nullptr) {
						int64_t var$0 = $nc(n)->lastModified();
						if (var$0 > t->lastModified()) {
							modified->add(n);
						} else {
							int64_t var$2 = n->lastModified();
							if (var$2 < t->lastModified()) {
								modified->add(n);
								$Log::warn($$str({"The source file "_s, $(n->name()), " timestamp has moved backwards in time."_s}));
							}
						}
					}
				}
			}
		}
	}
	return modified;
}

void JavacState::deleteContents($File* dir) {
	$useLocalCurrentObjectStackCache();
	if (dir != nullptr && dir->exists()) {
		{
			$var($FileArray, arr$, dir->listFiles());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($File, f, arr$->get(i$));
				{
					if ($nc(f)->isDirectory()) {
						deleteContents(f);
					}
					if (!$nc(this->options)->isUnidentifiedArtifactPermitted($($nc(f)->getAbsolutePath()))) {
						$Log::debug($$str({"Removing "_s, $($nc(f)->getAbsolutePath())}));
						$nc(f)->delete$();
					}
				}
			}
		}
	}
}

void JavacState::performCopying($File* binDir, $Map* suffixRules) {
	$useLocalCurrentObjectStackCache();
	$var($Map, sr, $new($HashMap));
	{
		$var($Iterator, i$, $nc($($nc(suffixRules)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				$load($CopyFile);
				if ($of($nc($of(($cast($Transformer, $($nc(e)->getValue())))))->getClass())->equals($CopyFile::class$)) {
					$var($Object, var$0, $cast($String, e->getKey()));
					sr->put(var$0, $cast($Transformer, $(e->getValue())));
				}
			}
		}
	}
	perform(nullptr, binDir, sr);
}

void JavacState::performTranslation($File* gensrcDir, $Map* suffixRules) {
	$useLocalCurrentObjectStackCache();
	$var($Map, sr, $new($HashMap));
	{
		$var($Iterator, i$, $nc($($nc(suffixRules)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				$Class* trClass = $nc($of(($cast($Transformer, $($nc(e)->getValue())))))->getClass();
				$load($CompileJavaPackages);
				$load($CopyFile);
				if (trClass == $CompileJavaPackages::class$ || trClass == $CopyFile::class$) {
					continue;
				}
				$var($Object, var$0, $cast($String, e->getKey()));
				sr->put(var$0, $cast($Transformer, $(e->getValue())));
			}
		}
	}
	perform(nullptr, gensrcDir, sr);
}

bool JavacState::performJavaCompilations($CompilationService* sjavac, $Options* args, $Set* recentlyCompiled, $booleans* rcValue) {
	$useLocalCurrentObjectStackCache();
	$var($Map, suffixRules, $new($HashMap));
	suffixRules->put(".java"_s, this->compileJavaPackages);
	$nc(this->compileJavaPackages)->setExtra(args);
	$nc(rcValue)->set(0, perform(sjavac, this->binDir, suffixRules));
	$nc(recentlyCompiled)->addAll($(taintedPackages()));
	clearTaintedPackages();
	bool again = !$nc(this->packagesWithChangedPublicApis)->isEmpty();
	taintPackagesDependingOnChangedPackages(this->packagesWithChangedPublicApis, recentlyCompiled);
	$set(this, packagesWithChangedPublicApis, $new($HashSet));
	return again && rcValue->get(0);
}

void JavacState::addFileToTransform($Map* gs, $Transformer* t, $Source* s) {
	$useLocalCurrentObjectStackCache();
	$var($Map, fs, $cast($Map, $nc(gs)->get(t)));
	if (fs == nullptr) {
		$assign(fs, $new($HashMap));
		gs->put(t, fs);
	}
	$var($Set, ss, $cast($Set, $nc(fs)->get($($nc($($nc(s)->pkg()))->name()))));
	if (ss == nullptr) {
		$assign(ss, $new($HashSet));
		fs->put($($nc($($nc(s)->pkg()))->name()), ss);
	}
	$nc(ss)->add($($nc($($nc(s)->file()))->toURI()));
}

bool JavacState::perform($CompilationService* sjavac, $File* outputDir, $Map* suffixRules) {
	$useLocalCurrentObjectStackCache();
	bool rc = true;
	$var($Map, groupedSources, $new($HashMap));
	{
		$var($Iterator, i$, $nc($($nc($($nc(this->now$)->sources()))->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Source, src, $cast($Source, i$->next()));
			{
				$var($Transformer, t, $cast($Transformer, $nc(suffixRules)->get($($nc(src)->suffix()))));
				if (t != nullptr) {
					bool var$0 = $nc(this->taintedPackages$)->contains($($nc($($nc(src)->pkg()))->name()));
					if (var$0 && !$nc(src)->isLinkedOnly()) {
						addFileToTransform(groupedSources, t, src);
					}
				}
			}
		}
	}
	{
		$var($Iterator, i$, $nc($(groupedSources->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				$var($Transformer, t, $cast($Transformer, $nc(e)->getKey()));
				$var($Map, srcs, $cast($Map, e->getValue()));
				$var($Map, packageArtifacts, $Collections::synchronizedMap($$new($HashMap)));
				$var($Map, packageDependencies, $Collections::synchronizedMap($$new($HashMap)));
				$var($Map, packageCpDependencies, $Collections::synchronizedMap($$new($HashMap)));
				$var($Map, packagePublicApis, $Collections::synchronizedMap($$new($HashMap)));
				$var($Map, dependencyPublicApis, $Collections::synchronizedMap($$new($HashMap)));
				$var($CompilationService, var$1, sjavac);
				$var($Map, var$2, srcs);
				$var($Set, var$3, this->visibleSrcs);
				$var($Map, var$4, $nc(this->prev$)->dependents());
				$var($URI, var$5, $nc(outputDir)->toURI());
				$var($Map, var$6, packageArtifacts);
				$var($Map, var$7, packageDependencies);
				$var($Map, var$8, packageCpDependencies);
				$var($Map, var$9, packagePublicApis);
				$var($Map, var$10, dependencyPublicApis);
				bool r = $nc(t)->transform(var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, 0, isIncremental(), this->numCores);
				if (!r) {
					rc = false;
				}
				{
					$var($Iterator, i$, $nc($($nc(srcs)->keySet()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, p, $cast($String, i$->next()));
						{
							$nc(this->recompiledPackages)->add(p);
						}
					}
				}
				{
					$var($Iterator, i$, $nc($($nc(packageArtifacts)->entrySet()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Map$Entry, a, $cast($Map$Entry, i$->next()));
						{
							$var($Module, mnow, $nc(this->now$)->findModuleFromPackageName($cast($String, $($nc(a)->getKey()))));
							$var($String, var$11, $cast($String, $nc(a)->getKey()));
							$nc(mnow)->addArtifacts(var$11, $cast($Set, $(a->getValue())));
						}
					}
				}
				{
					$var($Iterator, i$, $nc($($nc(packageDependencies)->entrySet()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Map$Entry, a, $cast($Map$Entry, i$->next()));
						{
							$var($Map, deps, $cast($Map, $nc(a)->getValue()));
							$var($Module, mnow, $nc(this->now$)->findModuleFromPackageName($cast($String, $(a->getKey()))));
							$nc(mnow)->setDependencies($cast($String, $(a->getKey())), deps, false);
						}
					}
				}
				{
					$var($Iterator, i$, $nc($($nc(packageCpDependencies)->entrySet()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Map$Entry, a, $cast($Map$Entry, i$->next()));
						{
							$var($Map, deps, $cast($Map, $nc(a)->getValue()));
							$var($Module, mnow, $nc(this->now$)->findModuleFromPackageName($cast($String, $(a->getKey()))));
							$nc(mnow)->setDependencies($cast($String, $(a->getKey())), deps, true);
						}
					}
				}
				{
					$var($Iterator, i$, $nc($($nc(dependencyPublicApis)->entrySet()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Map$Entry, a, $cast($Map$Entry, i$->next()));
						{
							$var($String, pkg, $cast($String, $nc(a)->getKey()));
							$var($PubApi, packagePartialPubApi, $cast($PubApi, a->getValue()));
							$var($Package, pkgNow, $nc($($nc(this->now$)->findModuleFromPackageName(pkg)))->lookupPackage(pkg));
							$var($PubApi, currentPubApi, $nc(pkgNow)->getPubApi());
							$var($PubApi, newPubApi, $PubApi::mergeTypes(currentPubApi, packagePartialPubApi));
							pkgNow->setPubapi(newPubApi);
							if ($nc($($nc(this->now$)->packages()))->containsKey(pkg)) {
								$nc(($cast($Package, $($nc($($nc(this->now$)->packages()))->get(pkg)))))->setPubapi(newPubApi);
							} else {
								$nc($($nc(this->now$)->packages()))->put(pkg, pkgNow);
							}
						}
					}
				}
				{
					$var($Iterator, i$, $nc($($nc(packagePublicApis)->entrySet()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Map$Entry, a, $cast($Map$Entry, i$->next()));
						{
							$var($String, pkg, $cast($String, $nc(a)->getKey()));
							$var($PubApi, newPubApi, $cast($PubApi, a->getValue()));
							$var($Module, mprev, $nc(this->prev$)->findModuleFromPackageName(pkg));
							$var($Module, mnow, $nc(this->now$)->findModuleFromPackageName(pkg));
							$nc(mnow)->setPubapi(pkg, newPubApi);
							if ($nc(mprev)->hasPubapiChanged(pkg, newPubApi)) {
								if ($nc($(mprev->lookupPackage(pkg)))->existsInJavacState()) {
									$nc(this->packagesWithChangedPublicApis)->add(pkg);
									$Log::debug($$str({"The API of "_s, $($Util::justPackageName(pkg)), " has changed!"_s}));
								}
							}
						}
					}
				}
			}
		}
	}
	return rc;
}

$Set* JavacState::findAllFiles($File* dir) {
	$var($Set, foundFiles, $new($HashSet));
	if (dir == nullptr) {
		return foundFiles;
	}
	recurse(dir, foundFiles);
	return foundFiles;
}

void JavacState::recurse($File* dir, $Set* foundFiles) {
	$useLocalCurrentObjectStackCache();
	{
		$var($FileArray, arr$, $nc(dir)->listFiles());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($File, f, arr$->get(i$));
			{
				if ($nc(f)->isFile()) {
					$nc(foundFiles)->add(f);
				} else if (f->isDirectory()) {
					recurse(f, foundFiles);
				}
			}
		}
	}
}

void JavacState::compareWithMakefileList($File* makefileSourceList) {
	$useLocalCurrentObjectStackCache();
	$init($File);
	bool mightNeedRewriting = $File::pathSeparatorChar == u';';
	if (makefileSourceList == nullptr) {
		return;
	}
	$var($Set, calculatedSources, $new($HashSet));
	$var($Set, listedSources, $new($HashSet));
	{
		$var($Iterator, i$, $nc($($nc($($nc(this->now$)->sources()))->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Source, s, $cast($Source, i$->next()));
			{
				if (!$nc(s)->isLinkedOnly()) {
					$var($String, path, $nc($(s->file()))->getPath());
					if (mightNeedRewriting) {
						$assign(path, $Util::normalizeDriveLetter(path));
					}
					calculatedSources->add(path);
				}
			}
		}
	}
	try {
		$var($BufferedReader, in, $new($BufferedReader, $$new($FileReader, makefileSourceList)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					for (;;) {
						$var($String, l, in->readLine());
						if (l == nullptr) {
							break;
						}
						$assign(l, $nc(l)->trim());
						if (mightNeedRewriting) {
							bool var$1 = l->indexOf(":"_s) == 1;
							if (var$1 && l->indexOf("\\"_s) == 2) {
							} else {
								bool var$3 = l->indexOf(":"_s) == 1;
								if (var$3 && l->indexOf("/"_s) == 2) {
									$assign(l, l->replaceAll("/"_s, "\\\\"_s));
								} else {
									bool var$5 = l->charAt(0) == u'/';
									if (var$5 && l->indexOf("/"_s, 1) != -1) {
										int32_t slash = l->indexOf("/"_s, 1);
										$assign(l, l->replaceAll("/"_s, "\\\\"_s));
										$var($String, var$6, $$str({""_s, $$str(l->charAt(slash + 1)), ":"_s}));
										$assign(l, $concat(var$6, $(l->substring(slash + 2))));
									}
								}
							}
							if ($Character::isLowerCase(l->charAt(0))) {
								$var($String, var$7, $str($Character::toUpperCase(l->charAt(0))));
								$assign(l, $concat(var$7, $(l->substring(1))));
							}
						}
						listedSources->add(l);
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
			} /*finally*/ {
				in->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($FileNotFoundException& e) {
		$throwNew($ProblemException, $$str({"Could not open "_s, $($nc(makefileSourceList)->getPath()), " since it does not exist!"_s}));
	} catch ($NoSuchFileException& e) {
		$throwNew($ProblemException, $$str({"Could not open "_s, $($nc(makefileSourceList)->getPath()), " since it does not exist!"_s}));
	} catch ($IOException& e) {
		$throwNew($ProblemException, $$str({"Could not read "_s, $($nc(makefileSourceList)->getPath())}));
	}
	{
		$var($Iterator, i$, listedSources->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, s, $cast($String, i$->next()));
			{
				if (!calculatedSources->contains(s)) {
					$throwNew($ProblemException, $$str({"The makefile listed source "_s, s, " was not calculated by the smart javac wrapper!"_s}));
				}
			}
		}
	}
	{
		$var($Iterator, i$, calculatedSources->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, s, $cast($String, i$->next()));
			{
				if (!listedSources->contains(s)) {
					$throwNew($ProblemException, $$str({"The smart javac wrapper calculated source "_s, s, " was not listed by the makefiles!"_s}));
				}
			}
		}
	}
}

JavacState::JavacState() {
}

$Class* JavacState::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavacState$$Lambda$stream::classInfo$.name)) {
			return JavacState$$Lambda$stream::load$(name, initialize);
		}
		if (name->equals(JavacState$$Lambda$addAll$1::classInfo$.name)) {
			return JavacState$$Lambda$addAll$1::load$(name, initialize);
		}
	}
	$loadClass(JavacState, name, initialize, &_JavacState_ClassInfo_, allocate$JavacState);
	return class$;
}

$Class* JavacState::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com