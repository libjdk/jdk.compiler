#include <com/sun/tools/javac/main/DelegatingJavaFileManager.h>

#include <com/sun/tools/javac/main/DelegatingJavaFileManager$DelegatingSJFM.h>
#include <com/sun/tools/javac/util/Context.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Set.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/OptionChecker.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <jcpp.h>

using $DelegatingJavaFileManager$DelegatingSJFM = ::com::sun::tools::javac::main::DelegatingJavaFileManager$DelegatingSJFM;
using $Context = ::com::sun::tools::javac::util::Context;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Set = ::java::util::Set;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $OptionChecker = ::javax::tools::OptionChecker;
using $StandardJavaFileManager = ::javax::tools::StandardJavaFileManager;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$FieldInfo _DelegatingJavaFileManager_FieldInfo_[] = {
	{"releaseFM", "Ljavax/tools/JavaFileManager;", nullptr, $PRIVATE | $FINAL, $field(DelegatingJavaFileManager, releaseFM)},
	{"baseFM", "Ljavax/tools/JavaFileManager;", nullptr, $PRIVATE | $FINAL, $field(DelegatingJavaFileManager, baseFM)},
	{}
};

$MethodInfo _DelegatingJavaFileManager_MethodInfo_[] = {
	{"<init>", "(Ljavax/tools/JavaFileManager;Ljavax/tools/JavaFileManager;)V", nullptr, $PRIVATE, $method(static_cast<void(DelegatingJavaFileManager::*)($JavaFileManager*,$JavaFileManager*)>(&DelegatingJavaFileManager::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"contains", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/FileObject;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"delegate", "(Ljavax/tools/JavaFileManager$Location;)Ljavax/tools/JavaFileManager;", nullptr, $PRIVATE, $method(static_cast<$JavaFileManager*(DelegatingJavaFileManager::*)($JavaFileManager$Location*)>(&DelegatingJavaFileManager::delegate))},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getBaseFileManager", "()Ljavax/tools/JavaFileManager;", nullptr, $PUBLIC},
	{"getClassLoader", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/ClassLoader;", nullptr, $PUBLIC},
	{"getFileForInput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/lang/String;)Ljavax/tools/FileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileForOutput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/lang/String;Ljavax/tools/FileObject;)Ljavax/tools/FileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getJavaFileForInput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getJavaFileForOutput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;Ljavax/tools/FileObject;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getLocationForModule", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;)Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getLocationForModule", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/JavaFileObject;)Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getServiceLoader", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/Class;)Ljava/util/ServiceLoader;", "<S:Ljava/lang/Object;>(Ljavax/tools/JavaFileManager$Location;Ljava/lang/Class<TS;>;)Ljava/util/ServiceLoader<TS;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"handleOption", "(Ljava/lang/String;Ljava/util/Iterator;)Z", "(Ljava/lang/String;Ljava/util/Iterator<Ljava/lang/String;>;)Z", $PUBLIC},
	{"hasLocation", "(Ljavax/tools/JavaFileManager$Location;)Z", nullptr, $PUBLIC},
	{"inferBinaryName", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/JavaFileObject;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"inferModuleName", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"installReleaseFileManager", "(Lcom/sun/tools/javac/util/Context;Ljavax/tools/JavaFileManager;Ljavax/tools/JavaFileManager;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Context*,$JavaFileManager*,$JavaFileManager*)>(&DelegatingJavaFileManager::installReleaseFileManager))},
	{"isSameFile", "(Ljavax/tools/FileObject;Ljavax/tools/FileObject;)Z", nullptr, $PUBLIC},
	{"isSupportedOption", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"list", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Set;Z)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Set<Ljavax/tools/JavaFileObject$Kind;>;Z)Ljava/lang/Iterable<Ljavax/tools/JavaFileObject;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"listLocationsForModules", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable<Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _DelegatingJavaFileManager_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.DelegatingJavaFileManager$DelegatingSJFM", "com.sun.tools.javac.main.DelegatingJavaFileManager", "DelegatingSJFM", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _DelegatingJavaFileManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.main.DelegatingJavaFileManager",
	"java.lang.Object",
	"javax.tools.JavaFileManager",
	_DelegatingJavaFileManager_FieldInfo_,
	_DelegatingJavaFileManager_MethodInfo_,
	nullptr,
	nullptr,
	_DelegatingJavaFileManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.DelegatingJavaFileManager$DelegatingSJFM"
};

$Object* allocate$DelegatingJavaFileManager($Class* clazz) {
	return $of($alloc(DelegatingJavaFileManager));
}

void DelegatingJavaFileManager::installReleaseFileManager($Context* context, $JavaFileManager* releaseFM, $JavaFileManager* originalFM) {
	$init(DelegatingJavaFileManager);
	$useLocalCurrentObjectStackCache();
	$load($JavaFileManager);
	$nc(context)->put($JavaFileManager::class$, ($JavaFileManager*)nullptr);
	$var($StandardJavaFileManager, standardJavaFileManager, nullptr);
	bool var$0 = $instanceOf($StandardJavaFileManager, originalFM);
	if (var$0) {
		$assign(standardJavaFileManager, $cast($StandardJavaFileManager, originalFM));
		var$0 = true;
	}
	$var($JavaFileManager, nue, var$0 ? static_cast<$JavaFileManager*>(static_cast<DelegatingJavaFileManager*>($new($DelegatingJavaFileManager$DelegatingSJFM, releaseFM, standardJavaFileManager))) : static_cast<$JavaFileManager*>($new(DelegatingJavaFileManager, releaseFM, originalFM)));
	context->put($JavaFileManager::class$, $of(nue));
}

void DelegatingJavaFileManager::init$($JavaFileManager* releaseFM, $JavaFileManager* baseFM) {
	$set(this, releaseFM, releaseFM);
	$set(this, baseFM, baseFM);
}

$JavaFileManager* DelegatingJavaFileManager::delegate($JavaFileManager$Location* location) {
	if ($nc(this->releaseFM)->hasLocation(location)) {
		return this->releaseFM;
	}
	return this->baseFM;
}

$ClassLoader* DelegatingJavaFileManager::getClassLoader($JavaFileManager$Location* location) {
	return $nc($(delegate(location)))->getClassLoader(location);
}

$Iterable* DelegatingJavaFileManager::list($JavaFileManager$Location* location, $String* packageName, $Set* kinds, bool recurse) {
	return $nc($(delegate(location)))->list(location, packageName, kinds, recurse);
}

$String* DelegatingJavaFileManager::inferBinaryName($JavaFileManager$Location* location, $JavaFileObject* file) {
	return $nc($(delegate(location)))->inferBinaryName(location, file);
}

bool DelegatingJavaFileManager::isSameFile($FileObject* a, $FileObject* b) {
	return $nc(this->baseFM)->isSameFile(a, b);
}

bool DelegatingJavaFileManager::handleOption($String* current, $Iterator* remaining) {
	return $nc(this->baseFM)->handleOption(current, remaining);
}

bool DelegatingJavaFileManager::hasLocation($JavaFileManager$Location* location) {
	bool var$0 = $nc(this->releaseFM)->hasLocation(location);
	return var$0 || $nc(this->baseFM)->hasLocation(location);
}

$JavaFileObject* DelegatingJavaFileManager::getJavaFileForInput($JavaFileManager$Location* location, $String* className, $JavaFileObject$Kind* kind) {
	return $nc($(delegate(location)))->getJavaFileForInput(location, className, kind);
}

$JavaFileObject* DelegatingJavaFileManager::getJavaFileForOutput($JavaFileManager$Location* location, $String* className, $JavaFileObject$Kind* kind, $FileObject* sibling) {
	return $nc($(delegate(location)))->getJavaFileForOutput(location, className, kind, sibling);
}

$FileObject* DelegatingJavaFileManager::getFileForInput($JavaFileManager$Location* location, $String* packageName, $String* relativeName) {
	return $nc($(delegate(location)))->getFileForInput(location, packageName, relativeName);
}

$FileObject* DelegatingJavaFileManager::getFileForOutput($JavaFileManager$Location* location, $String* packageName, $String* relativeName, $FileObject* sibling) {
	return $nc($(delegate(location)))->getFileForOutput(location, packageName, relativeName, sibling);
}

void DelegatingJavaFileManager::flush() {
	$nc(this->releaseFM)->flush();
	$nc(this->baseFM)->flush();
}

void DelegatingJavaFileManager::close() {
	$nc(this->releaseFM)->close();
	$nc(this->baseFM)->close();
}

$JavaFileManager$Location* DelegatingJavaFileManager::getLocationForModule($JavaFileManager$Location* location, $String* moduleName) {
	return $nc($(delegate(location)))->getLocationForModule(location, moduleName);
}

$JavaFileManager$Location* DelegatingJavaFileManager::getLocationForModule($JavaFileManager$Location* location, $JavaFileObject* fo) {
	return $nc($(delegate(location)))->getLocationForModule(location, fo);
}

$ServiceLoader* DelegatingJavaFileManager::getServiceLoader($JavaFileManager$Location* location, $Class* service) {
	return $nc($(delegate(location)))->getServiceLoader(location, service);
}

$String* DelegatingJavaFileManager::inferModuleName($JavaFileManager$Location* location) {
	return $nc($(delegate(location)))->inferModuleName(location);
}

$Iterable* DelegatingJavaFileManager::listLocationsForModules($JavaFileManager$Location* location) {
	return $nc($(delegate(location)))->listLocationsForModules(location);
}

bool DelegatingJavaFileManager::contains($JavaFileManager$Location* location, $FileObject* fo) {
	return $nc($(delegate(location)))->contains(location, fo);
}

int32_t DelegatingJavaFileManager::isSupportedOption($String* option) {
	return $nc(this->baseFM)->isSupportedOption(option);
}

$JavaFileManager* DelegatingJavaFileManager::getBaseFileManager() {
	return this->baseFM;
}

DelegatingJavaFileManager::DelegatingJavaFileManager() {
}

$Class* DelegatingJavaFileManager::load$($String* name, bool initialize) {
	$loadClass(DelegatingJavaFileManager, name, initialize, &_DelegatingJavaFileManager_ClassInfo_, allocate$DelegatingJavaFileManager);
	return class$;
}

$Class* DelegatingJavaFileManager::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com