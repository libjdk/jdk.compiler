#include <com/sun/tools/javac/api/ClientCodeWrapper$WrappedJavaFileManager.h>

#include <com/sun/tools/javac/api/ClientCodeWrapper.h>
#include <com/sun/tools/javac/util/ClientCodeException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Set.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/OptionChecker.h>
#include <jcpp.h>

using $ClientCodeWrapper = ::com::sun::tools::javac::api::ClientCodeWrapper;
using $ClientCodeException = ::com::sun::tools::javac::util::ClientCodeException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Set = ::java::util::Set;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $OptionChecker = ::javax::tools::OptionChecker;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _ClientCodeWrapper$WrappedJavaFileManager_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/api/ClientCodeWrapper;", nullptr, $FINAL | $SYNTHETIC, $field(ClientCodeWrapper$WrappedJavaFileManager, this$0)},
	{"clientJavaFileManager", "Ljavax/tools/JavaFileManager;", nullptr, $PROTECTED, $field(ClientCodeWrapper$WrappedJavaFileManager, clientJavaFileManager)},
	{}
};

$MethodInfo _ClientCodeWrapper$WrappedJavaFileManager_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/ClientCodeWrapper;Ljavax/tools/JavaFileManager;)V", nullptr, 0, $method(static_cast<void(ClientCodeWrapper$WrappedJavaFileManager::*)($ClientCodeWrapper*,$JavaFileManager*)>(&ClientCodeWrapper$WrappedJavaFileManager::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"contains", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/FileObject;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
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
	{"isSameFile", "(Ljavax/tools/FileObject;Ljavax/tools/FileObject;)Z", nullptr, $PUBLIC},
	{"isSupportedOption", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"list", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Set;Z)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Set<Ljavax/tools/JavaFileObject$Kind;>;Z)Ljava/lang/Iterable<Ljavax/tools/JavaFileObject;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"listLocationsForModules", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable<Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ClientCodeWrapper$WrappedJavaFileManager_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.ClientCodeWrapper$WrappedJavaFileManager", "com.sun.tools.javac.api.ClientCodeWrapper", "WrappedJavaFileManager", $PROTECTED},
	{}
};

$ClassInfo _ClientCodeWrapper$WrappedJavaFileManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.api.ClientCodeWrapper$WrappedJavaFileManager",
	"java.lang.Object",
	"javax.tools.JavaFileManager",
	_ClientCodeWrapper$WrappedJavaFileManager_FieldInfo_,
	_ClientCodeWrapper$WrappedJavaFileManager_MethodInfo_,
	nullptr,
	nullptr,
	_ClientCodeWrapper$WrappedJavaFileManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.ClientCodeWrapper"
};

$Object* allocate$ClientCodeWrapper$WrappedJavaFileManager($Class* clazz) {
	return $of($alloc(ClientCodeWrapper$WrappedJavaFileManager));
}

void ClientCodeWrapper$WrappedJavaFileManager::init$($ClientCodeWrapper* this$0, $JavaFileManager* clientJavaFileManager) {
	$set(this, this$0, this$0);
	$set(this, clientJavaFileManager, $cast($JavaFileManager, $Objects::requireNonNull(clientJavaFileManager)));
}

$ClassLoader* ClientCodeWrapper$WrappedJavaFileManager::getClassLoader($JavaFileManager$Location* location) {
	try {
		return $nc(this->clientJavaFileManager)->getClassLoader(location);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$Iterable* ClientCodeWrapper$WrappedJavaFileManager::list($JavaFileManager$Location* location, $String* packageName, $Set* kinds, bool recurse) {
	try {
		return this->this$0->wrapJavaFileObjects($($nc(this->clientJavaFileManager)->list(location, packageName, kinds, recurse)));
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$String* ClientCodeWrapper$WrappedJavaFileManager::inferBinaryName($JavaFileManager$Location* location, $JavaFileObject* file) {
	try {
		return $nc(this->clientJavaFileManager)->inferBinaryName(location, $(this->this$0->unwrap(file)));
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

bool ClientCodeWrapper$WrappedJavaFileManager::isSameFile($FileObject* a, $FileObject* b) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($FileObject, var$0, this->this$0->unwrap(a));
		return $nc(this->clientJavaFileManager)->isSameFile(var$0, $(this->this$0->unwrap(b)));
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

bool ClientCodeWrapper$WrappedJavaFileManager::handleOption($String* current, $Iterator* remaining) {
	try {
		return $nc(this->clientJavaFileManager)->handleOption(current, remaining);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

bool ClientCodeWrapper$WrappedJavaFileManager::hasLocation($JavaFileManager$Location* location) {
	try {
		return $nc(this->clientJavaFileManager)->hasLocation(location);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$JavaFileObject* ClientCodeWrapper$WrappedJavaFileManager::getJavaFileForInput($JavaFileManager$Location* location, $String* className, $JavaFileObject$Kind* kind) {
	try {
		return this->this$0->wrap($($nc(this->clientJavaFileManager)->getJavaFileForInput(location, className, kind)));
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$JavaFileObject* ClientCodeWrapper$WrappedJavaFileManager::getJavaFileForOutput($JavaFileManager$Location* location, $String* className, $JavaFileObject$Kind* kind, $FileObject* sibling) {
	$useLocalCurrentObjectStackCache();
	try {
		return this->this$0->wrap($($nc(this->clientJavaFileManager)->getJavaFileForOutput(location, className, kind, $(this->this$0->unwrap(sibling)))));
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$FileObject* ClientCodeWrapper$WrappedJavaFileManager::getFileForInput($JavaFileManager$Location* location, $String* packageName, $String* relativeName) {
	try {
		return this->this$0->wrap($($nc(this->clientJavaFileManager)->getFileForInput(location, packageName, relativeName)));
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$FileObject* ClientCodeWrapper$WrappedJavaFileManager::getFileForOutput($JavaFileManager$Location* location, $String* packageName, $String* relativeName, $FileObject* sibling) {
	$useLocalCurrentObjectStackCache();
	try {
		return this->this$0->wrap($($nc(this->clientJavaFileManager)->getFileForOutput(location, packageName, relativeName, $(this->this$0->unwrap(sibling)))));
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

bool ClientCodeWrapper$WrappedJavaFileManager::contains($JavaFileManager$Location* location, $FileObject* file) {
	try {
		return $nc(this->clientJavaFileManager)->contains(location, $(this->this$0->unwrap(file)));
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

void ClientCodeWrapper$WrappedJavaFileManager::flush() {
	try {
		$nc(this->clientJavaFileManager)->flush();
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
}

void ClientCodeWrapper$WrappedJavaFileManager::close() {
	try {
		$nc(this->clientJavaFileManager)->close();
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
}

$JavaFileManager$Location* ClientCodeWrapper$WrappedJavaFileManager::getLocationForModule($JavaFileManager$Location* location, $String* moduleName) {
	try {
		return $nc(this->clientJavaFileManager)->getLocationForModule(location, moduleName);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$JavaFileManager$Location* ClientCodeWrapper$WrappedJavaFileManager::getLocationForModule($JavaFileManager$Location* location, $JavaFileObject* fo) {
	try {
		return $nc(this->clientJavaFileManager)->getLocationForModule(location, $(this->this$0->unwrap(fo)));
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$String* ClientCodeWrapper$WrappedJavaFileManager::inferModuleName($JavaFileManager$Location* location) {
	try {
		return $nc(this->clientJavaFileManager)->inferModuleName(location);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$Iterable* ClientCodeWrapper$WrappedJavaFileManager::listLocationsForModules($JavaFileManager$Location* location) {
	try {
		return $nc(this->clientJavaFileManager)->listLocationsForModules(location);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

int32_t ClientCodeWrapper$WrappedJavaFileManager::isSupportedOption($String* option) {
	try {
		return $nc(this->clientJavaFileManager)->isSupportedOption(option);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$String* ClientCodeWrapper$WrappedJavaFileManager::toString() {
	return this->this$0->wrappedToString($of(this)->getClass(), this->clientJavaFileManager);
}

$ServiceLoader* ClientCodeWrapper$WrappedJavaFileManager::getServiceLoader($JavaFileManager$Location* location, $Class* service) {
	try {
		return $nc(this->clientJavaFileManager)->getServiceLoader(location, service);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

ClientCodeWrapper$WrappedJavaFileManager::ClientCodeWrapper$WrappedJavaFileManager() {
}

$Class* ClientCodeWrapper$WrappedJavaFileManager::load$($String* name, bool initialize) {
	$loadClass(ClientCodeWrapper$WrappedJavaFileManager, name, initialize, &_ClientCodeWrapper$WrappedJavaFileManager_ClassInfo_, allocate$ClientCodeWrapper$WrappedJavaFileManager);
	return class$;
}

$Class* ClientCodeWrapper$WrappedJavaFileManager::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com