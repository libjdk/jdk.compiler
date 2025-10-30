#include <com/sun/tools/sjavac/options/Options.h>

#include <com/sun/tools/sjavac/Transformer.h>
#include <com/sun/tools/sjavac/options/Option.h>
#include <com/sun/tools/sjavac/options/Options$1StateArgs.h>
#include <com/sun/tools/sjavac/options/Options$ArgDecoderOptionHelper.h>
#include <com/sun/tools/sjavac/options/SourceLocation.h>
#include <java/io/File.h>
#include <java/lang/CharSequence.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/StringJoiner.h>
#include <jcpp.h>

#undef CLASS_PATH
#undef D
#undef H
#undef MODULE_PATH
#undef PERMIT_ARTIFACT
#undef PERMIT_SOURCES_WITHOUT_PACKAGE
#undef PERMIT_UNIDENTIFIED_ARTIFACTS
#undef S
#undef SOURCE_PATH
#undef SRC
#undef STATE_DIR
#undef TR

using $Transformer = ::com::sun::tools::sjavac::Transformer;
using $Option = ::com::sun::tools::sjavac::options::Option;
using $OptionHelper = ::com::sun::tools::sjavac::options::OptionHelper;
using $Options$1StateArgs = ::com::sun::tools::sjavac::options::Options$1StateArgs;
using $Options$ArgDecoderOptionHelper = ::com::sun::tools::sjavac::options::Options$ArgDecoderOptionHelper;
using $SourceLocation = ::com::sun::tools::sjavac::options::SourceLocation;
using $File = ::java::io::File;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $StringJoiner = ::java::util::StringJoiner;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

$FieldInfo _Options_FieldInfo_[] = {
	{"destDir", "Ljava/nio/file/Path;", nullptr, $PRIVATE, $field(Options, destDir)},
	{"genSrcDir", "Ljava/nio/file/Path;", nullptr, $PRIVATE, $field(Options, genSrcDir)},
	{"headerDir", "Ljava/nio/file/Path;", nullptr, $PRIVATE, $field(Options, headerDir)},
	{"stateDir", "Ljava/nio/file/Path;", nullptr, $PRIVATE, $field(Options, stateDir)},
	{"sources", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/sjavac/options/SourceLocation;>;", $PRIVATE, $field(Options, sources)},
	{"sourceSearchPaths", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/sjavac/options/SourceLocation;>;", $PRIVATE, $field(Options, sourceSearchPaths)},
	{"classSearchPaths", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/sjavac/options/SourceLocation;>;", $PRIVATE, $field(Options, classSearchPaths)},
	{"moduleSearchPaths", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/sjavac/options/SourceLocation;>;", $PRIVATE, $field(Options, moduleSearchPaths)},
	{"logLevel", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Options, logLevel)},
	{"permitted_artifacts", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(Options, permitted_artifacts)},
	{"permitUnidentifiedArtifacts", "Z", nullptr, $PRIVATE, $field(Options, permitUnidentifiedArtifacts)},
	{"permitSourcesInDefaultPackage", "Z", nullptr, $PRIVATE, $field(Options, permitSourcesInDefaultPackage)},
	{"sourceReferenceList", "Ljava/nio/file/Path;", nullptr, $PRIVATE, $field(Options, sourceReferenceList)},
	{"numCores", "I", nullptr, $PRIVATE, $field(Options, numCores)},
	{"implicitPolicy", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Options, implicitPolicy)},
	{"javacArgs", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(Options, javacArgs)},
	{"trRules", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Transformer;>;", $PRIVATE, $field(Options, trRules)},
	{"startServer", "Z", nullptr, $PRIVATE, $field(Options, startServer)},
	{"serverConf", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Options, serverConf)},
	{}
};

$MethodInfo _Options_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Options::*)()>(&Options::init$))},
	{"areUnidentifiedArtifactsPermitted", "()Z", nullptr, $PUBLIC},
	{"concatenateSourceLocations", "(Ljava/util/List;)Ljava/lang/String;", "(Ljava/util/List<Lcom/sun/tools/sjavac/options/SourceLocation;>;)Ljava/lang/String;", $PRIVATE | $STATIC, $method(static_cast<$String*(*)($List*)>(&Options::concatenateSourceLocations))},
	{"getClassSearchPath", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/tools/sjavac/options/SourceLocation;>;", $PUBLIC},
	{"getDestDir", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"getGenSrcDir", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"getHeaderDir", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"getImplicitPolicy", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getJavacArgs", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"getLogLevel", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getModuleSearchPaths", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/tools/sjavac/options/SourceLocation;>;", $PUBLIC},
	{"getNumCores", "()I", nullptr, $PUBLIC},
	{"getServerConf", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSourceReferenceList", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"getSourceSearchPaths", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/tools/sjavac/options/SourceLocation;>;", $PUBLIC},
	{"getSources", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/tools/sjavac/options/SourceLocation;>;", $PUBLIC},
	{"getStateArgsString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getStateDir", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"getTranslationRules", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Transformer;>;", $PUBLIC},
	{"isDefaultPackagePermitted", "()Z", nullptr, $PUBLIC},
	{"isJavaFilesAmongJavacArgs", "()Z", nullptr, $PUBLIC},
	{"isUnidentifiedArtifactPermitted", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"parseArgs", "([Ljava/lang/String;)Lcom/sun/tools/sjavac/options/Options;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<Options*(*)($StringArray*)>(&Options::parseArgs))},
	{"prepJavacArgs", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"startServerFlag", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Options_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Options$ArgDecoderOptionHelper", "com.sun.tools.sjavac.options.Options", "ArgDecoderOptionHelper", $PRIVATE},
	{"com.sun.tools.sjavac.options.Options$1StateArgs", nullptr, "StateArgs", 0},
	{}
};

$ClassInfo _Options_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.options.Options",
	"java.lang.Object",
	nullptr,
	_Options_FieldInfo_,
	_Options_MethodInfo_,
	nullptr,
	nullptr,
	_Options_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Options$ArgDecoderOptionHelper,com.sun.tools.sjavac.options.Options$1StateArgs"
};

$Object* allocate$Options($Class* clazz) {
	return $of($alloc(Options));
}

void Options::init$() {
	$set(this, sources, $new($ArrayList));
	$set(this, sourceSearchPaths, $new($ArrayList));
	$set(this, classSearchPaths, $new($ArrayList));
	$set(this, moduleSearchPaths, $new($ArrayList));
	$set(this, logLevel, "info"_s);
	$set(this, permitted_artifacts, $new($HashSet));
	this->permitUnidentifiedArtifacts = false;
	this->permitSourcesInDefaultPackage = false;
	this->numCores = 4;
	$set(this, implicitPolicy, "none"_s);
	$set(this, javacArgs, $new($ArrayList));
	$set(this, trRules, $new($HashMap));
	this->startServer = false;
}

$String* Options::getImplicitPolicy() {
	return this->implicitPolicy;
}

$Path* Options::getGenSrcDir() {
	return this->genSrcDir;
}

$Path* Options::getDestDir() {
	return this->destDir;
}

$Path* Options::getHeaderDir() {
	return this->headerDir;
}

$Path* Options::getStateDir() {
	return this->stateDir;
}

$List* Options::getSources() {
	return this->sources;
}

$List* Options::getSourceSearchPaths() {
	return this->sourceSearchPaths;
}

$List* Options::getClassSearchPath() {
	return this->classSearchPaths;
}

$List* Options::getModuleSearchPaths() {
	return this->moduleSearchPaths;
}

$String* Options::getLogLevel() {
	return this->logLevel;
}

bool Options::isUnidentifiedArtifactPermitted($String* f) {
	return $nc(this->permitted_artifacts)->contains(f);
}

bool Options::areUnidentifiedArtifactsPermitted() {
	return this->permitUnidentifiedArtifacts;
}

bool Options::isDefaultPackagePermitted() {
	return this->permitSourcesInDefaultPackage;
}

$Path* Options::getSourceReferenceList() {
	return this->sourceReferenceList;
}

int32_t Options::getNumCores() {
	return this->numCores;
}

$List* Options::getJavacArgs() {
	return this->javacArgs;
}

$Map* Options::getTranslationRules() {
	return this->trRules;
}

bool Options::startServerFlag() {
	return this->startServer;
}

$String* Options::getServerConf() {
	return this->serverConf;
}

Options* Options::parseArgs($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var(Options, options, $new(Options));
	$$new($Options$ArgDecoderOptionHelper, static_cast<Options*>(options))->traverse(args);
	return options;
}

bool Options::isJavaFilesAmongJavacArgs() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->javacArgs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, javacArg, $cast($String, i$->next()));
			if ($nc(javacArg)->endsWith(".java"_s)) {
				return true;
			}
		}
	}
	return false;
}

$String* Options::getStateArgsString() {
	$useLocalCurrentObjectStackCache();
	{
	}
	$var($Options$1StateArgs, args, $new($Options$1StateArgs, this));
	if (this->genSrcDir != nullptr) {
		$init($Option);
		args->addArg($Option::S, $($nc(this->genSrcDir)->normalize()));
	}
	if (this->headerDir != nullptr) {
		$init($Option);
		args->addArg($Option::H, $($nc(this->headerDir)->normalize()));
	}
	if (this->destDir != nullptr) {
		$init($Option);
		args->addArg($Option::D, $($nc(this->destDir)->normalize()));
	}
	if (this->stateDir != nullptr) {
		$init($Option);
		args->addArg($Option::STATE_DIR, $($nc(this->stateDir)->normalize()));
	}
	$init($Option);
	args->addSourceLocations($Option::SRC, this->sources);
	args->addSourceLocations($Option::SOURCE_PATH, this->sourceSearchPaths);
	args->addSourceLocations($Option::CLASS_PATH, this->classSearchPaths);
	args->addSourceLocations($Option::MODULE_PATH, this->moduleSearchPaths);
	if (this->permitSourcesInDefaultPackage) {
		args->addArg($Option::PERMIT_SOURCES_WITHOUT_PACKAGE);
	}
	{
		$var($Iterator, i$, $nc(this->permitted_artifacts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, f, $cast($String, i$->next()));
			{
				args->addArg($Option::PERMIT_ARTIFACT, f);
			}
		}
	}
	if (this->permitUnidentifiedArtifacts) {
		args->addArg($Option::PERMIT_UNIDENTIFIED_ARTIFACTS);
	}
	{
		$var($Iterator, i$, $nc($($nc(this->trRules)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, tr, $cast($Map$Entry, i$->next()));
			{
				$var($String, var$0, $$str({$cast($String, $($nc(tr)->getKey())), "="_s}));
				$var($String, val, $concat(var$0, $($nc($of(($cast($Transformer, $(tr->getValue())))))->getClass()->getName())));
				args->addArg($Option::TR, val);
			}
		}
	}
	args->addAll(this->javacArgs);
	return args->getResult();
}

$StringArray* Options::prepJavacArgs() {
	$useLocalCurrentObjectStackCache();
	$var($List, args, $new($ArrayList));
	args->add("-d"_s);
	args->add($($nc(this->destDir)->toString()));
	if (getGenSrcDir() != nullptr) {
		args->add("-s"_s);
		args->add($($nc(this->genSrcDir)->toString()));
	}
	if (this->headerDir != nullptr) {
		args->add("-h"_s);
		args->add($($nc(this->headerDir)->toString()));
	}
	$var($List, sourcepath, $new($ArrayList));
	sourcepath->addAll(this->sources);
	sourcepath->addAll(this->sourceSearchPaths);
	if (sourcepath->size() > 0) {
		args->add("-sourcepath"_s);
		args->add($(concatenateSourceLocations(sourcepath)));
	}
	if ($nc(this->classSearchPaths)->size() > 0) {
		args->add("-classpath"_s);
		args->add($(concatenateSourceLocations(this->classSearchPaths)));
	}
	args->add("--debug=completionDeps=source,class"_s);
	args->add($$str({"-implicit:"_s, this->implicitPolicy}));
	args->addAll(this->javacArgs);
	return $fcast($StringArray, args->toArray($$new($StringArray, args->size())));
}

$String* Options::concatenateSourceLocations($List* locs) {
	$useLocalCurrentObjectStackCache();
	$init($File);
	$var($StringJoiner, joiner, $new($StringJoiner, $File::pathSeparator));
	{
		$var($Iterator, i$, $nc(locs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SourceLocation, loc, $cast($SourceLocation, i$->next()));
			{
				joiner->add($($nc($($nc(loc)->getPath()))->toString()));
			}
		}
	}
	return joiner->toString();
}

Options::Options() {
}

$Class* Options::load$($String* name, bool initialize) {
	$loadClass(Options, name, initialize, &_Options_ClassInfo_, allocate$Options);
	return class$;
}

$Class* Options::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com