#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager.h>

#include <javax/tools/ForwardingJavaFileManager.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/StandardLocation.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper.h>
#include <jcpp.h>

#undef PATCH_LOCATION
#undef PATCH_MODULE_PATH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ForwardingJavaFileManager = ::javax::tools::ForwardingJavaFileManager;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $StandardLocation = ::javax::tools::StandardLocation;
using $JavadocHelper$OnDemandJavadocHelper = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper;
using $JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1 = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

$FieldInfo _JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager_FieldInfo_[] = {
	{"file", "Ljavax/tools/JavaFileObject;", nullptr, $PRIVATE | $FINAL, $field(JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager, file)},
	{"moduleName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager, moduleName)},
	{"PATCH_LOCATION", "Ljavax/tools/JavaFileManager$Location;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager, PATCH_LOCATION)},
	{}
};

$MethodInfo _JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager_MethodInfo_[] = {
	{"<init>", "(Ljavax/tools/JavaFileManager;Ljavax/tools/JavaFileObject;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager::*)($JavaFileManager*,$JavaFileObject*,$String*)>(&JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager::init$))},
	{"getLocationForModule", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/JavaFileObject;)Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"hasLocation", "(Ljavax/tools/JavaFileManager$Location;)Z", nullptr, $PUBLIC},
	{"inferModuleName", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager_InnerClassesInfo_[] = {
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper", "jdk.internal.shellsupport.doc.JavadocHelper", "OnDemandJavadocHelper", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager", "jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper", "PatchModuleFileManager", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager",
	"javax.tools.ForwardingJavaFileManager",
	nullptr,
	_JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager_FieldInfo_,
	_JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager_MethodInfo_,
	"Ljavax/tools/ForwardingJavaFileManager<Ljavax/tools/JavaFileManager;>;",
	nullptr,
	_JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.shellsupport.doc.JavadocHelper"
};

$Object* allocate$JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager($Class* clazz) {
	return $of($alloc(JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager));
}

$JavaFileManager$Location* JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager::PATCH_LOCATION = nullptr;

void JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager::init$($JavaFileManager* fileManager, $JavaFileObject* file, $String* moduleName) {
	$ForwardingJavaFileManager::init$(fileManager);
	$set(this, file, file);
	$set(this, moduleName, moduleName);
}

$JavaFileManager$Location* JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager::getLocationForModule($JavaFileManager$Location* location, $JavaFileObject* fo) {
	return fo == this->file ? JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager::PATCH_LOCATION : $ForwardingJavaFileManager::getLocationForModule(location, fo);
}

$String* JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager::inferModuleName($JavaFileManager$Location* location) {
	return location == JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager::PATCH_LOCATION ? this->moduleName : $ForwardingJavaFileManager::inferModuleName(location);
}

bool JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager::hasLocation($JavaFileManager$Location* location) {
	$init($StandardLocation);
	return $equals(location, $StandardLocation::PATCH_MODULE_PATH) || $ForwardingJavaFileManager::hasLocation(location);
}

void clinit$JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager($Class* class$) {
	$assignStatic(JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager::PATCH_LOCATION, $new($JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1));
}

JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager::JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager() {
}

$Class* JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager, name, initialize, &_JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager_ClassInfo_, clinit$JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager, allocate$JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager);
	return class$;
}

$Class* JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk