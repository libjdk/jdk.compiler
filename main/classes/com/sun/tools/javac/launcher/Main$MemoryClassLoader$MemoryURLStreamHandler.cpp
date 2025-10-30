#include <com/sun/tools/javac/launcher/Main$MemoryClassLoader$MemoryURLStreamHandler.h>

#include <com/sun/tools/javac/launcher/Main$MemoryClassLoader$MemoryURLConnection.h>
#include <com/sun/tools/javac/launcher/Main$MemoryClassLoader.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/URLStreamHandler.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef PROTOCOL

using $Main$MemoryClassLoader = ::com::sun::tools::javac::launcher::Main$MemoryClassLoader;
using $Main$MemoryClassLoader$MemoryURLConnection = ::com::sun::tools::javac::launcher::Main$MemoryClassLoader$MemoryURLConnection;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $URLStreamHandler = ::java::net::URLStreamHandler;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

$FieldInfo _Main$MemoryClassLoader$MemoryURLStreamHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/launcher/Main$MemoryClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(Main$MemoryClassLoader$MemoryURLStreamHandler, this$0)},
	{}
};

$MethodInfo _Main$MemoryClassLoader$MemoryURLStreamHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/launcher/Main$MemoryClassLoader;)V", nullptr, $PRIVATE, $method(static_cast<void(Main$MemoryClassLoader$MemoryURLStreamHandler::*)($Main$MemoryClassLoader*)>(&Main$MemoryClassLoader$MemoryURLStreamHandler::init$))},
	{"openConnection", "(Ljava/net/URL;)Ljava/net/URLConnection;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Main$MemoryClassLoader$MemoryURLStreamHandler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.launcher.Main$MemoryClassLoader", "com.sun.tools.javac.launcher.Main", "MemoryClassLoader", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.launcher.Main$MemoryClassLoader$MemoryURLStreamHandler", "com.sun.tools.javac.launcher.Main$MemoryClassLoader", "MemoryURLStreamHandler", $PRIVATE},
	{}
};

$ClassInfo _Main$MemoryClassLoader$MemoryURLStreamHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.launcher.Main$MemoryClassLoader$MemoryURLStreamHandler",
	"java.net.URLStreamHandler",
	nullptr,
	_Main$MemoryClassLoader$MemoryURLStreamHandler_FieldInfo_,
	_Main$MemoryClassLoader$MemoryURLStreamHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Main$MemoryClassLoader$MemoryURLStreamHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.launcher.Main"
};

$Object* allocate$Main$MemoryClassLoader$MemoryURLStreamHandler($Class* clazz) {
	return $of($alloc(Main$MemoryClassLoader$MemoryURLStreamHandler));
}

void Main$MemoryClassLoader$MemoryURLStreamHandler::init$($Main$MemoryClassLoader* this$0) {
	$set(this, this$0, this$0);
	$URLStreamHandler::init$();
}

$URLConnection* Main$MemoryClassLoader$MemoryURLStreamHandler::openConnection($URL* u) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($($nc(u)->getProtocol()))->equalsIgnoreCase(this->this$0->PROTOCOL)) {
		$throwNew($IllegalArgumentException, $(u->toString()));
	}
	return $new($Main$MemoryClassLoader$MemoryURLConnection, u, $cast($bytes, $($nc(this->this$0->sourceFileClasses)->get($(this->this$0->toBinaryName($($nc(u)->getPath())))))));
}

Main$MemoryClassLoader$MemoryURLStreamHandler::Main$MemoryClassLoader$MemoryURLStreamHandler() {
}

$Class* Main$MemoryClassLoader$MemoryURLStreamHandler::load$($String* name, bool initialize) {
	$loadClass(Main$MemoryClassLoader$MemoryURLStreamHandler, name, initialize, &_Main$MemoryClassLoader$MemoryURLStreamHandler_ClassInfo_, allocate$Main$MemoryClassLoader$MemoryURLStreamHandler);
	return class$;
}

$Class* Main$MemoryClassLoader$MemoryURLStreamHandler::class$ = nullptr;

				} // launcher
			} // javac
		} // tools
	} // sun
} // com