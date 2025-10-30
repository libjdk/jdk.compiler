#include <com/sun/tools/javac/api/ClientCodeWrapper$WrappedStandardJavaFileManager.h>

#include <com/sun/tools/javac/api/ClientCodeWrapper$WrappedJavaFileManager.h>
#include <com/sun/tools/javac/api/ClientCodeWrapper.h>
#include <com/sun/tools/javac/util/ClientCodeException.h>
#include <java/io/File.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/Path.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Set.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/StandardJavaFileManager$PathFactory.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $PathArray = $Array<::java::nio::file::Path>;
using $ClientCodeWrapper = ::com::sun::tools::javac::api::ClientCodeWrapper;
using $ClientCodeWrapper$WrappedJavaFileManager = ::com::sun::tools::javac::api::ClientCodeWrapper$WrappedJavaFileManager;
using $ClientCodeException = ::com::sun::tools::javac::util::ClientCodeException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Path = ::java::nio::file::Path;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Set = ::java::util::Set;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $StandardJavaFileManager = ::javax::tools::StandardJavaFileManager;
using $StandardJavaFileManager$PathFactory = ::javax::tools::StandardJavaFileManager$PathFactory;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$NamedAttribute ClientCodeWrapper$WrappedStandardJavaFileManager_Attribute_var$0[] = {
	{"since", 's', "13"},
	{}
};

$CompoundAttribute _ClientCodeWrapper$WrappedStandardJavaFileManager_MethodAnnotations_getJavaFileObjectsFromPaths7[] = {
	{"Ljava/lang/Deprecated;", ClientCodeWrapper$WrappedStandardJavaFileManager_Attribute_var$0},
	{}
};

$FieldInfo _ClientCodeWrapper$WrappedStandardJavaFileManager_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/api/ClientCodeWrapper;", nullptr, $FINAL | $SYNTHETIC, $field(ClientCodeWrapper$WrappedStandardJavaFileManager, this$0)},
	{}
};

$MethodInfo _ClientCodeWrapper$WrappedStandardJavaFileManager_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC},
	{"*contains", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/FileObject;)Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flush", "()V", nullptr, $PUBLIC},
	{"*getClassLoader", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/ClassLoader;", nullptr, $PUBLIC},
	{"*getFileForInput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/lang/String;)Ljavax/tools/FileObject;", nullptr, $PUBLIC},
	{"*getFileForOutput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/lang/String;Ljavax/tools/FileObject;)Ljavax/tools/FileObject;", nullptr, $PUBLIC},
	{"*getJavaFileForInput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC},
	{"*getJavaFileForOutput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;Ljavax/tools/FileObject;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC},
	{"*getLocationForModule", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;)Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC},
	{"*getLocationForModule", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/JavaFileObject;)Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC},
	{"*getServiceLoader", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/Class;)Ljava/util/ServiceLoader;", nullptr, $PUBLIC},
	{"*handleOption", "(Ljava/lang/String;Ljava/util/Iterator;)Z", nullptr, $PUBLIC},
	{"*hasLocation", "(Ljavax/tools/JavaFileManager$Location;)Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*inferBinaryName", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/JavaFileObject;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*inferModuleName", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"<init>", "(Lcom/sun/tools/javac/api/ClientCodeWrapper;Ljavax/tools/StandardJavaFileManager;)V", nullptr, 0, $method(static_cast<void(ClientCodeWrapper$WrappedStandardJavaFileManager::*)($ClientCodeWrapper*,$StandardJavaFileManager*)>(&ClientCodeWrapper$WrappedStandardJavaFileManager::init$))},
	{"asPath", "(Ljavax/tools/FileObject;)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"getJavaFileObjects", "([Ljava/io/File;)Ljava/lang/Iterable;", "([Ljava/io/File;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC | $TRANSIENT},
	{"getJavaFileObjects", "([Ljava/nio/file/Path;)Ljava/lang/Iterable;", "([Ljava/nio/file/Path;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC | $TRANSIENT},
	{"getJavaFileObjects", "([Ljava/lang/String;)Ljava/lang/Iterable;", "([Ljava/lang/String;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC | $TRANSIENT},
	{"getJavaFileObjectsFromFiles", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<+Ljava/io/File;>;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC},
	{"getJavaFileObjectsFromPaths", "(Ljava/util/Collection;)Ljava/lang/Iterable;", "(Ljava/util/Collection<+Ljava/nio/file/Path;>;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC},
	{"getJavaFileObjectsFromPaths", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _ClientCodeWrapper$WrappedStandardJavaFileManager_MethodAnnotations_getJavaFileObjectsFromPaths7},
	{"getJavaFileObjectsFromStrings", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<Ljava/lang/String;>;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC},
	{"getLocation", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable<+Ljava/io/File;>;", $PUBLIC},
	{"getLocationAsPaths", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable<+Ljava/nio/file/Path;>;", $PUBLIC},
	{"*isSameFile", "(Ljavax/tools/FileObject;Ljavax/tools/FileObject;)Z", nullptr, $PUBLIC},
	{"*isSupportedOption", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"*list", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Set;Z)Ljava/lang/Iterable;", nullptr, $PUBLIC},
	{"*listLocationsForModules", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable;", nullptr, $PUBLIC},
	{"setLocation", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/Iterable;)V", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/Iterable<+Ljava/io/File;>;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"setLocationForModule", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Collection;)V", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Collection<+Ljava/nio/file/Path;>;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"setLocationFromPaths", "(Ljavax/tools/JavaFileManager$Location;Ljava/util/Collection;)V", "(Ljavax/tools/JavaFileManager$Location;Ljava/util/Collection<+Ljava/nio/file/Path;>;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"setPathFactory", "(Ljavax/tools/StandardJavaFileManager$PathFactory;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ClientCodeWrapper$WrappedStandardJavaFileManager_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.ClientCodeWrapper$WrappedStandardJavaFileManager", "com.sun.tools.javac.api.ClientCodeWrapper", "WrappedStandardJavaFileManager", $PROTECTED},
	{"com.sun.tools.javac.api.ClientCodeWrapper$WrappedJavaFileManager", "com.sun.tools.javac.api.ClientCodeWrapper", "WrappedJavaFileManager", $PROTECTED},
	{}
};

$ClassInfo _ClientCodeWrapper$WrappedStandardJavaFileManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.api.ClientCodeWrapper$WrappedStandardJavaFileManager",
	"com.sun.tools.javac.api.ClientCodeWrapper$WrappedJavaFileManager",
	"javax.tools.StandardJavaFileManager",
	_ClientCodeWrapper$WrappedStandardJavaFileManager_FieldInfo_,
	_ClientCodeWrapper$WrappedStandardJavaFileManager_MethodInfo_,
	nullptr,
	nullptr,
	_ClientCodeWrapper$WrappedStandardJavaFileManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.ClientCodeWrapper"
};

$Object* allocate$ClientCodeWrapper$WrappedStandardJavaFileManager($Class* clazz) {
	return $of($alloc(ClientCodeWrapper$WrappedStandardJavaFileManager));
}

$ClassLoader* ClientCodeWrapper$WrappedStandardJavaFileManager::getClassLoader($JavaFileManager$Location* location) {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::getClassLoader(location);
}

$Iterable* ClientCodeWrapper$WrappedStandardJavaFileManager::list($JavaFileManager$Location* location, $String* packageName, $Set* kinds, bool recurse) {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::list(location, packageName, kinds, recurse);
}

$String* ClientCodeWrapper$WrappedStandardJavaFileManager::inferBinaryName($JavaFileManager$Location* location, $JavaFileObject* file) {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::inferBinaryName(location, file);
}

bool ClientCodeWrapper$WrappedStandardJavaFileManager::isSameFile($FileObject* a, $FileObject* b) {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::isSameFile(a, b);
}

bool ClientCodeWrapper$WrappedStandardJavaFileManager::handleOption($String* current, $Iterator* remaining) {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::handleOption(current, remaining);
}

bool ClientCodeWrapper$WrappedStandardJavaFileManager::hasLocation($JavaFileManager$Location* location) {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::hasLocation(location);
}

$JavaFileObject* ClientCodeWrapper$WrappedStandardJavaFileManager::getJavaFileForInput($JavaFileManager$Location* location, $String* className, $JavaFileObject$Kind* kind) {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::getJavaFileForInput(location, className, kind);
}

$JavaFileObject* ClientCodeWrapper$WrappedStandardJavaFileManager::getJavaFileForOutput($JavaFileManager$Location* location, $String* className, $JavaFileObject$Kind* kind, $FileObject* sibling) {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::getJavaFileForOutput(location, className, kind, sibling);
}

$FileObject* ClientCodeWrapper$WrappedStandardJavaFileManager::getFileForInput($JavaFileManager$Location* location, $String* packageName, $String* relativeName) {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::getFileForInput(location, packageName, relativeName);
}

$FileObject* ClientCodeWrapper$WrappedStandardJavaFileManager::getFileForOutput($JavaFileManager$Location* location, $String* packageName, $String* relativeName, $FileObject* sibling) {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::getFileForOutput(location, packageName, relativeName, sibling);
}

bool ClientCodeWrapper$WrappedStandardJavaFileManager::contains($JavaFileManager$Location* location, $FileObject* file) {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::contains(location, file);
}

void ClientCodeWrapper$WrappedStandardJavaFileManager::flush() {
	this->$ClientCodeWrapper$WrappedJavaFileManager::flush();
}

void ClientCodeWrapper$WrappedStandardJavaFileManager::close() {
	this->$ClientCodeWrapper$WrappedJavaFileManager::close();
}

$JavaFileManager$Location* ClientCodeWrapper$WrappedStandardJavaFileManager::getLocationForModule($JavaFileManager$Location* location, $String* moduleName) {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::getLocationForModule(location, moduleName);
}

$JavaFileManager$Location* ClientCodeWrapper$WrappedStandardJavaFileManager::getLocationForModule($JavaFileManager$Location* location, $JavaFileObject* fo) {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::getLocationForModule(location, fo);
}

$String* ClientCodeWrapper$WrappedStandardJavaFileManager::inferModuleName($JavaFileManager$Location* location) {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::inferModuleName(location);
}

$Iterable* ClientCodeWrapper$WrappedStandardJavaFileManager::listLocationsForModules($JavaFileManager$Location* location) {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::listLocationsForModules(location);
}

int32_t ClientCodeWrapper$WrappedStandardJavaFileManager::isSupportedOption($String* option) {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::isSupportedOption(option);
}

$String* ClientCodeWrapper$WrappedStandardJavaFileManager::toString() {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::toString();
}

$ServiceLoader* ClientCodeWrapper$WrappedStandardJavaFileManager::getServiceLoader($JavaFileManager$Location* location, $Class* service) {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::getServiceLoader(location, service);
}

int32_t ClientCodeWrapper$WrappedStandardJavaFileManager::hashCode() {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::hashCode();
}

bool ClientCodeWrapper$WrappedStandardJavaFileManager::equals(Object$* arg0) {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::equals(arg0);
}

$Object* ClientCodeWrapper$WrappedStandardJavaFileManager::clone() {
	 return this->$ClientCodeWrapper$WrappedJavaFileManager::clone();
}

void ClientCodeWrapper$WrappedStandardJavaFileManager::finalize() {
	this->$ClientCodeWrapper$WrappedJavaFileManager::finalize();
}

void ClientCodeWrapper$WrappedStandardJavaFileManager::init$($ClientCodeWrapper* this$0, $StandardJavaFileManager* clientJavaFileManager) {
	$set(this, this$0, this$0);
	$ClientCodeWrapper$WrappedJavaFileManager::init$(this$0, clientJavaFileManager);
}

$Iterable* ClientCodeWrapper$WrappedStandardJavaFileManager::getJavaFileObjectsFromFiles($Iterable* files) {
	try {
		return $nc(($cast($StandardJavaFileManager, this->clientJavaFileManager)))->getJavaFileObjectsFromFiles(files);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$Iterable* ClientCodeWrapper$WrappedStandardJavaFileManager::getJavaFileObjectsFromPaths($Collection* paths) {
	try {
		return $nc(($cast($StandardJavaFileManager, this->clientJavaFileManager)))->getJavaFileObjectsFromPaths(paths);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$Iterable* ClientCodeWrapper$WrappedStandardJavaFileManager::getJavaFileObjectsFromPaths($Iterable* paths) {
	try {
		return $nc(($cast($StandardJavaFileManager, this->clientJavaFileManager)))->getJavaFileObjectsFromPaths(paths);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$Iterable* ClientCodeWrapper$WrappedStandardJavaFileManager::getJavaFileObjects($FileArray* files) {
	try {
		return $nc(($cast($StandardJavaFileManager, this->clientJavaFileManager)))->getJavaFileObjects(files);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$Iterable* ClientCodeWrapper$WrappedStandardJavaFileManager::getJavaFileObjects($PathArray* paths) {
	try {
		return $nc(($cast($StandardJavaFileManager, this->clientJavaFileManager)))->getJavaFileObjects(paths);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$Iterable* ClientCodeWrapper$WrappedStandardJavaFileManager::getJavaFileObjectsFromStrings($Iterable* names) {
	try {
		return $nc(($cast($StandardJavaFileManager, this->clientJavaFileManager)))->getJavaFileObjectsFromStrings(names);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$Iterable* ClientCodeWrapper$WrappedStandardJavaFileManager::getJavaFileObjects($StringArray* names) {
	try {
		return $nc(($cast($StandardJavaFileManager, this->clientJavaFileManager)))->getJavaFileObjects(names);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

void ClientCodeWrapper$WrappedStandardJavaFileManager::setLocation($JavaFileManager$Location* location, $Iterable* files) {
	try {
		$nc(($cast($StandardJavaFileManager, this->clientJavaFileManager)))->setLocation(location, files);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
}

void ClientCodeWrapper$WrappedStandardJavaFileManager::setLocationFromPaths($JavaFileManager$Location* location, $Collection* paths) {
	try {
		$nc(($cast($StandardJavaFileManager, this->clientJavaFileManager)))->setLocationFromPaths(location, paths);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
}

$Iterable* ClientCodeWrapper$WrappedStandardJavaFileManager::getLocation($JavaFileManager$Location* location) {
	try {
		return $nc(($cast($StandardJavaFileManager, this->clientJavaFileManager)))->getLocation(location);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$Iterable* ClientCodeWrapper$WrappedStandardJavaFileManager::getLocationAsPaths($JavaFileManager$Location* location) {
	try {
		return $nc(($cast($StandardJavaFileManager, this->clientJavaFileManager)))->getLocationAsPaths(location);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$Path* ClientCodeWrapper$WrappedStandardJavaFileManager::asPath($FileObject* file) {
	try {
		return $nc(($cast($StandardJavaFileManager, this->clientJavaFileManager)))->asPath(file);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

void ClientCodeWrapper$WrappedStandardJavaFileManager::setPathFactory($StandardJavaFileManager$PathFactory* f) {
	try {
		$nc(($cast($StandardJavaFileManager, this->clientJavaFileManager)))->setPathFactory(f);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
}

void ClientCodeWrapper$WrappedStandardJavaFileManager::setLocationForModule($JavaFileManager$Location* location, $String* moduleName, $Collection* paths) {
	try {
		$nc($System::out)->println("invoking wrapped setLocationForModule"_s);
		$nc(($cast($StandardJavaFileManager, this->clientJavaFileManager)))->setLocationForModule(location, moduleName, paths);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
}

ClientCodeWrapper$WrappedStandardJavaFileManager::ClientCodeWrapper$WrappedStandardJavaFileManager() {
}

$Class* ClientCodeWrapper$WrappedStandardJavaFileManager::load$($String* name, bool initialize) {
	$loadClass(ClientCodeWrapper$WrappedStandardJavaFileManager, name, initialize, &_ClientCodeWrapper$WrappedStandardJavaFileManager_ClassInfo_, allocate$ClientCodeWrapper$WrappedStandardJavaFileManager);
	return class$;
}

$Class* ClientCodeWrapper$WrappedStandardJavaFileManager::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com