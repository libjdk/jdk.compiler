#include <com/sun/tools/javac/main/DelegatingJavaFileManager$DelegatingSJFM.h>

#include <com/sun/tools/javac/main/DelegatingJavaFileManager.h>
#include <java/io/File.h>
#include <java/lang/ClassLoader.h>
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
using $DelegatingJavaFileManager = ::com::sun::tools::javac::main::DelegatingJavaFileManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
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
				namespace main {

$NamedAttribute DelegatingJavaFileManager$DelegatingSJFM_Attribute_var$0[] = {
	{"since", 's', "13"},
	{}
};

$CompoundAttribute _DelegatingJavaFileManager$DelegatingSJFM_MethodAnnotations_getJavaFileObjectsFromPaths7[] = {
	{"Ljava/lang/Deprecated;", DelegatingJavaFileManager$DelegatingSJFM_Attribute_var$0},
	{}
};

$FieldInfo _DelegatingJavaFileManager$DelegatingSJFM_FieldInfo_[] = {
	{"baseSJFM", "Ljavax/tools/StandardJavaFileManager;", nullptr, $PRIVATE | $FINAL, $field(DelegatingJavaFileManager$DelegatingSJFM, baseSJFM)},
	{}
};

$MethodInfo _DelegatingJavaFileManager$DelegatingSJFM_MethodInfo_[] = {
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
	{"<init>", "(Ljavax/tools/JavaFileManager;Ljavax/tools/StandardJavaFileManager;)V", nullptr, $PRIVATE, $method(static_cast<void(DelegatingJavaFileManager$DelegatingSJFM::*)($JavaFileManager*,$StandardJavaFileManager*)>(&DelegatingJavaFileManager$DelegatingSJFM::init$))},
	{"asPath", "(Ljavax/tools/FileObject;)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"getJavaFileObjects", "([Ljava/io/File;)Ljava/lang/Iterable;", "([Ljava/io/File;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC | $TRANSIENT},
	{"getJavaFileObjects", "([Ljava/nio/file/Path;)Ljava/lang/Iterable;", "([Ljava/nio/file/Path;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC | $TRANSIENT},
	{"getJavaFileObjects", "([Ljava/lang/String;)Ljava/lang/Iterable;", "([Ljava/lang/String;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC | $TRANSIENT},
	{"getJavaFileObjectsFromFiles", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<+Ljava/io/File;>;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC},
	{"getJavaFileObjectsFromPaths", "(Ljava/util/Collection;)Ljava/lang/Iterable;", "(Ljava/util/Collection<+Ljava/nio/file/Path;>;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC},
	{"getJavaFileObjectsFromPaths", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _DelegatingJavaFileManager$DelegatingSJFM_MethodAnnotations_getJavaFileObjectsFromPaths7},
	{"getJavaFileObjectsFromStrings", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<Ljava/lang/String;>;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC},
	{"getLocation", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable<+Ljava/io/File;>;", $PUBLIC},
	{"getLocationAsPaths", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable<+Ljava/nio/file/Path;>;", $PUBLIC},
	{"isSameFile", "(Ljavax/tools/FileObject;Ljavax/tools/FileObject;)Z", nullptr, $PUBLIC},
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

$InnerClassInfo _DelegatingJavaFileManager$DelegatingSJFM_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.DelegatingJavaFileManager$DelegatingSJFM", "com.sun.tools.javac.main.DelegatingJavaFileManager", "DelegatingSJFM", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _DelegatingJavaFileManager$DelegatingSJFM_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.main.DelegatingJavaFileManager$DelegatingSJFM",
	"com.sun.tools.javac.main.DelegatingJavaFileManager",
	"javax.tools.StandardJavaFileManager",
	_DelegatingJavaFileManager$DelegatingSJFM_FieldInfo_,
	_DelegatingJavaFileManager$DelegatingSJFM_MethodInfo_,
	nullptr,
	nullptr,
	_DelegatingJavaFileManager$DelegatingSJFM_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.DelegatingJavaFileManager"
};

$Object* allocate$DelegatingJavaFileManager$DelegatingSJFM($Class* clazz) {
	return $of($alloc(DelegatingJavaFileManager$DelegatingSJFM));
}

$ClassLoader* DelegatingJavaFileManager$DelegatingSJFM::getClassLoader($JavaFileManager$Location* location) {
	 return this->$DelegatingJavaFileManager::getClassLoader(location);
}

$Iterable* DelegatingJavaFileManager$DelegatingSJFM::list($JavaFileManager$Location* location, $String* packageName, $Set* kinds, bool recurse) {
	 return this->$DelegatingJavaFileManager::list(location, packageName, kinds, recurse);
}

$String* DelegatingJavaFileManager$DelegatingSJFM::inferBinaryName($JavaFileManager$Location* location, $JavaFileObject* file) {
	 return this->$DelegatingJavaFileManager::inferBinaryName(location, file);
}

bool DelegatingJavaFileManager$DelegatingSJFM::handleOption($String* current, $Iterator* remaining) {
	 return this->$DelegatingJavaFileManager::handleOption(current, remaining);
}

bool DelegatingJavaFileManager$DelegatingSJFM::hasLocation($JavaFileManager$Location* location) {
	 return this->$DelegatingJavaFileManager::hasLocation(location);
}

$JavaFileObject* DelegatingJavaFileManager$DelegatingSJFM::getJavaFileForInput($JavaFileManager$Location* location, $String* className, $JavaFileObject$Kind* kind) {
	 return this->$DelegatingJavaFileManager::getJavaFileForInput(location, className, kind);
}

$JavaFileObject* DelegatingJavaFileManager$DelegatingSJFM::getJavaFileForOutput($JavaFileManager$Location* location, $String* className, $JavaFileObject$Kind* kind, $FileObject* sibling) {
	 return this->$DelegatingJavaFileManager::getJavaFileForOutput(location, className, kind, sibling);
}

$FileObject* DelegatingJavaFileManager$DelegatingSJFM::getFileForInput($JavaFileManager$Location* location, $String* packageName, $String* relativeName) {
	 return this->$DelegatingJavaFileManager::getFileForInput(location, packageName, relativeName);
}

$FileObject* DelegatingJavaFileManager$DelegatingSJFM::getFileForOutput($JavaFileManager$Location* location, $String* packageName, $String* relativeName, $FileObject* sibling) {
	 return this->$DelegatingJavaFileManager::getFileForOutput(location, packageName, relativeName, sibling);
}

void DelegatingJavaFileManager$DelegatingSJFM::flush() {
	this->$DelegatingJavaFileManager::flush();
}

void DelegatingJavaFileManager$DelegatingSJFM::close() {
	this->$DelegatingJavaFileManager::close();
}

$JavaFileManager$Location* DelegatingJavaFileManager$DelegatingSJFM::getLocationForModule($JavaFileManager$Location* location, $String* moduleName) {
	 return this->$DelegatingJavaFileManager::getLocationForModule(location, moduleName);
}

$JavaFileManager$Location* DelegatingJavaFileManager$DelegatingSJFM::getLocationForModule($JavaFileManager$Location* location, $JavaFileObject* fo) {
	 return this->$DelegatingJavaFileManager::getLocationForModule(location, fo);
}

$ServiceLoader* DelegatingJavaFileManager$DelegatingSJFM::getServiceLoader($JavaFileManager$Location* location, $Class* service) {
	 return this->$DelegatingJavaFileManager::getServiceLoader(location, service);
}

$String* DelegatingJavaFileManager$DelegatingSJFM::inferModuleName($JavaFileManager$Location* location) {
	 return this->$DelegatingJavaFileManager::inferModuleName(location);
}

$Iterable* DelegatingJavaFileManager$DelegatingSJFM::listLocationsForModules($JavaFileManager$Location* location) {
	 return this->$DelegatingJavaFileManager::listLocationsForModules(location);
}

bool DelegatingJavaFileManager$DelegatingSJFM::contains($JavaFileManager$Location* location, $FileObject* fo) {
	 return this->$DelegatingJavaFileManager::contains(location, fo);
}

int32_t DelegatingJavaFileManager$DelegatingSJFM::isSupportedOption($String* option) {
	 return this->$DelegatingJavaFileManager::isSupportedOption(option);
}

int32_t DelegatingJavaFileManager$DelegatingSJFM::hashCode() {
	 return this->$DelegatingJavaFileManager::hashCode();
}

bool DelegatingJavaFileManager$DelegatingSJFM::equals(Object$* arg0) {
	 return this->$DelegatingJavaFileManager::equals(arg0);
}

$Object* DelegatingJavaFileManager$DelegatingSJFM::clone() {
	 return this->$DelegatingJavaFileManager::clone();
}

$String* DelegatingJavaFileManager$DelegatingSJFM::toString() {
	 return this->$DelegatingJavaFileManager::toString();
}

void DelegatingJavaFileManager$DelegatingSJFM::finalize() {
	this->$DelegatingJavaFileManager::finalize();
}

void DelegatingJavaFileManager$DelegatingSJFM::init$($JavaFileManager* releaseFM, $StandardJavaFileManager* baseSJFM) {
	$DelegatingJavaFileManager::init$(releaseFM, baseSJFM);
	$set(this, baseSJFM, baseSJFM);
}

bool DelegatingJavaFileManager$DelegatingSJFM::isSameFile($FileObject* a, $FileObject* b) {
	return $nc(this->baseSJFM)->isSameFile(a, b);
}

$Iterable* DelegatingJavaFileManager$DelegatingSJFM::getJavaFileObjectsFromFiles($Iterable* files) {
	return $nc(this->baseSJFM)->getJavaFileObjectsFromFiles(files);
}

$Iterable* DelegatingJavaFileManager$DelegatingSJFM::getJavaFileObjectsFromPaths($Collection* paths) {
	return $nc(this->baseSJFM)->getJavaFileObjectsFromPaths(paths);
}

$Iterable* DelegatingJavaFileManager$DelegatingSJFM::getJavaFileObjectsFromPaths($Iterable* paths) {
	return $nc(this->baseSJFM)->getJavaFileObjectsFromPaths(paths);
}

$Iterable* DelegatingJavaFileManager$DelegatingSJFM::getJavaFileObjects($FileArray* files) {
	return $nc(this->baseSJFM)->getJavaFileObjects(files);
}

$Iterable* DelegatingJavaFileManager$DelegatingSJFM::getJavaFileObjects($PathArray* paths) {
	return $nc(this->baseSJFM)->getJavaFileObjects(paths);
}

$Iterable* DelegatingJavaFileManager$DelegatingSJFM::getJavaFileObjectsFromStrings($Iterable* names) {
	return $nc(this->baseSJFM)->getJavaFileObjectsFromStrings(names);
}

$Iterable* DelegatingJavaFileManager$DelegatingSJFM::getJavaFileObjects($StringArray* names) {
	return $nc(this->baseSJFM)->getJavaFileObjects(names);
}

void DelegatingJavaFileManager$DelegatingSJFM::setLocation($JavaFileManager$Location* location, $Iterable* files) {
	$nc(this->baseSJFM)->setLocation(location, files);
}

void DelegatingJavaFileManager$DelegatingSJFM::setLocationFromPaths($JavaFileManager$Location* location, $Collection* paths) {
	$nc(this->baseSJFM)->setLocationFromPaths(location, paths);
}

void DelegatingJavaFileManager$DelegatingSJFM::setLocationForModule($JavaFileManager$Location* location, $String* moduleName, $Collection* paths) {
	$nc(this->baseSJFM)->setLocationForModule(location, moduleName, paths);
}

$Iterable* DelegatingJavaFileManager$DelegatingSJFM::getLocation($JavaFileManager$Location* location) {
	return $nc(this->baseSJFM)->getLocation(location);
}

$Iterable* DelegatingJavaFileManager$DelegatingSJFM::getLocationAsPaths($JavaFileManager$Location* location) {
	return $nc(this->baseSJFM)->getLocationAsPaths(location);
}

$Path* DelegatingJavaFileManager$DelegatingSJFM::asPath($FileObject* file) {
	return $nc(this->baseSJFM)->asPath(file);
}

void DelegatingJavaFileManager$DelegatingSJFM::setPathFactory($StandardJavaFileManager$PathFactory* f) {
	$nc(this->baseSJFM)->setPathFactory(f);
}

DelegatingJavaFileManager$DelegatingSJFM::DelegatingJavaFileManager$DelegatingSJFM() {
}

$Class* DelegatingJavaFileManager$DelegatingSJFM::load$($String* name, bool initialize) {
	$loadClass(DelegatingJavaFileManager$DelegatingSJFM, name, initialize, &_DelegatingJavaFileManager$DelegatingSJFM_ClassInfo_, allocate$DelegatingJavaFileManager$DelegatingSJFM);
	return class$;
}

$Class* DelegatingJavaFileManager$DelegatingSJFM::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com