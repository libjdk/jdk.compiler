#include <com/sun/tools/javac/launcher/Main$MemoryClassLoader.h>

#include <com/sun/tools/javac/launcher/Main$MemoryClassLoader$1.h>
#include <com/sun/tools/javac/launcher/Main$MemoryClassLoader$MemoryURLStreamHandler.h>
#include <com/sun/tools/javac/launcher/Main.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/net/URLStreamHandler.h>
#include <java/nio/file/Path.h>
#include <java/security/CodeSigner.h>
#include <java/security/CodeSource.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Principal.h>
#include <java/security/ProtectionDomain.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef DOT_CLASS_LENGTH
#undef PROTOCOL

using $CodeSignerArray = $Array<::java::security::CodeSigner>;
using $PrincipalArray = $Array<::java::security::Principal>;
using $Main = ::com::sun::tools::javac::launcher::Main;
using $Main$MemoryClassLoader$1 = ::com::sun::tools::javac::launcher::Main$MemoryClassLoader$1;
using $Main$MemoryClassLoader$MemoryURLStreamHandler = ::com::sun::tools::javac::launcher::Main$MemoryClassLoader$MemoryURLStreamHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $URLStreamHandler = ::java::net::URLStreamHandler;
using $Path = ::java::nio::file::Path;
using $CodeSigner = ::java::security::CodeSigner;
using $CodeSource = ::java::security::CodeSource;
using $PermissionCollection = ::java::security::PermissionCollection;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

$FieldInfo _Main$MemoryClassLoader_FieldInfo_[] = {
	{"sourceFileClasses", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;[B>;", $PRIVATE | $FINAL, $field(Main$MemoryClassLoader, sourceFileClasses)},
	{"domain", "Ljava/security/ProtectionDomain;", nullptr, $PRIVATE | $FINAL, $field(Main$MemoryClassLoader, domain)},
	{"DOT_CLASS_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Main$MemoryClassLoader, DOT_CLASS_LENGTH)},
	{"PROTOCOL", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Main$MemoryClassLoader, PROTOCOL)},
	{"handler", "Ljava/net/URLStreamHandler;", nullptr, $PRIVATE, $field(Main$MemoryClassLoader, handler)},
	{}
};

$MethodInfo _Main$MemoryClassLoader_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Map;Ljava/lang/ClassLoader;Ljava/nio/file/Path;)V", "(Ljava/util/Map<Ljava/lang/String;[B>;Ljava/lang/ClassLoader;Ljava/nio/file/Path;)V", 0, $method(static_cast<void(Main$MemoryClassLoader::*)($Map*,$ClassLoader*,$Path*)>(&Main$MemoryClassLoader::init$))},
	{"findClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PROTECTED, nullptr, "java.lang.ClassNotFoundException"},
	{"findResource", "(Ljava/lang/String;)Ljava/net/URL;", nullptr, $PUBLIC},
	{"findResources", "(Ljava/lang/String;)Ljava/util/Enumeration;", "(Ljava/lang/String;)Ljava/util/Enumeration<Ljava/net/URL;>;", $PUBLIC},
	{"getResource", "(Ljava/lang/String;)Ljava/net/URL;", nullptr, $PUBLIC},
	{"getResources", "(Ljava/lang/String;)Ljava/util/Enumeration;", "(Ljava/lang/String;)Ljava/util/Enumeration<Ljava/net/URL;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;", "(Ljava/lang/String;Z)Ljava/lang/Class<*>;", $PROTECTED, nullptr, "java.lang.ClassNotFoundException"},
	{"toBinaryName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Main$MemoryClassLoader::*)($String*)>(&Main$MemoryClassLoader::toBinaryName))},
	{}
};

$InnerClassInfo _Main$MemoryClassLoader_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.launcher.Main$MemoryClassLoader", "com.sun.tools.javac.launcher.Main", "MemoryClassLoader", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.launcher.Main$MemoryClassLoader$MemoryURLConnection", "com.sun.tools.javac.launcher.Main$MemoryClassLoader", "MemoryURLConnection", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.launcher.Main$MemoryClassLoader$MemoryURLStreamHandler", "com.sun.tools.javac.launcher.Main$MemoryClassLoader", "MemoryURLStreamHandler", $PRIVATE},
	{"com.sun.tools.javac.launcher.Main$MemoryClassLoader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Main$MemoryClassLoader_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.launcher.Main$MemoryClassLoader",
	"java.lang.ClassLoader",
	nullptr,
	_Main$MemoryClassLoader_FieldInfo_,
	_Main$MemoryClassLoader_MethodInfo_,
	nullptr,
	nullptr,
	_Main$MemoryClassLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.launcher.Main"
};

$Object* allocate$Main$MemoryClassLoader($Class* clazz) {
	return $of($alloc(Main$MemoryClassLoader));
}

int32_t Main$MemoryClassLoader::DOT_CLASS_LENGTH = 0;

void Main$MemoryClassLoader::init$($Map* sourceFileClasses, $ClassLoader* parent, $Path* file) {
	$useLocalCurrentObjectStackCache();
	$ClassLoader::init$(parent);
	$var($String, var$0, $$str({"sourcelauncher-"_s, $($of(this)->getClass()->getSimpleName())}));
	$set(this, PROTOCOL, $concat(var$0, $$str(hashCode())));
	$set(this, sourceFileClasses, sourceFileClasses);
	$var($CodeSource, codeSource, nullptr);
	try {
		$assign(codeSource, $new($CodeSource, $($nc($($nc(file)->toUri()))->toURL()), ($CodeSignerArray*)nullptr));
	} catch ($MalformedURLException& e) {
		$assign(codeSource, nullptr);
	}
	$set(this, domain, $new($ProtectionDomain, codeSource, nullptr, this, nullptr));
}

$Class* Main$MemoryClassLoader::loadClass($String* name, bool resolve) {
	$beforeCallerSensitive();
	$synchronized(getClassLoadingLock(name)) {
		$Class* c = findLoadedClass(name);
		if (c == nullptr) {
			if ($nc(this->sourceFileClasses)->containsKey(name)) {
				c = findClass(name);
			} else {
				c = $nc($(getParent()))->loadClass(name);
			}
			if (resolve) {
				resolveClass(c);
			}
		}
		return c;
	}
}

$URL* Main$MemoryClassLoader::getResource($String* name) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($nc(this->sourceFileClasses)->containsKey($(toBinaryName(name)))) {
		return findResource(name);
	} else {
		return $nc($(getParent()))->getResource(name);
	}
}

$Enumeration* Main$MemoryClassLoader::getResources($String* name) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($URL, u, findResource(name));
	$var($Enumeration, e, $nc($(getParent()))->getResources(name));
	if (u == nullptr) {
		return e;
	} else {
		$var($List, list, $new($ArrayList));
		list->add(u);
		while ($nc(e)->hasMoreElements()) {
			list->add($cast($URL, $(e->nextElement())));
		}
		return $Collections::enumeration(list);
	}
}

$Class* Main$MemoryClassLoader::findClass($String* name) {
	$var($bytes, bytes, $cast($bytes, $nc(this->sourceFileClasses)->get(name)));
	if (bytes == nullptr) {
		$throwNew($ClassNotFoundException, name);
	}
	return defineClass(name, bytes, 0, $nc(bytes)->length, this->domain);
}

$URL* Main$MemoryClassLoader::findResource($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($String, binaryName, toBinaryName(name));
	if (binaryName == nullptr || $nc(this->sourceFileClasses)->get(binaryName) == nullptr) {
		return nullptr;
	}
	$var($URLStreamHandler, handler, this->handler);
	if (handler == nullptr) {
		$set(this, handler, ($assign(handler, $new($Main$MemoryClassLoader$MemoryURLStreamHandler, this))));
	}
	try {
		return $new($URL, this->PROTOCOL, nullptr, -1, name, handler);
	} catch ($MalformedURLException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$Enumeration* Main$MemoryClassLoader::findResources($String* name) {
	return $new($Main$MemoryClassLoader$1, this, name);
}

$String* Main$MemoryClassLoader::toBinaryName($String* name) {
	if (!$nc(name)->endsWith(".class"_s)) {
		return nullptr;
	}
	return $($nc(name)->substring(0, name->length() - Main$MemoryClassLoader::DOT_CLASS_LENGTH))->replace(u'/', u'.');
}

void clinit$Main$MemoryClassLoader($Class* class$) {
	Main$MemoryClassLoader::DOT_CLASS_LENGTH = ".class"_s->length();
}

Main$MemoryClassLoader::Main$MemoryClassLoader() {
}

$Class* Main$MemoryClassLoader::load$($String* name, bool initialize) {
	$loadClass(Main$MemoryClassLoader, name, initialize, &_Main$MemoryClassLoader_ClassInfo_, clinit$Main$MemoryClassLoader, allocate$Main$MemoryClassLoader);
	return class$;
}

$Class* Main$MemoryClassLoader::class$ = nullptr;

				} // launcher
			} // javac
		} // tools
	} // sun
} // com