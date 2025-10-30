#include <com/sun/tools/javac/api/WrappingJavaFileManager.h>

#include <java/lang/Iterable.h>
#include <java/net/URI.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/ForwardingJavaFileManager.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $FileObject = ::javax::tools::FileObject;
using $ForwardingJavaFileManager = ::javax::tools::ForwardingJavaFileManager;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$MethodInfo _WrappingJavaFileManager_MethodInfo_[] = {
	{"<init>", "(Ljavax/tools/JavaFileManager;)V", "(TM;)V", $PROTECTED, $method(static_cast<void(WrappingJavaFileManager::*)($JavaFileManager*)>(&WrappingJavaFileManager::init$))},
	{"contains", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/FileObject;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileForInput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/lang/String;)Ljavax/tools/FileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileForOutput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/lang/String;Ljavax/tools/FileObject;)Ljavax/tools/FileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getJavaFileForInput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getJavaFileForOutput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;Ljavax/tools/FileObject;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"inferBinaryName", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/JavaFileObject;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"list", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Set;Z)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Set<Ljavax/tools/JavaFileObject$Kind;>;Z)Ljava/lang/Iterable<Ljavax/tools/JavaFileObject;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"unwrap", "(Ljavax/tools/FileObject;)Ljavax/tools/FileObject;", nullptr, $PROTECTED},
	{"unwrap", "(Ljavax/tools/JavaFileObject;)Ljavax/tools/JavaFileObject;", nullptr, $PROTECTED},
	{"unwrap", "(Ljava/net/URI;)Ljava/net/URI;", nullptr, $PROTECTED},
	{"wrap", "(Ljavax/tools/FileObject;)Ljavax/tools/FileObject;", nullptr, $PROTECTED},
	{"wrap", "(Ljavax/tools/JavaFileObject;)Ljavax/tools/JavaFileObject;", nullptr, $PROTECTED},
	{"wrap", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<Ljavax/tools/JavaFileObject;>;)Ljava/lang/Iterable<Ljavax/tools/JavaFileObject;>;", $PROTECTED},
	{}
};

$ClassInfo _WrappingJavaFileManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.api.WrappingJavaFileManager",
	"javax.tools.ForwardingJavaFileManager",
	nullptr,
	nullptr,
	_WrappingJavaFileManager_MethodInfo_,
	"<M::Ljavax/tools/JavaFileManager;>Ljavax/tools/ForwardingJavaFileManager<TM;>;"
};

$Object* allocate$WrappingJavaFileManager($Class* clazz) {
	return $of($alloc(WrappingJavaFileManager));
}

void WrappingJavaFileManager::init$($JavaFileManager* fileManager) {
	$ForwardingJavaFileManager::init$(fileManager);
}

$FileObject* WrappingJavaFileManager::wrap($FileObject* fileObject) {
	return fileObject;
}

$JavaFileObject* WrappingJavaFileManager::wrap($JavaFileObject* fileObject) {
	return $cast($JavaFileObject, wrap(static_cast<$FileObject*>(fileObject)));
}

$FileObject* WrappingJavaFileManager::unwrap($FileObject* fileObject) {
	return fileObject;
}

$JavaFileObject* WrappingJavaFileManager::unwrap($JavaFileObject* fileObject) {
	return $cast($JavaFileObject, unwrap(static_cast<$FileObject*>(fileObject)));
}

$Iterable* WrappingJavaFileManager::wrap($Iterable* fileObjects) {
	$useLocalCurrentObjectStackCache();
	$var($List, mapped, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(fileObjects)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JavaFileObject, fileObject, $cast($JavaFileObject, i$->next()));
			mapped->add($(wrap(fileObject)));
		}
	}
	return $Collections::unmodifiableList(mapped);
}

$URI* WrappingJavaFileManager::unwrap($URI* uri) {
	return uri;
}

$Iterable* WrappingJavaFileManager::list($JavaFileManager$Location* location, $String* packageName, $Set* kinds, bool recurse) {
	return wrap($($ForwardingJavaFileManager::list(location, packageName, kinds, recurse)));
}

$String* WrappingJavaFileManager::inferBinaryName($JavaFileManager$Location* location, $JavaFileObject* file) {
	return $ForwardingJavaFileManager::inferBinaryName(location, $(unwrap(file)));
}

$JavaFileObject* WrappingJavaFileManager::getJavaFileForInput($JavaFileManager$Location* location, $String* className, $JavaFileObject$Kind* kind) {
	return wrap($($ForwardingJavaFileManager::getJavaFileForInput(location, className, kind)));
}

$JavaFileObject* WrappingJavaFileManager::getJavaFileForOutput($JavaFileManager$Location* location, $String* className, $JavaFileObject$Kind* kind, $FileObject* sibling) {
	$useLocalCurrentObjectStackCache();
	return wrap($($ForwardingJavaFileManager::getJavaFileForOutput(location, className, kind, $(unwrap(sibling)))));
}

$FileObject* WrappingJavaFileManager::getFileForInput($JavaFileManager$Location* location, $String* packageName, $String* relativeName) {
	return wrap($($ForwardingJavaFileManager::getFileForInput(location, packageName, relativeName)));
}

$FileObject* WrappingJavaFileManager::getFileForOutput($JavaFileManager$Location* location, $String* packageName, $String* relativeName, $FileObject* sibling) {
	$useLocalCurrentObjectStackCache();
	return wrap($($ForwardingJavaFileManager::getFileForOutput(location, packageName, relativeName, $(unwrap(sibling)))));
}

bool WrappingJavaFileManager::contains($JavaFileManager$Location* location, $FileObject* file) {
	return $ForwardingJavaFileManager::contains(location, $(unwrap(file)));
}

WrappingJavaFileManager::WrappingJavaFileManager() {
}

$Class* WrappingJavaFileManager::load$($String* name, bool initialize) {
	$loadClass(WrappingJavaFileManager, name, initialize, &_WrappingJavaFileManager_ClassInfo_, allocate$WrappingJavaFileManager);
	return class$;
}

$Class* WrappingJavaFileManager::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com