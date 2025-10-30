#include <com/sun/tools/sjavac/options/Options$ArgDecoderOptionHelper.h>

#include <com/sun/tools/sjavac/Transformer.h>
#include <com/sun/tools/sjavac/Util.h>
#include <com/sun/tools/sjavac/options/OptionHelper.h>
#include <com/sun/tools/sjavac/options/Options.h>
#include <com/sun/tools/sjavac/options/SourceLocation.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Transformer = ::com::sun::tools::sjavac::Transformer;
using $Util = ::com::sun::tools::sjavac::Util;
using $OptionHelper = ::com::sun::tools::sjavac::options::OptionHelper;
using $Options = ::com::sun::tools::sjavac::options::Options;
using $SourceLocation = ::com::sun::tools::sjavac::options::SourceLocation;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

$FieldInfo _Options$ArgDecoderOptionHelper_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/sjavac/options/Options;", nullptr, $FINAL | $SYNTHETIC, $field(Options$ArgDecoderOptionHelper, this$0)},
	{"includes", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(Options$ArgDecoderOptionHelper, includes)},
	{"excludes", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(Options$ArgDecoderOptionHelper, excludes)},
	{"includeFiles", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(Options$ArgDecoderOptionHelper, includeFiles)},
	{"excludeFiles", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(Options$ArgDecoderOptionHelper, excludeFiles)},
	{"headerProvided", "Z", nullptr, 0, $field(Options$ArgDecoderOptionHelper, headerProvided)},
	{"genSrcProvided", "Z", nullptr, 0, $field(Options$ArgDecoderOptionHelper, genSrcProvided)},
	{"stateProvided", "Z", nullptr, 0, $field(Options$ArgDecoderOptionHelper, stateProvided)},
	{}
};

$MethodInfo _Options$ArgDecoderOptionHelper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/sjavac/options/Options;)V", nullptr, $PRIVATE, $method(static_cast<void(Options$ArgDecoderOptionHelper::*)($Options*)>(&Options$ArgDecoderOptionHelper::init$))},
	{"addTransformer", "(Ljava/lang/String;Lcom/sun/tools/sjavac/Transformer;)V", nullptr, $PUBLIC},
	{"classpath", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/file/Path;>;)V", $PUBLIC},
	{"compareFoundSources", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC},
	{"createSourceLocations", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<Ljava/nio/file/Path;>;)Ljava/util/List<Lcom/sun/tools/sjavac/options/SourceLocation;>;", $PRIVATE, $method(static_cast<$List*(Options$ArgDecoderOptionHelper::*)($List*)>(&Options$ArgDecoderOptionHelper::createSourceLocations))},
	{"destDir", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC},
	{"exclude", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"generatedSourcesDir", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC},
	{"headerDir", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC},
	{"implicit", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"include", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"javacArg", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"logLevel", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"modulepath", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/file/Path;>;)V", $PUBLIC},
	{"numCores", "(I)V", nullptr, $PUBLIC},
	{"permitArtifact", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"permitDefaultPackage", "()V", nullptr, $PUBLIC},
	{"permitUnidentifiedArtifacts", "()V", nullptr, $PUBLIC},
	{"reportError", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"resetFilters", "()V", nullptr, $PRIVATE, $method(static_cast<void(Options$ArgDecoderOptionHelper::*)()>(&Options$ArgDecoderOptionHelper::resetFilters))},
	{"serverConf", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"sourceRoots", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/file/Path;>;)V", $PUBLIC},
	{"sourcepath", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/file/Path;>;)V", $PUBLIC},
	{"startServerConf", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"stateDir", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Options$ArgDecoderOptionHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Options$ArgDecoderOptionHelper", "com.sun.tools.sjavac.options.Options", "ArgDecoderOptionHelper", $PRIVATE},
	{}
};

$ClassInfo _Options$ArgDecoderOptionHelper_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.sjavac.options.Options$ArgDecoderOptionHelper",
	"com.sun.tools.sjavac.options.OptionHelper",
	nullptr,
	_Options$ArgDecoderOptionHelper_FieldInfo_,
	_Options$ArgDecoderOptionHelper_MethodInfo_,
	nullptr,
	nullptr,
	_Options$ArgDecoderOptionHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Options"
};

$Object* allocate$Options$ArgDecoderOptionHelper($Class* clazz) {
	return $of($alloc(Options$ArgDecoderOptionHelper));
}

void Options$ArgDecoderOptionHelper::init$($Options* this$0) {
	$set(this, this$0, this$0);
	$OptionHelper::init$();
	{
		resetFilters();
	}
	this->headerProvided = false;
	this->genSrcProvided = false;
	this->stateProvided = false;
}

void Options$ArgDecoderOptionHelper::reportError($String* msg) {
	$throwNew($IllegalArgumentException, msg);
}

void Options$ArgDecoderOptionHelper::sourceRoots($List* paths) {
	$nc(this->this$0->sources)->addAll($(createSourceLocations(paths)));
}

void Options$ArgDecoderOptionHelper::exclude($String* exclPattern$renamed) {
	$var($String, exclPattern, exclPattern$renamed);
	$assign(exclPattern, $Util::normalizeDriveLetter(exclPattern));
	$nc(this->excludes)->add(exclPattern);
}

void Options$ArgDecoderOptionHelper::include($String* inclPattern$renamed) {
	$var($String, inclPattern, inclPattern$renamed);
	$assign(inclPattern, $Util::normalizeDriveLetter(inclPattern));
	$nc(this->includes)->add(inclPattern);
}

void Options$ArgDecoderOptionHelper::addTransformer($String* suffix, $Transformer* tr) {
	if ($nc(this->this$0->trRules)->containsKey(suffix)) {
		reportError($$str({"More than one transformer specified for suffix "_s, suffix, "."_s}));
		return;
	}
	$nc(this->this$0->trRules)->put(suffix, tr);
}

void Options$ArgDecoderOptionHelper::sourcepath($List* paths) {
	$nc(this->this$0->sourceSearchPaths)->addAll($(createSourceLocations(paths)));
}

void Options$ArgDecoderOptionHelper::modulepath($List* paths) {
	$nc(this->this$0->moduleSearchPaths)->addAll($(createSourceLocations(paths)));
}

void Options$ArgDecoderOptionHelper::classpath($List* paths) {
	$nc(this->this$0->classSearchPaths)->addAll($(createSourceLocations(paths)));
}

void Options$ArgDecoderOptionHelper::numCores(int32_t n) {
	this->this$0->numCores = n;
}

void Options$ArgDecoderOptionHelper::logLevel($String* level) {
	$set(this->this$0, logLevel, level);
}

void Options$ArgDecoderOptionHelper::compareFoundSources($Path* referenceList) {
	$set(this->this$0, sourceReferenceList, referenceList);
}

void Options$ArgDecoderOptionHelper::permitArtifact($String* f) {
	$nc(this->this$0->permitted_artifacts)->add(f);
}

void Options$ArgDecoderOptionHelper::permitUnidentifiedArtifacts() {
	this->this$0->permitUnidentifiedArtifacts = true;
}

void Options$ArgDecoderOptionHelper::permitDefaultPackage() {
	this->this$0->permitSourcesInDefaultPackage = true;
}

void Options$ArgDecoderOptionHelper::serverConf($String* conf) {
	if (this->this$0->serverConf != nullptr) {
		reportError("Can not specify more than one server configuration."_s);
	} else {
		$set(this->this$0, serverConf, conf);
	}
}

void Options$ArgDecoderOptionHelper::implicit($String* policy) {
	$set(this->this$0, implicitPolicy, policy);
}

void Options$ArgDecoderOptionHelper::startServerConf($String* conf) {
	if (this->this$0->serverConf != nullptr) {
		reportError("Can not specify more than one server configuration."_s);
	} else {
		this->this$0->startServer = true;
		$set(this->this$0, serverConf, conf);
	}
}

void Options$ArgDecoderOptionHelper::javacArg($StringArray* arg) {
	$nc(this->this$0->javacArgs)->addAll($($Arrays::asList(arg)));
}

void Options$ArgDecoderOptionHelper::destDir($Path* dir) {
	if (this->this$0->destDir != nullptr) {
		reportError("Destination directory already specified."_s);
		return;
	}
	$set(this->this$0, destDir, $nc(dir)->toAbsolutePath());
}

void Options$ArgDecoderOptionHelper::generatedSourcesDir($Path* dir) {
	if (this->genSrcProvided) {
		reportError("Directory for generated sources already specified."_s);
		return;
	}
	this->genSrcProvided = true;
	$set(this->this$0, genSrcDir, $nc(dir)->toAbsolutePath());
}

void Options$ArgDecoderOptionHelper::headerDir($Path* dir) {
	if (this->headerProvided) {
		reportError("Header directory already specified."_s);
		return;
	}
	this->headerProvided = true;
	$set(this->this$0, headerDir, $nc(dir)->toAbsolutePath());
}

void Options$ArgDecoderOptionHelper::stateDir($Path* dir) {
	if (this->stateProvided) {
		reportError("State directory already specified."_s);
		return;
	}
	this->stateProvided = true;
	$set(this->this$0, stateDir, $nc(dir)->toAbsolutePath());
}

$List* Options$ArgDecoderOptionHelper::createSourceLocations($List* paths) {
	$useLocalCurrentObjectStackCache();
	$var($List, result, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(paths)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Path, path, $cast($Path, i$->next()));
			{
				result->add($$new($SourceLocation, path, this->includes, this->excludes));
			}
		}
	}
	resetFilters();
	return result;
}

void Options$ArgDecoderOptionHelper::resetFilters() {
	$set(this, includes, $new($ArrayList));
	$set(this, excludes, $new($ArrayList));
	$set(this, includeFiles, $new($ArrayList));
	$set(this, excludeFiles, $new($ArrayList));
}

Options$ArgDecoderOptionHelper::Options$ArgDecoderOptionHelper() {
}

$Class* Options$ArgDecoderOptionHelper::load$($String* name, bool initialize) {
	$loadClass(Options$ArgDecoderOptionHelper, name, initialize, &_Options$ArgDecoderOptionHelper_ClassInfo_, allocate$Options$ArgDecoderOptionHelper);
	return class$;
}

$Class* Options$ArgDecoderOptionHelper::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com