#include <com/sun/tools/javac/file/Locations$LocationHandler.h>

#include <com/sun/tools/javac/file/Locations.h>
#include <com/sun/tools/javac/main/Option.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/Path.h>
#include <java/util/Collection.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <jcpp.h>

using $Locations = ::com::sun::tools::javac::file::Locations;
using $Option = ::com::sun::tools::javac::main::Option;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Collection = ::java::util::Collection;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$MethodInfo _Locations$LocationHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Locations$LocationHandler::*)()>(&Locations$LocationHandler::init$))},
	{"contains", "(Ljava/nio/file/Path;)Z", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"getLocationForModule", "(Ljava/lang/String;)Ljavax/tools/JavaFileManager$Location;", nullptr, 0, nullptr, "java.io.IOException"},
	{"getLocationForModule", "(Ljava/nio/file/Path;)Ljavax/tools/JavaFileManager$Location;", nullptr, 0, nullptr, "java.io.IOException"},
	{"getPaths", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/nio/file/Path;>;", $ABSTRACT},
	{"handleOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, $ABSTRACT},
	{"inferModuleName", "()Ljava/lang/String;", nullptr, 0},
	{"isExplicit", "()Z", nullptr, $ABSTRACT},
	{"isSet", "()Z", nullptr, 0},
	{"listLocationsForModules", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;>;", 0, nullptr, "java.io.IOException"},
	{"setPaths", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", $ABSTRACT, nullptr, "java.io.IOException"},
	{"setPathsForModule", "(Ljava/lang/String;Ljava/lang/Iterable;)V", "(Ljava/lang/String;Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Locations$LocationHandler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.Locations$LocationHandler", "com.sun.tools.javac.file.Locations", "LocationHandler", $PROTECTED | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Locations$LocationHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.file.Locations$LocationHandler",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Locations$LocationHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Locations$LocationHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.Locations"
};

$Object* allocate$Locations$LocationHandler($Class* clazz) {
	return $of($alloc(Locations$LocationHandler));
}

void Locations$LocationHandler::init$() {
}

bool Locations$LocationHandler::isSet() {
	return (getPaths() != nullptr);
}

$JavaFileManager$Location* Locations$LocationHandler::getLocationForModule($String* moduleName) {
	return nullptr;
}

$JavaFileManager$Location* Locations$LocationHandler::getLocationForModule($Path* file) {
	return nullptr;
}

$String* Locations$LocationHandler::inferModuleName() {
	return nullptr;
}

$Iterable* Locations$LocationHandler::listLocationsForModules() {
	return nullptr;
}

Locations$LocationHandler::Locations$LocationHandler() {
}

$Class* Locations$LocationHandler::load$($String* name, bool initialize) {
	$loadClass(Locations$LocationHandler, name, initialize, &_Locations$LocationHandler_ClassInfo_, allocate$Locations$LocationHandler);
	return class$;
}

$Class* Locations$LocationHandler::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com