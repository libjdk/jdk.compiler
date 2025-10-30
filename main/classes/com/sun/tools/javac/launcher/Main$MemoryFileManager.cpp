#include <com/sun/tools/javac/launcher/Main$MemoryFileManager.h>

#include <com/sun/tools/javac/launcher/Main$MemoryFileManager$1.h>
#include <com/sun/tools/javac/launcher/Main.h>
#include <java/net/URI.h>
#include <java/util/Map.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/ForwardingJavaFileManager.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/SimpleJavaFileObject.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef CLASS
#undef CLASS_OUTPUT

using $Main = ::com::sun::tools::javac::launcher::Main;
using $Main$MemoryFileManager$1 = ::com::sun::tools::javac::launcher::Main$MemoryFileManager$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $Map = ::java::util::Map;
using $FileObject = ::javax::tools::FileObject;
using $ForwardingJavaFileManager = ::javax::tools::ForwardingJavaFileManager;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $SimpleJavaFileObject = ::javax::tools::SimpleJavaFileObject;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

$FieldInfo _Main$MemoryFileManager_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;[B>;", $PRIVATE | $FINAL, $field(Main$MemoryFileManager, map)},
	{}
};

$MethodInfo _Main$MemoryFileManager_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Map;Ljavax/tools/JavaFileManager;)V", "(Ljava/util/Map<Ljava/lang/String;[B>;Ljavax/tools/JavaFileManager;)V", 0, $method(static_cast<void(Main$MemoryFileManager::*)($Map*,$JavaFileManager*)>(&Main$MemoryFileManager::init$))},
	{"createInMemoryClassFile", "(Ljava/lang/String;)Ljavax/tools/JavaFileObject;", nullptr, $PRIVATE, $method(static_cast<$JavaFileObject*(Main$MemoryFileManager::*)($String*)>(&Main$MemoryFileManager::createInMemoryClassFile))},
	{"getJavaFileForOutput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;Ljavax/tools/FileObject;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Main$MemoryFileManager_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.launcher.Main$MemoryFileManager", "com.sun.tools.javac.launcher.Main", "MemoryFileManager", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.launcher.Main$MemoryFileManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Main$MemoryFileManager_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.launcher.Main$MemoryFileManager",
	"javax.tools.ForwardingJavaFileManager",
	nullptr,
	_Main$MemoryFileManager_FieldInfo_,
	_Main$MemoryFileManager_MethodInfo_,
	"Ljavax/tools/ForwardingJavaFileManager<Ljavax/tools/JavaFileManager;>;",
	nullptr,
	_Main$MemoryFileManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.launcher.Main"
};

$Object* allocate$Main$MemoryFileManager($Class* clazz) {
	return $of($alloc(Main$MemoryFileManager));
}

void Main$MemoryFileManager::init$($Map* map, $JavaFileManager* delegate) {
	$ForwardingJavaFileManager::init$(delegate);
	$set(this, map, map);
}

$JavaFileObject* Main$MemoryFileManager::getJavaFileForOutput($JavaFileManager$Location* location, $String* className, $JavaFileObject$Kind* kind, $FileObject* sibling) {
	$init($StandardLocation);
	$init($JavaFileObject$Kind);
	if ($equals(location, $StandardLocation::CLASS_OUTPUT) && kind == $JavaFileObject$Kind::CLASS) {
		return createInMemoryClassFile(className);
	} else {
		return $ForwardingJavaFileManager::getJavaFileForOutput(location, className, kind, sibling);
	}
}

$JavaFileObject* Main$MemoryFileManager::createInMemoryClassFile($String* className) {
	$useLocalCurrentObjectStackCache();
	$var($URI, uri, $URI::create($$str({"memory:///"_s, $($nc(className)->replace(u'.', u'/')), ".class"_s})));
	$init($JavaFileObject$Kind);
	return $new($Main$MemoryFileManager$1, this, uri, $JavaFileObject$Kind::CLASS, className);
}

Main$MemoryFileManager::Main$MemoryFileManager() {
}

$Class* Main$MemoryFileManager::load$($String* name, bool initialize) {
	$loadClass(Main$MemoryFileManager, name, initialize, &_Main$MemoryFileManager_ClassInfo_, allocate$Main$MemoryFileManager);
	return class$;
}

$Class* Main$MemoryFileManager::class$ = nullptr;

				} // launcher
			} // javac
		} // tools
	} // sun
} // com