#include <com/sun/tools/javac/file/PathFileObject$JarFileObject.h>

#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/file/PathFileObject$CannotCreateUriError.h>
#include <com/sun/tools/javac/file/PathFileObject.h>
#include <java/lang/Iterable.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/Path.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $PathFileObject = ::com::sun::tools::javac::file::PathFileObject;
using $PathFileObject$CannotCreateUriError = ::com::sun::tools::javac::file::PathFileObject$CannotCreateUriError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $FileSystem = ::java::nio::file::FileSystem;
using $Path = ::java::nio::file::Path;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _PathFileObject$JarFileObject_FieldInfo_[] = {
	{"userJarPath", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(PathFileObject$JarFileObject, userJarPath)},
	{}
};

$MethodInfo _PathFileObject$JarFileObject_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/BaseFileManager;Ljava/nio/file/Path;Ljava/nio/file/Path;)V", nullptr, $PRIVATE, $method(static_cast<void(PathFileObject$JarFileObject::*)($BaseFileManager*,$Path*,$Path*)>(&PathFileObject$JarFileObject::init$))},
	{"createJarUri", "(Ljava/nio/file/Path;Ljava/lang/String;)Ljava/net/URI;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$URI*(*)($Path*,$String*)>(&PathFileObject$JarFileObject::createJarUri))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSibling", "(Ljava/lang/String;)Lcom/sun/tools/javac/file/PathFileObject;", nullptr, 0},
	{"inferBinaryName", "(Ljava/lang/Iterable;)Ljava/lang/String;", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)Ljava/lang/String;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toUri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PathFileObject$JarFileObject_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.PathFileObject$JarFileObject", "com.sun.tools.javac.file.PathFileObject", "JarFileObject", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PathFileObject$JarFileObject_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.PathFileObject$JarFileObject",
	"com.sun.tools.javac.file.PathFileObject",
	nullptr,
	_PathFileObject$JarFileObject_FieldInfo_,
	_PathFileObject$JarFileObject_MethodInfo_,
	nullptr,
	nullptr,
	_PathFileObject$JarFileObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.PathFileObject"
};

$Object* allocate$PathFileObject$JarFileObject($Class* clazz) {
	return $of($alloc(PathFileObject$JarFileObject));
}

void PathFileObject$JarFileObject::init$($BaseFileManager* fileManager, $Path* path, $Path* userJarPath) {
	$PathFileObject::init$(fileManager, path);
	$set(this, userJarPath, userJarPath);
}

$String* PathFileObject$JarFileObject::getName() {
	return $str({this->userJarPath, "("_s, this->path, ")"_s});
}

$String* PathFileObject$JarFileObject::inferBinaryName($Iterable* paths) {
	$useLocalCurrentObjectStackCache();
	$var($Path, root, $cast($Path, $nc($($nc($($nc($($nc(this->path)->getFileSystem()))->getRootDirectories()))->iterator()))->next()));
	return toBinaryName($($nc(root)->relativize(this->path)));
}

$URI* PathFileObject$JarFileObject::toUri() {
	return createJarUri(this->userJarPath, $($nc(this->path)->toString()));
}

$String* PathFileObject$JarFileObject::toString() {
	return $str({"JarFileObject["_s, this->userJarPath, ":"_s, this->path, "]"_s});
}

$PathFileObject* PathFileObject$JarFileObject::getSibling($String* baseName) {
	return $new(PathFileObject$JarFileObject, this->fileManager, $($nc(this->path)->resolveSibling(baseName)), this->userJarPath);
}

$URI* PathFileObject$JarFileObject::createJarUri($Path* jarFile, $String* entryName) {
	$init(PathFileObject$JarFileObject);
	$useLocalCurrentObjectStackCache();
	$var($URI, jarURI, $nc($($nc(jarFile)->toUri()))->normalize());
	$var($String, separator, $nc(entryName)->startsWith("/"_s) ? "!"_s : "!/"_s);
	try {
		return $new($URI, $$str({"jar:"_s, jarURI, separator, entryName}));
	} catch ($URISyntaxException& e) {
		$throwNew($PathFileObject$CannotCreateUriError, $$str({jarURI, separator, entryName}), e);
	}
	$shouldNotReachHere();
}

PathFileObject$JarFileObject::PathFileObject$JarFileObject() {
}

$Class* PathFileObject$JarFileObject::load$($String* name, bool initialize) {
	$loadClass(PathFileObject$JarFileObject, name, initialize, &_PathFileObject$JarFileObject_ClassInfo_, allocate$PathFileObject$JarFileObject);
	return class$;
}

$Class* PathFileObject$JarFileObject::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com