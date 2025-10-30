#include <com/sun/tools/sjavac/options/SourceLocation.h>

#include <com/sun/tools/sjavac/Module.h>
#include <com/sun/tools/sjavac/ProblemException.h>
#include <com/sun/tools/sjavac/Source.h>
#include <java/io/File.h>
#include <java/nio/file/Path.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Module = ::com::sun::tools::sjavac::Module;
using $ProblemException = ::com::sun::tools::sjavac::ProblemException;
using $Source = ::com::sun::tools::sjavac::Source;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

$FieldInfo _SourceLocation_FieldInfo_[] = {
	{"path", "Ljava/nio/file/Path;", nullptr, $PRIVATE, $field(SourceLocation, path)},
	{"includes", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(SourceLocation, includes)},
	{"excludes", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(SourceLocation, excludes)},
	{}
};

$MethodInfo _SourceLocation_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/Path;Ljava/util/List;Ljava/util/List;)V", "(Ljava/nio/file/Path;Ljava/util/List<Ljava/lang/String;>;Ljava/util/List<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(SourceLocation::*)($Path*,$List*,$List*)>(&SourceLocation::init$))},
	{"findSourceFiles", "(Ljava/util/Set;Ljava/util/Map;Ljava/util/Map;Lcom/sun/tools/sjavac/Module;ZZ)V", "(Ljava/util/Set<Ljava/lang/String;>;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Source;>;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Module;>;Lcom/sun/tools/sjavac/Module;ZZ)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"getExcludes", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"getIncludes", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"getPath", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SourceLocation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.options.SourceLocation",
	"java.lang.Object",
	nullptr,
	_SourceLocation_FieldInfo_,
	_SourceLocation_MethodInfo_
};

$Object* allocate$SourceLocation($Class* clazz) {
	return $of($alloc(SourceLocation));
}

void SourceLocation::init$($Path* path, $List* includes, $List* excludes) {
	$set(this, path, path);
	$set(this, includes, includes);
	$set(this, excludes, excludes);
}

void SourceLocation::findSourceFiles($Set* suffixes, $Map* foundFiles, $Map* foundModules, $Module* currentModule, bool permitSourcesInDefaultPackage, bool inLinksrc) {
	try {
		$Source::scanRoot($($nc(this->path)->toFile()), suffixes, this->excludes, this->includes, foundFiles, foundModules, currentModule, permitSourcesInDefaultPackage, false, inLinksrc);
	} catch ($ProblemException& e) {
		e->printStackTrace();
	}
}

$Path* SourceLocation::getPath() {
	return this->path;
}

$List* SourceLocation::getIncludes() {
	return this->includes;
}

$List* SourceLocation::getExcludes() {
	return this->excludes;
}

$String* SourceLocation::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("%s[\"%s\", includes: %s, excludes: %s]"_s, $$new($ObjectArray, {
		$($of($of(this)->getClass()->getSimpleName())),
		$of(this->path),
		$of(this->includes),
		$of(this->excludes)
	}));
}

SourceLocation::SourceLocation() {
}

$Class* SourceLocation::load$($String* name, bool initialize) {
	$loadClass(SourceLocation, name, initialize, &_SourceLocation_ClassInfo_, allocate$SourceLocation);
	return class$;
}

$Class* SourceLocation::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com