#include <com/sun/tools/javac/launcher/Main$Context.h>

#include <com/sun/tools/javac/launcher/Main$MemoryClassLoader.h>
#include <com/sun/tools/javac/launcher/Main$MemoryFileManager.h>
#include <com/sun/tools/javac/launcher/Main.h>
#include <java/lang/ClassLoader.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/tools/ForwardingJavaFileManager.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <jcpp.h>

using $Main = ::com::sun::tools::javac::launcher::Main;
using $Main$MemoryClassLoader = ::com::sun::tools::javac::launcher::Main$MemoryClassLoader;
using $Main$MemoryFileManager = ::com::sun::tools::javac::launcher::Main$MemoryFileManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $ForwardingJavaFileManager = ::javax::tools::ForwardingJavaFileManager;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $StandardJavaFileManager = ::javax::tools::StandardJavaFileManager;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

$FieldInfo _Main$Context_FieldInfo_[] = {
	{"file", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(Main$Context, file)},
	{"inMemoryClasses", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;[B>;", $PRIVATE | $FINAL, $field(Main$Context, inMemoryClasses)},
	{}
};

$MethodInfo _Main$Context_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, 0, $method(static_cast<void(Main$Context::*)($Path*)>(&Main$Context::init$))},
	{"getClassLoader", "(Ljava/lang/ClassLoader;)Ljava/lang/ClassLoader;", nullptr, 0},
	{"getFileManager", "(Ljavax/tools/StandardJavaFileManager;)Ljavax/tools/JavaFileManager;", nullptr, 0},
	{}
};

$InnerClassInfo _Main$Context_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.launcher.Main$Context", "com.sun.tools.javac.launcher.Main", "Context", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Main$Context_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.launcher.Main$Context",
	"java.lang.Object",
	nullptr,
	_Main$Context_FieldInfo_,
	_Main$Context_MethodInfo_,
	nullptr,
	nullptr,
	_Main$Context_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.launcher.Main"
};

$Object* allocate$Main$Context($Class* clazz) {
	return $of($alloc(Main$Context));
}

void Main$Context::init$($Path* file) {
	$set(this, inMemoryClasses, $new($HashMap));
	$set(this, file, file);
}

$JavaFileManager* Main$Context::getFileManager($StandardJavaFileManager* delegate) {
	return $new($Main$MemoryFileManager, this->inMemoryClasses, delegate);
}

$ClassLoader* Main$Context::getClassLoader($ClassLoader* parent) {
	return $new($Main$MemoryClassLoader, this->inMemoryClasses, parent, this->file);
}

Main$Context::Main$Context() {
}

$Class* Main$Context::load$($String* name, bool initialize) {
	$loadClass(Main$Context, name, initialize, &_Main$Context_ClassInfo_, allocate$Main$Context);
	return class$;
}

$Class* Main$Context::class$ = nullptr;

				} // launcher
			} // javac
		} // tools
	} // sun
} // com